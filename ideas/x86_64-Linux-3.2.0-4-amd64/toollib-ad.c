
/* SCHEME->C */

#include <objects.h>

void toollib_2dad__init();
DEFCSTRING( t15861, "Failure" );
DEFSTATICTSCP( c15745 );
DEFCSTRING( t15862, "Restart: ~a ~a ~a~%" );
DEFSTATICTSCP( c15744 );
DEFSTATICTSCP( c15675 );
DEFSTATICTSCP( c15654 );
DEFSTATICTSCP( c15653 );
DEFSTATICTSCP( c15485 );
DEFCSTRING( t15863, "New direction: ~a~%" );
DEFSTATICTSCP( c15268 );
DEFSTATICTSCP( c15021 );
DEFCSTRING( t15864, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c15018 );
DEFCSTRING( t15865, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c15014 );
DEFSTATICTSCP( c15011 );
DEFCSTRING( t15866, "||x-x'||=~s~%" );
DEFSTATICTSCP( c14996 );
DEFSTATICTSCP( c14971 );
DEFCSTRING( t15867, 
            "x: ~s~%fx: ~s~%gx: ~s~%etas: ~s~%is: ~s~%k: ~s~%j: ~s~%~%" );
DEFSTATICTSCP( c14965 );
DEFSTATICTSCP( c14939 );
DEFSTATICTSCP( c14935 );
DEFSTATICTSCP( c14330 );
DEFCSTRING( t15868, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c14239 );
DEFSTATICTSCP( c14238 );
DEFCSTRING( t15869, "(distance x x-prime)" );
DEFSTATICTSCP( c14227 );
DEFCSTRING( t15870, "magnitude gx" );
DEFSTATICTSCP( c14211 );
DEFSTATICTSCP( c14139 );
DEFSTATICTSCP( c14123 );
DEFSTATICTSCP( c14121 );
DEFSTATICTSCP( c14100 );
DEFCSTRING( t15871, "uni-------" );
DEFSTATICTSCP( c14024 );
DEFSTATICTSCP( c13907 );
DEFCSTRING( t15872, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c13620 );
DEFSTATICTSCP( c13619 );

static void  init_constants()
{
        c15745 = CSTRING_TSCP( t15861 );
        CONSTANTEXP( ADR( c15745 ) );
        c15744 = CSTRING_TSCP( t15862 );
        CONSTANTEXP( ADR( c15744 ) );
        c15675 = DOUBLE_TSCP( 0.1 );
        CONSTANTEXP( ADR( c15675 ) );
        c15654 = DOUBLE_TSCP( 9.999999999999999e-21 );
        CONSTANTEXP( ADR( c15654 ) );
        c15653 = DOUBLE_TSCP( 100. );
        CONSTANTEXP( ADR( c15653 ) );
        c15485 = DOUBLE_TSCP( 0. );
        CONSTANTEXP( ADR( c15485 ) );
        c15268 = CSTRING_TSCP( t15863 );
        CONSTANTEXP( ADR( c15268 ) );
        c15021 = DOUBLE_TSCP( 1e-07 );
        CONSTANTEXP( ADR( c15021 ) );
        c15018 = CSTRING_TSCP( t15864 );
        CONSTANTEXP( ADR( c15018 ) );
        c15014 = CSTRING_TSCP( t15865 );
        CONSTANTEXP( ADR( c15014 ) );
        c15011 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c15011 ) );
        c14996 = CSTRING_TSCP( t15866 );
        CONSTANTEXP( ADR( c14996 ) );
        c14971 = DOUBLE_TSCP( 0.0001 );
        CONSTANTEXP( ADR( c14971 ) );
        c14965 = CSTRING_TSCP( t15867 );
        CONSTANTEXP( ADR( c14965 ) );
        c14939 = DOUBLE_TSCP( 1.61803399 );
        CONSTANTEXP( ADR( c14939 ) );
        c14935 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c14935 ) );
        c14330 = DOUBLE_TSCP( 0.01 );
        CONSTANTEXP( ADR( c14330 ) );
        c14239 = CSTRING_TSCP( t15868 );
        CONSTANTEXP( ADR( c14239 ) );
        c14238 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c14238 ) );
        c14227 = CSTRING_TSCP( t15869 );
        CONSTANTEXP( ADR( c14227 ) );
        c14211 = CSTRING_TSCP( t15870 );
        CONSTANTEXP( ADR( c14211 ) );
        c14139 = DOUBLE_TSCP( 1e-10 );
        CONSTANTEXP( ADR( c14139 ) );
        c14123 = DOUBLE_TSCP( 1e-06 );
        CONSTANTEXP( ADR( c14123 ) );
        c14121 = DOUBLE_TSCP( 0.8 );
        CONSTANTEXP( ADR( c14121 ) );
        c14100 = DOUBLE_TSCP( 1e-05 );
        CONSTANTEXP( ADR( c14100 ) );
        c14024 = CSTRING_TSCP( t15871 );
        CONSTANTEXP( ADR( c14024 ) );
        c13907 = DOUBLE_TSCP( 2. );
        CONSTANTEXP( ADR( c13907 ) );
        c13620 = CSTRING_TSCP( t15872 );
        CONSTANTEXP( ADR( c13620 ) );
        c13619 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c13619 ) );
}

DEFTSCP( llib_2dad_ad_2d1_2d0_8bb0e17e_v );
DEFCSTRING( t15873, "gensym-toollib_2dad-1-0" );

TSCP  llib_2dad_ad_2d1_2d0_8bb0e17e(  )
{
        PUSHSTACKTRACE( t15873 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dad_2_0(){ return 1;gensym_toollib_2dad_2_0( );
}

DEFTSCP( llib_2dad_ad_2d3_2d0_f170b21e_v );
DEFCSTRING( t15875, "gensym-toollib_2dad-3-0" );

TSCP  llib_2dad_ad_2d3_2d0_f170b21e(  )
{
        PUSHSTACKTRACE( t15875 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dad_4_0(){ return 1;gensym_toollib_2dad_4_0( );
}

DEFTSCP( llib_2dad_ad_2d5_2d0_7e3047be_v );
DEFCSTRING( t15877, "gensym-toollib_2dad-5-0" );

TSCP  llib_2dad_ad_2d5_2d0_7e3047be(  )
{
        PUSHSTACKTRACE( t15877 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dad_6_0(){ return 1;gensym_toollib_2dad_6_0( );
}

DEFTSCP( toollib_2dad_smooth_2dmax_v );
DEFCSTRING( t15879, "SMOOTH-MAX" );
EXTERNTSCPP( qobischeme__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2a_2dtwo_v );
EXTERNTSCPP( qobischeme_log, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_log_v );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( qobischeme__2b, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2b_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( qobischeme_exp, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_exp_v );
EXTERNTSCPP( qobischeme__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2f_2dtwo_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  toollib_2dad_smooth_2dmax( l13580, t13581 )
        TSCP  l13580, t13581;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15879 );
        X4 = l13580;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L15882:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L15883;
        X3 = X5;
        goto L15891;
L15883:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L15886;
        scrt1__24__car_2derror( X4 );
L15886:
        X9 = PAIR_CAR( X4 );
        X10 = qobischeme__2f_2dtwo( X9, t13581 );
        X8 = qobischeme_exp( X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L15890;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L15882 );
L15890:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L15895;
        scdebug_error( c13619, 
                       c13620, CONS( X6, EMPTYLIST ) );
L15895:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L15882 );
L15891:
        X2 = qobischeme_reduce( qobischeme__2b_v, X3, _TSCP( 0 ) );
        X1 = qobischeme_log( X2 );
        POPSTACKTRACE( qobischeme__2a_2dtwo( t13581, X1 ) );
}

DEFTSCP( toollib_2dad_smooth_2dmin_v );
DEFCSTRING( t15897, "SMOOTH-MIN" );
EXTERNTSCPP( qobischeme__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2d_2dtwo_v );

TSCP  toollib_2dad_smooth_2dmin( l13636, t13637 )
        TSCP  l13636, t13637;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15897 );
        X1 = qobischeme__2d_2dtwo( _TSCP( 0 ), t13637 );
        X5 = l13636;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L15900:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L15901;
        X4 = X6;
        goto L15909;
L15901:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L15904;
        scrt1__24__car_2derror( X5 );
L15904:
        X10 = PAIR_CAR( X5 );
        X12 = qobischeme__2d_2dtwo( _TSCP( 0 ), X10 );
        X11 = qobischeme__2f_2dtwo( X12, t13637 );
        X9 = qobischeme_exp( X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L15908;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L15900 );
L15908:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L15913;
        scdebug_error( c13619, 
                       c13620, CONS( X7, EMPTYLIST ) );
L15913:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L15900 );
L15909:
        X3 = qobischeme_reduce( qobischeme__2b_v, X4, _TSCP( 0 ) );
        X2 = qobischeme_log( X3 );
        POPSTACKTRACE( qobischeme__2a_2dtwo( X1, X2 ) );
}

DEFTSCP( toollib_2dad_smooth_2dmax_2dz_v );
DEFCSTRING( t15915, "SMOOTH-MAX-Z" );
EXTERNTSCPP( qobischeme__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2b_2dtwo_v );

TSCP  toollib_2dad_smooth_2dmax_2dz( l13695, t13696, z13697 )
        TSCP  l13695, t13696, z13697;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15915 );
        X5 = l13695;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L15918:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L15919;
        X4 = X6;
        goto L15927;
L15919:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L15922;
        scrt1__24__car_2derror( X5 );
L15922:
        X10 = PAIR_CAR( X5 );
        X12 = qobischeme__2d_2dtwo( X10, z13697 );
        X11 = qobischeme__2f_2dtwo( X12, t13696 );
        X9 = qobischeme_exp( X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L15926;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L15918 );
L15926:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L15931;
        scdebug_error( c13619, 
                       c13620, CONS( X7, EMPTYLIST ) );
L15931:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L15918 );
L15927:
        X3 = qobischeme_reduce( qobischeme__2b_v, X4, _TSCP( 0 ) );
        X2 = qobischeme_log( X3 );
        X1 = qobischeme__2a_2dtwo( t13696, X2 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X1, z13697 ) );
}

DEFTSCP( llib_2dad_2dchks_2d2_ec527ef9_v );
DEFCSTRING( t15933, "SMOOTH-MAX-CHKS-2" );
EXTERNTSCPP( qobischeme_sqrt, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqrt_v );
EXTERNTSCPP( qobischeme_sqr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqr_v );

TSCP  llib_2dad_2dchks_2d2_ec527ef9( a13755, b13756, t13757 )
        TSCP  a13755, b13756, t13757;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15933 );
        X5 = qobischeme__2d_2dtwo( a13755, b13756 );
        X4 = qobischeme_sqr( X5 );
        X5 = qobischeme_sqr( t13757 );
        X3 = qobischeme__2b_2dtwo( X4, X5 );
        X2 = qobischeme_sqrt( X3 );
        X3 = qobischeme__2b_2dtwo( a13755, b13756 );
        X1 = qobischeme__2b_2dtwo( X2, X3 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 8 ) ) );
}

DEFTSCP( llib_2dad_max_2dchks_57bce59_v );
DEFCSTRING( t15935, "SMOOTH-MAX-CHKS" );
EXTERNTSCPP( qobischeme__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3d_2dtwo_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( llib_2dad_max_2dchks_57bce59, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( llib_2dad_max_2dchks_57bce59_v );
EXTERNTSCPP( qobischeme_every_2dother, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_every_2dother_v );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );
EXTERNTSCP( qobischeme_minus_2dinfinity_v );

TSCP  llib_2dad_max_2dchks_57bce59( l13775, t13776 )
        TSCP  l13775, t13776;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t15935 );
        if  ( EQ( _S2CUINT( l13775 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L15937;
        X1 = scrt1_length( l13775 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L15939;
        if  ( EQ( TSCPTAG( l13775 ), PAIRTAG ) )  goto L15942;
        scrt1__24__car_2derror( l13775 );
L15942:
        POPSTACKTRACE( PAIR_CAR( l13775 ) );
L15939:
        X2 = qobischeme_every_2dother( l13775 );
        X1 = llib_2dad_max_2dchks_57bce59( X2, t13776 );
        X4 = qobischeme_rest( l13775 );
        X3 = qobischeme_every_2dother( X4 );
        X2 = llib_2dad_max_2dchks_57bce59( X3, t13776 );
        POPSTACKTRACE( llib_2dad_2dchks_2d2_ec527ef9( X1, 
                                                      X2, t13776 ) );
L15937:
        POPSTACKTRACE( qobischeme_minus_2dinfinity_v );
}

DEFTSCP( llib_2dad_2dchks_2d2_5574e588_v );
DEFCSTRING( t15944, "SMOOTH-MIN-CHKS-2" );

TSCP  llib_2dad_2dchks_2d2_5574e588( a13791, b13792, t13793 )
        TSCP  a13791, b13792, t13793;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t15944 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), a13791 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), b13792 );
        X1 = llib_2dad_2dchks_2d2_ec527ef9( X2, X3, t13793 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( llib_2dad_min_2dchks_47754ed_v );
DEFCSTRING( t15946, "SMOOTH-MIN-CHKS" );
EXTERNTSCPP( qobischeme__2d, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2d_v );

TSCP  llib_2dad_min_2dchks_47754ed( l13804, t13805 )
        TSCP  l13804, t13805;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15946 );
        X3 = l13804;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L15950:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L15951;
        X2 = X4;
        goto L15958;
L15951:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L15954;
        scrt1__24__car_2derror( X3 );
L15954:
        X7 = qobischeme__2d( CONS( PAIR_CAR( X3 ), EMPTYLIST ) );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L15957;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L15950 );
L15957:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L15962;
        scdebug_error( c13619, 
                       c13620, CONS( X5, EMPTYLIST ) );
L15962:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L15950 );
L15958:
        X1 = llib_2dad_max_2dchks_57bce59( X2, t13805 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( toollib_2dad_deep_2dprimal_2a_v );
DEFCSTRING( t15964, "DEEP-PRIMAL*" );
EXTERNTSCPP( qobischeme_map_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dvector_v );
EXTERNTSCPP( qobischeme_primal_2a, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_primal_2a_v );

TSCP  toollib_2dad_deep_2dprimal_2a( a13852 )
        TSCP  a13852;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15964 );
        if  ( NOT( AND( EQ( TSCPTAG( a13852 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( a13852 ), 
                            VECTORTAG ) ) ) )  goto L15966;
        X1 = qobischeme_primal_2a( a13852 );
        POPSTACKTRACE( qobischeme_map_2dvector( qobischeme_primal_2a_v, 
                                                X1, EMPTYLIST ) );
L15966:
        POPSTACKTRACE( qobischeme_primal_2a( a13852 ) );
}

