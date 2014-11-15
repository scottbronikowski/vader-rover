(MODULE TOOLLIB-NETWORKING)
;;; LaHaShem HaAretz U'Mloah
;;; Copyright 1999 and 2000 NEC Research Institute, Inc. All rights reserved.

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-c-externals.sch")
(include "toollib-networking.sch")

;;; Structures

(define-structure server invocation hostname port input-port output-port)
(define-structure client invocation hostname port input-port output-port)

(define-structure invocation server result? result)

;;; Bindings

(define socket-bytes-available (c-function int ("socket_bytes_available" int)))

(define set-up-server (c-function void  ("set_up_server" int)))

(define accept-connection (c-function void ("accept_connection")))

(define get-peer0 (c-function int ("get_peer0")))

(define get-peer1 (c-function int ("get_peer1")))

(define get-peer2 (c-function int ("get_peer2")))

(define get-peer3 (c-function int ("get_peer3")))

(define get-in (c-function pointer ("get_in")))

(define get-out (c-function pointer ("get_out")))

(define get-socketfd (c-function int ("get_socketfd")))

(define close-socket (c-function int ("close_socket")))

(define open-connection-to-server
 (c-function void ("open_connection_to_server" string int)))

;; (define-c-external (fclose pointer) int "fclose")


;;; Variables

