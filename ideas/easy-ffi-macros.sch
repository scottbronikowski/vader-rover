;;; LaHaShem HaAretz U'Mloah
;;; Copyright 2013 Purdue University. All rights reserved.

(define-external easy-ffi:byte-to-c easy-ffi)

(define-external easy-ffi:double-to-c easy-ffi)

(define-external easy-ffi:float-to-c easy-ffi)

(define-external easy-ffi:int-to-c easy-ffi)

(define-external easy-ffi:longint-to-c easy-ffi)

(define-external easy-ffi:longunsigned-to-c easy-ffi)

(define-external easy-ffi:shortint-to-c easy-ffi)

(define-external easy-ffi:shortunsigned-to-c easy-ffi)

(define-external easy-ffi:unsigned-to-c easy-ffi)

(define-external easy-ffi:byte-from-c easy-ffi)

(define-external easy-ffi:double-from-c easy-ffi)

(define-external easy-ffi:float-from-c easy-ffi)

(define-external easy-ffi:int-from-c easy-ffi)

(define-external easy-ffi:longint-from-c easy-ffi)

(define-external easy-ffi:longunsigned-from-c easy-ffi)

(define-external easy-ffi:shortint-from-c easy-ffi)

(define-external easy-ffi:shortunsigned-from-c easy-ffi)

(define-external easy-ffi:unsigned-from-c easy-ffi)

(define-external (easy-ffi:free n x v) easy-ffi)

(eval-when (compile)

 (define (easy-ffi:remove-leading-stars type)
  (string->symbol
   (list->string
    (let loop ((chars (string->list (symbol->string type))))
     (if (char=? (car chars) #\*)
	 (loop (cdr chars))
	 chars)))))

 (define (easy-ffi:count-leading-stars type)
  (let loop ((chars (string->list (symbol->string type))))
   (if (char=? (car chars) #\*) (+ (loop (cdr chars)) 1) 0)))

 (define (easy-ffi:remove-trailing-stars type)
  (string->symbol
   (list->string
    (reverse
     (let loop ((chars (reverse (string->list (symbol->string type)))))
      (if (char=? (car chars) #\*)
	  (loop (cdr chars))
	  chars))))))

 (define (easy-ffi:count-trailing-stars type)
  (let loop ((chars (reverse (string->list (symbol->string type)))))
   (if (char=? (car chars) #\*) (+ (loop (cdr chars)) 1) 0))))

;;; byte
;;; pointer array char tscp void

(define-macro easy-ffi:c-function
 (lambda (form expander)
  (expander
   (let* ((type (cadr form))
	  (function-name (car (caddr form)))
	  (types (cdr (caddr form)))
	  (arguments (map-n (lambda (i)
			     (string->uninterned-symbol
			      (string-append "a" (number->string i))))
			    (length types)))
	  (c-arguments (map-n (lambda (i)
			       (string->uninterned-symbol
				(string-append "c" (number->string i))))
			      (length types)))
	  (c-result (string->uninterned-symbol "c-result"))
	  (result (string->uninterned-symbol "result"))
	  (ns (string->uninterned-symbol "ns"))
	  (ts (string->uninterned-symbol "ts")))
    `(lambda ,(if (zero? (easy-ffi:count-trailing-stars type))
		  arguments
		  (cons ns (cons ts arguments)))
      (let* (,@(remq
		#f
		(map (lambda (type argument c-argument)
		      (if (zero? (easy-ffi:count-trailing-stars type))
			  #f
			  `(,c-argument
			    (,(case (easy-ffi:remove-trailing-stars type)
			       ((double) 'easy-ffi:double-to-c)
			       ((float) 'easy-ffi:float-to-c)
			       ((int) 'easy-ffi:int-to-c)
			       ((longint) 'easy-ffi:longint-to-c)
			       ((longunsigned) 'easy-ffi:longunsigned-to-c)
			       ((shortint) 'easy-ffi:short-to-c)
			       ((shortunsigned) 'easy-ffi:shortunsigned-to-c)
			       ((unsigned) 'easy-ffi:unsigned-to-c)
			       (else (error 'easy-ffi:c-function
					    "Unknown type: ~s" type)))
			     ,(easy-ffi:count-trailing-stars type)
			     ,argument))))
		     types arguments c-arguments))
	     (,c-result
	      ((c-function
		,(if (zero? (easy-ffi:count-trailing-stars type))
		     type
		     'pointer)
		(,function-name
		 ,@(map (lambda (type)
			 (if (zero? (easy-ffi:count-trailing-stars type))
			     type
			     'pointer))
			types)))
	       ,@(map (lambda (type argument c-argument)
		       (if (zero? (easy-ffi:count-trailing-stars type))
			   argument
			   c-argument))
		      types arguments c-arguments)))
	     (,result
	      ,(if (zero? (easy-ffi:count-trailing-stars type))
		   c-result
		   `(,(case (easy-ffi:remove-trailing-stars type)
		       ((double) 'easy-ffi:double-from-c)
		       ((float) 'easy-ffi:float-from-c)
		       ((int) 'easy-ffi:int-from-c)
		       ((longint) 'easy-ffi:longint-from-c)
		       ((longunsigned) 'easy-ffi:longunsigned-from-c)
		       ((shortint) 'easy-ffi:short-from-c)
		       ((shortunsigned) 'easy-ffi:shortunsigned-from-c)
		       ((unsigned) 'easy-ffi:unsigned-from-c)
		       (else (error 'easy-ffi:c-function
				    "Unknown type: ~s" type)))
		     ,ns
		     ,ts
		     ,c-result))))
       ,@(remq #f
	       (map (lambda (type argument c-argument)
		     (if (zero? (easy-ffi:count-trailing-stars type))
			 #f
			 `(easy-ffi:free ,(easy-ffi:count-trailing-stars type)
					 ,argument
					 ,c-argument)))
		    types arguments c-arguments))
       ,@(if (zero? (easy-ffi:count-trailing-stars type))
	     '()
	     `((easy-ffi:free ,(easy-ffi:count-trailing-stars type)
			      ,result
			      ,c-result)))
       ,result)))
   expander)))

(define-macro easy-ffi:define
 (lambda (form expander)
  (expander
   (let* ((type (cadr form))
	  (function-name (caddr form))
	  (types (map car (cadddr form)))
	  (arguments (map cadr (cadddr form)))
	  (ns (string->uninterned-symbol "ns"))
	  (ts (string->uninterned-symbol "ts"))
	  (variables
	   (if (zero? (easy-ffi:count-leading-stars function-name))
	       (map easy-ffi:remove-leading-stars arguments)
	       (cons (string->uninterned-symbol "ns")
		     (cons (string->uninterned-symbol "ts")
			   (map easy-ffi:remove-leading-stars arguments))))))
    `(define (,(easy-ffi:remove-leading-stars function-name) ,@variables)
      ((easy-ffi:c-function
	,(if (zero? (easy-ffi:count-leading-stars function-name))
	     type
	     (string->symbol
	      (string-append
	       (symbol->string type)
	       (make-string (easy-ffi:count-leading-stars function-name) #\*))))
	(,(c-ify
	   (string-downcase
	    (symbol->string (easy-ffi:remove-leading-stars function-name))))
	 ,@(map (lambda (type argument)
		 (string->symbol
		  (string-append
		   (symbol->string type)
		   (make-string (easy-ffi:count-leading-stars argument) #\*))))
		types arguments)))
       ,@variables)))
   expander)))

;;; Tam V'Nishlam Shevah L'El Borei Olam
