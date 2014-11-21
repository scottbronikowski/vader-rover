(MODULE TOOLLIB-MULTI-PROCESS)
(include "QobiScheme-AD.sch")
(include "toollib-multi-process.sch")


(define *3G-and-4G-servers* ;;48 CPUs 128G RAM
 (list "verstand"
       "arivu"
       "perisikan"
       "aruco"
       "save"
       "akili"
       "aql"
       "upplysingaoflun"; generally not a good idea to run things on the file server
       ))

(define *2G-servers* ;;8 CPUs 32G RAM (except jalitusteabe which has 64G) 
 (list "cuddwybodaeth"
       "istihbarat"
       "wywiad"
       "jalitusteabe"))

(define *workstations* ;; 6 CPUs 12G RAM, don't load ones people are using
 (list "tlamachilistli" ;; Jeff's
       "zhineng" ;; Haonan's
       "chino"
       "buddhi"
       "seykhl" ;; Scott's
       "maniishaa" 
       "alykkyys" 
       "mohio"
       "seulki" ;; in robot room
       "rongovosai" ;; in robot room
       "faisneis" ;; in robot room
       ))

(define (server-name->number-of-cpus server)
 (if (equal? server "upplysingaoflun")
     48 
     (if (some (lambda (name) (equal? server name)) *3G-and-4G-servers*)
	 48
	 (if (some (lambda (name) (equal? server name)) *2G-servers*)
	     8
	     (if (some (lambda (name) (equal? server name)) *workstations*)
		 6
		 (panic (string-append "unknown servername: "
				       server)))))))

(define (get-server-idle-percent server)
 (string->number
  (string-join " "
  (but-last
   (pregexp-split " "
		  (fourth
		   (pregexp-split
		    ","
		    (last
		     (system-output
		      (string-append
		       "ssh "
		       server " top -b -n 2 | grep Cpu"))))))))))

(define (get-approximate-free-server-cpus servers)
 (map (lambda (server)
       (* (/ (get-server-idle-percent server)
	     100)
	  (server-name->number-of-cpus server)))
      servers))

(define (get-total-server-free-cpus)
 (reduce + (append (get-approximate-free-server-cpus *2G-servers*)
		   (get-approximate-free-server-cpus *3G-and-4G-servers*))
	 0))


(define (repeat-list-to-length-n list n)
 (map-n (lambda (i)
	 (list-ref list (modulo i (length list)))) n))

