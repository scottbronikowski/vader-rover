(DEFINE-EXTERNAL (CURRY2 F) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (WITH-ALLOC X F) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-SIZED-INT-PTR-REF SIZE SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL *MAXIMUM-NUMBER-OF-CAMERAS* TOOLLIB-CAMERA)
(DEFINE-EXTERNAL *CAMERAS* TOOLLIB-CAMERA)
(DEFINE-EXTERNAL *CAMERA* TOOLLIB-CAMERA)
(DEFINE-EXTERNAL *AUTO?* TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-IOCTL-REQUEST-CODE-TO-STRING TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-CID-TO-STRING TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-PRINT-AVAILABLE-CONTROLS TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-INITIALIZE TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-DEINITIALIZE TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-SET-FRAMERATE! C N D) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL BUF-TYPE-VIDEO-CAPTURE TOOLLIB-CAMERA)
(DEFINE-EXTERNAL TYPE-DISCRETE TOOLLIB-CAMERA)
(DEFINE-EXTERNAL TYPE-CONTINUOUS TOOLLIB-CAMERA)
(DEFINE-EXTERNAL TYPE-STEPWISE TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-ENUM-FMT TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-ENUM-FRAME-SIZES TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-ENUM-FRAME-INTERVALS TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-GET-PARAMETERS TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-SET-PARAMETERS TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-GET-CONTROL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-SET-CONTROL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-QUERY-CONTROL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-QUERY-MENU TOOLLIB-CAMERA)
(DEFINE-EXTERNAL VIDIOC-QUERY-CAPABILITIES TOOLLIB-CAMERA)
(DEFINE-EXTERNAL V4L2-FD TOOLLIB-CAMERA)
(DEFINE-EXTERNAL CTRL-FLAG-NEXT-CTRL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL EINVAL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-FORMATS FD) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-FRAME-SIZES FD PIXFMT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-FRAME-INTERVALS FD PIXFMT WIDTH HEIGHT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-FORMAT-INFO FD PIXFMT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-AUTOMATIC-FORMAT FD WIDTH HEIGHT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (LIST-CAMERAS) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-GET-CONTROL CAMERA ID) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-SET-CONTROL! CAMERA ID VALUE) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-FD CAMERA) TOOLLIB-CAMERA)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-CAMERA CAMERA-CONTROL ID TYPE NAME MINIMUM MAXIMUM STEP DEFAULT_VALUE FLAGS)
(DEFINE-EXTERNAL (CAMERA-CONTROL-INFORMATION CAMERA ID) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CONTROL-STEP CAMERA ID) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL IOCTL TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (WAIT-FOR-PAN-TILT CAMERA) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (WAIT-FOR-NEXT-FRAME FRAME) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (WAIT-FOR-CAMERA-NEXT-FRAME CAMERA FRAME) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL *PAN/TILT-TIMEOUT* TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-PAN CAMERA N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-TILT CAMERA N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-PAN-RESET CAMERA) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-TILT-RESET CAMERA) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-BUTTONS R) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (FLUSH-STALE-FRAMES CAMERA) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-FRESH-FRAME CAMERA) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (DUMMY-VAR) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-IMAGE-VARIANCE C) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-AUTOFOCUS-DETAILS C STEP) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (AUTOFOCUS-CAMERA! C STEP) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA->VIDEO-DEVICE-NAME N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA->SERIAL-NUMBER N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-S/N-*SETTINGS*-MOUNT S/N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-*SETTINGS*-MOUNT C) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-S/N-*SETTINGS*-SET-MOUNT! S/N MOUNT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-*SETTINGS*-SET-MOUNT! C MOUNT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-S/N-*SETTINGS*-SET-ROBOT! S/N ROBOT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-*SETTINGS*-SET-ROBOT! C ROBOT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-S/N-*SETTINGS*-ROBOT! S/N) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (CAMERA-*SETTINGS*-ROBOT! C) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-CAMERAS) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (GET-MOUNTED-CAMERAS . MOUNTS) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (DETECT-ROBOT-FROM-CAMERAS) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (REQUESTED-CAMERAS->LIST NR PALM HEAD-RIGHT HEAD-LEFT) TOOLLIB-CAMERA)
(DEFINE-EXTERNAL (FIND-HISTOGRAM PIXMAP MAXVAL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (HISTOGRAM-MEAN HISTOGRAM I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (HISTOGRAM-VARIANCE HISTOGRAM MU I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->PGM PNM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (*SETTINGS-LOOKUP* . PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (*SETTINGS-UPDATE!* VAL . PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SYSTEM-OUTPUT CMD) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUM L) TOOLLIB-MISC)
