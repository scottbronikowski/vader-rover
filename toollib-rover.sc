(MODULE TOOLLIB-ROVER)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-rover.sch")

(c-include "toollib-rover-cpp.h")

;; (define hello-world
;;  (c-function int ("hello_world" int)))

(define rover-server-test
 (c-function int ("rover_server_test" string)))

(define rover-server-setup
 (c-function int ("rover_server_setup")))

(define rover-server-start
 (c-function int ("rover_server_start")))

(define check-image
 (c-function void ("check_image_load_and_save")))

(define tutorial
 (c-function int ("tutorial")))