DEFTSCP( llib_2dad_2df_2dargs_24469af1_v );
DEFCSTRING( t15968, "MULTIVARIATE-ARGMIN-F-ARGS" );
EXTERNTSCPP( qobischeme_gradient_2df, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_gradient_2df_v );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );

TSCP  toollib_2dad_x15767(  )
{
        PUSHSTACKTRACE( "X [inside MULTIVARIATE-ARGMIN-F-ARGS]" );
        scrt6_write( DISPLAY( 0 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 1 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 2 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 3 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 4 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 5 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        POPSTACKTRACE( scrt6_newline( EMPTYLIST ) );
}

EXTERNTSCPP( qobischeme__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_3d_2dtwo_v );
EXTERNTSCPP( qobischeme_magnitude, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_magnitude_v );
EXTERNTSCPP( qobischeme_v_2d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_2d_v );
EXTERNTSCPP( qobischeme_k_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_k_2av_v );
EXTERNTSCPP( qobischeme_distance, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_distance_v );
EXTERNTSCPP( qobischeme__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_2dtwo_v );

TSCP  llib_2dad_2df_2dargs_24469af1( f13856, 
                                     x13857, 
                                     s13858, m13859, t13860 )
        TSCP  f13856, x13857, s13858, m13859, t13860;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t15968 );
        X1 = qobischeme_gradient_2df( f13856 );
        DISPLAY( 0 ) = x13857;
        X2 = f13856;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 1 ) = VIA( PROCEDURE_CODE( X2 ) )( x13857, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X2 ) )( x13857, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 3 ) = s13858;
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
L15972:
        X2 = qobischeme__3d_2dtwo( DISPLAY( 4 ), _TSCP( 40 ) );
        if  ( TRUE( X2 ) )  goto L15977;
L15977:
        X2 = qobischeme_magnitude( DISPLAY( 2 ) );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X2, t13860 ) ) )  goto L15979;
        if  ( TRUE( qobischeme__3d_2dtwo( DISPLAY( 5 ), m13859 ) )
            )  goto L15981;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 4 ), 
                                           _TSCP( 40 ) ) ) )  goto L15983;
        X2 = qobischeme__2a_2dtwo( c13907, DISPLAY( 3 ) );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X2;
        GOBACK( L15972 );
L15983:
        X3 = qobischeme_k_2av( DISPLAY( 3 ), DISPLAY( 2 ) );
        X2 = qobischeme_v_2d( DISPLAY( 0 ), X3 );
        X3 = qobischeme_distance( DISPLAY( 0 ), X2 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X3, t13860 ) ) )  goto L15986;
        X4 = f13856;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X2, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X3, DISPLAY( 1 ) ) )
            )  goto L15989;
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X2, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X5 = qobischeme__2b_2dtwo( DISPLAY( 4 ), _TSCP( 4 ) );
        DISPLAY( 5 ) = qobischeme__2b_2dtwo( DISPLAY( 5 ), 
                                             _TSCP( 4 ) );
        DISPLAY( 4 ) = X5;
        DISPLAY( 2 ) = X4;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X2;
        GOBACK( L15972 );
L15989:
        X4 = qobischeme__2f_2dtwo( DISPLAY( 3 ), c13907 );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X4;
        GOBACK( L15972 );
L15986:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L15981:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L15979:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_2df_2dargs_920d674c_v );
DEFCSTRING( t15991, "UNIVARIATE-ARGMIN-F-ARGS" );
EXTERNTSCPP( qobischeme_derivative_2df, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_derivative_2df_v );

TSCP  toollib_2dad_x15782(  )
{
        PUSHSTACKTRACE( "X [inside UNIVARIATE-ARGMIN-F-ARGS]" );
        scrt6_write( DISPLAY( 0 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 1 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 2 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 3 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 4 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 5 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        POPSTACKTRACE( scrt6_newline( EMPTYLIST ) );
}

EXTERNTSCPP( qobischeme_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_negative_3f_v );
EXTERNTSCPP( scrt2_abs, XAL1( TSCP ) );
EXTERNTSCP( scrt2_abs_v );

TSCP  llib_2dad_2df_2dargs_920d674c( f13918, 
                                     x13919, 
                                     s13920, m13921, t13922 )
        TSCP  f13918, x13919, s13920, m13921, t13922;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t15991 );
        X1 = qobischeme_derivative_2df( f13918 );
        DISPLAY( 0 ) = x13919;
        X2 = f13918;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 1 ) = VIA( PROCEDURE_CODE( X2 ) )( x13919, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X2 ) )( x13919, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 3 ) = s13920;
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
L15995:
        X2 = qobischeme__3d_2dtwo( DISPLAY( 4 ), _TSCP( 40 ) );
        if  ( TRUE( X2 ) )  goto L16000;
L16000:
        if  ( NEQ( TSCPTAG( DISPLAY( 2 ) ), FIXNUMTAG ) )  goto L16004;
        if  ( FALSE( qobischeme_negative_3f( DISPLAY( 2 ) ) )
            )  goto L16006;
        X2 = _TSCP( INEGATE( _S2CINT( DISPLAY( 2 ) ) ) );
        goto L16005;
L16006:
        X2 = DISPLAY( 2 );
        goto L16005;
L16004:
        X2 = scrt2_abs( DISPLAY( 2 ) );
L16005:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X2, t13922 ) ) )  goto L16002;
        if  ( TRUE( qobischeme__3d_2dtwo( DISPLAY( 5 ), m13921 ) )
            )  goto L16008;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 4 ), 
                                           _TSCP( 8 ) ) ) )  goto L16010;
        X2 = qobischeme__2a_2dtwo( c13907, DISPLAY( 3 ) );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X2;
        GOBACK( L15995 );
L16010:
        X3 = qobischeme__2a_2dtwo( DISPLAY( 3 ), 
                                   DISPLAY( 2 ) );
        X2 = qobischeme__2d_2dtwo( DISPLAY( 0 ), X3 );
        X4 = qobischeme__2d_2dtwo( DISPLAY( 0 ), X2 );
        if  ( NEQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L16016;
        if  ( FALSE( qobischeme_negative_3f( X4 ) ) )  goto L16018;
        X3 = _TSCP( INEGATE( _S2CINT( X4 ) ) );
        goto L16017;
L16018:
        X3 = X4;
        goto L16017;
L16016:
        X3 = scrt2_abs( X4 );
L16017:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X3, t13922 ) ) )  goto L16013;
        X4 = f13918;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X2, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X3, DISPLAY( 1 ) ) )
            )  goto L16021;
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X2, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X5 = qobischeme__2b_2dtwo( DISPLAY( 4 ), _TSCP( 4 ) );
        DISPLAY( 5 ) = qobischeme__2b_2dtwo( DISPLAY( 5 ), 
                                             _TSCP( 4 ) );
        DISPLAY( 4 ) = X5;
        DISPLAY( 2 ) = X4;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X2;
        GOBACK( L15995 );
L16021:
        X4 = qobischeme__2f_2dtwo( DISPLAY( 3 ), c13907 );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X4;
        GOBACK( L15995 );
L16013:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L16008:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L16002:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_rgs_2dline_794e48ee_v );
DEFCSTRING( t16023, "UNIVARIATE-ARGMIN-F-ARGS-LINE" );

TSCP  toollib_2dad_x15797(  )
{
        PUSHSTACKTRACE( "X [inside UNIVARIATE-ARGMIN-F-ARGS-LINE]" );
        scrt6_write( c14024, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 0 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 1 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 2 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 3 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 4 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( DISPLAY( 5 ), EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        POPSTACKTRACE( scrt6_newline( EMPTYLIST ) );
}

TSCP  llib_2dad_rgs_2dline_794e48ee( f13999, 
                                     x14000, 
                                     s14001, m14002, t14003 )
        TSCP  f13999, x14000, s14001, m14002, t14003;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16023 );
        X1 = qobischeme_derivative_2df( f13999 );
        DISPLAY( 0 ) = x14000;
        X2 = f13999;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 1 ) = VIA( PROCEDURE_CODE( X2 ) )( x14000, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        X2 = X1;
        X2 = UNKNOWNCALL( X2, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X2 ) )( x14000, 
                                                    PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 3 ) = s14001;
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 5 ) = _TSCP( 0 );
        X2 = TRUEVALUE;
L16027:
        X3 = qobischeme__3d_2dtwo( DISPLAY( 4 ), _TSCP( 40 ) );
        if  ( TRUE( X3 ) )  goto L16032;
L16032:
        if  ( NEQ( TSCPTAG( DISPLAY( 2 ) ), FIXNUMTAG ) )  goto L16036;
        if  ( FALSE( qobischeme_negative_3f( DISPLAY( 2 ) ) )
            )  goto L16038;
        X3 = _TSCP( INEGATE( _S2CINT( DISPLAY( 2 ) ) ) );
        goto L16037;
L16038:
        X3 = DISPLAY( 2 );
        goto L16037;
L16036:
        X3 = scrt2_abs( DISPLAY( 2 ) );
L16037:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X3, t14003 ) ) )  goto L16034;
        if  ( TRUE( qobischeme__3d_2dtwo( DISPLAY( 5 ), m14002 ) )
            )  goto L16040;
        if  ( FALSE( X2 ) )  goto L16047;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 4 ), 
                                           _TSCP( 8 ) ) ) )  goto L16047;
        X3 = qobischeme__2a_2dtwo( c13907, DISPLAY( 3 ) );
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X3;
        GOBACK( L16027 );
L16040:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L16034:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
L16047:
        X4 = qobischeme__2a_2dtwo( DISPLAY( 3 ), 
                                   DISPLAY( 2 ) );
        X3 = qobischeme__2d_2dtwo( DISPLAY( 0 ), X4 );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 0 ), X3 );
        if  ( NEQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L16052;
        if  ( FALSE( qobischeme_negative_3f( X5 ) ) )  goto L16054;
        X4 = _TSCP( INEGATE( _S2CINT( X5 ) ) );
        goto L16053;
L16054:
        X4 = X5;
        goto L16053;
L16052:
        X4 = scrt2_abs( X5 );
L16053:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, t14003 ) ) )  goto L16049;
        X5 = f13999;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X3, 
                                          PROCEDURE_CLOSURE( X5 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X4, DISPLAY( 1 ) ) )
            )  goto L16057;
        X6 = X1;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 4 ), _TSCP( 4 ) );
        X7 = qobischeme__2b_2dtwo( DISPLAY( 5 ), _TSCP( 4 ) );
        DISPLAY( 5 ) = X7;
        DISPLAY( 4 ) = X6;
        DISPLAY( 2 ) = X5;
        DISPLAY( 1 ) = X4;
        DISPLAY( 0 ) = X3;
        GOBACK( L16027 );
L16057:
        X5 = qobischeme__2f_2dtwo( DISPLAY( 3 ), c13907 );
        X2 = FALSEVALUE;
        DISPLAY( 4 ) = _TSCP( 0 );
        DISPLAY( 3 ) = X5;
        GOBACK( L16027 );
L16049:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_n_2df_2dfr_141658f3_v );
DEFCSTRING( t16059, "MULTIVARIATE-ARGMIN-F-FR" );
EXTERNTSCPP( qobischeme_v_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_2b_v );

TSCP  toollib_2dad_l14119( v14120, c16066 )
        TSCP  v14120, c16066;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14119 [inside MULTIVARIATE-ARGMIN-F-F\
R]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16066, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16066, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16066, 2 );
        X7 = qobischeme_k_2av( v14120, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( qobischeme_dot, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_dot_v );

TSCP  llib_2dad_n_2df_2dfr_141658f3( f14086, x14087 )
        TSCP  f14086, x14087;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16059 );
        DISPLAY( 0 ) = f14086;
        X1 = qobischeme_gradient_2df( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14087;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14087, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14087, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X4 ) )( x14087, 
                                                    PROCEDURE_CLOSURE( X4 ) );
L16063:
        X4 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, c14100 ) ) )  goto L16064;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14119, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = llib_2dad_2df_2dargs_920d674c( X5, 
                                            _TSCP( 0 ), 
                                            c14121, 
                                            _TSCP( 16 ), c14123 );
        X6 = qobischeme_k_2av( X4, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X6 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X5, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = qobischeme_dot( X7, X7 );
        X10 = qobischeme_dot( X3, X3 );
        X8 = qobischeme__2f_2dtwo( X9, X10 );
        X10 = qobischeme_k_2av( X8, DISPLAY( 2 ) );
        X9 = qobischeme_v_2d( X10, X7 );
        X10 = qobischeme_distance( DISPLAY( 1 ), X5 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X10, c14100 ) ) )  goto L16074;
        DISPLAY( 2 ) = X9;
        X3 = X7;
        X2 = X6;
        DISPLAY( 1 ) = X5;
        GOBACK( L16063 );
L16074:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16064:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_n_2df_2dpr_88eed24_v );
DEFCSTRING( t16076, "MULTIVARIATE-ARGMIN-F-PR" );

TSCP  toollib_2dad_l14158( v14159, c16083 )
        TSCP  v14159, c16083;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14158 [inside MULTIVARIATE-ARGMIN-F-P\
R]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16083, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16083, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16083, 2 );
        X7 = qobischeme_k_2av( v14159, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_n_2df_2dpr_88eed24( f14125, x14126 )
        TSCP  f14125, x14126;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16076 );
        DISPLAY( 0 ) = f14125;
        X1 = qobischeme_gradient_2df( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14126;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14126, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14126, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X4 ) )( x14126, 
                                                    PROCEDURE_CLOSURE( X4 ) );
L16080:
        X4 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, c14139 ) ) )  goto L16081;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14158, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = llib_2dad_rgs_2dline_794e48ee( X5, 
                                            _TSCP( 0 ), 
                                            c14121, 
                                            _TSCP( 80 ), c14100 );
        X6 = qobischeme_k_2av( X4, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X6 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X5, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X10 = qobischeme_v_2d( X7, X3 );
        X9 = qobischeme_dot( X7, X10 );
        X10 = qobischeme_dot( X3, X3 );
        X8 = qobischeme__2f_2dtwo( X9, X10 );
        X10 = qobischeme_k_2av( X8, DISPLAY( 2 ) );
        X9 = qobischeme_v_2d( X10, X7 );
        X10 = qobischeme_distance( DISPLAY( 1 ), X5 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X10, c14100 ) ) )  goto L16091;
        DISPLAY( 2 ) = X9;
        X3 = X7;
        X2 = X6;
        DISPLAY( 1 ) = X5;
        GOBACK( L16080 );