(define (determine-job-to-server-mapping commands servers cpus-per-command)
 (let* ((server-idle-cpus (get-approximate-free-server-cpus servers))
	(server-effective-idle-cpus (dtrace "effective cpus"
					    (map (lambda (cpus) (- cpus
								   (float-modulo
								    cpus
								    cpus-per-command)))
						 server-idle-cpus)))
	(total-effective-free-cpus (reduce + server-effective-idle-cpus 0))
	(dummy (if (< total-effective-free-cpus (* (length commands)
						   cpus-per-command))
		   (panic (string-append "cant create "
					 (number->string (length commands))
					 "*" (number->string cpus-per-command)"="
					 (number->string (* (length commands)
							    cpus-per-command))
					 " jobs with only "
					 (number->string total-effective-free-cpus)
					 " effective free cpus among {"
					 (string-join
					  " "
					  (map (lambda (server cpus)
						(string-append
						 server
						 "("(number->string cpus)")"))
					       servers server-effective-idle-cpus))
					 "}."))
		   #t))
	(job-server-mapping (let loop ((commands commands)
				       (servers (reduce
						 append
						 (map (lambda (server cpus)
						       (repeat-list-to-length-n
							(list server)
							(/ cpus cpus-per-command)))
						      servers server-effective-idle-cpus)
						 '())))
			     (if (null? commands)
				 '()
				 (if (null? servers)
				     (panic "ran out of servers before running out of commands")
				     (cons (list (first commands)
						 (first servers))
					   (loop (rest commands)
						 (rest servers))))))))
  (list (map first job-server-mapping)
	(map second job-server-mapping))))

(define (determine-job-to-server-mapping-with-queueing commands servers cpus-per-command)
 (let* ((server-idle-cpus (get-approximate-free-server-cpus servers))
	(server-effective-idle-cpus (dtrace "effective cpus"
					    (map (lambda (cpus) (- cpus
								   (float-modulo
								    cpus
								    cpus-per-command)))
						 server-idle-cpus)))
	(total-effective-free-cpus (reduce + server-effective-idle-cpus 0))
	(job-server-mapping (let loop ((commands commands)
				       (servers (reduce
						 append
						 (map (lambda (server cpus)
						       (repeat-list-to-length-n
							(list server)
							(/ cpus cpus-per-command)))
						      servers server-effective-idle-cpus)
						 '())))
			     (if (or (null? servers) (null? commands))
				 (list (list commands
					     '()))
				 (cons (list (first commands)
					     (first servers))
				       (loop (rest commands)
					     (rest servers)))))))
  (list (map first (but-last job-server-mapping))
	(map second (but-last job-server-mapping))
	(first (last job-server-mapping)))))

(define (sanitize-string-for-spawning string)
 (pregexp-replace* "\\\"" (pregexp-replace* "'" string "'\"'\"'")  "\\\\\""))

(define (create-dsci-job string)
 (string-append "\" echo '"
		(sanitize-string-for-spawning string)
		"' |  darpa-wrap run-dsci -mh 30000\""))

(define (create-dsci-job2 string outfile errorfile)
 (string-append "\" echo '"
		(sanitize-string-for-spawning string)
		"' |  darpa-wrap run-dsci -mh 30000 1>"outfile" 2>"errorfile"\""))

(define (spawn-jobs jobs servers outlogfiles errorlogfiles)
 (map (lambda (job server outlogfile errorlogfile)
       (system "sleep .1")
       (dtrace "system-returned:" (system (dtrace "about to execute command:"
						  (string-append
						   "echo " job " | "
						   "ssh " server
						   " 'bash -s' "
						   "1>" outlogfile
						   " 2>"errorlogfile
						   " & sleep .1")))))
      jobs servers outlogfiles errorlogfiles))

(define (spawn-and-wait-for-jobs jobs servers outlogfiles errorlogfiles donefiles)
 (map (lambda (job server outlogfile errorlogfile donefile)
       (system "sleep .2")
       (dtrace "system-returned:" (system (dtrace "about to execute command:"
						  (string-append
						   "echo " job " | "
						   "ssh " server
						   " 'bash -s' "
						   "1>" outlogfile
						   " 2>"errorlogfile
						   " && touch " donefile
						   " & sleep .2")))))
      jobs servers outlogfiles errorlogfiles donefiles)
 (let loop ((i 0))
  (system "sleep 5")
  (dtrace "running for:" (string-append (number->string (* i 5))
					"seconds"))
  (if (= (dtrace "finished jobs:"
		 (reduce +
			 (map (lambda (donefile)
			       (if (file-exists? donefile)
				   1
				   0))
			      donefiles)
			 #t))
	 (length donefiles))
      #t
      (loop (+ i 1)))))

(define (spawn-and-wait-for-jobs-with-queueing jobs
					       servers
					       cpus-per-job
					       outlogfiles
					       errorlogfiles
					       donefiles
					       source
					       outpath)
 (let loop ((i 0)
	    (jobs jobs)
	    (outlogfiles outlogfiles)
	    (errorlogfiles errorlogfiles)
	    (donefiles donefiles)
	    (started-jobs 0)
	    (waiting-jobs 0)
	    (done-jobs 0)
	    (all-donefiles donefiles))
  (let* ((server-mapping (if (null? jobs)
			     (list '() '() '())
			     (determine-job-to-server-mapping-with-queueing jobs
									    servers
									    cpus-per-job)))
	 (job-servers (second server-mapping))
	 (leftover-jobs (third server-mapping)))
   (unless (or (null? jobs) (null? job-servers))
    (map (lambda (server job outlogfile errorlogfile donefile)
	  (dtrace "system-returned:" (system (dtrace "about to execute command:"
						     (string-append
						      "echo " job " | "
						      "ssh " server
						      " 'bash -s' "
						      " && touch " donefile
						      " & sleep .25"))))
	  (system "sleep .1"))
	 job-servers jobs outlogfiles errorlogfiles donefiles))
   (system "sleep .1")
   (map (lambda (server)
	 (rsync-directory-to-server server outpath source))
	servers)
   (dtrace "running for:" (string-append (number->string (* i 5))
					 "seconds"))
   (let ((done-jobs (reduce +
			    (map (lambda (donefile)
				  (if (file-exists? donefile)
				      1
				      0))
				 all-donefiles)
			    0))
	 (started-jobs (+ started-jobs (length job-servers)))
	 (waiting-jobs (length leftover-jobs)))
    (dtrace "started-jobs:" started-jobs)
    (dtrace "waiting-jobs:" waiting-jobs)
    (dtrace "done-jobs:" done-jobs)
    
    (if (=  done-jobs
	    (length all-donefiles))
	#t
	(loop (+ i 1)
	      (sublist jobs (length job-servers) (length jobs))
	      (sublist outlogfiles (length job-servers) (length outlogfiles))
	      (sublist errorlogfiles (length job-servers) (length errorlogfiles))
	      (sublist donefiles (length job-servers) (length donefiles))
	      started-jobs
	      waiting-jobs
	      done-jobs
	      all-donefiles))))))

(define (synchronous-run-commands-in-parallel commands
					      servers
					      cpus-per-job
					      output-directory
					      source
					      rsync-directory)
 (let* ((server-mapping (determine-job-to-server-mapping commands
							 servers
							 cpus-per-job))
	(jobs (map create-dsci-job commands))
	(outlogfiles (map-n (lambda (i)
			     (string-append output-directory
					    "/output-"
					    (number->string (+ i 1))
					    ".out"))
			    (length jobs)))
	(errorlogfiles (map-n (lambda (i)
			       (string-append output-directory
					      "/output-"
					      (number->string (+ i 1))
					      ".err"))
			      (length jobs)))
	(donefiles (map-n (lambda (i)
			   (string-append output-directory
					  "/done-"
					  (number->string (+ i 1))))
			  (length jobs))))
  (for-each (lambda (server)
	     (rsync-directory-to-server source rsync-directory server))
	    (second server-mapping))
  (dtrace "server mapping:" server-mapping)
  (for-each (lambda (outlogfile errorlogfile donefile)
	     (system (string-append "rm " outlogfile))
	     (system (string-append "rm " errorlogfile))
	     (system (string-append "rm " donefile)))
	    outlogfiles errorlogfiles donefiles)
  
  (spawn-and-wait-for-jobs jobs
			   (second server-mapping)
			   outlogfiles
			   errorlogfiles
			   donefiles)))

(define (rsync-directory-to-server source directory server)
 (system (dtrace "rsync command:" (string-append
				   "ssh "server
				   " \" rsync -avzu "source":"directory
				   " --exclude \\*.png --exclude \\*.ppm --exclude \\*dets\\*.text "directory"\""))))

(define (run-unix-command-on-server command server)
 (system (dtrace "unix command:"
		 (string-append "ssh "server
				" \""command"\""))))

(define (synchronous-run-commands-in-parallel-with-queueing commands
							    servers
							    cpus-per-job
							    output-directory
							    source
							    rsync-directory) 
 (let* ((outlogfiles (map-n (lambda (i)
			     (string-append output-directory
					    "/output-"
					    (number->string (+ i 1))
					    ".out"))
			    (length commands)))
	(errorlogfiles (map-n (lambda (i)
			       (string-append output-directory
					      "/output-"
					      (number->string (+ i 1))
					      ".err"))
			      (length commands)))
	(donefiles (map-n (lambda (i)
			   (string-append output-directory
					  "/done-"
					  (number->string (+ i 1))))
			  (length commands)))
	(jobs (map (lambda (command outfile errorfile)
		    (create-dsci-job2 command outfile errorfile))
		   commands
		   outlogfiles
		   errorlogfiles)))  
  (for-each (lambda (server)
	     (system (string-append "rm /net/"server"/"output-directory"/*.out"))
	     (system (string-append "rm /net/"server"/"output-directory"/*.err"))
	     (system (string-append "rm /net/"server"/"output-directory"/done-*")))
	    (cons source servers))
  (for-each (lambda (server)
	     (rsync-directory-to-server source rsync-directory server))
	    servers)
  (spawn-and-wait-for-jobs-with-queueing jobs
					 servers
					 cpus-per-job
					 outlogfiles
					 errorlogfiles
					 donefiles
					 source
					 output-directory)))

