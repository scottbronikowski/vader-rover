(MODULE TOOLLIB-ROVER)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")

(c-include "test-dsci-cpp.h")

(define check-image
 (c-function void ("check_image_load_and_save")))