L16091:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16081:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_n_2dr_2dpr_90c9ada9_v );
DEFCSTRING( t16093, "MULTIVARIATE-ARGMIN-R-PR" );
EXTERNTSCPP( qobischeme_gradient_2dr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_gradient_2dr_v );

TSCP  toollib_2dad_l14194( v14195, c16100 )
        TSCP  v14195, c16100;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14194 [inside MULTIVARIATE-ARGMIN-R-P\
R]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16100, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16100, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16100, 2 );
        X7 = qobischeme_k_2av( v14195, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_n_2dr_2dpr_90c9ada9( f14162, x14163 )
        TSCP  f14162, x14163;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16093 );
        DISPLAY( 0 ) = f14162;
        X1 = qobischeme_gradient_2dr( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14163;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14163, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14163, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( x14163, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = qobischeme_map_2dvector( qobischeme__2d_v, 
                                                X4, EMPTYLIST );
L16097:
        X4 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, c14139 ) ) )  goto L16098;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14194, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = llib_2dad_rgs_2dline_794e48ee( X5, 
                                            _TSCP( 0 ), 
                                            c14100, 
                                            _TSCP( 80 ), c14100 );
        X6 = qobischeme_k_2av( X4, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X6 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X5, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X10 = qobischeme_v_2d( X7, X3 );
        X9 = qobischeme_dot( X7, X10 );
        X10 = qobischeme_dot( X3, X3 );
        X8 = qobischeme__2f_2dtwo( X9, X10 );
        X10 = qobischeme_k_2av( X8, DISPLAY( 2 ) );
        X9 = qobischeme_v_2d( X10, X7 );
        X10 = qobischeme_distance( DISPLAY( 1 ), X5 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X10, c14100 ) ) )  goto L16108;
        DISPLAY( 2 ) = X9;
        X3 = X7;
        X2 = X6;
        DISPLAY( 1 ) = X5;
        GOBACK( L16097 );
L16108:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16098:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad__2dr_2dprt_f8f267c4_v );
DEFCSTRING( t16110, "MULTIVARIATE-ARGMIN-R-PRT" );
EXTERNTSCPP( toollib_2dmisc_dtrace, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_dtrace_v );

TSCP  toollib_2dad_l14246( v14247, c16117 )
        TSCP  v14247, c16117;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14246 [inside MULTIVARIATE-ARGMIN-R-P\
RT]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16117, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16117, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16117, 2 );
        X7 = qobischeme_k_2av( v14247, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad__2dr_2dprt_f8f267c4( f14197, 
                                     x14198, t14199, t14200 )
        TSCP  f14197, x14198, t14199, t14200;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16110 );
        DISPLAY( 0 ) = f14197;
        X1 = qobischeme_gradient_2dr( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14198;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14198, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14198, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( x14198, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = qobischeme_map_2dvector( qobischeme__2d_v, 
                                                X4, EMPTYLIST );
        X4 = _TSCP( 0 );
L16114:
        X5 = qobischeme_magnitude( X3 );
        toollib_2dmisc_dtrace( c14211, X5 );
        X5 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X5, t14200 ) ) )  goto L16115;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14246, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X5 = llib_2dad_rgs_2dline_794e48ee( X6, 
                                            _TSCP( 0 ), 
                                            c14100, 
                                            _TSCP( 80 ), t14199 );
        X7 = qobischeme_k_2av( X5, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X8 = DISPLAY( 0 );
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = X1;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X6, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X11 = qobischeme_v_2d( X8, X3 );
        X10 = qobischeme_dot( X8, X11 );
        X11 = qobischeme_dot( X3, X3 );
        X9 = qobischeme__2f_2dtwo( X10, X11 );
        X11 = qobischeme_k_2av( X9, DISPLAY( 2 ) );
        X10 = qobischeme_v_2d( X11, X8 );
        X11 = qobischeme_distance( DISPLAY( 1 ), X6 );
        toollib_2dmisc_dtrace( c14227, X11 );
        X11 = qobischeme_distance( DISPLAY( 1 ), X6 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X11, t14200 ) ) )  goto L16125;
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L16130;
        scdebug_error( c14238, 
                       c14239, CONS( X8, EMPTYLIST ) );
L16130:
        X11 = C_FIXED( VECTOR_LENGTH( X8 ) );
        if  ( FALSE( qobischeme__3c_3d_2dtwo( X4, X11 ) ) )  goto L16127;
        X4 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        DISPLAY( 2 ) = X10;
        X3 = X8;
        X2 = X7;
        DISPLAY( 1 ) = X6;
        GOBACK( L16114 );
L16127:
        X11 = qobischeme_map_2dvector( qobischeme__2d_v, 
                                       X8, EMPTYLIST );
        X4 = _TSCP( 0 );
        DISPLAY( 2 ) = X11;
        X3 = X8;
        X2 = X7;
        DISPLAY( 1 ) = X6;
        GOBACK( L16114 );
L16125:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16115:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_n_2df_2dhs_fd9245eb_v );
DEFCSTRING( t16132, "MULTIVARIATE-ARGMIN-F-HS" );

TSCP  toollib_2dad_l14281( v14282, c16139 )
        TSCP  v14282, c16139;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14281 [inside MULTIVARIATE-ARGMIN-F-H\
S]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16139, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16139, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16139, 2 );
        X7 = qobischeme_k_2av( v14282, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_n_2df_2dhs_fd9245eb( f14249, x14250 )
        TSCP  f14249, x14250;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16132 );
        DISPLAY( 0 ) = f14249;
        X1 = qobischeme_gradient_2df( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14250;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14250, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14250, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X4 ) )( x14250, 
                                                    PROCEDURE_CLOSURE( X4 ) );
L16136:
        X4 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, c14100 ) ) )  goto L16137;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14281, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = llib_2dad_2df_2dargs_920d674c( X5, 
                                            _TSCP( 0 ), 
                                            c14121, 
                                            _TSCP( 80 ), c14123 );
        X6 = qobischeme_k_2av( X4, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X6 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X5, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X10 = qobischeme_v_2d( X7, X3 );
        X9 = qobischeme_dot( X7, X10 );
        X11 = qobischeme_v_2d( X7, X3 );
        X10 = qobischeme_dot( DISPLAY( 2 ), X11 );
        X8 = qobischeme__2f_2dtwo( X9, X10 );
        X10 = qobischeme_k_2av( X8, DISPLAY( 2 ) );
        X9 = qobischeme_v_2d( X10, X7 );
        X10 = qobischeme_distance( DISPLAY( 1 ), X5 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X10, c14100 ) ) )  goto L16147;
        DISPLAY( 2 ) = X9;
        X3 = X7;
        X2 = X6;
        DISPLAY( 1 ) = X5;
        GOBACK( L16136 );
L16147:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16137:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad__2dscaling_7048333b_v );
DEFCSTRING( t16149, "MULTIVARIATE-ARGMIN-F-SCALING" );
EXTERNTSCPP( qobischeme__2a, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2a_v );

TSCP  llib_2dad__2dscaling_7048333b( f14284, x14285, m14286 )
        TSCP  f14284, x14285, m14286;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16149 );
        X1 = qobischeme_gradient_2df( f14284 );
        X2 = x14285;
        X4 = f14284;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14285, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( x14285, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X5 = c14330;
        X6 = _TSCP( 0 );
L16153:
        if  ( FALSE( qobischeme__3d_2dtwo( X6, _TSCP( 40 ) ) )
            )  goto L16154;
        scrt6_write( X2, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( X3, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( X4, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( X5, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_write( X6, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        scrt6_newline( EMPTYLIST );
L16154:
        X7 = qobischeme_magnitude( X4 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X7, c14100 ) ) )  goto L16157;
        if  ( FALSE( qobischeme__3d_2dtwo( X6, _TSCP( 40 ) ) )
            )  goto L16159;
        X7 = qobischeme__2a_2dtwo( c13907, X5 );
        X6 = _TSCP( 0 );
        X5 = X7;
        GOBACK( L16153 );
L16159:
        X8 = qobischeme_map_2dvector( qobischeme__2a_v, 
                                      m14286, 
                                      CONS( qobischeme_k_2av( X5, X4 ), 
                                            EMPTYLIST ) );
        X7 = qobischeme_v_2d( X2, X8 );
        X8 = qobischeme_distance( X2, X7 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X8, c14100 ) ) )  goto L16162;
        X9 = f14284;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X7, 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X8, X3 ) ) )  goto L16165;
        X10 = X1;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X7, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X6 = qobischeme__2b_2dtwo( X6, _TSCP( 4 ) );
        X4 = X9;
        X3 = X8;
        X2 = X7;
        GOBACK( L16153 );
L16165:
        X9 = qobischeme__2f_2dtwo( X5, c13907 );
        X6 = _TSCP( 0 );
        X5 = X9;
        GOBACK( L16153 );
L16162:
        POPSTACKTRACE( X2 );
L16157:
        POPSTACKTRACE( X2 );
}

DEFTSCP( llib_2dad_rgmin_2dpr_6539b589_v );
DEFCSTRING( t16167, "MULTIVARIATE-ARGMIN-PR" );

TSCP  toollib_2dad_l14371( v14372, c16174 )
        TSCP  v14372, c16174;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14371 [inside MULTIVARIATE-ARGMIN-PR]\
" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16174, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16174, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16174, 2 );
        X7 = qobischeme_k_2av( v14372, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_rgmin_2dpr_6539b589( f14332, 
                                     x14333, 
                                     s14334, 
                                     g14335, 
                                     x14336, 
                                     l14337, 
                                     l14338, l14339, l14340 )
        TSCP  f14332, 
              x14333, 
              s14334, 
              g14335, 
              x14336, l14337, l14338, l14339, l14340;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16167 );
        DISPLAY( 0 ) = f14332;
        X1 = qobischeme_gradient_2df( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x14333;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x14333, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14333, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = s14334;
L16171:
        X4 = qobischeme_magnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X4, g14335 ) ) )  goto L16172;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l14371, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = llib_2dad_rgs_2dline_794e48ee( X5, 
                                            l14337, 
                                            l14338, l14339, l14340 );
        X6 = qobischeme_k_2av( X4, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X6 );
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X5, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X10 = qobischeme_v_2d( X7, X3 );
        X9 = qobischeme_dot( X7, X10 );
        X10 = qobischeme_dot( X3, X3 );
        X8 = qobischeme__2f_2dtwo( X9, X10 );
        X10 = qobischeme_k_2av( X8, DISPLAY( 2 ) );
        X9 = qobischeme_v_2d( X10, X7 );
        X10 = qobischeme_distance( DISPLAY( 1 ), X5 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X10, x14336 ) ) )  goto L16182;
        DISPLAY( 2 ) = X9;
        X3 = X7;
        X2 = X6;
        DISPLAY( 1 ) = X5;
        GOBACK( L16171 );
L16182:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16172:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dad_g_2dtapes_v );
DEFCSTRING( t16184, "G-TAPES" );
EXTERNTSCPP( toollib_2dad_g_2dtapes, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dad_g_2dtapes_v );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );
EXTERNTSCPP( qobischeme_tape, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_tape_v );
EXTERNTSCP( qobischeme__2ae_2a_v );

TSCP  toollib_2dad_g_2dtapes( e14374 )
        TSCP  e14374;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16184 );
        X1 = BOOLEAN( EQ( TSCPTAG( e14374 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L16190;
        if  ( AND( EQ( TSCPTAG( e14374 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e14374 ), 
                       DOUBLEFLOATTAG ) ) )  goto L16190;
        if  ( NOT( AND( EQ( TSCPTAG( e14374 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e14374 ), 
                            VECTORTAG ) ) ) )  goto L16193;
        POPSTACKTRACE( qobischeme_map_2dvector( toollib_2dad_g_2dtapes_v, 
                                                e14374, EMPTYLIST ) );
L16193:
        if  ( FALSE( scrt1_list_3f( e14374 ) ) )  goto L16195;
        X2 = e14374;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L16199:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L16200;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L16203;
        scrt1__24__car_2derror( X2 );
L16203:
        X7 = PAIR_CAR( X2 );
        X6 = toollib_2dad_g_2dtapes( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L16206;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L16199 );
L16206:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L16211;
        scdebug_error( c13619, 
                       c13620, CONS( X4, EMPTYLIST ) );
L16211:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L16199 );
L16200:
        POPSTACKTRACE( X3 );
L16195:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L16190:
        POPSTACKTRACE( qobischeme_tape( qobischeme__2ae_2a_v, 
                                        e14374, 
                                        EMPTYLIST, EMPTYLIST ) );
}

DEFTSCP( llib_2dad_sitivities_a3c8c30a_v );
DEFCSTRING( t16213, "G-SENSITIVITIES" );
EXTERNTSCPP( qobischeme_tape_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_tape_3f_v );
EXTERNTSCPP( qobischeme_tape_2dsensitivity, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_tape_2dsensitivity_v );
EXTERNTSCPP( llib_2dad_sitivities_a3c8c30a, XAL1( TSCP ) );
EXTERNTSCP( llib_2dad_sitivities_a3c8c30a_v );

TSCP  llib_2dad_sitivities_a3c8c30a( e14430 )
        TSCP  e14430;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16213 );
        if  ( FALSE( qobischeme_tape_3f( e14430 ) ) )  goto L16215;
        POPSTACKTRACE( qobischeme_tape_2dsensitivity( e14430 ) );
L16215:
        if  ( NOT( AND( EQ( TSCPTAG( e14430 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( e14430 ), 
                            VECTORTAG ) ) ) )  goto L16217;
        POPSTACKTRACE( qobischeme_map_2dvector( llib_2dad_sitivities_a3c8c30a_v, 
                                                e14430, EMPTYLIST ) );
L16217:
        if  ( FALSE( scrt1_list_3f( e14430 ) ) )  goto L16219;
        X1 = e14430;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L16223:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L16224;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L16227;
        scrt1__24__car_2derror( X1 );
L16227:
        X6 = PAIR_CAR( X1 );
        X5 = llib_2dad_sitivities_a3c8c30a( X6 );
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L16230;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L16223 );
L16230:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L16235;
        scdebug_error( c13619, 
                       c13620, CONS( X3, EMPTYLIST ) );
