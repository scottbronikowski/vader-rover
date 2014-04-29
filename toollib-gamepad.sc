;; Module for interfacing to Logitech F710 gamepad (used as generic Xbox controller)
;; Author: Scott Bronikowski
;; Date: 22 April 2014

(MODULE TOOLLIB-GAMEPAD)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-gamepad.sch")

(c-include "toollib-gamepad-c.h")
(c-ffi:add-custom-type imlib-image pointer make-imlib-image imlib-image-handle)

(define gamepad-hello-world
 (c-function void ("gamepad_hello_world")))

(define gamepad-init
 (c-function void ("gamepad_init")))

(define gamepad-shutdown
 (c-function void ("gamepad_shutdown")))

(define gamepad-update
 (c-function void ("gamepad_update" pointer)))