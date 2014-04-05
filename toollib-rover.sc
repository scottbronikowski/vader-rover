(MODULE TOOLLIB-ROVER)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-rover.sch")

(c-include "toollib-rover-cpp.h")

(define hello-world
 (c-function int ("hello_world" int)))

(define rover-server
 (c-function int ("rover_server" string)))

(define check-image
 (c-function void ("check_image_load_and_save")))