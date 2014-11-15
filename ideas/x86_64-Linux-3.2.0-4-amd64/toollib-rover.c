
/* SCHEME->C */

#include <objects.h>

void toollib_2drover__init();
DEFSTATICTSCP( _2acdr_2dviewer_2dactive_2a_v );
DEFCSTRING( t12040, "connected" );
DEFSTATICTSCP( c12025 );
DEFCSTRING( t12041, "DISCONNECTED" );
DEFSTATICTSCP( c12023 );

static void  init_constants()
{
        _2acdr_2dviewer_2dactive_2a_v = STRINGTOSYMBOL( CSTRING_TSCP( "*CDR-\
VIEWER-ACTIVE*" ) );
        CONSTANTEXP( ADR( _2acdr_2dviewer_2dactive_2a_v ) );
        c12025 = CSTRING_TSCP( t12040 );
        CONSTANTEXP( ADR( c12025 ) );
        c12023 = CSTRING_TSCP( t12041 );
        CONSTANTEXP( ADR( c12023 ) );
}

DEFTSCP( b_2drover_er_2d1_2d0_34fc6b99_v );
DEFCSTRING( t12042, "gensym-toollib_2drover-1-0" );

TSCP  b_2drover_er_2d1_2d0_34fc6b99(  )
{
        PUSHSTACKTRACE( t12042 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2drover_2_0(){ return 1;gensym_toollib_2drover_2_0( );
}

DEFTSCP( b_2drover_er_2d3_2d0_4e3c38f9_v );
DEFCSTRING( t12044, "gensym-toollib_2drover-3-0" );

TSCP  b_2drover_er_2d3_2d0_4e3c38f9(  )
{
        PUSHSTACKTRACE( t12044 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2drover_4_0(){ return 1;gensym_toollib_2drover_4_0( );
}

DEFTSCP( b_2drover_er_2d5_2d0_c17ccd59_v );
DEFCSTRING( t12046, "gensym-toollib_2drover-5-0" );

TSCP  b_2drover_er_2d5_2d0_c17ccd59(  )
{
        PUSHSTACKTRACE( t12046 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2drover_6_0(){ return 1;gensym_toollib_2drover_6_0( );
}

DEFTSCP( b_2drover_er_2d7_2d0_bbbc9e39_v );
DEFCSTRING( t12048, "gensym-toollib_2drover-7-0" );

TSCP  b_2drover_er_2d7_2d0_bbbc9e39(  )
{
        PUSHSTACKTRACE( t12048 );
        POPSTACKTRACE( 0 );}
  #include<toollib-rover-cpp.h>
int gensym_toollib_2drover_8_0(){ return 1;gensym_toollib_2drover_8_0( );
}

DEFTSCP( b_2drover_er_2dsetup_34bfa322_v );
DEFCSTRING( t12050, "ROVER-SERVER-SETUP" );

TSCP  b_2drover_er_2dsetup_34bfa322(  )
{
        PUSHSTACKTRACE( t12050 );
        POPSTACKTRACE( sc_int_tscp( rover_server_setup(  ) ) );
}

DEFTSCP( b_2drover_er_2dsetup_ebd84c7f_v );
DEFCSTRING( t12052, "CDR-VIEWER-SETUP" );

TSCP  b_2drover_er_2dsetup_ebd84c7f(  )
{
        PUSHSTACKTRACE( t12052 );
        POPSTACKTRACE( sc_int_tscp( cdr_viewer_setup(  ) ) );
}

DEFTSCP( b_2drover_er_2dstart_8edba09d_v );
DEFCSTRING( t12054, "ROVER-SERVER-START" );

TSCP  b_2drover_er_2dstart_8edba09d(  )
{
        PUSHSTACKTRACE( t12054 );
        rover_server_start(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2drover_er_2dstart_51bc4fc0_v );
DEFCSTRING( t12057, "CDR-VIEWER-START" );

TSCP  b_2drover_er_2dstart_51bc4fc0(  )
{
        PUSHSTACKTRACE( t12057 );
        cdr_viewer_start(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2drover_ront_2dcam_63189b1a_v );
DEFCSTRING( t12060, "ROVER-GET-FRONT-CAM" );
EXTERNTSCPP( rocessing_ib_2dimage_8bc579eb, XAL1( TSCP ) );
EXTERNTSCP( rocessing_ib_2dimage_8bc579eb_v );

TSCP  b_2drover_ront_2dcam_63189b1a(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t12060 );
        X1 = POINTER_TSCP( rover_get_front_cam(  ) );
        POPSTACKTRACE( rocessing_ib_2dimage_8bc579eb( X1 ) );
}

DEFTSCP( b_2drover_pano_2dcam_17b7691a_v );
DEFCSTRING( t12062, "ROVER-GET-PANO-CAM" );

TSCP  b_2drover_pano_2dcam_17b7691a(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t12062 );
        X1 = POINTER_TSCP( rover_get_pano_cam(  ) );
        POPSTACKTRACE( rocessing_ib_2dimage_8bc579eb( X1 ) );
}

DEFTSCP( b_2drover_ront_2dcam_1cac7399_v );
DEFCSTRING( t12064, "CDR-GET-FRONT-CAM" );

TSCP  b_2drover_ront_2dcam_1cac7399(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t12064 );
        X1 = POINTER_TSCP( cdr_get_front_cam(  ) );
        POPSTACKTRACE( rocessing_ib_2dimage_8bc579eb( X1 ) );
}

DEFTSCP( b_2drover_pano_2dcam_c9525156_v );
DEFCSTRING( t12066, "CDR-GET-PANO-CAM" );

TSCP  b_2drover_pano_2dcam_c9525156(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t12066 );
        X1 = POINTER_TSCP( cdr_get_pano_cam(  ) );
        POPSTACKTRACE( rocessing_ib_2dimage_8bc579eb( X1 ) );
}

DEFTSCP( b_2drover__2dcleanup_3eb241c4_v );
DEFCSTRING( t12068, "ROVER-SERVER-CLEANUP" );

TSCP  b_2drover__2dcleanup_3eb241c4(  )
{
        PUSHSTACKTRACE( t12068 );
        rover_server_cleanup(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2drover__2dcleanup_1124253_v );
DEFCSTRING( t12071, "CDR-VIEWER-CLEANUP" );

TSCP  b_2drover__2dcleanup_1124253(  )
{
        PUSHSTACKTRACE( t12071 );
        cdr_viewer_cleanup(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2drover_r_2dactive_9a5c48a5_v );
DEFCSTRING( t12074, "READ-CDR-VIEWER-ACTIVE" );

TSCP  b_2drover_r_2dactive_9a5c48a5(  )
{
        PUSHSTACKTRACE( t12074 );
        POPSTACKTRACE( sc_int_tscp( read_cdr_viewer_active(  ) ) );
}

DEFTSCP( b_2drover__2dcommand_393ae63_v );
DEFCSTRING( t12076, "GET-NEXT-IMAGE-COMMAND" );
EXTERNTSCPP( b_2dstuff_b_2dpixmap_4ed8f89, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( b_2dstuff_b_2dpixmap_4ed8f89_v );
EXTERNTSCPP( rocessing_lib_3afree_d1e588ee, XAL1( TSCP ) );
EXTERNTSCP( rocessing_lib_3afree_d1e588ee_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( qobischeme_redraw_2dbuttons, XAL0(  ) );
EXTERNTSCP( qobischeme_redraw_2dbuttons_v );

TSCP  b_2drover__2dcommand_393ae63(  )
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t12076 );
        X1 = b_2drover_r_2dactive_9a5c48a5(  );
        X2 = b_2drover_pano_2dcam_17b7691a(  );
        X3 = b_2drover_ront_2dcam_63189b1a(  );
        b_2dstuff_b_2dpixmap_4ed8f89( X3, _TSCP( 0 ), _TSCP( 0 ) );
        b_2dstuff_b_2dpixmap_4ed8f89( X2, 
                                      _TSCP( 2640 ), _TSCP( 0 ) );
        rocessing_lib_3afree_d1e588ee( X3 );
        rocessing_lib_3afree_d1e588ee( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12080;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L12084;
        goto L12085;
L12080:
        if  ( FALSE( scrt2__3d_2dtwo( X1, _TSCP( 4 ) ) ) )  goto L12085;
L12084:
        SETGENTL( SYMBOL_VALUE( _2acdr_2dviewer_2dactive_2a_v ), 
                  c12025 );
        goto L12088;
L12085:
        SETGENTL( SYMBOL_VALUE( _2acdr_2dviewer_2dactive_2a_v ), 
                  c12023 );
L12088:
        POPSTACKTRACE( qobischeme_redraw_2dbuttons(  ) );
}

DEFTSCP( b_2drover__2dcommand_cbc9fe85_v );
DEFCSTRING( t12089, "CDR-GET-NEXT-IMAGE-COMMAND" );

TSCP  b_2drover__2dcommand_cbc9fe85(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t12089 );
        X1 = b_2drover_pano_2dcam_c9525156(  );
        X2 = b_2drover_ront_2dcam_1cac7399(  );
        b_2dstuff_b_2dpixmap_4ed8f89( X2, _TSCP( 0 ), _TSCP( 0 ) );
        b_2dstuff_b_2dpixmap_4ed8f89( X1, 
                                      _TSCP( 2640 ), _TSCP( 0 ) );
        rocessing_lib_3afree_d1e588ee( X2 );
        POPSTACKTRACE( rocessing_lib_3afree_d1e588ee( X1 ) );
}

DEFTSCP( b_2drover_2dwaypoint_991f74a2_v );
DEFCSTRING( t12092, "MARK-WAYPOINT" );

TSCP  b_2drover_2dwaypoint_991f74a2( g12031 )
        TSCP  g12031;
{
        PUSHSTACKTRACE( t12092 );
        mark_waypoint( TSCP_POINTER( g12031 ) );
        POPSTACKTRACE( FALSEVALUE );
}

void qobischeme__init();
void scrt2__init();
void idealib_2dstuff__init();
void toollib_2dimage_2dprocessing__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        qobischeme__init();
        scrt2__init();
        idealib_2dstuff__init();
        toollib_2dimage_2dprocessing__init();
        MAXDISPLAY( 0 );
}

void  toollib_2drover__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2drover SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t12042, 
                       ADR( b_2drover_er_2d1_2d0_34fc6b99_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2d1_2d0_34fc6b99, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12044, 
                       ADR( b_2drover_er_2d3_2d0_4e3c38f9_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2d3_2d0_4e3c38f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12046, 
                       ADR( b_2drover_er_2d5_2d0_c17ccd59_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2d5_2d0_c17ccd59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12048, 
                       ADR( b_2drover_er_2d7_2d0_bbbc9e39_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2d7_2d0_bbbc9e39, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12050, 
                       ADR( b_2drover_er_2dsetup_34bfa322_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2dsetup_34bfa322, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12052, 
                       ADR( b_2drover_er_2dsetup_ebd84c7f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2dsetup_ebd84c7f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12054, 
                       ADR( b_2drover_er_2dstart_8edba09d_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2dstart_8edba09d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12057, 
                       ADR( b_2drover_er_2dstart_51bc4fc0_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_er_2dstart_51bc4fc0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12060, 
                       ADR( b_2drover_ront_2dcam_63189b1a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_ront_2dcam_63189b1a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12062, 
                       ADR( b_2drover_pano_2dcam_17b7691a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_pano_2dcam_17b7691a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12064, 
                       ADR( b_2drover_ront_2dcam_1cac7399_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_ront_2dcam_1cac7399, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12066, 
                       ADR( b_2drover_pano_2dcam_c9525156_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_pano_2dcam_c9525156, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12068, 
                       ADR( b_2drover__2dcleanup_3eb241c4_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover__2dcleanup_3eb241c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12071, 
                       ADR( b_2drover__2dcleanup_1124253_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover__2dcleanup_1124253, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12074, 
                       ADR( b_2drover_r_2dactive_9a5c48a5_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover_r_2dactive_9a5c48a5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12076, 
                       ADR( b_2drover__2dcommand_393ae63_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover__2dcommand_393ae63, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12089, 
                       ADR( b_2drover__2dcommand_cbc9fe85_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2drover__2dcommand_cbc9fe85, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12092, 
                       ADR( b_2drover_2dwaypoint_991f74a2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2drover_2dwaypoint_991f74a2, 
                                      EMPTYLIST ) );
        return;
}
