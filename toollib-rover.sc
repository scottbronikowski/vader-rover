(MODULE TOOLLIB-ROVER)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-rover.sch")

(c-include "toollib-rover-cpp.h")
(c-ffi:add-custom-type imlib-image pointer make-imlib-image imlib-image-handle)

(define rover-server-setup
 (c-function int ("rover_server_setup")))

(define rover-server-start
 (c-function void ("rover_server_start")))

(define rover-get-front-cam
 (c-function imlib-image ("rover_get_front_cam")))

(define rover-get-pano-cam
 (c-function imlib-image ("rover_get_pano_cam")))

;; (define rover-display
;;  (c-function void ("rover_display")))

(define rover-server-cleanup
 (c-function void ("rover_server_cleanup")))

(define rover-start-cameras
 (c-function void ("rover_start_cameras")))

(define rover-stop-cameras
 (c-function void ("rover_stop_cameras")))

;; used to get images from ImgArrays
(define (get-next-image-command)
 (let ((image1 (rover-get-front-cam)) 
       (image2 	(rover-get-pano-cam)))
  (draw-imlib-pixmap image1 20 0)
  (draw-imlib-pixmap image2 700 0)
  (imlib:free image1)
  (imlib:free image2))) 