L16235:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L16223 );
L16224:
        POPSTACKTRACE( X2 );
L16219:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
}

DEFTSCP( toollib_2dad_g_2ddot_v );
DEFCSTRING( t16237, "G-DOT" );
EXTERNTSCPP( qobischeme_reduce_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_2dvector_v );
EXTERNTSCPP( toollib_2dad_g_2ddot, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dad_g_2ddot_v );

TSCP  toollib_2dad_g_2ddot( a14476, b14477 )
        TSCP  a14476, b14477;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16237 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14476 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L16243;
        if  ( AND( EQ( TSCPTAG( a14476 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14476 ), 
                       DOUBLEFLOATTAG ) ) )  goto L16243;
        if  ( NOT( AND( EQ( TSCPTAG( a14476 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( a14476 ), 
                            VECTORTAG ) ) ) )  goto L16246;
        X2 = qobischeme_map_2dvector( toollib_2dad_g_2ddot_v, 
                                      a14476, 
                                      CONS( b14477, EMPTYLIST ) );
        POPSTACKTRACE( qobischeme_reduce_2dvector( qobischeme__2b_v, 
                                                   X2, _TSCP( 0 ) ) );
L16246:
        if  ( FALSE( scrt1_list_3f( a14476 ) ) )  goto L16248;
        X3 = a14476;
        X4 = b14477;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L16252:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L16253;
        X2 = X5;
        goto L16263;
L16253:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L16256;
        scrt1__24__car_2derror( X3 );
L16256:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L16259;
        scrt1__24__car_2derror( X4 );
L16259:
        X10 = PAIR_CAR( X4 );
        X8 = toollib_2dad_g_2ddot( X9, X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L16262;
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X9;
        X3 = X8;
        GOBACK( L16252 );
L16262:
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L16269;
        scdebug_error( c13619, 
                       c13620, CONS( X6, EMPTYLIST ) );
L16269:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X9;
        X3 = X8;
        GOBACK( L16252 );
L16263:
        POPSTACKTRACE( qobischeme_reduce( qobischeme__2b_v, 
                                          X2, _TSCP( 0 ) ) );
L16248:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L16243:
        POPSTACKTRACE( qobischeme__2a_2dtwo( a14476, b14477 ) );
}

DEFTSCP( toollib_2dad_g_2b_v );
DEFCSTRING( t16271, "G+" );
EXTERNTSCPP( toollib_2dad_g_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dad_g_2b_v );

TSCP  toollib_2dad_g_2b( a14551, b14552 )
        TSCP  a14551, b14552;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16271 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14551 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L16277;
        if  ( AND( EQ( TSCPTAG( a14551 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14551 ), 
                       DOUBLEFLOATTAG ) ) )  goto L16277;
        if  ( NOT( AND( EQ( TSCPTAG( a14551 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( a14551 ), 
                            VECTORTAG ) ) ) )  goto L16280;
        POPSTACKTRACE( qobischeme_map_2dvector( toollib_2dad_g_2b_v, 
                                                a14551, 
                                                CONS( b14552, 
                                                      EMPTYLIST ) ) );
L16280:
        if  ( FALSE( scrt1_list_3f( a14551 ) ) )  goto L16282;
        X2 = a14551;
        X3 = b14552;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L16286:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L16287;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L16290;
        scrt1__24__car_2derror( X2 );
L16290:
        X8 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L16293;
        scrt1__24__car_2derror( X3 );
L16293:
        X9 = PAIR_CAR( X3 );
        X7 = toollib_2dad_g_2b( X8, X9 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L16296;
        X7 = PAIR_CDR( X2 );
        X8 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X8;
        X2 = X7;
        GOBACK( L16286 );
L16296:
        X7 = PAIR_CDR( X2 );
        X8 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L16303;
        scdebug_error( c13619, 
                       c13620, CONS( X5, EMPTYLIST ) );
L16303:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X8;
        X2 = X7;
        GOBACK( L16286 );
L16287:
        POPSTACKTRACE( X4 );
L16282:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L16277:
        POPSTACKTRACE( qobischeme__2b_2dtwo( a14551, b14552 ) );
}

DEFTSCP( toollib_2dad_g_2d_v );
DEFCSTRING( t16305, "G-" );
EXTERNTSCPP( toollib_2dad_g_2d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dad_g_2d_v );

TSCP  toollib_2dad_g_2d( a14626, b14627 )
        TSCP  a14626, b14627;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16305 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14626 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L16311;
        if  ( AND( EQ( TSCPTAG( a14626 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14626 ), 
                       DOUBLEFLOATTAG ) ) )  goto L16311;
        if  ( NOT( AND( EQ( TSCPTAG( a14626 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( a14626 ), 
                            VECTORTAG ) ) ) )  goto L16314;
        POPSTACKTRACE( qobischeme_map_2dvector( toollib_2dad_g_2d_v, 
                                                a14626, 
                                                CONS( b14627, 
                                                      EMPTYLIST ) ) );
L16314:
        if  ( FALSE( scrt1_list_3f( a14626 ) ) )  goto L16316;
        X2 = a14626;
        X3 = b14627;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L16320:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L16321;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L16324;
        scrt1__24__car_2derror( X2 );
L16324:
        X8 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L16327;
        scrt1__24__car_2derror( X3 );
L16327:
        X9 = PAIR_CAR( X3 );
        X7 = toollib_2dad_g_2d( X8, X9 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L16330;
        X7 = PAIR_CDR( X2 );
        X8 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X8;
        X2 = X7;
        GOBACK( L16320 );
L16330:
        X7 = PAIR_CDR( X2 );
        X8 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L16337;
        scdebug_error( c13619, 
                       c13620, CONS( X5, EMPTYLIST ) );
L16337:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X8;
        X2 = X7;
        GOBACK( L16320 );
L16321:
        POPSTACKTRACE( X4 );
L16316:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L16311:
        POPSTACKTRACE( qobischeme__2d_2dtwo( a14626, b14627 ) );
}

DEFTSCP( toollib_2dad_k_2ag_v );
DEFCSTRING( t16339, "K*G" );
EXTERNTSCPP( toollib_2dad__2a14704, XAL2( TSCP, TSCP ) );

TSCP  toollib_2dad__2a14704( g14706, c16342 )
        TSCP  g14706, c16342;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "*G [inside K*G]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16342, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16342, 1 );
        X4 = BOOLEAN( EQ( TSCPTAG( g14706 ), FIXNUMTAG ) );
        if  ( TRUE( X4 ) )  goto L16348;
        if  ( AND( EQ( TSCPTAG( g14706 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( g14706 ), 
                       DOUBLEFLOATTAG ) ) )  goto L16348;
        if  ( NOT( AND( EQ( TSCPTAG( g14706 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( g14706 ), 
                            VECTORTAG ) ) ) )  goto L16351;
        X3 = qobischeme_map_2dvector( PAIR_CAR( DISPLAY( 1 ) ), 
                                      g14706, EMPTYLIST );
        goto L16371;
L16351:
        if  ( FALSE( scrt1_list_3f( g14706 ) ) )  goto L16353;
        X5 = PAIR_CAR( DISPLAY( 1 ) );
        X6 = g14706;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L16357:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L16358;
        X3 = X7;
        goto L16371;
L16358:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L16361;
        scrt1__24__car_2derror( X6 );
L16361:
        X11 = PAIR_CAR( X6 );
        X10 = toollib_2dad__2a14704( X11, 
                                     PROCEDURE_CLOSURE( X5 ) );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L16364;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L16357 );
L16364:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L16369;
        scdebug_error( c13619, 
                       c13620, CONS( X8, EMPTYLIST ) );
L16369:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L16357 );
L16353:
        X3 = qobischeme_fuck_2dup(  );
        goto L16371;
L16348:
        X3 = qobischeme__2a_2dtwo( DISPLAY( 0 ), g14706 );
L16371:
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dad_k_2ag( k14701, g14702 )
        TSCP  k14701, g14702;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16339 );
        DISPLAY( 0 ) = k14701;
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad__2a14704, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        SDVAL = toollib_2dad__2a14704( g14702, 
                                       PROCEDURE_CLOSURE( PAIR_CAR( DISPLAY( 1 ) ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dad_gradient_2dr_2dg_v );
DEFCSTRING( t16372, "GRADIENT-R-G" );
EXTERNTSCPP( qobischeme__3c__e, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c__e_v );
EXTERNTSCPP( qobischeme_tape_2depsilon, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_tape_2depsilon_v );
EXTERNTSCPP( obischeme_dfanout_21_9bbda769, XAL1( TSCP ) );
EXTERNTSCP( obischeme_dfanout_21_9bbda769_v );
EXTERNTSCPP( qobischeme_reverse_2dphase_21, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reverse_2dphase_21_v );

TSCP  toollib_2dad_l14766( a14767, c16374 )
        TSCP  a14767, c16374;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l14766 [inside GRADIENT-R-G]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16374, 0 );
        qobischeme__2ae_2a_v = qobischeme__2b_2dtwo( qobischeme__2ae_2a_v, 
                                                     _TSCP( 4 ) );
        X3 = toollib_2dad_g_2dtapes( a14767 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X3, 
                                          PROCEDURE_CLOSURE( X5 ) );
        if  ( FALSE( qobischeme_tape_3f( X4 ) ) )  goto L16380;
        X5 = qobischeme_tape_2depsilon( X4 );
        if  ( TRUE( qobischeme__3c__e( X5, qobischeme__2ae_2a_v ) )
            )  goto L16380;
        obischeme_dfanout_21_9bbda769( X4 );
        qobischeme_reverse_2dphase_21( _TSCP( 4 ), X4 );
L16380:
        qobischeme__2ae_2a_v = qobischeme__2d_2dtwo( qobischeme__2ae_2a_v, 
                                                     _TSCP( 4 ) );
        X2 = llib_2dad_sitivities_a3c8c30a( X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dad_gradient_2dr_2dg( f14765 )
        TSCP  f14765;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16372 );
        DISPLAY( 0 ) = f14765;
        SDVAL = MAKEPROCEDURE( 1, 
                               0, 
                               toollib_2dad_l14766, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dad_g_2dmagnitude_v );
DEFCSTRING( t16383, "G-MAGNITUDE" );

TSCP  toollib_2dad_g_2dmagnitude( g14784 )
        TSCP  g14784;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16383 );
        X1 = toollib_2dad_g_2ddot( g14784, g14784 );
        POPSTACKTRACE( qobischeme_sqrt( X1 ) );
}

DEFTSCP( toollib_2dad_g_2ddistance_v );
DEFCSTRING( t16385, "G-DISTANCE" );

TSCP  toollib_2dad_g_2ddistance( a14786, b14787 )
        TSCP  a14786, b14787;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16385 );
        X1 = toollib_2dad_g_2d( b14787, a14786 );
        POPSTACKTRACE( toollib_2dad_g_2dmagnitude( X1 ) );
}

DEFTSCP( toollib_2dad_golden_2dsection_v );
DEFCSTRING( t16387, "GOLDEN-SECTION" );
EXTERNTSCPP( qobischeme__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_2dtwo_v );

TSCP  toollib_2dad_golden_2dsection( f14789, 
                                     t14790, 
                                     a14791, 
                                     b14792, c14793, k14794 )
        TSCP  f14789, 
              t14790, a14791, b14792, c14793, k14794;
{
        TSCP  X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16387 );
        X1 = qobischeme__2d_2dtwo( c14939, c14935 );
        X2 = qobischeme__2d_2dtwo( c14935, X1 );
        X5 = qobischeme__2d_2dtwo( c14793, b14792 );
        if  ( NEQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L16394;
        if  ( FALSE( qobischeme_negative_3f( X5 ) ) )  goto L16396;
        X4 = _TSCP( INEGATE( _S2CINT( X5 ) ) );
        goto L16395;
L16396:
        X4 = X5;
        goto L16395;
L16394:
        X4 = scrt2_abs( X5 );
L16395:
        X6 = qobischeme__2d_2dtwo( b14792, a14791 );
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L16399;
        if  ( FALSE( qobischeme_negative_3f( X6 ) ) )  goto L16401;
        X5 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
        goto L16400;
L16401:
        X5 = X6;
        goto L16400;
L16399:
        X5 = scrt2_abs( X6 );
L16400:
        if  ( FALSE( qobischeme__3e_2dtwo( X4, X5 ) ) )  goto L16391;
        X3 = b14792;
        goto L16392;
L16391:
        X5 = qobischeme__2d_2dtwo( b14792, a14791 );
        X4 = qobischeme__2a_2dtwo( X2, X5 );
        X3 = qobischeme__2d_2dtwo( b14792, X4 );
L16392:
        X6 = qobischeme__2d_2dtwo( c14793, b14792 );
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L16407;
        if  ( FALSE( qobischeme_negative_3f( X6 ) ) )  goto L16409;
        X5 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
        goto L16408;
L16409:
        X5 = X6;
        goto L16408;
L16407:
        X5 = scrt2_abs( X6 );
L16408:
        X7 = qobischeme__2d_2dtwo( b14792, a14791 );
        if  ( NEQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L16412;
        if  ( FALSE( qobischeme_negative_3f( X7 ) ) )  goto L16414;
        X6 = _TSCP( INEGATE( _S2CINT( X7 ) ) );
        goto L16413;
L16414:
        X6 = X7;
        goto L16413;
L16412:
        X6 = scrt2_abs( X7 );
L16413:
        if  ( FALSE( qobischeme__3e_2dtwo( X5, X6 ) ) )  goto L16404;
        X6 = qobischeme__2d_2dtwo( c14793, b14792 );
        X5 = qobischeme__2a_2dtwo( X2, X6 );
        X4 = qobischeme__2b_2dtwo( b14792, X5 );
        goto L16405;
L16404:
        X4 = b14792;
L16405:
        X5 = a14791;
        X6 = X3;
        X8 = f14789;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X3, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X8 = X4;
        X10 = f14789;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X4, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X10 = c14793;
L16418:
        X12 = qobischeme__2d_2dtwo( X10, X5 );
        if  ( NEQ( TSCPTAG( X12 ), FIXNUMTAG ) )  goto L16422;
        if  ( FALSE( qobischeme_negative_3f( X12 ) ) )  goto L16424;
        X11 = _TSCP( INEGATE( _S2CINT( X12 ) ) );
        goto L16423;
L16424:
        X11 = X12;
        goto L16423;
L16422:
        X11 = scrt2_abs( X12 );
L16423:
        if  ( NEQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L16426;
        if  ( FALSE( qobischeme_negative_3f( X6 ) ) )  goto L16428;
        X14 = _TSCP( INEGATE( _S2CINT( X6 ) ) );
        goto L16427;
L16428:
        X14 = X6;
        goto L16427;
L16426:
        X14 = scrt2_abs( X6 );
L16427:
        if  ( NEQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L16430;
        if  ( FALSE( qobischeme_negative_3f( X8 ) ) )  goto L16432;
        X15 = _TSCP( INEGATE( _S2CINT( X8 ) ) );
        goto L16431;
L16432:
        X15 = X8;
        goto L16431;
L16430:
        X15 = scrt2_abs( X8 );
L16431:
        X13 = qobischeme__2b_2dtwo( X14, X15 );
        X12 = qobischeme__2a_2dtwo( t14790, X13 );
        if  ( FALSE( qobischeme__3c_3d_2dtwo( X11, X12 ) ) )  goto L16419;
        if  ( FALSE( qobischeme__3c_2dtwo( X7, X9 ) ) )  goto L16434;
        X11 = k14794;
        X11 = UNKNOWNCALL( X11, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X11 ) )( X6, 
                                                     X7, 
                                                     PROCEDURE_CLOSURE( X11 ) ) );
L16434:
        X11 = k14794;
        X11 = UNKNOWNCALL( X11, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X11 ) )( X8, 
                                                     X9, 
                                                     PROCEDURE_CLOSURE( X11 ) ) );
