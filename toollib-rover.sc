(MODULE TOOLLIB-ROVER)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-rover.sch")

(c-include "toollib-rover-cpp.h")
(c-ffi:add-custom-type imlib-image pointer make-imlib-image imlib-image-handle)

;; (define hello-world
;;  (c-function int ("hello_world" int)))

(define rover-server-test
 (c-function int ("rover_server_test" string)))

(define rover-server-setup
 (c-function int ("rover_server_setup")))

(define rover-server-start
 (c-function void ("rover_server_start")))

(define rover-get-front-cam
 (c-function imlib-image ("rover_get_front_cam")))

(define rover-get-pano-cam
 (c-function imlib-image ("rover_get_pano_cam")))

(define rover-server-cleanup
 (c-function void ("rover_server_cleanup")))

(define check-image
 (c-function void ("check_image_load_and_save")))

(define tutorial
 (c-function int ("tutorial")))