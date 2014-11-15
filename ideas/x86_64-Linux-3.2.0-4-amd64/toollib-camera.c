
/* SCHEME->C */

#include <objects.h>

void toollib_2dcamera__init();
DEFSTATICTSCP( with_2dhack_2dtrack_2dpaused_v );
DEFSTATICTSCP( _nt_2dframe_7ee6fa74_v );
DEFSTATICTSCP( interruptible_2dusleep_v );
DEFSTATICTSCP( _pturing_21_2c963a38_v );
DEFSTATICTSCP( _e_2d_3eppm_61df1ba8_v );
DEFSTATICTSCP( c15994 );
DEFCSTRING( t16257, "invalid mounting type" );
DEFSTATICTSCP( c15987 );
DEFSTATICTSCP( c15986 );
DEFSTATICTSCP( c15981 );
DEFSTATICTSCP( c15973 );
DEFSTATICTSCP( c15965 );
DEFSTATICTSCP( c15953 );
DEFSTATICTSCP( c15952 );
DEFCSTRING( t16258, 
            "cd /sys/devices; cat $(echo $(find . -name ~a) | cut -d/  -f -6\
 -)/serial 2> /dev/null" );
DEFSTATICTSCP( c15949 );
DEFCSTRING( t16259, "No such" );
DEFSTATICTSCP( c15948 );
DEFCSTRING( t16260, "video~a" );
DEFSTATICTSCP( c15934 );
DEFCSTRING( t16261, "Adjusting" );
DEFSTATICTSCP( c15787 );
DEFCSTRING( t16262, "Tilt reset" );
DEFSTATICTSCP( c15784 );
DEFCSTRING( t16263, "Pan reset" );
DEFSTATICTSCP( c15775 );
DEFCSTRING( t16264, "Pan -" );
DEFSTATICTSCP( c15772 );
DEFCSTRING( t16265, "Pan +" );
DEFSTATICTSCP( c15763 );
DEFCSTRING( t16266, "Tilt -" );
DEFSTATICTSCP( c15759 );
DEFCSTRING( t16267, "Tilt +" );
DEFSTATICTSCP( c15750 );
DEFCSTRING( t16268, "Sharpness +" );
DEFSTATICTSCP( c15714 );
DEFCSTRING( t16269, "Gain +" );
DEFSTATICTSCP( c15678 );
DEFCSTRING( t16270, "Saturation +" );
DEFSTATICTSCP( c15642 );
DEFCSTRING( t16271, "Contrast +" );
DEFSTATICTSCP( c15606 );
DEFCSTRING( t16272, "~a -" );
DEFSTATICTSCP( c15591 );
DEFCSTRING( t16273, "Brightness +" );
DEFSTATICTSCP( c15569 );
DEFCSTRING( t16274, "Skipped a frame ~s ~s" );
DEFSTATICTSCP( c15457 );
DEFCSTRING( t16275, "Time out waiting for next frame" );
DEFSTATICTSCP( c15426 );
DEFCSTRING( t16276, "SET-CAMERA-CONTROL-FLAGS! error" );
DEFSTATICTSCP( c15368 );
DEFCSTRING( t16277, "CAMERA-CONTROL-FLAGS error" );
DEFSTATICTSCP( c15354 );
DEFCSTRING( t16278, "LOCAL-SET-CAMERA-CONTROL-FLAGS! error" );
DEFSTATICTSCP( c15351 );
DEFCSTRING( t16279, "SET-CAMERA-CONTROL-DEFAULT_VALUE! error" );
DEFSTATICTSCP( c15336 );
DEFCSTRING( t16280, "CAMERA-CONTROL-DEFAULT_VALUE error" );
DEFSTATICTSCP( c15322 );
DEFCSTRING( t16281, "LOCAL-SET-CAMERA-CONTROL-DEFAULT_VALUE! error" );
DEFSTATICTSCP( c15319 );
DEFCSTRING( t16282, "SET-CAMERA-CONTROL-STEP! error" );
DEFSTATICTSCP( c15304 );
DEFCSTRING( t16283, "CAMERA-CONTROL-STEP error" );
DEFSTATICTSCP( c15290 );
DEFCSTRING( t16284, "LOCAL-SET-CAMERA-CONTROL-STEP! error" );
DEFSTATICTSCP( c15287 );
DEFCSTRING( t16285, "SET-CAMERA-CONTROL-MAXIMUM! error" );
DEFSTATICTSCP( c15272 );
DEFCSTRING( t16286, "CAMERA-CONTROL-MAXIMUM error" );
DEFSTATICTSCP( c15258 );
DEFCSTRING( t16287, "LOCAL-SET-CAMERA-CONTROL-MAXIMUM! error" );
DEFSTATICTSCP( c15255 );
DEFCSTRING( t16288, "SET-CAMERA-CONTROL-MINIMUM! error" );
DEFSTATICTSCP( c15240 );
DEFCSTRING( t16289, "CAMERA-CONTROL-MINIMUM error" );
DEFSTATICTSCP( c15226 );
DEFCSTRING( t16290, "LOCAL-SET-CAMERA-CONTROL-MINIMUM! error" );
DEFSTATICTSCP( c15223 );
DEFCSTRING( t16291, "SET-CAMERA-CONTROL-NAME! error" );
DEFSTATICTSCP( c15208 );
DEFCSTRING( t16292, "CAMERA-CONTROL-NAME error" );
DEFSTATICTSCP( c15194 );
DEFCSTRING( t16293, "LOCAL-SET-CAMERA-CONTROL-NAME! error" );
DEFSTATICTSCP( c15191 );
DEFCSTRING( t16294, "SET-CAMERA-CONTROL-TYPE! error" );
DEFSTATICTSCP( c15176 );
DEFCSTRING( t16295, "CAMERA-CONTROL-TYPE error" );
DEFSTATICTSCP( c15162 );
DEFCSTRING( t16296, "LOCAL-SET-CAMERA-CONTROL-TYPE! error" );
DEFSTATICTSCP( c15159 );
DEFCSTRING( t16297, "SET-CAMERA-CONTROL-ID! error" );
DEFSTATICTSCP( c15144 );
DEFCSTRING( t16298, "CAMERA-CONTROL-ID error" );
DEFSTATICTSCP( c15130 );
DEFCSTRING( t16299, "LOCAL-SET-CAMERA-CONTROL-ID! error" );
DEFSTATICTSCP( c15127 );
DEFSTATICTSCP( c15118 );
DEFSTATICTSCP( c15108 );
DEFSTATICTSCP( c14988 );
DEFCSTRING( t16300, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c14987 );
DEFCSTRING( t16301, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c14983 );
DEFCSTRING( t16302, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c14980 );
DEFSTATICTSCP( c14979 );
DEFCSTRING( t16303, "/dev/v4l" );
DEFSTATICTSCP( c14924 );
DEFCSTRING( t16304, "video" );
DEFSTATICTSCP( c14923 );
DEFCSTRING( t16305, "/dev/v4l/" );
DEFSTATICTSCP( c14922 );
DEFCSTRING( t16306, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c14771 );
DEFSTATICTSCP( c14770 );
DEFCSTRING( t16307, "get-format-info can't handle type: ~a~%" );
DEFSTATICTSCP( c14687 );

static void  init_constants()
{
        with_2dhack_2dtrack_2dpaused_v = STRINGTOSYMBOL( CSTRING_TSCP( "WITH\
-HACK-TRACK-PAUSED" ) );
        CONSTANTEXP( ADR( with_2dhack_2dtrack_2dpaused_v ) );
        _nt_2dframe_7ee6fa74_v = STRINGTOSYMBOL( CSTRING_TSCP( "HACK-TRACK-G\
ET-CURRENT-FRAME" ) );
        CONSTANTEXP( ADR( _nt_2dframe_7ee6fa74_v ) );
        interruptible_2dusleep_v = STRINGTOSYMBOL( CSTRING_TSCP( "INTERRUPTI\
BLE-USLEEP" ) );
        CONSTANTEXP( ADR( interruptible_2dusleep_v ) );
        _pturing_21_2c963a38_v = STRINGTOSYMBOL( CSTRING_TSCP( "HACK-TRACK-T\
URN-ON-CAPTURING!" ) );
        CONSTANTEXP( ADR( _pturing_21_2c963a38_v ) );
        _e_2d_3eppm_61df1ba8_v = STRINGTOSYMBOL( CSTRING_TSCP( "HACK-TRACK-F\
RAME->PPM" ) );
        CONSTANTEXP( ADR( _e_2d_3eppm_61df1ba8_v ) );
        c15994 = STRINGTOSYMBOL( CSTRING_TSCP( "ROBOT" ) );
        CONSTANTEXP( ADR( c15994 ) );
        c15987 = CSTRING_TSCP( t16257 );
        CONSTANTEXP( ADR( c15987 ) );
        c15986 = STRINGTOSYMBOL( CSTRING_TSCP( "PALM" ) );
        CONSTANTEXP( ADR( c15986 ) );
        c15981 = STRINGTOSYMBOL( CSTRING_TSCP( "UNUSED" ) );
        CONSTANTEXP( ADR( c15981 ) );
        c15973 = STRINGTOSYMBOL( CSTRING_TSCP( "HEAD-RIGHT" ) );
        CONSTANTEXP( ADR( c15973 ) );
        c15965 = STRINGTOSYMBOL( CSTRING_TSCP( "HEAD-LEFT" ) );
        CONSTANTEXP( ADR( c15965 ) );
        c15953 = STRINGTOSYMBOL( CSTRING_TSCP( "MOUNT" ) );
        CONSTANTEXP( ADR( c15953 ) );
        c15952 = STRINGTOSYMBOL( CSTRING_TSCP( "CAMERA" ) );
        CONSTANTEXP( ADR( c15952 ) );
        c15949 = CSTRING_TSCP( t16258 );
        CONSTANTEXP( ADR( c15949 ) );
        c15948 = CSTRING_TSCP( t16259 );
        CONSTANTEXP( ADR( c15948 ) );
        c15934 = CSTRING_TSCP( t16260 );
        CONSTANTEXP( ADR( c15934 ) );
        c15787 = CSTRING_TSCP( t16261 );
        CONSTANTEXP( ADR( c15787 ) );
        c15784 = CSTRING_TSCP( t16262 );
        CONSTANTEXP( ADR( c15784 ) );
        c15775 = CSTRING_TSCP( t16263 );
        CONSTANTEXP( ADR( c15775 ) );
        c15772 = CSTRING_TSCP( t16264 );
        CONSTANTEXP( ADR( c15772 ) );
        c15763 = CSTRING_TSCP( t16265 );
        CONSTANTEXP( ADR( c15763 ) );
        c15759 = CSTRING_TSCP( t16266 );
        CONSTANTEXP( ADR( c15759 ) );
        c15750 = CSTRING_TSCP( t16267 );
        CONSTANTEXP( ADR( c15750 ) );
        c15714 = CSTRING_TSCP( t16268 );
        CONSTANTEXP( ADR( c15714 ) );
        c15678 = CSTRING_TSCP( t16269 );
        CONSTANTEXP( ADR( c15678 ) );
        c15642 = CSTRING_TSCP( t16270 );
        CONSTANTEXP( ADR( c15642 ) );
        c15606 = CSTRING_TSCP( t16271 );
        CONSTANTEXP( ADR( c15606 ) );
        c15591 = CSTRING_TSCP( t16272 );
        CONSTANTEXP( ADR( c15591 ) );
        c15569 = CSTRING_TSCP( t16273 );
        CONSTANTEXP( ADR( c15569 ) );
        c15457 = CSTRING_TSCP( t16274 );
        CONSTANTEXP( ADR( c15457 ) );
        c15426 = CSTRING_TSCP( t16275 );
        CONSTANTEXP( ADR( c15426 ) );
        c15368 = CSTRING_TSCP( t16276 );
        CONSTANTEXP( ADR( c15368 ) );
        c15354 = CSTRING_TSCP( t16277 );
        CONSTANTEXP( ADR( c15354 ) );
        c15351 = CSTRING_TSCP( t16278 );
        CONSTANTEXP( ADR( c15351 ) );
        c15336 = CSTRING_TSCP( t16279 );
        CONSTANTEXP( ADR( c15336 ) );
        c15322 = CSTRING_TSCP( t16280 );
        CONSTANTEXP( ADR( c15322 ) );
        c15319 = CSTRING_TSCP( t16281 );
        CONSTANTEXP( ADR( c15319 ) );
        c15304 = CSTRING_TSCP( t16282 );
        CONSTANTEXP( ADR( c15304 ) );
        c15290 = CSTRING_TSCP( t16283 );
        CONSTANTEXP( ADR( c15290 ) );
        c15287 = CSTRING_TSCP( t16284 );
        CONSTANTEXP( ADR( c15287 ) );
        c15272 = CSTRING_TSCP( t16285 );
        CONSTANTEXP( ADR( c15272 ) );
        c15258 = CSTRING_TSCP( t16286 );
        CONSTANTEXP( ADR( c15258 ) );
        c15255 = CSTRING_TSCP( t16287 );
        CONSTANTEXP( ADR( c15255 ) );
        c15240 = CSTRING_TSCP( t16288 );
        CONSTANTEXP( ADR( c15240 ) );
        c15226 = CSTRING_TSCP( t16289 );
        CONSTANTEXP( ADR( c15226 ) );
        c15223 = CSTRING_TSCP( t16290 );
        CONSTANTEXP( ADR( c15223 ) );
        c15208 = CSTRING_TSCP( t16291 );
        CONSTANTEXP( ADR( c15208 ) );
        c15194 = CSTRING_TSCP( t16292 );
        CONSTANTEXP( ADR( c15194 ) );
        c15191 = CSTRING_TSCP( t16293 );
        CONSTANTEXP( ADR( c15191 ) );
        c15176 = CSTRING_TSCP( t16294 );
        CONSTANTEXP( ADR( c15176 ) );
        c15162 = CSTRING_TSCP( t16295 );
        CONSTANTEXP( ADR( c15162 ) );
        c15159 = CSTRING_TSCP( t16296 );
        CONSTANTEXP( ADR( c15159 ) );
        c15144 = CSTRING_TSCP( t16297 );
        CONSTANTEXP( ADR( c15144 ) );
        c15130 = CSTRING_TSCP( t16298 );
        CONSTANTEXP( ADR( c15130 ) );
        c15127 = CSTRING_TSCP( t16299 );
        CONSTANTEXP( ADR( c15127 ) );
        c15118 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c15118 ) );
        c15108 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c15108 ) );
        c14988 = STRINGTOSYMBOL( CSTRING_TSCP( "CAMERA-CONTROL" ) );
        CONSTANTEXP( ADR( c14988 ) );
        c14987 = CSTRING_TSCP( t16300 );
        CONSTANTEXP( ADR( c14987 ) );
        c14983 = CSTRING_TSCP( t16301 );
        CONSTANTEXP( ADR( c14983 ) );
        c14980 = CSTRING_TSCP( t16302 );
        CONSTANTEXP( ADR( c14980 ) );
        c14979 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c14979 ) );
        c14924 = CSTRING_TSCP( t16303 );
        CONSTANTEXP( ADR( c14924 ) );
        c14923 = CSTRING_TSCP( t16304 );
        CONSTANTEXP( ADR( c14923 ) );
        c14922 = CSTRING_TSCP( t16305 );
        CONSTANTEXP( ADR( c14922 ) );
        c14771 = CSTRING_TSCP( t16306 );
        CONSTANTEXP( ADR( c14771 ) );
        c14770 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c14770 ) );
        c14687 = CSTRING_TSCP( t16307 );
        CONSTANTEXP( ADR( c14687 ) );
}

DEFTSCP( _2dcamera_ra_2d1_2d0_47998df1_v );
DEFCSTRING( t16308, "gensym-toollib_2dcamera-1-0" );

TSCP  _2dcamera_ra_2d1_2d0_47998df1(  )
{
        PUSHSTACKTRACE( t16308 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dcamera_2_0(){ return 1;gensym_toollib_2dcamera_2_0( );
}

DEFTSCP( _2dcamera_ra_2d3_2d0_3d59de91_v );
DEFCSTRING( t16310, "gensym-toollib_2dcamera-3-0" );

TSCP  _2dcamera_ra_2d3_2d0_3d59de91(  )
{
        PUSHSTACKTRACE( t16310 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dcamera_4_0(){ return 1;gensym_toollib_2dcamera_4_0( );
}

DEFTSCP( _2dcamera_ra_2d5_2d0_b2192b31_v );
DEFCSTRING( t16312, "gensym-toollib_2dcamera-5-0" );

TSCP  _2dcamera_ra_2d5_2d0_b2192b31(  )
{
        PUSHSTACKTRACE( t16312 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dcamera_6_0(){ return 1;gensym_toollib_2dcamera_6_0( );
}

DEFTSCP( _2dcamera_ra_2d7_2d0_c8d97851_v );
DEFCSTRING( t16314, "gensym-toollib_2dcamera-7-0" );

TSCP  _2dcamera_ra_2d7_2d0_c8d97851(  )
{
        PUSHSTACKTRACE( t16314 );
        POPSTACKTRACE( 0 );}
  #include<idealib-c.h>
int gensym_toollib_2dcamera_8_0(){ return 1;gensym_toollib_2dcamera_8_0( );
}

DEFTSCP( _2dcamera_ra_2d9_2d0_77e9c630_v );
DEFCSTRING( t16316, "gensym-toollib_2dcamera-9-0" );

TSCP  _2dcamera_ra_2d9_2d0_77e9c630(  )
{
        PUSHSTACKTRACE( t16316 );
        POPSTACKTRACE( 0 );}
  #include<linux/videodev2.h>
int gensym_toollib_2dcamera_10_0(){ return 1;gensym_toollib_2dcamera_10_0( );
}

DEFTSCP( _2dcamera_a_2d11_2d0_b58c470b_v );
DEFCSTRING( t16318, "gensym-toollib_2dcamera-11-0" );

TSCP  _2dcamera_a_2d11_2d0_b58c470b(  )
{
        PUSHSTACKTRACE( t16318 );
        POPSTACKTRACE( 0 );}
  #include<toollib-v4l2-c.h>
int gensym_toollib_2dcamera_12_0(){ return 1;gensym_toollib_2dcamera_12_0( );
}

DEFTSCP( _2dcamera_a_2d13_2d0_cf4c146b_v );
DEFCSTRING( t16320, "gensym-toollib_2dcamera-13-0" );

TSCP  _2dcamera_a_2d13_2d0_cf4c146b(  )
{
        PUSHSTACKTRACE( t16320 );
        POPSTACKTRACE( 0 );}
  #include<toollib-logitech-controls.h>
int gensym_toollib_2dcamera_14_0(){ return 1;gensym_toollib_2dcamera_14_0( );
}

DEFTSCP( _2dcamera_cameras_2a_62dac422_v );
DEFCSTRING( t16322, "*MAXIMUM-NUMBER-OF-CAMERAS*" );
DEFTSCP( _2dcamera_cameras_2a_903755c2_v );
DEFCSTRING( t16323, "*CAMERAS*" );
DEFTSCP( toollib_2dcamera__2acamera_2a_v );
DEFCSTRING( t16324, "*CAMERA*" );
DEFTSCP( _2dcamera_auto_3f_2a_3c4cce22_v );
DEFCSTRING( t16325, "*AUTO?*" );
DEFTSCP( _2dcamera_o_2dstring_2de2f5e1_v );
DEFCSTRING( t16326, "V4L2-IOCTL-REQUEST-CODE-TO-STRING" );

TSCP  _2dcamera_o_2dstring_2de2f5e1( g13332 )
        TSCP  g13332;
{
        PUSHSTACKTRACE( t16326 );
        POPSTACKTRACE( CSTRING_TSCP( v4l2_ioctl_request_code_to_string( sc_tscp_int( g13332 ) ) ) );
}

DEFTSCP( _2dcamera_o_2dstring_b0f9ab2a_v );
DEFCSTRING( t16328, "V4L2-CID-TO-STRING" );

TSCP  _2dcamera_o_2dstring_b0f9ab2a( g13336 )
        TSCP  g13336;
{
        PUSHSTACKTRACE( t16328 );
        POPSTACKTRACE( CSTRING_TSCP( v4l2_cid_to_string( sc_tscp_int( g13336 ) ) ) );
}

DEFTSCP( _2dcamera_2dcontrols_a3f187ce_v );
DEFCSTRING( t16330, "V4L2-PRINT-AVAILABLE-CONTROLS" );

TSCP  _2dcamera_2dcontrols_a3f187ce( g13340 )
        TSCP  g13340;
{
        PUSHSTACKTRACE( t16330 );
        v4l2_print_available_controls( sc_tscp_int( g13340 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_initialize_66ca3460_v );
DEFCSTRING( t16333, "V4L2-INITIALIZE" );

TSCP  _2dcamera_initialize_66ca3460(  )
{
        PUSHSTACKTRACE( t16333 );
        v4l2_initialize(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_initialize_1122b0a_v );
DEFCSTRING( t16336, "V4L2-DEINITIALIZE" );

TSCP  _2dcamera_initialize_1122b0a(  )
{
        PUSHSTACKTRACE( t16336 );
        v4l2_deinitialize(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_amerate_21_6a3ff266_v );
DEFCSTRING( t16339, "CAMERA-SET-FRAMERATE!" );
EXTERNTSCPP( dbindings_th_2dalloc_20298354, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( dbindings_th_2dalloc_20298354_v );
EXTERNTSCPP( _2dcamera_e_2dset_21_32235f2d, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _2dcamera_e_2dset_21_32235f2d_v );
EXTERNTSCP( _2dcamera__2dcapture_93f74b0e_v );
EXTERNTSCPP( _2dcamera_r_2dset_21_db70aa68, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _2dcamera_r_2dset_21_db70aa68_v );
EXTERNTSCPP( _2dcamera_r_2dset_21_ee38cdc9, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _2dcamera_r_2dset_21_ee38cdc9_v );
EXTERNTSCPP( toollib_2dcamera_ioctl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dcamera_ioctl_v );
EXTERNTSCPP( toollib_2dcamera_camera_2dfd, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dcamera_camera_2dfd_v );
EXTERNTSCP( _2dcamera_parameters_cd7774cd_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  toollib_2dcamera_l13356( s13357, c16341 )
        TSCP  s13357, c16341;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13356 [inside CAMERA-SET-FRAMERAT\
E!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16341, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16341, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16341, 2 );
        _2dcamera_e_2dset_21_32235f2d( s13357, 
                                       _2dcamera__2dcapture_93f74b0e_v );
        _2dcamera_r_2dset_21_db70aa68( s13357, DISPLAY( 1 ) );
        _2dcamera_r_2dset_21_ee38cdc9( s13357, DISPLAY( 2 ) );
        X6 = toollib_2dcamera_camera_2dfd( DISPLAY( 0 ) );
        X5 = toollib_2dcamera_ioctl( X6, 
                                     _2dcamera_parameters_cd7774cd_v, 
                                     s13357 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L16344;
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L16345;
L16344:
        X4 = scrt2__3d_2dtwo( X5, _TSCP( 0 ) );
L16345:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  _2dcamera_amerate_21_6a3ff266( c13353, n13354, d13355 )
        TSCP  c13353, n13354, d13355;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16339 );
        DISPLAY( 0 ) = c13353;
        DISPLAY( 1 ) = n13354;
        DISPLAY( 2 ) = d13355;
        X1 = C_FIXED( sizeof( struct v4l2_streamparm ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l13356, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dcapture_93f74b0e_v );
DEFCSTRING( t16346, "BUF-TYPE-VIDEO-CAPTURE" );
DEFTSCP( _2dcamera_x_2dset_21_bf5ed330_v );
DEFCSTRING( t16347, "V4L2-FORMAT-INDEX-SET!" );
EXTERNTSCPP( scrt4_c_2dint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dset_21_v );

TSCP  _2dcamera_x_2dset_21_bf5ed330( o13372, v13373 )
        TSCP  o13372, v13373;
{
        PUSHSTACKTRACE( t16347 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13372, 
                                               _TSCP( 0 ), v13373 ) );
}

DEFTSCP( _2dcamera_at_2dindex_5ffc3afa_v );
DEFCSTRING( t16349, "V4L2-FORMAT-INDEX" );
EXTERNTSCPP( scrt4_c_2dint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dref_v );

TSCP  _2dcamera_at_2dindex_5ffc3afa( o13376 )
        TSCP  o13376;
{
        PUSHSTACKTRACE( t16349 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13376, _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera_x_2dupdate_75cecab4_v );
DEFCSTRING( t16351, "V4L2-FORMAT-INDEX-UPDATE" );

TSCP  _2dcamera_x_2dupdate_75cecab4( o13379, f13380 )
        TSCP  o13379, f13380;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16351 );
        X3 = _2dcamera_at_2dindex_5ffc3afa( o13379 );
        X2 = f13380;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_x_2dset_21_bf5ed330( o13379, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_92d958bb_v );
DEFCSTRING( t16353, "V4L2-FORMAT-TYPE-SET!" );

TSCP  _2dcamera_e_2dset_21_92d958bb( o13383, v13384 )
        TSCP  o13383, v13384;
{
        PUSHSTACKTRACE( t16353 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13383, 
                                               _TSCP( 16 ), v13384 ) );
}

DEFTSCP( _2dcamera_mat_2dtype_6c061fa3_v );
DEFCSTRING( t16355, "V4L2-FORMAT-TYPE" );

TSCP  _2dcamera_mat_2dtype_6c061fa3( o13388 )
        TSCP  o13388;
{
        PUSHSTACKTRACE( t16355 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13388, _TSCP( 16 ) ) );
}

DEFTSCP( _2dcamera_e_2dupdate_5849413f_v );
DEFCSTRING( t16357, "V4L2-FORMAT-TYPE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_5849413f( o13391, f13392 )
        TSCP  o13391, f13392;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16357 );
        X3 = _2dcamera_mat_2dtype_6c061fa3( o13391 );
        X2 = f13392;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_92d958bb( o13391, X1 ) );
}

DEFTSCP( _2dcamera_l_2dset_21_2d9e97ab_v );
DEFCSTRING( t16359, "V4L2-FORMAT-PIXEL-SET!" );

TSCP  _2dcamera_l_2dset_21_2d9e97ab( o13395, v13396 )
        TSCP  o13395, v13396;
{
        PUSHSTACKTRACE( t16359 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13395, 
                                               _TSCP( 176 ), v13396 ) );
}

DEFTSCP( _2dcamera_at_2dpixel_a03d79d9_v );
DEFCSTRING( t16361, "V4L2-FORMAT-PIXEL" );

TSCP  _2dcamera_at_2dpixel_a03d79d9( o13400 )
        TSCP  o13400;
{
        PUSHSTACKTRACE( t16361 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13400, _TSCP( 176 ) ) );
}

DEFTSCP( _2dcamera_l_2dupdate_e70e8e2f_v );
DEFCSTRING( t16363, "V4L2-FORMAT-PIXEL-UPDATE" );

TSCP  _2dcamera_l_2dupdate_e70e8e2f( o13403, f13404 )
        TSCP  o13403, f13404;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16363 );
        X3 = _2dcamera_at_2dpixel_a03d79d9( o13403 );
        X2 = f13404;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_l_2dset_21_2d9e97ab( o13403, X1 ) );
}

DEFTSCP( _2dcamera_x_2dset_21_877568f9_v );
DEFCSTRING( t16365, "V4L2-FRAME-SIZE-INDEX-SET!" );

TSCP  _2dcamera_x_2dset_21_877568f9( o13407, v13408 )
        TSCP  o13407, v13408;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16365 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13407, X1, v13408 ) );
}

DEFTSCP( _2dcamera_ze_2dindex_64303acc_v );
DEFCSTRING( t16367, "V4L2-FRAME-SIZE-INDEX" );

TSCP  _2dcamera_ze_2dindex_64303acc( o13411 )
        TSCP  o13411;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16367 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13411, X1 ) );
}

DEFTSCP( _2dcamera_x_2dupdate_4de5717d_v );
DEFCSTRING( t16369, "V4L2-FRAME-SIZE-INDEX-UPDATE" );

TSCP  _2dcamera_x_2dupdate_4de5717d( o13414, f13415 )
        TSCP  o13414, f13415;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16369 );
        X3 = _2dcamera_ze_2dindex_64303acc( o13414 );
        X2 = f13415;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_x_2dset_21_877568f9( o13414, X1 ) );
}

DEFTSCP( _2dcamera_t_2dset_21_6f7de9c2_v );
DEFCSTRING( t16371, "V4L2-FRAME-SIZE-PIXEL-FORMAT-SET!" );

TSCP  _2dcamera_t_2dset_21_6f7de9c2( o13418, v13419 )
        TSCP  o13418, v13419;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16371 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, pixel_format ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13418, X1, v13419 ) );
}

DEFTSCP( _2dcamera_l_2dformat_99ba7241_v );
DEFCSTRING( t16373, "V4L2-FRAME-SIZE-PIXEL-FORMAT" );

TSCP  _2dcamera_l_2dformat_99ba7241( o13422 )
        TSCP  o13422;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16373 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, pixel_format ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13422, X1 ) );
}

DEFTSCP( _2dcamera_t_2dupdate_a5edf046_v );
DEFCSTRING( t16375, "V4L2-FRAME-SIZE-PIXEL-FORMAT-UPDATE" );

TSCP  _2dcamera_t_2dupdate_a5edf046( o13425, f13426 )
        TSCP  o13425, f13426;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16375 );
        X3 = _2dcamera_l_2dformat_99ba7241( o13425 );
        X2 = f13426;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_t_2dset_21_6f7de9c2( o13425, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_61a05519_v );
DEFCSTRING( t16377, "V4L2-FRAME-SIZE-TYPE-SET!" );

TSCP  _2dcamera_e_2dset_21_61a05519( o13429, v13430 )
        TSCP  o13429, v13430;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16377 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13429, X1, v13430 ) );
}

DEFTSCP( _2dcamera_ize_2dtype_ce26e183_v );
DEFCSTRING( t16379, "V4L2-FRAME-SIZE-TYPE" );

TSCP  _2dcamera_ize_2dtype_ce26e183( o13433 )
        TSCP  o13433;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16379 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13433, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_ab304c9d_v );
DEFCSTRING( t16381, "V4L2-FRAME-SIZE-TYPE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_ab304c9d( o13436, f13437 )
        TSCP  o13436, f13437;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16381 );
        X3 = _2dcamera_ize_2dtype_ce26e183( o13436 );
        X2 = f13437;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_61a05519( o13436, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_3be7f868_v );
DEFCSTRING( t16383, "V4L2-FRAME-SIZE-DISCRETE-SET!" );

TSCP  _2dcamera_e_2dset_21_3be7f868( o13440, v13441 )
        TSCP  o13440, v13441;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16383 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, discrete ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13440, X1, v13441 ) );
}

DEFTSCP( _2dcamera_2ddiscrete_3deadc3_v );
DEFCSTRING( t16385, "V4L2-FRAME-SIZE-DISCRETE" );

TSCP  _2dcamera_2ddiscrete_3deadc3( o13444 )
        TSCP  o13444;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16385 );
        X1 = C_FIXED( offsetof( struct v4l2_frmsizeenum, discrete ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13444, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_f177e1ec_v );
DEFCSTRING( t16387, "V4L2-FRAME-SIZE-DISCRETE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_f177e1ec( o13447, f13448 )
        TSCP  o13447, f13448;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16387 );
        X3 = _2dcamera_2ddiscrete_3deadc3( o13447 );
        X2 = f13448;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_3be7f868( o13447, X1 ) );
}

DEFTSCP( _2dcamera_h_2dset_21_5e03ae74_v );
DEFCSTRING( t16389, "V4L2-DISCRETE-WIDTH-SET!" );

TSCP  _2dcamera_h_2dset_21_5e03ae74( o13451, v13452 )
        TSCP  o13451, v13452;
{
        PUSHSTACKTRACE( t16389 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13451, 
                                               _TSCP( 48 ), v13452 ) );
}

DEFTSCP( _2dcamera_te_2dwidth_77e2efd7_v );
DEFCSTRING( t16391, "V4L2-DISCRETE-WIDTH" );

TSCP  _2dcamera_te_2dwidth_77e2efd7( o13456 )
        TSCP  o13456;
{
        PUSHSTACKTRACE( t16391 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13456, _TSCP( 48 ) ) );
}

DEFTSCP( _2dcamera_h_2dupdate_9493b7f0_v );
DEFCSTRING( t16393, "V4L2-DISCRETE-WIDTH-UPDATE" );

TSCP  _2dcamera_h_2dupdate_9493b7f0( o13459, f13460 )
        TSCP  o13459, f13460;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16393 );
        X3 = _2dcamera_te_2dwidth_77e2efd7( o13459 );
        X2 = f13460;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_h_2dset_21_5e03ae74( o13459, X1 ) );
}

DEFTSCP( _2dcamera_t_2dset_21_bfe29ed2_v );
DEFCSTRING( t16395, "V4L2-DISCRETE-HEIGHT-SET!" );

TSCP  _2dcamera_t_2dset_21_bfe29ed2( o13463, v13464 )
        TSCP  o13463, v13464;
{
        PUSHSTACKTRACE( t16395 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13463, 
                                               _TSCP( 64 ), v13464 ) );
}

DEFTSCP( _2dcamera_e_2dheight_94d28806_v );
DEFCSTRING( t16397, "V4L2-DISCRETE-HEIGHT" );

TSCP  _2dcamera_e_2dheight_94d28806( o13468 )
        TSCP  o13468;
{
        PUSHSTACKTRACE( t16397 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13468, _TSCP( 64 ) ) );
}

DEFTSCP( _2dcamera_t_2dupdate_75728756_v );
DEFCSTRING( t16399, "V4L2-DISCRETE-HEIGHT-UPDATE" );

TSCP  _2dcamera_t_2dupdate_75728756( o13471, f13472 )
        TSCP  o13471, f13472;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16399 );
        X3 = _2dcamera_e_2dheight_94d28806( o13471 );
        X2 = f13472;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_t_2dset_21_bfe29ed2( o13471, X1 ) );
}

DEFTSCP( _2dcamera_x_2dset_21_a5432235_v );
DEFCSTRING( t16401, "V4L2-FRAME-INTERVAL-INDEX-SET!" );

TSCP  _2dcamera_x_2dset_21_a5432235( o13475, v13476 )
        TSCP  o13475, v13476;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16401 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13475, X1, v13476 ) );
}

DEFTSCP( _2dcamera_al_2dindex_c38c25cb_v );
DEFCSTRING( t16403, "V4L2-FRAME-INTERVAL-INDEX" );

TSCP  _2dcamera_al_2dindex_c38c25cb( o13479 )
        TSCP  o13479;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16403 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13479, X1 ) );
}

DEFTSCP( _2dcamera_x_2dupdate_6fd33bb1_v );
DEFCSTRING( t16405, "V4L2-FRAME-INTERVAL-INDEX-UPDATE" );

TSCP  _2dcamera_x_2dupdate_6fd33bb1( o13482, f13483 )
        TSCP  o13482, f13483;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16405 );
        X3 = _2dcamera_al_2dindex_c38c25cb( o13482 );
        X2 = f13483;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_x_2dset_21_a5432235( o13482, X1 ) );
}

DEFTSCP( _2dcamera_t_2dset_21_804f3ee_v );
DEFCSTRING( t16407, "V4L2-FRAME-INTERVAL-PIXEL-FORMAT-SET!" );

TSCP  _2dcamera_t_2dset_21_804f3ee( o13486, v13487 )
        TSCP  o13486, v13487;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16407 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, pixel_format ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13486, X1, v13487 ) );
}

DEFTSCP( _2dcamera_l_2dformat_bb8c388d_v );
DEFCSTRING( t16409, "V4L2-FRAME-INTERVAL-PIXEL-FORMAT" );

TSCP  _2dcamera_l_2dformat_bb8c388d( o13490 )
        TSCP  o13490;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16409 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, pixel_format ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13490, X1 ) );
}

DEFTSCP( _2dcamera_t_2dupdate_c294ea6a_v );
DEFCSTRING( t16411, "V4L2-FRAME-INTERVAL-PIXEL-FORMAT-UPDATE" );

TSCP  _2dcamera_t_2dupdate_c294ea6a( o13493, f13494 )
        TSCP  o13493, f13494;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16411 );
        X3 = _2dcamera_l_2dformat_bb8c388d( o13493 );
        X2 = f13494;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_t_2dset_21_804f3ee( o13493, X1 ) );
}

DEFTSCP( _2dcamera_h_2dset_21_3dcfd762_v );
DEFCSTRING( t16413, "V4L2-FRAME-INTERVAL-WIDTH-SET!" );

TSCP  _2dcamera_h_2dset_21_3dcfd762( o13497, v13498 )
        TSCP  o13497, v13498;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16413 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, width ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13497, X1, v13498 ) );
}

DEFTSCP( _2dcamera_al_2dwidth_cfe507e5_v );
DEFCSTRING( t16415, "V4L2-FRAME-INTERVAL-WIDTH" );

TSCP  _2dcamera_al_2dwidth_cfe507e5( o13501 )
        TSCP  o13501;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16415 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, width ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13501, X1 ) );
}

DEFTSCP( _2dcamera_h_2dupdate_f75fcee6_v );
DEFCSTRING( t16417, "V4L2-FRAME-INTERVAL-WIDTH-UPDATE" );

TSCP  _2dcamera_h_2dupdate_f75fcee6( o13504, f13505 )
        TSCP  o13504, f13505;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16417 );
        X3 = _2dcamera_al_2dwidth_cfe507e5( o13504 );
        X2 = f13505;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_h_2dset_21_3dcfd762( o13504, X1 ) );
}

DEFTSCP( _2dcamera_t_2dset_21_4b55e7fa_v );
DEFCSTRING( t16419, "V4L2-FRAME-INTERVAL-HEIGHT-SET!" );

TSCP  _2dcamera_t_2dset_21_4b55e7fa( o13508, v13509 )
        TSCP  o13508, v13509;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16419 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, height ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13508, X1, v13509 ) );
}

DEFTSCP( _2dcamera_l_2dheight_5cbdde6e_v );
DEFCSTRING( t16421, "V4L2-FRAME-INTERVAL-HEIGHT" );

TSCP  _2dcamera_l_2dheight_5cbdde6e( o13512 )
        TSCP  o13512;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16421 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, height ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13512, X1 ) );
}

DEFTSCP( _2dcamera_t_2dupdate_81c5fe7e_v );
DEFCSTRING( t16423, "V4L2-FRAME-INTERVAL-HEIGHT-UPDATE" );

TSCP  _2dcamera_t_2dupdate_81c5fe7e( o13515, f13516 )
        TSCP  o13515, f13516;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16423 );
        X3 = _2dcamera_l_2dheight_5cbdde6e( o13515 );
        X2 = f13516;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_t_2dset_21_4b55e7fa( o13515, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_55fc20af_v );
DEFCSTRING( t16425, "V4L2-FRAME-INTERVAL-TYPE-SET!" );

TSCP  _2dcamera_e_2dset_21_55fc20af( o13519, v13520 )
        TSCP  o13519, v13520;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16425 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13519, X1, v13520 ) );
}

DEFTSCP( _2dcamera_val_2dtype_151f8767_v );
DEFCSTRING( t16427, "V4L2-FRAME-INTERVAL-TYPE" );

TSCP  _2dcamera_val_2dtype_151f8767( o13523 )
        TSCP  o13523;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16427 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13523, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_9f6c392b_v );
DEFCSTRING( t16429, "V4L2-FRAME-INTERVAL-TYPE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_9f6c392b( o13526, f13527 )
        TSCP  o13526, f13527;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16429 );
        X3 = _2dcamera_val_2dtype_151f8767( o13526 );
        X2 = f13527;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_55fc20af( o13526, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_667ea578_v );
DEFCSTRING( t16431, "V4L2-FRAME-INTERVAL-DISCRETE-SET!" );

TSCP  _2dcamera_e_2dset_21_667ea578( o13530, v13531 )
        TSCP  o13530, v13531;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16431 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, discrete ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13530, X1, v13531 ) );
}

DEFTSCP( _2dcamera_2ddiscrete_91c4ad8_v );
DEFCSTRING( t16433, "V4L2-FRAME-INTERVAL-DISCRETE" );

TSCP  _2dcamera_2ddiscrete_91c4ad8( o13534 )
        TSCP  o13534;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16433 );
        X1 = C_FIXED( offsetof( struct v4l2_frmivalenum, discrete ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13534, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_aceebcfc_v );
DEFCSTRING( t16435, "V4L2-FRAME-INTERVAL-DISCRETE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_aceebcfc( o13537, f13538 )
        TSCP  o13537, f13538;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16435 );
        X3 = _2dcamera_2ddiscrete_91c4ad8( o13537 );
        X2 = f13538;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_667ea578( o13537, X1 ) );
}

DEFTSCP( _2dcamera_2ddiscrete_1ed55d57_v );
DEFCSTRING( t16437, "TYPE-DISCRETE" );
DEFTSCP( _2dcamera_continuous_48f9089_v );
DEFCSTRING( t16438, "TYPE-CONTINUOUS" );
DEFTSCP( _2dcamera_2dstepwise_ede80b2e_v );
DEFCSTRING( t16439, "TYPE-STEPWISE" );
DEFTSCP( _2dcamera_r_2dset_21_eb42574e_v );
DEFCSTRING( t16440, "V4L2-FRAME-INTERVAL-NUMERATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_eb42574e( o13541, v13542 )
        TSCP  o13541, v13542;
{
        PUSHSTACKTRACE( t16440 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13541, 
                                               _TSCP( 80 ), v13542 ) );
}

DEFTSCP( _2dcamera_dnumerator_1c058315_v );
DEFCSTRING( t16442, "V4L2-FRAME-INTERVAL-NUMERATOR" );

TSCP  _2dcamera_dnumerator_1c058315( o13546 )
        TSCP  o13546;
{
        PUSHSTACKTRACE( t16442 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13546, _TSCP( 80 ) ) );
}

DEFTSCP( _2dcamera_r_2dupdate_21d24eca_v );
DEFCSTRING( t16444, "V4L2-FRAME-INTERVAL-NUMERATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_21d24eca( o13549, f13550 )
        TSCP  o13549, f13550;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16444 );
        X3 = _2dcamera_dnumerator_1c058315( o13549 );
        X2 = f13550;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_eb42574e( o13549, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_eeeaf07e_v );
DEFCSTRING( t16446, "V4L2-FRAME-INTERVAL-DENOMINATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_eeeaf07e( o13553, v13554 )
        TSCP  o13553, v13554;
{
        PUSHSTACKTRACE( t16446 );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13553, 
                                               _TSCP( 96 ), v13554 ) );
}

DEFTSCP( _2dcamera_enominator_c1e15c7a_v );
DEFCSTRING( t16448, "V4L2-FRAME-INTERVAL-DENOMINATOR" );

TSCP  _2dcamera_enominator_c1e15c7a( o13558 )
        TSCP  o13558;
{
        PUSHSTACKTRACE( t16448 );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13558, _TSCP( 96 ) ) );
}

DEFTSCP( _2dcamera_r_2dupdate_247ae9fa_v );
DEFCSTRING( t16450, "V4L2-FRAME-INTERVAL-DENOMINATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_247ae9fa( o13561, f13562 )
        TSCP  o13561, f13562;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16450 );
        X3 = _2dcamera_enominator_c1e15c7a( o13561 );
        X2 = f13562;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_eeeaf07e( o13561, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_8212948c_v );
DEFCSTRING( t16452, "V4L2-FRACT-NUMERATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_8212948c( o13565, v13566 )
        TSCP  o13565, v13566;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16452 );
        X1 = C_FIXED( offsetof( struct v4l2_fract, numerator ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13565, X1, v13566 ) );
}

DEFTSCP( _2dcamera_dnumerator_3109ed8_v );
DEFCSTRING( t16454, "V4L2-FRACT-NUMERATOR" );

TSCP  _2dcamera_dnumerator_3109ed8( o13569 )
        TSCP  o13569;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16454 );
        X1 = C_FIXED( offsetof( struct v4l2_fract, numerator ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13569, X1 ) );
}

DEFTSCP( _2dcamera_r_2dupdate_48828d08_v );
DEFCSTRING( t16456, "V4L2-FRACT-NUMERATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_48828d08( o13572, f13573 )
        TSCP  o13572, f13573;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16456 );
        X3 = _2dcamera_dnumerator_3109ed8( o13572 );
        X2 = f13573;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_8212948c( o13572, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_154bbfe8_v );
DEFCSTRING( t16458, "V4L2-FRACT-DENOMINATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_154bbfe8( o13576, v13577 )
        TSCP  o13576, v13577;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16458 );
        X1 = C_FIXED( offsetof( struct v4l2_fract, denominator ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13576, X1, v13577 ) );
}

DEFTSCP( _2dcamera_enominator_dcb386b5_v );
DEFCSTRING( t16460, "V4L2-FRACT-DENOMINATOR" );

TSCP  _2dcamera_enominator_dcb386b5( o13580 )
        TSCP  o13580;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16460 );
        X1 = C_FIXED( offsetof( struct v4l2_fract, denominator ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13580, X1 ) );
}

DEFTSCP( _2dcamera_r_2dupdate_dfdba66c_v );
DEFCSTRING( t16462, "V4L2-FRACT-DENOMINATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_dfdba66c( o13583, f13584 )
        TSCP  o13583, f13584;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16462 );
        X3 = _2dcamera_enominator_dcb386b5( o13583 );
        X2 = f13584;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_154bbfe8( o13583, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_32235f2d_v );
DEFCSTRING( t16464, "V4L2-STREAM-PARAM-TYPE-SET!" );

TSCP  _2dcamera_e_2dset_21_32235f2d( o13586, v13587 )
        TSCP  o13586, v13587;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16464 );
        X1 = C_FIXED( offsetof( struct v4l2_streamparm, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13586, X1, v13587 ) );
}

DEFTSCP( _2dcamera_ram_2dtype_5f72022b_v );
DEFCSTRING( t16466, "V4L2-STREAM-PARAM-TYPE" );

TSCP  _2dcamera_ram_2dtype_5f72022b( o13590 )
        TSCP  o13590;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16466 );
        X1 = C_FIXED( offsetof( struct v4l2_streamparm, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13590, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_f8b346a9_v );
DEFCSTRING( t16468, "V4L2-STREAM-PARAM-TYPE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_f8b346a9( o13593, f13594 )
        TSCP  o13593, f13594;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16468 );
        X3 = _2dcamera_ram_2dtype_5f72022b( o13593 );
        X2 = f13594;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_32235f2d( o13593, X1 ) );
}

DEFTSCP( _2dcamera_y_2dset_21_cc0c5fa7_v );
DEFCSTRING( t16470, "V4L2-STREAM-PARAM-CAPABILITY-SET!" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  _2dcamera_y_2dset_21_cc0c5fa7( o13597, v13598 )
        TSCP  o13597, v13598;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16470 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, capability ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16473;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16474;
L16473:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16474:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13597, X1, v13598 ) );
}

DEFTSCP( _2dcamera_capability_123a8ff7_v );
DEFCSTRING( t16475, "V4L2-STREAM-PARAM-CAPABILITY" );

TSCP  _2dcamera_capability_123a8ff7( o13607 )
        TSCP  o13607;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16475 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, capability ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16478;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16479;
L16478:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16479:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13607, X1 ) );
}

DEFTSCP( _2dcamera_y_2dupdate_69c4623_v );
DEFCSTRING( t16480, "V4L2-STREAM-PARAM-CAPABILITY-UPDATE" );

TSCP  _2dcamera_y_2dupdate_69c4623( o13616, f13617 )
        TSCP  o13616, f13617;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16480 );
        X3 = _2dcamera_capability_123a8ff7( o13616 );
        X2 = f13617;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_y_2dset_21_cc0c5fa7( o13616, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_7ac3b555_v );
DEFCSTRING( t16482, "V4L2-STREAM-PARAM-CAPTUREMODE-SET!" );

TSCP  _2dcamera_e_2dset_21_7ac3b555( o13620, v13621 )
        TSCP  o13620, v13621;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16482 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, capturemode ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16485;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16486;
L16485:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16486:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13620, X1, v13621 ) );
}

DEFTSCP( _2dcamera_apturemode_8c4d721b_v );
DEFCSTRING( t16487, "V4L2-STREAM-PARAM-CAPTUREMODE" );

TSCP  _2dcamera_apturemode_8c4d721b( o13630 )
        TSCP  o13630;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16487 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, capturemode ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16490;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16491;
L16490:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16491:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13630, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_b053acd1_v );
DEFCSTRING( t16492, "V4L2-STREAM-PARAM-CAPTUREMODE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_b053acd1( o13639, f13640 )
        TSCP  o13639, f13640;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16492 );
        X3 = _2dcamera_apturemode_8c4d721b( o13639 );
        X2 = f13640;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_7ac3b555( o13639, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_db70aa68_v );
DEFCSTRING( t16494, "V4L2-STREAM-PARAM-TIMEPERFRAME-NUMERATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_db70aa68( o13642, v13643 )
        TSCP  o13642, v13643;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t16494 );
        X3 = C_FIXED( offsetof( struct v4l2_fract, numerator ) );
        X4 = C_FIXED( offsetof( struct v4l2_captureparm, timeperframe ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L16497;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L16498;
L16497:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L16498:
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16500;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16501;
L16500:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16501:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13642, X1, v13643 ) );
}

DEFTSCP( _2dcamera_dnumerator_64bf4c7c_v );
DEFCSTRING( t16502, "V4L2-STREAM-PARAM-TIMEPERFRAME-NUMERATOR" );

TSCP  _2dcamera_dnumerator_64bf4c7c( o13658 )
        TSCP  o13658;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t16502 );
        X3 = C_FIXED( offsetof( struct v4l2_fract, numerator ) );
        X4 = C_FIXED( offsetof( struct v4l2_captureparm, timeperframe ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L16505;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L16506;
L16505:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L16506:
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16508;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16509;
L16508:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16509:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13658, X1 ) );
}

DEFTSCP( _2dcamera_r_2dupdate_11e0b3ec_v );
DEFCSTRING( t16510, "V4L2-STREAM-PARAM-TIMEPERFRAME-NUMERATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_11e0b3ec( o13673, f13674 )
        TSCP  o13673, f13674;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16510 );
        X3 = _2dcamera_dnumerator_64bf4c7c( o13673 );
        X2 = f13674;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_db70aa68( o13673, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_ee38cdc9_v );
DEFCSTRING( t16512, "V4L2-STREAM-PARAM-TIMEPERFRAME-DENOMINATOR-SET!" );

TSCP  _2dcamera_r_2dset_21_ee38cdc9( o13676, v13677 )
        TSCP  o13676, v13677;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t16512 );
        X3 = C_FIXED( offsetof( struct v4l2_fract, denominator ) );
        X4 = C_FIXED( offsetof( struct v4l2_captureparm, timeperframe ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L16515;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L16516;
L16515:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L16516:
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16518;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16519;
L16518:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16519:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13676, X1, v13677 ) );
}

DEFTSCP( _2dcamera_enominator_7e052b0f_v );
DEFCSTRING( t16520, "V4L2-STREAM-PARAM-TIMEPERFRAME-DENOMINATOR" );

TSCP  _2dcamera_enominator_7e052b0f( o13692 )
        TSCP  o13692;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t16520 );
        X3 = C_FIXED( offsetof( struct v4l2_fract, denominator ) );
        X4 = C_FIXED( offsetof( struct v4l2_captureparm, timeperframe ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L16523;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L16524;
L16523:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L16524:
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16526;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16527;
L16526:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16527:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13692, X1 ) );
}

DEFTSCP( _2dcamera_r_2dupdate_24a8d44d_v );
DEFCSTRING( t16528, 
            "V4L2-STREAM-PARAM-TIMEPERFRAME-DENOMINATOR-UPDATE" );

TSCP  _2dcamera_r_2dupdate_24a8d44d( o13707, f13708 )
        TSCP  o13707, f13708;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16528 );
        X3 = _2dcamera_enominator_7e052b0f( o13707 );
        X2 = f13708;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_ee38cdc9( o13707, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_92d37918_v );
DEFCSTRING( t16530, "V4L2-STREAM-PARAM-EXTENDEDMODE-SET!" );

TSCP  _2dcamera_e_2dset_21_92d37918( o13711, v13712 )
        TSCP  o13711, v13712;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16530 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, extendedmode ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16533;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16534;
L16533:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16534:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13711, X1, v13712 ) );
}

DEFTSCP( _2dcamera_tendedmode_a86f487c_v );
DEFCSTRING( t16535, "V4L2-STREAM-PARAM-EXTENDEDMODE" );

TSCP  _2dcamera_tendedmode_a86f487c( o13721 )
        TSCP  o13721;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16535 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, extendedmode ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16538;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16539;
L16538:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16539:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13721, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_5843609c_v );
DEFCSTRING( t16540, "V4L2-STREAM-PARAM-EXTENDEDMODE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_5843609c( o13730, f13731 )
        TSCP  o13730, f13731;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16540 );
        X3 = _2dcamera_tendedmode_a86f487c( o13730 );
        X2 = f13731;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_92d37918( o13730, X1 ) );
}

DEFTSCP( _2dcamera_s_2dset_21_5d191f9f_v );
DEFCSTRING( t16542, "V4L2-STREAM-PARAM-READBUFFERS-SET!" );

TSCP  _2dcamera_s_2dset_21_5d191f9f( o13734, v13735 )
        TSCP  o13734, v13735;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16542 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, readbuffers ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16545;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16546;
L16545:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16546:
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13734, X1, v13735 ) );
}

DEFTSCP( _2dcamera_eadbuffers_e7d8440a_v );
DEFCSTRING( t16547, "V4L2-STREAM-PARAM-READBUFFERS" );

TSCP  _2dcamera_eadbuffers_e7d8440a( o13744 )
        TSCP  o13744;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16547 );
        X2 = C_FIXED( offsetof( struct v4l2_captureparm, readbuffers ) );
        X3 = C_FIXED( offsetof( struct v4l2_streamparm, parm ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L16550;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L16551;
L16550:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L16551:
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13744, X1 ) );
}

DEFTSCP( _2dcamera_s_2dupdate_9789061b_v );
DEFCSTRING( t16552, "V4L2-STREAM-PARAM-READBUFFERS-UPDATE" );

TSCP  _2dcamera_s_2dupdate_9789061b( o13753, f13754 )
        TSCP  o13753, f13754;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16552 );
        X3 = _2dcamera_eadbuffers_e7d8440a( o13753 );
        X2 = f13754;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_s_2dset_21_5d191f9f( o13753, X1 ) );
}

DEFTSCP( _2dcamera_d_2dset_21_4cb06548_v );
DEFCSTRING( t16554, "V4L2-CONTROL-ID-SET!" );

TSCP  _2dcamera_d_2dset_21_4cb06548( o13757, v13758 )
        TSCP  o13757, v13758;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16554 );
        X1 = C_FIXED( offsetof( struct v4l2_control, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13757, X1, v13758 ) );
}

DEFTSCP( _2dcamera_ntrol_2did_7321a14c_v );
DEFCSTRING( t16556, "V4L2-CONTROL-ID" );

TSCP  _2dcamera_ntrol_2did_7321a14c( o13761 )
        TSCP  o13761;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16556 );
        X1 = C_FIXED( offsetof( struct v4l2_control, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13761, X1 ) );
}

DEFTSCP( _2dcamera_d_2dupdate_86207ccc_v );
DEFCSTRING( t16558, "V4L2-CONTROL-ID-UPDATE" );

TSCP  _2dcamera_d_2dupdate_86207ccc( o13764, f13765 )
        TSCP  o13764, f13765;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16558 );
        X3 = _2dcamera_ntrol_2did_7321a14c( o13764 );
        X2 = f13765;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_d_2dset_21_4cb06548( o13764, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_224c1c8c_v );
DEFCSTRING( t16560, "V4L2-CONTROL-VALUE-SET!" );

TSCP  _2dcamera_e_2dset_21_224c1c8c( o13768, v13769 )
        TSCP  o13768, v13769;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16560 );
        X1 = C_FIXED( offsetof( struct v4l2_control, value ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13768, X1, v13769 ) );
}

DEFTSCP( _2dcamera_ol_2dvalue_79c63360_v );
DEFCSTRING( t16562, "V4L2-CONTROL-VALUE" );

TSCP  _2dcamera_ol_2dvalue_79c63360( o13772 )
        TSCP  o13772;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16562 );
        X1 = C_FIXED( offsetof( struct v4l2_control, value ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13772, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_e8dc0508_v );
DEFCSTRING( t16564, "V4L2-CONTROL-VALUE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_e8dc0508( o13775, f13776 )
        TSCP  o13775, f13776;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16564 );
        X3 = _2dcamera_ol_2dvalue_79c63360( o13775 );
        X2 = f13776;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_224c1c8c( o13775, X1 ) );
}

DEFTSCP( _2dcamera_d_2dset_21_eaf81c25_v );
DEFCSTRING( t16566, "V4L2-QUERYMENU-ID-SET!" );

TSCP  _2dcamera_d_2dset_21_eaf81c25( o13779, v13780 )
        TSCP  o13779, v13780;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16566 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13779, X1, v13780 ) );
}

DEFTSCP( _2dcamera_ymenu_2did_8cb39ed5_v );
DEFCSTRING( t16568, "V4L2-QUERYMENU-ID" );

TSCP  _2dcamera_ymenu_2did_8cb39ed5( o13783 )
        TSCP  o13783;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16568 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13783, X1 ) );
}

DEFTSCP( _2dcamera_d_2dupdate_206805a1_v );
DEFCSTRING( t16570, "V4L2-QUERYMENU-ID-UPDATE" );

TSCP  _2dcamera_d_2dupdate_206805a1( o13786, f13787 )
        TSCP  o13786, f13787;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16570 );
        X3 = _2dcamera_ymenu_2did_8cb39ed5( o13786 );
        X2 = f13787;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_d_2dset_21_eaf81c25( o13786, X1 ) );
}

DEFTSCP( _2dcamera_x_2dset_21_8945aa86_v );
DEFCSTRING( t16572, "V4L2-QUERYMENU-INDEX-SET!" );

TSCP  _2dcamera_x_2dset_21_8945aa86( o13790, v13791 )
        TSCP  o13790, v13791;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16572 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13790, X1, v13791 ) );
}

DEFTSCP( _2dcamera_nu_2dindex_50df5781_v );
DEFCSTRING( t16574, "V4L2-QUERYMENU-INDEX" );

TSCP  _2dcamera_nu_2dindex_50df5781( o13794 )
        TSCP  o13794;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16574 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, index ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13794, X1 ) );
}

DEFTSCP( _2dcamera_x_2dupdate_43d5b302_v );
DEFCSTRING( t16576, "V4L2-QUERYMENU-INDEX-UPDATE" );

TSCP  _2dcamera_x_2dupdate_43d5b302( o13797, f13798 )
        TSCP  o13797, f13798;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16576 );
        X3 = _2dcamera_nu_2dindex_50df5781( o13797 );
        X2 = f13798;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_x_2dset_21_8945aa86( o13797, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_6bc4ca23_v );
DEFCSTRING( t16578, "V4L2-QUERYMENU-NAME-SET!" );
EXTERNTSCPP( scrt4_c_2dbyte_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dbyte_2dset_21_v );

TSCP  _2dcamera_e_2dset_21_6bc4ca23( o13801, v13802 )
        TSCP  o13801, v13802;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16578 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, name ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dset_21( o13801, X1, v13802 ) );
}

DEFTSCP( _2dcamera_enu_2dname_9d6f79c5_v );
DEFCSTRING( t16580, "V4L2-QUERYMENU-NAME" );
EXTERNTSCPP( scrt4_c_2dbyte_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dbyte_2dref_v );

TSCP  _2dcamera_enu_2dname_9d6f79c5( o13805 )
        TSCP  o13805;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16580 );
        X1 = C_FIXED( offsetof( struct v4l2_querymenu, name ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dref( o13805, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_a154d3a7_v );
DEFCSTRING( t16582, "V4L2-QUERYMENU-NAME-UPDATE" );

TSCP  _2dcamera_e_2dupdate_a154d3a7( o13808, f13809 )
        TSCP  o13808, f13809;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16582 );
        X3 = _2dcamera_enu_2dname_9d6f79c5( o13808 );
        X2 = f13809;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_6bc4ca23( o13808, X1 ) );
}

DEFTSCP( _2dcamera_d_2dset_21_fbd71c4_v );
DEFCSTRING( t16584, "V4L2-QUERY-CONTROL-ID-SET!" );

TSCP  _2dcamera_d_2dset_21_fbd71c4( o13812, v13813 )
        TSCP  o13812, v13813;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16584 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13812, X1, v13813 ) );
}

DEFTSCP( _2dcamera_ntrol_2did_1e8def34_v );
DEFCSTRING( t16586, "V4L2-QUERY-CONTROL-ID" );

TSCP  _2dcamera_ntrol_2did_1e8def34( o13816 )
        TSCP  o13816;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16586 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, id ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13816, X1 ) );
}

DEFTSCP( _2dcamera_d_2dupdate_c52d6840_v );
DEFCSTRING( t16588, "V4L2-QUERY-CONTROL-ID-UPDATE" );

TSCP  _2dcamera_d_2dupdate_c52d6840( o13819, f13820 )
        TSCP  o13819, f13820;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16588 );
        X3 = _2dcamera_ntrol_2did_1e8def34( o13819 );
        X2 = f13820;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_d_2dset_21_fbd71c4( o13819, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_fe8c221c_v );
DEFCSTRING( t16590, "V4L2-QUERY-CONTROL-TYPE-SET!" );

TSCP  _2dcamera_e_2dset_21_fe8c221c( o13823, v13824 )
        TSCP  o13823, v13824;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16590 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13823, X1, v13824 ) );
}

DEFTSCP( _2dcamera_rol_2dtype_2ff541d3_v );
DEFCSTRING( t16592, "V4L2-QUERY-CONTROL-TYPE" );

TSCP  _2dcamera_rol_2dtype_2ff541d3( o13827 )
        TSCP  o13827;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16592 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, type ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13827, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_341c3b98_v );
DEFCSTRING( t16594, "V4L2-QUERY-CONTROL-TYPE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_341c3b98( o13830, f13831 )
        TSCP  o13830, f13831;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16594 );
        X3 = _2dcamera_rol_2dtype_2ff541d3( o13830 );
        X2 = f13831;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_fe8c221c( o13830, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_1fa2f02e_v );
DEFCSTRING( t16596, "V4L2-QUERY-CONTROL-NAME-SET!" );

TSCP  _2dcamera_e_2dset_21_1fa2f02e( o13834, v13835 )
        TSCP  o13834, v13835;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16596 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, name ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dset_21( o13834, X1, v13835 ) );
}

DEFTSCP( _2dcamera_rol_2dname_fd0868fc_v );
DEFCSTRING( t16598, "V4L2-QUERY-CONTROL-NAME" );

TSCP  _2dcamera_rol_2dname_fd0868fc( o13838 )
        TSCP  o13838;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16598 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, name ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dref( o13838, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_d532e9aa_v );
DEFCSTRING( t16600, "V4L2-QUERY-CONTROL-NAME-UPDATE" );

TSCP  _2dcamera_e_2dupdate_d532e9aa( o13841, f13842 )
        TSCP  o13841, f13842;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16600 );
        X3 = _2dcamera_rol_2dname_fd0868fc( o13841 );
        X2 = f13842;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_1fa2f02e( o13841, X1 ) );
}

DEFTSCP( _2dcamera_m_2dset_21_3478771d_v );
DEFCSTRING( t16602, "V4L2-QUERY-CONTROL-MINIMUM-SET!" );

TSCP  _2dcamera_m_2dset_21_3478771d( o13845, v13846 )
        TSCP  o13845, v13846;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16602 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, minimum ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13845, X1, v13846 ) );
}

DEFTSCP( _2dcamera__2dminimum_eea87669_v );
DEFCSTRING( t16604, "V4L2-QUERY-CONTROL-MINIMUM" );

TSCP  _2dcamera__2dminimum_eea87669( o13849 )
        TSCP  o13849;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16604 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, minimum ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13849, X1 ) );
}

DEFTSCP( _2dcamera_m_2dupdate_fee86e99_v );
DEFCSTRING( t16606, "V4L2-QUERY-CONTROL-MINIMUM-UPDATE" );

TSCP  _2dcamera_m_2dupdate_fee86e99( o13852, f13853 )
        TSCP  o13852, f13853;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16606 );
        X3 = _2dcamera__2dminimum_eea87669( o13852 );
        X2 = f13853;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_m_2dset_21_3478771d( o13852, X1 ) );
}

DEFTSCP( _2dcamera_m_2dset_21_6581cc40_v );
DEFCSTRING( t16608, "V4L2-QUERY-CONTROL-MAXIMUM-SET!" );

TSCP  _2dcamera_m_2dset_21_6581cc40( o13856, v13857 )
        TSCP  o13856, v13857;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16608 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, maximum ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13856, X1, v13857 ) );
}

DEFTSCP( _2dcamera__2dmaximum_ed5b9626_v );
DEFCSTRING( t16610, "V4L2-QUERY-CONTROL-MAXIMUM" );

TSCP  _2dcamera__2dmaximum_ed5b9626( o13860 )
        TSCP  o13860;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16610 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, maximum ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13860, X1 ) );
}

DEFTSCP( _2dcamera_m_2dupdate_af11d5c4_v );
DEFCSTRING( t16612, "V4L2-QUERY-CONTROL-MAXIMUM-UPDATE" );

TSCP  _2dcamera_m_2dupdate_af11d5c4( o13863, f13864 )
        TSCP  o13863, f13864;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16612 );
        X3 = _2dcamera__2dmaximum_ed5b9626( o13863 );
        X2 = f13864;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_m_2dset_21_6581cc40( o13863, X1 ) );
}

DEFTSCP( _2dcamera_p_2dset_21_376078f_v );
DEFCSTRING( t16614, "V4L2-QUERY-CONTROL-STEP-SET!" );

TSCP  _2dcamera_p_2dset_21_376078f( o13867, v13868 )
        TSCP  o13867, v13868;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16614 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, step ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13867, X1, v13868 ) );
}

DEFTSCP( _2dcamera_rol_2dstep_e092e8c6_v );
DEFCSTRING( t16616, "V4L2-QUERY-CONTROL-STEP" );

TSCP  _2dcamera_rol_2dstep_e092e8c6( o13871 )
        TSCP  o13871;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16616 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, step ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13871, X1 ) );
}

DEFTSCP( _2dcamera_p_2dupdate_c9e61e0b_v );
DEFCSTRING( t16618, "V4L2-QUERY-CONTROL-STEP-UPDATE" );

TSCP  _2dcamera_p_2dupdate_c9e61e0b( o13874, f13875 )
        TSCP  o13874, f13875;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16618 );
        X3 = _2dcamera_rol_2dstep_e092e8c6( o13874 );
        X2 = f13875;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_p_2dset_21_376078f( o13874, X1 ) );
}

DEFTSCP( _2dcamera_e_2dset_21_6a536e5e_v );
DEFCSTRING( t16620, "V4L2-QUERY-CONTROL-DEFAULT-VALUE-SET!" );

TSCP  _2dcamera_e_2dset_21_6a536e5e( o13878, v13879 )
        TSCP  o13878, v13879;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16620 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, default_value ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13878, X1, v13879 ) );
}

DEFTSCP( _2dcamera_lt_2dvalue_16185b9f_v );
DEFCSTRING( t16622, "V4L2-QUERY-CONTROL-DEFAULT-VALUE" );

TSCP  _2dcamera_lt_2dvalue_16185b9f( o13882 )
        TSCP  o13882;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16622 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, default_value ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13882, X1 ) );
}

DEFTSCP( _2dcamera_e_2dupdate_a0c377da_v );
DEFCSTRING( t16624, "V4L2-QUERY-CONTROL-DEFAULT-VALUE-UPDATE" );

TSCP  _2dcamera_e_2dupdate_a0c377da( o13885, f13886 )
        TSCP  o13885, f13886;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16624 );
        X3 = _2dcamera_lt_2dvalue_16185b9f( o13885 );
        X2 = f13886;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_e_2dset_21_6a536e5e( o13885, X1 ) );
}

DEFTSCP( _2dcamera_s_2dset_21_f967849a_v );
DEFCSTRING( t16626, "V4L2-QUERY-CONTROL-FLAGS-SET!" );

TSCP  _2dcamera_s_2dset_21_f967849a( o13889, v13890 )
        TSCP  o13889, v13890;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16626 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, flags ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13889, X1, v13890 ) );
}

DEFTSCP( _2dcamera_ol_2dflags_84cc9e23_v );
DEFCSTRING( t16628, "V4L2-QUERY-CONTROL-FLAGS" );

TSCP  _2dcamera_ol_2dflags_84cc9e23( o13893 )
        TSCP  o13893;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16628 );
        X1 = C_FIXED( offsetof( struct v4l2_queryctrl, flags ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13893, X1 ) );
}

DEFTSCP( _2dcamera_s_2dupdate_33f79d1e_v );
DEFCSTRING( t16630, "V4L2-QUERY-CONTROL-FLAGS-UPDATE" );

TSCP  _2dcamera_s_2dupdate_33f79d1e( o13896, f13897 )
        TSCP  o13896, f13897;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16630 );
        X3 = _2dcamera_ol_2dflags_84cc9e23( o13896 );
        X2 = f13897;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_s_2dset_21_f967849a( o13896, X1 ) );
}

DEFTSCP( _2dcamera_r_2dset_21_edc7eccc_v );
DEFCSTRING( t16632, "V4L2-CAPABILITY-DRIVER-SET!" );

TSCP  _2dcamera_r_2dset_21_edc7eccc( o13900, v13901 )
        TSCP  o13900, v13901;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16632 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, driver ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dset_21( o13900, X1, v13901 ) );
}

DEFTSCP( _2dcamera_y_2ddriver_bdc02c16_v );
DEFCSTRING( t16634, "V4L2-CAPABILITY-DRIVER" );

TSCP  _2dcamera_y_2ddriver_bdc02c16( o13904 )
        TSCP  o13904;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16634 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, driver ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dref( o13904, X1 ) );
}

DEFTSCP( _2dcamera_r_2dupdate_2757f548_v );
DEFCSTRING( t16636, "V4L2-CAPABILITY-DRIVER-UPDATE" );

TSCP  _2dcamera_r_2dupdate_2757f548( o13907, f13908 )
        TSCP  o13907, f13908;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16636 );
        X3 = _2dcamera_y_2ddriver_bdc02c16( o13907 );
        X2 = f13908;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_r_2dset_21_edc7eccc( o13907, X1 ) );
}

DEFTSCP( _2dcamera_d_2dset_21_d4185423_v );
DEFCSTRING( t16638, "V4L2-CAPABILITY-CARD-SET!" );

TSCP  _2dcamera_d_2dset_21_d4185423( o13911, v13912 )
        TSCP  o13911, v13912;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16638 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, card ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dset_21( o13911, X1, v13912 ) );
}

DEFTSCP( _2dcamera_ity_2dcard_acaca8_v );
DEFCSTRING( t16640, "V4L2-CAPABILITY-CARD" );

TSCP  _2dcamera_ity_2dcard_acaca8( o13915 )
        TSCP  o13915;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16640 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, card ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dref( o13915, X1 ) );
}

DEFTSCP( _2dcamera_d_2dupdate_1e884da7_v );
DEFCSTRING( t16642, "V4L2-CAPABILITY-CARD-UPDATE" );

TSCP  _2dcamera_d_2dupdate_1e884da7( o13918, f13919 )
        TSCP  o13918, f13919;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16642 );
        X3 = _2dcamera_ity_2dcard_acaca8( o13918 );
        X2 = f13919;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_d_2dset_21_d4185423( o13918, X1 ) );
}

DEFTSCP( _2dcamera_o_2dset_21_ed5e3ead_v );
DEFCSTRING( t16644, "V4L2-CAPABILITY-BUS-INFO-SET!" );

TSCP  _2dcamera_o_2dset_21_ed5e3ead( o13922, v13923 )
        TSCP  o13922, v13923;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16644 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, bus_info ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dset_21( o13922, X1, v13923 ) );
}

DEFTSCP( _2dcamera_bus_2dinfo_f0c857bc_v );
DEFCSTRING( t16646, "V4L2-CAPABILITY-BUS-INFO" );

TSCP  _2dcamera_bus_2dinfo_f0c857bc( o13926 )
        TSCP  o13926;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16646 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, bus_info ) );
        POPSTACKTRACE( scrt4_c_2dbyte_2dref( o13926, X1 ) );
}

DEFTSCP( _2dcamera_o_2dupdate_27ce2729_v );
DEFCSTRING( t16648, "V4L2-CAPABILITY-BUS-INFO-UPDATE" );

TSCP  _2dcamera_o_2dupdate_27ce2729( o13929, f13930 )
        TSCP  o13929, f13930;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16648 );
        X3 = _2dcamera_bus_2dinfo_f0c857bc( o13929 );
        X2 = f13930;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_o_2dset_21_ed5e3ead( o13929, X1 ) );
}

DEFTSCP( _2dcamera_n_2dset_21_a6fb19f5_v );
DEFCSTRING( t16650, "V4L2-CAPABILITY-VERSION-SET!" );

TSCP  _2dcamera_n_2dset_21_a6fb19f5( o13933, v13934 )
        TSCP  o13933, v13934;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16650 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, version ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13933, X1, v13934 ) );
}

DEFTSCP( _2dcamera__2dversion_6669453f_v );
DEFCSTRING( t16652, "V4L2-CAPABILITY-VERSION" );

TSCP  _2dcamera__2dversion_6669453f( o13937 )
        TSCP  o13937;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16652 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, version ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13937, X1 ) );
}

DEFTSCP( _2dcamera_n_2dupdate_6c6b0071_v );
DEFCSTRING( t16654, "V4L2-CAPABILITY-VERSION-UPDATE" );

TSCP  _2dcamera_n_2dupdate_6c6b0071( o13940, f13941 )
        TSCP  o13940, f13941;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16654 );
        X3 = _2dcamera__2dversion_6669453f( o13940 );
        X2 = f13941;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_n_2dset_21_a6fb19f5( o13940, X1 ) );
}

DEFTSCP( _2dcamera_s_2dset_21_ee435080_v );
DEFCSTRING( t16656, "V4L2-CAPABILITY-CAPABILITIES-SET!" );

TSCP  _2dcamera_s_2dset_21_ee435080( o13944, v13945 )
        TSCP  o13944, v13945;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16656 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, capabilities ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o13944, X1, v13945 ) );
}

DEFTSCP( _2dcamera_pabilities_cc360d29_v );
DEFCSTRING( t16658, "V4L2-CAPABILITY-CAPABILITIES" );

TSCP  _2dcamera_pabilities_cc360d29( o13948 )
        TSCP  o13948;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16658 );
        X1 = C_FIXED( offsetof( struct v4l2_capability, capabilities ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o13948, X1 ) );
}

DEFTSCP( _2dcamera_s_2dupdate_24d34904_v );
DEFCSTRING( t16660, "V4L2-CAPABILITY-CAPABILITIES-UPDATE" );

TSCP  _2dcamera_s_2dupdate_24d34904( o13951, f13952 )
        TSCP  o13951, f13952;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16660 );
        X3 = _2dcamera_pabilities_cc360d29( o13951 );
        X2 = f13952;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( _2dcamera_s_2dset_21_ee435080( o13951, X1 ) );
}

DEFTSCP( _2dcamera_enum_2dfmt_59fb1aae_v );
DEFCSTRING( t16662, "VIDIOC-ENUM-FMT" );
DEFTSCP( _2dcamera_me_2dsizes_59d06ff3_v );
DEFCSTRING( t16663, "VIDIOC-ENUM-FRAME-SIZES" );
DEFTSCP( _2dcamera_dintervals_1da6d07a_v );
DEFCSTRING( t16664, "VIDIOC-ENUM-FRAME-INTERVALS" );
DEFTSCP( _2dcamera_parameters_ff6106d4_v );
DEFCSTRING( t16665, "VIDIOC-GET-PARAMETERS" );
DEFTSCP( _2dcamera_parameters_cd7774cd_v );
DEFCSTRING( t16666, "VIDIOC-SET-PARAMETERS" );
DEFTSCP( _2dcamera__2dcontrol_9f9b52fd_v );
DEFCSTRING( t16667, "VIDIOC-GET-CONTROL" );
DEFTSCP( _2dcamera__2dcontrol_eb259eb1_v );
DEFCSTRING( t16668, "VIDIOC-SET-CONTROL" );
DEFTSCP( _2dcamera__2dcontrol_c7ca1c8_v );
DEFCSTRING( t16669, "VIDIOC-QUERY-CONTROL" );
DEFTSCP( _2dcamera_ery_2dmenu_a8625c01_v );
DEFCSTRING( t16670, "VIDIOC-QUERY-MENU" );
DEFTSCP( _2dcamera_pabilities_a93ef70c_v );
DEFCSTRING( t16671, "VIDIOC-QUERY-CAPABILITIES" );
DEFTSCP( toollib_2dcamera_v4l2_2dfd_v );
DEFCSTRING( t16672, "V4L2-FD" );
DEFTSCP( _2dcamera_ext_2dctrl_f2d6f2d1_v );
DEFCSTRING( t16673, "CTRL-FLAG-NEXT-CTRL" );
DEFTSCP( toollib_2dcamera_einval_v );
DEFCSTRING( t16674, "EINVAL" );
DEFTSCP( _2dcamera_2dreset_21_66716c15_v );
DEFCSTRING( t16675, "CAMERA-SET-PANTILT-RESET!" );
EXTERNTSCPP( _2dcamera_control_21_38ebed3d, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _2dcamera_control_21_38ebed3d_v );
EXTERNTSCP( _2dcamera_lt_2dreset_124d9f39_v );

TSCP  toollib_2dcamera_l13957( c16677 )
        TSCP  c16677;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13957 [inside CAMERA-SET-PANTILT-\
RESET!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16677, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16677, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_lt_2dreset_124d9f39_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dreset_21_66716c15( c13954, v13955 )
        TSCP  c13954, v13955;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16675 );
        DISPLAY( 0 ) = c13954;
        DISPLAY( 1 ) = v13955;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13957, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_lt_2dreset_124d9f39_v );
DEFCSTRING( t16679, "V4L2-CID-PANTILT-RESET" );
DEFTSCP( _2dcamera_lt_2dreset_b3111978_v );
DEFCSTRING( t16680, "CAMERA-GET-PANTILT-RESET" );
EXTERNTSCPP( _2dcamera__2dcontrol_495618ad, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _2dcamera__2dcontrol_495618ad_v );

TSCP  toollib_2dcamera_l13960( c16682 )
        TSCP  c16682;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13960 [inside CAMERA-GET-PANTILT-\
RESET]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16682, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_lt_2dreset_124d9f39_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_lt_2dreset_b3111978( c13959 )
        TSCP  c13959;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16680 );
        DISPLAY( 0 ) = c13959;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13960, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dfocus_21_f71ffc25_v );
DEFCSTRING( t16684, "CAMERA-SET-FOCUS!" );
EXTERNTSCP( _2dcamera_id_2dfocus_9609b06d_v );

TSCP  toollib_2dcamera_l13964( c16686 )
        TSCP  c16686;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13964 [inside CAMERA-SET-FOCUS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16686, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16686, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dfocus_9609b06d_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dfocus_21_f71ffc25( c13962, v13963 )
        TSCP  c13962, v13963;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16684 );
        DISPLAY( 0 ) = c13962;
        DISPLAY( 1 ) = v13963;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13964, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dfocus_9609b06d_v );
DEFCSTRING( t16688, "V4L2-CID-FOCUS" );
DEFTSCP( _2dcamera_et_2dfocus_44c24a3d_v );
DEFCSTRING( t16689, "CAMERA-GET-FOCUS" );

TSCP  toollib_2dcamera_l13967( c16691 )
        TSCP  c16691;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13967 [inside CAMERA-GET-FOCUS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16691, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dfocus_9609b06d_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_et_2dfocus_44c24a3d( c13966 )
        TSCP  c13966;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16689 );
        DISPLAY( 0 ) = c13966;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13967, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmode_21_55e29ec0_v );
DEFCSTRING( t16693, "CAMERA-SET-LED1-MODE!" );
EXTERNTSCP( _2dcamera_ed1_2dmode_87934abf_v );

TSCP  toollib_2dcamera_l13971( c16695 )
        TSCP  c16695;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13971 [inside CAMERA-SET-LED1-MOD\
E!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16695, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16695, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ed1_2dmode_87934abf_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmode_21_55e29ec0( c13969, v13970 )
        TSCP  c13969, v13970;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16693 );
        DISPLAY( 0 ) = c13969;
        DISPLAY( 1 ) = v13970;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13971, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ed1_2dmode_87934abf_v );
DEFCSTRING( t16697, "V4L2-CID-LED1-MODE" );
DEFTSCP( _2dcamera_ed1_2dmode_a6d882ed_v );
DEFCSTRING( t16698, "CAMERA-GET-LED1-MODE" );

TSCP  toollib_2dcamera_l13974( c16700 )
        TSCP  c16700;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13974 [inside CAMERA-GET-LED1-MOD\
E]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16700, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ed1_2dmode_87934abf_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ed1_2dmode_a6d882ed( c13973 )
        TSCP  c13973;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16698 );
        DISPLAY( 0 ) = c13973;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13974, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_equency_21_b3c94ada_v );
DEFCSTRING( t16702, "CAMERA-SET-LED1-FREQUENCY!" );
EXTERNTSCP( _2dcamera_dfrequency_aef8a1ff_v );

TSCP  toollib_2dcamera_l13978( c16704 )
        TSCP  c16704;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13978 [inside CAMERA-SET-LED1-FRE\
QUENCY!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16704, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16704, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dfrequency_aef8a1ff_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_equency_21_b3c94ada( c13976, v13977 )
        TSCP  c13976, v13977;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16702 );
        DISPLAY( 0 ) = c13976;
        DISPLAY( 1 ) = v13977;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13978, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dfrequency_aef8a1ff_v );
DEFCSTRING( t16706, "V4L2-CID-LED1-FREQUENCY" );
DEFTSCP( _2dcamera_dfrequency_af828c7f_v );
DEFCSTRING( t16707, "CAMERA-GET-LED1-FREQUENCY" );

TSCP  toollib_2dcamera_l13981( c16709 )
        TSCP  c16709;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13981 [inside CAMERA-GET-LED1-FRE\
QUENCY]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16709, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dfrequency_aef8a1ff_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dfrequency_af828c7f( c13980 )
        TSCP  c13980;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16707 );
        DISPLAY( 0 ) = c13980;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13981, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_cessing_21_e820c818_v );
DEFCSTRING( t16711, "CAMERA-SET-DISABLE-PROCESSING!" );
EXTERNTSCP( _2dcamera_processing_95f3e0ec_v );

TSCP  toollib_2dcamera_l13985( c16713 )
        TSCP  c16713;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13985 [inside CAMERA-SET-DISABLE-\
PROCESSING!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16713, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16713, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_processing_95f3e0ec_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_cessing_21_e820c818( c13983, v13984 )
        TSCP  c13983, v13984;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16711 );
        DISPLAY( 0 ) = c13983;
        DISPLAY( 1 ) = v13984;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13985, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_processing_95f3e0ec_v );
DEFCSTRING( t16715, "V4L2-CID-DISABLE-PROCESSING" );
DEFTSCP( _2dcamera_processing_eae8228e_v );
DEFCSTRING( t16716, "CAMERA-GET-DISABLE-PROCESSING" );

TSCP  toollib_2dcamera_l13988( c16718 )
        TSCP  c16718;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13988 [inside CAMERA-GET-DISABLE-\
PROCESSING]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16718, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_processing_95f3e0ec_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_processing_eae8228e( c13987 )
        TSCP  c13987;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16716 );
        DISPLAY( 0 ) = c13987;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13988, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_w_2dbpp_21_377cbf3c_v );
DEFCSTRING( t16720, "CAMERA-SET-RAW-BPP!" );
EXTERNTSCP( _2dcamera_er_2dpixel_dc7bec1e_v );

TSCP  toollib_2dcamera_l13992( c16722 )
        TSCP  c16722;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13992 [inside CAMERA-SET-RAW-BPP!\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16722, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16722, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_er_2dpixel_dc7bec1e_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_w_2dbpp_21_377cbf3c( c13990, v13991 )
        TSCP  c13990, v13991;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16720 );
        DISPLAY( 0 ) = c13990;
        DISPLAY( 1 ) = v13991;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13992, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_er_2dpixel_dc7bec1e_v );
DEFCSTRING( t16724, "V4L2-CID-RAW-BITS-PER-PIXEL" );
DEFTSCP( _2dcamera_draw_2dbpp_c38f81c4_v );
DEFCSTRING( t16725, "CAMERA-GET-RAW-BPP" );

TSCP  toollib_2dcamera_l13995( c16727 )
        TSCP  c16727;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13995 [inside CAMERA-GET-RAW-BPP]\
" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16727, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_er_2dpixel_dc7bec1e_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_draw_2dbpp_c38f81c4( c13994 )
        TSCP  c13994;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16725 );
        DISPLAY( 0 ) = c13994;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13995, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ghtness_21_ffb9d6ac_v );
DEFCSTRING( t16729, "CAMERA-SET-BRIGHTNESS!" );
EXTERNTSCP( _2dcamera_brightness_5c474819_v );

TSCP  toollib_2dcamera_l13999( c16731 )
        TSCP  c16731;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l13999 [inside CAMERA-SET-BRIGHTNE\
SS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16731, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16731, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_brightness_5c474819_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_ghtness_21_ffb9d6ac( c13997, v13998 )
        TSCP  c13997, v13998;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16729 );
        DISPLAY( 0 ) = c13997;
        DISPLAY( 1 ) = v13998;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l13999, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_brightness_5c474819_v );
DEFCSTRING( t16733, "V4L2-CID-BRIGHTNESS" );
DEFTSCP( _2dcamera_brightness_a37baf2d_v );
DEFCSTRING( t16734, "CAMERA-GET-BRIGHTNESS" );

TSCP  toollib_2dcamera_l14002( c16736 )
        TSCP  c16736;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14002 [inside CAMERA-GET-BRIGHTNE\
SS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16736, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_brightness_5c474819_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_brightness_a37baf2d( c14001 )
        TSCP  c14001;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16734 );
        DISPLAY( 0 ) = c14001;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14002, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ontrast_21_cd25e56a_v );
DEFCSTRING( t16738, "CAMERA-SET-CONTRAST!" );
EXTERNTSCP( _2dcamera_2dcontrast_b6db2391_v );

TSCP  toollib_2dcamera_l14006( c16740 )
        TSCP  c16740;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14006 [inside CAMERA-SET-CONTRAST\
!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16740, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16740, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dcontrast_b6db2391_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_ontrast_21_cd25e56a( c14004, v14005 )
        TSCP  c14004, v14005;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16738 );
        DISPLAY( 0 ) = c14004;
        DISPLAY( 1 ) = v14005;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14006, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dcontrast_b6db2391_v );
DEFCSTRING( t16742, "V4L2-CID-CONTRAST" );
DEFTSCP( _2dcamera_2dcontrast_38821ffc_v );
DEFCSTRING( t16743, "CAMERA-GET-CONTRAST" );

TSCP  toollib_2dcamera_l14009( c16745 )
        TSCP  c16745;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14009 [inside CAMERA-GET-CONTRAST\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16745, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dcontrast_b6db2391_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dcontrast_38821ffc( c14008 )
        TSCP  c14008;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16743 );
        DISPLAY( 0 ) = c14008;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14009, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_uration_21_152d4f7c_v );
DEFCSTRING( t16747, "CAMERA-SET-SATURATION!" );
EXTERNTSCP( _2dcamera_saturation_af1b3372_v );

TSCP  toollib_2dcamera_l14013( c16749 )
        TSCP  c16749;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14013 [inside CAMERA-SET-SATURATI\
ON!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16749, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16749, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_saturation_af1b3372_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_uration_21_152d4f7c( c14011, v14012 )
        TSCP  c14011, v14012;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16747 );
        DISPLAY( 0 ) = c14011;
        DISPLAY( 1 ) = v14012;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14013, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_saturation_af1b3372_v );
DEFCSTRING( t16751, "V4L2-CID-SATURATION" );
DEFTSCP( _2dcamera_saturation_5027d446_v );
DEFCSTRING( t16752, "CAMERA-GET-SATURATION" );

TSCP  toollib_2dcamera_l14016( c16754 )
        TSCP  c16754;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14016 [inside CAMERA-GET-SATURATI\
ON]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16754, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_saturation_af1b3372_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_saturation_5027d446( c14015 )
        TSCP  c14015;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16752 );
        DISPLAY( 0 ) = c14015;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14016, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_t_2dhue_21_ef65541f_v );
DEFCSTRING( t16756, "CAMERA-SET-HUE!" );
EXTERNTSCP( _2dcamera_dcid_2dhue_4b334b91_v );

TSCP  toollib_2dcamera_l14020( c16758 )
        TSCP  c16758;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14020 [inside CAMERA-SET-HUE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16758, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16758, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dcid_2dhue_4b334b91_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_t_2dhue_21_ef65541f( c14018, v14019 )
        TSCP  c14018, v14019;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16756 );
        DISPLAY( 0 ) = c14018;
        DISPLAY( 1 ) = v14019;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14020, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dcid_2dhue_4b334b91_v );
DEFCSTRING( t16760, "V4L2-CID-HUE" );
DEFTSCP( _2dcamera_dget_2dhue_3847dfab_v );
DEFCSTRING( t16761, "CAMERA-GET-HUE" );

TSCP  toollib_2dcamera_l14023( c16763 )
        TSCP  c16763;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14023 [inside CAMERA-GET-HUE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16763, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dcid_2dhue_4b334b91_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dget_2dhue_3847dfab( c14022 )
        TSCP  c14022;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16761 );
        DISPLAY( 0 ) = c14022;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14023, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dvolume_21_46fc3040_v );
DEFCSTRING( t16765, "CAMERA-SET-AUDIO-VOLUME!" );
EXTERNTSCP( _2dcamera_o_2dvolume_3eac6a2c_v );

TSCP  toollib_2dcamera_l14027( c16767 )
        TSCP  c16767;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14027 [inside CAMERA-SET-AUDIO-VO\
LUME!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16767, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16767, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_o_2dvolume_3eac6a2c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dvolume_21_46fc3040( c14025, v14026 )
        TSCP  c14025, v14026;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16765 );
        DISPLAY( 0 ) = c14025;
        DISPLAY( 1 ) = v14026;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14027, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_o_2dvolume_3eac6a2c_v );
DEFCSTRING( t16769, "V4L2-CID-AUDIO-VOLUME" );
DEFTSCP( _2dcamera_o_2dvolume_b3b9558d_v );
DEFCSTRING( t16770, "CAMERA-GET-AUDIO-VOLUME" );

TSCP  toollib_2dcamera_l14030( c16772 )
        TSCP  c16772;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14030 [inside CAMERA-GET-AUDIO-VO\
LUME]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16772, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_o_2dvolume_3eac6a2c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_o_2dvolume_b3b9558d( c14029 )
        TSCP  c14029;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16770 );
        DISPLAY( 0 ) = c14029;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14030, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_balance_21_af326b3c_v );
DEFCSTRING( t16774, "CAMERA-SET-AUDIO-BALANCE!" );
EXTERNTSCP( _2dcamera__2dbalance_2dc255e4_v );

TSCP  toollib_2dcamera_l14034( c16776 )
        TSCP  c16776;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14034 [inside CAMERA-SET-AUDIO-BA\
LANCE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16776, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16776, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_2dc255e4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_balance_21_af326b3c( c14032, v14033 )
        TSCP  c14032, v14033;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16774 );
        DISPLAY( 0 ) = c14032;
        DISPLAY( 1 ) = v14033;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14034, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbalance_2dc255e4_v );
DEFCSTRING( t16778, "V4L2-CID-AUDIO-BALANCE" );
DEFTSCP( _2dcamera__2dbalance_8c9ed3a5_v );
DEFCSTRING( t16779, "CAMERA-GET-AUDIO-BALANCE" );

TSCP  toollib_2dcamera_l14037( c16781 )
        TSCP  c16781;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14037 [inside CAMERA-GET-AUDIO-BA\
LANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16781, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_2dc255e4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbalance_8c9ed3a5( c14036 )
        TSCP  c14036;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16779 );
        DISPLAY( 0 ) = c14036;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14037, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbass_21_272c2cea_v );
DEFCSTRING( t16783, "CAMERA-SET-AUDIO-BASS!" );
EXTERNTSCP( _2dcamera_dio_2dbass_3bd463b8_v );

TSCP  toollib_2dcamera_l14041( c16785 )
        TSCP  c16785;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14041 [inside CAMERA-SET-AUDIO-BA\
SS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16785, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16785, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dbass_3bd463b8_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dbass_21_272c2cea( c14039, v14040 )
        TSCP  c14039, v14040;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16783 );
        DISPLAY( 0 ) = c14039;
        DISPLAY( 1 ) = v14040;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14041, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dio_2dbass_3bd463b8_v );
DEFCSTRING( t16787, "V4L2-CID-AUDIO-BASS" );
DEFTSCP( _2dcamera_dio_2dbass_be9018a8_v );
DEFCSTRING( t16788, "CAMERA-GET-AUDIO-BASS" );

TSCP  toollib_2dcamera_l14044( c16790 )
        TSCP  c16790;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14044 [inside CAMERA-GET-AUDIO-BA\
SS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16790, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dbass_3bd463b8_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dio_2dbass_be9018a8( c14043 )
        TSCP  c14043;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16788 );
        DISPLAY( 0 ) = c14043;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14044, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dtreble_21_399f627c_v );
DEFCSTRING( t16792, "CAMERA-SET-AUDIO-TREBLE!" );
EXTERNTSCP( _2dcamera_o_2dtreble_966e532a_v );

TSCP  toollib_2dcamera_l14048( c16794 )
        TSCP  c16794;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14048 [inside CAMERA-SET-AUDIO-TR\
EBLE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16794, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16794, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_o_2dtreble_966e532a_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dtreble_21_399f627c( c14046, v14047 )
        TSCP  c14046, v14047;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16792 );
        DISPLAY( 0 ) = c14046;
        DISPLAY( 1 ) = v14047;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14048, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_o_2dtreble_966e532a_v );
DEFCSTRING( t16796, "V4L2-CID-AUDIO-TREBLE" );
DEFTSCP( _2dcamera_o_2dtreble_1b7b6c8b_v );
DEFCSTRING( t16797, "CAMERA-GET-AUDIO-TREBLE" );

TSCP  toollib_2dcamera_l14051( c16799 )
        TSCP  c16799;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14051 [inside CAMERA-GET-AUDIO-TR\
EBLE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16799, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_o_2dtreble_966e532a_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_o_2dtreble_1b7b6c8b( c14050 )
        TSCP  c14050;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16797 );
        DISPLAY( 0 ) = c14050;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14051, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmute_21_8e71c8dd_v );
DEFCSTRING( t16801, "CAMERA-SET-AUDIO-MUTE!" );
EXTERNTSCP( _2dcamera_dio_2dmute_c30d5bd4_v );

TSCP  toollib_2dcamera_l14055( c16803 )
        TSCP  c16803;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14055 [inside CAMERA-SET-AUDIO-MU\
TE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16803, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16803, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmute_c30d5bd4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmute_21_8e71c8dd( c14053, v14054 )
        TSCP  c14053, v14054;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16801 );
        DISPLAY( 0 ) = c14053;
        DISPLAY( 1 ) = v14054;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14055, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dio_2dmute_c30d5bd4_v );
DEFCSTRING( t16805, "V4L2-CID-AUDIO-MUTE" );
DEFTSCP( _2dcamera_dio_2dmute_464920c4_v );
DEFCSTRING( t16806, "CAMERA-GET-AUDIO-MUTE" );

TSCP  toollib_2dcamera_l14058( c16808 )
        TSCP  c16808;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14058 [inside CAMERA-GET-AUDIO-MU\
TE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16808, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmute_c30d5bd4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dio_2dmute_464920c4( c14057 )
        TSCP  c14057;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16806 );
        DISPLAY( 0 ) = c14057;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14058, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_oudness_21_c21d3524_v );
DEFCSTRING( t16810, "CAMERA-SET-AUDIO-LOUDNESS!" );
EXTERNTSCP( _2dcamera_2dloudness_dfdfb89b_v );

TSCP  toollib_2dcamera_l14062( c16812 )
        TSCP  c16812;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14062 [inside CAMERA-SET-AUDIO-LO\
UDNESS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16812, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16812, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dloudness_dfdfb89b_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_oudness_21_c21d3524( c14060, v14061 )
        TSCP  c14060, v14061;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16810 );
        DISPLAY( 0 ) = c14060;
        DISPLAY( 1 ) = v14061;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14062, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dloudness_dfdfb89b_v );
DEFCSTRING( t16814, "V4L2-CID-AUDIO-LOUDNESS" );
DEFTSCP( _2dcamera_2dloudness_dea5951b_v );
DEFCSTRING( t16815, "CAMERA-GET-AUDIO-LOUDNESS" );

TSCP  toollib_2dcamera_l14065( c16817 )
        TSCP  c16817;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14065 [inside CAMERA-GET-AUDIO-LO\
UDNESS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16817, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dloudness_dfdfb89b_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dloudness_dea5951b( c14064 )
        TSCP  c14064;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16815 );
        DISPLAY( 0 ) = c14064;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14065, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dlevel_21_6010b1d9_v );
DEFCSTRING( t16819, "CAMERA-SET-BLACK-LEVEL!" );
EXTERNTSCP( _2dcamera_ck_2dlevel_bc664a80_v );

TSCP  toollib_2dcamera_l14069( c16821 )
        TSCP  c16821;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14069 [inside CAMERA-SET-BLACK-LE\
VEL!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16821, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16821, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ck_2dlevel_bc664a80_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dlevel_21_6010b1d9( c14067, v14068 )
        TSCP  c14067, v14068;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16819 );
        DISPLAY( 0 ) = c14067;
        DISPLAY( 1 ) = v14068;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14069, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ck_2dlevel_bc664a80_v );
DEFCSTRING( t16823, "V4L2-CID-BLACK-LEVEL" );
DEFTSCP( _2dcamera_ck_2dlevel_a1541e9f_v );
DEFCSTRING( t16824, "CAMERA-GET-BLACK-LEVEL" );

TSCP  toollib_2dcamera_l14072( c16826 )
        TSCP  c16826;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14072 [inside CAMERA-GET-BLACK-LE\
VEL]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16826, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ck_2dlevel_bc664a80_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ck_2dlevel_a1541e9f( c14071 )
        TSCP  c14071;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16824 );
        DISPLAY( 0 ) = c14071;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14072, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_balance_21_937d7ff8_v );
DEFCSTRING( t16828, "CAMERA-SET-AUTO-WHITE-BALANCE!" );
EXTERNTSCP( _2dcamera__2dbalance_e681aef7_v );

TSCP  toollib_2dcamera_l14076( c16830 )
        TSCP  c16830;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14076 [inside CAMERA-SET-AUTO-WHI\
TE-BALANCE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16830, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16830, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_e681aef7_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_balance_21_937d7ff8( c14074, v14075 )
        TSCP  c14074, v14075;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16828 );
        DISPLAY( 0 ) = c14074;
        DISPLAY( 1 ) = v14075;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14076, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbalance_e681aef7_v );
DEFCSTRING( t16832, "V4L2-CID-AUTO-WHITE-BALANCE" );
DEFTSCP( _2dcamera__2dbalance_c4207b55_v );
DEFCSTRING( t16833, "CAMERA-GET-AUTO-WHITE-BALANCE" );

TSCP  toollib_2dcamera_l14079( c16835 )
        TSCP  c16835;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14079 [inside CAMERA-GET-AUTO-WHI\
TE-BALANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16835, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_e681aef7_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbalance_c4207b55( c14078 )
        TSCP  c14078;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16833 );
        DISPLAY( 0 ) = c14078;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14079, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_balance_21_e4301f59_v );
DEFCSTRING( t16837, "CAMERA-SET-DO-WHITE-BALANCE!" );
EXTERNTSCP( _2dcamera__2dbalance_d1abcae9_v );

TSCP  toollib_2dcamera_l14083( c16839 )
        TSCP  c16839;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14083 [inside CAMERA-SET-DO-WHITE\
-BALANCE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16839, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16839, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_d1abcae9_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_balance_21_e4301f59( c14081, v14082 )
        TSCP  c14081, v14082;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16837 );
        DISPLAY( 0 ) = c14081;
        DISPLAY( 1 ) = v14082;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14083, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbalance_d1abcae9_v );
DEFCSTRING( t16841, "V4L2-CID-DO-WHITE-BALANCE" );
DEFTSCP( _2dcamera__2dbalance_aeb0088b_v );
DEFCSTRING( t16842, "CAMERA-GET-DO-WHITE-BALANCE" );

TSCP  toollib_2dcamera_l14086( c16844 )
        TSCP  c16844;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14086 [inside CAMERA-GET-DO-WHITE\
-BALANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16844, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_d1abcae9_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbalance_aeb0088b( c14085 )
        TSCP  c14085;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16842 );
        DISPLAY( 0 ) = c14085;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14086, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_balance_21_59bdd39c_v );
DEFCSTRING( t16846, "CAMERA-SET-RED-BALANCE!" );
EXTERNTSCP( _2dcamera__2dbalance_51cfa280_v );

TSCP  toollib_2dcamera_l14090( c16848 )
        TSCP  c16848;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14090 [inside CAMERA-SET-RED-BALA\
NCE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16848, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16848, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_51cfa280_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_balance_21_59bdd39c( c14088, v14089 )
        TSCP  c14088, v14089;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16846 );
        DISPLAY( 0 ) = c14088;
        DISPLAY( 1 ) = v14089;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14090, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbalance_51cfa280_v );
DEFCSTRING( t16850, "V4L2-CID-RED-BALANCE" );
DEFTSCP( _2dcamera__2dbalance_4cfdf69f_v );
DEFCSTRING( t16851, "CAMERA-GET-RED-BALANCE" );

TSCP  toollib_2dcamera_l14093( c16853 )
        TSCP  c16853;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14093 [inside CAMERA-GET-RED-BALA\
NCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16853, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_51cfa280_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbalance_4cfdf69f( c14092 )
        TSCP  c14092;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16851 );
        DISPLAY( 0 ) = c14092;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14093, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_balance_21_241f6c45_v );
DEFCSTRING( t16855, "CAMERA-SET-BLUE-BALANCE!" );
EXTERNTSCP( _2dcamera__2dbalance_fc570a10_v );

TSCP  toollib_2dcamera_l14097( c16857 )
        TSCP  c16857;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14097 [inside CAMERA-SET-BLUE-BAL\
ANCE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16857, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16857, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_fc570a10_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_balance_21_241f6c45( c14095, v14096 )
        TSCP  c14095, v14096;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16855 );
        DISPLAY( 0 ) = c14095;
        DISPLAY( 1 ) = v14096;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14097, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbalance_fc570a10_v );
DEFCSTRING( t16859, "V4L2-CID-BLUE-BALANCE" );
DEFTSCP( _2dcamera__2dbalance_714235b1_v );
DEFCSTRING( t16860, "CAMERA-GET-BLUE-BALANCE" );

TSCP  toollib_2dcamera_l14100( c16862 )
        TSCP  c16862;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14100 [inside CAMERA-GET-BLUE-BAL\
ANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16862, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbalance_fc570a10_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbalance_714235b1( c14099 )
        TSCP  c14099;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16860 );
        DISPLAY( 0 ) = c14099;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14100, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dgamma_21_fb00a5c1_v );
DEFCSTRING( t16864, "CAMERA-SET-GAMMA!" );
EXTERNTSCP( _2dcamera_id_2dgamma_308a2af5_v );

TSCP  toollib_2dcamera_l14104( c16866 )
        TSCP  c16866;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14104 [inside CAMERA-SET-GAMMA!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16866, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16866, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dgamma_308a2af5_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dgamma_21_fb00a5c1( c14102, v14103 )
        TSCP  c14102, v14103;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16864 );
        DISPLAY( 0 ) = c14102;
        DISPLAY( 1 ) = v14103;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14104, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dgamma_308a2af5_v );
DEFCSTRING( t16868, "V4L2-CID-GAMMA" );
DEFTSCP( _2dcamera_et_2dgamma_e241d0a5_v );
DEFCSTRING( t16869, "CAMERA-GET-GAMMA" );

TSCP  toollib_2dcamera_l14107( c16871 )
        TSCP  c16871;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14107 [inside CAMERA-GET-GAMMA]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16871, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dgamma_308a2af5_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_et_2dgamma_e241d0a5( c14106 )
        TSCP  c14106;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16869 );
        DISPLAY( 0 ) = c14106;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14107, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_iteness_21_5ed21b9b_v );
DEFCSTRING( t16873, "CAMERA-SET-WHITENESS!" );
EXTERNTSCP( _2dcamera_dwhiteness_adb56e5c_v );

TSCP  toollib_2dcamera_l14111( c16875 )
        TSCP  c16875;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14111 [inside CAMERA-SET-WHITENES\
S!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16875, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16875, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dwhiteness_adb56e5c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_iteness_21_5ed21b9b( c14109, v14110 )
        TSCP  c14109, v14110;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16873 );
        DISPLAY( 0 ) = c14109;
        DISPLAY( 1 ) = v14110;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14111, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dwhiteness_adb56e5c_v );
DEFCSTRING( t16877, "V4L2-CID-WHITENESS" );
DEFTSCP( _2dcamera_dwhiteness_9e382a85_v );
DEFCSTRING( t16878, "CAMERA-GET-WHITENESS" );

TSCP  toollib_2dcamera_l14114( c16880 )
        TSCP  c16880;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14114 [inside CAMERA-GET-WHITENES\
S]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16880, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dwhiteness_adb56e5c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dwhiteness_9e382a85( c14113 )
        TSCP  c14113;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16878 );
        DISPLAY( 0 ) = c14113;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14114, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_xposure_21_4ec45355_v );
DEFCSTRING( t16882, "CAMERA-SET-EXPOSURE!" );
EXTERNTSCP( _2dcamera_2dexposure_2c193054_v );

TSCP  toollib_2dcamera_l14118( c16884 )
        TSCP  c16884;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14118 [inside CAMERA-SET-EXPOSURE\
!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16884, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16884, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dexposure_2c193054_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_xposure_21_4ec45355( c14116, v14117 )
        TSCP  c14116, v14117;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16882 );
        DISPLAY( 0 ) = c14116;
        DISPLAY( 1 ) = v14117;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14118, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dexposure_2c193054_v );
DEFCSTRING( t16886, "V4L2-CID-EXPOSURE" );
DEFTSCP( _2dcamera_2dexposure_a2400c39_v );
DEFCSTRING( t16887, "CAMERA-GET-EXPOSURE" );

TSCP  toollib_2dcamera_l14121( c16889 )
        TSCP  c16889;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14121 [inside CAMERA-GET-EXPOSURE\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16889, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dexposure_2c193054_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dexposure_a2400c39( c14120 )
        TSCP  c14120;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16887 );
        DISPLAY( 0 ) = c14120;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14121, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_utogain_21_9de823a9_v );
DEFCSTRING( t16891, "CAMERA-SET-AUTOGAIN!" );
EXTERNTSCP( _2dcamera_2dautogain_a8a5c40e_v );

TSCP  toollib_2dcamera_l14125( c16893 )
        TSCP  c16893;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14125 [inside CAMERA-SET-AUTOGAIN\
!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16893, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16893, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dautogain_a8a5c40e_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_utogain_21_9de823a9( c14123, v14124 )
        TSCP  c14123, v14124;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16891 );
        DISPLAY( 0 ) = c14123;
        DISPLAY( 1 ) = v14124;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14125, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dautogain_a8a5c40e_v );
DEFCSTRING( t16895, "V4L2-CID-AUTOGAIN" );
DEFTSCP( _2dcamera_2dautogain_26fcf863_v );
DEFCSTRING( t16896, "CAMERA-GET-AUTOGAIN" );

TSCP  toollib_2dcamera_l14128( c16898 )
        TSCP  c16898;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14128 [inside CAMERA-GET-AUTOGAIN\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16898, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dautogain_a8a5c40e_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dautogain_26fcf863( c14127 )
        TSCP  c14127;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16896 );
        DISPLAY( 0 ) = c14127;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14128, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dgain_21_5473218a_v );
DEFCSTRING( t16900, "CAMERA-SET-GAIN!" );
EXTERNTSCP( _2dcamera_cid_2dgain_c2b08830_v );

TSCP  toollib_2dcamera_l14132( c16902 )
        TSCP  c16902;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14132 [inside CAMERA-SET-GAIN!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16902, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16902, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_cid_2dgain_c2b08830_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dgain_21_5473218a( c14130, v14131 )
        TSCP  c14130, v14131;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16900 );
        DISPLAY( 0 ) = c14130;
        DISPLAY( 1 ) = v14131;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14132, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_cid_2dgain_c2b08830_v );
DEFCSTRING( t16904, "V4L2-CID-GAIN" );
DEFTSCP( _2dcamera_get_2dgain_4cf2516_v );
DEFCSTRING( t16905, "CAMERA-GET-GAIN" );

TSCP  toollib_2dcamera_l14135( c16907 )
        TSCP  c16907;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14135 [inside CAMERA-GET-GAIN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16907, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_cid_2dgain_c2b08830_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_get_2dgain_4cf2516( c14134 )
        TSCP  c14134;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16905 );
        DISPLAY( 0 ) = c14134;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14135, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dhflip_21_31fecc7c_v );
DEFCSTRING( t16909, "CAMERA-SET-HFLIP!" );
EXTERNTSCP( _2dcamera_id_2dhflip_20130a5c_v );

TSCP  toollib_2dcamera_l14139( c16911 )
        TSCP  c16911;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14139 [inside CAMERA-SET-HFLIP!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16911, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16911, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dhflip_20130a5c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dhflip_21_31fecc7c( c14137, v14138 )
        TSCP  c14137, v14138;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16909 );
        DISPLAY( 0 ) = c14137;
        DISPLAY( 1 ) = v14138;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14139, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dhflip_20130a5c_v );
DEFCSTRING( t16913, "V4L2-CID-HFLIP" );
DEFTSCP( _2dcamera_et_2dhflip_f2d8f00c_v );
DEFCSTRING( t16914, "CAMERA-GET-HFLIP" );

TSCP  toollib_2dcamera_l14142( c16916 )
        TSCP  c16916;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14142 [inside CAMERA-GET-HFLIP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16916, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dhflip_20130a5c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_et_2dhflip_f2d8f00c( c14141 )
        TSCP  c14141;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16914 );
        DISPLAY( 0 ) = c14141;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14142, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dvflip_21_58cfef65_v );
DEFCSTRING( t16918, "CAMERA-SET-VFLIP!" );
EXTERNTSCP( _2dcamera_id_2dvflip_ffc323bf_v );

TSCP  toollib_2dcamera_l14146( c16920 )
        TSCP  c16920;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14146 [inside CAMERA-SET-VFLIP!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16920, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16920, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvflip_ffc323bf_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dvflip_21_58cfef65( c14144, v14145 )
        TSCP  c14144, v14145;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16918 );
        DISPLAY( 0 ) = c14144;
        DISPLAY( 1 ) = v14145;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14146, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dvflip_ffc323bf_v );
DEFCSTRING( t16922, "V4L2-CID-VFLIP" );
DEFTSCP( _2dcamera_et_2dvflip_2d08d9ef_v );
DEFCSTRING( t16923, "CAMERA-GET-VFLIP" );

TSCP  toollib_2dcamera_l14149( c16925 )
        TSCP  c16925;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14149 [inside CAMERA-GET-VFLIP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16925, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvflip_ffc323bf_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_et_2dvflip_2d08d9ef( c14148 )
        TSCP  c14148;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16923 );
        DISPLAY( 0 ) = c14148;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14149, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_equency_21_81c5eca7_v );
DEFCSTRING( t16927, "CAMERA-SET-POWER-LINE-FREQUENCY!" );
EXTERNTSCP( _2dcamera_dfrequency_ae78d5c9_v );

TSCP  toollib_2dcamera_l14153( c16929 )
        TSCP  c16929;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14153 [inside CAMERA-SET-POWER-LI\
NE-FREQUENCY!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16929, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16929, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dfrequency_ae78d5c9_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_equency_21_81c5eca7( c14151, v14152 )
        TSCP  c14151, v14152;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16927 );
        DISPLAY( 0 ) = c14151;
        DISPLAY( 1 ) = v14152;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14153, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dfrequency_ae78d5c9_v );
DEFCSTRING( t16931, "V4L2-CID-POWER-LINE-FREQUENCY" );
DEFTSCP( _2dcamera_dfrequency_c4f00f58_v );
DEFCSTRING( t16932, "CAMERA-GET-POWER-LINE-FREQUENCY" );

TSCP  toollib_2dcamera_l14156( c16934 )
        TSCP  c16934;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14156 [inside CAMERA-GET-POWER-LI\
NE-FREQUENCY]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16934, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dfrequency_ae78d5c9_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dfrequency_c4f00f58( c14155 )
        TSCP  c14155;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16932 );
        DISPLAY( 0 ) = c14155;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14156, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dauto_21_6f6b588_v );
DEFCSTRING( t16936, "CAMERA-SET-HUE-AUTO!" );
EXTERNTSCP( _2dcamera_hue_2dauto_31d78ede_v );

TSCP  toollib_2dcamera_l14160( c16938 )
        TSCP  c16938;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14160 [inside CAMERA-SET-HUE-AUTO\
!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16938, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16938, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_hue_2dauto_31d78ede_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dauto_21_6f6b588( c14158, v14159 )
        TSCP  c14158, v14159;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16936 );
        DISPLAY( 0 ) = c14158;
        DISPLAY( 1 ) = v14159;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14160, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_hue_2dauto_31d78ede_v );
DEFCSTRING( t16940, "V4L2-CID-HUE-AUTO" );
DEFTSCP( _2dcamera_hue_2dauto_ceeb69ea_v );
DEFCSTRING( t16941, "CAMERA-GET-HUE-AUTO" );

TSCP  toollib_2dcamera_l14163( c16943 )
        TSCP  c16943;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14163 [inside CAMERA-GET-HUE-AUTO\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16943, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_hue_2dauto_31d78ede_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_hue_2dauto_ceeb69ea( c14162 )
        TSCP  c14162;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16941 );
        DISPLAY( 0 ) = c14162;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14163, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_erature_21_1ae56aec_v );
DEFCSTRING( t16945, "CAMERA-SET-WHITE-BALANCE-TEMPERATURE!" );
EXTERNTSCP( _2dcamera_emperature_5efc3c31_v );

TSCP  toollib_2dcamera_l14167( c16947 )
        TSCP  c16947;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14167 [inside CAMERA-SET-WHITE-BA\
LANCE-TEMPERATURE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16947, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16947, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_emperature_5efc3c31_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_erature_21_1ae56aec( c14165, v14166 )
        TSCP  c14165, v14166;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16945 );
        DISPLAY( 0 ) = c14165;
        DISPLAY( 1 ) = v14166;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14167, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_emperature_5efc3c31_v );
DEFCSTRING( t16949, "V4L2-CID-WHITE-BALANCE-TEMPERATURE" );
DEFTSCP( _2dcamera_emperature_8b47a279_v );
DEFCSTRING( t16950, "CAMERA-GET-WHITE-BALANCE-TEMPERATURE" );

TSCP  toollib_2dcamera_l14170( c16952 )
        TSCP  c16952;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14170 [inside CAMERA-GET-WHITE-BA\
LANCE-TEMPERATURE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16952, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_emperature_5efc3c31_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_emperature_8b47a279( c14169 )
        TSCP  c14169;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16950 );
        DISPLAY( 0 ) = c14169;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14170, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_arpness_21_94226d5_v );
DEFCSTRING( t16954, "CAMERA-SET-SHARPNESS!" );
EXTERNTSCP( _2dcamera_dsharpness_bdef8ad8_v );

TSCP  toollib_2dcamera_l14174( c16956 )
        TSCP  c16956;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14174 [inside CAMERA-SET-SHARPNES\
S!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16956, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16956, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dsharpness_bdef8ad8_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_arpness_21_94226d5( c14172, v14173 )
        TSCP  c14172, v14173;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16954 );
        DISPLAY( 0 ) = c14172;
        DISPLAY( 1 ) = v14173;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14174, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dsharpness_bdef8ad8_v );
DEFCSTRING( t16958, "V4L2-CID-SHARPNESS" );
DEFTSCP( _2dcamera_dsharpness_8e62ce01_v );
DEFCSTRING( t16959, "CAMERA-GET-SHARPNESS" );

TSCP  toollib_2dcamera_l14177( c16961 )
        TSCP  c16961;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14177 [inside CAMERA-GET-SHARPNES\
S]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16961, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dsharpness_bdef8ad8_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dsharpness_8e62ce01( c14176 )
        TSCP  c14176;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16959 );
        DISPLAY( 0 ) = c14176;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14177, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_nsation_21_e1fac0a6_v );
DEFCSTRING( t16963, "CAMERA-SET-BACKLIGHT-COMPENSATION!" );
EXTERNTSCP( _2dcamera_mpensation_33b0bdb2_v );

TSCP  toollib_2dcamera_l14181( c16965 )
        TSCP  c16965;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14181 [inside CAMERA-SET-BACKLIGH\
T-COMPENSATION!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16965, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16965, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_mpensation_33b0bdb2_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_nsation_21_e1fac0a6( c14179, v14180 )
        TSCP  c14179, v14180;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16963 );
        DISPLAY( 0 ) = c14179;
        DISPLAY( 1 ) = v14180;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14181, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_mpensation_33b0bdb2_v );
DEFCSTRING( t16967, "V4L2-CID-BACKLIGHT-COMPENSATION" );
DEFTSCP( _2dcamera_mpensation_59386723_v );
DEFCSTRING( t16968, "CAMERA-GET-BACKLIGHT-COMPENSATION" );

TSCP  toollib_2dcamera_l14184( c16970 )
        TSCP  c16970;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14184 [inside CAMERA-GET-BACKLIGH\
T-COMPENSATION]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16970, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_mpensation_33b0bdb2_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_mpensation_59386723( c14183 )
        TSCP  c14183;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16968 );
        DISPLAY( 0 ) = c14183;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14184, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_a_2dagc_21_13a7c9b4_v );
DEFCSTRING( t16972, "CAMERA-SET-CHROMA-AGC!" );
EXTERNTSCP( _2dcamera_roma_2dagc_44159bbe_v );

TSCP  toollib_2dcamera_l14188( c16974 )
        TSCP  c16974;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14188 [inside CAMERA-SET-CHROMA-A\
GC!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16974, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16974, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_roma_2dagc_44159bbe_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_a_2dagc_21_13a7c9b4( c14186, v14187 )
        TSCP  c14186, v14187;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16972 );
        DISPLAY( 0 ) = c14186;
        DISPLAY( 1 ) = v14187;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14188, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_roma_2dagc_44159bbe_v );
DEFCSTRING( t16976, "V4L2-CID-CHROMA-AGC" );
DEFTSCP( _2dcamera_roma_2dagc_c151e0ae_v );
DEFCSTRING( t16977, "CAMERA-GET-CHROMA-AGC" );

TSCP  toollib_2dcamera_l14191( c16979 )
        TSCP  c16979;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14191 [inside CAMERA-GET-CHROMA-A\
GC]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16979, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_roma_2dagc_44159bbe_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_roma_2dagc_c151e0ae( c14190 )
        TSCP  c14190;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16977 );
        DISPLAY( 0 ) = c14190;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14191, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dkiller_21_6b3beb5_v );
DEFCSTRING( t16981, "CAMERA-SET-COLOR-KILLER!" );
EXTERNTSCP( _2dcamera_r_2dkiller_586ab4d_v );

TSCP  toollib_2dcamera_l14195( c16983 )
        TSCP  c16983;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14195 [inside CAMERA-SET-COLOR-KI\
LLER!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16983, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16983, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_r_2dkiller_586ab4d_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dkiller_21_6b3beb5( c14193, v14194 )
        TSCP  c14193, v14194;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16981 );
        DISPLAY( 0 ) = c14193;
        DISPLAY( 1 ) = v14194;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14195, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_r_2dkiller_586ab4d_v );
DEFCSTRING( t16985, "V4L2-CID-COLOR-KILLER" );
DEFTSCP( _2dcamera_r_2dkiller_889394ec_v );
DEFCSTRING( t16986, "CAMERA-GET-COLOR-KILLER" );

TSCP  toollib_2dcamera_l14198( c16988 )
        TSCP  c16988;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14198 [inside CAMERA-GET-COLOR-KI\
LLER]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16988, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_r_2dkiller_586ab4d_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_r_2dkiller_889394ec( c14197 )
        TSCP  c14197;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16986 );
        DISPLAY( 0 ) = c14197;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14198, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dlastp1_21_c170ed16_v );
DEFCSTRING( t16990, "CAMERA-SET-LASTP1!" );
EXTERNTSCP( _2dcamera_d_2dlastp1_616e703_v );

TSCP  toollib_2dcamera_l14202( c16992 )
        TSCP  c16992;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14202 [inside CAMERA-SET-LASTP1!]\
" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16992, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16992, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_d_2dlastp1_616e703_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dlastp1_21_c170ed16( c14200, v14201 )
        TSCP  c14200, v14201;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16990 );
        DISPLAY( 0 ) = c14200;
        DISPLAY( 1 ) = v14201;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14202, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_d_2dlastp1_616e703_v );
DEFCSTRING( t16994, "V4L2-CID-LASTP1" );
DEFTSCP( _2dcamera_t_2dlastp1_6daf7d0d_v );
DEFCSTRING( t16995, "CAMERA-GET-LASTP1" );

TSCP  toollib_2dcamera_l14205( c16997 )
        TSCP  c16997;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14205 [inside CAMERA-GET-LASTP1]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16997, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_d_2dlastp1_616e703_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_t_2dlastp1_6daf7d0d( c14204 )
        TSCP  c14204;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16995 );
        DISPLAY( 0 ) = c14204;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14205, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbase_21_74e96b7c_v );
DEFCSTRING( t16999, "CAMERA-SET-MPEG-BASE!" );
EXTERNTSCP( _2dcamera_peg_2dbase_54d6881b_v );

TSCP  toollib_2dcamera_l14209( c17001 )
        TSCP  c17001;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14209 [inside CAMERA-SET-MPEG-BAS\
E!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17001, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17001, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_peg_2dbase_54d6881b_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dbase_21_74e96b7c( c14207, v14208 )
        TSCP  c14207, v14208;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16999 );
        DISPLAY( 0 ) = c14207;
        DISPLAY( 1 ) = v14208;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14209, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_peg_2dbase_54d6881b_v );
DEFCSTRING( t17003, "V4L2-CID-MPEG-BASE" );
DEFTSCP( _2dcamera_peg_2dbase_759d4049_v );
DEFCSTRING( t17004, "CAMERA-GET-MPEG-BASE" );

TSCP  toollib_2dcamera_l14212( c17006 )
        TSCP  c17006;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14212 [inside CAMERA-GET-MPEG-BAS\
E]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17006, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_peg_2dbase_54d6881b_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_peg_2dbase_759d4049( c14211 )
        TSCP  c14211;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17004 );
        DISPLAY( 0 ) = c14211;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14212, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dclass_21_851c6f9c_v );
DEFCSTRING( t17008, "CAMERA-SET-MPEG-CLASS!" );
EXTERNTSCP( _2dcamera_eg_2dclass_8f0d0c46_v );

TSCP  toollib_2dcamera_l14216( c17010 )
        TSCP  c17010;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14216 [inside CAMERA-SET-MPEG-CLA\
SS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17010, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17010, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_eg_2dclass_8f0d0c46_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dclass_21_851c6f9c( c14214, v14215 )
        TSCP  c14214, v14215;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17008 );
        DISPLAY( 0 ) = c14214;
        DISPLAY( 1 ) = v14215;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14216, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_eg_2dclass_8f0d0c46_v );
DEFCSTRING( t17012, "V4L2-CID-MPEG-CLASS" );
DEFTSCP( _2dcamera_eg_2dclass_a497756_v );
DEFCSTRING( t17013, "CAMERA-GET-MPEG-CLASS" );

TSCP  toollib_2dcamera_l14219( c17015 )
        TSCP  c17015;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14219 [inside CAMERA-GET-MPEG-CLA\
SS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17015, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_eg_2dclass_8f0d0c46_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_eg_2dclass_a497756( c14218 )
        TSCP  c14218;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17013 );
        DISPLAY( 0 ) = c14218;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14219, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dtype_21_a84083a5_v );
DEFCSTRING( t17017, "CAMERA-SET-MPEG-STREAM-TYPE!" );
EXTERNTSCP( _2dcamera_eam_2dtype_901242e3_v );

TSCP  toollib_2dcamera_l14223( c17019 )
        TSCP  c17019;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14223 [inside CAMERA-SET-MPEG-STR\
EAM-TYPE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17019, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17019, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_eam_2dtype_901242e3_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dtype_21_a84083a5( c14221, v14222 )
        TSCP  c14221, v14222;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17017 );
        DISPLAY( 0 ) = c14221;
        DISPLAY( 1 ) = v14222;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14223, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_eam_2dtype_901242e3_v );
DEFCSTRING( t17021, "V4L2-CID-MPEG-STREAM-TYPE" );
DEFTSCP( _2dcamera_eam_2dtype_ef098081_v );
DEFCSTRING( t17022, "CAMERA-GET-MPEG-STREAM-TYPE" );

TSCP  toollib_2dcamera_l14226( c17024 )
        TSCP  c17024;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14226 [inside CAMERA-GET-MPEG-STR\
EAM-TYPE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17024, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_eam_2dtype_901242e3_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_eam_2dtype_ef098081( c14225 )
        TSCP  c14225;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17022 );
        DISPLAY( 0 ) = c14225;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14226, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_d_2dpmt_21_f89b2fa7_v );
DEFCSTRING( t17026, "CAMERA-SET-MPEG-STREAM-PID-PMT!" );
EXTERNTSCP( _2dcamera_dpid_2dpmt_9bc26fa1_v );

TSCP  toollib_2dcamera_l14230( c17028 )
        TSCP  c17028;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14230 [inside CAMERA-SET-MPEG-STR\
EAM-PID-PMT!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17028, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17028, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dpid_2dpmt_9bc26fa1_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_d_2dpmt_21_f89b2fa7( c14228, v14229 )
        TSCP  c14228, v14229;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17026 );
        DISPLAY( 0 ) = c14228;
        DISPLAY( 1 ) = v14229;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14230, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dpid_2dpmt_9bc26fa1_v );
DEFCSTRING( t17030, "V4L2-CID-MPEG-STREAM-PID-PMT" );
DEFTSCP( _2dcamera_dpid_2dpmt_1ca044a9_v );
DEFCSTRING( t17031, "CAMERA-GET-MPEG-STREAM-PID-PMT" );

TSCP  toollib_2dcamera_l14233( c17033 )
        TSCP  c17033;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14233 [inside CAMERA-GET-MPEG-STR\
EAM-PID-PMT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17033, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dpid_2dpmt_9bc26fa1_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dpid_2dpmt_1ca044a9( c14232 )
        TSCP  c14232;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17031 );
        DISPLAY( 0 ) = c14232;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14233, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2daudio_21_44802653_v );
DEFCSTRING( t17035, "CAMERA-SET-MPEG-STREAM-PID-AUDIO!" );
EXTERNTSCP( _2dcamera_id_2daudio_d728a4b6_v );

TSCP  toollib_2dcamera_l14237( c17037 )
        TSCP  c17037;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14237 [inside CAMERA-SET-MPEG-STR\
EAM-PID-AUDIO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17037, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17037, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2daudio_d728a4b6_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2daudio_21_44802653( c14235, v14236 )
        TSCP  c14235, v14236;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17035 );
        DISPLAY( 0 ) = c14235;
        DISPLAY( 1 ) = v14236;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14237, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2daudio_d728a4b6_v );
DEFCSTRING( t17039, "V4L2-CID-MPEG-STREAM-PID-AUDIO" );
DEFTSCP( _2dcamera_id_2daudio_b34d509c_v );
DEFCSTRING( t17040, "CAMERA-GET-MPEG-STREAM-PID-AUDIO" );

TSCP  toollib_2dcamera_l14240( c17042 )
        TSCP  c17042;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14240 [inside CAMERA-GET-MPEG-STR\
EAM-PID-AUDIO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17042, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2daudio_d728a4b6_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_id_2daudio_b34d509c( c14239 )
        TSCP  c14239;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17040 );
        DISPLAY( 0 ) = c14239;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14240, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dvideo_21_577005da_v );
DEFCSTRING( t17044, "CAMERA-SET-MPEG-STREAM-PID-VIDEO!" );
EXTERNTSCP( _2dcamera_id_2dvideo_b392480f_v );

TSCP  toollib_2dcamera_l14244( c17046 )
        TSCP  c17046;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14244 [inside CAMERA-SET-MPEG-STR\
EAM-PID-VIDEO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17046, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17046, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvideo_b392480f_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dvideo_21_577005da( c14242, v14243 )
        TSCP  c14242, v14243;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17044 );
        DISPLAY( 0 ) = c14242;
        DISPLAY( 1 ) = v14243;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14244, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dvideo_b392480f_v );
DEFCSTRING( t17048, "V4L2-CID-MPEG-STREAM-PID-VIDEO" );
DEFTSCP( _2dcamera_id_2dvideo_d7f7bc25_v );
DEFCSTRING( t17049, "CAMERA-GET-MPEG-STREAM-PID-VIDEO" );

TSCP  toollib_2dcamera_l14247( c17051 )
        TSCP  c17051;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14247 [inside CAMERA-GET-MPEG-STR\
EAM-PID-VIDEO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17051, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvideo_b392480f_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_id_2dvideo_d7f7bc25( c14246 )
        TSCP  c14246;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17049 );
        DISPLAY( 0 ) = c14246;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14247, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_d_2dpcr_21_62c0ce1a_v );
DEFCSTRING( t17053, "CAMERA-SET-MPEG-STREAM-PID-PCR!" );
EXTERNTSCP( _2dcamera_dpid_2dpcr_ec22e71a_v );

TSCP  toollib_2dcamera_l14251( c17055 )
        TSCP  c17055;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14251 [inside CAMERA-SET-MPEG-STR\
EAM-PID-PCR!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17055, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17055, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dpid_2dpcr_ec22e71a_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_d_2dpcr_21_62c0ce1a( c14249, v14250 )
        TSCP  c14249, v14250;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17053 );
        DISPLAY( 0 ) = c14249;
        DISPLAY( 1 ) = v14250;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14251, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dpid_2dpcr_ec22e71a_v );
DEFCSTRING( t17057, "V4L2-CID-MPEG-STREAM-PID-PCR" );
DEFTSCP( _2dcamera_dpid_2dpcr_6b40cc12_v );
DEFCSTRING( t17058, "CAMERA-GET-MPEG-STREAM-PID-PCR" );

TSCP  toollib_2dcamera_l14254( c17060 )
        TSCP  c17060;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14254 [inside CAMERA-GET-MPEG-STR\
EAM-PID-PCR]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17060, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dpid_2dpcr_ec22e71a_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dpid_2dpcr_6b40cc12( c14253 )
        TSCP  c14253;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17058 );
        DISPLAY( 0 ) = c14253;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14254, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2daudio_21_c02549d3_v );
DEFCSTRING( t17062, "CAMERA-SET-MPEG-STREAM-PES-ID-AUDIO!" );
EXTERNTSCP( _2dcamera_id_2daudio_6a2ddc5_v );

TSCP  toollib_2dcamera_l14258( c17064 )
        TSCP  c17064;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14258 [inside CAMERA-SET-MPEG-STR\
EAM-PES-ID-AUDIO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17064, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17064, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2daudio_6a2ddc5_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2daudio_21_c02549d3( c14256, v14257 )
        TSCP  c14256, v14257;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17062 );
        DISPLAY( 0 ) = c14256;
        DISPLAY( 1 ) = v14257;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14258, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2daudio_6a2ddc5_v );
DEFCSTRING( t17066, "V4L2-CID-MPEG-STREAM-PES-ID-AUDIO" );
DEFTSCP( _2dcamera_id_2daudio_cb5accf8_v );
DEFCSTRING( t17067, "CAMERA-GET-MPEG-STREAM-PES-ID-AUDIO" );

TSCP  toollib_2dcamera_l14261( c17069 )
        TSCP  c17069;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14261 [inside CAMERA-GET-MPEG-STR\
EAM-PES-ID-AUDIO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17069, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2daudio_6a2ddc5_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_id_2daudio_cb5accf8( c14260 )
        TSCP  c14260;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17067 );
        DISPLAY( 0 ) = c14260;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14261, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dvideo_21_d3d56a5a_v );
DEFCSTRING( t17071, "CAMERA-SET-MPEG-STREAM-PES-ID-VIDEO!" );
EXTERNTSCP( _2dcamera_id_2dvideo_6218317c_v );

TSCP  toollib_2dcamera_l14265( c17073 )
        TSCP  c17073;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14265 [inside CAMERA-SET-MPEG-STR\
EAM-PES-ID-VIDEO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17073, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17073, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvideo_6218317c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dvideo_21_d3d56a5a( c14263, v14264 )
        TSCP  c14263, v14264;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17071 );
        DISPLAY( 0 ) = c14263;
        DISPLAY( 1 ) = v14264;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14265, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_id_2dvideo_6218317c_v );
DEFCSTRING( t17075, "V4L2-CID-MPEG-STREAM-PES-ID-VIDEO" );
DEFTSCP( _2dcamera_id_2dvideo_afe02041_v );
DEFCSTRING( t17076, "CAMERA-GET-MPEG-STREAM-PES-ID-VIDEO" );

TSCP  toollib_2dcamera_l14268( c17078 )
        TSCP  c17078;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14268 [inside CAMERA-GET-MPEG-STR\
EAM-PES-ID-VIDEO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17078, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_id_2dvideo_6218317c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_id_2dvideo_afe02041( c14267 )
        TSCP  c14267;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17076 );
        DISPLAY( 0 ) = c14267;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14268, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_i_2dfmt_21_14f66735_v );
DEFCSTRING( t17080, "CAMERA-SET-MPEG-STREAM-VBI-FMT!" );
EXTERNTSCP( _2dcamera_dvbi_2dfmt_ccceb47f_v );

TSCP  toollib_2dcamera_l14272( c17082 )
        TSCP  c17082;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14272 [inside CAMERA-SET-MPEG-STR\
EAM-VBI-FMT!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17082, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17082, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dvbi_2dfmt_ccceb47f_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_i_2dfmt_21_14f66735( c14270, v14271 )
        TSCP  c14270, v14271;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17080 );
        DISPLAY( 0 ) = c14270;
        DISPLAY( 1 ) = v14271;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14272, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dvbi_2dfmt_ccceb47f_v );
DEFCSTRING( t17084, "V4L2-CID-MPEG-STREAM-VBI-FMT" );
DEFTSCP( _2dcamera_dvbi_2dfmt_4bac9f77_v );
DEFCSTRING( t17085, "CAMERA-GET-MPEG-STREAM-VBI-FMT" );

TSCP  toollib_2dcamera_l14275( c17087 )
        TSCP  c17087;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14275 [inside CAMERA-GET-MPEG-STR\
EAM-VBI-FMT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17087, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dvbi_2dfmt_ccceb47f_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dvbi_2dfmt_4bac9f77( c14274 )
        TSCP  c14274;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17085 );
        DISPLAY( 0 ) = c14274;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14275, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dfreq_21_64f75d79_v );
DEFCSTRING( t17089, "CAMERA-SET-MPEG-AUDIO-SAMPLING-FREQ!" );
EXTERNTSCP( _2dcamera_ing_2dfreq_a7cac2f3_v );

TSCP  toollib_2dcamera_l14279( c17091 )
        TSCP  c17091;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14279 [inside CAMERA-SET-MPEG-AUD\
IO-SAMPLING-FREQ!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17091, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17091, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ing_2dfreq_a7cac2f3_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dfreq_21_64f75d79( c14277, v14278 )
        TSCP  c14277, v14278;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17089 );
        DISPLAY( 0 ) = c14277;
        DISPLAY( 1 ) = v14278;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14279, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ing_2dfreq_a7cac2f3_v );
DEFCSTRING( t17093, "V4L2-CID-MPEG-AUDIO-SAMPLING-FREQ" );
DEFTSCP( _2dcamera_ing_2dfreq_df18b0cf_v );
DEFCSTRING( t17094, "CAMERA-GET-MPEG-AUDIO-SAMPLING-FREQ" );

TSCP  toollib_2dcamera_l14282( c17096 )
        TSCP  c17096;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14282 [inside CAMERA-GET-MPEG-AUD\
IO-SAMPLING-FREQ]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17096, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ing_2dfreq_a7cac2f3_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ing_2dfreq_df18b0cf( c14281 )
        TSCP  c14281;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17094 );
        DISPLAY( 0 ) = c14281;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14282, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ncoding_21_ca983bc3_v );
DEFCSTRING( t17098, "CAMERA-SET-MPEG-AUDIO-ENCODING!" );
EXTERNTSCP( _2dcamera_2dencoding_62696dc5_v );

TSCP  toollib_2dcamera_l14286( c17100 )
        TSCP  c17100;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14286 [inside CAMERA-SET-MPEG-AUD\
IO-ENCODING!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17100, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17100, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dencoding_62696dc5_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_ncoding_21_ca983bc3( c14284, v14285 )
        TSCP  c14284, v14285;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17098 );
        DISPLAY( 0 ) = c14284;
        DISPLAY( 1 ) = v14285;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14286, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dencoding_62696dc5_v );
DEFCSTRING( t17102, "V4L2-CID-MPEG-AUDIO-ENCODING" );
DEFTSCP( _2dcamera_2dencoding_5a930ed4_v );
DEFCSTRING( t17103, "CAMERA-GET-MPEG-AUDIO-ENCODING" );

TSCP  toollib_2dcamera_l14289( c17105 )
        TSCP  c17105;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14289 [inside CAMERA-GET-MPEG-AUD\
IO-ENCODING]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17105, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dencoding_62696dc5_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dencoding_5a930ed4( c14288 )
        TSCP  c14288;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17103 );
        DISPLAY( 0 ) = c14288;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14289, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bitrate_21_bb75682a_v );
DEFCSTRING( t17107, "CAMERA-SET-MPEG-AUDIO-L1-BITRATE!" );
EXTERNTSCP( _2dcamera__2dbitrate_57c8280c_v );

TSCP  toollib_2dcamera_l14293( c17109 )
        TSCP  c17109;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14293 [inside CAMERA-SET-MPEG-AUD\
IO-L1-BITRATE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17109, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17109, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_57c8280c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bitrate_21_bb75682a( c14291, v14292 )
        TSCP  c14291, v14292;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17107 );
        DISPLAY( 0 ) = c14291;
        DISPLAY( 1 ) = v14292;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14293, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbitrate_57c8280c_v );
DEFCSTRING( t17111, "V4L2-CID-MPEG-AUDIO-L1-BITRATE" );
DEFTSCP( _2dcamera__2dbitrate_33addc26_v );
DEFCSTRING( t17112, "CAMERA-GET-MPEG-AUDIO-L1-BITRATE" );

TSCP  toollib_2dcamera_l14296( c17114 )
        TSCP  c17114;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14296 [inside CAMERA-GET-MPEG-AUD\
IO-L1-BITRATE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17114, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_57c8280c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbitrate_33addc26( c14295 )
        TSCP  c14295;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17112 );
        DISPLAY( 0 ) = c14295;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14296, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bitrate_21_c7144df1_v );
DEFCSTRING( t17116, "CAMERA-SET-MPEG-AUDIO-L2-BITRATE!" );
EXTERNTSCP( _2dcamera__2dbitrate_ce2a4e0d_v );

TSCP  toollib_2dcamera_l14300( c17118 )
        TSCP  c17118;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14300 [inside CAMERA-SET-MPEG-AUD\
IO-L2-BITRATE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17118, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17118, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_ce2a4e0d_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bitrate_21_c7144df1( c14298, v14299 )
        TSCP  c14298, v14299;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17116 );
        DISPLAY( 0 ) = c14298;
        DISPLAY( 1 ) = v14299;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14300, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbitrate_ce2a4e0d_v );
DEFCSTRING( t17120, "V4L2-CID-MPEG-AUDIO-L2-BITRATE" );
DEFTSCP( _2dcamera__2dbitrate_aa4fba27_v );
DEFCSTRING( t17121, "CAMERA-GET-MPEG-AUDIO-L2-BITRATE" );

TSCP  toollib_2dcamera_l14303( c17123 )
        TSCP  c17123;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14303 [inside CAMERA-GET-MPEG-AUD\
IO-L2-BITRATE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17123, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_ce2a4e0d_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbitrate_aa4fba27( c14302 )
        TSCP  c14302;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17121 );
        DISPLAY( 0 ) = c14302;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14303, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bitrate_21_5a1bac87_v );
DEFCSTRING( t17125, "CAMERA-SET-MPEG-AUDIO-L3-BITRATE!" );
EXTERNTSCP( _2dcamera__2dbitrate_fa491cd_v );

TSCP  toollib_2dcamera_l14307( c17127 )
        TSCP  c17127;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14307 [inside CAMERA-SET-MPEG-AUD\
IO-L3-BITRATE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17127, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17127, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_fa491cd_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bitrate_21_5a1bac87( c14305, v14306 )
        TSCP  c14305, v14306;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17125 );
        DISPLAY( 0 ) = c14305;
        DISPLAY( 1 ) = v14306;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14307, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbitrate_fa491cd_v );
DEFCSTRING( t17129, "V4L2-CID-MPEG-AUDIO-L3-BITRATE" );
DEFTSCP( _2dcamera__2dbitrate_6bc165e7_v );
DEFCSTRING( t17130, "CAMERA-GET-MPEG-AUDIO-L3-BITRATE" );

TSCP  toollib_2dcamera_l14310( c17132 )
        TSCP  c17132;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14310 [inside CAMERA-GET-MPEG-AUD\
IO-L3-BITRATE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17132, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_fa491cd_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbitrate_6bc165e7( c14309 )
        TSCP  c14309;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17130 );
        DISPLAY( 0 ) = c14309;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14310, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmode_21_24d28900_v );
DEFCSTRING( t17134, "CAMERA-SET-MPEG-AUDIO-MODE!" );
EXTERNTSCP( _2dcamera_dio_2dmode_96f3d738_v );

TSCP  toollib_2dcamera_l14314( c17136 )
        TSCP  c17136;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14314 [inside CAMERA-SET-MPEG-AUD\
IO-MODE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17136, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17136, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmode_96f3d738_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmode_21_24d28900( c14312, v14313 )
        TSCP  c14312, v14313;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17134 );
        DISPLAY( 0 ) = c14312;
        DISPLAY( 1 ) = v14313;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14314, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dio_2dmode_96f3d738_v );
DEFCSTRING( t17138, "V4L2-CID-MPEG-AUDIO-MODE" );
DEFTSCP( _2dcamera_dio_2dmode_e73c0e74_v );
DEFCSTRING( t17139, "CAMERA-GET-MPEG-AUDIO-MODE" );

TSCP  toollib_2dcamera_l14317( c17141 )
        TSCP  c17141;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14317 [inside CAMERA-GET-MPEG-AUD\
IO-MODE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17141, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmode_96f3d738_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dio_2dmode_e73c0e74( c14316 )
        TSCP  c14316;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17139 );
        DISPLAY( 0 ) = c14316;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14317, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_tension_21_ad7931c3_v );
DEFCSTRING( t17143, "CAMERA-SET-MPEG-AUDIO-MODE-EXTENSION!" );
EXTERNTSCP( _2dcamera_dextension_e9ee0b9f_v );

TSCP  toollib_2dcamera_l14321( c17145 )
        TSCP  c17145;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14321 [inside CAMERA-SET-MPEG-AUD\
IO-MODE-EXTENSION!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17145, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17145, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dextension_e9ee0b9f_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_tension_21_ad7931c3( c14319, v14320 )
        TSCP  c14319, v14320;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17143 );
        DISPLAY( 0 ) = c14319;
        DISPLAY( 1 ) = v14320;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14321, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dextension_e9ee0b9f_v );
DEFCSTRING( t17147, "V4L2-CID-MPEG-AUDIO-MODE-EXTENSION" );
DEFTSCP( _2dcamera_dextension_c6f9a56a_v );
DEFCSTRING( t17148, "CAMERA-GET-MPEG-AUDIO-MODE-EXTENSION" );

TSCP  toollib_2dcamera_l14324( c17150 )
        TSCP  c17150;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14324 [inside CAMERA-GET-MPEG-AUD\
IO-MODE-EXTENSION]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17150, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dextension_e9ee0b9f_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dextension_c6f9a56a( c14323 )
        TSCP  c14323;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17148 );
        DISPLAY( 0 ) = c14323;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14324, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_mphasis_21_2309e5ef_v );
DEFCSTRING( t17152, "CAMERA-SET-MPEG-AUDIO-EMPHASIS!" );
EXTERNTSCP( _2dcamera_2demphasis_17174f53_v );

TSCP  toollib_2dcamera_l14328( c17154 )
        TSCP  c17154;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14328 [inside CAMERA-SET-MPEG-AUD\
IO-EMPHASIS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17154, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17154, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2demphasis_17174f53_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_mphasis_21_2309e5ef( c14326, v14327 )
        TSCP  c14326, v14327;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17152 );
        DISPLAY( 0 ) = c14326;
        DISPLAY( 1 ) = v14327;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14328, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2demphasis_17174f53_v );
DEFCSTRING( t17156, "V4L2-CID-MPEG-AUDIO-EMPHASIS" );
DEFTSCP( _2dcamera_2demphasis_2fed2c42_v );
DEFCSTRING( t17157, "CAMERA-GET-MPEG-AUDIO-EMPHASIS" );

TSCP  toollib_2dcamera_l14331( c17159 )
        TSCP  c17159;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14331 [inside CAMERA-GET-MPEG-AUD\
IO-EMPHASIS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17159, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2demphasis_17174f53_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2demphasis_2fed2c42( c14330 )
        TSCP  c14330;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17157 );
        DISPLAY( 0 ) = c14330;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14331, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_o_2dcrc_21_3921882e_v );
DEFCSTRING( t17161, "CAMERA-SET-MPEG-AUDIO-CRC!" );
EXTERNTSCP( _2dcamera_udio_2dcrc_91e9629a_v );

TSCP  toollib_2dcamera_l14335( c17163 )
        TSCP  c17163;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14335 [inside CAMERA-SET-MPEG-AUD\
IO-CRC!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17163, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17163, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_udio_2dcrc_91e9629a_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_o_2dcrc_21_3921882e( c14333, v14334 )
        TSCP  c14333, v14334;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17161 );
        DISPLAY( 0 ) = c14333;
        DISPLAY( 1 ) = v14334;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14335, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_udio_2dcrc_91e9629a_v );
DEFCSTRING( t17165, "V4L2-CID-MPEG-AUDIO-CRC" );
DEFTSCP( _2dcamera_udio_2dcrc_efb5a7de_v );
DEFCSTRING( t17166, "CAMERA-GET-MPEG-AUDIO-CRC" );

TSCP  toollib_2dcamera_l14338( c17168 )
        TSCP  c17168;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14338 [inside CAMERA-GET-MPEG-AUD\
IO-CRC]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17168, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_udio_2dcrc_91e9629a_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_udio_2dcrc_efb5a7de( c14337 )
        TSCP  c14337;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17166 );
        DISPLAY( 0 ) = c14337;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14338, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmute_21_e67f3f7f_v );
DEFCSTRING( t17170, "CAMERA-SET-MPEG-AUDIO-MUTE!" );
EXTERNTSCP( _2dcamera_dio_2dmute_cd80e3cf_v );

TSCP  toollib_2dcamera_l14342( c17172 )
        TSCP  c17172;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14342 [inside CAMERA-SET-MPEG-AUD\
IO-MUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17172, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17172, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmute_cd80e3cf_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmute_21_e67f3f7f( c14340, v14341 )
        TSCP  c14340, v14341;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17170 );
        DISPLAY( 0 ) = c14340;
        DISPLAY( 1 ) = v14341;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14342, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dio_2dmute_cd80e3cf_v );
DEFCSTRING( t17174, "V4L2-CID-MPEG-AUDIO-MUTE" );
DEFTSCP( _2dcamera_dio_2dmute_bc4f3a83_v );
DEFCSTRING( t17175, "CAMERA-GET-MPEG-AUDIO-MUTE" );

TSCP  toollib_2dcamera_l14345( c17177 )
        TSCP  c17177;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14345 [inside CAMERA-GET-MPEG-AUD\
IO-MUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17177, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_dio_2dmute_cd80e3cf_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_dio_2dmute_bc4f3a83( c14344 )
        TSCP  c14344;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17175 );
        DISPLAY( 0 ) = c14344;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14345, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ncoding_21_69c7d58_v );
DEFCSTRING( t17179, "CAMERA-SET-MPEG-VIDEO-ENCODING!" );
EXTERNTSCP( _2dcamera_2dencoding_e29a247e_v );

TSCP  toollib_2dcamera_l14349( c17181 )
        TSCP  c17181;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14349 [inside CAMERA-SET-MPEG-VID\
EO-ENCODING!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17181, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17181, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dencoding_e29a247e_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_ncoding_21_69c7d58( c14347, v14348 )
        TSCP  c14347, v14348;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17179 );
        DISPLAY( 0 ) = c14347;
        DISPLAY( 1 ) = v14348;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14349, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dencoding_e29a247e_v );
DEFCSTRING( t17183, "V4L2-CID-MPEG-VIDEO-ENCODING" );
DEFTSCP( _2dcamera_2dencoding_da60476f_v );
DEFCSTRING( t17184, "CAMERA-GET-MPEG-VIDEO-ENCODING" );

TSCP  toollib_2dcamera_l14352( c17186 )
        TSCP  c17186;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14352 [inside CAMERA-GET-MPEG-VID\
EO-ENCODING]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17186, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dencoding_e29a247e_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dencoding_da60476f( c14351 )
        TSCP  c14351;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17184 );
        DISPLAY( 0 ) = c14351;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14352, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_daspect_21_b2af09b1_v );
DEFCSTRING( t17188, "CAMERA-SET-MPEG-VIDEO-ASPECT!" );
EXTERNTSCP( _2dcamera_o_2daspect_3ce18144_v );

TSCP  toollib_2dcamera_l14356( c17190 )
        TSCP  c17190;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14356 [inside CAMERA-SET-MPEG-VID\
EO-ASPECT!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17190, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17190, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_o_2daspect_3ce18144_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_daspect_21_b2af09b1( c14354, v14355 )
        TSCP  c14354, v14355;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17188 );
        DISPLAY( 0 ) = c14354;
        DISPLAY( 1 ) = v14355;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14356, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_o_2daspect_3ce18144_v );
DEFCSTRING( t17192, "V4L2-CID-MPEG-VIDEO-ASPECT" );
DEFTSCP( _2dcamera_o_2daspect_9f229af2_v );
DEFCSTRING( t17193, "CAMERA-GET-MPEG-VIDEO-ASPECT" );

TSCP  toollib_2dcamera_l14359( c17195 )
        TSCP  c17195;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14359 [inside CAMERA-GET-MPEG-VID\
EO-ASPECT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17195, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_o_2daspect_3ce18144_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_o_2daspect_9f229af2( c14358 )
        TSCP  c14358;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17193 );
        DISPLAY( 0 ) = c14358;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14359, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dframes_21_81d3220b_v );
DEFCSTRING( t17197, "CAMERA-SET-MPEG-VIDEO-B-FRAMES!" );
EXTERNTSCP( _2dcamera_b_2dframes_13281705_v );

TSCP  toollib_2dcamera_l14363( c17199 )
        TSCP  c17199;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14363 [inside CAMERA-SET-MPEG-VID\
EO-B-FRAMES!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17199, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17199, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_b_2dframes_13281705_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dframes_21_81d3220b( c14361, v14362 )
        TSCP  c14361, v14362;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17197 );
        DISPLAY( 0 ) = c14361;
        DISPLAY( 1 ) = v14362;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14363, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_b_2dframes_13281705_v );
DEFCSTRING( t17201, "V4L2-CID-MPEG-VIDEO-B-FRAMES" );
DEFTSCP( _2dcamera_b_2dframes_944a3c0d_v );
DEFCSTRING( t17202, "CAMERA-GET-MPEG-VIDEO-B-FRAMES" );

TSCP  toollib_2dcamera_l14366( c17204 )
        TSCP  c17204;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14366 [inside CAMERA-GET-MPEG-VID\
EO-B-FRAMES]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17204, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_b_2dframes_13281705_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_b_2dframes_944a3c0d( c14365 )
        TSCP  c14365;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17202 );
        DISPLAY( 0 ) = c14365;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14366, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dsize_21_ff9a91ca_v );
DEFCSTRING( t17206, "CAMERA-SET-MPEG-VIDEO-GOP-SIZE!" );
EXTERNTSCP( _2dcamera_gop_2dsize_a6c48c6f_v );

TSCP  toollib_2dcamera_l14370( c17208 )
        TSCP  c17208;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14370 [inside CAMERA-SET-MPEG-VID\
EO-GOP-SIZE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17208, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17208, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_gop_2dsize_a6c48c6f_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dsize_21_ff9a91ca( c14368, v14369 )
        TSCP  c14368, v14369;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17206 );
        DISPLAY( 0 ) = c14368;
        DISPLAY( 1 ) = v14369;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14370, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_gop_2dsize_a6c48c6f_v );
DEFCSTRING( t17210, "V4L2-CID-MPEG-VIDEO-GOP-SIZE" );
DEFTSCP( _2dcamera_gop_2dsize_21a6a767_v );
DEFCSTRING( t17211, "CAMERA-GET-MPEG-VIDEO-GOP-SIZE" );

TSCP  toollib_2dcamera_l14373( c17213 )
        TSCP  c17213;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14373 [inside CAMERA-GET-MPEG-VID\
EO-GOP-SIZE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17213, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_gop_2dsize_a6c48c6f_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_gop_2dsize_21a6a767( c14372 )
        TSCP  c14372;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17211 );
        DISPLAY( 0 ) = c14372;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14373, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_closure_21_d8315b5e_v );
DEFCSTRING( t17215, "CAMERA-SET-MPEG-VIDEO-GOP-CLOSURE!" );
EXTERNTSCP( _2dcamera__2dclosure_d03e6481_v );

TSCP  toollib_2dcamera_l14377( c17217 )
        TSCP  c17217;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14377 [inside CAMERA-SET-MPEG-VID\
EO-GOP-CLOSURE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17217, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17217, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dclosure_d03e6481_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_closure_21_d8315b5e( c14375, v14376 )
        TSCP  c14375, v14376;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17215 );
        DISPLAY( 0 ) = c14375;
        DISPLAY( 1 ) = v14376;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14377, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dclosure_d03e6481_v );
DEFCSTRING( t17219, "V4L2-CID-MPEG-VIDEO-GOP-CLOSURE" );
DEFTSCP( _2dcamera__2dclosure_be1c8a3_v );
DEFCSTRING( t17220, "CAMERA-GET-MPEG-VIDEO-GOP-CLOSURE" );

TSCP  toollib_2dcamera_l14380( c17222 )
        TSCP  c17222;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14380 [inside CAMERA-GET-MPEG-VID\
EO-GOP-CLOSURE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17222, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dclosure_d03e6481_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dclosure_be1c8a3( c14379 )
        TSCP  c14379;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17220 );
        DISPLAY( 0 ) = c14379;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14380, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ulldown_21_91e4fe98_v );
DEFCSTRING( t17224, "CAMERA-SET-MPEG-VIDEO-PULLDOWN!" );
EXTERNTSCP( _2dcamera_2dpulldown_e3bf760e_v );

TSCP  toollib_2dcamera_l14384( c17226 )
        TSCP  c17226;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14384 [inside CAMERA-SET-MPEG-VID\
EO-PULLDOWN!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17226, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17226, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dpulldown_e3bf760e_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_ulldown_21_91e4fe98( c14382, v14383 )
        TSCP  c14382, v14383;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17224 );
        DISPLAY( 0 ) = c14382;
        DISPLAY( 1 ) = v14383;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14384, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dpulldown_e3bf760e_v );
DEFCSTRING( t17228, "V4L2-CID-MPEG-VIDEO-PULLDOWN" );
DEFTSCP( _2dcamera_2dpulldown_db45151f_v );
DEFCSTRING( t17229, "CAMERA-GET-MPEG-VIDEO-PULLDOWN" );

TSCP  toollib_2dcamera_l14387( c17231 )
        TSCP  c17231;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14387 [inside CAMERA-GET-MPEG-VID\
EO-PULLDOWN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17231, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dpulldown_e3bf760e_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dpulldown_db45151f( c14386 )
        TSCP  c14386;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17229 );
        DISPLAY( 0 ) = c14386;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14387, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmode_21_8eef871b_v );
DEFCSTRING( t17233, "CAMERA-SET-MPEG-VIDEO-BITRATE-MODE!" );
EXTERNTSCP( _2dcamera_ate_2dmode_9660b7c1_v );

TSCP  toollib_2dcamera_l14391( c17235 )
        TSCP  c17235;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14391 [inside CAMERA-SET-MPEG-VID\
EO-BITRATE-MODE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17235, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17235, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ate_2dmode_9660b7c1_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmode_21_8eef871b( c14389, v14390 )
        TSCP  c14389, v14390;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17233 );
        DISPLAY( 0 ) = c14389;
        DISPLAY( 1 ) = v14390;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14391, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ate_2dmode_9660b7c1_v );
DEFCSTRING( t17237, "V4L2-CID-MPEG-VIDEO-BITRATE-MODE" );
DEFTSCP( _2dcamera_ate_2dmode_43db2989_v );
DEFCSTRING( t17238, "CAMERA-GET-MPEG-VIDEO-BITRATE-MODE" );

TSCP  toollib_2dcamera_l14394( c17240 )
        TSCP  c17240;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14394 [inside CAMERA-GET-MPEG-VID\
EO-BITRATE-MODE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17240, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ate_2dmode_9660b7c1_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ate_2dmode_43db2989( c14393 )
        TSCP  c14393;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17238 );
        DISPLAY( 0 ) = c14393;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14394, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bitrate_21_a09c4101_v );
DEFCSTRING( t17242, "CAMERA-SET-MPEG-VIDEO-BITRATE!" );
EXTERNTSCP( _2dcamera__2dbitrate_e43ad737_v );

TSCP  toollib_2dcamera_l14398( c17244 )
        TSCP  c17244;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14398 [inside CAMERA-SET-MPEG-VID\
EO-BITRATE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17244, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17244, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_e43ad737_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bitrate_21_a09c4101( c14396, v14397 )
        TSCP  c14396, v14397;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17242 );
        DISPLAY( 0 ) = c14396;
        DISPLAY( 1 ) = v14397;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14398, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbitrate_e43ad737_v );
DEFCSTRING( t17246, "V4L2-CID-MPEG-VIDEO-BITRATE" );
DEFTSCP( _2dcamera__2dbitrate_c69b0295_v );
DEFCSTRING( t17247, "CAMERA-GET-MPEG-VIDEO-BITRATE" );

TSCP  toollib_2dcamera_l14401( c17249 )
        TSCP  c17249;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14401 [inside CAMERA-GET-MPEG-VID\
EO-BITRATE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17249, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dbitrate_e43ad737_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dbitrate_c69b0295( c14400 )
        TSCP  c14400;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17247 );
        DISPLAY( 0 ) = c14400;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14401, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dpeak_21_142a130_v );
DEFCSTRING( t17251, "CAMERA-SET-MPEG-VIDEO-BITRATE-PEAK!" );
EXTERNTSCP( _2dcamera_ate_2dpeak_a34b6417_v );

TSCP  toollib_2dcamera_l14405( c17253 )
        TSCP  c17253;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14405 [inside CAMERA-SET-MPEG-VID\
EO-BITRATE-PEAK!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17253, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17253, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ate_2dpeak_a34b6417_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dpeak_21_142a130( c14403, v14404 )
        TSCP  c14403, v14404;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17251 );
        DISPLAY( 0 ) = c14403;
        DISPLAY( 1 ) = v14404;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14405, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ate_2dpeak_a34b6417_v );
DEFCSTRING( t17255, "V4L2-CID-MPEG-VIDEO-BITRATE-PEAK" );
DEFTSCP( _2dcamera_ate_2dpeak_76f0fa5f_v );
DEFCSTRING( t17256, "CAMERA-GET-MPEG-VIDEO-BITRATE-PEAK" );

TSCP  toollib_2dcamera_l14408( c17258 )
        TSCP  c17258;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14408 [inside CAMERA-GET-MPEG-VID\
EO-BITRATE-PEAK]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17258, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ate_2dpeak_a34b6417_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ate_2dpeak_76f0fa5f( c14407 )
        TSCP  c14407;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17256 );
        DISPLAY( 0 ) = c14407;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14408, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_imation_21_1faf9d08_v );
DEFCSTRING( t17260, "CAMERA-SET-MPEG-VIDEO-TEMPORAL-DECIMATION!" );
EXTERNTSCP( _2dcamera_decimation_a8fa264a_v );

TSCP  toollib_2dcamera_l14412( c17262 )
        TSCP  c17262;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14412 [inside CAMERA-SET-MPEG-VID\
EO-TEMPORAL-DECIMATION!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17262, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17262, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_decimation_a8fa264a_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_imation_21_1faf9d08( c14410, v14411 )
        TSCP  c14410, v14411;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17260 );
        DISPLAY( 0 ) = c14410;
        DISPLAY( 1 ) = v14411;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14412, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_decimation_a8fa264a_v );
DEFCSTRING( t17264, "V4L2-CID-MPEG-VIDEO-TEMPORAL-DECIMATION" );
DEFTSCP( _2dcamera_decimation_8eef1ac9_v );
DEFCSTRING( t17265, "CAMERA-GET-MPEG-VIDEO-TEMPORAL-DECIMATION" );

TSCP  toollib_2dcamera_l14415( c17267 )
        TSCP  c17267;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14415 [inside CAMERA-GET-MPEG-VID\
EO-TEMPORAL-DECIMATION]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17267, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_decimation_a8fa264a_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_decimation_8eef1ac9( c14414 )
        TSCP  c14414;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17265 );
        DISPLAY( 0 ) = c14414;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14415, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmute_21_70514fea_v );
DEFCSTRING( t17269, "CAMERA-SET-MPEG-VIDEO-MUTE!" );
EXTERNTSCP( _2dcamera_deo_2dmute_f7d842a4_v );

TSCP  toollib_2dcamera_l14419( c17271 )
        TSCP  c17271;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14419 [inside CAMERA-SET-MPEG-VID\
EO-MUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17271, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17271, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_deo_2dmute_f7d842a4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmute_21_70514fea( c14417, v14418 )
        TSCP  c14417, v14418;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17269 );
        DISPLAY( 0 ) = c14417;
        DISPLAY( 1 ) = v14418;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14419, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_deo_2dmute_f7d842a4_v );
DEFCSTRING( t17273, "V4L2-CID-MPEG-VIDEO-MUTE" );
DEFTSCP( _2dcamera_deo_2dmute_86179be8_v );
DEFCSTRING( t17274, "CAMERA-GET-MPEG-VIDEO-MUTE" );

TSCP  toollib_2dcamera_l14422( c17276 )
        TSCP  c17276;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14422 [inside CAMERA-GET-MPEG-VID\
EO-MUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17276, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_deo_2dmute_f7d842a4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_deo_2dmute_86179be8( c14421 )
        TSCP  c14421;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17274 );
        DISPLAY( 0 ) = c14421;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14422, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_e_2dyuv_21_b3d4c0cb_v );
DEFCSTRING( t17278, "CAMERA-SET-MPEG-VIDEO-MUTE-YUV!" );
EXTERNTSCP( _2dcamera_mute_2dyuv_d1a69707_v );

TSCP  toollib_2dcamera_l14426( c17280 )
        TSCP  c17280;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14426 [inside CAMERA-SET-MPEG-VID\
EO-MUTE-YUV!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17280, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17280, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_mute_2dyuv_d1a69707_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_e_2dyuv_21_b3d4c0cb( c14424, v14425 )
        TSCP  c14424, v14425;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17278 );
        DISPLAY( 0 ) = c14424;
        DISPLAY( 1 ) = v14425;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14426, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_mute_2dyuv_d1a69707_v );
DEFCSTRING( t17282, "V4L2-CID-MPEG-VIDEO-MUTE-YUV" );
DEFTSCP( _2dcamera_mute_2dyuv_56c4bc0f_v );
DEFCSTRING( t17283, "CAMERA-GET-MPEG-VIDEO-MUTE-YUV" );

TSCP  toollib_2dcamera_l14429( c17285 )
        TSCP  c17285;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14429 [inside CAMERA-GET-MPEG-VID\
EO-MUTE-YUV]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17285, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_mute_2dyuv_d1a69707_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_mute_2dyuv_56c4bc0f( c14428 )
        TSCP  c14428;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17283 );
        DISPLAY( 0 ) = c14428;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14429, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbase_21_3f5541cc_v );
DEFCSTRING( t17287, "CAMERA-SET-MPEG-CX2341X-BASE!" );
EXTERNTSCP( _2dcamera_41x_2dbase_b6f17835_v );

TSCP  toollib_2dcamera_l14433( c17289 )
        TSCP  c17289;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14433 [inside CAMERA-SET-MPEG-CX2\
341X-BASE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17289, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17289, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_41x_2dbase_b6f17835_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dbase_21_3f5541cc( c14431, v14432 )
        TSCP  c14431, v14432;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17287 );
        DISPLAY( 0 ) = c14431;
        DISPLAY( 1 ) = v14432;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14433, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_41x_2dbase_b6f17835_v );
DEFCSTRING( t17291, "V4L2-CID-MPEG-CX2341X-BASE" );
DEFTSCP( _2dcamera_41x_2dbase_15326383_v );
DEFCSTRING( t17292, "CAMERA-GET-MPEG-CX2341X-BASE" );

TSCP  toollib_2dcamera_l14436( c17294 )
        TSCP  c17294;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14436 [inside CAMERA-GET-MPEG-CX2\
341X-BASE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17294, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_41x_2dbase_b6f17835_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_41x_2dbase_15326383( c14435 )
        TSCP  c14435;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17292 );
        DISPLAY( 0 ) = c14435;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14436, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmode_21_731c4731_v );
DEFCSTRING( t17296, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-SPATIAL-FILTER-MODE!" );
EXTERNTSCP( _2dcamera_ter_2dmode_c9a49a6c_v );

TSCP  toollib_2dcamera_l14440( c17298 )
        TSCP  c17298;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14440 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-SPATIAL-FILTER-MODE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17298, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17298, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dmode_c9a49a6c_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmode_21_731c4731( c14438, v14439 )
        TSCP  c14438, v14439;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17296 );
        DISPLAY( 0 ) = c14438;
        DISPLAY( 1 ) = v14439;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14440, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ter_2dmode_c9a49a6c_v );
DEFCSTRING( t17300, "V4L2-CID-MPEG-CX2341X-VIDEO-SPATIAL-FILTER-MODE" );
DEFTSCP( _2dcamera_ter_2dmode_cce14f22_v );
DEFCSTRING( t17301, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-SPATIAL-FILTER-MODE" );

TSCP  toollib_2dcamera_l14443( c17303 )
        TSCP  c17303;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14443 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-SPATIAL-FILTER-MODE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17303, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dmode_c9a49a6c_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ter_2dmode_cce14f22( c14442 )
        TSCP  c14442;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17301 );
        DISPLAY( 0 ) = c14442;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14443, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dfilter_21_55ba7d_v );
DEFCSTRING( t17305, "CAMERA-SET-MPEG-CX2341X-VIDEO-SPATIAL-FILTER!" );
EXTERNTSCP( _2dcamera_l_2dfilter_41477e48_v );

TSCP  toollib_2dcamera_l14447( c17307 )
        TSCP  c17307;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14447 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-SPATIAL-FILTER!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17307, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17307, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_l_2dfilter_41477e48_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dfilter_21_55ba7d( c14445, v14446 )
        TSCP  c14445, v14446;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17305 );
        DISPLAY( 0 ) = c14445;
        DISPLAY( 1 ) = v14446;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14447, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_l_2dfilter_41477e48_v );
DEFCSTRING( t17309, "V4L2-CID-MPEG-CX2341X-VIDEO-SPATIAL-FILTER" );
DEFTSCP( _2dcamera_l_2dfilter_d4cf11ac_v );
DEFCSTRING( t17310, "CAMERA-GET-MPEG-CX2341X-VIDEO-SPATIAL-FILTER" );

TSCP  toollib_2dcamera_l14450( c17312 )
        TSCP  c17312;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14450 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-SPATIAL-FILTER]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17312, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_l_2dfilter_41477e48_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_l_2dfilter_d4cf11ac( c14449 )
        TSCP  c14449;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17310 );
        DISPLAY( 0 ) = c14449;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14450, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dtype_21_b2835068_v );
DEFCSTRING( t17314, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-LUMA-SPATIAL-FILTER-TYPE!" );
EXTERNTSCP( _2dcamera_ter_2dtype_eea5738d_v );

TSCP  toollib_2dcamera_l14454( c17316 )
        TSCP  c17316;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14454 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-LUMA-SPATIAL-FILTER-TYPE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17316, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17316, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_eea5738d_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dtype_21_b2835068( c14452, v14453 )
        TSCP  c14452, v14453;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17314 );
        DISPLAY( 0 ) = c14452;
        DISPLAY( 1 ) = v14453;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14454, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ter_2dtype_eea5738d_v );
DEFCSTRING( t17318, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-LUMA-SPATIAL-FILTER-TYPE" );
DEFTSCP( _2dcamera_ter_2dtype_1fafd73e_v );
DEFCSTRING( t17319, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-LUMA-SPATIAL-FILTER-TYPE" );

TSCP  toollib_2dcamera_l14457( c17321 )
        TSCP  c17321;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14457 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-LUMA-SPATIAL-FILTER-TYPE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17321, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_eea5738d_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ter_2dtype_1fafd73e( c14456 )
        TSCP  c14456;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17319 );
        DISPLAY( 0 ) = c14456;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14457, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dtype_21_61bf11c5_v );
DEFCSTRING( t17323, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-CHROMA-SPATIAL-FILTER-TYPE!" );
EXTERNTSCP( _2dcamera_ter_2dtype_afa5065e_v );

TSCP  toollib_2dcamera_l14461( c17325 )
        TSCP  c17325;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14461 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-CHROMA-SPATIAL-FILTER-TYPE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17325, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17325, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_afa5065e_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dtype_21_61bf11c5( c14459, v14460 )
        TSCP  c14459, v14460;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17323 );
        DISPLAY( 0 ) = c14459;
        DISPLAY( 1 ) = v14460;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14461, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ter_2dtype_afa5065e_v );
DEFCSTRING( t17327, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-CHROMA-SPATIAL-FILTER-TYPE" );
DEFTSCP( _2dcamera_ter_2dtype_b1f66dde_v );
DEFCSTRING( t17328, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-CHROMA-SPATIAL-FILTER-TYPE" );

TSCP  toollib_2dcamera_l14464( c17330 )
        TSCP  c17330;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14464 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-CHROMA-SPATIAL-FILTER-TYPE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17330, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_afa5065e_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ter_2dtype_b1f66dde( c14463 )
        TSCP  c14463;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17328 );
        DISPLAY( 0 ) = c14463;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14464, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dmode_21_230ee439_v );
DEFCSTRING( t17332, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER-MODE!" );
EXTERNTSCP( _2dcamera_ter_2dmode_be00f403_v );

TSCP  toollib_2dcamera_l14468( c17334 )
        TSCP  c17334;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14468 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-TEMPORAL-FILTER-MODE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17334, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17334, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dmode_be00f403_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dmode_21_230ee439( c14466, v14467 )
        TSCP  c14466, v14467;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17332 );
        DISPLAY( 0 ) = c14466;
        DISPLAY( 1 ) = v14467;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14468, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ter_2dmode_be00f403_v );
DEFCSTRING( t17336, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER-MODE" );
DEFTSCP( _2dcamera_ter_2dmode_2f61dd41_v );
DEFCSTRING( t17337, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER-MODE" );

TSCP  toollib_2dcamera_l14471( c17339 )
        TSCP  c17339;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14471 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-TEMPORAL-FILTER-MODE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17339, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dmode_be00f403_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ter_2dmode_2f61dd41( c14470 )
        TSCP  c14470;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17337 );
        DISPLAY( 0 ) = c14470;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14471, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dfilter_21_158b24d0_v );
DEFCSTRING( t17341, "CAMERA-SET-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER!" );
EXTERNTSCP( _2dcamera_l_2dfilter_a84d3182_v );

TSCP  toollib_2dcamera_l14475( c17343 )
        TSCP  c17343;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14475 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-TEMPORAL-FILTER!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17343, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17343, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_l_2dfilter_a84d3182_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dfilter_21_158b24d0( c14473, v14474 )
        TSCP  c14473, v14474;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17341 );
        DISPLAY( 0 ) = c14473;
        DISPLAY( 1 ) = v14474;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14475, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_l_2dfilter_a84d3182_v );
DEFCSTRING( t17345, "V4L2-CID-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER" );
DEFTSCP( _2dcamera_l_2dfilter_fbf9f8c_v );
DEFCSTRING( t17346, "CAMERA-GET-MPEG-CX2341X-VIDEO-TEMPORAL-FILTER" );

TSCP  toollib_2dcamera_l14478( c17348 )
        TSCP  c17348;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14478 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-TEMPORAL-FILTER]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17348, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_l_2dfilter_a84d3182_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_l_2dfilter_fbf9f8c( c14477 )
        TSCP  c14477;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17346 );
        DISPLAY( 0 ) = c14477;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14478, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dtype_21_5678c6de_v );
DEFCSTRING( t17350, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-MEDIAN-FILTER-TYPE!" );
EXTERNTSCP( _2dcamera_ter_2dtype_ad3adcd4_v );

TSCP  toollib_2dcamera_l14482( c17352 )
        TSCP  c17352;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14482 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-MEDIAN-FILTER-TYPE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17352, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17352, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_ad3adcd4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dtype_21_5678c6de( c14480, v14481 )
        TSCP  c14480, v14481;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17350 );
        DISPLAY( 0 ) = c14480;
        DISPLAY( 1 ) = v14481;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14482, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ter_2dtype_ad3adcd4_v );
DEFCSTRING( t17354, "V4L2-CID-MPEG-CX2341X-VIDEO-MEDIAN-FILTER-TYPE" );
DEFTSCP( _2dcamera_ter_2dtype_e8b88113_v );
DEFCSTRING( t17355, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-MEDIAN-FILTER-TYPE" );

TSCP  toollib_2dcamera_l14485( c17357 )
        TSCP  c17357;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14485 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-MEDIAN-FILTER-TYPE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17357, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ter_2dtype_ad3adcd4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ter_2dtype_e8b88113( c14484 )
        TSCP  c14484;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17355 );
        DISPLAY( 0 ) = c14484;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14485, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dbottom_21_15148f3b_v );
DEFCSTRING( t17359, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-BOTTOM!" );
EXTERNTSCP( _2dcamera_r_2dbottom_c779a1fc_v );

TSCP  toollib_2dcamera_l14489( c17361 )
        TSCP  c17361;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14489 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-LUMA-MEDIAN-FILTER-BOTTOM!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17361, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17361, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_r_2dbottom_c779a1fc_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dbottom_21_15148f3b( c14487, v14488 )
        TSCP  c14487, v14488;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17359 );
        DISPLAY( 0 ) = c14487;
        DISPLAY( 1 ) = v14488;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14489, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_r_2dbottom_c779a1fc_v );
DEFCSTRING( t17363, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-BOTTOM" );
DEFTSCP( _2dcamera_r_2dbottom_95e0496e_v );
DEFCSTRING( t17364, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-BOTTOM" );

TSCP  toollib_2dcamera_l14492( c17366 )
        TSCP  c17366;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14492 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-LUMA-MEDIAN-FILTER-BOTTOM]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17366, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_r_2dbottom_c779a1fc_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_r_2dbottom_95e0496e( c14491 )
        TSCP  c14491;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17364 );
        DISPLAY( 0 ) = c14491;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14492, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_r_2dtop_21_994005b4_v );
DEFCSTRING( t17368, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-TOP!" );
EXTERNTSCP( _2dcamera_lter_2dtop_30b14607_v );

TSCP  toollib_2dcamera_l14496( c17370 )
        TSCP  c17370;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14496 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-LUMA-MEDIAN-FILTER-TOP!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17370, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17370, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_lter_2dtop_30b14607_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_r_2dtop_21_994005b4( c14494, v14495 )
        TSCP  c14494, v14495;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17368 );
        DISPLAY( 0 ) = c14494;
        DISPLAY( 1 ) = v14495;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14496, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_lter_2dtop_30b14607_v );
DEFCSTRING( t17372, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-TOP" );
DEFTSCP( _2dcamera_lter_2dtop_cdde52ea_v );
DEFCSTRING( t17373, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-LUMA-MEDIAN-FILTER-TOP" );

TSCP  toollib_2dcamera_l14499( c17375 )
        TSCP  c17375;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14499 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-LUMA-MEDIAN-FILTER-TOP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17375, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_lter_2dtop_30b14607_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_lter_2dtop_cdde52ea( c14498 )
        TSCP  c14498;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17373 );
        DISPLAY( 0 ) = c14498;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14499, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dbottom_21_bda06c2f_v );
DEFCSTRING( t17377, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-BOTTOM!" );
EXTERNTSCP( _2dcamera_r_2dbottom_d8e222e7_v );

TSCP  toollib_2dcamera_l14503( c17379 )
        TSCP  c17379;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14503 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-CHROMA-MEDIAN-FILTER-BOTTOM!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17379, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17379, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_r_2dbottom_d8e222e7_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_dbottom_21_bda06c2f( c14501, v14502 )
        TSCP  c14501, v14502;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17377 );
        DISPLAY( 0 ) = c14501;
        DISPLAY( 1 ) = v14502;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14503, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_r_2dbottom_d8e222e7_v );
DEFCSTRING( t17381, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-BOTTOM" );
DEFTSCP( _2dcamera_r_2dbottom_3544f2ac_v );
DEFCSTRING( t17382, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-BOTTOM" );

TSCP  toollib_2dcamera_l14506( c17384 )
        TSCP  c17384;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14506 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-CHROMA-MEDIAN-FILTER-BOTTOM]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17384, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_r_2dbottom_d8e222e7_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_r_2dbottom_3544f2ac( c14505 )
        TSCP  c14505;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17382 );
        DISPLAY( 0 ) = c14505;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14506, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_r_2dtop_21_f9515b30_v );
DEFCSTRING( t17386, 
            "CAMERA-SET-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-TOP!" );
EXTERNTSCP( _2dcamera_lter_2dtop_e424f881_v );

TSCP  toollib_2dcamera_l14510( c17388 )
        TSCP  c17388;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14510 [inside CAMERA-SET-MPEG-CX2\
341X-VIDEO-CHROMA-MEDIAN-FILTER-TOP!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17388, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17388, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_lter_2dtop_e424f881_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_r_2dtop_21_f9515b30( c14508, v14509 )
        TSCP  c14508, v14509;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17386 );
        DISPLAY( 0 ) = c14508;
        DISPLAY( 1 ) = v14509;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14510, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_lter_2dtop_e424f881_v );
DEFCSTRING( t17390, 
            "V4L2-CID-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-TOP" );
DEFTSCP( _2dcamera_lter_2dtop_152e5c32_v );
DEFCSTRING( t17391, 
            "CAMERA-GET-MPEG-CX2341X-VIDEO-CHROMA-MEDIAN-FILTER-TOP" );

TSCP  toollib_2dcamera_l14513( c17393 )
        TSCP  c17393;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14513 [inside CAMERA-GET-MPEG-CX2\
341X-VIDEO-CHROMA-MEDIAN-FILTER-TOP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17393, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_lter_2dtop_e424f881_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_lter_2dtop_152e5c32( c14512 )
        TSCP  c14512;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17391 );
        DISPLAY( 0 ) = c14512;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14513, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_packets_21_1b35c3f2_v );
DEFCSTRING( t17395, 
            "CAMERA-SET-MPEG-CX2341X-STREAM-INSERT-NAV-PACKETS!" );
EXTERNTSCP( _2dcamera__2dpackets_242c9ee4_v );

TSCP  toollib_2dcamera_l14517( c17397 )
        TSCP  c17397;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14517 [inside CAMERA-SET-MPEG-CX2\
341X-STREAM-INSERT-NAV-PACKETS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17397, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17397, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera__2dpackets_242c9ee4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_packets_21_1b35c3f2( c14515, v14516 )
        TSCP  c14515, v14516;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17395 );
        DISPLAY( 0 ) = c14515;
        DISPLAY( 1 ) = v14516;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14517, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dpackets_242c9ee4_v );
DEFCSTRING( t17399, "V4L2-CID-MPEG-CX2341X-STREAM-INSERT-NAV-PACKETS" );
DEFTSCP( _2dcamera__2dpackets_21694baa_v );
DEFCSTRING( t17400, 
            "CAMERA-GET-MPEG-CX2341X-STREAM-INSERT-NAV-PACKETS" );

TSCP  toollib_2dcamera_l14520( c17402 )
        TSCP  c17402;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14520 [inside CAMERA-GET-MPEG-CX2\
341X-STREAM-INSERT-NAV-PACKETS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17402, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera__2dpackets_242c9ee4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dpackets_21694baa( c14519 )
        TSCP  c14519;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17400 );
        DISPLAY( 0 ) = c14519;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14520, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dbase_21_64f544c8_v );
DEFCSTRING( t17404, "CAMERA-SET-CAMERA-CLASS-BASE!" );
EXTERNTSCP( _2dcamera_ass_2dbase_9270821_v );

TSCP  toollib_2dcamera_l14524( c17406 )
        TSCP  c17406;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14524 [inside CAMERA-SET-CAMERA-C\
LASS-BASE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17406, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17406, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ass_2dbase_9270821_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dbase_21_64f544c8( c14522, v14523 )
        TSCP  c14522, v14523;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17404 );
        DISPLAY( 0 ) = c14522;
        DISPLAY( 1 ) = v14523;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14524, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ass_2dbase_9270821_v );
DEFCSTRING( t17408, "V4L2-CID-CAMERA-CLASS-BASE" );
DEFTSCP( _2dcamera_ass_2dbase_aae41397_v );
DEFCSTRING( t17409, "CAMERA-GET-CAMERA-CLASS-BASE" );

TSCP  toollib_2dcamera_l14527( c17411 )
        TSCP  c17411;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14527 [inside CAMERA-GET-CAMERA-C\
LASS-BASE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17411, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ass_2dbase_9270821_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ass_2dbase_aae41397( c14526 )
        TSCP  c14526;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17409 );
        DISPLAY( 0 ) = c14526;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14527, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dclass_21_3a5444c7_v );
DEFCSTRING( t17413, "CAMERA-SET-CAMERA-CLASS!" );
EXTERNTSCP( _2dcamera_ra_2dclass_b3d37dd7_v );

TSCP  toollib_2dcamera_l14531( c17415 )
        TSCP  c17415;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14531 [inside CAMERA-SET-CAMERA-C\
LASS!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17415, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17415, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ra_2dclass_b3d37dd7_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dclass_21_3a5444c7( c14529, v14530 )
        TSCP  c14529, v14530;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17413 );
        DISPLAY( 0 ) = c14529;
        DISPLAY( 1 ) = v14530;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14531, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ra_2dclass_b3d37dd7_v );
DEFCSTRING( t17417, "V4L2-CID-CAMERA-CLASS" );
DEFTSCP( _2dcamera_ra_2dclass_3ec64276_v );
DEFCSTRING( t17418, "CAMERA-GET-CAMERA-CLASS" );

TSCP  toollib_2dcamera_l14534( c17420 )
        TSCP  c17420;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14534 [inside CAMERA-GET-CAMERA-C\
LASS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17420, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ra_2dclass_b3d37dd7_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ra_2dclass_3ec64276( c14533 )
        TSCP  c14533;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17418 );
        DISPLAY( 0 ) = c14533;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14534, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dauto_21_43186741_v );
DEFCSTRING( t17422, "CAMERA-SET-EXPOSURE-AUTO!" );
EXTERNTSCP( _2dcamera_ure_2dauto_e3973bef_v );

TSCP  toollib_2dcamera_l14538( c17424 )
        TSCP  c17424;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14538 [inside CAMERA-SET-EXPOSURE\
-AUTO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17424, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17424, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_ure_2dauto_e3973bef_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dauto_21_43186741( c14536, v14537 )
        TSCP  c14536, v14537;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17422 );
        DISPLAY( 0 ) = c14536;
        DISPLAY( 1 ) = v14537;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14538, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_ure_2dauto_e3973bef_v );
DEFCSTRING( t17426, "V4L2-CID-EXPOSURE-AUTO" );
DEFTSCP( _2dcamera_ure_2dauto_42cbbdae_v );
DEFCSTRING( t17427, "CAMERA-GET-EXPOSURE-AUTO" );

TSCP  toollib_2dcamera_l14541( c17429 )
        TSCP  c17429;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14541 [inside CAMERA-GET-EXPOSURE\
-AUTO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17429, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_ure_2dauto_e3973bef_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_ure_2dauto_42cbbdae( c14540 )
        TSCP  c14540;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17427 );
        DISPLAY( 0 ) = c14540;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14541, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bsolute_21_6e9ef503_v );
DEFCSTRING( t17431, "CAMERA-SET-EXPOSURE-ABSOLUTE!" );
EXTERNTSCP( _2dcamera_2dabsolute_4b1caddd_v );

TSCP  toollib_2dcamera_l14545( c17433 )
        TSCP  c17433;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14545 [inside CAMERA-SET-EXPOSURE\
-ABSOLUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17433, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17433, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_4b1caddd_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bsolute_21_6e9ef503( c14543, v14544 )
        TSCP  c14543, v14544;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17431 );
        DISPLAY( 0 ) = c14543;
        DISPLAY( 1 ) = v14544;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14545, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dabsolute_4b1caddd_v );
DEFCSTRING( t17435, "V4L2-CID-EXPOSURE-ABSOLUTE" );
DEFTSCP( _2dcamera_2dabsolute_3ad37491_v );
DEFCSTRING( t17436, "CAMERA-GET-EXPOSURE-ABSOLUTE" );

TSCP  toollib_2dcamera_l14548( c17438 )
        TSCP  c17438;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14548 [inside CAMERA-GET-EXPOSURE\
-ABSOLUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17438, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_4b1caddd_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dabsolute_3ad37491( c14547 )
        TSCP  c14547;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17436 );
        DISPLAY( 0 ) = c14547;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14548, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_riority_21_509d58ac_v );
DEFCSTRING( t17440, "CAMERA-SET-EXPOSURE-AUTO-PRIORITY!" );
EXTERNTSCP( _2dcamera_2dpriority_63e8bda_v );

TSCP  toollib_2dcamera_l14552( c17442 )
        TSCP  c17442;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14552 [inside CAMERA-SET-EXPOSURE\
-AUTO-PRIORITY!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17442, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17442, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dpriority_63e8bda_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_riority_21_509d58ac( c14550, v14551 )
        TSCP  c14550, v14551;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17440 );
        DISPLAY( 0 ) = c14550;
        DISPLAY( 1 ) = v14551;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14552, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dpriority_63e8bda_v );
DEFCSTRING( t17444, "V4L2-CID-EXPOSURE-AUTO-PRIORITY" );
DEFTSCP( _2dcamera_2dpriority_86261c3_v );
DEFCSTRING( t17445, "CAMERA-GET-EXPOSURE-AUTO-PRIORITY" );

TSCP  toollib_2dcamera_l14555( c17447 )
        TSCP  c17447;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14555 [inside CAMERA-GET-EXPOSURE\
-AUTO-PRIORITY]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17447, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dpriority_63e8bda_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dpriority_86261c3( c14554 )
        TSCP  c14554;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17445 );
        DISPLAY( 0 ) = c14554;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14555, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_elative_21_d9e0b9a0_v );
DEFCSTRING( t17449, "CAMERA-SET-PAN-RELATIVE!" );
EXTERNTSCP( _2dcamera_2drelative_c0f9f988_v );

TSCP  toollib_2dcamera_l14559( c17451 )
        TSCP  c17451;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14559 [inside CAMERA-SET-PAN-RELA\
TIVE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17451, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17451, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_c0f9f988_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_elative_21_d9e0b9a0( c14557, v14558 )
        TSCP  c14557, v14558;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17449 );
        DISPLAY( 0 ) = c14557;
        DISPLAY( 1 ) = v14558;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14559, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2drelative_c0f9f988_v );
DEFCSTRING( t17453, "V4L2-CID-PAN-RELATIVE" );
DEFTSCP( _2dcamera_2drelative_4decc629_v );
DEFCSTRING( t17454, "CAMERA-GET-PAN-RELATIVE" );

TSCP  toollib_2dcamera_l14562( c17456 )
        TSCP  c17456;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14562 [inside CAMERA-GET-PAN-RELA\
TIVE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17456, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_c0f9f988_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2drelative_4decc629( c14561 )
        TSCP  c14561;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17454 );
        DISPLAY( 0 ) = c14561;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14562, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_elative_21_5324a8cf_v );
DEFCSTRING( t17458, "CAMERA-SET-TILT-RELATIVE!" );
EXTERNTSCP( _2dcamera_2drelative_bdaf9c4f_v );

TSCP  toollib_2dcamera_l14566( c17460 )
        TSCP  c17460;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14566 [inside CAMERA-SET-TILT-REL\
ATIVE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17460, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17460, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_bdaf9c4f_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_elative_21_5324a8cf( c14564, v14565 )
        TSCP  c14564, v14565;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17458 );
        DISPLAY( 0 ) = c14564;
        DISPLAY( 1 ) = v14565;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14566, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2drelative_bdaf9c4f_v );
DEFCSTRING( t17462, "V4L2-CID-TILT-RELATIVE" );
DEFTSCP( _2dcamera_2drelative_1cf31a0e_v );
DEFCSTRING( t17463, "CAMERA-GET-TILT-RELATIVE" );

TSCP  toollib_2dcamera_l14569( c17465 )
        TSCP  c17465;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14569 [inside CAMERA-GET-TILT-REL\
ATIVE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17465, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_bdaf9c4f_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2drelative_1cf31a0e( c14568 )
        TSCP  c14568;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17463 );
        DISPLAY( 0 ) = c14568;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14569, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dreset_21_3c321615_v );
DEFCSTRING( t17467, "CAMERA-SET-PAN-RESET!" );
EXTERNTSCP( _2dcamera_an_2dreset_6ee437b_v );

TSCP  toollib_2dcamera_l14573( c17469 )
        TSCP  c17469;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14573 [inside CAMERA-SET-PAN-RESE\
T!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17469, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17469, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_an_2dreset_6ee437b_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dreset_21_3c321615( c14571, v14572 )
        TSCP  c14571, v14572;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17467 );
        DISPLAY( 0 ) = c14571;
        DISPLAY( 1 ) = v14572;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14573, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_an_2dreset_6ee437b_v );
DEFCSTRING( t17471, "V4L2-CID-PAN-RESET" );
DEFTSCP( _2dcamera_an_2dreset_27a58b29_v );
DEFCSTRING( t17472, "CAMERA-GET-PAN-RESET" );

TSCP  toollib_2dcamera_l14576( c17474 )
        TSCP  c17474;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14576 [inside CAMERA-GET-PAN-RESE\
T]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17474, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_an_2dreset_6ee437b_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_an_2dreset_27a58b29( c14575 )
        TSCP  c14575;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17472 );
        DISPLAY( 0 ) = c14575;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14576, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dreset_21_9a1b9c19_v );
DEFCSTRING( t17476, "CAMERA-SET-TILT-RESET!" );
EXTERNTSCP( _2dcamera_lt_2dreset_1f89d2c9_v );

TSCP  toollib_2dcamera_l14580( c17478 )
        TSCP  c17478;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14580 [inside CAMERA-SET-TILT-RES\
ET!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17478, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17478, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_lt_2dreset_1f89d2c9_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_2dreset_21_9a1b9c19( c14578, v14579 )
        TSCP  c14578, v14579;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17476 );
        DISPLAY( 0 ) = c14578;
        DISPLAY( 1 ) = v14579;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14580, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_lt_2dreset_1f89d2c9_v );
DEFCSTRING( t17480, "V4L2-CID-TILT-RESET" );
DEFTSCP( _2dcamera_lt_2dreset_9acda9d9_v );
DEFCSTRING( t17481, "CAMERA-GET-TILT-RESET" );

TSCP  toollib_2dcamera_l14583( c17483 )
        TSCP  c17483;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14583 [inside CAMERA-GET-TILT-RES\
ET]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17483, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_lt_2dreset_1f89d2c9_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_lt_2dreset_9acda9d9( c14582 )
        TSCP  c14582;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17481 );
        DISPLAY( 0 ) = c14582;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14583, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bsolute_21_303edca8_v );
DEFCSTRING( t17485, "CAMERA-SET-PAN-ABSOLUTE!" );
EXTERNTSCP( _2dcamera_2dabsolute_87db807_v );

TSCP  toollib_2dcamera_l14587( c17487 )
        TSCP  c17487;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14587 [inside CAMERA-SET-PAN-ABSO\
LUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17487, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17487, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_87db807_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bsolute_21_303edca8( c14585, v14586 )
        TSCP  c14585, v14586;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17485 );
        DISPLAY( 0 ) = c14585;
        DISPLAY( 1 ) = v14586;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14587, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dabsolute_87db807_v );
DEFCSTRING( t17489, "V4L2-CID-PAN-ABSOLUTE" );
DEFTSCP( _2dcamera_2dabsolute_856887a6_v );
DEFCSTRING( t17490, "CAMERA-GET-PAN-ABSOLUTE" );

TSCP  toollib_2dcamera_l14590( c17492 )
        TSCP  c17492;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14590 [inside CAMERA-GET-PAN-ABSO\
LUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17492, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_87db807_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dabsolute_856887a6( c14589 )
        TSCP  c14589;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17490 );
        DISPLAY( 0 ) = c14589;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14590, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bsolute_21_bafacdc7_v );
DEFCSTRING( t17494, "CAMERA-SET-TILT-ABSOLUTE!" );
EXTERNTSCP( _2dcamera_2dabsolute_752bddc0_v );

TSCP  toollib_2dcamera_l14594( c17496 )
        TSCP  c17496;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14594 [inside CAMERA-SET-TILT-ABS\
OLUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17496, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17496, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_752bddc0_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bsolute_21_bafacdc7( c14592, v14593 )
        TSCP  c14592, v14593;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17494 );
        DISPLAY( 0 ) = c14592;
        DISPLAY( 1 ) = v14593;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14594, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dabsolute_752bddc0_v );
DEFCSTRING( t17498, "V4L2-CID-TILT-ABSOLUTE" );
DEFTSCP( _2dcamera_2dabsolute_d4775b81_v );
DEFCSTRING( t17499, "CAMERA-GET-TILT-ABSOLUTE" );

TSCP  toollib_2dcamera_l14597( c17501 )
        TSCP  c17501;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14597 [inside CAMERA-GET-TILT-ABS\
OLUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17501, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_752bddc0_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dabsolute_d4775b81( c14596 )
        TSCP  c14596;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17499 );
        DISPLAY( 0 ) = c14596;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14597, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_bsolute_21_9704e4c4_v );
DEFCSTRING( t17503, "CAMERA-SET-FOCUS-ABSOLUTE!" );
EXTERNTSCP( _2dcamera_2dabsolute_15c8595b_v );

TSCP  toollib_2dcamera_l14601( c17505 )
        TSCP  c17505;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14601 [inside CAMERA-SET-FOCUS-AB\
SOLUTE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17505, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17505, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_15c8595b_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_bsolute_21_9704e4c4( c14599, v14600 )
        TSCP  c14599, v14600;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17503 );
        DISPLAY( 0 ) = c14599;
        DISPLAY( 1 ) = v14600;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14601, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2dabsolute_15c8595b_v );
DEFCSTRING( t17507, "V4L2-CID-FOCUS-ABSOLUTE" );
DEFTSCP( _2dcamera_2dabsolute_14b274db_v );
DEFCSTRING( t17508, "CAMERA-GET-FOCUS-ABSOLUTE" );

TSCP  toollib_2dcamera_l14604( c17510 )
        TSCP  c17510;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14604 [inside CAMERA-GET-FOCUS-AB\
SOLUTE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17510, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2dabsolute_15c8595b_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2dabsolute_14b274db( c14603 )
        TSCP  c14603;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17508 );
        DISPLAY( 0 ) = c14603;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14604, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_elative_21_7eda81cc_v );
DEFCSTRING( t17512, "CAMERA-SET-FOCUS-RELATIVE!" );
EXTERNTSCP( _2dcamera_2drelative_dd4c18d4_v );

TSCP  toollib_2dcamera_l14608( c17514 )
        TSCP  c17514;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14608 [inside CAMERA-SET-FOCUS-RE\
LATIVE!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17514, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17514, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_dd4c18d4_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_elative_21_7eda81cc( c14606, v14607 )
        TSCP  c14606, v14607;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17512 );
        DISPLAY( 0 ) = c14606;
        DISPLAY( 1 ) = v14607;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14608, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_2drelative_dd4c18d4_v );
DEFCSTRING( t17516, "V4L2-CID-FOCUS-RELATIVE" );
DEFTSCP( _2dcamera_2drelative_dc363554_v );
DEFCSTRING( t17517, "CAMERA-GET-FOCUS-RELATIVE" );

TSCP  toollib_2dcamera_l14611( c17519 )
        TSCP  c17519;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14611 [inside CAMERA-GET-FOCUS-RE\
LATIVE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17519, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_2drelative_dd4c18d4_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_2drelative_dc363554( c14610 )
        TSCP  c14610;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17517 );
        DISPLAY( 0 ) = c14610;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14611, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dauto_21_d9655b09_v );
DEFCSTRING( t17521, "CAMERA-SET-FOCUS-AUTO!" );
EXTERNTSCP( _2dcamera_cus_2dauto_d2f3f6ca_v );

TSCP  toollib_2dcamera_l14615( c17523 )
        TSCP  c17523;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14615 [inside CAMERA-SET-FOCUS-AU\
TO!]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17523, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17523, 1 );
        X3 = _2dcamera_control_21_38ebed3d( DISPLAY( 0 ), 
                                            _2dcamera_cus_2dauto_d2f3f6ca_v, 
                                            DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dauto_21_d9655b09( c14613, v14614 )
        TSCP  c14613, v14614;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17521 );
        DISPLAY( 0 ) = c14613;
        DISPLAY( 1 ) = v14614;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14615, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_cus_2dauto_d2f3f6ca_v );
DEFCSTRING( t17525, "V4L2-CID-FOCUS-AUTO" );
DEFTSCP( _2dcamera_cus_2dauto_57b78dda_v );
DEFCSTRING( t17526, "CAMERA-GET-FOCUS-AUTO" );

TSCP  toollib_2dcamera_l14618( c17528 )
        TSCP  c17528;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14618 [inside CAMERA-GET-FOCUS-AU\
TO]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17528, 0 );
        X2 = _2dcamera__2dcontrol_495618ad( DISPLAY( 0 ), 
                                            _2dcamera_cus_2dauto_d2f3f6ca_v );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_cus_2dauto_57b78dda( c14617 )
        TSCP  c14617;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17526 );
        DISPLAY( 0 ) = c14617;
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dcamera_l14618, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dformats_1e1923d3_v );
DEFCSTRING( t17530, "GET-FORMATS" );

TSCP  toollib_2dcamera_l14639( x14640, c17547 )
        TSCP  x14640, c17547;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l14639 [inside GET-FORMATS]" );
        if  ( BITAND( BITOR( _S2CINT( x14640 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17549;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x14640 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) ) );
L17549:
        POPSTACKTRACE( scrt2__2b_2dtwo( x14640, _TSCP( 4 ) ) );
}

EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  toollib_2dcamera_l14621( f14622, c17532 )
        TSCP  f14622, c17532;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14621 [inside GET-FORMATS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17532, 0 );
        _2dcamera_x_2dset_21_bf5ed330( f14622, _TSCP( 0 ) );
        _2dcamera_e_2dset_21_92d958bb( f14622, 
                                       _2dcamera__2dcapture_93f74b0e_v );
        X3 = EMPTYLIST;
L17535:
        X4 = toollib_2dcamera_ioctl( DISPLAY( 0 ), 
                                     _2dcamera_enum_2dfmt_59fb1aae_v, 
                                     f14622 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L17538;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L17542;
        X2 = X3;
        goto L17545;
L17538:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L17542;
        X2 = X3;
        goto L17545;
L17542:
        X4 = MAKEPROCEDURE( 1, 
                            0, toollib_2dcamera_l14639, EMPTYLIST );
        _2dcamera_x_2dupdate_75cecab4( f14622, X4 );
        X4 = _2dcamera_at_2dpixel_a03d79d9( f14622 );
        X3 = sc_cons( X4, X3 );
        GOBACK( L17535 );
L17545:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera__2dformats_1e1923d3( f14620 )
        TSCP  f14620;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17530 );
        DISPLAY( 0 ) = f14620;
        X1 = C_FIXED( sizeof( struct v4l2_fmtdesc ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14621, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_me_2dsizes_74948f1b_v );
DEFCSTRING( t17551, "GET-FRAME-SIZES" );

TSCP  toollib_2dcamera_l14669( x14670, c17568 )
        TSCP  x14670, c17568;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l14669 [inside GET-FRAME-SIZES]" );
        if  ( BITAND( BITOR( _S2CINT( x14670 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17570;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x14670 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) ) );
L17570:
        POPSTACKTRACE( scrt2__2b_2dtwo( x14670, _TSCP( 4 ) ) );
}

EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  toollib_2dcamera_l14651( f14652, c17553 )
        TSCP  f14652, c17553;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14651 [inside GET-FRAME-SIZES]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17553, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17553, 1 );
        _2dcamera_x_2dset_21_877568f9( f14652, _TSCP( 0 ) );
        _2dcamera_t_2dset_21_6f7de9c2( f14652, DISPLAY( 1 ) );
        X4 = EMPTYLIST;
L17556:
        X5 = toollib_2dcamera_ioctl( DISPLAY( 0 ), 
                                     _2dcamera_me_2dsizes_59d06ff3_v, 
                                     f14652 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L17559;
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L17563;
        X3 = X4;
        goto L17566;
L17559:
        if  ( TRUE( scrt2__3d_2dtwo( X5, _TSCP( 0 ) ) ) )  goto L17563;
        X3 = X4;
        goto L17566;
L17563:
        X5 = MAKEPROCEDURE( 1, 
                            0, toollib_2dcamera_l14669, EMPTYLIST );
        _2dcamera_x_2dupdate_4de5717d( f14652, X5 );
        X5 = _2dcamera_ize_2dtype_ce26e183( f14652 );
        X6 = _2dcamera_2ddiscrete_1ed55d57_v;
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L17574;
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L17578;
        goto L17579;
L17574:
        if  ( FALSE( scrt2__3d_2dtwo( X5, X6 ) ) )  goto L17579;
L17578:
        X7 = _2dcamera_te_2dwidth_77e2efd7( f14652 );
        X9 = _2dcamera_e_2dheight_94d28806( f14652 );
        X8 = sc_cons( X9, EMPTYLIST );
        X6 = sc_cons( X7, X8 );
        X5 = X6;
        X4 = sc_cons( X5, X4 );
        GOBACK( L17556 );
L17579:
        X5 = scrt6_format( c14687, 
                           CONS( _2dcamera_ize_2dtype_ce26e183( f14652 ), 
                                 EMPTYLIST ) );
        scrt6_display( X5, EMPTYLIST );
        GOBACK( L17556 );
L17566:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_me_2dsizes_74948f1b( f14649, p14650 )
        TSCP  f14649, p14650;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17551 );
        DISPLAY( 0 ) = f14649;
        DISPLAY( 1 ) = p14650;
        X1 = C_FIXED( sizeof( struct v4l2_frmsizeenum ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14651, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_dintervals_7645bf79_v );
DEFCSTRING( t17584, "GET-FRAME-INTERVALS" );

TSCP  toollib_2dcamera_l14713( x14714, c17601 )
        TSCP  x14714, c17601;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l14713 [inside GET-FRAME-INTERVALS\
]" );
        if  ( BITAND( BITOR( _S2CINT( x14714 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17603;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( x14714 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) ) );
L17603:
        POPSTACKTRACE( scrt2__2b_2dtwo( x14714, _TSCP( 4 ) ) );
}

TSCP  toollib_2dcamera_l14695( f14696, c17586 )
        TSCP  f14696, c17586;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14695 [inside GET-FRAME-INTERVALS\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17586, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c17586, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c17586, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17586, 3 );
        _2dcamera_x_2dset_21_a5432235( f14696, _TSCP( 0 ) );
        _2dcamera_t_2dset_21_804f3ee( f14696, DISPLAY( 1 ) );
        _2dcamera_h_2dset_21_3dcfd762( f14696, DISPLAY( 2 ) );
        _2dcamera_t_2dset_21_4b55e7fa( f14696, DISPLAY( 3 ) );
        X6 = EMPTYLIST;
L17589:
        X7 = toollib_2dcamera_ioctl( DISPLAY( 0 ), 
                                     _2dcamera_dintervals_1da6d07a_v, 
                                     f14696 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L17592;
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L17596;
        X5 = X6;
        goto L17599;
L17592:
        if  ( TRUE( scrt2__3d_2dtwo( X7, _TSCP( 0 ) ) ) )  goto L17596;
        X5 = X6;
        goto L17599;
L17596:
        X7 = MAKEPROCEDURE( 1, 
                            0, toollib_2dcamera_l14713, EMPTYLIST );
        _2dcamera_x_2dupdate_6fd33bb1( f14696, X7 );
        X7 = _2dcamera_val_2dtype_151f8767( f14696 );
        X8 = _2dcamera_2ddiscrete_1ed55d57_v;
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L17607;
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( X8 ) ) )  goto L17611;
        goto L17612;
L17607:
        if  ( FALSE( scrt2__3d_2dtwo( X7, X8 ) ) )  goto L17612;
L17611:
        X9 = _2dcamera_dnumerator_1c058315( f14696 );
        X11 = _2dcamera_enominator_c1e15c7a( f14696 );
        X10 = sc_cons( X11, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X7 = X8;
        X6 = sc_cons( X7, X6 );
        GOBACK( L17589 );
L17612:
        X7 = scrt6_format( c14687, 
                           CONS( _2dcamera_val_2dtype_151f8767( f14696 ), 
                                 EMPTYLIST ) );
        scrt6_display( X7, EMPTYLIST );
        GOBACK( L17589 );
L17599:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  _2dcamera_dintervals_7645bf79( f14691, 
                                     p14692, w14693, h14694 )
        TSCP  f14691, p14692, w14693, h14694;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17584 );
        DISPLAY( 0 ) = f14691;
        DISPLAY( 1 ) = p14692;
        DISPLAY( 2 ) = w14693;
        DISPLAY( 3 ) = h14694;
        X1 = C_FIXED( sizeof( struct v4l2_frmivalenum ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14695, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_mat_2dinfo_eeb267b2_v );
DEFCSTRING( t17617, "GET-FORMAT-INFO" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  _2dcamera_mat_2dinfo_eeb267b2( f14734, p14735 )
        TSCP  f14734, p14735;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17617 );
        X1 = _2dcamera_me_2dsizes_74948f1b( f14734, p14735 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L17621:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L17622;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L17625;
        scrt1__24__car_2derror( X2 );
L17625:
        X7 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17629;
        scrt1__24__car_2derror( X7 );
L17629:
        X10 = PAIR_CAR( X7 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X12 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L17633;
        scrt1__24__car_2derror( X12 );
L17633:
        X9 = scrt1_cons_2a( X10, 
                            CONS( PAIR_CAR( X12 ), X11 ) );
        X12 = PAIR_CAR( X7 );
        X14 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L17638;
        scrt1__24__car_2derror( X14 );
L17638:
        X13 = PAIR_CAR( X14 );
        X11 = _2dcamera_dintervals_7645bf79( f14734, 
                                             p14735, X12, X13 );
        X10 = sc_cons( X11, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X6 = X8;
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L17642;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L17621 );
L17642:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L17647;
        scdebug_error( c14770, 
                       c14771, CONS( X4, EMPTYLIST ) );
L17647:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L17621 );
L17622:
        POPSTACKTRACE( X3 );
}

DEFTSCP( _2dcamera_c_2dformat_b31119fc_v );
DEFCSTRING( t17649, "CAMERA-AUTOMATIC-FORMAT" );
EXTERNTSCPP( qobischeme_some, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_v );

TSCP  toollib_2dcamera_l14841( s14842, c17665 )
        TSCP  s14842, c17665;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14841 [inside CAMERA-AUTOMATIC-FO\
RMAT]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17665, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c17665, 1 );
        X5 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( s14842 ), PAIRTAG ) )  goto L17668;
        scrt1__24__car_2derror( s14842 );
L17668:
        X6 = PAIR_CAR( s14842 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L17671;
        X4 = BOOLEAN( EQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) );
        goto L17672;
L17671:
        X4 = scrt2__3d_2dtwo( X6, X5 );
L17672:
        if  ( FALSE( X4 ) )  goto L17674;
        X5 = DISPLAY( 2 );
        X7 = PAIR_CDR( s14842 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17678;
        scrt1__24__car_2derror( X7 );
L17678:
        X6 = PAIR_CAR( X7 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L17681;
        X3 = BOOLEAN( EQ( _S2CUINT( X6 ), _S2CUINT( X5 ) ) );
        goto L17675;
L17681:
        X3 = scrt2__3d_2dtwo( X6, X5 );
        goto L17675;
L17674:
        X3 = X4;
L17675:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dcamera_l14816( c14817, c17651 )
        TSCP  c14817, c17651;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14816 [inside CAMERA-AUTOMATIC-FO\
RMAT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17651, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17651, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c17651, 2 );
        X5 = _2dcamera__2dformats_1e1923d3( DISPLAY( 0 ) );
        X6 = X5;
L17655:
        if  ( EQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L17656;
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L17660;
        scrt1__24__car_2derror( X6 );
L17660:
        X7 = PAIR_CAR( X6 );
        X8 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14841, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ) ) );
        X9 = _2dcamera_me_2dsizes_74948f1b( DISPLAY( 0 ), X7 );
        if  ( FALSE( qobischeme_some( X8, X9, EMPTYLIST ) ) )  goto L17663;
        X8 = c14817;
        X8 = UNKNOWNCALL( X8, 1 );
        VIA( PROCEDURE_CODE( X8 ) )( X7, PROCEDURE_CLOSURE( X8 ) );
L17663:
        X6 = PAIR_CDR( X6 );
        GOBACK( L17655 );
L17656:
        X4 = FALSEVALUE;
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  _2dcamera_c_2dformat_b31119fc( f14813, w14814, h14815 )
        TSCP  f14813, w14814, h14815;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17649 );
        DISPLAY( 0 ) = f14813;
        DISPLAY( 1 ) = w14814;
        DISPLAY( 2 ) = h14815;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14816, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera__2dcameras_4e2e8f7_v );
DEFCSTRING( t17684, "LIST-CAMERAS" );
EXTERNTSCPP( qobischeme_remove_2dif_2dnot, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_2dnot_v );
EXTERNTSCPP( toollib_2dc_2dbindings_curry2, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dc_2dbindings_curry2_v );
EXTERNTSCPP( qobischeme_prefix_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_prefix_3f_v );
EXTERNTSCPP( qobischeme_directory_2dlist, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_directory_2dlist_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  _2dcamera__2dcameras_4e2e8f7(  )
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17684 );
        X3 = toollib_2dc_2dbindings_curry2( qobischeme_prefix_3f_v );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c14923, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X3 = qobischeme_directory_2dlist( c14924 );
        X1 = qobischeme_remove_2dif_2dnot( X2, X3 );
        X3 = toollib_2dc_2dbindings_curry2( scrt3_string_2dappend_v );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c14922, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X3 = X1;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L17688:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L17689;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L17692;
        scrt1__24__car_2derror( X3 );
L17692:
        X9 = PAIR_CAR( X3 );
        X8 = X2;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X9, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L17695;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L17688 );
L17695:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17700;
        scdebug_error( c14770, 
                       c14771, CONS( X5, EMPTYLIST ) );
L17700:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L17688 );
L17689:
        POPSTACKTRACE( X4 );
}

DEFTSCP( _2dcamera__2dcontrol_495618ad_v );
DEFCSTRING( t17702, "CAMERA-GET-CONTROL" );

TSCP  toollib_2dcamera_l14928( c14929, c17704 )
        TSCP  c14929, c17704;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14928 [inside CAMERA-GET-CONTROL]\
" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17704, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17704, 1 );
        _2dcamera_d_2dset_21_4cb06548( c14929, DISPLAY( 1 ) );
        _2dcamera_e_2dset_21_224c1c8c( c14929, _TSCP( 0 ) );
        X5 = toollib_2dcamera_camera_2dfd( DISPLAY( 0 ) );
        X4 = toollib_2dcamera_ioctl( X5, 
                                     _2dcamera__2dcontrol_9f9b52fd_v, 
                                     c14929 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L17708;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L17712;
        X3 = FALSEVALUE;
        goto L17715;
L17708:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L17712;
        X3 = FALSEVALUE;
        goto L17715;
L17712:
        X3 = _2dcamera_ol_2dvalue_79c63360( c14929 );
L17715:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera__2dcontrol_495618ad( c14926, i14927 )
        TSCP  c14926, i14927;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17702 );
        DISPLAY( 0 ) = c14926;
        DISPLAY( 1 ) = i14927;
        X1 = C_FIXED( sizeof( struct v4l2_control ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14928, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_control_21_38ebed3d_v );
DEFCSTRING( t17716, "CAMERA-SET-CONTROL!" );

TSCP  toollib_2dcamera_l14943( c14944, c17718 )
        TSCP  c14944, c17718;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l14943 [inside CAMERA-SET-CONTROL!\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c17718, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c17718, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c17718, 2 );
        _2dcamera_d_2dset_21_4cb06548( c14944, DISPLAY( 1 ) );
        _2dcamera_e_2dset_21_224c1c8c( c14944, DISPLAY( 2 ) );
        X6 = toollib_2dcamera_camera_2dfd( DISPLAY( 0 ) );
        X5 = toollib_2dcamera_ioctl( X6, 
                                     _2dcamera__2dcontrol_eb259eb1_v, 
                                     c14944 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L17721;
        X4 = BOOLEAN( EQ( _S2CUINT( X5 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L17722;
L17721:
        X4 = scrt2__3d_2dtwo( X5, _TSCP( 0 ) );
L17722:
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  _2dcamera_control_21_38ebed3d( c14940, i14941, v14942 )
        TSCP  c14940, i14941, v14942;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t17716 );
        DISPLAY( 0 ) = c14940;
        DISPLAY( 1 ) = i14941;
        DISPLAY( 2 ) = v14942;
        X1 = C_FIXED( sizeof( struct v4l2_control ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l14943, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dcamera_camera_2dfd_v );
DEFCSTRING( t17723, "CAMERA-FD" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
EXTERNTSCPP( dbindings_dptr_2dref_aed54e95, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( dbindings_dptr_2dref_aed54e95_v );

TSCP  toollib_2dcamera_camera_2dfd( c14955 )
        TSCP  c14955;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t17723 );
        if  ( BITAND( BITOR( _S2CINT( c14955 ), 
                             _S2CINT( _TSCP( 16 ) ) ), 
                      3 ) )  goto L17725;
        X2 = _TSCP( ITIMES( FIXED_C( c14955 ), 
                            _S2CINT( _TSCP( 16 ) ) ) );
        goto L17726;
L17725:
        X2 = scrt2__2a_2dtwo( c14955, _TSCP( 16 ) );
L17726:
        X3 = C_FIXED( sizeof( int ) );
        X1 = dbindings_dptr_2dref_aed54e95( X3, FALSEVALUE );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( toollib_2dcamera_v4l2_2dfd_v, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( _2dcamera__2dcontrol_153b74fc_v );
DEFCSTRING( t17727, "MAKE-CAMERA-CONTROL" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );

TSCP  _2dcamera__2dcontrol_153b74fc( i14963, 
                                     t14964, 
                                     n14965, 
                                     m14966, 
                                     m14967, 
                                     s14968, d14969, f14970 )
        TSCP  i14963, 
              t14964, 
              n14965, 
              m14966, m14967, s14968, d14969, f14970;
{
        TSCP  X1;

        PUSHSTACKTRACE( t17727 );
        X1 = sc_make_2dvector( _TSCP( 36 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L17731;
        scdebug_error( c14979, 
                       c14980, CONS( X1, EMPTYLIST ) );
L17731:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L17733;
        scdebug_error( c14979, 
                       c14983, CONS( _TSCP( 0 ), EMPTYLIST ) );
L17733:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17735;
        scdebug_error( c14979, 
                       c14987, CONS( _TSCP( 0 ), EMPTYLIST ) );
L17735:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c14988 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L17738;
        scdebug_error( c14979, 
                       c14983, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17738:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17740;
        scdebug_error( c14979, 
                       c14987, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17740:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), i14963 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L17743;
        scdebug_error( c14979, 
                       c14983, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17743:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17745;
        scdebug_error( c14979, 
                       c14987, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17745:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), t14964 );
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L17748;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17748:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17750;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17750:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 12 ) ), n14965 );
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L17753;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17753:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17755;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17755:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 16 ) ), m14966 );
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L17758;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17758:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17760;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17760:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 20 ) ), m14967 );
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L17763;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17763:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17765;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17765:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 24 ) ), s14968 );
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L17768;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17768:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17770;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17770:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 28 ) ), d14969 );
        if  ( EQ( TSCPTAG( _TSCP( 32 ) ), FIXNUMTAG ) )  goto L17773;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17773:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 32 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L17775;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17775:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 32 ) ), f14970 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( _2dcamera_control_3f_7738067d_v );
DEFCSTRING( t17777, "CAMERA-CONTROL?" );

TSCP  _2dcamera_control_3f_7738067d( o15085 )
        TSCP  o15085;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t17777 );
        if  ( NOT( AND( EQ( TSCPTAG( o15085 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o15085 ), 
                            VECTORTAG ) ) ) )  goto L17779;
        X2 = C_FIXED( VECTOR_LENGTH( o15085 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 36 ) ) ), 
                      3 ) )  goto L17783;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 36 ) ) ) );
        goto L17784;
L17783:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 36 ) );
L17784:
        if  ( FALSE( X1 ) )  goto L17786;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L17789;
        scdebug_error( c15118, 
                       c14983, CONS( _TSCP( 0 ), EMPTYLIST ) );
L17789:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o15085 ) ) ) )  goto L17791;
        scdebug_error( c15118, 
                       c14987, CONS( _TSCP( 0 ), EMPTYLIST ) );
L17791:
        X2 = VECTOR_ELEMENT( o15085, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c14988 ) ) ) );
L17786:
        POPSTACKTRACE( X1 );
L17779:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_ol_2did_21_6aa6b37c_v );
DEFCSTRING( t17793, "LOCAL-SET-CAMERA-CONTROL-ID!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  _2dcamera_ol_2did_21_6aa6b37c( t15125, o15126 )
        TSCP  t15125, o15126;
{
        PUSHSTACKTRACE( t17793 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15125 ) )
            )  goto L17795;
        qobischeme_panic( c15127, EMPTYLIST );
L17795:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15125, 
                                                      _TSCP( 4 ), 
                                                      o15126 ) );
}

DEFTSCP( _2dcamera_ntrol_2did_362a1312_v );
DEFCSTRING( t17797, "CAMERA-CONTROL-ID" );

TSCP  _2dcamera_ntrol_2did_362a1312( t15129 )
        TSCP  t15129;
{
        PUSHSTACKTRACE( t17797 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15129 ) )
            )  goto L17799;
        qobischeme_panic( c15130, EMPTYLIST );
L17799:
        if  ( AND( EQ( TSCPTAG( t15129 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15129 ), VECTORTAG ) )
            )  goto L17802;
        scdebug_error( c15118, 
                       c14980, CONS( t15129, EMPTYLIST ) );
L17802:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L17804;
        scdebug_error( c15118, 
                       c14983, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17804:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15129 ) ) ) )  goto L17806;
        scdebug_error( c15118, 
                       c14987, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17806:
        POPSTACKTRACE( VECTOR_ELEMENT( t15129, _TSCP( 4 ) ) );
}

DEFTSCP( _2dcamera_ol_2did_21_48d8e65e_v );
DEFCSTRING( t17808, "SET-CAMERA-CONTROL-ID!" );

TSCP  _2dcamera_ol_2did_21_48d8e65e( t15142, o15143 )
        TSCP  t15142, o15143;
{
        PUSHSTACKTRACE( t17808 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15142 ) )
            )  goto L17810;
        qobischeme_panic( c15144, EMPTYLIST );
L17810:
        if  ( AND( EQ( TSCPTAG( t15142 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15142 ), VECTORTAG ) )
            )  goto L17813;
        scdebug_error( c14979, 
                       c14980, CONS( t15142, EMPTYLIST ) );
L17813:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L17815;
        scdebug_error( c14979, 
                       c14983, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17815:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15142 ) ) ) )  goto L17817;
        scdebug_error( c14979, 
                       c14987, CONS( _TSCP( 4 ), EMPTYLIST ) );
L17817:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15142, _TSCP( 4 ) ), 
                               o15143 ) );
}

DEFTSCP( _2dcamera__2dtype_21_830f6f8e_v );
DEFCSTRING( t17819, "LOCAL-SET-CAMERA-CONTROL-TYPE!" );

TSCP  _2dcamera__2dtype_21_830f6f8e( t15157, o15158 )
        TSCP  t15157, o15158;
{
        PUSHSTACKTRACE( t17819 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15157 ) )
            )  goto L17821;
        qobischeme_panic( c15159, EMPTYLIST );
L17821:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15157, 
                                                      _TSCP( 8 ), 
                                                      o15158 ) );
}

DEFTSCP( _2dcamera_rol_2dtype_58205467_v );
DEFCSTRING( t17823, "CAMERA-CONTROL-TYPE" );

TSCP  _2dcamera_rol_2dtype_58205467( t15161 )
        TSCP  t15161;
{
        PUSHSTACKTRACE( t17823 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15161 ) )
            )  goto L17825;
        qobischeme_panic( c15162, EMPTYLIST );
L17825:
        if  ( AND( EQ( TSCPTAG( t15161 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15161 ), VECTORTAG ) )
            )  goto L17828;
        scdebug_error( c15118, 
                       c14980, CONS( t15161, EMPTYLIST ) );
L17828:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L17830;
        scdebug_error( c15118, 
                       c14983, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17830:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15161 ) ) ) )  goto L17832;
        scdebug_error( c15118, 
                       c14987, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17832:
        POPSTACKTRACE( VECTOR_ELEMENT( t15161, _TSCP( 8 ) ) );
}

DEFTSCP( _2dcamera__2dtype_21_3fbcaeab_v );
DEFCSTRING( t17834, "SET-CAMERA-CONTROL-TYPE!" );

TSCP  _2dcamera__2dtype_21_3fbcaeab( t15174, o15175 )
        TSCP  t15174, o15175;
{
        PUSHSTACKTRACE( t17834 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15174 ) )
            )  goto L17836;
        qobischeme_panic( c15176, EMPTYLIST );
L17836:
        if  ( AND( EQ( TSCPTAG( t15174 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15174 ), VECTORTAG ) )
            )  goto L17839;
        scdebug_error( c14979, 
                       c14980, CONS( t15174, EMPTYLIST ) );
L17839:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L17841;
        scdebug_error( c14979, 
                       c14983, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17841:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15174 ) ) ) )  goto L17843;
        scdebug_error( c14979, 
                       c14987, CONS( _TSCP( 8 ), EMPTYLIST ) );
L17843:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15174, _TSCP( 8 ) ), 
                               o15175 ) );
}

DEFTSCP( _2dcamera__2dname_21_37547fcb_v );
DEFCSTRING( t17845, "LOCAL-SET-CAMERA-CONTROL-NAME!" );

TSCP  _2dcamera__2dname_21_37547fcb( t15189, o15190 )
        TSCP  t15189, o15190;
{
        PUSHSTACKTRACE( t17845 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15189 ) )
            )  goto L17847;
        qobischeme_panic( c15191, EMPTYLIST );
L17847:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15189, 
                                                      _TSCP( 12 ), 
                                                      o15190 ) );
}

DEFTSCP( _2dcamera_rol_2dname_8add7d48_v );
DEFCSTRING( t17849, "CAMERA-CONTROL-NAME" );

TSCP  _2dcamera_rol_2dname_8add7d48( t15193 )
        TSCP  t15193;
{
        PUSHSTACKTRACE( t17849 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15193 ) )
            )  goto L17851;
        qobischeme_panic( c15194, EMPTYLIST );
L17851:
        if  ( AND( EQ( TSCPTAG( t15193 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15193 ), VECTORTAG ) )
            )  goto L17854;
        scdebug_error( c15118, 
                       c14980, CONS( t15193, EMPTYLIST ) );
L17854:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L17856;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17856:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15193 ) ) ) )  goto L17858;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17858:
        POPSTACKTRACE( VECTOR_ELEMENT( t15193, _TSCP( 12 ) ) );
}

DEFTSCP( _2dcamera__2dname_21_8be7beee_v );
DEFCSTRING( t17860, "SET-CAMERA-CONTROL-NAME!" );

TSCP  _2dcamera__2dname_21_8be7beee( t15206, o15207 )
        TSCP  t15206, o15207;
{
        PUSHSTACKTRACE( t17860 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15206 ) )
            )  goto L17862;
        qobischeme_panic( c15208, EMPTYLIST );
L17862:
        if  ( AND( EQ( TSCPTAG( t15206 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15206 ), VECTORTAG ) )
            )  goto L17865;
        scdebug_error( c14979, 
                       c14980, CONS( t15206, EMPTYLIST ) );
L17865:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L17867;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17867:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15206 ) ) ) )  goto L17869;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L17869:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15206, _TSCP( 12 ) ), 
                               o15207 ) );
}

DEFTSCP( _2dcamera_minimum_21_b96f52ed_v );
DEFCSTRING( t17871, "LOCAL-SET-CAMERA-CONTROL-MINIMUM!" );

TSCP  _2dcamera_minimum_21_b96f52ed( t15221, o15222 )
        TSCP  t15221, o15222;
{
        PUSHSTACKTRACE( t17871 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15221 ) )
            )  goto L17873;
        qobischeme_panic( c15223, EMPTYLIST );
L17873:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15221, 
                                                      _TSCP( 16 ), 
                                                      o15222 ) );
}

DEFTSCP( _2dcamera__2dminimum_edf3e09d_v );
DEFCSTRING( t17875, "CAMERA-CONTROL-MINIMUM" );

TSCP  _2dcamera__2dminimum_edf3e09d( t15225 )
        TSCP  t15225;
{
        PUSHSTACKTRACE( t17875 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15225 ) )
            )  goto L17877;
        qobischeme_panic( c15226, EMPTYLIST );
L17877:
        if  ( AND( EQ( TSCPTAG( t15225 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15225 ), VECTORTAG ) )
            )  goto L17880;
        scdebug_error( c15118, 
                       c14980, CONS( t15225, EMPTYLIST ) );
L17880:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L17882;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17882:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15225 ) ) ) )  goto L17884;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17884:
        POPSTACKTRACE( VECTOR_ELEMENT( t15225, _TSCP( 16 ) ) );
}

DEFTSCP( _2dcamera_minimum_21_760d263_v );
DEFCSTRING( t17886, "SET-CAMERA-CONTROL-MINIMUM!" );

TSCP  _2dcamera_minimum_21_760d263( t15238, o15239 )
        TSCP  t15238, o15239;
{
        PUSHSTACKTRACE( t17886 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15238 ) )
            )  goto L17888;
        qobischeme_panic( c15240, EMPTYLIST );
L17888:
        if  ( AND( EQ( TSCPTAG( t15238 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15238 ), VECTORTAG ) )
            )  goto L17891;
        scdebug_error( c14979, 
                       c14980, CONS( t15238, EMPTYLIST ) );
L17891:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L17893;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17893:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15238 ) ) ) )  goto L17895;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L17895:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15238, _TSCP( 16 ) ), 
                               o15239 ) );
}

DEFTSCP( _2dcamera_maximum_21_b863c859_v );
DEFCSTRING( t17897, "LOCAL-SET-CAMERA-CONTROL-MAXIMUM!" );

TSCP  _2dcamera_maximum_21_b863c859( t15253, o15254 )
        TSCP  t15253, o15254;
{
        PUSHSTACKTRACE( t17897 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15253 ) )
            )  goto L17899;
        qobischeme_panic( c15255, EMPTYLIST );
L17899:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15253, 
                                                      _TSCP( 20 ), 
                                                      o15254 ) );
}

DEFTSCP( _2dcamera__2dmaximum_ee0000d2_v );
DEFCSTRING( t17901, "CAMERA-CONTROL-MAXIMUM" );

TSCP  _2dcamera__2dmaximum_ee0000d2( t15257 )
        TSCP  t15257;
{
        PUSHSTACKTRACE( t17901 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15257 ) )
            )  goto L17903;
        qobischeme_panic( c15258, EMPTYLIST );
L17903:
        if  ( AND( EQ( TSCPTAG( t15257 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15257 ), VECTORTAG ) )
            )  goto L17906;
        scdebug_error( c15118, 
                       c14980, CONS( t15257, EMPTYLIST ) );
L17906:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L17908;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17908:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15257 ) ) ) )  goto L17910;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17910:
        POPSTACKTRACE( VECTOR_ELEMENT( t15257, _TSCP( 20 ) ) );
}

DEFTSCP( _2dcamera_maximum_21_66c48d7_v );
DEFCSTRING( t17912, "SET-CAMERA-CONTROL-MAXIMUM!" );

TSCP  _2dcamera_maximum_21_66c48d7( t15270, o15271 )
        TSCP  t15270, o15271;
{
        PUSHSTACKTRACE( t17912 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15270 ) )
            )  goto L17914;
        qobischeme_panic( c15272, EMPTYLIST );
L17914:
        if  ( AND( EQ( TSCPTAG( t15270 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15270 ), VECTORTAG ) )
            )  goto L17917;
        scdebug_error( c14979, 
                       c14980, CONS( t15270, EMPTYLIST ) );
L17917:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L17919;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17919:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15270 ) ) ) )  goto L17921;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L17921:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15270, _TSCP( 20 ) ), 
                               o15271 ) );
}

DEFTSCP( _2dcamera__2dstep_21_35f1fd81_v );
DEFCSTRING( t17923, "LOCAL-SET-CAMERA-CONTROL-STEP!" );

TSCP  _2dcamera__2dstep_21_35f1fd81( t15285, o15286 )
        TSCP  t15285, o15286;
{
        PUSHSTACKTRACE( t17923 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15285 ) )
            )  goto L17925;
        qobischeme_panic( c15287, EMPTYLIST );
L17925:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15285, 
                                                      _TSCP( 24 ), 
                                                      o15286 ) );
}

DEFTSCP( _2dcamera_rol_2dstep_9747fd72_v );
DEFCSTRING( t17927, "CAMERA-CONTROL-STEP" );

TSCP  _2dcamera_rol_2dstep_9747fd72( t15289 )
        TSCP  t15289;
{
        PUSHSTACKTRACE( t17927 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15289 ) )
            )  goto L17929;
        qobischeme_panic( c15290, EMPTYLIST );
L17929:
        if  ( AND( EQ( TSCPTAG( t15289 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15289 ), VECTORTAG ) )
            )  goto L17932;
        scdebug_error( c15118, 
                       c14980, CONS( t15289, EMPTYLIST ) );
L17932:
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L17934;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17934:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15289 ) ) ) )  goto L17936;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17936:
        POPSTACKTRACE( VECTOR_ELEMENT( t15289, _TSCP( 24 ) ) );
}

DEFTSCP( _2dcamera__2dstep_21_89423ca4_v );
DEFCSTRING( t17938, "SET-CAMERA-CONTROL-STEP!" );

TSCP  _2dcamera__2dstep_21_89423ca4( t15302, o15303 )
        TSCP  t15302, o15303;
{
        PUSHSTACKTRACE( t17938 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15302 ) )
            )  goto L17940;
        qobischeme_panic( c15304, EMPTYLIST );
L17940:
        if  ( AND( EQ( TSCPTAG( t15302 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15302 ), VECTORTAG ) )
            )  goto L17943;
        scdebug_error( c14979, 
                       c14980, CONS( t15302, EMPTYLIST ) );
L17943:
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L17945;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17945:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15302 ) ) ) )  goto L17947;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L17947:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15302, _TSCP( 24 ) ), 
                               o15303 ) );
}

DEFTSCP( _2dcamera___value_21_f26422a8_v );
DEFCSTRING( t17949, "LOCAL-SET-CAMERA-CONTROL-DEFAULT_VALUE!" );

TSCP  _2dcamera___value_21_f26422a8( t15317, o15318 )
        TSCP  t15317, o15318;
{
        PUSHSTACKTRACE( t17949 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15317 ) )
            )  goto L17951;
        qobischeme_panic( c15319, EMPTYLIST );
L17951:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15317, 
                                                      _TSCP( 28 ), 
                                                      o15318 ) );
}

DEFTSCP( _2dcamera_ult__value_9f07fd75_v );
DEFCSTRING( t17953, "CAMERA-CONTROL-DEFAULT_VALUE" );

TSCP  _2dcamera_ult__value_9f07fd75( t15321 )
        TSCP  t15321;
{
        PUSHSTACKTRACE( t17953 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15321 ) )
            )  goto L17955;
        qobischeme_panic( c15322, EMPTYLIST );
L17955:
        if  ( AND( EQ( TSCPTAG( t15321 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15321 ), VECTORTAG ) )
            )  goto L17958;
        scdebug_error( c15118, 
                       c14980, CONS( t15321, EMPTYLIST ) );
L17958:
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L17960;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17960:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15321 ) ) ) )  goto L17962;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17962:
        POPSTACKTRACE( VECTOR_ELEMENT( t15321, _TSCP( 28 ) ) );
}

DEFTSCP( _2dcamera___value_21_4b0009a7_v );
DEFCSTRING( t17964, "SET-CAMERA-CONTROL-DEFAULT_VALUE!" );

TSCP  _2dcamera___value_21_4b0009a7( t15334, o15335 )
        TSCP  t15334, o15335;
{
        PUSHSTACKTRACE( t17964 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15334 ) )
            )  goto L17966;
        qobischeme_panic( c15336, EMPTYLIST );
L17966:
        if  ( AND( EQ( TSCPTAG( t15334 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15334 ), VECTORTAG ) )
            )  goto L17969;
        scdebug_error( c14979, 
                       c14980, CONS( t15334, EMPTYLIST ) );
L17969:
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L17971;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17971:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15334 ) ) ) )  goto L17973;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L17973:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15334, _TSCP( 28 ) ), 
                               o15335 ) );
}

DEFTSCP( _2dcamera_2dflags_21_63a9bd25_v );
DEFCSTRING( t17975, "LOCAL-SET-CAMERA-CONTROL-FLAGS!" );

TSCP  _2dcamera_2dflags_21_63a9bd25( t15349, o15350 )
        TSCP  t15349, o15350;
{
        PUSHSTACKTRACE( t17975 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15349 ) )
            )  goto L17977;
        qobischeme_panic( c15351, EMPTYLIST );
L17977:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t15349, 
                                                      _TSCP( 32 ), 
                                                      o15350 ) );
}

DEFTSCP( _2dcamera_ol_2dflags_48b73ca3_v );
DEFCSTRING( t17979, "CAMERA-CONTROL-FLAGS" );

TSCP  _2dcamera_ol_2dflags_48b73ca3( t15353 )
        TSCP  t15353;
{
        PUSHSTACKTRACE( t17979 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15353 ) )
            )  goto L17981;
        qobischeme_panic( c15354, EMPTYLIST );
L17981:
        if  ( AND( EQ( TSCPTAG( t15353 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15353 ), VECTORTAG ) )
            )  goto L17984;
        scdebug_error( c15118, 
                       c14980, CONS( t15353, EMPTYLIST ) );
L17984:
        if  ( EQ( TSCPTAG( _TSCP( 32 ) ), FIXNUMTAG ) )  goto L17986;
        scdebug_error( c15118, 
                       c14983, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17986:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 32 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15353 ) ) ) )  goto L17988;
        scdebug_error( c15118, 
                       c14987, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17988:
        POPSTACKTRACE( VECTOR_ELEMENT( t15353, _TSCP( 32 ) ) );
}

DEFTSCP( _2dcamera_2dflags_21_2811daa3_v );
DEFCSTRING( t17990, "SET-CAMERA-CONTROL-FLAGS!" );

TSCP  _2dcamera_2dflags_21_2811daa3( t15366, o15367 )
        TSCP  t15366, o15367;
{
        PUSHSTACKTRACE( t17990 );
        if  ( TRUE( _2dcamera_control_3f_7738067d( t15366 ) )
            )  goto L17992;
        qobischeme_panic( c15368, EMPTYLIST );
L17992:
        if  ( AND( EQ( TSCPTAG( t15366 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t15366 ), VECTORTAG ) )
            )  goto L17995;
        scdebug_error( c14979, 
                       c14980, CONS( t15366, EMPTYLIST ) );
L17995:
        if  ( EQ( TSCPTAG( _TSCP( 32 ) ), FIXNUMTAG ) )  goto L17997;
        scdebug_error( c14979, 
                       c14983, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17997:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 32 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t15366 ) ) ) )  goto L17999;
        scdebug_error( c14979, 
                       c14987, 
                       CONS( _TSCP( 32 ), EMPTYLIST ) );
L17999:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t15366, _TSCP( 32 ) ), 
                               o15367 ) );
}

DEFTSCP( _2dcamera_nformation_78877b85_v );
DEFCSTRING( t18001, "CAMERA-CONTROL-INFORMATION" );

TSCP  toollib_2dcamera_l15383( q15384, c18003 )
        TSCP  q15384, c18003;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15383 [inside CAMERA-CONTROL-INFO\
RMATION]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18003, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18003, 1 );
        _2dcamera_d_2dset_21_fbd71c4( q15384, DISPLAY( 1 ) );
        X5 = toollib_2dcamera_camera_2dfd( DISPLAY( 0 ) );
        X4 = toollib_2dcamera_ioctl( X5, 
                                     _2dcamera__2dcontrol_c7ca1c8_v, 
                                     q15384 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L18007;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L18011;
        X3 = FALSEVALUE;
        goto L18014;
L18007:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 0 ) ) ) )  goto L18011;
        X3 = FALSEVALUE;
        goto L18014;
L18011:
        X4 = _2dcamera_ntrol_2did_1e8def34( q15384 );
        X5 = _2dcamera_rol_2dtype_2ff541d3( q15384 );
        X6 = _2dcamera_rol_2dname_fd0868fc( q15384 );
        X7 = _2dcamera__2dminimum_eea87669( q15384 );
        X8 = _2dcamera__2dmaximum_ed5b9626( q15384 );
        X9 = _2dcamera_rol_2dstep_e092e8c6( q15384 );
        X10 = _2dcamera_lt_2dvalue_16185b9f( q15384 );
        X11 = _2dcamera_ol_2dflags_84cc9e23( q15384 );
        X3 = _2dcamera__2dcontrol_153b74fc( X4, 
                                            X5, 
                                            X6, 
                                            X7, 
                                            X8, X9, X10, X11 );
L18014:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  _2dcamera_nformation_78877b85( c15381, i15382 )
        TSCP  c15381, i15382;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t18001 );
        DISPLAY( 0 ) = c15381;
        DISPLAY( 1 ) = i15382;
        X1 = C_FIXED( sizeof( struct v4l2_queryctrl ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l15383, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_rol_2dstep_ee2c6d7b_v );
DEFCSTRING( t18015, "CONTROL-STEP" );

TSCP  _2dcamera_rol_2dstep_ee2c6d7b( c15395, i15396 )
        TSCP  c15395, i15396;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18015 );
        X1 = _2dcamera_nformation_78877b85( c15395, i15396 );
        POPSTACKTRACE( _2dcamera_rol_2dstep_9747fd72( X1 ) );
}

DEFTSCP( toollib_2dcamera_ioctl_v );
DEFCSTRING( t18017, "IOCTL" );

TSCP  toollib_2dcamera_ioctl( g15398, g15399, g15400 )
        TSCP  g15398, g15399, g15400;
{
        PUSHSTACKTRACE( t18017 );
        POPSTACKTRACE( sc_int_tscp( xioctl( sc_tscp_int( g15398 ), 
                                            sc_tscp_int( g15399 ), 
                                            TSCP_POINTER( g15400 ) ) ) );
}

DEFTSCP( _2dcamera_pan_2dtilt_9a055caf_v );
DEFCSTRING( t18019, "WAIT-FOR-PAN-TILT" );

TSCP  _2dcamera_pan_2dtilt_9a055caf( c15406 )
        TSCP  c15406;
{
        PUSHSTACKTRACE( t18019 );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_xt_2dframe_f96bbaea_v );
DEFCSTRING( t18021, "WAIT-FOR-NEXT-FRAME" );
EXTERNTSCP( qobischeme_message_v );
EXTERNTSCP( qobischeme_abort_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  toollib_2dcamera_l15427( c15428, c18037 )
        TSCP  c15428, c18037;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15427 [inside WAIT-FOR-NEXT-FRAME\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18037, 0 );
        X4 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15428, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X4 = DISPLAY( 0 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L18040;
        X2 = BOOLEAN( LT( _S2CINT( X3 ), _S2CINT( X4 ) ) );
        goto L18041;
L18040:
        X2 = scrt2__3c_2dtwo( X3, X4 );
L18041:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( qobischeme_every, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_every_v );

TSCP  toollib_2dcamera_l15445( c15446, c18047 )
        TSCP  c15446, c18047;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15445 [inside WAIT-FOR-NEXT-FRAME\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18047, 0 );
        X3 = DISPLAY( 0 );
        X5 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( c15446, 
                                          PROCEDURE_CLOSURE( X5 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18050;
        X2 = BOOLEAN( EQ( _S2CUINT( X4 ), _S2CUINT( X3 ) ) );
        goto L18051;
L18050:
        X2 = scrt2__3d_2dtwo( X4, X3 );
L18051:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  _2dcamera_xt_2dframe_f96bbaea( f15408 )
        TSCP  f15408;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t18021 );
        DISPLAY( 0 ) = f15408;
        X1 = _TSCP( 0 );
L18024:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 800 ) ) ), 
                      3 ) )  goto L18026;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 800 ) ) ) )  goto L18030;
        goto L18033;
L18026:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 800 ) ) ) )  goto L18033;
L18030:
        X2 = qobischeme_message_v;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( c15426, 
                                     PROCEDURE_CLOSURE( X2 ) );
        X2 = qobischeme_abort_v;
        X2 = UNKNOWNCALL( X2, 0 );
        VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) );
L18033:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l15427, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( FALSE( qobischeme_some( X2, 
                                      _2dcamera_cameras_2a_903755c2_v, 
                                      EMPTYLIST ) ) )  goto L18035;
        X2 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( _TSCP( 4000 ), 
                                     PROCEDURE_CLOSURE( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18043;
        X1 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L18024 );
L18043:
        X1 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L18024 );
L18035:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dcamera_l15445, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( TRUE( qobischeme_every( X1, 
                                      _2dcamera_cameras_2a_903755c2_v, 
                                      EMPTYLIST ) ) )  goto L18045;
        X3 = CONS( DISPLAY( 0 ), EMPTYLIST );
        X4 = _2dcamera_cameras_2a_903755c2_v;
        X5 = X4;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L18055:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L18056;
        X8 = X6;
        goto L18063;
L18056:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L18059;
        scrt1__24__car_2derror( X5 );
L18059:
        X12 = PAIR_CAR( X5 );
        X11 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X11 = UNKNOWNCALL( X11, 1 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                            PROCEDURE_CLOSURE( X11 ) );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L18062;
        X10 = PAIR_CDR( X5 );
        X7 = X9;
        X6 = X9;
        X5 = X10;
        GOBACK( L18055 );
L18062:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L18067;
        scdebug_error( c14770, 
                       c14771, CONS( X7, EMPTYLIST ) );
L18067:
        X7 = SETGEN( PAIR_CDR( X7 ), X9 );
        X5 = X10;
        GOBACK( L18055 );
L18063:
        X3 = CONS( X8, X3 );
        X2 = scrt6_format( FALSEVALUE, CONS( c15457, X3 ) );
        X1 = qobischeme_message_v;
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = qobischeme_abort_v;
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L18045:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _2dcamera_xt_2dframe_58904a7f_v );
DEFCSTRING( t18069, "WAIT-FOR-CAMERA-NEXT-FRAME" );

TSCP  _2dcamera_xt_2dframe_58904a7f( c15503, f15504 )
        TSCP  c15503, f15504;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t18069 );
        X1 = _TSCP( 0 );
L18072:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 800 ) ) ), 
                      3 ) )  goto L18074;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 800 ) ) ) )  goto L18078;
        goto L18081;
L18074:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 800 ) ) ) )  goto L18081;
L18078:
        X2 = qobischeme_message_v;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( c15426, 
                                     PROCEDURE_CLOSURE( X2 ) );
        X2 = qobischeme_abort_v;
        X2 = UNKNOWNCALL( X2, 0 );
        VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) );
L18081:
        X3 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c15503, 
                                          PROCEDURE_CLOSURE( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( f15504 ) ), 
                      3 ) )  goto L18085;
        if  ( LT( _S2CINT( X2 ), _S2CINT( f15504 ) ) )  goto L18089;
        goto L18092;
L18085:
        if  ( FALSE( scrt2__3c_2dtwo( X2, f15504 ) ) )  goto L18092;
L18089:
        X2 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( _TSCP( 4000 ), 
                                     PROCEDURE_CLOSURE( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18094;
        X1 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L18072 );
L18094:
        X1 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L18072 );
L18092:
        X2 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( c15503, 
                                          PROCEDURE_CLOSURE( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( f15504 ) ), 
                      3 ) )  goto L18098;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( f15504 ) ) )  goto L18102;
        POPSTACKTRACE( FALSEVALUE );
L18098:
        if  ( FALSE( scrt2__3d_2dtwo( X1, f15504 ) ) )  goto L18102;
        POPSTACKTRACE( FALSEVALUE );
L18102:
        X3 = CONS( f15504, EMPTYLIST );
        X4 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = CONS( VIA( PROCEDURE_CODE( X4 ) )( c15503, 
                                                PROCEDURE_CLOSURE( X4 ) ), 
                   X3 );
        X2 = scrt6_format( FALSEVALUE, CONS( c15457, X3 ) );
        X1 = qobischeme_message_v;
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = qobischeme_abort_v;
        X1 = UNKNOWNCALL( X1, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( _2dcamera_timeout_2a_20f666c0_v );
DEFCSTRING( t18106, "*PAN/TILT-TIMEOUT*" );
DEFTSCP( toollib_2dcamera_camera_2dpan_v );
DEFCSTRING( t18107, "CAMERA-PAN" );

TSCP  toollib_2dcamera_camera_2dpan( c15546, n15547 )
        TSCP  c15546, n15547;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18107 );
        _2dcamera_elative_21_d9e0b9a0( c15546, n15547 );
        X1 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( _2dcamera_timeout_2a_20f666c0_v, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( _2dcamera_elative_21_d9e0b9a0( c15546, 
                                                      _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera_era_2dtilt_bc884a3b_v );
DEFCSTRING( t18109, "CAMERA-TILT" );

TSCP  _2dcamera_era_2dtilt_bc884a3b( c15549, n15550 )
        TSCP  c15549, n15550;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18109 );
        _2dcamera_elative_21_5324a8cf( c15549, n15550 );
        X1 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( _2dcamera_timeout_2a_20f666c0_v, 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( _2dcamera_elative_21_5324a8cf( c15549, 
                                                      _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera_an_2dreset_c1570644_v );
DEFCSTRING( t18111, "CAMERA-PAN-RESET" );

TSCP  _2dcamera_an_2dreset_c1570644( c15552 )
        TSCP  c15552;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18111 );
        _2dcamera_2dreset_21_3c321615( c15552, _TSCP( 4 ) );
        X3 = _2dcamera_timeout_2a_20f666c0_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 28 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18114;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 28 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18115;
L18114:
        X2 = scrt2__2a_2dtwo( _TSCP( 28 ), X3 );
L18115:
        X1 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( _2dcamera_2dreset_21_3c321615( c15552, 
                                                      _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera_lt_2dreset_a92846b1_v );
DEFCSTRING( t18116, "CAMERA-TILT-RESET" );

TSCP  _2dcamera_lt_2dreset_a92846b1( c15560 )
        TSCP  c15560;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18116 );
        _2dcamera_2dreset_21_9a1b9c19( c15560, _TSCP( 4 ) );
        X3 = _2dcamera_timeout_2a_20f666c0_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18119;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18120;
L18119:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X3 );
L18120:
        X1 = SYMBOL_VALUE( interruptible_2dusleep_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( _2dcamera_2dreset_21_9a1b9c19( c15560, 
                                                      _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera__2dbuttons_90b8fbb5_v );
DEFCSTRING( t18121, "CAMERA-BUTTONS" );
EXTERNTSCPP( qobischeme_define_2dbutton, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_define_2dbutton_v );

TSCP  toollib_2dcamera_l15571( c18125 )
        TSCP  c18125;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15571 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_brightness_5c474819_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18128;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18129;
L18128:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18129:
        X3 = _2dcamera_brightness_a37baf2d( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18131;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L18132;
L18131:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L18132:
        POPSTACKTRACE( _2dcamera_ghtness_21_ffb9d6ac( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

EXTERNTSCPP( qobischeme_redraw_2dbuttons, XAL0(  ) );
EXTERNTSCP( qobischeme_redraw_2dbuttons_v );

TSCP  toollib_2dcamera_l15570( c18123 )
        TSCP  c18123;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15570 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15571, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15590( c18135 )
        TSCP  c18135;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15590 [inside CAMERA-BUTTONS]" );
        X1 = CONS( _2dcamera_brightness_a37baf2d( toollib_2dcamera__2acamera_2a_v ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15591, X1 ) ) );
}

EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  toollib_2dcamera_l15593( c18139 )
        TSCP  c18139;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15593 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_brightness_5c474819_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18142;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18143;
L18142:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18143:
        X3 = _2dcamera_brightness_a37baf2d( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18145;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X2 ) ) );
        goto L18146;
L18145:
        X1 = scrt2__2d_2dtwo( X3, X2 );
L18146:
        POPSTACKTRACE( _2dcamera_ghtness_21_ffb9d6ac( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15592( c18137 )
        TSCP  c18137;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15592 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15593, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15608( c18149 )
        TSCP  c18149;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15608 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_2dcontrast_b6db2391_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18152;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18153;
L18152:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18153:
        X3 = _2dcamera_2dcontrast_38821ffc( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18155;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L18156;
L18155:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L18156:
        POPSTACKTRACE( _2dcamera_ontrast_21_cd25e56a( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15607( c18147 )
        TSCP  c18147;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15607 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15608, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15627( c18159 )
        TSCP  c18159;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15627 [inside CAMERA-BUTTONS]" );
        X1 = CONS( _2dcamera_2dcontrast_38821ffc( toollib_2dcamera__2acamera_2a_v ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15591, X1 ) ) );
}

TSCP  toollib_2dcamera_l15629( c18163 )
        TSCP  c18163;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15629 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_2dcontrast_b6db2391_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18166;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18167;
L18166:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18167:
        X3 = _2dcamera_2dcontrast_38821ffc( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18169;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X2 ) ) );
        goto L18170;
L18169:
        X1 = scrt2__2d_2dtwo( X3, X2 );
L18170:
        POPSTACKTRACE( _2dcamera_ontrast_21_cd25e56a( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15628( c18161 )
        TSCP  c18161;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15628 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15629, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15644( c18173 )
        TSCP  c18173;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15644 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_saturation_af1b3372_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18176;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18177;
L18176:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18177:
        X3 = _2dcamera_saturation_5027d446( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18179;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L18180;
L18179:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L18180:
        POPSTACKTRACE( _2dcamera_uration_21_152d4f7c( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15643( c18171 )
        TSCP  c18171;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15643 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15644, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15663( c18183 )
        TSCP  c18183;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15663 [inside CAMERA-BUTTONS]" );
        X1 = CONS( _2dcamera_saturation_5027d446( toollib_2dcamera__2acamera_2a_v ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15591, X1 ) ) );
}

TSCP  toollib_2dcamera_l15665( c18187 )
        TSCP  c18187;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15665 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_saturation_af1b3372_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 40 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18190;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 40 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18191;
L18190:
        X2 = scrt2__2a_2dtwo( _TSCP( 40 ), X3 );
L18191:
        X3 = _2dcamera_saturation_5027d446( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18193;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X2 ) ) );
        goto L18194;
L18193:
        X1 = scrt2__2d_2dtwo( X3, X2 );
L18194:
        POPSTACKTRACE( _2dcamera_uration_21_152d4f7c( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15664( c18185 )
        TSCP  c18185;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15664 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15665, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15680( c18197 )
        TSCP  c18197;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15680 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_cid_2dgain_c2b08830_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18200;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18201;
L18200:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X3 );
L18201:
        X3 = _2dcamera_get_2dgain_4cf2516( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18203;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L18204;
L18203:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L18204:
        POPSTACKTRACE( _2dcamera__2dgain_21_5473218a( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15679( c18195 )
        TSCP  c18195;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15679 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15680, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15699( c18207 )
        TSCP  c18207;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15699 [inside CAMERA-BUTTONS]" );
        X1 = CONS( _2dcamera_get_2dgain_4cf2516( toollib_2dcamera__2acamera_2a_v ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15591, X1 ) ) );
}

TSCP  toollib_2dcamera_l15701( c18211 )
        TSCP  c18211;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15701 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_cid_2dgain_c2b08830_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18214;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18215;
L18214:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X3 );
L18215:
        X3 = _2dcamera_get_2dgain_4cf2516( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18217;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X2 ) ) );
        goto L18218;
L18217:
        X1 = scrt2__2d_2dtwo( X3, X2 );
L18218:
        POPSTACKTRACE( _2dcamera__2dgain_21_5473218a( toollib_2dcamera__2acamera_2a_v, 
                                                      X1 ) );
}

TSCP  toollib_2dcamera_l15700( c18209 )
        TSCP  c18209;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15700 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15701, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15716( c18221 )
        TSCP  c18221;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15716 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_dsharpness_bdef8ad8_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18224;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18225;
L18224:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X3 );
L18225:
        X3 = _2dcamera_dsharpness_8e62ce01( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18227;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L18228;
L18227:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L18228:
        POPSTACKTRACE( _2dcamera_arpness_21_94226d5( toollib_2dcamera__2acamera_2a_v, 
                                                     X1 ) );
}

TSCP  toollib_2dcamera_l15715( c18219 )
        TSCP  c18219;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15715 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15716, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15735( c18231 )
        TSCP  c18231;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15735 [inside CAMERA-BUTTONS]" );
        X1 = CONS( _2dcamera_dsharpness_8e62ce01( toollib_2dcamera__2acamera_2a_v ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15591, X1 ) ) );
}

TSCP  toollib_2dcamera_l15737( c18235 )
        TSCP  c18235;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15737 [inside CAMERA-BUTTONS]" );
        X3 = _2dcamera_rol_2dstep_ee2c6d7b( toollib_2dcamera__2acamera_2a_v, 
                                            _2dcamera_dsharpness_bdef8ad8_v );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L18238;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X3 ) ) );
        goto L18239;
L18238:
        X2 = scrt2__2a_2dtwo( _TSCP( 12 ), X3 );
L18239:
        X3 = _2dcamera_dsharpness_8e62ce01( toollib_2dcamera__2acamera_2a_v );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18241;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( X2 ) ) );
        goto L18242;
L18241:
        X1 = scrt2__2d_2dtwo( X3, X2 );
L18242:
        POPSTACKTRACE( _2dcamera_arpness_21_94226d5( toollib_2dcamera__2acamera_2a_v, 
                                                     X1 ) );
}

TSCP  toollib_2dcamera_l15736( c18233 )
        TSCP  c18233;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15736 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15737, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15752( c18245 )
        TSCP  c18245;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15752 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( _2dcamera_era_2dtilt_bc884a3b( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( 800 ) ) );
}

TSCP  toollib_2dcamera_l15751( c18243 )
        TSCP  c18243;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15751 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15752, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15761( c18251 )
        TSCP  c18251;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15761 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( _2dcamera_era_2dtilt_bc884a3b( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( -800 ) ) );
}

TSCP  toollib_2dcamera_l15760( c18249 )
        TSCP  c18249;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15760 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15761, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15765( c18255 )
        TSCP  c18255;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15765 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( toollib_2dcamera_camera_2dpan( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( 800 ) ) );
}

TSCP  toollib_2dcamera_l15764( c18253 )
        TSCP  c18253;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15764 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15765, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15774( c18261 )
        TSCP  c18261;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15774 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( toollib_2dcamera_camera_2dpan( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( -800 ) ) );
}

TSCP  toollib_2dcamera_l15773( c18259 )
        TSCP  c18259;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15773 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15774, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15777( c18265 )
        TSCP  c18265;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15777 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( _2dcamera_an_2dreset_c1570644( toollib_2dcamera__2acamera_2a_v ) );
}

TSCP  toollib_2dcamera_l15776( c18263 )
        TSCP  c18263;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15776 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15777, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15786( c18271 )
        TSCP  c18271;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15786 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( _2dcamera_lt_2dreset_a92846b1( toollib_2dcamera__2acamera_2a_v ) );
}

TSCP  toollib_2dcamera_l15785( c18269 )
        TSCP  c18269;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15785 [inside CAMERA-BUTTONS]" );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15786, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  toollib_2dcamera_l15788( c18273 )
        TSCP  c18273;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15788 [inside CAMERA-BUTTONS]" );
        POPSTACKTRACE( _2dcamera_auto_3f_2a_3c4cce22_v );
}

TSCP  toollib_2dcamera_l15791( c18280 )
        TSCP  c18280;
{
        PUSHSTACKTRACE( "toollib_2dcamera_l15791 [inside CAMERA-BUTTONS]" );
        if  ( FALSE( _2dcamera_auto_3f_2a_3c4cce22_v ) )  goto L18282;
        _2dcamera_balance_21_937d7ff8( toollib_2dcamera__2acamera_2a_v, 
                                       _TSCP( 4 ) );
        _2dcamera__2dauto_21_43186741( toollib_2dcamera__2acamera_2a_v, 
                                       _TSCP( 12 ) );
        POPSTACKTRACE( _2dcamera_nsation_21_e1fac0a6( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( 4 ) ) );
L18282:
        _2dcamera_balance_21_937d7ff8( toollib_2dcamera__2acamera_2a_v, 
                                       _TSCP( 0 ) );
        _2dcamera__2dauto_21_43186741( toollib_2dcamera__2acamera_2a_v, 
                                       _TSCP( 0 ) );
        POPSTACKTRACE( _2dcamera_nsation_21_e1fac0a6( toollib_2dcamera__2acamera_2a_v, 
                                                      _TSCP( 0 ) ) );
}

TSCP  toollib_2dcamera_l15789( c18275 )
        TSCP  c18275;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l15789 [inside CAMERA-BUTTONS]" );
        if  ( FALSE( _2dcamera_auto_3f_2a_3c4cce22_v ) )  goto L18277;
        X1 = FALSEVALUE;
        goto L18278;
L18277:
        X1 = TRUEVALUE;
L18278:
        _2dcamera_auto_3f_2a_3c4cce22_v = X1;
        qobischeme_redraw_2dbuttons(  );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15791, EMPTYLIST );
        X1 = SYMBOL_VALUE( with_2dhack_2dtrack_2dpaused_v );
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

TSCP  _2dcamera__2dbuttons_90b8fbb5( r15568 )
        TSCP  r15568;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18121 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15570, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 4 ), 
                                    r15568, 
                                    c15569, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18133;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18134;
L18133:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18134:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15590, EMPTYLIST );
        X3 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15592, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 4 ), 
                                    X1, X2, FALSEVALUE, X3 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15607, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 8 ), 
                                    r15568, 
                                    c15606, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18157;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18158;
L18157:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18158:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15627, EMPTYLIST );
        X3 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15628, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 8 ), 
                                    X1, X2, FALSEVALUE, X3 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15643, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 12 ), 
                                    r15568, 
                                    c15642, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18181;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18182;
L18181:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18182:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15663, EMPTYLIST );
        X3 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15664, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 12 ), 
                                    X1, X2, FALSEVALUE, X3 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15679, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 16 ), 
                                    r15568, 
                                    c15678, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18205;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18206;
L18205:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18206:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15699, EMPTYLIST );
        X3 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15700, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 16 ), 
                                    X1, X2, FALSEVALUE, X3 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15715, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 20 ), 
                                    r15568, 
                                    c15714, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18229;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18230;
L18229:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18230:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15735, EMPTYLIST );
        X3 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15736, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 20 ), 
                                    X1, X2, FALSEVALUE, X3 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15751, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 24 ), 
                                    r15568, 
                                    c15750, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18247;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18248;
L18247:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18248:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15760, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 24 ), 
                                    X1, c15759, FALSEVALUE, X2 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15764, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 28 ), 
                                    r15568, 
                                    c15763, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18257;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18258;
L18257:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18258:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15773, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 28 ), 
                                    X1, c15772, FALSEVALUE, X2 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15776, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 32 ), 
                                    r15568, 
                                    c15775, FALSEVALUE, X1 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( r15568 ) ), 
                      3 ) )  goto L18267;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( r15568 ) ) );
        goto L18268;
L18267:
        X1 = scrt2__2b_2dtwo( _TSCP( 4 ), r15568 );
L18268:
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15785, EMPTYLIST );
        qobischeme_define_2dbutton( _TSCP( 32 ), 
                                    X1, c15784, FALSEVALUE, X2 );
        X1 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15788, EMPTYLIST );
        X2 = MAKEPROCEDURE( 0, 
                            0, toollib_2dcamera_l15789, EMPTYLIST );
        POPSTACKTRACE( qobischeme_define_2dbutton( _TSCP( 36 ), 
                                                   r15568, 
                                                   c15787, X1, X2 ) );
}

DEFTSCP( _2dcamera_e_2dframes_9dc26678_v );
DEFCSTRING( t18286, "FLUSH-STALE-FRAMES" );

TSCP  _2dcamera_e_2dframes_9dc26678( c15795 )
        TSCP  c15795;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18286 );
        X1 = SYMBOL_VALUE( _pturing_21_2c963a38_v );
        X1 = UNKNOWNCALL( X1, 4 );
        VIA( PROCEDURE_CODE( X1 ) )( c15795, 
                                     _TSCP( 0 ), 
                                     _TSCP( 4 ), 
                                     _TSCP( 16 ), 
                                     PROCEDURE_CLOSURE( X1 ) );
        POPSTACKTRACE( _2dcamera_xt_2dframe_58904a7f( c15795, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( _2dcamera_sh_2dframe_f031131_v );
DEFCSTRING( t18288, "GET-FRESH-FRAME" );

TSCP  _2dcamera_sh_2dframe_f031131( c15798 )
        TSCP  c15798;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18288 );
        X1 = SYMBOL_VALUE( _pturing_21_2c963a38_v );
        X1 = UNKNOWNCALL( X1, 4 );
        VIA( PROCEDURE_CODE( X1 ) )( c15798, 
                                     _TSCP( 0 ), 
                                     _TSCP( 4 ), 
                                     _TSCP( 20 ), 
                                     PROCEDURE_CLOSURE( X1 ) );
        _2dcamera_xt_2dframe_58904a7f( c15798, _TSCP( 16 ) );
        X3 = SYMBOL_VALUE( _nt_2dframe_7ee6fa74_v );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( c15798, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X1 = SYMBOL_VALUE( _e_2d_3eppm_61df1ba8_v );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( c15798, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( toollib_2dcamera_dummy_2dvar_v );
DEFCSTRING( t18290, "DUMMY-VAR" );
EXTERNTSCPP( rocessing_2dvariance_f95d0ce, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( rocessing_2dvariance_f95d0ce_v );

TSCP  toollib_2dcamera_dummy_2dvar(  )
{
        PUSHSTACKTRACE( t18290 );
        POPSTACKTRACE( rocessing_2dvariance_f95d0ce_v );
}

DEFTSCP( _2dcamera_2dvariance_66a83910_v );
DEFCSTRING( t18292, "GET-IMAGE-VARIANCE" );
EXTERNTSCPP( rocessing_m_2d_3epgm_84242b30, XAL1( TSCP ) );
EXTERNTSCP( rocessing_m_2d_3epgm_84242b30_v );
EXTERNTSCPP( rocessing_dhistogram_c2e1ced, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( rocessing_dhistogram_c2e1ced_v );
EXTERNTSCPP( qobischeme_pgm_2dgrey, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_pgm_2dgrey_v );
EXTERNTSCPP( qobischeme_pgm_2dmaxval, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_pgm_2dmaxval_v );
EXTERNTSCPP( rocessing_ram_2dmean_1f6b8164, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( rocessing_ram_2dmean_1f6b8164_v );

TSCP  _2dcamera_2dvariance_66a83910( c15802 )
        TSCP  c15802;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t18292 );
        X2 = _2dcamera_sh_2dframe_f031131( c15802 );
        X1 = rocessing_m_2d_3epgm_84242b30( X2 );
        X3 = qobischeme_pgm_2dgrey( X1 );
        X4 = qobischeme_pgm_2dmaxval( X1 );
        X2 = rocessing_dhistogram_c2e1ced( X3, X4 );
        X3 = rocessing_ram_2dmean_1f6b8164( X2, _TSCP( 0 ) );
        POPSTACKTRACE( rocessing_2dvariance_f95d0ce( X2, 
                                                     X3, _TSCP( 0 ) ) );
}

DEFTSCP( _2dcamera__2ddetails_f3ff9ecf_v );
DEFCSTRING( t18296, "GET-AUTOFOCUS-DETAILS" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );

TSCP  _2dcamera__2ddetails_f3ff9ecf( c15808, s15809 )
        TSCP  c15808, s15809;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18296 );
        X1 = _2dcamera_2dvariance_66a83910( c15808 );
        X4 = _2dcamera_rol_2dstep_ee2c6d7b( c15808, 
                                            _2dcamera_id_2dfocus_9609b06d_v );
        if  ( BITAND( BITOR( _S2CINT( s15809 ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L18300;
        X3 = _TSCP( ITIMES( FIXED_C( s15809 ), 
                            _S2CINT( X4 ) ) );
        goto L18301;
L18300:
        X3 = scrt2__2a_2dtwo( s15809, X4 );
L18301:
        X4 = _2dcamera_et_2dfocus_44c24a3d( c15808 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18303;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( X3 ) ) );
        goto L18304;
L18303:
        X2 = scrt2__2d_2dtwo( X4, X3 );
L18304:
        _2dcamera_2dfocus_21_f71ffc25( c15808, X2 );
        X2 = _2dcamera_2dvariance_66a83910( c15808 );
        X6 = _2dcamera_rol_2dstep_ee2c6d7b( c15808, 
                                            _2dcamera_id_2dfocus_9609b06d_v );
        if  ( BITAND( BITOR( _S2CINT( s15809 ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L18307;
        X5 = _TSCP( ITIMES( FIXED_C( s15809 ), 
                            _S2CINT( X6 ) ) );
        goto L18308;
L18307:
        X5 = scrt2__2a_2dtwo( s15809, X6 );
L18308:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L18310;
        X4 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X5 ) ) );
        goto L18311;
L18310:
        X4 = scrt2__2a_2dtwo( _TSCP( 8 ), X5 );
L18311:
        X5 = _2dcamera_et_2dfocus_44c24a3d( c15808 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L18313;
        X3 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L18314;
L18313:
        X3 = scrt2__2b_2dtwo( X5, X4 );
L18314:
        _2dcamera_2dfocus_21_f71ffc25( c15808, X3 );
        X3 = _2dcamera_2dvariance_66a83910( c15808 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L18316;
        X6 = BOOLEAN( GT( _S2CINT( X2 ), _S2CINT( X1 ) ) );
        goto L18317;
L18316:
        X6 = scrt2__3e_2dtwo( X2, X1 );
L18317:
        if  ( FALSE( X6 ) )  goto L18330;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18323;
        if  ( LTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L18330;
        X5 = _TSCP( -4 );
        goto L18345;
L18323:
        if  ( FALSE( scrt2__3e_2dtwo( X2, X3 ) ) )  goto L18330;
        X5 = _TSCP( -4 );
        goto L18345;
L18330:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L18333;
        if  ( GT( _S2CINT( X3 ), _S2CINT( X1 ) ) )  goto L18337;
        X5 = _TSCP( 0 );
        goto L18345;
L18333:
        if  ( TRUE( scrt2__3e_2dtwo( X3, X1 ) ) )  goto L18337;
        X5 = _TSCP( 0 );
        goto L18345;
L18337:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18340;
        if  ( LTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L18342;
        X5 = _TSCP( 4 );
        goto L18345;
L18342:
        X5 = _TSCP( 0 );
        goto L18345;
L18340:
        if  ( FALSE( scrt2__3e_2dtwo( X3, X2 ) ) )  goto L18344;
        X5 = _TSCP( 4 );
        goto L18345;
L18344:
        X5 = _TSCP( 0 );
L18345:
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = scrt1_cons_2a( X5, CONS( X3, X6 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X4 ) );
}

DEFTSCP( _2dcamera_dcamera_21_367fce46_v );
DEFCSTRING( t18346, "AUTOFOCUS-CAMERA!" );
EXTERNTSCPP( qobischeme_x, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_x_v );
EXTERNTSCPP( qobischeme_y, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_y_v );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );

TSCP  _2dcamera_dcamera_21_367fce46( c15880, s15881 )
        TSCP  c15880, s15881;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18346 );
        X1 = _2dcamera__2ddetails_f3ff9ecf( c15880, s15881 );
        X2 = qobischeme_x( X1 );
        X3 = qobischeme_y( X1 );
        X4 = X3;
L18352:
        X7 = _2dcamera_et_2dfocus_44c24a3d( c15880 );
        X10 = _2dcamera_rol_2dstep_ee2c6d7b( c15880, 
                                             _2dcamera_id_2dfocus_9609b06d_v );
        if  ( BITAND( BITOR( _S2CINT( s15881 ), 
                             _S2CINT( X10 ) ), 
                      3 ) )  goto L18354;
        X9 = _TSCP( ITIMES( FIXED_C( s15881 ), 
                            _S2CINT( X10 ) ) );
        goto L18355;
L18354:
        X9 = scrt2__2a_2dtwo( s15881, X10 );
L18355:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L18357;
        X8 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X9 ) ) );
        goto L18358;
L18357:
        X8 = scrt2__2a_2dtwo( X2, X9 );
L18358:
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L18360;
        X6 = _TSCP( IPLUS( _S2CINT( X7 ), _S2CINT( X8 ) ) );
        goto L18361;
L18360:
        X6 = scrt2__2b_2dtwo( X7, X8 );
L18361:
        _2dcamera_2dfocus_21_f71ffc25( c15880, X6 );
        X5 = _2dcamera_2dvariance_66a83910( c15880 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L18363;
        X7 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( X4 ) ) );
        goto L18364;
L18363:
        X7 = scrt2__2d_2dtwo( X5, X4 );
L18364:
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18366;
        X6 = _TSCP( ITIMES( FIXED_C( X7 ), _S2CINT( X2 ) ) );
        goto L18367;
L18366:
        X6 = scrt2__2a_2dtwo( X7, X2 );
L18367:
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L18370;
        if  ( LT( _S2CINT( X6 ), 0 ) )  goto L18374;
        POPSTACKTRACE( FALSEVALUE );
L18370:
        if  ( TRUE( scrt2_negative_3f( X6 ) ) )  goto L18374;
        POPSTACKTRACE( FALSEVALUE );
L18374:
        X4 = X5;
        GOBACK( L18352 );
}

DEFTSCP( _2dcamera_ice_2dname_e3dc4827_v );
DEFCSTRING( t18377, "CAMERA->VIDEO-DEVICE-NAME" );

TSCP  _2dcamera_ice_2dname_e3dc4827( n15933 )
        TSCP  n15933;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18377 );
        X1 = CONS( n15933, EMPTYLIST );
        POPSTACKTRACE( scrt6_format( FALSEVALUE, 
                                     CONS( c15934, X1 ) ) );
}

DEFTSCP( _2dcamera_l_2dnumber_c1b24b76_v );
DEFCSTRING( t18379, "CAMERA->SERIAL-NUMBER" );
EXTERNTSCPP( ib_2dmisc_m_2doutput_38ec6a1e, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_m_2doutput_38ec6a1e_v );
EXTERNTSCPP( qobischeme_substring_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_substring_3f_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );

TSCP  _2dcamera_l_2dnumber_c1b24b76( n15936 )
        TSCP  n15936;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18379 );
        X3 = CONS( _2dcamera_ice_2dname_e3dc4827( n15936 ), 
                   EMPTYLIST );
        X2 = scrt6_format( FALSEVALUE, CONS( c15949, X3 ) );
        X1 = ib_2dmisc_m_2doutput_38ec6a1e( X2 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L18382;
        X2 = qobischeme_first( X1 );
        if  ( TRUE( qobischeme_substring_3f( c15948, X2 ) ) )  goto L18384;
        POPSTACKTRACE( qobischeme_first( X1 ) );
L18384:
        POPSTACKTRACE( FALSEVALUE );
L18382:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera_2a_2dmount_ae0b769b_v );
DEFCSTRING( t18386, "CAMERA-S/N-*SETTINGS*-MOUNT" );
EXTERNTSCPP( ib_2dmisc_dlookup_2a_5f54d161, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_dlookup_2a_5f54d161_v );

TSCP  _2dcamera_2a_2dmount_ae0b769b( s15951 )
        TSCP  s15951;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18386 );
        X1 = CONS( c15953, EMPTYLIST );
        X1 = CONS( s15951, X1 );
        POPSTACKTRACE( ib_2dmisc_dlookup_2a_5f54d161( CONS( c15952, X1 ) ) );
}

DEFTSCP( _2dcamera_2a_2dmount_40c9a4c2_v );
DEFCSTRING( t18388, "CAMERA-*SETTINGS*-MOUNT" );

TSCP  _2dcamera_2a_2dmount_40c9a4c2( c15955 )
        TSCP  c15955;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18388 );
        X1 = _2dcamera_l_2dnumber_c1b24b76( c15955 );
        POPSTACKTRACE( _2dcamera_2a_2dmount_ae0b769b( X1 ) );
}

DEFTSCP( _2dcamera_2dmount_21_1cc693_v );
DEFCSTRING( t18390, "CAMERA-S/N-*SETTINGS*-SET-MOUNT!" );
EXTERNTSCPP( ib_2dmisc_date_21_2a_fe258695, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_date_21_2a_fe258695_v );

TSCP  _2dcamera_2dmount_21_1cc693( s15957, m15958 )
        TSCP  s15957, m15958;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18390 );
        if  ( EQ( _S2CUINT( m15958 ), _S2CUINT( c15965 ) ) )  goto L18398;
        if  ( EQ( _S2CUINT( m15958 ), _S2CUINT( c15973 ) ) )  goto L18398;
        if  ( EQ( _S2CUINT( m15958 ), _S2CUINT( c15981 ) ) )  goto L18398;
        if  ( EQ( _S2CUINT( m15958 ), _S2CUINT( c15986 ) ) )  goto L18398;
        qobischeme_panic( c15987, EMPTYLIST );
L18398:
        X1 = CONS( c15953, EMPTYLIST );
        X1 = CONS( s15957, X1 );
        POPSTACKTRACE( ib_2dmisc_date_21_2a_fe258695( m15958, 
                                                      CONS( c15952, X1 ) ) );
}

DEFTSCP( _2dcamera_2dmount_21_ed19b48f_v );
DEFCSTRING( t18400, "CAMERA-*SETTINGS*-SET-MOUNT!" );

TSCP  _2dcamera_2dmount_21_ed19b48f( c15989, m15990 )
        TSCP  c15989, m15990;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18400 );
        X1 = _2dcamera_l_2dnumber_c1b24b76( c15989 );
        POPSTACKTRACE( _2dcamera_2dmount_21_1cc693( X1, m15990 ) );
}

DEFTSCP( _2dcamera_2drobot_21_8634fe87_v );
DEFCSTRING( t18402, "CAMERA-S/N-*SETTINGS*-SET-ROBOT!" );

TSCP  _2dcamera_2drobot_21_8634fe87( s15992, r15993 )
        TSCP  s15992, r15993;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18402 );
        X1 = CONS( c15994, EMPTYLIST );
        X1 = CONS( s15992, X1 );
        POPSTACKTRACE( ib_2dmisc_date_21_2a_fe258695( r15993, 
                                                      CONS( c15952, X1 ) ) );
}

DEFTSCP( _2dcamera_2drobot_21_6b318c9b_v );
DEFCSTRING( t18404, "CAMERA-*SETTINGS*-SET-ROBOT!" );

TSCP  _2dcamera_2drobot_21_6b318c9b( c15996, r15997 )
        TSCP  c15996, r15997;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18404 );
        X1 = _2dcamera_l_2dnumber_c1b24b76( c15996 );
        POPSTACKTRACE( _2dcamera_2drobot_21_8634fe87( X1, r15997 ) );
}

DEFTSCP( _2dcamera_2drobot_21_42975595_v );
DEFCSTRING( t18406, "CAMERA-S/N-*SETTINGS*-ROBOT!" );

TSCP  _2dcamera_2drobot_21_42975595( s15999 )
        TSCP  s15999;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18406 );
        X1 = CONS( c15994, EMPTYLIST );
        X1 = CONS( s15999, X1 );
        POPSTACKTRACE( ib_2dmisc_dlookup_2a_5f54d161( CONS( c15952, X1 ) ) );
}

DEFTSCP( _2dcamera_2drobot_21_e79e4445_v );
DEFCSTRING( t18408, "CAMERA-*SETTINGS*-ROBOT!" );

TSCP  _2dcamera_2drobot_21_e79e4445( c16001 )
        TSCP  c16001;
{
        TSCP  X1;

        PUSHSTACKTRACE( t18408 );
        X1 = CONS( c15994, EMPTYLIST );
        X1 = CONS( _2dcamera_l_2dnumber_c1b24b76( c16001 ), X1 );
        POPSTACKTRACE( ib_2dmisc_dlookup_2a_5f54d161( CONS( c15952, X1 ) ) );
}

DEFTSCP( _2dcamera__2dcameras_78fabe85_v );
DEFCSTRING( t18410, "GET-CAMERAS" );
EXTERNTSCPP( qobischeme_identity, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_identity_v );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );

TSCP  toollib_2dcamera_l16003( n16004, c18412 )
        TSCP  n16004, c18412;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l16003 [inside GET-CAMERAS]" );
        X1 = _2dcamera_l_2dnumber_c1b24b76( n16004 );
        if  ( FALSE( X1 ) )  goto L18415;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( n16004, CONS( X1, X2 ) ) );
L18415:
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  _2dcamera__2dcameras_78fabe85(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t18410 );
        X2 = MAKEPROCEDURE( 1, 
                            0, toollib_2dcamera_l16003, EMPTYLIST );
        X1 = qobischeme_map_2dn( X2, _2dcamera_cameras_2a_62dac422_v );
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( qobischeme_identity_v, 
                                                     X1 ) );
}

DEFTSCP( _2dcamera__2dcameras_5ab77fb2_v );
DEFCSTRING( t18417, "GET-MOUNTED-CAMERAS" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( qobischeme_find, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_find_v );

TSCP  _2dcamera__2dcameras_5ab77fb2( m16008 )
        TSCP  m16008;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18417 );
        X2 = _2dcamera__2dcameras_78fabe85(  );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L18421:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L18422;
        X1 = X4;
        goto L18444;
L18422:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18425;
        scrt1__24__car_2derror( X3 );
L18425:
        X8 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L18429;
        scrt1__24__cdr_2derror( X8 );
L18429:
        X11 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L18432;
        scrt1__24__car_2derror( X11 );
L18432:
        X10 = PAIR_CAR( X11 );
        X9 = _2dcamera_2a_2dmount_ae0b769b( X10 );
        if  ( FALSE( qobischeme_find( X9, m16008 ) ) )  goto L18435;
        X10 = PAIR_CAR( X8 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = CONS( X9, X11 );
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L18440;
        scrt1__24__car_2derror( X12 );
L18440:
        X7 = scrt1_cons_2a( X10, 
                            CONS( PAIR_CAR( X12 ), X11 ) );
        goto L18436;
L18435:
        X7 = FALSEVALUE;
L18436:
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L18443;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L18421 );
L18443:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L18448;
        scdebug_error( c14770, 
                       c14771, CONS( X5, EMPTYLIST ) );
L18448:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L18421 );
L18444:
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( qobischeme_identity_v, 
                                                     X1 ) );
}

DEFTSCP( _2dcamera__2dcameras_9d32c5a8_v );
DEFCSTRING( t18450, "DETECT-ROBOT-FROM-CAMERAS" );

TSCP  _2dcamera__2dcameras_9d32c5a8(  )
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18450 );
        X3 = _2dcamera__2dcameras_78fabe85(  );
        X4 = X3;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L18454:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L18455;
        X2 = X5;
        goto L18469;
L18455:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18458;
        scrt1__24__car_2derror( X4 );
L18458:
        X9 = PAIR_CAR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L18462;
        scrt1__24__cdr_2derror( X9 );
L18462:
        X11 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L18465;
        scrt1__24__car_2derror( X11 );
L18465:
        X10 = PAIR_CAR( X11 );
        X8 = _2dcamera_2drobot_21_42975595( X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L18468;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L18454 );
L18468:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L18473;
        scdebug_error( c14770, 
                       c14771, CONS( X6, EMPTYLIST ) );
L18473:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L18454 );
L18469:
        X1 = qobischeme_remove_2dif_2dnot( qobischeme_identity_v, X2 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L18476;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L18479;
        scrt1__24__car_2derror( X1 );
L18479:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
L18476:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _2dcamera__2d_3elist_d18a3f30_v );
DEFCSTRING( t18481, "REQUESTED-CAMERAS->LIST" );

TSCP  toollib_2dcamera_l16150( n16151, c18485 )
        TSCP  n16151, c18485;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dcamera_l16150 [inside REQUESTED-CAMERAS->\
LIST]" );
        X1 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = CONS( c15981, X1 );
        POPSTACKTRACE( scrt1_cons_2a( n16151, 
                                      CONS( _2dcamera_l_2dnumber_c1b24b76( n16151 ), 
                                            X1 ) ) );
}

TSCP  _2dcamera__2d_3elist_d18a3f30( n16146, 
                                     p16147, h16148, h16149 )
        TSCP  n16146, p16147, h16148, h16149;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t18481 );
        if  ( FALSE( n16146 ) )  goto L18483;
        X1 = MAKEPROCEDURE( 1, 
                            0, toollib_2dcamera_l16150, EMPTYLIST );
        POPSTACKTRACE( qobischeme_map_2dn( X1, n16146 ) );
L18483:
        if  ( FALSE( h16149 ) )  goto L18487;
        X2 = c15965;
        goto L18488;
L18487:
        X2 = FALSEVALUE;
L18488:
        X1 = CONS( X2, EMPTYLIST );
        if  ( FALSE( h16148 ) )  goto L18489;
        X2 = c15973;
        goto L18490;
L18489:
        X2 = FALSEVALUE;
L18490:
        X1 = CONS( X2, X1 );
        if  ( FALSE( p16147 ) )  goto L18491;
        X2 = c15986;
        goto L18492;
L18491:
        X2 = FALSEVALUE;
L18492:
        POPSTACKTRACE( _2dcamera__2dcameras_5ab77fb2( CONS( X2, X1 ) ) );
}

void toollib_2dmisc__init();
void toollib_2dimage_2dprocessing__init();
void scrt3__init();
void qobischeme__init();
void scdebug__init();
void scrt1__init();
void scrt6__init();
void scrt4__init();
void scrt2__init();
void toollib_2dc_2dbindings__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        toollib_2dmisc__init();
        toollib_2dimage_2dprocessing__init();
        scrt3__init();
        qobischeme__init();
        scdebug__init();
        scrt1__init();
        scrt6__init();
        scrt4__init();
        scrt2__init();
        toollib_2dc_2dbindings__init();
        MAXDISPLAY( 4 );
}

void  toollib_2dcamera__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dcamera SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t16308, 
                       ADR( _2dcamera_ra_2d1_2d0_47998df1_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_ra_2d1_2d0_47998df1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16310, 
                       ADR( _2dcamera_ra_2d3_2d0_3d59de91_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_ra_2d3_2d0_3d59de91, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16312, 
                       ADR( _2dcamera_ra_2d5_2d0_b2192b31_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_ra_2d5_2d0_b2192b31, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16314, 
                       ADR( _2dcamera_ra_2d7_2d0_c8d97851_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_ra_2d7_2d0_c8d97851, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16316, 
                       ADR( _2dcamera_ra_2d9_2d0_77e9c630_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_ra_2d9_2d0_77e9c630, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16318, 
                       ADR( _2dcamera_a_2d11_2d0_b58c470b_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_a_2d11_2d0_b58c470b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16320, 
                       ADR( _2dcamera_a_2d13_2d0_cf4c146b_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_a_2d13_2d0_cf4c146b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16322, 
                       ADR( _2dcamera_cameras_2a_62dac422_v ), 
                       _TSCP( 40 ) );
        INITIALIZEVAR( t16323, 
                       ADR( _2dcamera_cameras_2a_903755c2_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t16324, 
                       ADR( toollib_2dcamera__2acamera_2a_v ), 
                       _TSCP( 0 ) );
        INITIALIZEVAR( t16325, 
                       ADR( _2dcamera_auto_3f_2a_3c4cce22_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t16326, 
                       ADR( _2dcamera_o_2dstring_2de2f5e1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_o_2dstring_2de2f5e1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16328, 
                       ADR( _2dcamera_o_2dstring_b0f9ab2a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_o_2dstring_b0f9ab2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16330, 
                       ADR( _2dcamera_2dcontrols_a3f187ce_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dcontrols_a3f187ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16333, 
                       ADR( _2dcamera_initialize_66ca3460_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_initialize_66ca3460, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16336, 
                       ADR( _2dcamera_initialize_1122b0a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera_initialize_1122b0a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16339, 
                       ADR( _2dcamera_amerate_21_6a3ff266_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _2dcamera_amerate_21_6a3ff266, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16346, 
                       ADR( _2dcamera__2dcapture_93f74b0e_v ), 
                       sc_int_tscp( V4L2_BUF_TYPE_VIDEO_CAPTURE ) );
        INITIALIZEVAR( t16347, 
                       ADR( _2dcamera_x_2dset_21_bf5ed330_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dset_21_bf5ed330, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16349, 
                       ADR( _2dcamera_at_2dindex_5ffc3afa_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_at_2dindex_5ffc3afa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16351, 
                       ADR( _2dcamera_x_2dupdate_75cecab4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dupdate_75cecab4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16353, 
                       ADR( _2dcamera_e_2dset_21_92d958bb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_92d958bb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16355, 
                       ADR( _2dcamera_mat_2dtype_6c061fa3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_mat_2dtype_6c061fa3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16357, 
                       ADR( _2dcamera_e_2dupdate_5849413f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_5849413f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16359, 
                       ADR( _2dcamera_l_2dset_21_2d9e97ab_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_l_2dset_21_2d9e97ab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16361, 
                       ADR( _2dcamera_at_2dpixel_a03d79d9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_at_2dpixel_a03d79d9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16363, 
                       ADR( _2dcamera_l_2dupdate_e70e8e2f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_l_2dupdate_e70e8e2f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16365, 
                       ADR( _2dcamera_x_2dset_21_877568f9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dset_21_877568f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16367, 
                       ADR( _2dcamera_ze_2dindex_64303acc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ze_2dindex_64303acc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16369, 
                       ADR( _2dcamera_x_2dupdate_4de5717d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dupdate_4de5717d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16371, 
                       ADR( _2dcamera_t_2dset_21_6f7de9c2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dset_21_6f7de9c2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16373, 
                       ADR( _2dcamera_l_2dformat_99ba7241_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dformat_99ba7241, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16375, 
                       ADR( _2dcamera_t_2dupdate_a5edf046_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dupdate_a5edf046, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16377, 
                       ADR( _2dcamera_e_2dset_21_61a05519_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_61a05519, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16379, 
                       ADR( _2dcamera_ize_2dtype_ce26e183_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ize_2dtype_ce26e183, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16381, 
                       ADR( _2dcamera_e_2dupdate_ab304c9d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_ab304c9d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16383, 
                       ADR( _2dcamera_e_2dset_21_3be7f868_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_3be7f868, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16385, 
                       ADR( _2dcamera_2ddiscrete_3deadc3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2ddiscrete_3deadc3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16387, 
                       ADR( _2dcamera_e_2dupdate_f177e1ec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_f177e1ec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16389, 
                       ADR( _2dcamera_h_2dset_21_5e03ae74_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_h_2dset_21_5e03ae74, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16391, 
                       ADR( _2dcamera_te_2dwidth_77e2efd7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_te_2dwidth_77e2efd7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16393, 
                       ADR( _2dcamera_h_2dupdate_9493b7f0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_h_2dupdate_9493b7f0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16395, 
                       ADR( _2dcamera_t_2dset_21_bfe29ed2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dset_21_bfe29ed2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16397, 
                       ADR( _2dcamera_e_2dheight_94d28806_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_e_2dheight_94d28806, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16399, 
                       ADR( _2dcamera_t_2dupdate_75728756_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dupdate_75728756, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16401, 
                       ADR( _2dcamera_x_2dset_21_a5432235_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dset_21_a5432235, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16403, 
                       ADR( _2dcamera_al_2dindex_c38c25cb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_al_2dindex_c38c25cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16405, 
                       ADR( _2dcamera_x_2dupdate_6fd33bb1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dupdate_6fd33bb1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16407, 
                       ADR( _2dcamera_t_2dset_21_804f3ee_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dset_21_804f3ee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16409, 
                       ADR( _2dcamera_l_2dformat_bb8c388d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dformat_bb8c388d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16411, 
                       ADR( _2dcamera_t_2dupdate_c294ea6a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dupdate_c294ea6a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16413, 
                       ADR( _2dcamera_h_2dset_21_3dcfd762_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_h_2dset_21_3dcfd762, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16415, 
                       ADR( _2dcamera_al_2dwidth_cfe507e5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_al_2dwidth_cfe507e5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16417, 
                       ADR( _2dcamera_h_2dupdate_f75fcee6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_h_2dupdate_f75fcee6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16419, 
                       ADR( _2dcamera_t_2dset_21_4b55e7fa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dset_21_4b55e7fa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16421, 
                       ADR( _2dcamera_l_2dheight_5cbdde6e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dheight_5cbdde6e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16423, 
                       ADR( _2dcamera_t_2dupdate_81c5fe7e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dupdate_81c5fe7e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16425, 
                       ADR( _2dcamera_e_2dset_21_55fc20af_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_55fc20af, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16427, 
                       ADR( _2dcamera_val_2dtype_151f8767_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_val_2dtype_151f8767, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16429, 
                       ADR( _2dcamera_e_2dupdate_9f6c392b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_9f6c392b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16431, 
                       ADR( _2dcamera_e_2dset_21_667ea578_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_667ea578, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16433, 
                       ADR( _2dcamera_2ddiscrete_91c4ad8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2ddiscrete_91c4ad8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16435, 
                       ADR( _2dcamera_e_2dupdate_aceebcfc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_aceebcfc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16437, 
                       ADR( _2dcamera_2ddiscrete_1ed55d57_v ), 
                       sc_int_tscp( V4L2_FRMSIZE_TYPE_DISCRETE ) );
        INITIALIZEVAR( t16438, 
                       ADR( _2dcamera_continuous_48f9089_v ), 
                       sc_int_tscp( V4L2_FRMSIZE_TYPE_CONTINUOUS ) );
        INITIALIZEVAR( t16439, 
                       ADR( _2dcamera_2dstepwise_ede80b2e_v ), 
                       sc_int_tscp( V4L2_FRMSIZE_TYPE_STEPWISE ) );
        INITIALIZEVAR( t16440, 
                       ADR( _2dcamera_r_2dset_21_eb42574e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_eb42574e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16442, 
                       ADR( _2dcamera_dnumerator_1c058315_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dnumerator_1c058315, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16444, 
                       ADR( _2dcamera_r_2dupdate_21d24eca_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_21d24eca, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16446, 
                       ADR( _2dcamera_r_2dset_21_eeeaf07e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_eeeaf07e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16448, 
                       ADR( _2dcamera_enominator_c1e15c7a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_enominator_c1e15c7a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16450, 
                       ADR( _2dcamera_r_2dupdate_247ae9fa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_247ae9fa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16452, 
                       ADR( _2dcamera_r_2dset_21_8212948c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_8212948c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16454, 
                       ADR( _2dcamera_dnumerator_3109ed8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dnumerator_3109ed8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16456, 
                       ADR( _2dcamera_r_2dupdate_48828d08_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_48828d08, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16458, 
                       ADR( _2dcamera_r_2dset_21_154bbfe8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_154bbfe8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16460, 
                       ADR( _2dcamera_enominator_dcb386b5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_enominator_dcb386b5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16462, 
                       ADR( _2dcamera_r_2dupdate_dfdba66c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_dfdba66c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16464, 
                       ADR( _2dcamera_e_2dset_21_32235f2d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_32235f2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16466, 
                       ADR( _2dcamera_ram_2dtype_5f72022b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ram_2dtype_5f72022b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16468, 
                       ADR( _2dcamera_e_2dupdate_f8b346a9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_f8b346a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16470, 
                       ADR( _2dcamera_y_2dset_21_cc0c5fa7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_y_2dset_21_cc0c5fa7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16475, 
                       ADR( _2dcamera_capability_123a8ff7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_capability_123a8ff7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16480, 
                       ADR( _2dcamera_y_2dupdate_69c4623_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_y_2dupdate_69c4623, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16482, 
                       ADR( _2dcamera_e_2dset_21_7ac3b555_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_7ac3b555, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16487, 
                       ADR( _2dcamera_apturemode_8c4d721b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_apturemode_8c4d721b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16492, 
                       ADR( _2dcamera_e_2dupdate_b053acd1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_b053acd1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16494, 
                       ADR( _2dcamera_r_2dset_21_db70aa68_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_db70aa68, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16502, 
                       ADR( _2dcamera_dnumerator_64bf4c7c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dnumerator_64bf4c7c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16510, 
                       ADR( _2dcamera_r_2dupdate_11e0b3ec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_11e0b3ec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16512, 
                       ADR( _2dcamera_r_2dset_21_ee38cdc9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_ee38cdc9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16520, 
                       ADR( _2dcamera_enominator_7e052b0f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_enominator_7e052b0f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16528, 
                       ADR( _2dcamera_r_2dupdate_24a8d44d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_24a8d44d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16530, 
                       ADR( _2dcamera_e_2dset_21_92d37918_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_92d37918, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16535, 
                       ADR( _2dcamera_tendedmode_a86f487c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_tendedmode_a86f487c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16540, 
                       ADR( _2dcamera_e_2dupdate_5843609c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_5843609c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16542, 
                       ADR( _2dcamera_s_2dset_21_5d191f9f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dset_21_5d191f9f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16547, 
                       ADR( _2dcamera_eadbuffers_e7d8440a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_eadbuffers_e7d8440a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16552, 
                       ADR( _2dcamera_s_2dupdate_9789061b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dupdate_9789061b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16554, 
                       ADR( _2dcamera_d_2dset_21_4cb06548_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dset_21_4cb06548, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16556, 
                       ADR( _2dcamera_ntrol_2did_7321a14c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ntrol_2did_7321a14c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16558, 
                       ADR( _2dcamera_d_2dupdate_86207ccc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dupdate_86207ccc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16560, 
                       ADR( _2dcamera_e_2dset_21_224c1c8c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_224c1c8c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16562, 
                       ADR( _2dcamera_ol_2dvalue_79c63360_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ol_2dvalue_79c63360, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16564, 
                       ADR( _2dcamera_e_2dupdate_e8dc0508_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_e8dc0508, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16566, 
                       ADR( _2dcamera_d_2dset_21_eaf81c25_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dset_21_eaf81c25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16568, 
                       ADR( _2dcamera_ymenu_2did_8cb39ed5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ymenu_2did_8cb39ed5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16570, 
                       ADR( _2dcamera_d_2dupdate_206805a1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dupdate_206805a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16572, 
                       ADR( _2dcamera_x_2dset_21_8945aa86_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dset_21_8945aa86, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16574, 
                       ADR( _2dcamera_nu_2dindex_50df5781_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_nu_2dindex_50df5781, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16576, 
                       ADR( _2dcamera_x_2dupdate_43d5b302_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_x_2dupdate_43d5b302, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16578, 
                       ADR( _2dcamera_e_2dset_21_6bc4ca23_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_6bc4ca23, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16580, 
                       ADR( _2dcamera_enu_2dname_9d6f79c5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_enu_2dname_9d6f79c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16582, 
                       ADR( _2dcamera_e_2dupdate_a154d3a7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_a154d3a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16584, 
                       ADR( _2dcamera_d_2dset_21_fbd71c4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dset_21_fbd71c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16586, 
                       ADR( _2dcamera_ntrol_2did_1e8def34_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ntrol_2did_1e8def34, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16588, 
                       ADR( _2dcamera_d_2dupdate_c52d6840_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dupdate_c52d6840, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16590, 
                       ADR( _2dcamera_e_2dset_21_fe8c221c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_fe8c221c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16592, 
                       ADR( _2dcamera_rol_2dtype_2ff541d3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dtype_2ff541d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16594, 
                       ADR( _2dcamera_e_2dupdate_341c3b98_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_341c3b98, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16596, 
                       ADR( _2dcamera_e_2dset_21_1fa2f02e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_1fa2f02e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16598, 
                       ADR( _2dcamera_rol_2dname_fd0868fc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dname_fd0868fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16600, 
                       ADR( _2dcamera_e_2dupdate_d532e9aa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_d532e9aa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16602, 
                       ADR( _2dcamera_m_2dset_21_3478771d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_m_2dset_21_3478771d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16604, 
                       ADR( _2dcamera__2dminimum_eea87669_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dminimum_eea87669, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16606, 
                       ADR( _2dcamera_m_2dupdate_fee86e99_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_m_2dupdate_fee86e99, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16608, 
                       ADR( _2dcamera_m_2dset_21_6581cc40_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_m_2dset_21_6581cc40, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16610, 
                       ADR( _2dcamera__2dmaximum_ed5b9626_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dmaximum_ed5b9626, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16612, 
                       ADR( _2dcamera_m_2dupdate_af11d5c4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_m_2dupdate_af11d5c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16614, 
                       ADR( _2dcamera_p_2dset_21_376078f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_p_2dset_21_376078f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16616, 
                       ADR( _2dcamera_rol_2dstep_e092e8c6_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dstep_e092e8c6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16618, 
                       ADR( _2dcamera_p_2dupdate_c9e61e0b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_p_2dupdate_c9e61e0b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16620, 
                       ADR( _2dcamera_e_2dset_21_6a536e5e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dset_21_6a536e5e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16622, 
                       ADR( _2dcamera_lt_2dvalue_16185b9f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lt_2dvalue_16185b9f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16624, 
                       ADR( _2dcamera_e_2dupdate_a0c377da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dupdate_a0c377da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16626, 
                       ADR( _2dcamera_s_2dset_21_f967849a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dset_21_f967849a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16628, 
                       ADR( _2dcamera_ol_2dflags_84cc9e23_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ol_2dflags_84cc9e23, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16630, 
                       ADR( _2dcamera_s_2dupdate_33f79d1e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dupdate_33f79d1e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16632, 
                       ADR( _2dcamera_r_2dset_21_edc7eccc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dset_21_edc7eccc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16634, 
                       ADR( _2dcamera_y_2ddriver_bdc02c16_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_y_2ddriver_bdc02c16, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16636, 
                       ADR( _2dcamera_r_2dupdate_2757f548_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dupdate_2757f548, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16638, 
                       ADR( _2dcamera_d_2dset_21_d4185423_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dset_21_d4185423, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16640, 
                       ADR( _2dcamera_ity_2dcard_acaca8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ity_2dcard_acaca8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16642, 
                       ADR( _2dcamera_d_2dupdate_1e884da7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dupdate_1e884da7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16644, 
                       ADR( _2dcamera_o_2dset_21_ed5e3ead_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_o_2dset_21_ed5e3ead, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16646, 
                       ADR( _2dcamera_bus_2dinfo_f0c857bc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_bus_2dinfo_f0c857bc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16648, 
                       ADR( _2dcamera_o_2dupdate_27ce2729_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_o_2dupdate_27ce2729, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16650, 
                       ADR( _2dcamera_n_2dset_21_a6fb19f5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_n_2dset_21_a6fb19f5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16652, 
                       ADR( _2dcamera__2dversion_6669453f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dversion_6669453f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16654, 
                       ADR( _2dcamera_n_2dupdate_6c6b0071_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_n_2dupdate_6c6b0071, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16656, 
                       ADR( _2dcamera_s_2dset_21_ee435080_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dset_21_ee435080, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16658, 
                       ADR( _2dcamera_pabilities_cc360d29_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_pabilities_cc360d29, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16660, 
                       ADR( _2dcamera_s_2dupdate_24d34904_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_s_2dupdate_24d34904, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16662, 
                       ADR( _2dcamera_enum_2dfmt_59fb1aae_v ), 
                       sc_int_tscp( VIDIOC_ENUM_FMT ) );
        INITIALIZEVAR( t16663, 
                       ADR( _2dcamera_me_2dsizes_59d06ff3_v ), 
                       sc_int_tscp( VIDIOC_ENUM_FRAMESIZES ) );
        INITIALIZEVAR( t16664, 
                       ADR( _2dcamera_dintervals_1da6d07a_v ), 
                       sc_int_tscp( VIDIOC_ENUM_FRAMEINTERVALS ) );
        INITIALIZEVAR( t16665, 
                       ADR( _2dcamera_parameters_ff6106d4_v ), 
                       sc_int_tscp( VIDIOC_G_PARM ) );
        INITIALIZEVAR( t16666, 
                       ADR( _2dcamera_parameters_cd7774cd_v ), 
                       sc_int_tscp( VIDIOC_S_PARM ) );
        INITIALIZEVAR( t16667, 
                       ADR( _2dcamera__2dcontrol_9f9b52fd_v ), 
                       sc_int_tscp( VIDIOC_G_CTRL ) );
        INITIALIZEVAR( t16668, 
                       ADR( _2dcamera__2dcontrol_eb259eb1_v ), 
                       sc_int_tscp( VIDIOC_S_CTRL ) );
        INITIALIZEVAR( t16669, 
                       ADR( _2dcamera__2dcontrol_c7ca1c8_v ), 
                       sc_int_tscp( VIDIOC_QUERYCTRL ) );
        INITIALIZEVAR( t16670, 
                       ADR( _2dcamera_ery_2dmenu_a8625c01_v ), 
                       sc_int_tscp( VIDIOC_QUERYMENU ) );
        INITIALIZEVAR( t16671, 
                       ADR( _2dcamera_pabilities_a93ef70c_v ), 
                       sc_int_tscp( VIDIOC_QUERYCAP ) );
        INITIALIZEVAR( t16672, 
                       ADR( toollib_2dcamera_v4l2_2dfd_v ), 
                       POINTER_TSCP( v4l2_fd ) );
        INITIALIZEVAR( t16673, 
                       ADR( _2dcamera_ext_2dctrl_f2d6f2d1_v ), 
                       sc_int_tscp( V4L2_CTRL_FLAG_NEXT_CTRL ) );
        INITIALIZEVAR( t16674, 
                       ADR( toollib_2dcamera_einval_v ), 
                       sc_int_tscp( EINVAL ) );
        INITIALIZEVAR( t16675, 
                       ADR( _2dcamera_2dreset_21_66716c15_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dreset_21_66716c15, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16679, 
                       ADR( _2dcamera_lt_2dreset_124d9f39_v ), 
                       sc_int_tscp( V4L2_CID_PANTILT_RESET ) );
        INITIALIZEVAR( t16680, 
                       ADR( _2dcamera_lt_2dreset_b3111978_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lt_2dreset_b3111978, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16684, 
                       ADR( _2dcamera_2dfocus_21_f71ffc25_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dfocus_21_f71ffc25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16688, 
                       ADR( _2dcamera_id_2dfocus_9609b06d_v ), 
                       sc_int_tscp( V4L2_CID_FOCUS ) );
        INITIALIZEVAR( t16689, 
                       ADR( _2dcamera_et_2dfocus_44c24a3d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_et_2dfocus_44c24a3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16693, 
                       ADR( _2dcamera__2dmode_21_55e29ec0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmode_21_55e29ec0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16697, 
                       ADR( _2dcamera_ed1_2dmode_87934abf_v ), 
                       sc_int_tscp( V4L2_CID_LED1_MODE ) );
        INITIALIZEVAR( t16698, 
                       ADR( _2dcamera_ed1_2dmode_a6d882ed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ed1_2dmode_a6d882ed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16702, 
                       ADR( _2dcamera_equency_21_b3c94ada_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_equency_21_b3c94ada, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16706, 
                       ADR( _2dcamera_dfrequency_aef8a1ff_v ), 
                       sc_int_tscp( V4L2_CID_LED1_FREQUENCY ) );
        INITIALIZEVAR( t16707, 
                       ADR( _2dcamera_dfrequency_af828c7f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dfrequency_af828c7f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16711, 
                       ADR( _2dcamera_cessing_21_e820c818_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_cessing_21_e820c818, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16715, 
                       ADR( _2dcamera_processing_95f3e0ec_v ), 
                       sc_int_tscp( V4L2_CID_DISABLE_PROCESSING ) );
        INITIALIZEVAR( t16716, 
                       ADR( _2dcamera_processing_eae8228e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_processing_eae8228e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16720, 
                       ADR( _2dcamera_w_2dbpp_21_377cbf3c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_w_2dbpp_21_377cbf3c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16724, 
                       ADR( _2dcamera_er_2dpixel_dc7bec1e_v ), 
                       sc_int_tscp( V4L2_CID_RAW_BITS_PER_PIXEL ) );
        INITIALIZEVAR( t16725, 
                       ADR( _2dcamera_draw_2dbpp_c38f81c4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_draw_2dbpp_c38f81c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16729, 
                       ADR( _2dcamera_ghtness_21_ffb9d6ac_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ghtness_21_ffb9d6ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16733, 
                       ADR( _2dcamera_brightness_5c474819_v ), 
                       sc_int_tscp( V4L2_CID_BRIGHTNESS ) );
        INITIALIZEVAR( t16734, 
                       ADR( _2dcamera_brightness_a37baf2d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_brightness_a37baf2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16738, 
                       ADR( _2dcamera_ontrast_21_cd25e56a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ontrast_21_cd25e56a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16742, 
                       ADR( _2dcamera_2dcontrast_b6db2391_v ), 
                       sc_int_tscp( V4L2_CID_CONTRAST ) );
        INITIALIZEVAR( t16743, 
                       ADR( _2dcamera_2dcontrast_38821ffc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dcontrast_38821ffc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16747, 
                       ADR( _2dcamera_uration_21_152d4f7c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_uration_21_152d4f7c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16751, 
                       ADR( _2dcamera_saturation_af1b3372_v ), 
                       sc_int_tscp( V4L2_CID_SATURATION ) );
        INITIALIZEVAR( t16752, 
                       ADR( _2dcamera_saturation_5027d446_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_saturation_5027d446, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16756, 
                       ADR( _2dcamera_t_2dhue_21_ef65541f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_t_2dhue_21_ef65541f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16760, 
                       ADR( _2dcamera_dcid_2dhue_4b334b91_v ), 
                       sc_int_tscp( V4L2_CID_HUE ) );
        INITIALIZEVAR( t16761, 
                       ADR( _2dcamera_dget_2dhue_3847dfab_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dget_2dhue_3847dfab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16765, 
                       ADR( _2dcamera_dvolume_21_46fc3040_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dvolume_21_46fc3040, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16769, 
                       ADR( _2dcamera_o_2dvolume_3eac6a2c_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_VOLUME ) );
        INITIALIZEVAR( t16770, 
                       ADR( _2dcamera_o_2dvolume_b3b9558d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_o_2dvolume_b3b9558d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16774, 
                       ADR( _2dcamera_balance_21_af326b3c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_balance_21_af326b3c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16778, 
                       ADR( _2dcamera__2dbalance_2dc255e4_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_BALANCE ) );
        INITIALIZEVAR( t16779, 
                       ADR( _2dcamera__2dbalance_8c9ed3a5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbalance_8c9ed3a5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16783, 
                       ADR( _2dcamera__2dbass_21_272c2cea_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dbass_21_272c2cea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16787, 
                       ADR( _2dcamera_dio_2dbass_3bd463b8_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_BASS ) );
        INITIALIZEVAR( t16788, 
                       ADR( _2dcamera_dio_2dbass_be9018a8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dio_2dbass_be9018a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16792, 
                       ADR( _2dcamera_dtreble_21_399f627c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dtreble_21_399f627c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16796, 
                       ADR( _2dcamera_o_2dtreble_966e532a_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_TREBLE ) );
        INITIALIZEVAR( t16797, 
                       ADR( _2dcamera_o_2dtreble_1b7b6c8b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_o_2dtreble_1b7b6c8b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16801, 
                       ADR( _2dcamera__2dmute_21_8e71c8dd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmute_21_8e71c8dd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16805, 
                       ADR( _2dcamera_dio_2dmute_c30d5bd4_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_MUTE ) );
        INITIALIZEVAR( t16806, 
                       ADR( _2dcamera_dio_2dmute_464920c4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dio_2dmute_464920c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16810, 
                       ADR( _2dcamera_oudness_21_c21d3524_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_oudness_21_c21d3524, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16814, 
                       ADR( _2dcamera_2dloudness_dfdfb89b_v ), 
                       sc_int_tscp( V4L2_CID_AUDIO_LOUDNESS ) );
        INITIALIZEVAR( t16815, 
                       ADR( _2dcamera_2dloudness_dea5951b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dloudness_dea5951b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16819, 
                       ADR( _2dcamera_2dlevel_21_6010b1d9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dlevel_21_6010b1d9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16823, 
                       ADR( _2dcamera_ck_2dlevel_bc664a80_v ), 
                       sc_int_tscp( V4L2_CID_BLACK_LEVEL ) );
        INITIALIZEVAR( t16824, 
                       ADR( _2dcamera_ck_2dlevel_a1541e9f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ck_2dlevel_a1541e9f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16828, 
                       ADR( _2dcamera_balance_21_937d7ff8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_balance_21_937d7ff8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16832, 
                       ADR( _2dcamera__2dbalance_e681aef7_v ), 
                       sc_int_tscp( V4L2_CID_AUTO_WHITE_BALANCE ) );
        INITIALIZEVAR( t16833, 
                       ADR( _2dcamera__2dbalance_c4207b55_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbalance_c4207b55, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16837, 
                       ADR( _2dcamera_balance_21_e4301f59_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_balance_21_e4301f59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16841, 
                       ADR( _2dcamera__2dbalance_d1abcae9_v ), 
                       sc_int_tscp( V4L2_CID_DO_WHITE_BALANCE ) );
        INITIALIZEVAR( t16842, 
                       ADR( _2dcamera__2dbalance_aeb0088b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbalance_aeb0088b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16846, 
                       ADR( _2dcamera_balance_21_59bdd39c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_balance_21_59bdd39c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16850, 
                       ADR( _2dcamera__2dbalance_51cfa280_v ), 
                       sc_int_tscp( V4L2_CID_RED_BALANCE ) );
        INITIALIZEVAR( t16851, 
                       ADR( _2dcamera__2dbalance_4cfdf69f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbalance_4cfdf69f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16855, 
                       ADR( _2dcamera_balance_21_241f6c45_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_balance_21_241f6c45, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16859, 
                       ADR( _2dcamera__2dbalance_fc570a10_v ), 
                       sc_int_tscp( V4L2_CID_BLUE_BALANCE ) );
        INITIALIZEVAR( t16860, 
                       ADR( _2dcamera__2dbalance_714235b1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbalance_714235b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16864, 
                       ADR( _2dcamera_2dgamma_21_fb00a5c1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dgamma_21_fb00a5c1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16868, 
                       ADR( _2dcamera_id_2dgamma_308a2af5_v ), 
                       sc_int_tscp( V4L2_CID_GAMMA ) );
        INITIALIZEVAR( t16869, 
                       ADR( _2dcamera_et_2dgamma_e241d0a5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_et_2dgamma_e241d0a5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16873, 
                       ADR( _2dcamera_iteness_21_5ed21b9b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_iteness_21_5ed21b9b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16877, 
                       ADR( _2dcamera_dwhiteness_adb56e5c_v ), 
                       sc_int_tscp( V4L2_CID_WHITENESS ) );
        INITIALIZEVAR( t16878, 
                       ADR( _2dcamera_dwhiteness_9e382a85_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dwhiteness_9e382a85, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16882, 
                       ADR( _2dcamera_xposure_21_4ec45355_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_xposure_21_4ec45355, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16886, 
                       ADR( _2dcamera_2dexposure_2c193054_v ), 
                       sc_int_tscp( V4L2_CID_EXPOSURE ) );
        INITIALIZEVAR( t16887, 
                       ADR( _2dcamera_2dexposure_a2400c39_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dexposure_a2400c39, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16891, 
                       ADR( _2dcamera_utogain_21_9de823a9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_utogain_21_9de823a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16895, 
                       ADR( _2dcamera_2dautogain_a8a5c40e_v ), 
                       sc_int_tscp( V4L2_CID_AUTOGAIN ) );
        INITIALIZEVAR( t16896, 
                       ADR( _2dcamera_2dautogain_26fcf863_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dautogain_26fcf863, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16900, 
                       ADR( _2dcamera__2dgain_21_5473218a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dgain_21_5473218a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16904, 
                       ADR( _2dcamera_cid_2dgain_c2b08830_v ), 
                       sc_int_tscp( V4L2_CID_GAIN ) );
        INITIALIZEVAR( t16905, 
                       ADR( _2dcamera_get_2dgain_4cf2516_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_get_2dgain_4cf2516, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16909, 
                       ADR( _2dcamera_2dhflip_21_31fecc7c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dhflip_21_31fecc7c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16913, 
                       ADR( _2dcamera_id_2dhflip_20130a5c_v ), 
                       sc_int_tscp( V4L2_CID_HFLIP ) );
        INITIALIZEVAR( t16914, 
                       ADR( _2dcamera_et_2dhflip_f2d8f00c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_et_2dhflip_f2d8f00c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16918, 
                       ADR( _2dcamera_2dvflip_21_58cfef65_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dvflip_21_58cfef65, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16922, 
                       ADR( _2dcamera_id_2dvflip_ffc323bf_v ), 
                       sc_int_tscp( V4L2_CID_VFLIP ) );
        INITIALIZEVAR( t16923, 
                       ADR( _2dcamera_et_2dvflip_2d08d9ef_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_et_2dvflip_2d08d9ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16927, 
                       ADR( _2dcamera_equency_21_81c5eca7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_equency_21_81c5eca7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16931, 
                       ADR( _2dcamera_dfrequency_ae78d5c9_v ), 
                       sc_int_tscp( V4L2_CID_POWER_LINE_FREQUENCY ) );
        INITIALIZEVAR( t16932, 
                       ADR( _2dcamera_dfrequency_c4f00f58_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dfrequency_c4f00f58, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16936, 
                       ADR( _2dcamera__2dauto_21_6f6b588_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dauto_21_6f6b588, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16940, 
                       ADR( _2dcamera_hue_2dauto_31d78ede_v ), 
                       sc_int_tscp( V4L2_CID_HUE_AUTO ) );
        INITIALIZEVAR( t16941, 
                       ADR( _2dcamera_hue_2dauto_ceeb69ea_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_hue_2dauto_ceeb69ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16945, 
                       ADR( _2dcamera_erature_21_1ae56aec_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_erature_21_1ae56aec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16949, 
                       ADR( _2dcamera_emperature_5efc3c31_v ), 
                       sc_int_tscp( V4L2_CID_WHITE_BALANCE_TEMPERATURE ) );
        INITIALIZEVAR( t16950, 
                       ADR( _2dcamera_emperature_8b47a279_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_emperature_8b47a279, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16954, 
                       ADR( _2dcamera_arpness_21_94226d5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_arpness_21_94226d5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16958, 
                       ADR( _2dcamera_dsharpness_bdef8ad8_v ), 
                       sc_int_tscp( V4L2_CID_SHARPNESS ) );
        INITIALIZEVAR( t16959, 
                       ADR( _2dcamera_dsharpness_8e62ce01_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dsharpness_8e62ce01, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16963, 
                       ADR( _2dcamera_nsation_21_e1fac0a6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_nsation_21_e1fac0a6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16967, 
                       ADR( _2dcamera_mpensation_33b0bdb2_v ), 
                       sc_int_tscp( V4L2_CID_BACKLIGHT_COMPENSATION ) );
        INITIALIZEVAR( t16968, 
                       ADR( _2dcamera_mpensation_59386723_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_mpensation_59386723, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16972, 
                       ADR( _2dcamera_a_2dagc_21_13a7c9b4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_a_2dagc_21_13a7c9b4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16976, 
                       ADR( _2dcamera_roma_2dagc_44159bbe_v ), 
                       sc_int_tscp( V4L2_CID_CHROMA_AGC ) );
        INITIALIZEVAR( t16977, 
                       ADR( _2dcamera_roma_2dagc_c151e0ae_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_roma_2dagc_c151e0ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16981, 
                       ADR( _2dcamera_dkiller_21_6b3beb5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dkiller_21_6b3beb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16985, 
                       ADR( _2dcamera_r_2dkiller_586ab4d_v ), 
                       sc_int_tscp( V4L2_CID_COLOR_KILLER ) );
        INITIALIZEVAR( t16986, 
                       ADR( _2dcamera_r_2dkiller_889394ec_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_r_2dkiller_889394ec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16990, 
                       ADR( _2dcamera_dlastp1_21_c170ed16_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dlastp1_21_c170ed16, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16994, 
                       ADR( _2dcamera_d_2dlastp1_616e703_v ), 
                       sc_int_tscp( V4L2_CID_LASTP1 ) );
        INITIALIZEVAR( t16995, 
                       ADR( _2dcamera_t_2dlastp1_6daf7d0d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_t_2dlastp1_6daf7d0d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16999, 
                       ADR( _2dcamera__2dbase_21_74e96b7c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dbase_21_74e96b7c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17003, 
                       ADR( _2dcamera_peg_2dbase_54d6881b_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_BASE ) );
        INITIALIZEVAR( t17004, 
                       ADR( _2dcamera_peg_2dbase_759d4049_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_peg_2dbase_759d4049, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17008, 
                       ADR( _2dcamera_2dclass_21_851c6f9c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dclass_21_851c6f9c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17012, 
                       ADR( _2dcamera_eg_2dclass_8f0d0c46_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CLASS ) );
        INITIALIZEVAR( t17013, 
                       ADR( _2dcamera_eg_2dclass_a497756_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_eg_2dclass_a497756, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17017, 
                       ADR( _2dcamera__2dtype_21_a84083a5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_a84083a5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17021, 
                       ADR( _2dcamera_eam_2dtype_901242e3_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_TYPE ) );
        INITIALIZEVAR( t17022, 
                       ADR( _2dcamera_eam_2dtype_ef098081_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_eam_2dtype_ef098081, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17026, 
                       ADR( _2dcamera_d_2dpmt_21_f89b2fa7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dpmt_21_f89b2fa7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17030, 
                       ADR( _2dcamera_dpid_2dpmt_9bc26fa1_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PID_PMT ) );
        INITIALIZEVAR( t17031, 
                       ADR( _2dcamera_dpid_2dpmt_1ca044a9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dpid_2dpmt_1ca044a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17035, 
                       ADR( _2dcamera_2daudio_21_44802653_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2daudio_21_44802653, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17039, 
                       ADR( _2dcamera_id_2daudio_d728a4b6_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PID_AUDIO ) );
        INITIALIZEVAR( t17040, 
                       ADR( _2dcamera_id_2daudio_b34d509c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_id_2daudio_b34d509c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17044, 
                       ADR( _2dcamera_2dvideo_21_577005da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dvideo_21_577005da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17048, 
                       ADR( _2dcamera_id_2dvideo_b392480f_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PID_VIDEO ) );
        INITIALIZEVAR( t17049, 
                       ADR( _2dcamera_id_2dvideo_d7f7bc25_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_id_2dvideo_d7f7bc25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17053, 
                       ADR( _2dcamera_d_2dpcr_21_62c0ce1a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_d_2dpcr_21_62c0ce1a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17057, 
                       ADR( _2dcamera_dpid_2dpcr_ec22e71a_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PID_PCR ) );
        INITIALIZEVAR( t17058, 
                       ADR( _2dcamera_dpid_2dpcr_6b40cc12_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dpid_2dpcr_6b40cc12, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17062, 
                       ADR( _2dcamera_2daudio_21_c02549d3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2daudio_21_c02549d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17066, 
                       ADR( _2dcamera_id_2daudio_6a2ddc5_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PES_ID_AUDIO ) );
        INITIALIZEVAR( t17067, 
                       ADR( _2dcamera_id_2daudio_cb5accf8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_id_2daudio_cb5accf8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17071, 
                       ADR( _2dcamera_2dvideo_21_d3d56a5a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dvideo_21_d3d56a5a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17075, 
                       ADR( _2dcamera_id_2dvideo_6218317c_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_PES_ID_VIDEO ) );
        INITIALIZEVAR( t17076, 
                       ADR( _2dcamera_id_2dvideo_afe02041_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_id_2dvideo_afe02041, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17080, 
                       ADR( _2dcamera_i_2dfmt_21_14f66735_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_i_2dfmt_21_14f66735, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17084, 
                       ADR( _2dcamera_dvbi_2dfmt_ccceb47f_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_STREAM_VBI_FMT ) );
        INITIALIZEVAR( t17085, 
                       ADR( _2dcamera_dvbi_2dfmt_4bac9f77_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dvbi_2dfmt_4bac9f77, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17089, 
                       ADR( _2dcamera__2dfreq_21_64f75d79_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dfreq_21_64f75d79, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17093, 
                       ADR( _2dcamera_ing_2dfreq_a7cac2f3_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_SAMPLING_FREQ ) );
        INITIALIZEVAR( t17094, 
                       ADR( _2dcamera_ing_2dfreq_df18b0cf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ing_2dfreq_df18b0cf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17098, 
                       ADR( _2dcamera_ncoding_21_ca983bc3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ncoding_21_ca983bc3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17102, 
                       ADR( _2dcamera_2dencoding_62696dc5_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_ENCODING ) );
        INITIALIZEVAR( t17103, 
                       ADR( _2dcamera_2dencoding_5a930ed4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dencoding_5a930ed4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17107, 
                       ADR( _2dcamera_bitrate_21_bb75682a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bitrate_21_bb75682a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17111, 
                       ADR( _2dcamera__2dbitrate_57c8280c_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_L1_BITRATE ) );
        INITIALIZEVAR( t17112, 
                       ADR( _2dcamera__2dbitrate_33addc26_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbitrate_33addc26, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17116, 
                       ADR( _2dcamera_bitrate_21_c7144df1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bitrate_21_c7144df1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17120, 
                       ADR( _2dcamera__2dbitrate_ce2a4e0d_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_L2_BITRATE ) );
        INITIALIZEVAR( t17121, 
                       ADR( _2dcamera__2dbitrate_aa4fba27_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbitrate_aa4fba27, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17125, 
                       ADR( _2dcamera_bitrate_21_5a1bac87_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bitrate_21_5a1bac87, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17129, 
                       ADR( _2dcamera__2dbitrate_fa491cd_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_L3_BITRATE ) );
        INITIALIZEVAR( t17130, 
                       ADR( _2dcamera__2dbitrate_6bc165e7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbitrate_6bc165e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17134, 
                       ADR( _2dcamera__2dmode_21_24d28900_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmode_21_24d28900, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17138, 
                       ADR( _2dcamera_dio_2dmode_96f3d738_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_MODE ) );
        INITIALIZEVAR( t17139, 
                       ADR( _2dcamera_dio_2dmode_e73c0e74_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dio_2dmode_e73c0e74, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17143, 
                       ADR( _2dcamera_tension_21_ad7931c3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_tension_21_ad7931c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17147, 
                       ADR( _2dcamera_dextension_e9ee0b9f_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_MODE_EXTENSION ) );
        INITIALIZEVAR( t17148, 
                       ADR( _2dcamera_dextension_c6f9a56a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dextension_c6f9a56a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17152, 
                       ADR( _2dcamera_mphasis_21_2309e5ef_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_mphasis_21_2309e5ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17156, 
                       ADR( _2dcamera_2demphasis_17174f53_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_EMPHASIS ) );
        INITIALIZEVAR( t17157, 
                       ADR( _2dcamera_2demphasis_2fed2c42_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2demphasis_2fed2c42, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17161, 
                       ADR( _2dcamera_o_2dcrc_21_3921882e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_o_2dcrc_21_3921882e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17165, 
                       ADR( _2dcamera_udio_2dcrc_91e9629a_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_CRC ) );
        INITIALIZEVAR( t17166, 
                       ADR( _2dcamera_udio_2dcrc_efb5a7de_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_udio_2dcrc_efb5a7de, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17170, 
                       ADR( _2dcamera__2dmute_21_e67f3f7f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmute_21_e67f3f7f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17174, 
                       ADR( _2dcamera_dio_2dmute_cd80e3cf_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_AUDIO_MUTE ) );
        INITIALIZEVAR( t17175, 
                       ADR( _2dcamera_dio_2dmute_bc4f3a83_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_dio_2dmute_bc4f3a83, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17179, 
                       ADR( _2dcamera_ncoding_21_69c7d58_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ncoding_21_69c7d58, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17183, 
                       ADR( _2dcamera_2dencoding_e29a247e_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_ENCODING ) );
        INITIALIZEVAR( t17184, 
                       ADR( _2dcamera_2dencoding_da60476f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dencoding_da60476f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17188, 
                       ADR( _2dcamera_daspect_21_b2af09b1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_daspect_21_b2af09b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17192, 
                       ADR( _2dcamera_o_2daspect_3ce18144_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_ASPECT ) );
        INITIALIZEVAR( t17193, 
                       ADR( _2dcamera_o_2daspect_9f229af2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_o_2daspect_9f229af2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17197, 
                       ADR( _2dcamera_dframes_21_81d3220b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dframes_21_81d3220b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17201, 
                       ADR( _2dcamera_b_2dframes_13281705_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_B_FRAMES ) );
        INITIALIZEVAR( t17202, 
                       ADR( _2dcamera_b_2dframes_944a3c0d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_b_2dframes_944a3c0d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17206, 
                       ADR( _2dcamera__2dsize_21_ff9a91ca_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dsize_21_ff9a91ca, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17210, 
                       ADR( _2dcamera_gop_2dsize_a6c48c6f_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_GOP_SIZE ) );
        INITIALIZEVAR( t17211, 
                       ADR( _2dcamera_gop_2dsize_21a6a767_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_gop_2dsize_21a6a767, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17215, 
                       ADR( _2dcamera_closure_21_d8315b5e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_closure_21_d8315b5e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17219, 
                       ADR( _2dcamera__2dclosure_d03e6481_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_GOP_CLOSURE ) );
        INITIALIZEVAR( t17220, 
                       ADR( _2dcamera__2dclosure_be1c8a3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dclosure_be1c8a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17224, 
                       ADR( _2dcamera_ulldown_21_91e4fe98_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ulldown_21_91e4fe98, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17228, 
                       ADR( _2dcamera_2dpulldown_e3bf760e_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_PULLDOWN ) );
        INITIALIZEVAR( t17229, 
                       ADR( _2dcamera_2dpulldown_db45151f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dpulldown_db45151f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17233, 
                       ADR( _2dcamera__2dmode_21_8eef871b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmode_21_8eef871b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17237, 
                       ADR( _2dcamera_ate_2dmode_9660b7c1_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_BITRATE_MODE ) );
        INITIALIZEVAR( t17238, 
                       ADR( _2dcamera_ate_2dmode_43db2989_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ate_2dmode_43db2989, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17242, 
                       ADR( _2dcamera_bitrate_21_a09c4101_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bitrate_21_a09c4101, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17246, 
                       ADR( _2dcamera__2dbitrate_e43ad737_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_BITRATE ) );
        INITIALIZEVAR( t17247, 
                       ADR( _2dcamera__2dbitrate_c69b0295_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbitrate_c69b0295, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17251, 
                       ADR( _2dcamera__2dpeak_21_142a130_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dpeak_21_142a130, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17255, 
                       ADR( _2dcamera_ate_2dpeak_a34b6417_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_BITRATE_PEAK ) );
        INITIALIZEVAR( t17256, 
                       ADR( _2dcamera_ate_2dpeak_76f0fa5f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ate_2dpeak_76f0fa5f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17260, 
                       ADR( _2dcamera_imation_21_1faf9d08_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_imation_21_1faf9d08, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17264, 
                       ADR( _2dcamera_decimation_a8fa264a_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_TEMPORAL_DECIMATION ) );
        INITIALIZEVAR( t17265, 
                       ADR( _2dcamera_decimation_8eef1ac9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_decimation_8eef1ac9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17269, 
                       ADR( _2dcamera__2dmute_21_70514fea_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmute_21_70514fea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17273, 
                       ADR( _2dcamera_deo_2dmute_f7d842a4_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_MUTE ) );
        INITIALIZEVAR( t17274, 
                       ADR( _2dcamera_deo_2dmute_86179be8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_deo_2dmute_86179be8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17278, 
                       ADR( _2dcamera_e_2dyuv_21_b3d4c0cb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_e_2dyuv_21_b3d4c0cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17282, 
                       ADR( _2dcamera_mute_2dyuv_d1a69707_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_VIDEO_MUTE_YUV ) );
        INITIALIZEVAR( t17283, 
                       ADR( _2dcamera_mute_2dyuv_56c4bc0f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_mute_2dyuv_56c4bc0f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17287, 
                       ADR( _2dcamera__2dbase_21_3f5541cc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dbase_21_3f5541cc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17291, 
                       ADR( _2dcamera_41x_2dbase_b6f17835_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_BASE ) );
        INITIALIZEVAR( t17292, 
                       ADR( _2dcamera_41x_2dbase_15326383_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_41x_2dbase_15326383, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17296, 
                       ADR( _2dcamera__2dmode_21_731c4731_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmode_21_731c4731, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17300, 
                       ADR( _2dcamera_ter_2dmode_c9a49a6c_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER_MODE ) );
        INITIALIZEVAR( t17301, 
                       ADR( _2dcamera_ter_2dmode_cce14f22_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ter_2dmode_cce14f22, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17305, 
                       ADR( _2dcamera_dfilter_21_55ba7d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dfilter_21_55ba7d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17309, 
                       ADR( _2dcamera_l_2dfilter_41477e48_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_SPATIAL_FILTER ) );
        INITIALIZEVAR( t17310, 
                       ADR( _2dcamera_l_2dfilter_d4cf11ac_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dfilter_d4cf11ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17314, 
                       ADR( _2dcamera__2dtype_21_b2835068_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_b2835068, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17318, 
                       ADR( _2dcamera_ter_2dtype_eea5738d_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_SPATIAL_FILTER_TYPE ) );
        INITIALIZEVAR( t17319, 
                       ADR( _2dcamera_ter_2dtype_1fafd73e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ter_2dtype_1fafd73e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17323, 
                       ADR( _2dcamera__2dtype_21_61bf11c5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_61bf11c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17327, 
                       ADR( _2dcamera_ter_2dtype_afa5065e_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_SPATIAL_FILTER_TYPE ) );
        INITIALIZEVAR( t17328, 
                       ADR( _2dcamera_ter_2dtype_b1f66dde_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ter_2dtype_b1f66dde, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17332, 
                       ADR( _2dcamera__2dmode_21_230ee439_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dmode_21_230ee439, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17336, 
                       ADR( _2dcamera_ter_2dmode_be00f403_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER_MODE ) );
        INITIALIZEVAR( t17337, 
                       ADR( _2dcamera_ter_2dmode_2f61dd41_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ter_2dmode_2f61dd41, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17341, 
                       ADR( _2dcamera_dfilter_21_158b24d0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dfilter_21_158b24d0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17345, 
                       ADR( _2dcamera_l_2dfilter_a84d3182_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_TEMPORAL_FILTER ) );
        INITIALIZEVAR( t17346, 
                       ADR( _2dcamera_l_2dfilter_fbf9f8c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dfilter_fbf9f8c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17350, 
                       ADR( _2dcamera__2dtype_21_5678c6de_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_5678c6de, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17354, 
                       ADR( _2dcamera_ter_2dtype_ad3adcd4_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_MEDIAN_FILTER_TYPE ) );
        INITIALIZEVAR( t17355, 
                       ADR( _2dcamera_ter_2dtype_e8b88113_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ter_2dtype_e8b88113, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17359, 
                       ADR( _2dcamera_dbottom_21_15148f3b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dbottom_21_15148f3b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17363, 
                       ADR( _2dcamera_r_2dbottom_c779a1fc_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_BOTTOM ) );
        INITIALIZEVAR( t17364, 
                       ADR( _2dcamera_r_2dbottom_95e0496e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_r_2dbottom_95e0496e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17368, 
                       ADR( _2dcamera_r_2dtop_21_994005b4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dtop_21_994005b4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17372, 
                       ADR( _2dcamera_lter_2dtop_30b14607_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_LUMA_MEDIAN_FILTER_TOP ) );
        INITIALIZEVAR( t17373, 
                       ADR( _2dcamera_lter_2dtop_cdde52ea_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lter_2dtop_cdde52ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17377, 
                       ADR( _2dcamera_dbottom_21_bda06c2f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dbottom_21_bda06c2f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17381, 
                       ADR( _2dcamera_r_2dbottom_d8e222e7_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_BOTTOM ) );
        INITIALIZEVAR( t17382, 
                       ADR( _2dcamera_r_2dbottom_3544f2ac_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_r_2dbottom_3544f2ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17386, 
                       ADR( _2dcamera_r_2dtop_21_f9515b30_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_r_2dtop_21_f9515b30, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17390, 
                       ADR( _2dcamera_lter_2dtop_e424f881_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_VIDEO_CHROMA_MEDIAN_FILTER_TOP ) );
        INITIALIZEVAR( t17391, 
                       ADR( _2dcamera_lter_2dtop_152e5c32_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lter_2dtop_152e5c32, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17395, 
                       ADR( _2dcamera_packets_21_1b35c3f2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_packets_21_1b35c3f2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17399, 
                       ADR( _2dcamera__2dpackets_242c9ee4_v ), 
                       sc_int_tscp( V4L2_CID_MPEG_CX2341X_STREAM_INSERT_NAV_PACKETS ) );
        INITIALIZEVAR( t17400, 
                       ADR( _2dcamera__2dpackets_21694baa_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dpackets_21694baa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17404, 
                       ADR( _2dcamera__2dbase_21_64f544c8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dbase_21_64f544c8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17408, 
                       ADR( _2dcamera_ass_2dbase_9270821_v ), 
                       sc_int_tscp( V4L2_CID_CAMERA_CLASS_BASE ) );
        INITIALIZEVAR( t17409, 
                       ADR( _2dcamera_ass_2dbase_aae41397_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ass_2dbase_aae41397, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17413, 
                       ADR( _2dcamera_2dclass_21_3a5444c7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dclass_21_3a5444c7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17417, 
                       ADR( _2dcamera_ra_2dclass_b3d37dd7_v ), 
                       sc_int_tscp( V4L2_CID_CAMERA_CLASS ) );
        INITIALIZEVAR( t17418, 
                       ADR( _2dcamera_ra_2dclass_3ec64276_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ra_2dclass_3ec64276, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17422, 
                       ADR( _2dcamera__2dauto_21_43186741_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dauto_21_43186741, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17426, 
                       ADR( _2dcamera_ure_2dauto_e3973bef_v ), 
                       sc_int_tscp( V4L2_CID_EXPOSURE_AUTO ) );
        INITIALIZEVAR( t17427, 
                       ADR( _2dcamera_ure_2dauto_42cbbdae_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ure_2dauto_42cbbdae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17431, 
                       ADR( _2dcamera_bsolute_21_6e9ef503_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bsolute_21_6e9ef503, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17435, 
                       ADR( _2dcamera_2dabsolute_4b1caddd_v ), 
                       sc_int_tscp( V4L2_CID_EXPOSURE_ABSOLUTE ) );
        INITIALIZEVAR( t17436, 
                       ADR( _2dcamera_2dabsolute_3ad37491_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dabsolute_3ad37491, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17440, 
                       ADR( _2dcamera_riority_21_509d58ac_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_riority_21_509d58ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17444, 
                       ADR( _2dcamera_2dpriority_63e8bda_v ), 
                       sc_int_tscp( V4L2_CID_EXPOSURE_AUTO_PRIORITY ) );
        INITIALIZEVAR( t17445, 
                       ADR( _2dcamera_2dpriority_86261c3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dpriority_86261c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17449, 
                       ADR( _2dcamera_elative_21_d9e0b9a0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_elative_21_d9e0b9a0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17453, 
                       ADR( _2dcamera_2drelative_c0f9f988_v ), 
                       sc_int_tscp( V4L2_CID_PAN_RELATIVE ) );
        INITIALIZEVAR( t17454, 
                       ADR( _2dcamera_2drelative_4decc629_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2drelative_4decc629, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17458, 
                       ADR( _2dcamera_elative_21_5324a8cf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_elative_21_5324a8cf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17462, 
                       ADR( _2dcamera_2drelative_bdaf9c4f_v ), 
                       sc_int_tscp( V4L2_CID_TILT_RELATIVE ) );
        INITIALIZEVAR( t17463, 
                       ADR( _2dcamera_2drelative_1cf31a0e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2drelative_1cf31a0e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17467, 
                       ADR( _2dcamera_2dreset_21_3c321615_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dreset_21_3c321615, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17471, 
                       ADR( _2dcamera_an_2dreset_6ee437b_v ), 
                       sc_int_tscp( V4L2_CID_PAN_RESET ) );
        INITIALIZEVAR( t17472, 
                       ADR( _2dcamera_an_2dreset_27a58b29_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_an_2dreset_27a58b29, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17476, 
                       ADR( _2dcamera_2dreset_21_9a1b9c19_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dreset_21_9a1b9c19, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17480, 
                       ADR( _2dcamera_lt_2dreset_1f89d2c9_v ), 
                       sc_int_tscp( V4L2_CID_TILT_RESET ) );
        INITIALIZEVAR( t17481, 
                       ADR( _2dcamera_lt_2dreset_9acda9d9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lt_2dreset_9acda9d9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17485, 
                       ADR( _2dcamera_bsolute_21_303edca8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bsolute_21_303edca8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17489, 
                       ADR( _2dcamera_2dabsolute_87db807_v ), 
                       sc_int_tscp( V4L2_CID_PAN_ABSOLUTE ) );
        INITIALIZEVAR( t17490, 
                       ADR( _2dcamera_2dabsolute_856887a6_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dabsolute_856887a6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17494, 
                       ADR( _2dcamera_bsolute_21_bafacdc7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bsolute_21_bafacdc7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17498, 
                       ADR( _2dcamera_2dabsolute_752bddc0_v ), 
                       sc_int_tscp( V4L2_CID_TILT_ABSOLUTE ) );
        INITIALIZEVAR( t17499, 
                       ADR( _2dcamera_2dabsolute_d4775b81_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dabsolute_d4775b81, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17503, 
                       ADR( _2dcamera_bsolute_21_9704e4c4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_bsolute_21_9704e4c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17507, 
                       ADR( _2dcamera_2dabsolute_15c8595b_v ), 
                       sc_int_tscp( V4L2_CID_FOCUS_ABSOLUTE ) );
        INITIALIZEVAR( t17508, 
                       ADR( _2dcamera_2dabsolute_14b274db_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dabsolute_14b274db, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17512, 
                       ADR( _2dcamera_elative_21_7eda81cc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_elative_21_7eda81cc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17516, 
                       ADR( _2dcamera_2drelative_dd4c18d4_v ), 
                       sc_int_tscp( V4L2_CID_FOCUS_RELATIVE ) );
        INITIALIZEVAR( t17517, 
                       ADR( _2dcamera_2drelative_dc363554_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2drelative_dc363554, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17521, 
                       ADR( _2dcamera__2dauto_21_d9655b09_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dauto_21_d9655b09, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17525, 
                       ADR( _2dcamera_cus_2dauto_d2f3f6ca_v ), 
                       sc_int_tscp( V4L2_CID_FOCUS_AUTO ) );
        INITIALIZEVAR( t17526, 
                       ADR( _2dcamera_cus_2dauto_57b78dda_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_cus_2dauto_57b78dda, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17530, 
                       ADR( _2dcamera__2dformats_1e1923d3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dformats_1e1923d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17551, 
                       ADR( _2dcamera_me_2dsizes_74948f1b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_me_2dsizes_74948f1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17584, 
                       ADR( _2dcamera_dintervals_7645bf79_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      _2dcamera_dintervals_7645bf79, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17617, 
                       ADR( _2dcamera_mat_2dinfo_eeb267b2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_mat_2dinfo_eeb267b2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17649, 
                       ADR( _2dcamera_c_2dformat_b31119fc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _2dcamera_c_2dformat_b31119fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17684, 
                       ADR( _2dcamera__2dcameras_4e2e8f7_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera__2dcameras_4e2e8f7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17702, 
                       ADR( _2dcamera__2dcontrol_495618ad_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dcontrol_495618ad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17716, 
                       ADR( _2dcamera_control_21_38ebed3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _2dcamera_control_21_38ebed3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17723, 
                       ADR( toollib_2dcamera_camera_2dfd_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dcamera_camera_2dfd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17727, 
                       ADR( _2dcamera__2dcontrol_153b74fc_v ), 
                       MAKEPROCEDURE( 8, 
                                      0, 
                                      _2dcamera__2dcontrol_153b74fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17777, 
                       ADR( _2dcamera_control_3f_7738067d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_control_3f_7738067d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17793, 
                       ADR( _2dcamera_ol_2did_21_6aa6b37c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ol_2did_21_6aa6b37c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17797, 
                       ADR( _2dcamera_ntrol_2did_362a1312_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ntrol_2did_362a1312, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17808, 
                       ADR( _2dcamera_ol_2did_21_48d8e65e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_ol_2did_21_48d8e65e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17819, 
                       ADR( _2dcamera__2dtype_21_830f6f8e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_830f6f8e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17823, 
                       ADR( _2dcamera_rol_2dtype_58205467_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dtype_58205467, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17834, 
                       ADR( _2dcamera__2dtype_21_3fbcaeab_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dtype_21_3fbcaeab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17845, 
                       ADR( _2dcamera__2dname_21_37547fcb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dname_21_37547fcb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17849, 
                       ADR( _2dcamera_rol_2dname_8add7d48_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dname_8add7d48, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17860, 
                       ADR( _2dcamera__2dname_21_8be7beee_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dname_21_8be7beee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17871, 
                       ADR( _2dcamera_minimum_21_b96f52ed_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_minimum_21_b96f52ed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17875, 
                       ADR( _2dcamera__2dminimum_edf3e09d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dminimum_edf3e09d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17886, 
                       ADR( _2dcamera_minimum_21_760d263_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_minimum_21_760d263, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17897, 
                       ADR( _2dcamera_maximum_21_b863c859_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_maximum_21_b863c859, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17901, 
                       ADR( _2dcamera__2dmaximum_ee0000d2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dmaximum_ee0000d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17912, 
                       ADR( _2dcamera_maximum_21_66c48d7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_maximum_21_66c48d7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17923, 
                       ADR( _2dcamera__2dstep_21_35f1fd81_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dstep_21_35f1fd81, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17927, 
                       ADR( _2dcamera_rol_2dstep_9747fd72_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_rol_2dstep_9747fd72, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17938, 
                       ADR( _2dcamera__2dstep_21_89423ca4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2dstep_21_89423ca4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17949, 
                       ADR( _2dcamera___value_21_f26422a8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera___value_21_f26422a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17953, 
                       ADR( _2dcamera_ult__value_9f07fd75_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ult__value_9f07fd75, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17964, 
                       ADR( _2dcamera___value_21_4b0009a7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera___value_21_4b0009a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17975, 
                       ADR( _2dcamera_2dflags_21_63a9bd25_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dflags_21_63a9bd25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17979, 
                       ADR( _2dcamera_ol_2dflags_48b73ca3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ol_2dflags_48b73ca3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17990, 
                       ADR( _2dcamera_2dflags_21_2811daa3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dflags_21_2811daa3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18001, 
                       ADR( _2dcamera_nformation_78877b85_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_nformation_78877b85, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18015, 
                       ADR( _2dcamera_rol_2dstep_ee2c6d7b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_rol_2dstep_ee2c6d7b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18017, 
                       ADR( toollib_2dcamera_ioctl_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dcamera_ioctl, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18019, 
                       ADR( _2dcamera_pan_2dtilt_9a055caf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_pan_2dtilt_9a055caf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18021, 
                       ADR( _2dcamera_xt_2dframe_f96bbaea_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_xt_2dframe_f96bbaea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18069, 
                       ADR( _2dcamera_xt_2dframe_58904a7f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_xt_2dframe_58904a7f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18106, 
                       ADR( _2dcamera_timeout_2a_20f666c0_v ), 
                       _TSCP( 2000000 ) );
        INITIALIZEVAR( t18107, 
                       ADR( toollib_2dcamera_camera_2dpan_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dcamera_camera_2dpan, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18109, 
                       ADR( _2dcamera_era_2dtilt_bc884a3b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_era_2dtilt_bc884a3b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18111, 
                       ADR( _2dcamera_an_2dreset_c1570644_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_an_2dreset_c1570644, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18116, 
                       ADR( _2dcamera_lt_2dreset_a92846b1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_lt_2dreset_a92846b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18121, 
                       ADR( _2dcamera__2dbuttons_90b8fbb5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera__2dbuttons_90b8fbb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18286, 
                       ADR( _2dcamera_e_2dframes_9dc26678_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_e_2dframes_9dc26678, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18288, 
                       ADR( _2dcamera_sh_2dframe_f031131_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_sh_2dframe_f031131, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18290, 
                       ADR( toollib_2dcamera_dummy_2dvar_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      toollib_2dcamera_dummy_2dvar, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18292, 
                       ADR( _2dcamera_2dvariance_66a83910_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2dvariance_66a83910, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18296, 
                       ADR( _2dcamera__2ddetails_f3ff9ecf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera__2ddetails_f3ff9ecf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18346, 
                       ADR( _2dcamera_dcamera_21_367fce46_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_dcamera_21_367fce46, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18377, 
                       ADR( _2dcamera_ice_2dname_e3dc4827_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_ice_2dname_e3dc4827, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18379, 
                       ADR( _2dcamera_l_2dnumber_c1b24b76_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_l_2dnumber_c1b24b76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18386, 
                       ADR( _2dcamera_2a_2dmount_ae0b769b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2a_2dmount_ae0b769b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18388, 
                       ADR( _2dcamera_2a_2dmount_40c9a4c2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2a_2dmount_40c9a4c2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18390, 
                       ADR( _2dcamera_2dmount_21_1cc693_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dmount_21_1cc693, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18400, 
                       ADR( _2dcamera_2dmount_21_ed19b48f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2dmount_21_ed19b48f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18402, 
                       ADR( _2dcamera_2drobot_21_8634fe87_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2drobot_21_8634fe87, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18404, 
                       ADR( _2dcamera_2drobot_21_6b318c9b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _2dcamera_2drobot_21_6b318c9b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18406, 
                       ADR( _2dcamera_2drobot_21_42975595_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2drobot_21_42975595, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18408, 
                       ADR( _2dcamera_2drobot_21_e79e4445_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _2dcamera_2drobot_21_e79e4445, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18410, 
                       ADR( _2dcamera__2dcameras_78fabe85_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera__2dcameras_78fabe85, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18417, 
                       ADR( _2dcamera__2dcameras_5ab77fb2_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      _2dcamera__2dcameras_5ab77fb2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18450, 
                       ADR( _2dcamera__2dcameras_9d32c5a8_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _2dcamera__2dcameras_9d32c5a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18481, 
                       ADR( _2dcamera__2d_3elist_d18a3f30_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      _2dcamera__2d_3elist_d18a3f30, 
                                      EMPTYLIST ) );
        return;
}