L16419:
        if  ( FALSE( qobischeme__3c_2dtwo( X9, X7 ) ) )  goto L16436;
        X12 = qobischeme__2a_2dtwo( X1, X8 );
        X13 = qobischeme__2a_2dtwo( X2, X10 );
        X11 = qobischeme__2b_2dtwo( X12, X13 );
        X12 = X6;
        X13 = X8;
        X14 = X9;
        X16 = f14789;
        X16 = UNKNOWNCALL( X16, 1 );
        X15 = VIA( PROCEDURE_CODE( X16 ) )( X11, 
                                            PROCEDURE_CLOSURE( X16 ) );
        X9 = X15;
        X8 = X11;
        X7 = X14;
        X6 = X13;
        X5 = X12;
        GOBACK( L16418 );
L16436:
        X12 = qobischeme__2a_2dtwo( X1, X6 );
        X13 = qobischeme__2a_2dtwo( X2, X5 );
        X11 = qobischeme__2b_2dtwo( X12, X13 );
        X13 = f14789;
        X13 = UNKNOWNCALL( X13, 1 );
        X12 = VIA( PROCEDURE_CODE( X13 ) )( X11, 
                                            PROCEDURE_CLOSURE( X13 ) );
        X10 = X8;
        X9 = X7;
        X8 = X6;
        X7 = X12;
        X6 = X11;
        GOBACK( L16418 );
}

DEFTSCP( llib_2dad_argmin_2dr_55c193fc_v );
DEFCSTRING( t16440, "CYCLIC-MULTIVARIATE-ARGMIN-R" );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );

TSCP  toollib_2dad_l15019( i15020, c16446 )
        TSCP  i15020, c16446;
{
        PUSHSTACKTRACE( "toollib_2dad_l15019 [inside CYCLIC-MULTIVARIATE-ARG\
MIN-R]" );
        POPSTACKTRACE( c15021 );
}

TSCP  toollib_2dad_l15022( i15023, c16448 )
        TSCP  i15023, c16448;
{
        PUSHSTACKTRACE( "toollib_2dad_l15022 [inside CYCLIC-MULTIVARIATE-ARG\
MIN-R]" );
        POPSTACKTRACE( _TSCP( 4 ) );
}

EXTERNTSCP( ib_2dmisc_ging_3f_2a_f4a9801b_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt1_list_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dref_v );
EXTERNTSCPP( qobischeme__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt2_modulo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_modulo_v );
EXTERNTSCPP( qobischeme_list_2dreplace, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_list_2dreplace_v );

TSCP  llib_2dad_argmin_2dr_55c193fc( f14941, x14942, d14943 )
        TSCP  f14941, x14942, d14943;
{
        TSCP  X20, 
              X19, 
              X18, 
              X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16440 );
        if  ( AND( EQ( TSCPTAG( d14943 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( d14943 ), VECTORTAG ) )
            )  goto L16443;
        scdebug_error( c14238, 
                       c14239, CONS( d14943, EMPTYLIST ) );
L16443:
        X1 = C_FIXED( VECTOR_LENGTH( d14943 ) );
        X2 = qobischeme_gradient_2dr( f14941 );
        X4 = f14941;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x14942, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X5 = X2;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( x14942, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = MAKEPROCEDURE( 1, 
                            0, toollib_2dad_l15019, EMPTYLIST );
        X5 = qobischeme_map_2dn( X6, X1 );
        X7 = MAKEPROCEDURE( 1, 
                            0, toollib_2dad_l15022, EMPTYLIST );
        X6 = qobischeme_map_2dn( X7, X1 );
        X7 = x14942;
        X8 = X3;
        X9 = X4;
        X10 = X5;
        X11 = X6;
        X12 = _TSCP( 0 );
        X13 = _TSCP( 0 );
L16452:
        if  ( FALSE( ib_2dmisc_ging_3f_2a_f4a9801b_v ) )  goto L16453;
        X14 = CONS( X13, EMPTYLIST );
        X14 = CONS( X12, X14 );
        X14 = CONS( X11, X14 );
        X14 = CONS( X10, X14 );
        X14 = CONS( X9, X14 );
        X14 = CONS( X8, X14 );
        X14 = CONS( X7, X14 );
        scrt6_format( TRUEVALUE, CONS( c14965, X14 ) );
L16453:
        X16 = scrt1_list_2dref( X10, X12 );
        if  ( EQ( TSCPTAG( X12 ), FIXNUMTAG ) )  goto L16456;
        scdebug_error( c15011, 
                       c15014, CONS( X12, EMPTYLIST ) );
L16456:
        if  ( LT( _S2CUINT( FIXED_C( X12 ) ), 
                  _S2CUINT( VECTOR_LENGTH( d14943 ) ) ) )  goto L16458;
        scdebug_error( c15011, 
                       c15018, CONS( X12, EMPTYLIST ) );
L16458:
        X18 = VECTOR_ELEMENT( d14943, X12 );
        X17 = qobischeme_map_2dvector( qobischeme__2a_v, 
                                       X18, 
                                       CONS( X9, EMPTYLIST ) );
        X15 = qobischeme_k_2av( X16, X17 );
        X14 = qobischeme_v_2d( X7, X15 );
        X15 = qobischeme_distance( X7, X14 );
        if  ( FALSE( qobischeme__3c_3d_2dtwo( X15, c14971 ) )
            )  goto L16461;
        if  ( FALSE( ib_2dmisc_ging_3f_2a_f4a9801b_v ) )  goto L16464;
        X15 = CONS( qobischeme_distance( X7, X14 ), 
                    EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c14996, X15 ) );
L16464:
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X13, X1 ) ) )  goto L16466;
        X16 = qobischeme__2b_2dtwo( X12, _TSCP( 4 ) );
        X15 = scrt2_modulo( X16, X1 );
        X13 = qobischeme__2b_2dtwo( X13, _TSCP( 4 ) );
        X12 = X15;
        GOBACK( L16452 );
L16466:
        POPSTACKTRACE( X7 );
L16461:
        X16 = f14941;
        X16 = UNKNOWNCALL( X16, 1 );
        X15 = VIA( PROCEDURE_CODE( X16 ) )( X14, 
                                            PROCEDURE_CLOSURE( X16 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X15, X8 ) ) )  goto L16469;
        X16 = scrt1_list_2dref( X11, X12 );
        if  ( FALSE( qobischeme__3d_2dtwo( X16, _TSCP( 8 ) ) )
            )  goto L16471;
        X17 = X2;
        X17 = UNKNOWNCALL( X17, 1 );
        X16 = VIA( PROCEDURE_CODE( X17 ) )( X14, 
                                            PROCEDURE_CLOSURE( X17 ) );
        X19 = scrt1_list_2dref( X10, X12 );
        X18 = qobischeme__2a_2dtwo( c13907, X19 );
        X17 = qobischeme_list_2dreplace( X10, X12, X18 );
        X18 = qobischeme_list_2dreplace( X11, X12, _TSCP( 0 ) );
        X20 = qobischeme__2b_2dtwo( X12, _TSCP( 4 ) );
        X19 = scrt2_modulo( X20, X1 );
        X13 = _TSCP( 0 );
        X12 = X19;
        X11 = X18;
        X10 = X17;
        X9 = X16;
        X8 = X15;
        X7 = X14;
        GOBACK( L16452 );
L16471:
        X17 = X2;
        X17 = UNKNOWNCALL( X17, 1 );
        X16 = VIA( PROCEDURE_CODE( X17 ) )( X14, 
                                            PROCEDURE_CLOSURE( X17 ) );
        X19 = scrt1_list_2dref( X11, X12 );
        X18 = qobischeme__2b_2dtwo( X19, _TSCP( 4 ) );
        X17 = qobischeme_list_2dreplace( X11, X12, X18 );
        X19 = qobischeme__2b_2dtwo( X12, _TSCP( 4 ) );
        X18 = scrt2_modulo( X19, X1 );
        X13 = _TSCP( 0 );
        X12 = X18;
        X11 = X17;
        X9 = X16;
        X8 = X15;
        X7 = X14;
        GOBACK( L16452 );
L16469:
        X18 = scrt1_list_2dref( X10, X12 );
        X17 = qobischeme__2f_2dtwo( X18, c13907 );
        X16 = qobischeme_list_2dreplace( X10, X12, X17 );
        X17 = qobischeme_list_2dreplace( X11, X12, _TSCP( 0 ) );
        X13 = _TSCP( 0 );
        X11 = X17;
        X10 = X16;
        GOBACK( L16452 );
}

DEFTSCP( llib_2dad__2dmin_2dr_417c088_v );
DEFCSTRING( t16473, "CYCLIC-MULTIVARIATE-MIN-R" );

TSCP  llib_2dad__2dmin_2dr_417c088( f15029, x15030, d15031 )
        TSCP  f15029, x15030, d15031;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t16473 );
        X2 = llib_2dad_argmin_2dr_55c193fc( f15029, x15030, d15031 );
        X1 = f15029;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( llib_2dad_argmax_2dr_563273b3_v );
DEFCSTRING( t16475, "CYCLIC-MULTIVARIATE-ARGMAX-R" );

TSCP  toollib_2dad_l15036( x15037, c16477 )
        TSCP  x15037, c16477;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15036 [inside CYCLIC-MULTIVARIATE-ARG\
MAX-R]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16477, 0 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x15037, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  llib_2dad_argmax_2dr_563273b3( f15033, x15034, d15035 )
        TSCP  f15033, x15034, d15035;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16475 );
        DISPLAY( 0 ) = f15033;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l15036, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = llib_2dad_argmin_2dr_55c193fc( X1, x15034, d15035 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad__2dmax_2dr_7e420c7_v );
DEFCSTRING( t16479, "CYCLIC-MULTIVARIATE-MAX-R" );

TSCP  llib_2dad__2dmax_2dr_7e420c7( f15042, x15043, d15044 )
        TSCP  f15042, x15043, d15044;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t16479 );
        X2 = llib_2dad_argmax_2dr_563273b3( f15042, x15043, d15044 );
        X1 = f15042;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( llib_2dad__2dhessian_99589b24_v );
DEFCSTRING( t16481, "IDENTITY-HESSIAN" );
EXTERNTSCPP( qobischeme_identity_2dmatrix, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_identity_2dmatrix_v );

TSCP  llib_2dad__2dhessian_99589b24( v15046 )
        TSCP  v15046;
{
        TSCP  X1;

        PUSHSTACKTRACE( t16481 );
        if  ( AND( EQ( TSCPTAG( v15046 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v15046 ), VECTORTAG ) )
            )  goto L16484;
        scdebug_error( c14238, 
                       c14239, CONS( v15046, EMPTYLIST ) );
L16484:
        X1 = C_FIXED( VECTOR_LENGTH( v15046 ) );
        POPSTACKTRACE( qobischeme_identity_2dmatrix( X1 ) );
}

