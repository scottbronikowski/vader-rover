(MODULE TOOLLIB-NLOPT)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-c-externals.sch")
(include "toollib-nlopt.sch")

(c-include "toollib-c.h")
(c-include "idealib-c.h")
(c-include "nlopt.h")

(define nlopt:gn-direct (c-value int NLOPT_GN_DIRECT))
(define nlopt:gn-direct-l (c-value int NLOPT_GN_DIRECT_L))
(define nlopt:gn-direct-l-rand (c-value int NLOPT_GN_DIRECT_L_RAND))
(define nlopt:gn-direct-noscal (c-value int NLOPT_GN_DIRECT_NOSCAL))
(define nlopt:gn-direct-l-noscal (c-value int NLOPT_GN_DIRECT_L_NOSCAL))
(define nlopt:gn-direct-l-rand-noscal (c-value int NLOPT_GN_DIRECT_L_RAND_NOSCAL))
(define nlopt:gn-orig-direct (c-value int NLOPT_GN_ORIG_DIRECT))
(define nlopt:gn-orig-direct-l (c-value int NLOPT_GN_ORIG_DIRECT_L))
(define nlopt:gd-stogo (c-value int NLOPT_GD_STOGO))
(define nlopt:gd-stogo-rand (c-value int NLOPT_GD_STOGO_RAND))
(define nlopt:ld-lbfgs-nocedal (c-value int NLOPT_LD_LBFGS_NOCEDAL))
(define nlopt:ld-lbfgs (c-value int NLOPT_LD_LBFGS))
(define nlopt:ln-praxis (c-value int NLOPT_LN_PRAXIS))
(define nlopt:ld-var1 (c-value int NLOPT_LD_VAR1))
(define nlopt:ld-var2 (c-value int NLOPT_LD_VAR2))
(define nlopt:ld-tnewton (c-value int NLOPT_LD_TNEWTON))
(define nlopt:ld-tnewton-restart (c-value int NLOPT_LD_TNEWTON_RESTART))
(define nlopt:ld-tnewton-precond (c-value int NLOPT_LD_TNEWTON_PRECOND))
(define nlopt:ld-tnewton-precond-restart (c-value int NLOPT_LD_TNEWTON_PRECOND_RESTART))
(define nlopt:gn-crs2-lm (c-value int NLOPT_GN_CRS2_LM))
(define nlopt:gn-mlsl (c-value int NLOPT_GN_MLSL))
(define nlopt:gd-mlsl (c-value int NLOPT_GD_MLSL))
(define nlopt:gn-mlsl-lds (c-value int NLOPT_GN_MLSL_LDS))
(define nlopt:gd-mlsl-lds (c-value int NLOPT_GD_MLSL_LDS))
(define nlopt:ld-mma (c-value int NLOPT_LD_MMA))
(define nlopt:ln-cobyla (c-value int NLOPT_LN_COBYLA))
(define nlopt:ln-newuoa (c-value int NLOPT_LN_NEWUOA))
(define nlopt:ln-newuoa_bound (c-value int NLOPT_LN_NEWUOA_BOUND))
(define nlopt:ln-neldermead (c-value int NLOPT_LN_NELDERMEAD))
(define nlopt:ln-sbplx (c-value int NLOPT_LN_SBPLX))
(define nlopt:ln-auglag (c-value int NLOPT_LN_AUGLAG))
(define nlopt:ld-auglag (c-value int NLOPT_LD_AUGLAG))
(define nlopt:ln-auglag-eq (c-value int NLOPT_LN_AUGLAG_EQ))
(define nlopt:ld-auglag-eq (c-value int NLOPT_LD_AUGLAG_EQ))
(define nlopt:ln-bobyqa (c-value int NLOPT_LN_BOBYQA))
(define nlopt:gn-isres (c-value int NLOPT_GN_ISRES))
(define nlopt:auglag (c-value int NLOPT_AUGLAG))
(define nlopt:auglag-eq (c-value int NLOPT_AUGLAG_EQ))
(define nlopt:g-mlsl (c-value int NLOPT_G_MLSL))
(define nlopt:g-mlsl-lds (c-value int NLOPT_G_MLSL_LDS))
(define nlopt:ld-slsqp (c-value int NLOPT_LD_SLSQP))

(define nlopt:algorithm-name (c-function string ("nlopt_algorithm_name" int)))

