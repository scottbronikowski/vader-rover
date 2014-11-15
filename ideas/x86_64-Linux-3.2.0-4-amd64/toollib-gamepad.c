
/* SCHEME->C */

#include <objects.h>

void toollib_2dgamepad__init();

static void  init_constants()
{
}

DEFTSCP( _dgamepad_ad_2d1_2d0_5498e06c_v );
DEFCSTRING( t11986, "gensym-toollib_2dgamepad-1-0" );

TSCP  _dgamepad_ad_2d1_2d0_5498e06c(  )
{
        PUSHSTACKTRACE( t11986 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dgamepad_2_0(){ return 1;gensym_toollib_2dgamepad_2_0( );
}

DEFTSCP( _dgamepad_ad_2d3_2d0_2e58b30c_v );
DEFCSTRING( t11988, "gensym-toollib_2dgamepad-3-0" );

TSCP  _dgamepad_ad_2d3_2d0_2e58b30c(  )
{
        PUSHSTACKTRACE( t11988 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dgamepad_4_0(){ return 1;gensym_toollib_2dgamepad_4_0( );
}

DEFTSCP( _dgamepad_ad_2d5_2d0_a11846ac_v );
DEFCSTRING( t11990, "gensym-toollib_2dgamepad-5-0" );

TSCP  _dgamepad_ad_2d5_2d0_a11846ac(  )
{
        PUSHSTACKTRACE( t11990 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dgamepad_6_0(){ return 1;gensym_toollib_2dgamepad_6_0( );
}

DEFTSCP( _dgamepad_ad_2d7_2d0_dbd815cc_v );
DEFCSTRING( t11992, "gensym-toollib_2dgamepad-7-0" );

TSCP  _dgamepad_ad_2d7_2d0_dbd815cc(  )
{
        PUSHSTACKTRACE( t11992 );
        POPSTACKTRACE( 0 );}
  #include<toollib-gamepad-c.h>
int gensym_toollib_2dgamepad_8_0(){ return 1;gensym_toollib_2dgamepad_8_0( );
}

DEFTSCP( _dgamepad_lo_2dworld_9fc2586_v );
DEFCSTRING( t11994, "GAMEPAD-HELLO-WORLD" );

TSCP  _dgamepad_lo_2dworld_9fc2586(  )
{
        PUSHSTACKTRACE( t11994 );
        gamepad_hello_world(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad_pad_2dinit_e7dd5143_v );
DEFCSTRING( t11997, "GAMEPAD-INIT" );

TSCP  _dgamepad_pad_2dinit_e7dd5143(  )
{
        PUSHSTACKTRACE( t11997 );
        gamepad_init(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad_2dshutdown_2923eac3_v );
DEFCSTRING( t12000, "GAMEPAD-SHUTDOWN" );

TSCP  _dgamepad_2dshutdown_2923eac3(  )
{
        PUSHSTACKTRACE( t12000 );
        gamepad_shutdown(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad__2dcameras_f3462818_v );
DEFCSTRING( t12003, "GAMEPAD-START-CAMERAS" );

TSCP  _dgamepad__2dcameras_f3462818(  )
{
        PUSHSTACKTRACE( t12003 );
        gamepad_start_cameras(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad__2dcameras_c4c8816f_v );
DEFCSTRING( t12006, "GAMEPAD-STOP-CAMERAS" );

TSCP  _dgamepad__2dcameras_c4c8816f(  )
{
        PUSHSTACKTRACE( t12006 );
        gamepad_stop_cameras(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad_ace_2dinit_c5f1cfc1_v );
DEFCSTRING( t12009, "TRACE-INIT" );

TSCP  _dgamepad_ace_2dinit_c5f1cfc1(  )
{
        PUSHSTACKTRACE( t12009 );
        trace_init(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad_2dshutdown_75af2bc3_v );
DEFCSTRING( t12012, "TRACE-SHUTDOWN" );

TSCP  _dgamepad_2dshutdown_75af2bc3(  )
{
        PUSHSTACKTRACE( t12012 );
        trace_shutdown(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( _dgamepad_ace_2dsend_a4f61178_v );
DEFCSTRING( t12015, "TRACE-SEND" );

TSCP  _dgamepad_ace_2dsend_a4f61178( g11982 )
        TSCP  g11982;
{
        PUSHSTACKTRACE( t12015 );
        trace_send( TSCP_POINTER( g11982 ) );
        POPSTACKTRACE( FALSEVALUE );
}

static void  init_modules( compiler_version )
        char *compiler_version;
{
        MAXDISPLAY( 0 );
}

void  toollib_2dgamepad__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dgamepad SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t11986, 
                       ADR( _dgamepad_ad_2d1_2d0_5498e06c_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_ad_2d1_2d0_5498e06c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t11988, 
                       ADR( _dgamepad_ad_2d3_2d0_2e58b30c_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_ad_2d3_2d0_2e58b30c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t11990, 
                       ADR( _dgamepad_ad_2d5_2d0_a11846ac_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_ad_2d5_2d0_a11846ac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t11992, 
                       ADR( _dgamepad_ad_2d7_2d0_dbd815cc_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_ad_2d7_2d0_dbd815cc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t11994, 
                       ADR( _dgamepad_lo_2dworld_9fc2586_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_lo_2dworld_9fc2586, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t11997, 
                       ADR( _dgamepad_pad_2dinit_e7dd5143_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_pad_2dinit_e7dd5143, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12000, 
                       ADR( _dgamepad_2dshutdown_2923eac3_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_2dshutdown_2923eac3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12003, 
                       ADR( _dgamepad__2dcameras_f3462818_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad__2dcameras_f3462818, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12006, 
                       ADR( _dgamepad__2dcameras_c4c8816f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad__2dcameras_c4c8816f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12009, 
                       ADR( _dgamepad_ace_2dinit_c5f1cfc1_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_ace_2dinit_c5f1cfc1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12012, 
                       ADR( _dgamepad_2dshutdown_75af2bc3_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      _dgamepad_2dshutdown_75af2bc3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12015, 
                       ADR( _dgamepad_ace_2dsend_a4f61178_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dgamepad_ace_2dsend_a4f61178, 
                                      EMPTYLIST ) );
        return;
}