DEFTSCP( toollib_2dad_naive_2dbfgs_v );
DEFCSTRING( t16486, "NAIVE-BFGS" );
EXTERNTSCPP( qobischeme_unit, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_unit_v );
EXTERNTSCPP( llib_2dad_d_2dgolden_7d0040ae, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( llib_2dad_d_2dgolden_7d0040ae_v );

TSCP  toollib_2dad_l15076( a15077, c16491 )
        TSCP  a15077, c16491;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15076 [inside NAIVE-BFGS]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16491, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16491, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16491, 2 );
        X7 = qobischeme_k_2av( a15077, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( qobischeme_m_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2b_v );
EXTERNTSCPP( qobischeme_m_2d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2d_v );
EXTERNTSCPP( toollib_2dmisc_m_2fk, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_m_2fk_v );
EXTERNTSCPP( obischeme__2dproduct_d0bc63f0, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dproduct_d0bc63f0_v );
EXTERNTSCPP( qobischeme_m_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2av_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( qobischeme_invert_2dmatrix, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_invert_2dmatrix_v );

TSCP  toollib_2dad_naive_2dbfgs( f15052, x15053 )
        TSCP  f15052, x15053;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16486 );
        DISPLAY( 0 ) = f15052;
        X1 = toollib_2dad_gradient_2dr_2dg( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x15053;
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x15053, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X2 = qobischeme_k_2av( _TSCP( -4 ), X3 );
        DISPLAY( 2 ) = qobischeme_unit( X2 );
        X2 = llib_2dad__2dhessian_99589b24( x15053 );
L16490:
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l15076, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = llib_2dad_d_2dgolden_7d0040ae( X4, 
                                            _TSCP( 0 ), _TSCP( 40 ) );
        X4 = qobischeme_k_2av( X3, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X4 );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = X1;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( DISPLAY( 1 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        X6 = qobischeme_v_2d( X7, X8 );
        X10 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X6 );
        X11 = qobischeme_dot( X6, X4 );
        X9 = toollib_2dmisc_m_2fk( X10, X11 );
        X12 = qobischeme_m_2av( X2, X4 );
        X11 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X12 );
        X13 = qobischeme_m_2av( X2, X4 );
        X12 = qobischeme_dot( X4, X13 );
        X10 = toollib_2dmisc_m_2fk( X11, X12 );
        X8 = qobischeme_m_2d( X9, X10 );
        X7 = qobischeme_m_2b( X2, X8 );
        X9 = qobischeme_v_2d( DISPLAY( 1 ), X5 );
        X8 = qobischeme_magnitude( X9 );
        if  ( FALSE( qobischeme__3c_2dtwo( X8, c14330 ) ) )  goto L16498;
        X9 = DISPLAY( 0 );
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X5, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        SDVAL = scrt1_cons_2a( X8, CONS( X5, X9 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16498:
        X9 = qobischeme_invert_2dmatrix( X7 );
        X13 = X1;
        X13 = UNKNOWNCALL( X13, 1 );
        X12 = VIA( PROCEDURE_CODE( X13 ) )( X5, 
                                            PROCEDURE_CLOSURE( X13 ) );
        X11 = qobischeme_k_2av( _TSCP( -4 ), X12 );
        X10 = qobischeme_unit( X11 );
        X8 = qobischeme_m_2av( X9, X10 );
        X2 = X7;
        DISPLAY( 2 ) = X8;
        DISPLAY( 1 ) = X5;
        GOBACK( L16490 );
}

DEFTSCP( toollib_2dad_bfgs_v );
DEFCSTRING( t16500, "BFGS" );

TSCP  toollib_2dad_l15105( a15106, c16505 )
        TSCP  a15106, c16505;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15105 [inside BFGS]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16505, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16505, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16505, 2 );
        X7 = qobischeme_k_2av( a15106, DISPLAY( 2 ) );
        X6 = qobischeme_v_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( qobischeme_k_2am, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_k_2am_v );
EXTERNTSCPP( toollib_2dmisc_v_2am_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_v_2am_2av_v );
EXTERNTSCPP( qobischeme_m_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2a_v );
EXTERNTSCPP( qobischeme_outer_2dproduct, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_outer_2dproduct_v );

TSCP  toollib_2dad_bfgs( f15079, x15080 )
        TSCP  f15079, x15080;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16500 );
        DISPLAY( 0 ) = f15079;
        X1 = toollib_2dad_gradient_2dr_2dg( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x15080;
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x15080, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X2 = qobischeme_k_2av( _TSCP( -4 ), X3 );
        DISPLAY( 2 ) = qobischeme_unit( X2 );
        X2 = llib_2dad__2dhessian_99589b24( x15080 );
L16504:
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l15105, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = llib_2dad_d_2dgolden_7d0040ae( X4, 
                                            _TSCP( 0 ), _TSCP( 40000 ) );
        X4 = qobischeme_k_2av( X3, DISPLAY( 2 ) );
        X5 = qobischeme_v_2b( DISPLAY( 1 ), X4 );
        X8 = X1;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X5, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = X1;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( DISPLAY( 1 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        X6 = qobischeme_v_2d( X7, X8 );
        X12 = qobischeme_dot( X4, X6 );
        X13 = toollib_2dmisc_v_2am_2av( X6, X2 );
        X11 = qobischeme__2b_2dtwo( X12, X13 );
        X12 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X4 );
        X10 = qobischeme_k_2am( X11, X12 );
        X12 = qobischeme_dot( X4, X6 );
        X11 = qobischeme_sqr( X12 );
        X9 = toollib_2dmisc_m_2fk( X10, X11 );
        X13 = qobischeme_outer_2dproduct( qobischeme__2a_v, X6, X4 );
        X12 = qobischeme_m_2a( X2, X13 );
        X14 = qobischeme_outer_2dproduct( qobischeme__2a_v, X6, X4 );
        X13 = qobischeme_m_2a( X14, X2 );
        X11 = qobischeme_m_2b( X12, X13 );
        X12 = qobischeme_dot( X4, X6 );
        X10 = toollib_2dmisc_m_2fk( X11, X12 );
        X8 = qobischeme_m_2d( X9, X10 );
        X7 = qobischeme_m_2b( X2, X8 );
        X9 = qobischeme_v_2d( DISPLAY( 1 ), X5 );
        X8 = qobischeme_magnitude( X9 );
        if  ( TRUE( qobischeme__3c_2dtwo( X8, c14330 ) ) )  goto L16512;
        X12 = X1;
        X12 = UNKNOWNCALL( X12, 1 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( X5, 
                                            PROCEDURE_CLOSURE( X12 ) );
        X10 = qobischeme_k_2av( _TSCP( -4 ), X11 );
        X9 = qobischeme_unit( X10 );
        X8 = qobischeme_m_2av( X7, X9 );
        X2 = X7;
        DISPLAY( 2 ) = X8;
        DISPLAY( 1 ) = X5;
        GOBACK( L16504 );
L16512:
        SDVAL = X5;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_rgmin_2dpr_8a7ba088_v );
DEFCSTRING( t16514, "MULTIVARIATE-GENERIC-ARGMIN-PR" );

TSCP  toollib_2dad_l15167( v15168, c16523 )
        TSCP  v15168, c16523;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15167 [inside MULTIVARIATE-GENERIC-AR\
GMIN-PR]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16523, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16523, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16523, 2 );
        X7 = toollib_2dad_k_2ag( v15168, DISPLAY( 2 ) );
        X6 = toollib_2dad_g_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_rgmin_2dpr_8a7ba088( f15109, 
                                     x15110, 
                                     s15111, 
                                     g15112, 
                                     x15113, 
                                     l15114, 
                                     l15115, 
                                     l15116, 
                                     l15117, i15118, r15119 )
        TSCP  f15109, 
              x15110, 
              s15111, 
              g15112, 
              x15113, 
              l15114, 
              l15115, l15116, l15117, i15118, r15119;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16514 );
        DISPLAY( 0 ) = f15109;
        X1 = toollib_2dad_gradient_2dr_2dg( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x15110;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15110, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x15110, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( FALSE( s15111 ) )  goto L16518;
        DISPLAY( 2 ) = s15111;
        goto L16519;
L16518:
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        DISPLAY( 2 ) = VIA( PROCEDURE_CODE( X4 ) )( x15110, 
                                                    PROCEDURE_CLOSURE( X4 ) );
L16519:
        X4 = _TSCP( 0 );
L16520:
        X5 = toollib_2dad_g_2dmagnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X5, g15112 ) ) )  goto L16521;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l15167, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X5 = llib_2dad_rgs_2dline_794e48ee( X6, 
                                            l15114, 
                                            l15115, l15116, l15117 );
        X7 = toollib_2dad_k_2ag( X5, DISPLAY( 2 ) );
        X6 = toollib_2dad_g_2b( DISPLAY( 1 ), X7 );
        X8 = DISPLAY( 0 );
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X6, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = X1;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X6, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X11 = toollib_2dad_g_2d( X8, X3 );
        X10 = toollib_2dad_g_2ddot( X8, X11 );
        X11 = toollib_2dad_g_2ddot( X3, X3 );
        X9 = qobischeme__2f_2dtwo( X10, X11 );
        X11 = toollib_2dad_k_2ag( X9, DISPLAY( 2 ) );
        X10 = toollib_2dad_g_2d( X11, X8 );
        X12 = toollib_2dad_g_2ddistance( DISPLAY( 1 ), X6 );
        X11 = qobischeme__3c_3d_2dtwo( X12, x15113 );
        if  ( TRUE( X11 ) )  goto L16535;
        if  ( TRUE( qobischeme__3c_3d_2dtwo( i15118, X4 ) ) )  goto L16535;
        X14 = qobischeme__2b_2dtwo( _TSCP( 4 ), i15118 );
        X13 = scrt2_modulo( X14, r15119 );
        if  ( FALSE( qobischeme__3d_2dtwo( X13, _TSCP( 0 ) ) )
            )  goto L16538;
        X12 = X8;
        goto L16539;
L16538:
        X12 = X10;
L16539:
        X4 = qobischeme__2b_2dtwo( _TSCP( 4 ), X4 );
        DISPLAY( 2 ) = X12;
        X3 = X8;
        X2 = X7;
        DISPLAY( 1 ) = X6;
        GOBACK( L16520 );
L16521:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16535:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dad_collapse_v );
DEFCSTRING( t16540, "COLLAPSE" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );
EXTERNTSCPP( qobischeme_remove_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );

TSCP  toollib_2dad_l15218( a15219, c16542 )
        TSCP  a15219, c16542;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dad_l15218 [inside COLLAPSE]" );
        X1 = qobischeme_first( a15219 );
        POPSTACKTRACE( qobischeme__3d_2dtwo( _TSCP( 0 ), X1 ) );
}

EXTERNTSCPP( toollib_2dmisc_zip, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_zip_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );
EXTERNTSCPP( qobischeme_second, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_second_v );

TSCP  toollib_2dad_collapse( d15174, i15175 )
        TSCP  d15174, i15175;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16540 );
        X3 = MAKEPROCEDURE( 1, 
                            0, toollib_2dad_l15218, EMPTYLIST );
        X5 = scrt4_vector_2d_3elist( d15174 );
        X6 = scrt4_vector_2d_3elist( i15175 );
        X4 = toollib_2dmisc_zip( X5, X6, EMPTYLIST );
        X2 = qobischeme_remove_2dif( X3, X4 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L16546:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L16547;
        X1 = X4;
        goto L16554;
L16547:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L16550;
        scrt1__24__car_2derror( X3 );
L16550:
        X8 = PAIR_CAR( X3 );
        X7 = qobischeme_second( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L16553;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L16546 );
L16553:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L16558;
        scdebug_error( c13619, 
                       c13620, CONS( X5, EMPTYLIST ) );
L16558:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L16546 );
L16554:
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dad_extend_v );
DEFCSTRING( t16560, "EXTEND" );

TSCP  toollib_2dad_l15229( d15230, i15231, c16563 )
        TSCP  d15230, i15231, c16563;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15229 [inside EXTEND]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16563, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16563, 1 );
        if  ( FALSE( qobischeme__3d_2dtwo( d15230, _TSCP( 0 ) ) )
            )  goto L16565;
        X3 = i15231;
        goto L16566;