(define *services*
 (list (cons 'ping (lambda () 0))
       (cons 'shutdown (lambda () (exit 0)))))

(define *servers* '())

;;; Procedures

(define (define-service name procedure)
 (set! *services* (cons (cons name procedure) *services*)))

(define (define-server hostname port)
 (set! *servers* (cons (make-server #f hostname port #f #f) *servers*)))

(define (start-servers)
 (for-each
  (lambda (server)
   (system (format #f "/bin/bash -c \"rsh ~a ~a -port ~s&\""
		   (server-hostname server) *program* (server-port server))))
  *servers*)
 (for-each
  (lambda (server)
   (open-connection-to-server (server-hostname server) (server-port server))
   (set-server-input-port! server (make-file-port (get-in) "r"))
   (set-server-output-port! server (make-file-port (get-out) "w")))
  *servers*)
 (deresult (map (lambda (server) (invoke-on server 'ping)) *servers*)))

(define (shutdown-servers)
 (for-each (lambda (server) (invoke-on server 'shutdown)) *servers*)
 (for-each (lambda (server)
	    (close-input-port (server-input-port server))
	    (close-output-port (server-output-port server))
	    (set-server-invocation! server #f)
	    (set-server-input-port! server #f)
	    (set-server-output-port! server #f))
	   *servers*))

(define (server port)
 (set-up-server port)
 (accept-connection)
 (let ((input-port (make-file-port (get-in) "r"))
       (output-port (make-file-port (get-out) "w")))
  (let loop ()
   (let ((request (read input-port)))
    (when (eof-object? request) ((cdr (assq 'shutdown *services*))))
    (write
     (list (apply (cdr (assq (first request) *services*)) (rest request)))
     output-port))
   (flush-buffer output-port)
   (loop))))

(define (invoke-on server service . arguments)
 (when (server-invocation server)
  (let loop () (unless (char-ready? (server-input-port server)) (loop)))
  (let ((result (first (read (server-input-port server)))))
   (set-invocation-result! (server-invocation server) result)
   (set-invocation-result?! (server-invocation server) #t)))
 (set-server-invocation! server (make-invocation server #f #f))
 (write (cons service arguments) (server-output-port server))
 (flush-buffer (server-output-port server))
 (server-invocation server))

(define (invoke service . arguments)
 (let ((server (find-if-not server-invocation *servers*)))
  (if server
      (apply invoke-on server service arguments)
      (let loop ()
       (let ((server (find-if (lambda (server)
			       (char-ready? (server-input-port server)))
			      *servers*)))
	(if server
	    (let ((result (first (read (server-input-port server)))))
	     (set-invocation-result! (server-invocation server) result)
	     (set-invocation-result?! (server-invocation server) #t)
	     (set-server-invocation! server #f)
	     (apply invoke-on server service arguments))
	    (loop)))))))

(define (result invocation)
 (if (invocation-result? invocation)
     (invocation-result invocation)
     (let ((result
	    (first
	     (read (server-input-port (invocation-server invocation))))))
      (set-invocation-result! invocation result)
      (set-invocation-result?! invocation #t)
      (set-server-invocation! (invocation-server invocation) #f)
      result)))

(define (deresult x)
 ;; This doesn't preserve identity. And it breaks with circular objects.
 ;; And strings can't contain invocations. And this can't deresult closures.
 (cond ((invocation? x) (result x))
       ((pair? x) (cons (deresult (car x)) (deresult (cdr x))))
       ((vector? x) (map-vector deresult x))
       (else x)))

(define (get-peer)
 (format #f "~s.~s.~s.~s" (get-peer0) (get-peer1) (get-peer2) (get-peer3)))

(define (open-http-stream hostname port pathname)
 (open-connection-to-server hostname port)
 (let ((input-port (make-file-port (get-in) "r"))
       (output-port (make-file-port (get-out) "w")))
  (format output-port "GET /~a HTTP/1.0~%" pathname)
  (newline output-port)
  (flush-buffer output-port)
  (let ((line (read-line input-port)))
   (when (eof-object? line) (panic "Cannot open URL"))
   (unless (= (string->number (field-ref line 1)) 200)
    (panic "Cannot open URL")))
  (let loop ()
   (let ((line (read-line input-port)))
    (when (eof-object? line) (panic "Cannot open URL"))
    (unless (string=? line "") (loop))))
  input-port))

(define (url-hostname url)
 (unless (and (string? url)
	      (>= (string-length url) 7)
	      (string=? (substring url 0 7) "http://"))
  (panic "Invalid URL"))
 (substring
  url
  7
  (if (member #\/ (string->list (substring url 7 (string-length url))))
      (if (member #\: (string->list (substring url 7 (string-length url))))
	  (+ (min (position
		   #\/ (string->list (substring url 7 (string-length url))))
		  (position
		   #\: (string->list (substring url 7 (string-length url)))))
	     7)
	  (+ (position
	      #\/ (string->list (substring url 7 (string-length url))))
	     7))
      (if (member #\: (string->list (substring url 7 (string-length url))))
	  (+ (position
	      #\: (string->list (substring url 7 (string-length url))))
	     7)
	  (string-length url)))))

(define (url-port url)
 (unless (and (string? url)
	      (>= (string-length url) 7)
	      (string=? (substring url 0 7) "http://"))
  (panic "Invalid URL"))
 (if (member #\/ (string->list (substring url 7 (string-length url))))
     (if (member #\: (string->list (substring url 7 (string-length url))))
	 (if (< (position
		 #\: (string->list (substring url 7 (string-length url))))
		(position
		 #\/ (string->list (substring url 7 (string-length url)))))
	     (let ((port
		    (string->number
		     (substring
		      url
		      (+ (position
			  #\:
			  (string->list (substring url 7 (string-length url))))
			 8)
		      (+ (position
			  #\/
			  (string->list (substring url 7 (string-length url))))
			 7)))))
	      (unless port (panic "Invalid URL"))
	      port)
	     80)
	 80)
     (if (member #\: (string->list (substring url 7 (string-length url))))
	 (let ((port
		(string->number
		 (substring
		  url
		  (+ (position
		      #\: (string->list (substring url 7 (string-length url))))
		     8)
		  (string-length url)))))
	  (unless port (panic "Invalid URL"))
	  port)
	 80)))

(define (url-pathname url)
 (unless (and (string? url)
	      (>= (string-length url) 7)
	      (string=? (substring url 0 7) "http://"))
  (panic "Invalid URL"))
 (if (member #\/ (string->list (substring url 7 (string-length url))))
     (substring url
		(+ (position
		    #\/ (string->list (substring url 7 (string-length url))))
		   8)
		(string-length url))
     ""))

(define (open-input-url url)
 (open-http-stream (url-hostname url) (url-port url) (url-pathname url)))

(define (call-with-input-url url proc)
 (let* ((input-port (open-input-url url))
	(r (proc input-port)))
  (close-input-port input-port)
  r))

(define (read-url url)
 (call-with-input-url
  url
  (lambda (port)
   (let loop ((lines '()) (line (read-line port)))
    (if (eof-object? line)
	(reverse lines)
	(loop (cons line lines) (read-line port)))))))

(define (read-object-from-url url) (call-with-input-url url read))

;; LD

(define (read-line-segments-from-url url)
 (define (read-line-segments-from-port port)
  (let loop ((l '()))
   (let* ((x1 (read port))
	  (y1 (read port))
	  (x2 (read port))
	  (y2 (read port)))
    (if (eof-object? y2)
	(reverse l)
	(loop (cons (make-line-segment (vector x1 y1) (vector x2 y2)) l))))))
 (call-with-input-url
  (default-extension url "lines") read-line-segments-from-port))

(define (read-pnm-from-url url)
 (define (read-pnm port)
  (define (read-pbm raw?)
   (let* ((width (read port))
	  (height (read port))
	  (bitmap (make-matrix height width 0)))
    ;; note: This CALL/CC might break on Linux/x86.
    (call-with-current-continuation
     (lambda (return)
      (cond
       (raw? (panic "Cannot (yet) read a raw pbm image"))
       (else
	(for-each-n (lambda (y)
		     (for-each-n (lambda (x)
				  (let ((v (read port)))
				   (when (eof-object? v) (return #f))
				   ;; Yes, it really is the case (at least
				   ;; according to xv) that 0 means white and
				   ;; 1 means black for ascii pbm images.
				   (matrix-set! bitmap y x (zero? v))))
				 width))
		    height)))))
    (make-pbm raw? bitmap)))
  (define (read-pgm raw?)
   (let* ((width (read port))
	  (height (read port))
	  (maxval (read port))
	  (size (* width height))
	  (grey (make-matrix height width 0)))
    ;; note: This CALL/CC might break on Linux/x86.
    (call-with-current-continuation
     (lambda (return)
      (cond (raw? (read-char port)
		  (for-each-n
		   (lambda (y)
		    (for-each-n (lambda (x)
				 (let ((c (read-char port)))
				  (when (eof-object? c) (return #f))
				  (matrix-set! grey y x (char->integer c))))
				width))
		   height))
	    (else (for-each-n (lambda (y)
			       (for-each-n (lambda (x)
					    (let ((v (read port)))
					     (when (eof-object? v) (return #f))
					     (matrix-set! grey y x v)))
					   width))
			      height)))))
    (make-pgm raw? maxval grey)))
  (define (read-ppm raw?)
   (let* ((width (read port))
	  (height (read port))
	  (maxval (read port))
	  (size (* width height))
	  (red (make-matrix height width 0))
	  (green (make-matrix height width 0))
	  (blue (make-matrix height width 0)))
    ;; note: This CALL/CC might break on Linux/x86.
    (call-with-current-continuation
     (lambda (return)
      (cond (raw? (read-char port)
		  (for-each-n
		   (lambda (y)
		    (for-each-n
		     (lambda (x)
		      (let* ((c1 (read-char port))
			     (c2 (read-char port))
			     (c3 (read-char port)))
		       (when (eof-object? c1) (return #f))
		       (matrix-set! red y x (char->integer c1))
		       (matrix-set! green y x (char->integer c2))
		       (matrix-set! blue y x (char->integer c3))))
		     width))
		   height))
	    (else (for-each-n
		   (lambda (y)
		    (for-each-n (lambda (x)
				 (let* ((v1 (read port))
					(v2 (read port))
					(v3 (read port)))
				  (when (eof-object? v1) (return #f))
				  (matrix-set! red y x v1)
				  (matrix-set! green y x v2)
				  (matrix-set! blue y x v3)))
				width))
		   height)))))
    (make-ppm raw? maxval red green blue)))
  (let ((format (read port)))
   (case format
    ((p1) (read-pbm #f))
    ((p2) (read-pgm #f))
    ((p3) (read-ppm #f))
    ((p4) (read-pbm #t))
    ((p5) (read-pgm #t))
    ((p6) (read-ppm #t))
    (else (panic "Incorrect format for a pnm image")))))
 (call-with-input-url url read-pnm))

;;; READ-PNM-MOVIE

;;; OPEN-VIDEO-INPUT-FILE

;;; Tam V'Nishlam Shevah L'El Borei Olam