(define nlopt:failure (c-value int NLOPT_FAILURE))
(define nlopt:invalid-args (c-value int NLOPT_INVALID_ARGS))
(define nlopt:out-of-memory (c-value int NLOPT_OUT_OF_MEMORY))
(define nlopt:roundoff-limited (c-value int NLOPT_ROUNDOFF_LIMITED))
(define nlopt:forced-stop (c-value int NLOPT_FORCED_STOP))
(define nlopt:success (c-value int NLOPT_SUCCESS))
(define nlopt:stopval-reached (c-value int NLOPT_STOPVAL_REACHED))
(define nlopt:ftol-reached (c-value int NLOPT_FTOL_REACHED))
(define nlopt:xtol-reached (c-value int NLOPT_XTOL_REACHED))
(define nlopt:maxeval-reached (c-value int NLOPT_MAXEVAL_REACHED))
(define nlopt:maxtime-reached (c-value int NLOPT_MAXTIME_REACHED))

;;(define nlopt:srand (c-function void ("nlopt_srand" long)))
(define nlopt:srand (c-function void ("nlopt_srand" int)))
(define nlopt:srand-time (c-function void ("nlopt_srand_time")))

(define nlopt:create (c-function pointer ("nlopt_create" int unsigned)))
(define nlopt:destroy (c-function void ("nlopt_destroy" pointer)))
(define nlopt:copy (c-function pointer ("nlopt_copy" pointer)))