L16565:
        X4 = qobischeme__2b_2dtwo( PAIR_CAR( DISPLAY( 1 ) ), 
                                   _TSCP( 4 ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X4 );
        X4 = DISPLAY( 0 );
        X5 = qobischeme__2d_2dtwo( PAIR_CAR( DISPLAY( 1 ) ), 
                                   _TSCP( 4 ) );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L16569;
        scdebug_error( c15011, 
                       c14239, CONS( X4, EMPTYLIST ) );
L16569:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L16571;
        scdebug_error( c15011, 
                       c15014, CONS( X5, EMPTYLIST ) );
L16571:
        if  ( LT( _S2CUINT( FIXED_C( X5 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L16573;
        scdebug_error( c15011, 
                       c15018, CONS( X5, EMPTYLIST ) );
L16573:
        X3 = VECTOR_ELEMENT( X4, X5 );
L16566:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dad_extend( a15224, d15225, i15226 )
        TSCP  a15224, d15225, i15226;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16560 );
        DISPLAY( 0 ) = a15224;
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dad_l15229, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, 
                                         d15225, 
                                         CONS( i15226, EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_ddirection_84e72b04_v );
DEFCSTRING( t16575, "SPLIT-ALONG-DIRECTION" );

TSCP  toollib_2dad_l15256( a15257, c16577 )
        TSCP  a15257, c16577;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15256 [inside SPLIT-ALONG-DIRECTION]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16577, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16577, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16577, 2 );
        X6 = toollib_2dad_extend( a15257, 
                                  DISPLAY( 2 ), 
                                  DISPLAY( 1 ) );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  llib_2dad_ddirection_84e72b04( f15253, i15254, d15255 )
        TSCP  f15253, i15254, d15255;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16575 );
        DISPLAY( 0 ) = f15253;
        DISPLAY( 1 ) = i15254;
        DISPLAY( 2 ) = d15255;
        X1 = toollib_2dad_collapse( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        SDVAL = scrt1_cons_2a( X1, 
                               CONS( MAKEPROCEDURE( 1, 
                                                    0, 
                                                    toollib_2dad_l15256, 
                                                    MAKECLOSURE( EMPTYLIST, 
                                                                 3, 
                                                                 DISPLAY( 1 ), 
                                                                 DISPLAY( 2 ), 
                                                                 DISPLAY( 0 ) ) ), 
                                     X2 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_directions_9b000b59_v );
DEFCSTRING( t16579, "ALONG-DIRECTIONS" );
EXTERNTSCPP( toollib_2dmisc_foldl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldl_v );

TSCP  toollib_2dad_l15263( i15264, d15265, c16581 )
        TSCP  i15264, d15265, c16581;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15263 [inside ALONG-DIRECTIONS]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16581, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16581, 1 );
        X4 = llib_2dad_ddirection_84e72b04( DISPLAY( 1 ), 
                                            i15264, d15265 );
        X5 = CONS( d15265, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c15268, X5 ) );
        X7 = qobischeme_first( X4 );
        X8 = qobischeme_second( X4 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          X8, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = toollib_2dad_extend( X5, d15265, i15264 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  llib_2dad_directions_9b000b59( f15259, 
                                     g15260, d15261, i15262 )
        TSCP  f15259, g15260, d15261, i15262;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16579 );
        DISPLAY( 0 ) = f15259;
        DISPLAY( 1 ) = g15260;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dad_l15263, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_foldl( X1, d15261, i15262 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_directions_c71ec2ad_v );
DEFCSTRING( t16584, "OPTIMIZE-ALONG-DIRECTIONS" );

TSCP  llib_2dad_directions_c71ec2ad( f15270, 
                                     g15271, 
                                     d15272, i15273, s15274 )
        TSCP  f15270, g15271, d15272, i15273, s15274;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t16584 );
L16585:
        X1 = llib_2dad_directions_9b000b59( f15270, 
                                            g15271, d15272, i15273 );
        X2 = s15274;
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( i15273, 
                                                 X1, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L16587;
        i15273 = X1;
        GOBACK( L16585 );
L16587:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dad_my_2dgolden_v );
DEFCSTRING( t16589, "MY-GOLDEN" );

TSCP  toollib_2dad_my_2dgolden( f15278, 
                                t15279, 
                                a15280, b15281, c15282, k15283 )
        TSCP  f15278, 
              t15279, a15280, b15281, c15282, k15283;
{
        TSCP  X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16589 );
        X5 = qobischeme__2d_2dtwo( c14939, c14935 );
        X6 = qobischeme__2d_2dtwo( c14935, X5 );
        X9 = qobischeme__2d_2dtwo( c15282, b15281 );
        if  ( NEQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L16596;
        if  ( FALSE( qobischeme_negative_3f( X9 ) ) )  goto L16598;
        X8 = _TSCP( INEGATE( _S2CINT( X9 ) ) );
        goto L16597;
L16598:
        X8 = X9;
        goto L16597;
L16596:
        X8 = scrt2_abs( X9 );
L16597:
        X10 = qobischeme__2d_2dtwo( b15281, a15280 );
        if  ( NEQ( TSCPTAG( X10 ), FIXNUMTAG ) )  goto L16601;
        if  ( FALSE( qobischeme_negative_3f( X10 ) ) )  goto L16603;
        X9 = _TSCP( INEGATE( _S2CINT( X10 ) ) );
        goto L16602;
L16603:
        X9 = X10;
        goto L16602;
L16601:
        X9 = scrt2_abs( X10 );
L16602:
        if  ( FALSE( qobischeme__3e_2dtwo( X8, X9 ) ) )  goto L16593;
        X7 = b15281;
        goto L16594;
L16593:
        X9 = qobischeme__2d_2dtwo( b15281, a15280 );
        X8 = qobischeme__2a_2dtwo( X6, X9 );
        X7 = qobischeme__2d_2dtwo( b15281, X8 );
L16594:
        X10 = qobischeme__2d_2dtwo( c15282, b15281 );
        if  ( NEQ( TSCPTAG( X10 ), FIXNUMTAG ) )  goto L16609;
        if  ( FALSE( qobischeme_negative_3f( X10 ) ) )  goto L16611;
        X9 = _TSCP( INEGATE( _S2CINT( X10 ) ) );
        goto L16610;
L16611:
        X9 = X10;
        goto L16610;
L16609:
        X9 = scrt2_abs( X10 );
L16610:
        X11 = qobischeme__2d_2dtwo( b15281, a15280 );
        if  ( NEQ( TSCPTAG( X11 ), FIXNUMTAG ) )  goto L16614;
        if  ( FALSE( qobischeme_negative_3f( X11 ) ) )  goto L16616;
        X10 = _TSCP( INEGATE( _S2CINT( X11 ) ) );
        goto L16615;
L16616:
        X10 = X11;
        goto L16615;
L16614:
        X10 = scrt2_abs( X11 );
L16615:
        if  ( FALSE( qobischeme__3e_2dtwo( X9, X10 ) ) )  goto L16606;
        X10 = qobischeme__2d_2dtwo( c15282, b15281 );
        X9 = qobischeme__2a_2dtwo( X6, X10 );
        X8 = qobischeme__2b_2dtwo( b15281, X9 );
        goto L16607;
L16606:
        X8 = b15281;
L16607:
        X9 = a15280;
        X2 = X7;
        X10 = f15278;
        X10 = UNKNOWNCALL( X10, 1 );
        X4 = VIA( PROCEDURE_CODE( X10 ) )( X7, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X1 = X8;
        X10 = f15278;
        X10 = UNKNOWNCALL( X10, 1 );
        X3 = VIA( PROCEDURE_CODE( X10 ) )( X8, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X10 = c15282;
L16620:
        X13 = qobischeme__2d_2dtwo( X10, X9 );
        if  ( NEQ( TSCPTAG( X13 ), FIXNUMTAG ) )  goto L16622;
        if  ( FALSE( qobischeme_negative_3f( X13 ) ) )  goto L16624;
        X12 = _TSCP( INEGATE( _S2CINT( X13 ) ) );
        goto L16623;
L16624:
        X12 = X13;
        goto L16623;
L16622:
        X12 = scrt2_abs( X13 );
L16623:
        if  ( NEQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L16626;
        if  ( FALSE( qobischeme_negative_3f( X2 ) ) )  goto L16628;
        X15 = _TSCP( INEGATE( _S2CINT( X2 ) ) );
        goto L16627;
L16628:
        X15 = X2;
        goto L16627;
L16626:
        X15 = scrt2_abs( X2 );
L16627:
        if  ( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L16630;
        if  ( FALSE( qobischeme_negative_3f( X1 ) ) )  goto L16632;
        X16 = _TSCP( INEGATE( _S2CINT( X1 ) ) );
        goto L16631;
L16632:
        X16 = X1;
        goto L16631;
L16630:
        X16 = scrt2_abs( X1 );
L16631:
        X14 = qobischeme__2b_2dtwo( X15, X16 );
        X13 = qobischeme__2a_2dtwo( t15279, X14 );
        X11 = qobischeme__3c_3d_2dtwo( X12, X13 );
        if  ( TRUE( X11 ) )  goto L16638;
        X13 = qobischeme__2d_2dtwo( X10, X9 );
        if  ( NEQ( TSCPTAG( X13 ), FIXNUMTAG ) )  goto L16642;
        if  ( FALSE( qobischeme_negative_3f( X13 ) ) )  goto L16644;
        X12 = _TSCP( INEGATE( _S2CINT( X13 ) ) );
        goto L16643;
L16644:
        X12 = X13;
        goto L16643;
L16642:
        X12 = scrt2_abs( X13 );
L16643:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X12, t15279 ) ) )  goto L16638;
        if  ( FALSE( qobischeme__3c_2dtwo( X3, X4 ) ) )  goto L16646;
        X13 = qobischeme__2a_2dtwo( X5, X1 );
        X14 = qobischeme__2a_2dtwo( X6, X10 );
        X12 = qobischeme__2b_2dtwo( X13, X14 );
        X13 = X2;
        X14 = X1;
        X15 = X3;
        X17 = f15278;
        X17 = UNKNOWNCALL( X17, 1 );
        X16 = VIA( PROCEDURE_CODE( X17 ) )( X12, 
                                            PROCEDURE_CLOSURE( X17 ) );
        X3 = X16;
        X1 = X12;
        X4 = X15;
        X2 = X14;
        X9 = X13;
        GOBACK( L16620 );
L16646:
        X13 = qobischeme__2a_2dtwo( X5, X2 );
        X14 = qobischeme__2a_2dtwo( X6, X9 );
        X12 = qobischeme__2b_2dtwo( X13, X14 );
        X14 = f15278;
        X14 = UNKNOWNCALL( X14, 1 );
        X13 = VIA( PROCEDURE_CODE( X14 ) )( X12, 
                                            PROCEDURE_CLOSURE( X14 ) );
        X10 = X1;
        X3 = X4;
        X1 = X2;
        X4 = X13;
        X2 = X12;
        GOBACK( L16620 );
L16638:
        if  ( FALSE( qobischeme__3c_2dtwo( X4, X3 ) ) )  goto L16650;
        X5 = k15283;
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( X2, 
                                                    X4, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
L16650:
        X5 = k15283;
        X5 = UNKNOWNCALL( X5, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X5 ) )( X1, 
                                                    X3, 
                                                    PROCEDURE_CLOSURE( X5 ) ) );
}

DEFTSCP( toollib_2dad_my_2dmnbrak_v );
DEFCSTRING( t16652, "MY-MNBRAK" );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );

TSCP  toollib_2dad_my_2dmnbrak( f15444, a15445, b15446, k15447 )
        TSCP  f15444, a15445, b15446, k15447;
{
        TSCP  X17, 
              X16, 
              X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16652 );
        X8 = f15444;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( a15445, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = f15444;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( b15446, 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( FALSE( qobischeme__3e_2dtwo( X8, X7 ) ) )  goto L16657;
        X11 = qobischeme__2d_2dtwo( a15445, b15446 );
        X10 = qobischeme__2a_2dtwo( X11, c14939 );
        X9 = qobischeme__2b_2dtwo( a15445, X10 );
        X10 = f15444;
        X10 = UNKNOWNCALL( X10, 1 );
        X6 = VIA( PROCEDURE_CODE( X10 ) )( X9, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X5 = X9;
        X4 = X7;
        X3 = a15445;
        X2 = X8;
        X1 = b15446;
        goto L16660;
L16657:
        X11 = qobischeme__2d_2dtwo( b15446, a15445 );
        X10 = qobischeme__2a_2dtwo( X11, c14939 );
        X9 = qobischeme__2b_2dtwo( b15446, X10 );
        X10 = f15444;
        X10 = UNKNOWNCALL( X10, 1 );
        X6 = VIA( PROCEDURE_CODE( X10 ) )( X9, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X5 = X9;
        X4 = X8;
        X3 = b15446;
        X2 = X7;
        X1 = a15445;
L16660:
        if  ( FALSE( qobischeme__3c_2dtwo( X4, X6 ) ) )  goto L16662;
        X7 = k15447;
        X7 = UNKNOWNCALL( X7, 6 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X7 ) )( X1, 
                                                    X2, 
                                                    X3, 
                                                    X4, 
                                                    X5, 
                                                    X6, 
                                                    PROCEDURE_CLOSURE( X7 ) ) );
L16662:
        X8 = qobischeme__2d_2dtwo( X3, X1 );
        X9 = qobischeme__2d_2dtwo( X4, X6 );
        X7 = qobischeme__2a_2dtwo( X8, X9 );
        X9 = qobischeme__2d_2dtwo( X3, X5 );
        X10 = qobischeme__2d_2dtwo( X4, X2 );
        X8 = qobischeme__2a_2dtwo( X9, X10 );
        X13 = qobischeme__2d_2dtwo( X3, X5 );
        X12 = qobischeme__2a_2dtwo( X13, X8 );
        X14 = qobischeme__2d_2dtwo( X3, X1 );
        X13 = qobischeme__2a_2dtwo( X14, X7 );
        X11 = qobischeme__2d_2dtwo( X12, X13 );
        X16 = qobischeme__2d_2dtwo( X8, X7 );
        if  ( NEQ( TSCPTAG( X16 ), FIXNUMTAG ) )  goto L16667;
        if  ( FALSE( qobischeme_negative_3f( X16 ) ) )  goto L16669;
        X15 = _TSCP( INEGATE( _S2CINT( X16 ) ) );
        goto L16668;
L16669:
        X15 = X16;
        goto L16668;
L16667:
        X15 = scrt2_abs( X16 );
L16668:
        if  ( BITAND( BITOR( _S2CINT( X15 ), 
                             _S2CINT( c15654 ) ), 
                      3 ) )  goto L16672;
        if  ( LTE( _S2CINT( X15 ), _S2CINT( c15654 ) ) )  goto L16674;
        X14 = X15;
        goto L16673;
L16674:
        X14 = c15654;
        goto L16673;
L16672:
        X14 = scrt2_max_2dtwo( X15, c15654 );
L16673:
        X15 = qobischeme__2d_2dtwo( X8, X7 );
        if  ( FALSE( qobischeme__3c_2dtwo( X15, c15485 ) ) )  goto L16677;
        X13 = qobischeme__2d_2dtwo( c15485, X14 );
        goto L16678;
L16677:
        X13 = X14;
L16678:
        X12 = qobischeme__2a_2dtwo( X13, c13907 );
        X10 = qobischeme__2f_2dtwo( X11, X12 );
        X9 = qobischeme__2d_2dtwo( X3, X10 );
        X12 = qobischeme__2d_2dtwo( X5, X3 );
        X11 = qobischeme__2a_2dtwo( X12, c15653 );
        X10 = qobischeme__2b_2dtwo( X3, X11 );
        X12 = qobischeme__2d_2dtwo( X3, X9 );
        X13 = qobischeme__2d_2dtwo( X9, X5 );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        if  ( FALSE( qobischeme__3e_2dtwo( X11, c15485 ) ) )  goto L16681;
        X12 = f15444;
        X12 = UNKNOWNCALL( X12, 1 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( X9, 
                                            PROCEDURE_CLOSURE( X12 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X11, X6 ) ) )  goto L16684;
        X12 = k15447;
        X12 = UNKNOWNCALL( X12, 6 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X12 ) )( X3, 
                                                     X4, 
                                                     X9, 
                                                     X11, 
                                                     X5, 
                                                     X6, 
                                                     PROCEDURE_CLOSURE( X12 ) ) );
L16684:
        if  ( FALSE( qobischeme__3e_2dtwo( X11, X4 ) ) )  goto L16686;
        X12 = k15447;
        X12 = UNKNOWNCALL( X12, 6 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X12 ) )( X1, 
                                                     X2, 
                                                     X3, 
                                                     X4, 
                                                     X9, 
                                                     X11, 
                                                     PROCEDURE_CLOSURE( X12 ) ) );
L16686:
        X14 = qobischeme__2d_2dtwo( X5, X3 );
        X13 = qobischeme__2a_2dtwo( X14, c14939 );
        X12 = qobischeme__2b_2dtwo( X5, X13 );
        X13 = X3;
        X14 = X4;
        X15 = X5;
        X16 = X6;
        X17 = f15444;
        X17 = UNKNOWNCALL( X17, 1 );
        X6 = VIA( PROCEDURE_CODE( X17 ) )( X12, 
                                           PROCEDURE_CLOSURE( X17 ) );
        X5 = X12;
        X4 = X16;
        X3 = X15;
        X2 = X14;
        X1 = X13;
        GOBACK( L16660 );
L16681:
        X12 = qobischeme__2d_2dtwo( X5, X9 );
        X13 = qobischeme__2d_2dtwo( X9, X10 );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        if  ( FALSE( qobischeme__3e_2dtwo( X11, c15485 ) ) )  goto L16689;
        X12 = f15444;
        X12 = UNKNOWNCALL( X12, 1 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( X9, 
                                            PROCEDURE_CLOSURE( X12 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X11, X6 ) ) )  goto L16692;
        X14 = qobischeme__2d_2dtwo( X9, X5 );
        X13 = qobischeme__2a_2dtwo( X14, c14939 );
        X12 = qobischeme__2b_2dtwo( X9, X13 );
        X13 = X5;
        X14 = X6;
        X15 = f15444;
        X15 = UNKNOWNCALL( X15, 1 );
        X6 = VIA( PROCEDURE_CODE( X15 ) )( X12, 
                                           PROCEDURE_CLOSURE( X15 ) );
        X5 = X12;
        X4 = X11;
        X3 = X9;
        X2 = X14;
        X1 = X13;
        GOBACK( L16660 );
L16692:
        X12 = X3;
        X13 = X4;
        X14 = X5;
        X15 = X6;
        X6 = X11;
        X5 = X9;
        X4 = X15;
        X3 = X14;
        X2 = X13;
        X1 = X12;
        GOBACK( L16660 );
L16689:
        X12 = qobischeme__2d_2dtwo( X9, X10 );
        X13 = qobischeme__2d_2dtwo( X10, X5 );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X11, c15485 ) )
            )  goto L16695;
        X11 = X3;
        X12 = X4;
        X13 = X5;
        X14 = X6;
        X15 = f15444;
        X15 = UNKNOWNCALL( X15, 1 );
        X6 = VIA( PROCEDURE_CODE( X15 ) )( X10, 
                                           PROCEDURE_CLOSURE( X15 ) );
        X5 = X10;
        X4 = X14;
        X3 = X13;
        X2 = X12;
        X1 = X11;
        GOBACK( L16660 );
L16695:
        X13 = qobischeme__2d_2dtwo( X5, X3 );
        X12 = qobischeme__2a_2dtwo( X13, c14939 );
        X11 = qobischeme__2b_2dtwo( X5, X12 );
        X12 = X3;
        X13 = X4;
        X14 = X5;
        X15 = X6;
        X16 = f15444;
        X16 = UNKNOWNCALL( X16, 1 );
        X6 = VIA( PROCEDURE_CODE( X16 ) )( X11, 
                                           PROCEDURE_CLOSURE( X16 ) );
        X5 = X11;
        X4 = X15;
        X3 = X14;
        X2 = X13;
        X1 = X12;
        GOBACK( L16660 );
}

DEFTSCP( llib_2dad_d_2dgolden_7d0040ae_v );
DEFCSTRING( t16698, "ARGMIN-USING-MNBRAK-AND-GOLDEN" );

TSCP  toollib_2dad_l15676( m15677, f15678, c16702 )
        TSCP  m15677, f15678, c16702;
{
        PUSHSTACKTRACE( "toollib_2dad_l15676 [inside ARGMIN-USING-MNBRAK-AND\
-GOLDEN]" );
        POPSTACKTRACE( m15677 );
}

TSCP  toollib_2dad_l15668( a15669, 
                           f15670, 
                           b15671, 
                           f15672, c15673, f15674, c16700 )
        TSCP  a15669, 
              f15670, 
              b15671, f15672, c15673, f15674, c16700;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15668 [inside ARGMIN-USING-MNBRAK-AND\
-GOLDEN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16700, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dad_l15676, EMPTYLIST );
        X2 = toollib_2dad_my_2dgolden( DISPLAY( 0 ), 
                                       c15675, 
                                       a15669, 
                                       b15671, c15673, X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  llib_2dad_d_2dgolden_7d0040ae( f15665, l15666, u15667 )
        TSCP  f15665, l15666, u15667;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16698 );
        DISPLAY( 0 ) = f15665;
        X1 = MAKEPROCEDURE( 6, 
                            0, 
                            toollib_2dad_l15668, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = toollib_2dad_my_2dmnbrak( DISPLAY( 0 ), 
                                          l15666, u15667, X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( llib_2dad_n_2dargmin_3498f071_v );
DEFCSTRING( t16704, "MULTIVARIATE-PR-GOLDEN-ARGMIN" );

TSCP  toollib_2dad_l15752( v15753, c16713 )
        TSCP  v15753, c16713;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dad_l15752 [inside MULTIVARIATE-PR-GOLDEN-\
ARGMIN]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c16713, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c16713, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c16713, 2 );
        X9 = toollib_2dad_g_2dmagnitude( DISPLAY( 2 ) );
        X8 = qobischeme__2f_2dtwo( v15753, X9 );
        X7 = toollib_2dad_k_2ag( X8, DISPLAY( 2 ) );
        X6 = toollib_2dad_g_2b( DISPLAY( 1 ), X7 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );

TSCP  llib_2dad_n_2dargmin_3498f071( f15680, 
                                     x15681, 
                                     s15682, 
                                     g15683, 
                                     x15684, 
                                     l15685, 
                                     l15686, 
                                     l15687, i15688, r15689 )
        TSCP  f15680, 
              x15681, 
              s15682, 
              g15683, 
              x15684, 
              l15685, l15686, l15687, i15688, r15689;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t16704 );
        DISPLAY( 0 ) = f15680;
        X1 = qobischeme_gradient_2df( DISPLAY( 0 ) );
        DISPLAY( 1 ) = x15681;
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15681, 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = X1;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( x15681, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( FALSE( s15682 ) )  goto L16708;
        DISPLAY( 2 ) = s15682;
        goto L16709;
L16708:
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( x15681, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = qobischeme_map_2dvector( qobischeme__2d_v, 
                                                X4, EMPTYLIST );
L16709:
        X4 = _TSCP( 0 );
        X5 = FALSEVALUE;
L16710:
        X6 = toollib_2dad_g_2dmagnitude( X3 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X6, g15683 ) ) )  goto L16711;
        X8 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dad_l15752, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X7 = llib_2dad_d_2dgolden_7d0040ae( X8, l15685, l15686 );
        X8 = toollib_2dad_g_2dmagnitude( DISPLAY( 2 ) );
        X6 = qobischeme__2f_2dtwo( X7, X8 );
        X8 = toollib_2dad_k_2ag( X6, DISPLAY( 2 ) );
        X7 = toollib_2dad_g_2b( DISPLAY( 1 ), X8 );
        X9 = DISPLAY( 0 );
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X7, 
                                          PROCEDURE_CLOSURE( X9 ) );
        X10 = X1;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X7, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X12 = toollib_2dad_g_2d( X9, X3 );
        X11 = toollib_2dad_g_2ddot( X9, X12 );
        X12 = toollib_2dad_g_2ddot( X3, X3 );
        X10 = qobischeme__2f_2dtwo( X11, X12 );
        X12 = toollib_2dad_k_2ag( X10, DISPLAY( 2 ) );
        X11 = toollib_2dad_g_2d( X12, X9 );
        if  ( FALSE( qobischeme__3e_2dtwo( X8, X2 ) ) )  goto L16721;
        X12 = CONS( X4, EMPTYLIST );
        X12 = CONS( X8, X12 );
        X12 = CONS( X2, X12 );
        scrt6_format( FALSEVALUE, CONS( c15744, X12 ) );
        SDVAL = qobischeme_panic( c15745, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16721:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( i15688, X4 ) ) )  goto L16724;
        X12 = toollib_2dad_g_2ddistance( DISPLAY( 1 ), X7 );
        if  ( FALSE( qobischeme__3c_3d_2dtwo( X12, x15684 ) )
            )  goto L16726;
        X13 = qobischeme__2b_2dtwo( _TSCP( 4 ), X4 );
        X12 = scrt2_modulo( X13, r15689 );
        if  ( TRUE( qobischeme__3d_2dtwo( X12, _TSCP( 0 ) ) )
            )  goto L16728;
        X12 = qobischeme_map_2dvector( qobischeme__2d_v, 
                                       X9, EMPTYLIST );
        X13 = qobischeme__2b_2dtwo( _TSCP( 4 ), X4 );
        X5 = FALSEVALUE;
        X4 = X13;
        DISPLAY( 2 ) = X12;
        X3 = X9;
        X2 = X8;
        DISPLAY( 1 ) = X7;
        GOBACK( L16710 );
L16728:
        SDVAL = X7;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16726:
        X14 = qobischeme__2b_2dtwo( _TSCP( 4 ), i15688 );
        X13 = scrt2_modulo( X14, r15689 );
        if  ( FALSE( qobischeme__3d_2dtwo( X13, _TSCP( 0 ) ) )
            )  goto L16730;
        X12 = qobischeme_map_2dvector( qobischeme__2d_v, 
                                       X9, EMPTYLIST );
        goto L16731;
L16730:
        X12 = X11;
L16731:
        X13 = qobischeme__2b_2dtwo( _TSCP( 4 ), X4 );
        X5 = FALSEVALUE;
        X4 = X13;
        DISPLAY( 2 ) = X12;
        X3 = X9;
        X2 = X8;
        DISPLAY( 1 ) = X7;
        GOBACK( L16710 );
L16724:
        SDVAL = X7;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L16711:
        SDVAL = DISPLAY( 1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

void scrt4__init();
void toollib_2dmisc__init();
void scrt2__init();
void scrt6__init();
void scdebug__init();
void scrt1__init();
void qobischeme__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt4__init();
        toollib_2dmisc__init();
        scrt2__init();
        scrt6__init();
        scdebug__init();
        scrt1__init();
        qobischeme__init();
        MAXDISPLAY( 6 );
}

void  toollib_2dad__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dad SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t15873, 
                       ADR( llib_2dad_ad_2d1_2d0_8bb0e17e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      llib_2dad_ad_2d1_2d0_8bb0e17e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15875, 
                       ADR( llib_2dad_ad_2d3_2d0_f170b21e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      llib_2dad_ad_2d3_2d0_f170b21e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15877, 
                       ADR( llib_2dad_ad_2d5_2d0_7e3047be_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      llib_2dad_ad_2d5_2d0_7e3047be, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15879, 
                       ADR( toollib_2dad_smooth_2dmax_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_smooth_2dmax, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15897, 
                       ADR( toollib_2dad_smooth_2dmin_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_smooth_2dmin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15915, 
                       ADR( toollib_2dad_smooth_2dmax_2dz_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dad_smooth_2dmax_2dz, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15933, 
                       ADR( llib_2dad_2dchks_2d2_ec527ef9_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_2dchks_2d2_ec527ef9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15935, 
                       ADR( llib_2dad_max_2dchks_57bce59_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_max_2dchks_57bce59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15944, 
                       ADR( llib_2dad_2dchks_2d2_5574e588_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_2dchks_2d2_5574e588, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15946, 
                       ADR( llib_2dad_min_2dchks_47754ed_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_min_2dchks_47754ed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15964, 
                       ADR( toollib_2dad_deep_2dprimal_2a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dad_deep_2dprimal_2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15968, 
                       ADR( llib_2dad_2df_2dargs_24469af1_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      llib_2dad_2df_2dargs_24469af1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15991, 
                       ADR( llib_2dad_2df_2dargs_920d674c_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      llib_2dad_2df_2dargs_920d674c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16023, 
                       ADR( llib_2dad_rgs_2dline_794e48ee_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      llib_2dad_rgs_2dline_794e48ee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16059, 
                       ADR( llib_2dad_n_2df_2dfr_141658f3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_n_2df_2dfr_141658f3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16076, 
                       ADR( llib_2dad_n_2df_2dpr_88eed24_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_n_2df_2dpr_88eed24, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16093, 
                       ADR( llib_2dad_n_2dr_2dpr_90c9ada9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_n_2dr_2dpr_90c9ada9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16110, 
                       ADR( llib_2dad__2dr_2dprt_f8f267c4_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      llib_2dad__2dr_2dprt_f8f267c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16132, 
                       ADR( llib_2dad_n_2df_2dhs_fd9245eb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      llib_2dad_n_2df_2dhs_fd9245eb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16149, 
                       ADR( llib_2dad__2dscaling_7048333b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad__2dscaling_7048333b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16167, 
                       ADR( llib_2dad_rgmin_2dpr_6539b589_v ), 
                       MAKEPROCEDURE( 9, 
                                      0, 
                                      llib_2dad_rgmin_2dpr_6539b589, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16184, 
                       ADR( toollib_2dad_g_2dtapes_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dad_g_2dtapes, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16213, 
                       ADR( llib_2dad_sitivities_a3c8c30a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      llib_2dad_sitivities_a3c8c30a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16237, 
                       ADR( toollib_2dad_g_2ddot_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_g_2ddot, EMPTYLIST ) );
        INITIALIZEVAR( t16271, 
                       ADR( toollib_2dad_g_2b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_g_2b, EMPTYLIST ) );
        INITIALIZEVAR( t16305, 
                       ADR( toollib_2dad_g_2d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_g_2d, EMPTYLIST ) );
        INITIALIZEVAR( t16339, 
                       ADR( toollib_2dad_k_2ag_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_k_2ag, EMPTYLIST ) );
        INITIALIZEVAR( t16372, 
                       ADR( toollib_2dad_gradient_2dr_2dg_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dad_gradient_2dr_2dg, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16383, 
                       ADR( toollib_2dad_g_2dmagnitude_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dad_g_2dmagnitude, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16385, 
                       ADR( toollib_2dad_g_2ddistance_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_g_2ddistance, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16387, 
                       ADR( toollib_2dad_golden_2dsection_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dad_golden_2dsection, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16440, 
                       ADR( llib_2dad_argmin_2dr_55c193fc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_argmin_2dr_55c193fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16473, 
                       ADR( llib_2dad__2dmin_2dr_417c088_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad__2dmin_2dr_417c088, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16475, 
                       ADR( llib_2dad_argmax_2dr_563273b3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_argmax_2dr_563273b3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16479, 
                       ADR( llib_2dad__2dmax_2dr_7e420c7_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad__2dmax_2dr_7e420c7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16481, 
                       ADR( llib_2dad__2dhessian_99589b24_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      llib_2dad__2dhessian_99589b24, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16486, 
                       ADR( toollib_2dad_naive_2dbfgs_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_naive_2dbfgs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16500, 
                       ADR( toollib_2dad_bfgs_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_bfgs, EMPTYLIST ) );
        INITIALIZEVAR( t16514, 
                       ADR( llib_2dad_rgmin_2dpr_8a7ba088_v ), 
                       MAKEPROCEDURE( 11, 
                                      0, 
                                      llib_2dad_rgmin_2dpr_8a7ba088, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16540, 
                       ADR( toollib_2dad_collapse_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dad_collapse, EMPTYLIST ) );
        INITIALIZEVAR( t16560, 
                       ADR( toollib_2dad_extend_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dad_extend, EMPTYLIST ) );
        INITIALIZEVAR( t16575, 
                       ADR( llib_2dad_ddirection_84e72b04_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_ddirection_84e72b04, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16579, 
                       ADR( llib_2dad_directions_9b000b59_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      llib_2dad_directions_9b000b59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16584, 
                       ADR( llib_2dad_directions_c71ec2ad_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      llib_2dad_directions_c71ec2ad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16589, 
                       ADR( toollib_2dad_my_2dgolden_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dad_my_2dgolden, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16652, 
                       ADR( toollib_2dad_my_2dmnbrak_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dad_my_2dmnbrak, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16698, 
                       ADR( llib_2dad_d_2dgolden_7d0040ae_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      llib_2dad_d_2dgolden_7d0040ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16704, 
                       ADR( llib_2dad_n_2dargmin_3498f071_v ), 
                       MAKEPROCEDURE( 10, 
                                      0, 
                                      llib_2dad_n_2dargmin_3498f071, 
                                      EMPTYLIST ) );
        return;
}