;; REMOVE ME, TEMPORARY BUFIX, ANDREI
(define *wrapped* '())

(define (nlopt:wrap-single f)
 (let ((r (lambda (n x grad)
           (let ((v (f (c-inexact-array->vector x c-sizeof-double n #t)
                       (not (zero? grad)))))
            (when (not (zero? grad))
             (vector->c-inexact-array grad (vector-ref v 1) c-sizeof-double #t))
            (vector-ref v 0)))))
  (set! *wrapped* (cons r *wrapped*))
  r))

(define (with-nlopt kind arg f)
 (let* ((opt (nlopt:create kind arg))
	(result (f opt)))
  (nlopt:destroy opt)
  result))

(define (optimize-with-nlopt kind initial f)
 (let ((opt (nlopt:create kind (vector-length initial))))
  (f opt)
  (let ((result (nlopt:optimize opt initial)))
   (nlopt:destroy opt)
   result)))

(define (nlopt:optimize nlopt initial)
 (with-vector->c-array
  (lambda (initial-array)
   (with-alloc
    c-sizeof-double
    (lambda (objective-value)
     (let ((result ((c-function int ("nlopt_optimize" pointer pointer pointer))
		    nlopt initial-array objective-value)))
      (vector
       (c-inexact-array->vector initial-array c-sizeof-double
				(vector-length initial) #t)
       (c-inexact-array->vector objective-value c-sizeof-double 1 #t)
       result)))))
  c-double-set! c-sizeof-double initial))

(define (nlopt:set-min-objective nlopt f)
 ((lap (nlopt f) ("nlopt_set_min_objective"
		  (TSCP_POINTER nlopt) "nlopt_func_call_gate" f))
  nlopt (nlopt:wrap-single f))
 #f)
(define (nlopt:set-max-objective nlopt f)
 ((lap (nlopt f) ("nlopt_set_max_objective"
		  (TSCP_POINTER nlopt) "nlopt_func_call_gate" f))
  nlopt (nlopt:wrap-single f))
 #f)

(define nlopt:get-algorithm (c-function int ("nlopt_get_algorithm" pointer)))
(define nlopt:get-dimension (c-function unsigned ("nlopt_get_dimension" pointer)))

;; TODO Error checking

(define (nlopt:set-lower-bounds nlopt bounds)
 (with-vector->c-array
  (lambda (bounds-array)
   ((c-function int ("nlopt_set_lower_bounds" pointer pointer))
    nlopt bounds-array))
  c-double-set!
  c-sizeof-double
  bounds))
(define nlopt:set-lower-bounds1
 (c-function int ("nlopt_set_lower_bounds1" pointer double)))
(define (nlopt:get-lower-bounds nlopt)
 (let ((dimension (nlopt:get-dimension nlopt)))
  (with-alloc
   (* c-sizeof-double (nlopt:get-dimension nlopt))
   (lambda (array)
    ((c-function int ("nlopt_get_lower_bounds" pointer pointer))
     nlopt array)
    (c-inexact-array->vector array c-sizeof-double dimension #t)))))

(define (nlopt:set-upper-bounds nlopt bounds)
 (with-vector->c-array
  (lambda (bounds-array)
   ((c-function int ("nlopt_set_upper_bounds" pointer pointer))
    nlopt bounds-array))
  c-double-set!
  c-sizeof-double
  bounds))
(define nlopt:set-upper-bounds1
 (c-function int ("nlopt_set_upper_bounds1" pointer double)))
(define (nlopt:get-upper-bounds nlopt)
 (let ((dimension (nlopt:get-dimension nlopt)))
  (with-alloc
   (* c-sizeof-double (nlopt:get-dimension nlopt))
   (lambda (array)
    ((c-function int ("nlopt_get_upper_bounds" pointer pointer))
     nlopt array)
    (c-inexact-array->vector array c-sizeof-double dimension #t)))))

(define nlopt:remove-inequality-constraints
 (c-function int ("nlopt_remove_inequality_constraints" pointer)))
(define (nlopt:add-inequality-constraint nlopt f tol)
 ((lap (nlopt f tol) ("nlopt_add_inequality_constraint"
		      (TSCP_POINTER nlopt) "nlopt_func_call_gate"
		      f (TSCP_DOUBLE tol)))
  nlopt (nlopt:wrap-single f) tol)
 #f)
;; TODO (define nlopt:add-inequality-mconstraint
;;  (c-function int ("nlopt_add_inequality_mconstraint" pointer unsigned pointer pointer pointer)))

(define nlopt:remove-equality-constraints
 (c-function int ("nlopt_remove_equality_constraints" pointer)))
(define (nlopt:add-equality-constraint nlopt f tol)
 ((lap (nlopt f tol) ("nlopt_add_equality_constraint"
		      (TSCP_POINTER nlopt) "nlopt_func_call_gate"
		      f (TSCP_DOUBLE tol)))
  nlopt (nlopt:wrap-single f) tol)
 #f)
;; TODO (define nlopt:add-equality-mconstraint
;;  (c-function int ("nlopt_add_equality_mconstraint" pointer unsigned pointer pointer pointer)))

(define nlopt:set-stopval (c-function int ("nlopt_set_stopval" pointer double)))
(define nlopt:get-stopval (c-function double ("nlopt_get_stopval" pointer)))

(define nlopt:set-ftol-rel (c-function int ("nlopt_set_ftol_rel" pointer double)))
(define nlopt:get-ftol-rel (c-function double ("nlopt_get_ftol_rel" pointer)))
(define nlopt:set-ftol-abs (c-function int ("nlopt_set_ftol_abs" pointer double)))
(define nlopt:get-ftol-abs (c-function double ("nlopt_get_ftol_abs" pointer)))

(define nlopt:set-xtol-rel (c-function int ("nlopt_set_xtol_rel" pointer double)))
(define nlopt:get-xtol-rel (c-function double ("nlopt_get_xtol_rel" pointer)))
(define nlopt:set-xtol-abs1 (c-function int ("nlopt_set_xtol_abs1" pointer double)))
(define nlopt:set-xtol-abs (c-function int ("nlopt_set_xtol_abs" pointer pointer)))
(define nlopt:get-xtol-abs (c-function int ("nlopt_get_xtol_abs" pointer pointer)))

(define nlopt:set-maxeval (c-function int ("nlopt_set_maxeval" pointer int)))
(define nlopt:get-maxeval (c-function int ("nlopt_get_maxeval" pointer)))

(define nlopt:set-maxtime (c-function int ("nlopt_set_maxtime" pointer double)))
(define nlopt:get-maxtime (c-function double ("nlopt_get_maxtime" pointer)))

(define nlopt:force-stop (c-function int ("nlopt_force_stop" pointer)))
(define nlopt:set-force-stop (c-function int ("nlopt_set_force_stop" pointer int)))
(define nlopt:get-force-stop (c-function int ("nlopt_get_force_stop" pointer)))

(define nlopt:set-local-optimizer
 (c-function int ("nlopt_set_local_optimizer" pointer pointer)))

(define nlopt:set-population (c-function int ("nlopt_set_population" pointer unsigned)))
(define nlopt:get-population (c-function unsigned ("nlopt_get_population" pointer)))

(define nlopt:set-default-initial-step
 (c-function int ("nlopt_set_default_initial_step" pointer pointer)))
(define nlopt:set-initial-step
 (c-function int ("nlopt_set_initial_step" pointer pointer)))
(define nlopt:set-initial-step1
 (c-function int ("nlopt_set_initial_step1" pointer double)))
(define nlopt:get-initial-step
 (c-function int ("nlopt_get_initial_step" pointer pointer pointer)))
