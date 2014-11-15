
/* SCHEME->C */

#include <objects.h>

void toollib_2dgsl__init();
DEFCSTRING( t14802, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c12784 );
DEFSTATICTSCP( c12783 );
DEFCSTRING( t14803, "SET-GSL:RNG-TYPE-HANDLE! error" );
DEFSTATICTSCP( c12637 );
DEFCSTRING( t14804, "GSL:RNG-TYPE-HANDLE error" );
DEFSTATICTSCP( c12622 );
DEFCSTRING( t14805, "LOCAL-SET-GSL:RNG-TYPE-HANDLE! error" );
DEFSTATICTSCP( c12618 );
DEFSTATICTSCP( c12563 );
DEFCSTRING( t14806, "SET-GSL:RNG-HANDLE! error" );
DEFSTATICTSCP( c12535 );
DEFCSTRING( t14807, "GSL:RNG-HANDLE error" );
DEFSTATICTSCP( c12520 );
DEFCSTRING( t14808, "LOCAL-SET-GSL:RNG-HANDLE! error" );
DEFSTATICTSCP( c12516 );
DEFSTATICTSCP( c12506 );
DEFSTATICTSCP( c12496 );
DEFSTATICTSCP( c12457 );
DEFCSTRING( t14809, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12455 );
DEFCSTRING( t14810, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12451 );
DEFCSTRING( t14811, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12448 );
DEFSTATICTSCP( c12447 );

static void  init_constants()
{
        c12784 = CSTRING_TSCP( t14802 );
        CONSTANTEXP( ADR( c12784 ) );
        c12783 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c12783 ) );
        c12637 = CSTRING_TSCP( t14803 );
        CONSTANTEXP( ADR( c12637 ) );
        c12622 = CSTRING_TSCP( t14804 );
        CONSTANTEXP( ADR( c12622 ) );
        c12618 = CSTRING_TSCP( t14805 );
        CONSTANTEXP( ADR( c12618 ) );
        c12563 = STRINGTOSYMBOL( CSTRING_TSCP( "GSL:RNG-TYPE" ) );
        CONSTANTEXP( ADR( c12563 ) );
        c12535 = CSTRING_TSCP( t14806 );
        CONSTANTEXP( ADR( c12535 ) );
        c12520 = CSTRING_TSCP( t14807 );
        CONSTANTEXP( ADR( c12520 ) );
        c12516 = CSTRING_TSCP( t14808 );
        CONSTANTEXP( ADR( c12516 ) );
        c12506 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12506 ) );
        c12496 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12496 ) );
        c12457 = STRINGTOSYMBOL( CSTRING_TSCP( "GSL:RNG" ) );
        CONSTANTEXP( ADR( c12457 ) );
        c12455 = CSTRING_TSCP( t14809 );
        CONSTANTEXP( ADR( c12455 ) );
        c12451 = CSTRING_TSCP( t14810 );
        CONSTANTEXP( ADR( c12451 ) );
        c12448 = CSTRING_TSCP( t14811 );
        CONSTANTEXP( ADR( c12448 ) );
        c12447 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c12447 ) );
}

DEFTSCP( lib_2dgsl_sl_2d1_2d0_b335ec5c_v );
DEFCSTRING( t14812, "gensym-toollib_2dgsl-1-0" );

TSCP  lib_2dgsl_sl_2d1_2d0_b335ec5c(  )
{
        PUSHSTACKTRACE( t14812 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dgsl_2_0(){ return 1;gensym_toollib_2dgsl_2_0( );
}

DEFTSCP( lib_2dgsl_sl_2d3_2d0_c9f5bf3c_v );
DEFCSTRING( t14814, "gensym-toollib_2dgsl-3-0" );

TSCP  lib_2dgsl_sl_2d3_2d0_c9f5bf3c(  )
{
        PUSHSTACKTRACE( t14814 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dgsl_4_0(){ return 1;gensym_toollib_2dgsl_4_0( );
}

DEFTSCP( lib_2dgsl_sl_2d5_2d0_46b54a9c_v );
DEFCSTRING( t14816, "gensym-toollib_2dgsl-5-0" );

TSCP  lib_2dgsl_sl_2d5_2d0_46b54a9c(  )
{
        PUSHSTACKTRACE( t14816 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dgsl_6_0(){ return 1;gensym_toollib_2dgsl_6_0( );
}

DEFTSCP( lib_2dgsl_sl_2d7_2d0_3c7519fc_v );
DEFCSTRING( t14818, "gensym-toollib_2dgsl-7-0" );

TSCP  lib_2dgsl_sl_2d7_2d0_3c7519fc(  )
{
        PUSHSTACKTRACE( t14818 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_matrix_double.h>
int gensym_toollib_2dgsl_8_0(){ return 1;gensym_toollib_2dgsl_8_0( );
}

DEFTSCP( lib_2dgsl_sl_2d9_2d0_8345a79d_v );
DEFCSTRING( t14820, "gensym-toollib_2dgsl-9-0" );

TSCP  lib_2dgsl_sl_2d9_2d0_8345a79d(  )
{
        PUSHSTACKTRACE( t14820 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_math.h>
int gensym_toollib_2dgsl_10_0(){ return 1;gensym_toollib_2dgsl_10_0( );
}

DEFTSCP( lib_2dgsl_l_2d11_2d0_1d1f343f_v );
DEFCSTRING( t14822, "gensym-toollib_2dgsl-11-0" );

TSCP  lib_2dgsl_l_2d11_2d0_1d1f343f(  )
{
        PUSHSTACKTRACE( t14822 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_eigen.h>
int gensym_toollib_2dgsl_12_0(){ return 1;gensym_toollib_2dgsl_12_0( );
}

DEFTSCP( lib_2dgsl_l_2d13_2d0_67df675f_v );
DEFCSTRING( t14824, "gensym-toollib_2dgsl-13-0" );

TSCP  lib_2dgsl_l_2d13_2d0_67df675f(  )
{
        PUSHSTACKTRACE( t14824 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_linalg.h>
int gensym_toollib_2dgsl_14_0(){ return 1;gensym_toollib_2dgsl_14_0( );
}

DEFTSCP( lib_2dgsl_l_2d15_2d0_e89f92ff_v );
DEFCSTRING( t14826, "gensym-toollib_2dgsl-15-0" );

TSCP  lib_2dgsl_l_2d15_2d0_e89f92ff(  )
{
        PUSHSTACKTRACE( t14826 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_rng.h>
int gensym_toollib_2dgsl_16_0(){ return 1;gensym_toollib_2dgsl_16_0( );
}

DEFTSCP( lib_2dgsl_l_2d17_2d0_925fc19f_v );
DEFCSTRING( t14828, "gensym-toollib_2dgsl-17-0" );

TSCP  lib_2dgsl_l_2d17_2d0_925fc19f(  )
{
        PUSHSTACKTRACE( t14828 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_randist.h>
int gensym_toollib_2dgsl_18_0(){ return 1;gensym_toollib_2dgsl_18_0( );
}

DEFTSCP( lib_2dgsl_l_2d19_2d0_2d6f7ffe_v );
DEFCSTRING( t14830, "gensym-toollib_2dgsl-19-0" );

TSCP  lib_2dgsl_l_2d19_2d0_2d6f7ffe(  )
{
        PUSHSTACKTRACE( t14830 );
        POPSTACKTRACE( 0 );}
  #include<gsl/gsl_cdf.h>
int gensym_toollib_2dgsl_20_0(){ return 1;gensym_toollib_2dgsl_20_0( );
}

DEFTSCP( lib_2dgsl_l_2d21_2d0_9b8b4691_v );
DEFCSTRING( t14832, "gensym-toollib_2dgsl-21-0" );

TSCP  lib_2dgsl_l_2d21_2d0_9b8b4691(  )
{
        PUSHSTACKTRACE( t14832 );
        POPSTACKTRACE( 0 );}
  #include<idealib-c.h>
int gensym_toollib_2dgsl_22_0(){ return 1;gensym_toollib_2dgsl_22_0( );
}

DEFTSCP( lib_2dgsl_dgsl_3arng_ea543a60_v );
DEFCSTRING( t14834, "MAKE-GSL:RNG" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  lib_2dgsl_dgsl_3arng_ea543a60( h12438 )
        TSCP  h12438;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14834 );
        X1 = sc_make_2dvector( _TSCP( 8 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14838;
        scdebug_error( c12447, 
                       c12448, CONS( X1, EMPTYLIST ) );
L14838:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14840;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14840:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14842;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14842:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12457 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14845;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14845:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14847;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14847:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), h12438 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dgsl_gsl_3arng_3f_v );
DEFCSTRING( t14849, "GSL:RNG?" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  toollib_2dgsl_gsl_3arng_3f( o12473 )
        TSCP  o12473;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14849 );
        if  ( NOT( AND( EQ( TSCPTAG( o12473 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12473 ), 
                            VECTORTAG ) ) ) )  goto L14851;
        X2 = C_FIXED( VECTOR_LENGTH( o12473 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L14855;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L14856;
L14855:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 8 ) );
L14856:
        if  ( FALSE( X1 ) )  goto L14858;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14861;
        scdebug_error( c12506, 
                       c12451, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14861:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12473 ) ) ) )  goto L14863;
        scdebug_error( c12506, 
                       c12455, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14863:
        X2 = VECTOR_ELEMENT( o12473, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12457 ) ) ) );
L14858:
        POPSTACKTRACE( X1 );
L14851:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_dhandle_21_54981f6f_v );
DEFCSTRING( t14865, "LOCAL-SET-GSL:RNG-HANDLE!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  lib_2dgsl_dhandle_21_54981f6f( t12514, o12515 )
        TSCP  t12514, o12515;
{
        PUSHSTACKTRACE( t14865 );
        if  ( TRUE( toollib_2dgsl_gsl_3arng_3f( t12514 ) ) )  goto L14867;
        qobischeme_panic( c12516, EMPTYLIST );
L14867:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12514, 
                                                      _TSCP( 4 ), 
                                                      o12515 ) );
}

DEFTSCP( lib_2dgsl_g_2dhandle_ccb48f8d_v );
DEFCSTRING( t14869, "GSL:RNG-HANDLE" );

TSCP  lib_2dgsl_g_2dhandle_ccb48f8d( t12519 )
        TSCP  t12519;
{
        PUSHSTACKTRACE( t14869 );
        if  ( TRUE( toollib_2dgsl_gsl_3arng_3f( t12519 ) ) )  goto L14871;
        qobischeme_panic( c12520, EMPTYLIST );
L14871:
        if  ( AND( EQ( TSCPTAG( t12519 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12519 ), VECTORTAG ) )
            )  goto L14874;
        scdebug_error( c12506, 
                       c12448, CONS( t12519, EMPTYLIST ) );
L14874:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14876;
        scdebug_error( c12506, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14876:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12519 ) ) ) )  goto L14878;
        scdebug_error( c12506, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14878:
        POPSTACKTRACE( VECTOR_ELEMENT( t12519, _TSCP( 4 ) ) );
}

DEFTSCP( lib_2dgsl_dhandle_21_ca995b9_v );
DEFCSTRING( t14880, "SET-GSL:RNG-HANDLE!" );

TSCP  lib_2dgsl_dhandle_21_ca995b9( t12533, o12534 )
        TSCP  t12533, o12534;
{
        PUSHSTACKTRACE( t14880 );
        if  ( TRUE( toollib_2dgsl_gsl_3arng_3f( t12533 ) ) )  goto L14882;
        qobischeme_panic( c12535, EMPTYLIST );
L14882:
        if  ( AND( EQ( TSCPTAG( t12533 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12533 ), VECTORTAG ) )
            )  goto L14885;
        scdebug_error( c12447, 
                       c12448, CONS( t12533, EMPTYLIST ) );
L14885:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14887;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14887:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12533 ) ) ) )  goto L14889;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14889:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12533, _TSCP( 4 ) ), 
                               o12534 ) );
}

DEFTSCP( lib_2dgsl_rng_2dtype_701c639_v );
DEFCSTRING( t14891, "MAKE-GSL:RNG-TYPE" );

TSCP  lib_2dgsl_rng_2dtype_701c639( h12549 )
        TSCP  h12549;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14891 );
        X1 = sc_make_2dvector( _TSCP( 8 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14895;
        scdebug_error( c12447, 
                       c12448, CONS( X1, EMPTYLIST ) );
L14895:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14897;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14897:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14899;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14899:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12563 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14902;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14902:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14904;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14904:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), h12549 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl__2dtype_3f_d54f16ae_v );
DEFCSTRING( t14906, "GSL:RNG-TYPE?" );

TSCP  lib_2dgsl__2dtype_3f_d54f16ae( o12577 )
        TSCP  o12577;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14906 );
        if  ( NOT( AND( EQ( TSCPTAG( o12577 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12577 ), 
                            VECTORTAG ) ) ) )  goto L14908;
        X2 = C_FIXED( VECTOR_LENGTH( o12577 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L14912;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 8 ) ) ) );
        goto L14913;
L14912:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 8 ) );
L14913:
        if  ( FALSE( X1 ) )  goto L14915;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14918;
        scdebug_error( c12506, 
                       c12451, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14918:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12577 ) ) ) )  goto L14920;
        scdebug_error( c12506, 
                       c12455, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14920:
        X2 = VECTOR_ELEMENT( o12577, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12563 ) ) ) );
L14915:
        POPSTACKTRACE( X1 );
L14908:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_dhandle_21_43d5c16c_v );
DEFCSTRING( t14922, "LOCAL-SET-GSL:RNG-TYPE-HANDLE!" );

TSCP  lib_2dgsl_dhandle_21_43d5c16c( t12616, o12617 )
        TSCP  t12616, o12617;
{
        PUSHSTACKTRACE( t14922 );
        if  ( TRUE( lib_2dgsl__2dtype_3f_d54f16ae( t12616 ) )
            )  goto L14924;
        qobischeme_panic( c12618, EMPTYLIST );
L14924:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12616, 
                                                      _TSCP( 4 ), 
                                                      o12617 ) );
}

DEFTSCP( lib_2dgsl_e_2dhandle_fff43dc1_v );
DEFCSTRING( t14926, "GSL:RNG-TYPE-HANDLE" );

TSCP  lib_2dgsl_e_2dhandle_fff43dc1( t12621 )
        TSCP  t12621;
{
        PUSHSTACKTRACE( t14926 );
        if  ( TRUE( lib_2dgsl__2dtype_3f_d54f16ae( t12621 ) )
            )  goto L14928;
        qobischeme_panic( c12622, EMPTYLIST );
L14928:
        if  ( AND( EQ( TSCPTAG( t12621 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12621 ), VECTORTAG ) )
            )  goto L14931;
        scdebug_error( c12506, 
                       c12448, CONS( t12621, EMPTYLIST ) );
L14931:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14933;
        scdebug_error( c12506, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14933:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12621 ) ) ) )  goto L14935;
        scdebug_error( c12506, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14935:
        POPSTACKTRACE( VECTOR_ELEMENT( t12621, _TSCP( 4 ) ) );
}

DEFTSCP( lib_2dgsl_dhandle_21_a61576d6_v );
DEFCSTRING( t14937, "SET-GSL:RNG-TYPE-HANDLE!" );

TSCP  lib_2dgsl_dhandle_21_a61576d6( t12635, o12636 )
        TSCP  t12635, o12636;
{
        PUSHSTACKTRACE( t14937 );
        if  ( TRUE( lib_2dgsl__2dtype_3f_d54f16ae( t12635 ) )
            )  goto L14939;
        qobischeme_panic( c12637, EMPTYLIST );
L14939:
        if  ( AND( EQ( TSCPTAG( t12635 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12635 ), VECTORTAG ) )
            )  goto L14942;
        scdebug_error( c12447, 
                       c12448, CONS( t12635, EMPTYLIST ) );
L14942:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14944;
        scdebug_error( c12447, 
                       c12451, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14944:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12635 ) ) ) )  goto L14946;
        scdebug_error( c12447, 
                       c12455, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14946:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12635, _TSCP( 4 ) ), 
                               o12636 ) );
}

DEFTSCP( toollib_2dgsl__2agsl_2drng_2a_v );
DEFCSTRING( t14948, "*GSL-RNG*" );
DEFTSCP( lib_2dgsl_l_2drng_21_357d1b65_v );
DEFCSTRING( t14949, "SETUP-DEFAULT-GSL-RNG!" );
EXTERNTSCPP( lib_2dgsl_nv_2dsetup_f7fd456a, XAL0(  ) );
EXTERNTSCP( lib_2dgsl_nv_2dsetup_f7fd456a_v );
EXTERNTSCPP( lib_2dgsl_ng_2dalloc_374db249, XAL1( TSCP ) );
EXTERNTSCP( lib_2dgsl_ng_2dalloc_374db249_v );
EXTERNTSCP( lib_2dgsl__2ddefault_5d074e10_v );

TSCP  lib_2dgsl_l_2drng_21_357d1b65(  )
{
        PUSHSTACKTRACE( t14949 );
        if  ( TRUE( toollib_2dgsl__2agsl_2drng_2a_v ) )  goto L14951;
        lib_2dgsl_nv_2dsetup_f7fd456a(  );
        toollib_2dgsl__2agsl_2drng_2a_v = lib_2dgsl_ng_2dalloc_374db249( lib_2dgsl__2ddefault_5d074e10_v );
        POPSTACKTRACE( toollib_2dgsl__2agsl_2drng_2a_v );
L14951:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_1_2dset_21_801705b6_v );
DEFCSTRING( t14954, "GSL-MATRIX-SIZE1-SET!" );
EXTERNTSCPP( scrt4_c_2dint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dset_21_v );

TSCP  lib_2dgsl_1_2dset_21_801705b6( o12658, v12659 )
        TSCP  o12658, v12659;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14954 );
        X1 = C_FIXED( offsetof( gsl_matrix, size1 ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o12658, X1, v12659 ) );
}

DEFTSCP( lib_2dgsl_ix_2dsize1_c383bdad_v );
DEFCSTRING( t14956, "GSL-MATRIX-SIZE1" );
EXTERNTSCPP( scrt4_c_2dint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dref_v );

TSCP  lib_2dgsl_ix_2dsize1_c383bdad( o12662 )
        TSCP  o12662;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14956 );
        X1 = C_FIXED( offsetof( gsl_matrix, size1 ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o12662, X1 ) );
}

DEFTSCP( lib_2dgsl_1_2dupdate_4a871c32_v );
DEFCSTRING( t14958, "GSL-MATRIX-SIZE1-UPDATE" );

TSCP  lib_2dgsl_1_2dupdate_4a871c32( o12665, f12666 )
        TSCP  o12665, f12666;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14958 );
        X3 = lib_2dgsl_ix_2dsize1_c383bdad( o12665 );
        X2 = f12666;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( lib_2dgsl_1_2dset_21_801705b6( o12665, X1 ) );
}

DEFTSCP( lib_2dgsl_2_2dset_21_6b20beb5_v );
DEFCSTRING( t14960, "GSL-MATRIX-SIZE2-SET!" );

TSCP  lib_2dgsl_2_2dset_21_6b20beb5( o12669, v12670 )
        TSCP  o12669, v12670;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14960 );
        X1 = C_FIXED( offsetof( gsl_matrix, size2 ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o12669, X1, v12670 ) );
}

DEFTSCP( lib_2dgsl_ix_2dsize2_5a8aec17_v );
DEFCSTRING( t14962, "GSL-MATRIX-SIZE2" );

TSCP  lib_2dgsl_ix_2dsize2_5a8aec17( o12673 )
        TSCP  o12673;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14962 );
        X1 = C_FIXED( offsetof( gsl_matrix, size2 ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o12673, X1 ) );
}

DEFTSCP( lib_2dgsl_2_2dupdate_a1b0a731_v );
DEFCSTRING( t14964, "GSL-MATRIX-SIZE2-UPDATE" );

TSCP  lib_2dgsl_2_2dupdate_a1b0a731( o12676, f12677 )
        TSCP  o12676, f12677;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14964 );
        X3 = lib_2dgsl_ix_2dsize2_5a8aec17( o12676 );
        X2 = f12677;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( lib_2dgsl_2_2dset_21_6b20beb5( o12676, X1 ) );
}

DEFTSCP( lib_2dgsl_a_2dset_21_1d599edf_v );
DEFCSTRING( t14966, "GSL-MATRIX-DATA-SET!" );

TSCP  lib_2dgsl_a_2dset_21_1d599edf( o12680, v12681 )
        TSCP  o12680, v12681;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14966 );
        X1 = C_FIXED( offsetof( gsl_matrix, data ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o12680, X1, v12681 ) );
}

DEFTSCP( lib_2dgsl_rix_2ddata_d500dbc5_v );
DEFCSTRING( t14968, "GSL-MATRIX-DATA" );

TSCP  lib_2dgsl_rix_2ddata_d500dbc5( o12684 )
        TSCP  o12684;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14968 );
        X1 = C_FIXED( offsetof( gsl_matrix, data ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o12684, X1 ) );
}

DEFTSCP( lib_2dgsl_a_2dupdate_d7c9875b_v );
DEFCSTRING( t14970, "GSL-MATRIX-DATA-UPDATE" );

TSCP  lib_2dgsl_a_2dupdate_d7c9875b( o12687, f12688 )
        TSCP  o12687, f12688;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14970 );
        X3 = lib_2dgsl_rix_2ddata_d500dbc5( o12687 );
        X2 = f12688;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( lib_2dgsl_a_2dset_21_1d599edf( o12687, X1 ) );
}

DEFTSCP( lib_2dgsl_e_2dset_21_1287631c_v );
DEFCSTRING( t14972, "GSL-VECTOR-SIZE-SET!" );

TSCP  lib_2dgsl_e_2dset_21_1287631c( o12691, v12692 )
        TSCP  o12691, v12692;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14972 );
        X1 = C_FIXED( offsetof( gsl_vector, size ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o12691, X1, v12692 ) );
}

DEFTSCP( lib_2dgsl_tor_2dsize_b7f2ea87_v );
DEFCSTRING( t14974, "GSL-VECTOR-SIZE" );

TSCP  lib_2dgsl_tor_2dsize_b7f2ea87( o12695 )
        TSCP  o12695;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14974 );
        X1 = C_FIXED( offsetof( gsl_vector, size ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o12695, X1 ) );
}

DEFTSCP( lib_2dgsl_e_2dupdate_d8177a98_v );
DEFCSTRING( t14976, "GSL-VECTOR-SIZE-UPDATE" );

TSCP  lib_2dgsl_e_2dupdate_d8177a98( o12698, f12699 )
        TSCP  o12698, f12699;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14976 );
        X3 = lib_2dgsl_tor_2dsize_b7f2ea87( o12698 );
        X2 = f12699;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( lib_2dgsl_e_2dset_21_1287631c( o12698, X1 ) );
}

DEFTSCP( lib_2dgsl_a_2dset_21_86623e1c_v );
DEFCSTRING( t14978, "GSL-VECTOR-DATA-SET!" );

TSCP  lib_2dgsl_a_2dset_21_86623e1c( o12702, v12703 )
        TSCP  o12702, v12703;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14978 );
        X1 = C_FIXED( offsetof( gsl_vector, data ) );
        POPSTACKTRACE( scrt4_c_2dint_2dset_21( o12702, X1, v12703 ) );
}

DEFTSCP( lib_2dgsl_tor_2ddata_edc13d8e_v );
DEFCSTRING( t14980, "GSL-VECTOR-DATA" );

TSCP  lib_2dgsl_tor_2ddata_edc13d8e( o12706 )
        TSCP  o12706;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14980 );
        X1 = C_FIXED( offsetof( gsl_vector, data ) );
        POPSTACKTRACE( scrt4_c_2dint_2dref( o12706, X1 ) );
}

DEFTSCP( lib_2dgsl_a_2dupdate_4cf22798_v );
DEFCSTRING( t14982, "GSL-VECTOR-DATA-UPDATE" );

TSCP  lib_2dgsl_a_2dupdate_4cf22798( o12709, f12710 )
        TSCP  o12709, f12710;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14982 );
        X3 = lib_2dgsl_tor_2ddata_edc13d8e( o12709 );
        X2 = f12710;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( lib_2dgsl_a_2dset_21_86623e1c( o12709, X1 ) );
}

DEFTSCP( lib_2dgsl_ix_2dalloc_895c8eed_v );
DEFCSTRING( t14984, "GSL-MATRIX-ALLOC" );

TSCP  lib_2dgsl_ix_2dalloc_895c8eed( g12713, g12714 )
        TSCP  g12713, g12714;
{
        PUSHSTACKTRACE( t14984 );
        POPSTACKTRACE( POINTER_TSCP( gsl_matrix_alloc( sc_tscp_int( g12713 ), 
                                                       sc_tscp_int( g12714 ) ) ) );
}

DEFTSCP( lib_2dgsl_rix_2dfree_35dde96e_v );
DEFCSTRING( t14986, "GSL-MATRIX-FREE" );

TSCP  lib_2dgsl_rix_2dfree_35dde96e( g12720 )
        TSCP  g12720;
{
        PUSHSTACKTRACE( t14986 );
        gsl_matrix_free( TSCP_POINTER( g12720 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_or_2dalloc_686ad713_v );
DEFCSTRING( t14989, "GSL-VECTOR-ALLOC" );

TSCP  lib_2dgsl_or_2dalloc_686ad713( g12726 )
        TSCP  g12726;
{
        PUSHSTACKTRACE( t14989 );
        POPSTACKTRACE( POINTER_TSCP( gsl_vector_alloc( sc_tscp_int( g12726 ) ) ) );
}

DEFTSCP( lib_2dgsl_tor_2dfree_d1c0f25_v );
DEFCSTRING( t14991, "GSL-VECTOR-FREE" );

TSCP  lib_2dgsl_tor_2dfree_d1c0f25( g12731 )
        TSCP  g12731;
{
        PUSHSTACKTRACE( t14991 );
        gsl_vector_free( TSCP_POINTER( g12731 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_d_3egsl_21_6c4e8120_v );
DEFCSTRING( t14994, "SCHEME-VECTOR->GSL!" );
EXTERNTSCPP( dbindings_ct_2darray_9826cb39, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_ct_2darray_9826cb39_v );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );
EXTERNTSCP( scrt4_c_2dsizeof_2ddouble_v );

TSCP  lib_2dgsl_d_3egsl_21_6c4e8120( a12737 )
        TSCP  a12737;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14994 );
        if  ( AND( EQ( TSCPTAG( a12737 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a12737 ), VECTORTAG ) )
            )  goto L14997;
        scdebug_error( c12496, 
                       c12448, CONS( a12737, EMPTYLIST ) );
L14997:
        X2 = C_FIXED( VECTOR_LENGTH( a12737 ) );
        X1 = lib_2dgsl_or_2dalloc_686ad713( X2 );
        X2 = lib_2dgsl_tor_2ddata_edc13d8e( X1 );
        X3 = scrt4_vector_2d_3elist( a12737 );
        dbindings_ct_2darray_9826cb39( X2, 
                                       X3, 
                                       scrt4_c_2dsizeof_2ddouble_v, 
                                       TRUEVALUE );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_d_3egsl_21_378bb610_v );
DEFCSTRING( t15000, "SCHEME-MATRIX->GSL!" );
EXTERNTSCPP( qobischeme_matrix_2drows, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2drows_v );
EXTERNTSCPP( qobischeme_matrix_2dcolumns, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dcolumns_v );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( scrt1_append, XAL1( TSCP ) );
EXTERNTSCP( scrt1_append_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  lib_2dgsl_d_3egsl_21_378bb610( m12746 )
        TSCP  m12746;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15000 );
        X2 = qobischeme_matrix_2drows( m12746 );
        X3 = qobischeme_matrix_2dcolumns( m12746 );
        X1 = lib_2dgsl_ix_2dalloc_895c8eed( X2, X3 );
        X2 = lib_2dgsl_rix_2ddata_d500dbc5( X1 );
        X5 = scrt4_vector_2d_3elist( m12746 );
        X6 = X5;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L15005:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L15006;
        X4 = X7;
        goto L15013;
L15006:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L15009;
        scrt1__24__car_2derror( X6 );
L15009:
        X11 = PAIR_CAR( X6 );
        X10 = scrt4_vector_2d_3elist( X11 );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L15012;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L15005 );
L15012:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L15017;
        scdebug_error( c12783, 
                       c12784, CONS( X8, EMPTYLIST ) );
L15017:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L15005 );
L15013:
        X3 = qobischeme_reduce( scrt1_append_v, X4, EMPTYLIST );
        dbindings_ct_2darray_9826cb39( X2, 
                                       X3, 
                                       scrt4_c_2dsizeof_2ddouble_v, 
                                       TRUEVALUE );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_d_3escheme_c06d9a80_v );
DEFCSTRING( t15019, "GSL-VECTOR->SCHEME" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );
EXTERNTSCPP( dbindings__2d_3elist_7b0c30a4, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings__2d_3elist_7b0c30a4_v );

TSCP  lib_2dgsl_d_3escheme_c06d9a80( v12797 )
        TSCP  v12797;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t15019 );
        X2 = lib_2dgsl_tor_2ddata_edc13d8e( v12797 );
        X3 = lib_2dgsl_tor_2dsize_b7f2ea87( v12797 );
        X1 = dbindings__2d_3elist_7b0c30a4( X2, 
                                            scrt4_c_2dsizeof_2ddouble_v, 
                                            X3, TRUEVALUE );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( lib_2dgsl_d_3escheme_9ba8adb0_v );
DEFCSTRING( t15021, "GSL-MATRIX->SCHEME" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );
EXTERNTSCPP( qobischeme_sublist, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sublist_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  toollib_2dgsl_l12803( i12804, c15027 )
        TSCP  i12804, c15027;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dgsl_l12803 [inside GSL-MATRIX->SCHEME]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c15027, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c15027, 1 );
        X6 = lib_2dgsl_ix_2dsize2_5a8aec17( DISPLAY( 0 ) );
        if  ( BITAND( BITOR( _S2CINT( i12804 ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L15030;
        X5 = _TSCP( ITIMES( FIXED_C( i12804 ), 
                            _S2CINT( X6 ) ) );
        goto L15031;
L15030:
        X5 = scrt2__2a_2dtwo( i12804, X6 );
L15031:
        X7 = lib_2dgsl_ix_2dsize2_5a8aec17( DISPLAY( 0 ) );
        if  ( BITAND( BITOR( _S2CINT( i12804 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L15032;
        X8 = _TSCP( IPLUS( _S2CINT( i12804 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L15033;
L15032:
        X8 = scrt2__2b_2dtwo( i12804, _TSCP( 4 ) );
L15033:
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L15035;
        X6 = _TSCP( ITIMES( FIXED_C( X8 ), _S2CINT( X7 ) ) );
        goto L15036;
L15035:
        X6 = scrt2__2a_2dtwo( X8, X7 );
L15036:
        X4 = qobischeme_sublist( DISPLAY( 1 ), X5, X6 );
        X3 = scrt4_list_2d_3evector( X4 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  lib_2dgsl_d_3escheme_9ba8adb0( m12800 )
        TSCP  m12800;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t15021 );
        DISPLAY( 0 ) = m12800;
        X1 = lib_2dgsl_rix_2ddata_d500dbc5( DISPLAY( 0 ) );
        X3 = lib_2dgsl_ix_2dsize2_5a8aec17( DISPLAY( 0 ) );
        X4 = lib_2dgsl_ix_2dsize1_c383bdad( DISPLAY( 0 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L15024;
        X2 = _TSCP( ITIMES( FIXED_C( X4 ), _S2CINT( X3 ) ) );
        goto L15025;
L15024:
        X2 = scrt2__2a_2dtwo( X4, X3 );
L15025:
        DISPLAY( 1 ) = dbindings__2d_3elist_7b0c30a4( X1, 
                                                      scrt4_c_2dsizeof_2ddouble_v, 
                                                      X2, TRUEVALUE );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dgsl_l12803, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = lib_2dgsl_ix_2dsize1_c383bdad( DISPLAY( 0 ) );
        X1 = qobischeme_map_2dn( X2, X3 );
        SDVAL = scrt4_list_2d_3evector( X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( lib_2dgsl__2dfprintf_d50a0f12_v );
DEFCSTRING( t15037, "GSL-VECTOR-FPRINTF" );

TSCP  lib_2dgsl__2dfprintf_d50a0f12( g12831, g12832, g12833 )
        TSCP  g12831, g12832, g12833;
{
        PUSHSTACKTRACE( t15037 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_fprintf( TSCP_POINTER( g12831 ), 
                                                        TSCP_POINTER( g12832 ), 
                                                        TSCP_POINTER( g12833 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dfprintf_4d82cb47_v );
DEFCSTRING( t15039, "GSL-MATRIX-FPRINTF" );

TSCP  lib_2dgsl__2dfprintf_4d82cb47( g12840, g12841, g12842 )
        TSCP  g12840, g12841, g12842;
{
        PUSHSTACKTRACE( t15039 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_fprintf( TSCP_POINTER( g12840 ), 
                                                        TSCP_POINTER( g12841 ), 
                                                        TSCP_POINTER( g12842 ) ) ) );
}

DEFTSCP( toollib_2dgsl_stdin_v );
DEFCSTRING( t15041, "STDIN" );
DEFTSCP( toollib_2dgsl_stdout_v );
DEFCSTRING( t15042, "STDOUT" );
DEFTSCP( toollib_2dgsl_stderr_v );
DEFCSTRING( t15043, "STDERR" );
DEFTSCP( lib_2dgsl_trix_2dget_6b05a1e_v );
DEFCSTRING( t15044, "GSL-MATRIX-GET" );

TSCP  lib_2dgsl_trix_2dget_6b05a1e( g12852, g12853, g12854 )
        TSCP  g12852, g12853, g12854;
{
        PUSHSTACKTRACE( t15044 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_matrix_get( TSCP_POINTER( g12852 ), 
                                                    sc_tscp_int( g12853 ), 
                                                    sc_tscp_int( g12854 ) ) ) );
}

DEFTSCP( lib_2dgsl_trix_2dset_1d9f51b2_v );
DEFCSTRING( t15046, "GSL-MATRIX-SET" );

TSCP  lib_2dgsl_trix_2dset_1d9f51b2( g12861, 
                                     g12862, g12863, g12864 )
        TSCP  g12861, g12862, g12863, g12864;
{
        PUSHSTACKTRACE( t15046 );
        gsl_matrix_set( TSCP_POINTER( g12861 ), 
                        sc_tscp_int( g12862 ), 
                        sc_tscp_int( g12863 ), 
                        TSCP_DOUBLE( g12864 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_dtranspose_19a71410_v );
DEFCSTRING( t15049, "GSL-MATRIX-TRANSPOSE" );

TSCP  lib_2dgsl_dtranspose_19a71410( g12873 )
        TSCP  g12873;
{
        PUSHSTACKTRACE( t15049 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_transpose( TSCP_POINTER( g12873 ) ) ) );
}

DEFTSCP( lib_2dgsl_wap_2drows_d73fc6cf_v );
DEFCSTRING( t15051, "GSL-MATRIX-SWAP-ROWS" );

TSCP  lib_2dgsl_wap_2drows_d73fc6cf( g12878, g12879, g12880 )
        TSCP  g12878, g12879, g12880;
{
        PUSHSTACKTRACE( t15051 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_swap_rows( TSCP_POINTER( g12878 ), 
                                                          sc_tscp_int( g12879 ), 
                                                          sc_tscp_int( g12880 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dcolumns_30badcb6_v );
DEFCSTRING( t15053, "GSL-MATRIX-SWAP-COLUMNS" );

TSCP  lib_2dgsl__2dcolumns_30badcb6( g12887, g12888, g12889 )
        TSCP  g12887, g12888, g12889;
{
        PUSHSTACKTRACE( t15053 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_swap_columns( TSCP_POINTER( g12887 ), 
                                                             sc_tscp_int( g12888 ), 
                                                             sc_tscp_int( g12889 ) ) ) );
}

DEFTSCP( lib_2dgsl_t_2drow_21_331c81b4_v );
DEFCSTRING( t15055, "GSL-MATRIX-GET-ROW!" );

TSCP  lib_2dgsl_t_2drow_21_331c81b4( g12896, g12897, g12898 )
        TSCP  g12896, g12897, g12898;
{
        PUSHSTACKTRACE( t15055 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_get_row( TSCP_POINTER( g12896 ), 
                                                        TSCP_POINTER( g12897 ), 
                                                        sc_tscp_int( g12898 ) ) ) );
}

DEFTSCP( lib_2dgsl_t_2dcol_21_7c8e8014_v );
DEFCSTRING( t15057, "GSL-MATRIX-GET-COL!" );

TSCP  lib_2dgsl_t_2dcol_21_7c8e8014( g12905, g12906, g12907 )
        TSCP  g12905, g12906, g12907;
{
        PUSHSTACKTRACE( t15057 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_get_col( TSCP_POINTER( g12905 ), 
                                                        TSCP_POINTER( g12906 ), 
                                                        sc_tscp_int( g12907 ) ) ) );
}

DEFTSCP( lib_2dgsl_t_2drow_21_3c025737_v );
DEFCSTRING( t15059, "GSL-MATRIX-SET-ROW!" );

TSCP  lib_2dgsl_t_2drow_21_3c025737( g12914, g12915, g12916 )
        TSCP  g12914, g12915, g12916;
{
        PUSHSTACKTRACE( t15059 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_set_row( TSCP_POINTER( g12914 ), 
                                                        sc_tscp_int( g12915 ), 
                                                        TSCP_POINTER( g12916 ) ) ) );
}

DEFTSCP( lib_2dgsl_t_2dcol_21_73905697_v );
DEFCSTRING( t15061, "GSL-MATRIX-SET-COL!" );

TSCP  lib_2dgsl_t_2dcol_21_73905697( g12923, g12924, g12925 )
        TSCP  g12923, g12924, g12925;
{
        PUSHSTACKTRACE( t15061 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_set_col( TSCP_POINTER( g12923 ), 
                                                        sc_tscp_int( g12924 ), 
                                                        TSCP_POINTER( g12925 ) ) ) );
}

DEFTSCP( lib_2dgsl_dget_2drow_bb8c98f0_v );
DEFCSTRING( t15063, "GSL-MATRIX-GET-ROW" );
EXTERNTSCPP( lib_2dgsl_y_2dmatrix_21baa1f3, XAL1( TSCP ) );
EXTERNTSCP( lib_2dgsl_y_2dmatrix_21baa1f3_v );

TSCP  lib_2dgsl_dget_2drow_bb8c98f0( a12932, v12933, i12934 )
        TSCP  a12932, v12933, i12934;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15063 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a12932 );
        lib_2dgsl_t_2drow_21_331c81b4( X1, v12933, i12934 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_dget_2dcol_2c0d985b_v );
DEFCSTRING( t15066, "GSL-MATRIX-GET-COL" );

TSCP  lib_2dgsl_dget_2dcol_2c0d985b( a12940, v12941, i12942 )
        TSCP  a12940, v12941, i12942;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15066 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a12940 );
        lib_2dgsl_t_2dcol_21_7c8e8014( X1, v12941, i12942 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_dset_2drow_4aa08b8d_v );
DEFCSTRING( t15069, "GSL-MATRIX-SET-ROW" );

TSCP  lib_2dgsl_dset_2drow_4aa08b8d( a12947, i12948, v12949 )
        TSCP  a12947, i12948, v12949;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15069 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a12947 );
        lib_2dgsl_t_2drow_21_3c025737( X1, i12948, v12949 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_dset_2dcol_dd218b26_v );
DEFCSTRING( t15072, "GSL-MATRIX-SET-COL" );

TSCP  lib_2dgsl_dset_2dcol_dd218b26( a12954, i12955, v12956 )
        TSCP  a12954, i12955, v12956;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15072 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a12954 );
        lib_2dgsl_t_2dcol_21_73905697( X1, i12955, v12956 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_dmemcpy_21_d4e6adf1_v );
DEFCSTRING( t15075, "GSL-VECTOR-MEMCPY!" );

TSCP  lib_2dgsl_dmemcpy_21_d4e6adf1( g12961, g12962 )
        TSCP  g12961, g12962;
{
        PUSHSTACKTRACE( t15075 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_memcpy( TSCP_POINTER( g12961 ), 
                                                       TSCP_POINTER( g12962 ) ) ) );
}

DEFTSCP( lib_2dgsl_dmemcpy_21_8f239ac1_v );
DEFCSTRING( t15077, "GSL-MATRIX-MEMCPY!" );

TSCP  lib_2dgsl_dmemcpy_21_8f239ac1( g12968, g12969 )
        TSCP  g12968, g12969;
{
        PUSHSTACKTRACE( t15077 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_memcpy( TSCP_POINTER( g12968 ), 
                                                       TSCP_POINTER( g12969 ) ) ) );
}

DEFTSCP( lib_2dgsl_y_2dvector_c2e7a867_v );
DEFCSTRING( t15079, "GSL-COPY-VECTOR" );

TSCP  lib_2dgsl_y_2dvector_c2e7a867( v12975 )
        TSCP  v12975;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t15079 );
        X2 = lib_2dgsl_tor_2dsize_b7f2ea87( v12975 );
        X1 = lib_2dgsl_or_2dalloc_686ad713( X2 );
        lib_2dgsl_dmemcpy_21_d4e6adf1( X1, v12975 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_y_2dmatrix_21baa1f3_v );
DEFCSTRING( t15082, "GSL-COPY-MATRIX" );

TSCP  lib_2dgsl_y_2dmatrix_21baa1f3( m12979 )
        TSCP  m12979;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t15082 );
        X2 = lib_2dgsl_ix_2dsize1_c383bdad( m12979 );
        X3 = lib_2dgsl_ix_2dsize2_5a8aec17( m12979 );
        X1 = lib_2dgsl_ix_2dalloc_895c8eed( X2, X3 );
        lib_2dgsl_dmemcpy_21_8f239ac1( X1, m12979 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( lib_2dgsl_r_2dadd_21_a707c198_v );
DEFCSTRING( t15085, "GSL-VECTOR-ADD!" );

TSCP  lib_2dgsl_r_2dadd_21_a707c198( g12984, g12985 )
        TSCP  g12984, g12985;
{
        PUSHSTACKTRACE( t15085 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_add( TSCP_POINTER( g12984 ), 
                                                    TSCP_POINTER( g12985 ) ) ) );
}

DEFTSCP( lib_2dgsl_r_2dsub_21_91f283e6_v );
DEFCSTRING( t15087, "GSL-VECTOR-SUB!" );

TSCP  lib_2dgsl_r_2dsub_21_91f283e6( g12991, g12992 )
        TSCP  g12991, g12992;
{
        PUSHSTACKTRACE( t15087 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_sub( TSCP_POINTER( g12991 ), 
                                                    TSCP_POINTER( g12992 ) ) ) );
}

DEFTSCP( lib_2dgsl_r_2dmul_21_48f1973e_v );
DEFCSTRING( t15089, "GSL-VECTOR-MUL!" );

TSCP  lib_2dgsl_r_2dmul_21_48f1973e( g12998, g12999 )
        TSCP  g12998, g12999;
{
        PUSHSTACKTRACE( t15089 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_mul( TSCP_POINTER( g12998 ), 
                                                    TSCP_POINTER( g12999 ) ) ) );
}

DEFTSCP( lib_2dgsl_r_2ddiv_21_f54a0b8e_v );
DEFCSTRING( t15091, "GSL-VECTOR-DIV!" );

TSCP  lib_2dgsl_r_2ddiv_21_f54a0b8e( g13005, g13006 )
        TSCP  g13005, g13006;
{
        PUSHSTACKTRACE( t15091 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_div( TSCP_POINTER( g13005 ), 
                                                    TSCP_POINTER( g13006 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dscale_21_b0b38b74_v );
DEFCSTRING( t15093, "GSL-VECTOR-SCALE!" );

TSCP  lib_2dgsl_2dscale_21_b0b38b74( g13012, g13013 )
        TSCP  g13012, g13013;
{
        PUSHSTACKTRACE( t15093 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_scale( TSCP_POINTER( g13012 ), 
                                                      TSCP_DOUBLE( g13013 ) ) ) );
}

DEFTSCP( lib_2dgsl_onstant_21_9a253a9_v );
DEFCSTRING( t15095, "GSL-VECTOR-ADD-CONSTANT!" );

TSCP  lib_2dgsl_onstant_21_9a253a9( g13019, g13020 )
        TSCP  g13019, g13020;
{
        PUSHSTACKTRACE( t15095 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_add_constant( TSCP_POINTER( g13019 ), 
                                                             TSCP_DOUBLE( g13020 ) ) ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dv_2b_v );
DEFCSTRING( t15097, "GSL-V+" );

TSCP  toollib_2dgsl_gsl_2dv_2b( a13026, b13027 )
        TSCP  a13026, b13027;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15097 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13026 );
        POPSTACKTRACE( lib_2dgsl_r_2dadd_21_a707c198( X1, b13027 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dv_2d_v );
DEFCSTRING( t15099, "GSL-V-" );

TSCP  toollib_2dgsl_gsl_2dv_2d( a13030, b13031 )
        TSCP  a13030, b13031;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15099 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13030 );
        POPSTACKTRACE( lib_2dgsl_r_2dsub_21_91f283e6( X1, b13031 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dv_2a_v );
DEFCSTRING( t15101, "GSL-V*" );

TSCP  toollib_2dgsl_gsl_2dv_2a( a13034, b13035 )
        TSCP  a13034, b13035;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15101 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13034 );
        POPSTACKTRACE( lib_2dgsl_r_2dmul_21_48f1973e( X1, b13035 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dv_2f_v );
DEFCSTRING( t15103, "GSL-V/" );

TSCP  toollib_2dgsl_gsl_2dv_2f( a13038, b13039 )
        TSCP  a13038, b13039;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15103 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13038 );
        POPSTACKTRACE( lib_2dgsl_r_2ddiv_21_f54a0b8e( X1, b13039 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dk_2av_v );
DEFCSTRING( t15105, "GSL-K*V" );

TSCP  toollib_2dgsl_gsl_2dk_2av( a13042, b13043 )
        TSCP  a13042, b13043;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15105 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13042 );
        POPSTACKTRACE( lib_2dgsl_2dscale_21_b0b38b74( X1, b13043 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dk_2bv_v );
DEFCSTRING( t15107, "GSL-K+V" );

TSCP  toollib_2dgsl_gsl_2dk_2bv( a13046, b13047 )
        TSCP  a13046, b13047;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15107 );
        X1 = lib_2dgsl_y_2dvector_c2e7a867( a13046 );
        POPSTACKTRACE( lib_2dgsl_onstant_21_9a253a9( X1, b13047 ) );
}

DEFTSCP( lib_2dgsl_x_2dadd_21_fde328da_v );
DEFCSTRING( t15109, "GSL-MATRIX-ADD!" );

TSCP  lib_2dgsl_x_2dadd_21_fde328da( g13050, g13051 )
        TSCP  g13050, g13051;
{
        PUSHSTACKTRACE( t15109 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_add( TSCP_POINTER( g13050 ), 
                                                    TSCP_POINTER( g13051 ) ) ) );
}

DEFTSCP( lib_2dgsl_x_2dsub_21_cb166aa4_v );
DEFCSTRING( t15111, "GSL-MATRIX-SUB!" );

TSCP  lib_2dgsl_x_2dsub_21_cb166aa4( g13057, g13058 )
        TSCP  g13057, g13058;
{
        PUSHSTACKTRACE( t15111 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_sub( TSCP_POINTER( g13057 ), 
                                                    TSCP_POINTER( g13058 ) ) ) );
}

DEFTSCP( lib_2dgsl_lements_21_920dbfbd_v );
DEFCSTRING( t15113, "GSL-MATRIX-MUL-ELEMENTS!" );

TSCP  lib_2dgsl_lements_21_920dbfbd( g13064, g13065 )
        TSCP  g13064, g13065;
{
        PUSHSTACKTRACE( t15113 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_mul_elements( TSCP_POINTER( g13064 ), 
                                                             TSCP_POINTER( g13065 ) ) ) );
}

DEFTSCP( lib_2dgsl_lements_21_91d3346f_v );
DEFCSTRING( t15115, "GSL-MATRIX-DIV-ELEMENTS!" );

TSCP  lib_2dgsl_lements_21_91d3346f( g13071, g13072 )
        TSCP  g13071, g13072;
{
        PUSHSTACKTRACE( t15115 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_div_elements( TSCP_POINTER( g13071 ), 
                                                             TSCP_POINTER( g13072 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dscale_21_ab2aa6cb_v );
DEFCSTRING( t15117, "GSL-MATRIX-SCALE!" );

TSCP  lib_2dgsl_2dscale_21_ab2aa6cb( g13078, g13079 )
        TSCP  g13078, g13079;
{
        PUSHSTACKTRACE( t15117 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_scale( TSCP_POINTER( g13078 ), 
                                                      TSCP_DOUBLE( g13079 ) ) ) );
}

DEFTSCP( lib_2dgsl_onstant_21_ef4dead5_v );
DEFCSTRING( t15119, "GSL-MATRIX-ADD-CONSTANT!" );

TSCP  lib_2dgsl_onstant_21_ef4dead5( g13085, g13086 )
        TSCP  g13085, g13086;
{
        PUSHSTACKTRACE( t15119 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_add_constant( TSCP_POINTER( g13085 ), 
                                                             TSCP_DOUBLE( g13086 ) ) ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dm_2b_v );
DEFCSTRING( t15121, "GSL-M+" );

TSCP  toollib_2dgsl_gsl_2dm_2b( a13092, b13093 )
        TSCP  a13092, b13093;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15121 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13092 );
        POPSTACKTRACE( lib_2dgsl_x_2dadd_21_fde328da( X1, b13093 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dm_2d_v );
DEFCSTRING( t15123, "GSL-M-" );

TSCP  toollib_2dgsl_gsl_2dm_2d( a13096, b13097 )
        TSCP  a13096, b13097;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15123 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13096 );
        POPSTACKTRACE( lib_2dgsl_x_2dsub_21_cb166aa4( X1, b13097 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dk_2bm_v );
DEFCSTRING( t15125, "GSL-K+M" );

TSCP  toollib_2dgsl_gsl_2dk_2bm( k13100, m13101 )
        TSCP  k13100, m13101;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15125 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( m13101 );
        POPSTACKTRACE( lib_2dgsl_onstant_21_ef4dead5( X1, k13100 ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dk_2am_v );
DEFCSTRING( t15127, "GSL-K*M" );

TSCP  toollib_2dgsl_gsl_2dk_2am( k13104, m13105 )
        TSCP  k13104, m13105;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15127 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( m13105 );
        POPSTACKTRACE( lib_2dgsl_2dscale_21_ab2aa6cb( X1, k13104 ) );
}

DEFTSCP( lib_2dgsl_2delements_470ab48f_v );
DEFCSTRING( t15129, "GSL-M*-ELEMENTS" );

TSCP  lib_2dgsl_2delements_470ab48f( a13108, b13109 )
        TSCP  a13108, b13109;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15129 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13108 );
        POPSTACKTRACE( lib_2dgsl_lements_21_920dbfbd( X1, b13109 ) );
}

DEFTSCP( lib_2dgsl_2delements_33925d00_v );
DEFCSTRING( t15131, "GSL-M/-ELEMENTS" );

TSCP  lib_2dgsl_2delements_33925d00( a13112, b13113 )
        TSCP  a13112, b13113;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15131 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13112 );
        POPSTACKTRACE( lib_2dgsl_lements_21_91d3346f( X1, b13113 ) );
}

DEFTSCP( lib_2dgsl_x_2dall_21_8274bf4_v );
DEFCSTRING( t15133, "GSL-MATRIX-ALL!" );

TSCP  lib_2dgsl_x_2dall_21_8274bf4( g13116, g13117 )
        TSCP  g13116, g13117;
{
        PUSHSTACKTRACE( t15133 );
        gsl_matrix_set_all( TSCP_POINTER( g13116 ), 
                            TSCP_DOUBLE( g13117 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl__2dzero_21_ed09527a_v );
DEFCSTRING( t15136, "GSL-MATRIX-ZERO!" );

TSCP  lib_2dgsl__2dzero_21_ed09527a( g13124 )
        TSCP  g13124;
{
        PUSHSTACKTRACE( t15136 );
        gsl_matrix_set_zero( TSCP_POINTER( g13124 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_dentity_21_4e87e9c3_v );
DEFCSTRING( t15139, "GSL-MATRIX-IDENTITY!" );

TSCP  lib_2dgsl_dentity_21_4e87e9c3( g13130 )
        TSCP  g13130;
{
        PUSHSTACKTRACE( t15139 );
        gsl_matrix_set_identity( TSCP_POINTER( g13130 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl__2dnull_3f_5c3f9b27_v );
DEFCSTRING( t15142, "GSL-MATRIX-NULL?" );

TSCP  lib_2dgsl__2dnull_3f_5c3f9b27( g13136 )
        TSCP  g13136;
{
        PUSHSTACKTRACE( t15142 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_isnull( TSCP_POINTER( g13136 ) ) ) );
}

DEFTSCP( lib_2dgsl_ositive_3f_3ad894c9_v );
DEFCSTRING( t15144, "GSL-MATRIX-POSITIVE?" );

TSCP  lib_2dgsl_ositive_3f_3ad894c9( g13141 )
        TSCP  g13141;
{
        PUSHSTACKTRACE( t15144 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_ispos( TSCP_POINTER( g13141 ) ) ) );
}

DEFTSCP( lib_2dgsl_egative_3f_f3b3e305_v );
DEFCSTRING( t15146, "GSL-MATRIX-NEGATIVE?" );

TSCP  lib_2dgsl_egative_3f_f3b3e305( g13146 )
        TSCP  g13146;
{
        PUSHSTACKTRACE( t15146 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_isneg( TSCP_POINTER( g13146 ) ) ) );
}

DEFTSCP( lib_2dgsl_egative_3f_e2e249aa_v );
DEFCSTRING( t15148, "GSL-MATRIX-NON-NEGATIVE?" );

TSCP  lib_2dgsl_egative_3f_e2e249aa( g13151 )
        TSCP  g13151;
{
        PUSHSTACKTRACE( t15148 );
        POPSTACKTRACE( sc_int_tscp( gsl_matrix_isnonneg( TSCP_POINTER( g13151 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dnull_3f_c4b75f72_v );
DEFCSTRING( t15150, "GSL-VECTOR-NULL?" );

TSCP  lib_2dgsl__2dnull_3f_c4b75f72( g13156 )
        TSCP  g13156;
{
        PUSHSTACKTRACE( t15150 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_isnull( TSCP_POINTER( g13156 ) ) ) );
}

DEFTSCP( lib_2dgsl_ositive_3f_5d235cf0_v );
DEFCSTRING( t15152, "GSL-VECTOR-POSITIVE?" );

TSCP  lib_2dgsl_ositive_3f_5d235cf0( g13161 )
        TSCP  g13161;
{
        PUSHSTACKTRACE( t15152 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_ispos( TSCP_POINTER( g13161 ) ) ) );
}

DEFTSCP( lib_2dgsl_egative_3f_94482b3c_v );
DEFCSTRING( t15154, "GSL-VECTOR-NEGATIVE?" );

TSCP  lib_2dgsl_egative_3f_94482b3c( g13166 )
        TSCP  g13166;
{
        PUSHSTACKTRACE( t15154 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_isneg( TSCP_POINTER( g13166 ) ) ) );
}

DEFTSCP( lib_2dgsl_egative_3f_40df0d6_v );
DEFCSTRING( t15156, "GSL-VECTOR-NON-NEGATIVE?" );

TSCP  lib_2dgsl_egative_3f_40df0d6( g13171 )
        TSCP  g13171;
{
        PUSHSTACKTRACE( t15156 );
        POPSTACKTRACE( sc_int_tscp( gsl_vector_isnonneg( TSCP_POINTER( g13171 ) ) ) );
}

DEFTSCP( lib_2dgsl_ddecomp_21_dd582711_v );
DEFCSTRING( t15158, "GSL-SVD-DECOMP!" );

TSCP  lib_2dgsl_ddecomp_21_dd582711( g13176, 
                                     g13177, g13178, g13179 )
        TSCP  g13176, g13177, g13178, g13179;
{
        PUSHSTACKTRACE( t15158 );
        POPSTACKTRACE( sc_int_tscp( gsl_linalg_SV_decomp( TSCP_POINTER( g13176 ), 
                                                          TSCP_POINTER( g13177 ), 
                                                          TSCP_POINTER( g13178 ), 
                                                          TSCP_POINTER( g13179 ) ) ) );
}

DEFTSCP( toollib_2dgsl_gsl_2dsvd_v );
DEFCSTRING( t15160, "GSL-SVD" );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );

TSCP  toollib_2dgsl_gsl_2dsvd( a13187 )
        TSCP  a13187;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15160 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13187 );
        X3 = lib_2dgsl_ix_2dsize2_5a8aec17( a13187 );
        X4 = lib_2dgsl_ix_2dsize2_5a8aec17( a13187 );
        X2 = lib_2dgsl_ix_2dalloc_895c8eed( X3, X4 );
        X4 = lib_2dgsl_ix_2dsize2_5a8aec17( a13187 );
        X3 = lib_2dgsl_or_2dalloc_686ad713( X4 );
        X5 = lib_2dgsl_ix_2dsize2_5a8aec17( a13187 );
        X4 = lib_2dgsl_or_2dalloc_686ad713( X5 );
        lib_2dgsl_ddecomp_21_dd582711( X1, X2, X3, X4 );
        lib_2dgsl_tor_2dfree_d1c0f25( X4 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( X2, X5 );
        POPSTACKTRACE( scrt1_cons_2a( X1, CONS( X3, X5 ) ) );
}

DEFTSCP( lib_2dgsl_dworkspace_ba4f9e68_v );
DEFCSTRING( t15166, "GSL-EIGEN-SYMMV-WORKSPACE" );

TSCP  lib_2dgsl_dworkspace_ba4f9e68( g13198 )
        TSCP  g13198;
{
        PUSHSTACKTRACE( t15166 );
        POPSTACKTRACE( POINTER_TSCP( gsl_eigen_symmv_alloc( sc_tscp_int( g13198 ) ) ) );
}

DEFTSCP( lib_2dgsl_mmv_2dfree_18b35b7_v );
DEFCSTRING( t15168, "GSL-EIGEN-SYMMV-FREE" );

TSCP  lib_2dgsl_mmv_2dfree_18b35b7( g13203 )
        TSCP  g13203;
{
        PUSHSTACKTRACE( t15168 );
        gsl_eigen_symmv_free( TSCP_POINTER( g13203 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_2dsymmv_21_183ec4e4_v );
DEFCSTRING( t15171, "GSL-EIGEN-SYMMV!" );

TSCP  lib_2dgsl_2dsymmv_21_183ec4e4( g13209, 
                                     g13210, g13211, g13212 )
        TSCP  g13209, g13210, g13211, g13212;
{
        PUSHSTACKTRACE( t15171 );
        POPSTACKTRACE( sc_int_tscp( gsl_eigen_symmv( TSCP_POINTER( g13209 ), 
                                                     TSCP_POINTER( g13210 ), 
                                                     TSCP_POINTER( g13211 ), 
                                                     TSCP_POINTER( g13212 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dsort_21_73cf9408_v );
DEFCSTRING( t15173, "GSL-EIGEN-SYMMV-SORT!" );

TSCP  lib_2dgsl__2dsort_21_73cf9408( g13220, g13221, g13222 )
        TSCP  g13220, g13221, g13222;
{
        PUSHSTACKTRACE( t15173 );
        POPSTACKTRACE( sc_int_tscp( gsl_eigen_symmv_sort( TSCP_POINTER( g13220 ), 
                                                          TSCP_POINTER( g13221 ), 
                                                          sc_tscp_int( g13222 ) ) ) );
}

DEFTSCP( lib_2dgsl_dval_2dasc_7fb3ebfb_v );
DEFCSTRING( t15175, "GSL-EIGEN-SORT-VAL-ASC" );
DEFTSCP( lib_2dgsl_val_2ddesc_9b1c953c_v );
DEFCSTRING( t15176, "GSL-EIGEN-SORT-VAL-DESC" );
DEFTSCP( lib_2dgsl_gen_2dsymm_ca653386_v );
DEFCSTRING( t15177, "GSL-EIGEN-SYMM" );

TSCP  lib_2dgsl_gen_2dsymm_ca653386( a13231 )
        TSCP  a13231;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15177 );
        X1 = lib_2dgsl_y_2dmatrix_21baa1f3( a13231 );
        X3 = lib_2dgsl_ix_2dsize2_5a8aec17( X1 );
        X2 = lib_2dgsl_or_2dalloc_686ad713( X3 );
        X4 = lib_2dgsl_ix_2dsize1_c383bdad( X1 );
        X5 = lib_2dgsl_ix_2dsize2_5a8aec17( X1 );
        X3 = lib_2dgsl_ix_2dalloc_895c8eed( X4, X5 );
        X5 = lib_2dgsl_ix_2dsize2_5a8aec17( X1 );
        X4 = lib_2dgsl_dworkspace_ba4f9e68( X5 );
        lib_2dgsl_2dsymmv_21_183ec4e4( X1, X2, X3, X4 );
        lib_2dgsl__2dsort_21_73cf9408( X2, 
                                       X3, 
                                       lib_2dgsl_dval_2dasc_7fb3ebfb_v );
        lib_2dgsl_mmv_2dfree_18b35b7( X4 );
        lib_2dgsl_rix_2dfree_35dde96e( X1 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        POPSTACKTRACE( scrt1_cons_2a( X2, CONS( X3, X5 ) ) );
}

DEFTSCP( lib_2dgsl_dbernoulli_f32876f4_v );
DEFCSTRING( t15183, "GSL:RAN-BERNOULLI" );

TSCP  lib_2dgsl_dbernoulli_f32876f4( g13242, g13243 )
        TSCP  g13242, g13243;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15183 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13242 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_bernoulli( TSCP_POINTER( X1 ), 
                                                        TSCP_DOUBLE( g13243 ) ) ) );
}

DEFTSCP( lib_2dgsl_ulli_2dpdf_49593736_v );
DEFCSTRING( t15185, "GSL:RAN-BERNOULLI-PDF" );

TSCP  lib_2dgsl_ulli_2dpdf_49593736( g13249, g13250 )
        TSCP  g13249, g13250;
{
        PUSHSTACKTRACE( t15185 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_bernoulli_pdf( TSCP_S2CUINT( g13249 ), 
                                                           TSCP_DOUBLE( g13250 ) ) ) );
}

DEFTSCP( lib_2dgsl_ran_2dbeta_2db84c4d_v );
DEFCSTRING( t15187, "GSL:RAN-BETA" );

TSCP  lib_2dgsl_ran_2dbeta_2db84c4d( g13256, g13257, g13258 )
        TSCP  g13256, g13257, g13258;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15187 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13256 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_beta( TSCP_POINTER( X1 ), 
                                                  TSCP_DOUBLE( g13257 ), 
                                                  TSCP_DOUBLE( g13258 ) ) ) );
}

DEFTSCP( lib_2dgsl_beta_2dpdf_a55a2c32_v );
DEFCSTRING( t15189, "GSL:RAN-BETA-PDF" );

TSCP  lib_2dgsl_beta_2dpdf_a55a2c32( g13265, g13266, g13267 )
        TSCP  g13265, g13266, g13267;
{
        PUSHSTACKTRACE( t15189 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_beta_pdf( TSCP_DOUBLE( g13265 ), 
                                                      TSCP_DOUBLE( g13266 ), 
                                                      TSCP_DOUBLE( g13267 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dbinomial_1548d18d_v );
DEFCSTRING( t15191, "GSL:RAN-BINOMIAL" );

TSCP  lib_2dgsl_2dbinomial_1548d18d( g13274, g13275, g13276 )
        TSCP  g13274, g13275, g13276;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15191 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13274 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_binomial( TSCP_POINTER( X1 ), 
                                                       TSCP_DOUBLE( g13275 ), 
                                                       TSCP_S2CUINT( g13276 ) ) ) );
}

DEFTSCP( lib_2dgsl_al_2dknuth_c105291b_v );
DEFCSTRING( t15193, "GSL:RAN-BINOMIAL-KNUTH" );

TSCP  lib_2dgsl_al_2dknuth_c105291b( g13283, g13284, g13285 )
        TSCP  g13283, g13284, g13285;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15193 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13283 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_binomial_knuth( TSCP_POINTER( X1 ), 
                                                             TSCP_DOUBLE( g13284 ), 
                                                             TSCP_S2CUINT( g13285 ) ) ) );
}

DEFTSCP( lib_2dgsl_mial_2dtpe_81945d9b_v );
DEFCSTRING( t15195, "GSL:RAN-BINOMIAL-TPE" );

TSCP  lib_2dgsl_mial_2dtpe_81945d9b( g13292, g13293, g13294 )
        TSCP  g13292, g13293, g13294;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15195 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13292 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_binomial_tpe( TSCP_POINTER( X1 ), 
                                                           TSCP_DOUBLE( g13293 ), 
                                                           TSCP_S2CUINT( g13294 ) ) ) );
}

DEFTSCP( lib_2dgsl_mial_2dpdf_313a73a8_v );
DEFCSTRING( t15197, "GSL:RAN-BINOMIAL-PDF" );

TSCP  lib_2dgsl_mial_2dpdf_313a73a8( g13301, g13302, g13303 )
        TSCP  g13301, g13302, g13303;
{
        PUSHSTACKTRACE( t15197 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_binomial_pdf( TSCP_S2CUINT( g13301 ), 
                                                          TSCP_DOUBLE( g13302 ), 
                                                          TSCP_S2CUINT( g13303 ) ) ) );
}

DEFTSCP( lib_2dgsl_xponential_a2af66f1_v );
DEFCSTRING( t15199, "GSL:RAN-EXPONENTIAL" );

TSCP  lib_2dgsl_xponential_a2af66f1( g13310, g13311 )
        TSCP  g13310, g13311;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15199 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13310 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_exponential( TSCP_POINTER( X1 ), 
                                                         TSCP_DOUBLE( g13311 ) ) ) );
}

DEFTSCP( lib_2dgsl_tial_2dpdf_6484fb02_v );
DEFCSTRING( t15201, "GSL:RAN-EXPONENTIAL-PDF" );

TSCP  lib_2dgsl_tial_2dpdf_6484fb02( g13317, g13318 )
        TSCP  g13317, g13318;
{
        PUSHSTACKTRACE( t15201 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_exponential_pdf( TSCP_DOUBLE( g13317 ), 
                                                             TSCP_DOUBLE( g13318 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2dexppow_14abf27_v );
DEFCSTRING( t15203, "GSL:RAN-EXPPOW" );

TSCP  lib_2dgsl_n_2dexppow_14abf27( g13324, g13325, g13326 )
        TSCP  g13324, g13325, g13326;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15203 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13324 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_exppow( TSCP_POINTER( X1 ), 
                                                    TSCP_DOUBLE( g13325 ), 
                                                    TSCP_DOUBLE( g13326 ) ) ) );
}

DEFTSCP( lib_2dgsl_ppow_2dpdf_1e994b2b_v );
DEFCSTRING( t15205, "GSL:RAN-EXPPOW-PDF" );

TSCP  lib_2dgsl_ppow_2dpdf_1e994b2b( g13333, g13334, g13335 )
        TSCP  g13333, g13334, g13335;
{
        PUSHSTACKTRACE( t15205 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_exppow_pdf( TSCP_DOUBLE( g13333 ), 
                                                        TSCP_DOUBLE( g13334 ), 
                                                        TSCP_DOUBLE( g13335 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2dcauchy_3ba4ff12_v );
DEFCSTRING( t15207, "GSL:RAN-CAUCHY" );

TSCP  lib_2dgsl_n_2dcauchy_3ba4ff12( g13342, g13343 )
        TSCP  g13342, g13343;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15207 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13342 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_cauchy( TSCP_POINTER( X1 ), 
                                                    TSCP_DOUBLE( g13343 ) ) ) );
}

DEFTSCP( lib_2dgsl_uchy_2dpdf_d81d331_v );
DEFCSTRING( t15209, "GSL:RAN-CAUCHY-PDF" );

TSCP  lib_2dgsl_uchy_2dpdf_d81d331( g13349, g13350 )
        TSCP  g13349, g13350;
{
        PUSHSTACKTRACE( t15209 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_cauchy_pdf( TSCP_DOUBLE( g13349 ), 
                                                        TSCP_DOUBLE( g13350 ) ) ) );
}

DEFTSCP( lib_2dgsl_an_2dchisq_8c427556_v );
DEFCSTRING( t15211, "GSL:RAN-CHISQ" );

TSCP  lib_2dgsl_an_2dchisq_8c427556( g13356, g13357 )
        TSCP  g13356, g13357;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15211 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13356 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_chisq( TSCP_POINTER( X1 ), 
                                                   TSCP_DOUBLE( g13357 ) ) ) );
}

DEFTSCP( lib_2dgsl_hisq_2dpdf_511bc509_v );
DEFCSTRING( t15213, "GSL:RAN-CHISQ-PDF" );

TSCP  lib_2dgsl_hisq_2dpdf_511bc509( g13363, g13364 )
        TSCP  g13363, g13364;
{
        PUSHSTACKTRACE( t15213 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_chisq_pdf( TSCP_DOUBLE( g13363 ), 
                                                       TSCP_DOUBLE( g13364 ) ) ) );
}

DEFTSCP( lib_2dgsl_ddirichlet_1fdf9f5a_v );
DEFCSTRING( t15215, "GSL:RAN-DIRICHLET" );

TSCP  lib_2dgsl_ddirichlet_1fdf9f5a( g13370, 
                                     g13371, g13372, g13373 )
        TSCP  g13370, g13371, g13372, g13373;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15215 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13370 );
        gsl_ran_dirichlet( TSCP_POINTER( X1 ), 
                           TSCP_S2CUINT( g13371 ), 
                           TSCP_POINTER( g13372 ), 
                           TSCP_POINTER( g13373 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_hlet_2dpdf_f4c2e5dc_v );
DEFCSTRING( t15218, "GSL:RAN-DIRICHLET-PDF" );

TSCP  lib_2dgsl_hlet_2dpdf_f4c2e5dc( g13382, g13383, g13384 )
        TSCP  g13382, g13383, g13384;
{
        PUSHSTACKTRACE( t15218 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_dirichlet_pdf( TSCP_S2CUINT( g13382 ), 
                                                           TSCP_POINTER( g13383 ), 
                                                           TSCP_POINTER( g13384 ) ) ) );
}

DEFTSCP( lib_2dgsl_et_2dlnpdf_8aab47cd_v );
DEFCSTRING( t15220, "GSL:RAN-DIRICHLET-LNPDF" );

TSCP  lib_2dgsl_et_2dlnpdf_8aab47cd( g13391, g13392, g13393 )
        TSCP  g13391, g13392, g13393;
{
        PUSHSTACKTRACE( t15220 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_dirichlet_lnpdf( TSCP_S2CUINT( g13391 ), 
                                                             TSCP_POINTER( g13392 ), 
                                                             TSCP_POINTER( g13393 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2derlang_487da7c3_v );
DEFCSTRING( t15222, "GSL:RAN-ERLANG" );

TSCP  lib_2dgsl_n_2derlang_487da7c3( g13400, g13401, g13402 )
        TSCP  g13400, g13401, g13402;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15222 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13400 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_erlang( TSCP_POINTER( X1 ), 
                                                    TSCP_DOUBLE( g13401 ), 
                                                    TSCP_DOUBLE( g13402 ) ) ) );
}

DEFTSCP( lib_2dgsl_lang_2dpdf_d16bb8ab_v );
DEFCSTRING( t15224, "GSL:RAN-ERLANG-PDF" );

TSCP  lib_2dgsl_lang_2dpdf_d16bb8ab( g13409, g13410, g13411 )
        TSCP  g13409, g13410, g13411;
{
        PUSHSTACKTRACE( t15224 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_erlang_pdf( TSCP_DOUBLE( g13409 ), 
                                                        TSCP_DOUBLE( g13410 ), 
                                                        TSCP_DOUBLE( g13411 ) ) ) );
}

DEFTSCP( lib_2dgsl_an_2dfdist_7e1eb111_v );
DEFCSTRING( t15226, "GSL:RAN-FDIST" );

TSCP  lib_2dgsl_an_2dfdist_7e1eb111( g13418, g13419, g13420 )
        TSCP  g13418, g13419, g13420;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15226 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13418 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_fdist( TSCP_POINTER( X1 ), 
                                                   TSCP_DOUBLE( g13419 ), 
                                                   TSCP_DOUBLE( g13420 ) ) ) );
}

DEFTSCP( lib_2dgsl_dist_2dpdf_6848a662_v );
DEFCSTRING( t15228, "GSL:RAN-FDIST-PDF" );

TSCP  lib_2dgsl_dist_2dpdf_6848a662( g13427, g13428, g13429 )
        TSCP  g13427, g13428, g13429;
{
        PUSHSTACKTRACE( t15228 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_fdist_pdf( TSCP_DOUBLE( g13427 ), 
                                                       TSCP_DOUBLE( g13428 ), 
                                                       TSCP_DOUBLE( g13429 ) ) ) );
}

DEFTSCP( lib_2dgsl_ran_2dflat_f763e26a_v );
DEFCSTRING( t15230, "GSL:RAN-FLAT" );

TSCP  lib_2dgsl_ran_2dflat_f763e26a( g13436, g13437, g13438 )
        TSCP  g13436, g13437, g13438;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15230 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13436 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_flat( TSCP_POINTER( X1 ), 
                                                  TSCP_DOUBLE( g13437 ), 
                                                  TSCP_DOUBLE( g13438 ) ) ) );
}

DEFTSCP( lib_2dgsl_flat_2dpdf_1afb635_v );
DEFCSTRING( t15232, "GSL:RAN-FLAT-PDF" );

TSCP  lib_2dgsl_flat_2dpdf_1afb635( g13445, g13446, g13447 )
        TSCP  g13445, g13446, g13447;
{
        PUSHSTACKTRACE( t15232 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_flat_pdf( TSCP_DOUBLE( g13445 ), 
                                                      TSCP_DOUBLE( g13446 ), 
                                                      TSCP_DOUBLE( g13447 ) ) ) );
}

DEFTSCP( lib_2dgsl_an_2dgamma_ca351b7b_v );
DEFCSTRING( t15234, "GSL:RAN-GAMMA" );

TSCP  lib_2dgsl_an_2dgamma_ca351b7b( g13454, g13455, g13456 )
        TSCP  g13454, g13455, g13456;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15234 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13454 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gamma( TSCP_POINTER( X1 ), 
                                                   TSCP_DOUBLE( g13455 ), 
                                                   TSCP_DOUBLE( g13456 ) ) ) );
}

DEFTSCP( lib_2dgsl_amma_2dint_547572a7_v );
DEFCSTRING( t15236, "GSL:RAN-GAMMA-INT" );

TSCP  lib_2dgsl_amma_2dint_547572a7( g13463, g13464 )
        TSCP  g13463, g13464;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15236 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13463 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gamma_int( TSCP_POINTER( X1 ), 
                                                       TSCP_S2CUINT( g13464 ) ) ) );
}

DEFTSCP( lib_2dgsl_amma_2dpdf_4ed4739a_v );
DEFCSTRING( t15238, "GSL:RAN-GAMMA-PDF" );

TSCP  lib_2dgsl_amma_2dpdf_4ed4739a( g13470, g13471, g13472 )
        TSCP  g13470, g13471, g13472;
{
        PUSHSTACKTRACE( t15238 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gamma_pdf( TSCP_DOUBLE( g13470 ), 
                                                       TSCP_DOUBLE( g13471 ), 
                                                       TSCP_DOUBLE( g13472 ) ) ) );
}

DEFTSCP( lib_2dgsl_gamma_2dmt_322bb2fc_v );
DEFCSTRING( t15240, "GSL:RAN-GAMMA-MT" );

TSCP  lib_2dgsl_gamma_2dmt_322bb2fc( g13479, g13480, g13481 )
        TSCP  g13479, g13480, g13481;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15240 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13479 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gamma_mt( TSCP_POINTER( X1 ), 
                                                      TSCP_DOUBLE( g13480 ), 
                                                      TSCP_DOUBLE( g13481 ) ) ) );
}

DEFTSCP( lib_2dgsl_ma_2dknuth_2c750284_v );
DEFCSTRING( t15242, "GSL:RAN-GAMMA-KNUTH" );

TSCP  lib_2dgsl_ma_2dknuth_2c750284( g13488, g13489, g13490 )
        TSCP  g13488, g13489, g13490;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15242 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13488 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gamma_knuth( TSCP_POINTER( X1 ), 
                                                         TSCP_DOUBLE( g13489 ), 
                                                         TSCP_DOUBLE( g13490 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dgaussian_fc8e58d5_v );
DEFCSTRING( t15244, "GSL:RAN-GAUSSIAN" );

TSCP  lib_2dgsl_2dgaussian_fc8e58d5( g13497, g13498 )
        TSCP  g13497, g13498;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15244 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13497 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian( TSCP_POINTER( X1 ), 
                                                      TSCP_DOUBLE( g13498 ) ) ) );
}

DEFTSCP( lib_2dgsl_o_2dmethod_633136b4_v );
DEFCSTRING( t15246, "GSL:RAN-GAUSSIAN-RATIO-METHOD" );

TSCP  lib_2dgsl_o_2dmethod_633136b4( g13504, g13505 )
        TSCP  g13504, g13505;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15246 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13504 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian_ratio_method( TSCP_POINTER( X1 ), 
                                                                   TSCP_DOUBLE( g13505 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dziggurat_6910e050_v );
DEFCSTRING( t15248, "GSL:RAN-GAUSSIAN-ZIGGURAT" );

TSCP  lib_2dgsl_2dziggurat_6910e050( g13511, g13512 )
        TSCP  g13511, g13512;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15248 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13511 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian_ziggurat( TSCP_POINTER( X1 ), 
                                                               TSCP_DOUBLE( g13512 ) ) ) );
}

DEFTSCP( lib_2dgsl_sian_2dpdf_98047124_v );
DEFCSTRING( t15250, "GSL:RAN-GAUSSIAN-PDF" );

TSCP  lib_2dgsl_sian_2dpdf_98047124( g13518, g13519 )
        TSCP  g13518, g13519;
{
        PUSHSTACKTRACE( t15250 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian_pdf( TSCP_DOUBLE( g13518 ), 
                                                          TSCP_DOUBLE( g13519 ) ) ) );
}

DEFTSCP( lib_2dgsl_dugaussian_ebf12660_v );
DEFCSTRING( t15252, "GSL:RAN-UGAUSSIAN" );

TSCP  lib_2dgsl_dugaussian_ebf12660( g13525 )
        TSCP  g13525;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15252 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13525 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_ugaussian( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_o_2dmethod_baae7078_v );
DEFCSTRING( t15254, "GSL:RAN-UGAUSSIAN-RATIO-METHOD" );

TSCP  lib_2dgsl_o_2dmethod_baae7078( g13530 )
        TSCP  g13530;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15254 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13530 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_ugaussian_ratio_method( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_sian_2dpdf_bed4a873_v );
DEFCSTRING( t15256, "GSL:RAN-UGAUSSIAN-PDF" );

TSCP  lib_2dgsl_sian_2dpdf_bed4a873( g13535 )
        TSCP  g13535;
{
        PUSHSTACKTRACE( t15256 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_ugaussian_pdf( TSCP_DOUBLE( g13535 ) ) ) );
}

DEFTSCP( lib_2dgsl_ian_2dtail_76ae84a0_v );
DEFCSTRING( t15258, "GSL:RAN-GAUSSIAN-TAIL" );

TSCP  lib_2dgsl_ian_2dtail_76ae84a0( g13540, g13541, g13542 )
        TSCP  g13540, g13541, g13542;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15258 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13540 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian_tail( TSCP_POINTER( X1 ), 
                                                           TSCP_DOUBLE( g13541 ), 
                                                           TSCP_DOUBLE( g13542 ) ) ) );
}

DEFTSCP( lib_2dgsl_tail_2dpdf_c37e4e66_v );
DEFCSTRING( t15260, "GSL:RAN-GAUSSIAN-TAIL-PDF" );

TSCP  lib_2dgsl_tail_2dpdf_c37e4e66( g13549, g13550, g13551 )
        TSCP  g13549, g13550, g13551;
{
        PUSHSTACKTRACE( t15260 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gaussian_tail_pdf( TSCP_DOUBLE( g13549 ), 
                                                               TSCP_DOUBLE( g13550 ), 
                                                               TSCP_DOUBLE( g13551 ) ) ) );
}

DEFTSCP( lib_2dgsl_ian_2dtail_8387902e_v );
DEFCSTRING( t15262, "GSL:RAN-UGAUSSIAN-TAIL" );

TSCP  lib_2dgsl_ian_2dtail_8387902e( g13558, g13559 )
        TSCP  g13558, g13559;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15262 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13558 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_ugaussian_tail( TSCP_POINTER( X1 ), 
                                                            TSCP_DOUBLE( g13559 ) ) ) );
}

DEFTSCP( lib_2dgsl_tail_2dpdf_1c915b03_v );
DEFCSTRING( t15264, "GSL:RAN-UGAUSSIAN-TAIL-PDF" );

TSCP  lib_2dgsl_tail_2dpdf_1c915b03( g13565, g13566 )
        TSCP  g13565, g13566;
{
        PUSHSTACKTRACE( t15264 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_ugaussian_tail_pdf( TSCP_DOUBLE( g13565 ), 
                                                                TSCP_DOUBLE( g13566 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dgaussian_69b08e23_v );
DEFCSTRING( t15266, "GSL:RAN-BIVARIATE-GAUSSIAN" );

TSCP  lib_2dgsl_2dgaussian_69b08e23( g13572, 
                                     g13573, 
                                     g13574, 
                                     g13575, g13576, g13577 )
        TSCP  g13572, 
              g13573, g13574, g13575, g13576, g13577;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15266 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13572 );
        gsl_ran_bivariate_gaussian( TSCP_POINTER( X1 ), 
                                    TSCP_DOUBLE( g13573 ), 
                                    TSCP_DOUBLE( g13574 ), 
                                    TSCP_DOUBLE( g13575 ), 
                                    TSCP_POINTER( g13576 ), 
                                    TSCP_POINTER( g13577 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_sian_2dpdf_b656f450_v );
DEFCSTRING( t15269, "GSL:RAN-BIVARIATE-GAUSSIAN-PDF" );

TSCP  lib_2dgsl_sian_2dpdf_b656f450( g13588, 
                                     g13589, 
                                     g13590, g13591, g13592 )
        TSCP  g13588, g13589, g13590, g13591, g13592;
{
        PUSHSTACKTRACE( t15269 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_bivariate_gaussian_pdf( TSCP_DOUBLE( g13588 ), 
                                                                    TSCP_DOUBLE( g13589 ), 
                                                                    TSCP_DOUBLE( g13590 ), 
                                                                    TSCP_DOUBLE( g13591 ), 
                                                                    TSCP_DOUBLE( g13592 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2dlandau_90d17cbe_v );
DEFCSTRING( t15271, "GSL:RAN-LANDAU" );

TSCP  lib_2dgsl_n_2dlandau_90d17cbe( g13601 )
        TSCP  g13601;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15271 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13601 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_landau( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_ndau_2dpdf_1cd52ac9_v );
DEFCSTRING( t15273, "GSL:RAN-LANDAU-PDF" );

TSCP  lib_2dgsl_ndau_2dpdf_1cd52ac9( g13606 )
        TSCP  g13606;
{
        PUSHSTACKTRACE( t15273 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_landau_pdf( TSCP_DOUBLE( g13606 ) ) ) );
}

DEFTSCP( lib_2dgsl_dgeometric_403450fe_v );
DEFCSTRING( t15275, "GSL:RAN-GEOMETRIC" );

TSCP  lib_2dgsl_dgeometric_403450fe( g13611, g13612 )
        TSCP  g13611, g13612;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15275 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13611 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_geometric( TSCP_POINTER( X1 ), 
                                                        TSCP_DOUBLE( g13612 ) ) ) );
}

DEFTSCP( lib_2dgsl_tric_2dpdf_7b94669a_v );
DEFCSTRING( t15277, "GSL:RAN-GEOMETRIC-PDF" );

TSCP  lib_2dgsl_tric_2dpdf_7b94669a( g13618, g13619 )
        TSCP  g13618, g13619;
{
        PUSHSTACKTRACE( t15277 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_geometric_pdf( TSCP_S2CUINT( g13618 ), 
                                                           TSCP_DOUBLE( g13619 ) ) ) );
}

DEFTSCP( lib_2dgsl_rgeometric_ae91c051_v );
DEFCSTRING( t15279, "GSL:RAN-HYPERGEOMETRIC" );

TSCP  lib_2dgsl_rgeometric_ae91c051( g13625, 
                                     g13626, g13627, g13628 )
        TSCP  g13625, g13626, g13627, g13628;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15279 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13625 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_hypergeometric( TSCP_POINTER( X1 ), 
                                                             TSCP_S2CUINT( g13626 ), 
                                                             TSCP_S2CUINT( g13627 ), 
                                                             TSCP_S2CUINT( g13628 ) ) ) );
}

DEFTSCP( lib_2dgsl_tric_2dpdf_9b11f62c_v );
DEFCSTRING( t15281, "GSL:RAN-HYPERGEOMETRIC-PDF" );

TSCP  lib_2dgsl_tric_2dpdf_9b11f62c( g13636, 
                                     g13637, g13638, g13639 )
        TSCP  g13636, g13637, g13638, g13639;
{
        PUSHSTACKTRACE( t15281 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_hypergeometric_pdf( TSCP_S2CUINT( g13636 ), 
                                                                TSCP_S2CUINT( g13637 ), 
                                                                TSCP_S2CUINT( g13638 ), 
                                                                TSCP_S2CUINT( g13639 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dgumbel1_19157f72_v );
DEFCSTRING( t15283, "GSL:RAN-GUMBEL1" );

TSCP  lib_2dgsl__2dgumbel1_19157f72( g13647, g13648, g13649 )
        TSCP  g13647, g13648, g13649;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15283 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13647 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gumbel1( TSCP_POINTER( X1 ), 
                                                     TSCP_DOUBLE( g13648 ), 
                                                     TSCP_DOUBLE( g13649 ) ) ) );
}

DEFTSCP( lib_2dgsl_bel1_2dpdf_2a94d788_v );
DEFCSTRING( t15285, "GSL:RAN-GUMBEL1-PDF" );

TSCP  lib_2dgsl_bel1_2dpdf_2a94d788( g13656, g13657, g13658 )
        TSCP  g13656, g13657, g13658;
{
        PUSHSTACKTRACE( t15285 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gumbel1_pdf( TSCP_DOUBLE( g13656 ), 
                                                         TSCP_DOUBLE( g13657 ), 
                                                         TSCP_DOUBLE( g13658 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dgumbel2_801c2ec8_v );
DEFCSTRING( t15287, "GSL:RAN-GUMBEL2" );

TSCP  lib_2dgsl__2dgumbel2_801c2ec8( g13665, g13666, g13667 )
        TSCP  g13665, g13666, g13667;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15287 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13665 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gumbel2( TSCP_POINTER( X1 ), 
                                                     TSCP_DOUBLE( g13666 ), 
                                                     TSCP_DOUBLE( g13667 ) ) ) );
}

DEFTSCP( lib_2dgsl_bel2_2dpdf_1b7ccd15_v );
DEFCSTRING( t15289, "GSL:RAN-GUMBEL2-PDF" );

TSCP  lib_2dgsl_bel2_2dpdf_1b7ccd15( g13674, g13675, g13676 )
        TSCP  g13674, g13675, g13676;
{
        PUSHSTACKTRACE( t15289 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_gumbel2_pdf( TSCP_DOUBLE( g13674 ), 
                                                         TSCP_DOUBLE( g13675 ), 
                                                         TSCP_DOUBLE( g13676 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dlogistic_3703d5fb_v );
DEFCSTRING( t15291, "GSL:RAN-LOGISTIC" );

TSCP  lib_2dgsl_2dlogistic_3703d5fb( g13683, g13684 )
        TSCP  g13683, g13684;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15291 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13683 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_logistic( TSCP_POINTER( X1 ), 
                                                      TSCP_DOUBLE( g13684 ) ) ) );
}

DEFTSCP( lib_2dgsl_stic_2dpdf_6e1d7606_v );
DEFCSTRING( t15293, "GSL:RAN-LOGISTIC-PDF" );

TSCP  lib_2dgsl_stic_2dpdf_6e1d7606( g13690, g13691 )
        TSCP  g13690, g13691;
{
        PUSHSTACKTRACE( t15293 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_logistic_pdf( TSCP_DOUBLE( g13690 ), 
                                                          TSCP_DOUBLE( g13691 ) ) ) );
}

DEFTSCP( lib_2dgsl_dlognormal_c61dda8b_v );
DEFCSTRING( t15295, "GSL:RAN-LOGNORMAL" );

TSCP  lib_2dgsl_dlognormal_c61dda8b( g13697, g13698, g13699 )
        TSCP  g13697, g13698, g13699;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15295 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13697 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_lognormal( TSCP_POINTER( X1 ), 
                                                       TSCP_DOUBLE( g13698 ), 
                                                       TSCP_DOUBLE( g13699 ) ) ) );
}

DEFTSCP( lib_2dgsl_rmal_2dpdf_e3afd55d_v );
DEFCSTRING( t15297, "GSL:RAN-LOGNORMAL-PDF" );

TSCP  lib_2dgsl_rmal_2dpdf_e3afd55d( g13706, g13707, g13708 )
        TSCP  g13706, g13707, g13708;
{
        PUSHSTACKTRACE( t15297 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_lognormal_pdf( TSCP_DOUBLE( g13706 ), 
                                                           TSCP_DOUBLE( g13707 ), 
                                                           TSCP_DOUBLE( g13708 ) ) ) );
}

DEFTSCP( lib_2dgsl_ogarithmic_79f791ef_v );
DEFCSTRING( t15299, "GSL:RAN-LOGARITHMIC" );

TSCP  lib_2dgsl_ogarithmic_79f791ef( g13715, g13716 )
        TSCP  g13715, g13716;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15299 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13715 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_logarithmic( TSCP_POINTER( X1 ), 
                                                          TSCP_DOUBLE( g13716 ) ) ) );
}

DEFTSCP( lib_2dgsl_hmic_2dpdf_2829e938_v );
DEFCSTRING( t15301, "GSL:RAN-LOGARITHMIC-PDF" );

TSCP  lib_2dgsl_hmic_2dpdf_2829e938( g13722, g13723 )
        TSCP  g13722, g13723;
{
        PUSHSTACKTRACE( t15301 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_logarithmic_pdf( TSCP_S2CUINT( g13722 ), 
                                                             TSCP_DOUBLE( g13723 ) ) ) );
}

DEFTSCP( lib_2dgsl_ultinomial_39a66ff4_v );
DEFCSTRING( t15303, "GSL:RAN-MULTINOMIAL" );

TSCP  lib_2dgsl_ultinomial_39a66ff4( g13729, 
                                     g13730, 
                                     g13731, g13732, g13733 )
        TSCP  g13729, g13730, g13731, g13732, g13733;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15303 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13729 );
        gsl_ran_multinomial( TSCP_POINTER( X1 ), 
                             TSCP_S2CUINT( g13730 ), 
                             TSCP_S2CUINT( g13731 ), 
                             TSCP_POINTER( g13732 ), 
                             TSCP_POINTER( g13733 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_mial_2dpdf_b517105b_v );
DEFCSTRING( t15306, "GSL:RAN-MULTINOMIAL-PDF" );

TSCP  lib_2dgsl_mial_2dpdf_b517105b( g13743, g13744, g13745 )
        TSCP  g13743, g13744, g13745;
{
        PUSHSTACKTRACE( t15306 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_multinomial_pdf( TSCP_S2CUINT( g13743 ), 
                                                             TSCP_POINTER( g13744 ), 
                                                             TSCP_POINTER( g13745 ) ) ) );
}

DEFTSCP( lib_2dgsl_al_2dlnpdf_33be0e07_v );
DEFCSTRING( t15308, "GSL:RAN-MULTINOMIAL-LNPDF" );

TSCP  lib_2dgsl_al_2dlnpdf_33be0e07( g13752, g13753, g13754 )
        TSCP  g13752, g13753, g13754;
{
        PUSHSTACKTRACE( t15308 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_multinomial_lnpdf( TSCP_S2CUINT( g13752 ), 
                                                               TSCP_POINTER( g13753 ), 
                                                               TSCP_POINTER( g13754 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dbinomial_1365287a_v );
DEFCSTRING( t15310, "GSL:RAN-NEGATIVE-BINOMIAL" );

TSCP  lib_2dgsl_2dbinomial_1365287a( g13761, g13762, g13763 )
        TSCP  g13761, g13762, g13763;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15310 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13761 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_negative_binomial( TSCP_POINTER( X1 ), 
                                                                TSCP_DOUBLE( g13762 ), 
                                                                TSCP_DOUBLE( g13763 ) ) ) );
}

DEFTSCP( lib_2dgsl_mial_2dpdf_2a5c6374_v );
DEFCSTRING( t15312, "GSL:RAN-NEGATIVE-BINOMIAL-PDF" );

TSCP  lib_2dgsl_mial_2dpdf_2a5c6374( g13770, g13771, g13772 )
        TSCP  g13770, g13771, g13772;
{
        PUSHSTACKTRACE( t15312 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_negative_binomial_pdf( TSCP_S2CUINT( g13770 ), 
                                                                   TSCP_DOUBLE( g13771 ), 
                                                                   TSCP_DOUBLE( g13772 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2dpascal_27928f59_v );
DEFCSTRING( t15314, "GSL:RAN-PASCAL" );

TSCP  lib_2dgsl_n_2dpascal_27928f59( g13779, g13780, g13781 )
        TSCP  g13779, g13780, g13781;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15314 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13779 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_pascal( TSCP_POINTER( X1 ), 
                                                     TSCP_DOUBLE( g13780 ), 
                                                     TSCP_S2CUINT( g13781 ) ) ) );
}

DEFTSCP( lib_2dgsl_scal_2dpdf_51b03438_v );
DEFCSTRING( t15316, "GSL:RAN-PASCAL-PDF" );

TSCP  lib_2dgsl_scal_2dpdf_51b03438( g13788, g13789, g13790 )
        TSCP  g13788, g13789, g13790;
{
        PUSHSTACKTRACE( t15316 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_pascal_pdf( TSCP_S2CUINT( g13788 ), 
                                                        TSCP_DOUBLE( g13789 ), 
                                                        TSCP_S2CUINT( g13790 ) ) ) );
}

DEFTSCP( lib_2dgsl_n_2dpareto_351f2320_v );
DEFCSTRING( t15318, "GSL:RAN-PARETO" );

TSCP  lib_2dgsl_n_2dpareto_351f2320( g13797, g13798, g13799 )
        TSCP  g13797, g13798, g13799;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15318 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13797 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_pareto( TSCP_POINTER( X1 ), 
                                                    TSCP_DOUBLE( g13798 ), 
                                                    TSCP_DOUBLE( g13799 ) ) ) );
}

DEFTSCP( lib_2dgsl_reto_2dpdf_c8db035e_v );
DEFCSTRING( t15320, "GSL:RAN-PARETO-PDF" );

TSCP  lib_2dgsl_reto_2dpdf_c8db035e( g13806, g13807, g13808 )
        TSCP  g13806, g13807, g13808;
{
        PUSHSTACKTRACE( t15320 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_pareto_pdf( TSCP_DOUBLE( g13806 ), 
                                                        TSCP_DOUBLE( g13807 ), 
                                                        TSCP_DOUBLE( g13808 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dpoisson_cc56aa91_v );
DEFCSTRING( t15322, "GSL:RAN-POISSON" );

TSCP  lib_2dgsl__2dpoisson_cc56aa91( g13815, g13816 )
        TSCP  g13815, g13816;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15322 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13815 );
        POPSTACKTRACE( S2CUINT_TSCP( gsl_ran_poisson( TSCP_POINTER( X1 ), 
                                                      TSCP_DOUBLE( g13816 ) ) ) );
}

DEFTSCP( lib_2dgsl_on_2darray_b172d788_v );
DEFCSTRING( t15324, "GSL:RAN-POISSON-ARRAY" );

TSCP  lib_2dgsl_on_2darray_b172d788( g13822, 
                                     g13823, g13824, g13825 )
        TSCP  g13822, g13823, g13824, g13825;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15324 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13822 );
        gsl_ran_poisson_array( TSCP_POINTER( X1 ), 
                               TSCP_S2CUINT( g13823 ), 
                               TSCP_POINTER( g13824 ), 
                               TSCP_DOUBLE( g13825 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_sson_2dpdf_f9b24e85_v );
DEFCSTRING( t15327, "GSL:RAN-POISSON-PDF" );

TSCP  lib_2dgsl_sson_2dpdf_f9b24e85( g13834, g13835 )
        TSCP  g13834, g13835;
{
        PUSHSTACKTRACE( t15327 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_poisson_pdf( TSCP_S2CUINT( g13834 ), 
                                                         TSCP_DOUBLE( g13835 ) ) ) );
}

DEFTSCP( lib_2dgsl_2drayleigh_97ecad42_v );
DEFCSTRING( t15329, "GSL:RAN-RAYLEIGH" );

TSCP  lib_2dgsl_2drayleigh_97ecad42( g13841, g13842 )
        TSCP  g13841, g13842;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15329 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13841 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_rayleigh( TSCP_POINTER( X1 ), 
                                                      TSCP_DOUBLE( g13842 ) ) ) );
}

DEFTSCP( lib_2dgsl_eigh_2dpdf_cd1e93bb_v );
DEFCSTRING( t15331, "GSL:RAN-RAYLEIGH-PDF" );

TSCP  lib_2dgsl_eigh_2dpdf_cd1e93bb( g13848, g13849 )
        TSCP  g13848, g13849;
{
        PUSHSTACKTRACE( t15331 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_rayleigh_pdf( TSCP_DOUBLE( g13848 ), 
                                                          TSCP_DOUBLE( g13849 ) ) ) );
}

DEFTSCP( lib_2dgsl_igh_2dtail_164b1097_v );
DEFCSTRING( t15333, "GSL:RAN-RAYLEIGH-TAIL" );

TSCP  lib_2dgsl_igh_2dtail_164b1097( g13855, g13856, g13857 )
        TSCP  g13855, g13856, g13857;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15333 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13855 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_rayleigh_tail( TSCP_POINTER( X1 ), 
                                                           TSCP_DOUBLE( g13856 ), 
                                                           TSCP_DOUBLE( g13857 ) ) ) );
}

DEFTSCP( lib_2dgsl_tail_2dpdf_57f18289_v );
DEFCSTRING( t15335, "GSL:RAN-RAYLEIGH-TAIL-PDF" );

TSCP  lib_2dgsl_tail_2dpdf_57f18289( g13864, g13865, g13866 )
        TSCP  g13864, g13865, g13866;
{
        PUSHSTACKTRACE( t15335 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_rayleigh_tail_pdf( TSCP_DOUBLE( g13864 ), 
                                                               TSCP_DOUBLE( g13865 ), 
                                                               TSCP_DOUBLE( g13866 ) ) ) );
}

DEFTSCP( lib_2dgsl_an_2dtdist_643e75f3_v );
DEFCSTRING( t15337, "GSL:RAN-TDIST" );

TSCP  lib_2dgsl_an_2dtdist_643e75f3( g13873, g13874 )
        TSCP  g13873, g13874;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15337 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13873 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_tdist( TSCP_POINTER( X1 ), 
                                                   TSCP_DOUBLE( g13874 ) ) ) );
}

DEFTSCP( lib_2dgsl_dist_2dpdf_9ed2db68_v );
DEFCSTRING( t15339, "GSL:RAN-TDIST-PDF" );

TSCP  lib_2dgsl_dist_2dpdf_9ed2db68( g13880, g13881 )
        TSCP  g13880, g13881;
{
        PUSHSTACKTRACE( t15339 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_tdist_pdf( TSCP_DOUBLE( g13880 ), 
                                                       TSCP_DOUBLE( g13881 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dlaplace_176d6efb_v );
DEFCSTRING( t15341, "GSL:RAN-LAPLACE" );

TSCP  lib_2dgsl__2dlaplace_176d6efb( g13887, g13888 )
        TSCP  g13887, g13888;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15341 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13887 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_laplace( TSCP_POINTER( X1 ), 
                                                     TSCP_DOUBLE( g13888 ) ) ) );
}

DEFTSCP( lib_2dgsl_lace_2dpdf_eabe89d3_v );
DEFCSTRING( t15343, "GSL:RAN-LAPLACE-PDF" );

TSCP  lib_2dgsl_lace_2dpdf_eabe89d3( g13894, g13895 )
        TSCP  g13894, g13895;
{
        PUSHSTACKTRACE( t15343 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_laplace_pdf( TSCP_DOUBLE( g13894 ), 
                                                         TSCP_DOUBLE( g13895 ) ) ) );
}

DEFTSCP( lib_2dgsl_ran_2dlevy_ec3dc1aa_v );
DEFCSTRING( t15345, "GSL:RAN-LEVY" );

TSCP  lib_2dgsl_ran_2dlevy_ec3dc1aa( g13901, g13902, g13903 )
        TSCP  g13901, g13902, g13903;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15345 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13901 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_levy( TSCP_POINTER( X1 ), 
                                                  TSCP_DOUBLE( g13902 ), 
                                                  TSCP_DOUBLE( g13903 ) ) ) );
}

DEFTSCP( lib_2dgsl_evy_2dskew_e7097d3d_v );
DEFCSTRING( t15347, "GSL:RAN-LEVY-SKEW" );

TSCP  lib_2dgsl_evy_2dskew_e7097d3d( g13910, 
                                     g13911, g13912, g13913 )
        TSCP  g13910, g13911, g13912, g13913;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15347 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13910 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_levy_skew( TSCP_POINTER( X1 ), 
                                                       TSCP_DOUBLE( g13911 ), 
                                                       TSCP_DOUBLE( g13912 ), 
                                                       TSCP_DOUBLE( g13913 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dweibull_8161c9de_v );
DEFCSTRING( t15349, "GSL:RAN-WEIBULL" );

TSCP  lib_2dgsl__2dweibull_8161c9de( g13921, g13922, g13923 )
        TSCP  g13921, g13922, g13923;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15349 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13921 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_weibull( TSCP_POINTER( X1 ), 
                                                     TSCP_DOUBLE( g13922 ), 
                                                     TSCP_DOUBLE( g13923 ) ) ) );
}

DEFTSCP( lib_2dgsl_bull_2dpdf_cc90252a_v );
DEFCSTRING( t15351, "GSL:RAN-WEIBULL-PDF" );

TSCP  lib_2dgsl_bull_2dpdf_cc90252a( g13930, g13931, g13932 )
        TSCP  g13930, g13931, g13932;
{
        PUSHSTACKTRACE( t15351 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_ran_weibull_pdf( TSCP_DOUBLE( g13930 ), 
                                                         TSCP_DOUBLE( g13931 ), 
                                                         TSCP_DOUBLE( g13932 ) ) ) );
}

DEFTSCP( lib_2dgsl_2ddir_2d2d_2e9a86e_v );
DEFCSTRING( t15353, "GSL:RAN-DIR-2D" );

TSCP  lib_2dgsl_2ddir_2d2d_2e9a86e( g13939, g13940, g13941 )
        TSCP  g13939, g13940, g13941;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15353 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13939 );
        gsl_ran_dir_2d( TSCP_POINTER( X1 ), 
                        TSCP_POINTER( g13940 ), 
                        TSCP_POINTER( g13941 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_g_2dmethod_36b07b3d_v );
DEFCSTRING( t15356, "GSL:RAN-DIR-2D-TRIG-METHOD" );

TSCP  lib_2dgsl_g_2dmethod_36b07b3d( g13949, g13950, g13951 )
        TSCP  g13949, g13950, g13951;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15356 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13949 );
        gsl_ran_dir_2d_trig_method( TSCP_POINTER( X1 ), 
                                    TSCP_POINTER( g13950 ), 
                                    TSCP_POINTER( g13951 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_2ddir_2d3d_1bf2992f_v );
DEFCSTRING( t15359, "GSL:RAN-DIR-3D" );

TSCP  lib_2dgsl_2ddir_2d3d_1bf2992f( g13959, 
                                     g13960, g13961, g13962 )
        TSCP  g13959, g13960, g13961, g13962;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15359 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13959 );
        gsl_ran_dir_3d( TSCP_POINTER( X1 ), 
                        TSCP_POINTER( g13960 ), 
                        TSCP_POINTER( g13961 ), 
                        TSCP_POINTER( g13962 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_2ddir_2dnd_14e7ba36_v );
DEFCSTRING( t15362, "GSL:RAN-DIR-ND" );

TSCP  lib_2dgsl_2ddir_2dnd_14e7ba36( g13971, g13972, g13973 )
        TSCP  g13971, g13972, g13973;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15362 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g13971 );
        gsl_ran_dir_nd( TSCP_POINTER( X1 ), 
                        TSCP_S2CUINT( g13972 ), 
                        TSCP_POINTER( g13973 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( lib_2dgsl_ussian_2dp_1ec642e3_v );
DEFCSTRING( t15365, "GSL:CDF-UGAUSSIAN-P" );

TSCP  lib_2dgsl_ussian_2dp_1ec642e3( g13981 )
        TSCP  g13981;
{
        PUSHSTACKTRACE( t15365 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_ugaussian_P( TSCP_DOUBLE( g13981 ) ) ) );
}

DEFTSCP( lib_2dgsl_ussian_2dq_69c17275_v );
DEFCSTRING( t15367, "GSL:CDF-UGAUSSIAN-Q" );

TSCP  lib_2dgsl_ussian_2dq_69c17275( g13986 )
        TSCP  g13986;
{
        PUSHSTACKTRACE( t15367 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_ugaussian_Q( TSCP_DOUBLE( g13986 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_601e0eba_v );
DEFCSTRING( t15369, "GSL:CDF-UGAUSSIAN-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_601e0eba( g13991 )
        TSCP  g13991;
{
        PUSHSTACKTRACE( t15369 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_ugaussian_Pinv( TSCP_DOUBLE( g13991 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_c669050e_v );
DEFCSTRING( t15371, "GSL:CDF-UGAUSSIAN-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_c669050e( g13996 )
        TSCP  g13996;
{
        PUSHSTACKTRACE( t15371 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_ugaussian_Qinv( TSCP_DOUBLE( g13996 ) ) ) );
}

DEFTSCP( lib_2dgsl_ussian_2dp_c17755fe_v );
DEFCSTRING( t15373, "GSL:CDF-GAUSSIAN-P" );

TSCP  lib_2dgsl_ussian_2dp_c17755fe( g14001, g14002 )
        TSCP  g14001, g14002;
{
        PUSHSTACKTRACE( t15373 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gaussian_P( TSCP_DOUBLE( g14001 ), 
                                                        TSCP_DOUBLE( g14002 ) ) ) );
}

DEFTSCP( lib_2dgsl_ussian_2dq_b6706568_v );
DEFCSTRING( t15375, "GSL:CDF-GAUSSIAN-Q" );

TSCP  lib_2dgsl_ussian_2dq_b6706568( g14008, g14009 )
        TSCP  g14008, g14009;
{
        PUSHSTACKTRACE( t15375 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gaussian_Q( TSCP_DOUBLE( g14008 ), 
                                                        TSCP_DOUBLE( g14009 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_2e8d0f9f_v );
DEFCSTRING( t15377, "GSL:CDF-GAUSSIAN-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_2e8d0f9f( g14015, g14016 )
        TSCP  g14015, g14016;
{
        PUSHSTACKTRACE( t15377 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gaussian_Pinv( TSCP_DOUBLE( g14015 ), 
                                                           TSCP_DOUBLE( g14016 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_88fa042b_v );
DEFCSTRING( t15379, "GSL:CDF-GAUSSIAN-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_88fa042b( g14022, g14023 )
        TSCP  g14022, g14023;
{
        PUSHSTACKTRACE( t15379 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gaussian_Qinv( TSCP_DOUBLE( g14022 ), 
                                                           TSCP_DOUBLE( g14023 ) ) ) );
}

DEFTSCP( lib_2dgsl_dgamma_2dp_b3e18a26_v );
DEFCSTRING( t15381, "GSL:CDF-GAMMA-P" );

TSCP  lib_2dgsl_dgamma_2dp_b3e18a26( g14029, g14030, g14031 )
        TSCP  g14029, g14030, g14031;
{
        PUSHSTACKTRACE( t15381 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gamma_P( TSCP_DOUBLE( g14029 ), 
                                                     TSCP_DOUBLE( g14030 ), 
                                                     TSCP_DOUBLE( g14031 ) ) ) );
}

DEFTSCP( lib_2dgsl_dgamma_2dq_c4e6bab0_v );
DEFCSTRING( t15383, "GSL:CDF-GAMMA-Q" );

TSCP  lib_2dgsl_dgamma_2dq_c4e6bab0( g14038, g14039, g14040 )
        TSCP  g14038, g14039, g14040;
{
        PUSHSTACKTRACE( t15383 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gamma_Q( TSCP_DOUBLE( g14038 ), 
                                                     TSCP_DOUBLE( g14039 ), 
                                                     TSCP_DOUBLE( g14040 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_141b7b13_v );
DEFCSTRING( t15385, "GSL:CDF-GAMMA-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_141b7b13( g14047, g14048, g14049 )
        TSCP  g14047, g14048, g14049;
{
        PUSHSTACKTRACE( t15385 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gamma_Pinv( TSCP_DOUBLE( g14047 ), 
                                                        TSCP_DOUBLE( g14048 ), 
                                                        TSCP_DOUBLE( g14049 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_b26c70a7_v );
DEFCSTRING( t15387, "GSL:CDF-GAMMA-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_b26c70a7( g14056, g14057, g14058 )
        TSCP  g14056, g14057, g14058;
{
        PUSHSTACKTRACE( t15387 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gamma_Qinv( TSCP_DOUBLE( g14056 ), 
                                                        TSCP_DOUBLE( g14057 ), 
                                                        TSCP_DOUBLE( g14058 ) ) ) );
}

DEFTSCP( lib_2dgsl_cauchy_2dp_926cc517_v );
DEFCSTRING( t15389, "GSL:CDF-CAUCHY-P" );

TSCP  lib_2dgsl_cauchy_2dp_926cc517( g14065, g14066 )
        TSCP  g14065, g14066;
{
        PUSHSTACKTRACE( t15389 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_cauchy_P( TSCP_DOUBLE( g14065 ), 
                                                      TSCP_DOUBLE( g14066 ) ) ) );
}

DEFTSCP( lib_2dgsl_cauchy_2dq_e56bf581_v );
DEFCSTRING( t15391, "GSL:CDF-CAUCHY-Q" );

TSCP  lib_2dgsl_cauchy_2dq_e56bf581( g14072, g14073 )
        TSCP  g14072, g14073;
{
        PUSHSTACKTRACE( t15391 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_cauchy_Q( TSCP_DOUBLE( g14072 ), 
                                                      TSCP_DOUBLE( g14073 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_272222b2_v );
DEFCSTRING( t15393, "GSL:CDF-CAUCHY-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_272222b2( g14079, g14080 )
        TSCP  g14079, g14080;
{
        PUSHSTACKTRACE( t15393 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_cauchy_Pinv( TSCP_DOUBLE( g14079 ), 
                                                         TSCP_DOUBLE( g14080 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_81552906_v );
DEFCSTRING( t15395, "GSL:CDF-CAUCHY-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_81552906( g14086, g14087 )
        TSCP  g14086, g14087;
{
        PUSHSTACKTRACE( t15395 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_cauchy_Qinv( TSCP_DOUBLE( g14086 ), 
                                                         TSCP_DOUBLE( g14087 ) ) ) );
}

DEFTSCP( lib_2dgsl_aplace_2dp_809c559b_v );
DEFCSTRING( t15397, "GSL:CDF-LAPLACE-P" );

TSCP  lib_2dgsl_aplace_2dp_809c559b( g14093, g14094 )
        TSCP  g14093, g14094;
{
        PUSHSTACKTRACE( t15397 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_laplace_P( TSCP_DOUBLE( g14093 ), 
                                                       TSCP_DOUBLE( g14094 ) ) ) );
}

DEFTSCP( lib_2dgsl_aplace_2dq_f79b650d_v );
DEFCSTRING( t15399, "GSL:CDF-LAPLACE-Q" );

TSCP  lib_2dgsl_aplace_2dq_f79b650d( g14100, g14101 )
        TSCP  g14100, g14101;
{
        PUSHSTACKTRACE( t15399 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_laplace_Q( TSCP_DOUBLE( g14100 ), 
                                                       TSCP_DOUBLE( g14101 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_692b0b8_v );
DEFCSTRING( t15401, "GSL:CDF-LAPLACE-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_692b0b8( g14107, g14108 )
        TSCP  g14107, g14108;
{
        PUSHSTACKTRACE( t15401 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_laplace_Pinv( TSCP_DOUBLE( g14107 ), 
                                                          TSCP_DOUBLE( g14108 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_a0e5bb0c_v );
DEFCSTRING( t15403, "GSL:CDF-LAPLACE-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_a0e5bb0c( g14114, g14115 )
        TSCP  g14114, g14115;
{
        PUSHSTACKTRACE( t15403 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_laplace_Qinv( TSCP_DOUBLE( g14114 ), 
                                                          TSCP_DOUBLE( g14115 ) ) ) );
}

DEFTSCP( lib_2dgsl_yleigh_2dp_df448c2d_v );
DEFCSTRING( t15405, "GSL:CDF-RAYLEIGH-P" );

TSCP  lib_2dgsl_yleigh_2dp_df448c2d( g14121, g14122 )
        TSCP  g14121, g14122;
{
        PUSHSTACKTRACE( t15405 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_rayleigh_P( TSCP_DOUBLE( g14121 ), 
                                                        TSCP_DOUBLE( g14122 ) ) ) );
}

DEFTSCP( lib_2dgsl_yleigh_2dq_a843bcbb_v );
DEFCSTRING( t15407, "GSL:CDF-RAYLEIGH-Q" );

TSCP  lib_2dgsl_yleigh_2dq_a843bcbb( g14128, g14129 )
        TSCP  g14128, g14129;
{
        PUSHSTACKTRACE( t15407 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_rayleigh_Q( TSCP_DOUBLE( g14128 ), 
                                                        TSCP_DOUBLE( g14129 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_cae4a503_v );
DEFCSTRING( t15409, "GSL:CDF-RAYLEIGH-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_cae4a503( g14135, g14136 )
        TSCP  g14135, g14136;
{
        PUSHSTACKTRACE( t15409 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_rayleigh_Pinv( TSCP_DOUBLE( g14135 ), 
                                                           TSCP_DOUBLE( g14136 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_6c93aeb7_v );
DEFCSTRING( t15411, "GSL:CDF-RAYLEIGH-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_6c93aeb7( g14142, g14143 )
        TSCP  g14142, g14143;
{
        PUSHSTACKTRACE( t15411 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_rayleigh_Qinv( TSCP_DOUBLE( g14142 ), 
                                                           TSCP_DOUBLE( g14143 ) ) ) );
}

DEFTSCP( lib_2dgsl_dchisq_2dp_5c31107b_v );
DEFCSTRING( t15413, "GSL:CDF-CHISQ-P" );

TSCP  lib_2dgsl_dchisq_2dp_5c31107b( g14149, g14150 )
        TSCP  g14149, g14150;
{
        PUSHSTACKTRACE( t15413 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_chisq_P( TSCP_DOUBLE( g14149 ), 
                                                     TSCP_DOUBLE( g14150 ) ) ) );
}

DEFTSCP( lib_2dgsl_dchisq_2dq_2b3620ed_v );
DEFCSTRING( t15415, "GSL:CDF-CHISQ-Q" );

TSCP  lib_2dgsl_dchisq_2dq_2b3620ed( g14156, g14157 )
        TSCP  g14156, g14157;
{
        PUSHSTACKTRACE( t15415 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_chisq_Q( TSCP_DOUBLE( g14156 ), 
                                                     TSCP_DOUBLE( g14157 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_bb57718f_v );
DEFCSTRING( t15417, "GSL:CDF-CHISQ-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_bb57718f( g14163, g14164 )
        TSCP  g14163, g14164;
{
        PUSHSTACKTRACE( t15417 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_chisq_Pinv( TSCP_DOUBLE( g14163 ), 
                                                        TSCP_DOUBLE( g14164 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_1d207a3b_v );
DEFCSTRING( t15419, "GSL:CDF-CHISQ-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_1d207a3b( g14170, g14171 )
        TSCP  g14170, g14171;
{
        PUSHSTACKTRACE( t15419 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_chisq_Qinv( TSCP_DOUBLE( g14170 ), 
                                                        TSCP_DOUBLE( g14171 ) ) ) );
}

DEFTSCP( lib_2dgsl_ential_2dp_70c709cf_v );
DEFCSTRING( t15421, "GSL:CDF-EXPONENTIAL-P" );

TSCP  lib_2dgsl_ential_2dp_70c709cf( g14177, g14178 )
        TSCP  g14177, g14178;
{
        PUSHSTACKTRACE( t15421 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exponential_P( TSCP_DOUBLE( g14177 ), 
                                                           TSCP_DOUBLE( g14178 ) ) ) );
}

DEFTSCP( lib_2dgsl_ential_2dq_7c03959_v );
DEFCSTRING( t15423, "GSL:CDF-EXPONENTIAL-Q" );

TSCP  lib_2dgsl_ential_2dq_7c03959( g14184, g14185 )
        TSCP  g14184, g14185;
{
        PUSHSTACKTRACE( t15423 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exponential_Q( TSCP_DOUBLE( g14184 ), 
                                                           TSCP_DOUBLE( g14185 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_c5a623e0_v );
DEFCSTRING( t15425, "GSL:CDF-EXPONENTIAL-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_c5a623e0( g14191, g14192 )
        TSCP  g14191, g14192;
{
        PUSHSTACKTRACE( t15425 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exponential_Pinv( TSCP_DOUBLE( g14191 ), 
                                                              TSCP_DOUBLE( g14192 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_63d12854_v );
DEFCSTRING( t15427, "GSL:CDF-EXPONENTIAL-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_63d12854( g14198, g14199 )
        TSCP  g14198, g14199;
{
        PUSHSTACKTRACE( t15427 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exponential_Qinv( TSCP_DOUBLE( g14198 ), 
                                                              TSCP_DOUBLE( g14199 ) ) ) );
}

DEFTSCP( lib_2dgsl_exppow_2dp_23f24794_v );
DEFCSTRING( t15429, "GSL:CDF-EXPPOW-P" );

TSCP  lib_2dgsl_exppow_2dp_23f24794( g14205, g14206, g14207 )
        TSCP  g14205, g14206, g14207;
{
        PUSHSTACKTRACE( t15429 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exppow_P( TSCP_DOUBLE( g14205 ), 
                                                      TSCP_DOUBLE( g14206 ), 
                                                      TSCP_DOUBLE( g14207 ) ) ) );
}

DEFTSCP( lib_2dgsl_exppow_2dq_54f57702_v );
DEFCSTRING( t15431, "GSL:CDF-EXPPOW-Q" );

TSCP  lib_2dgsl_exppow_2dq_54f57702( g14214, g14215, g14216 )
        TSCP  g14214, g14215, g14216;
{
        PUSHSTACKTRACE( t15431 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_exppow_Q( TSCP_DOUBLE( g14214 ), 
                                                      TSCP_DOUBLE( g14215 ), 
                                                      TSCP_DOUBLE( g14216 ) ) ) );
}

DEFTSCP( lib_2dgsl_dtdist_2dp_bdfa5fc_v );
DEFCSTRING( t15433, "GSL:CDF-TDIST-P" );

TSCP  lib_2dgsl_dtdist_2dp_bdfa5fc( g14223, g14224 )
        TSCP  g14223, g14224;
{
        PUSHSTACKTRACE( t15433 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_tdist_P( TSCP_DOUBLE( g14223 ), 
                                                     TSCP_DOUBLE( g14224 ) ) ) );
}

DEFTSCP( lib_2dgsl_dtdist_2dq_7cd8956a_v );
DEFCSTRING( t15435, "GSL:CDF-TDIST-Q" );

TSCP  lib_2dgsl_dtdist_2dq_7cd8956a( g14230, g14231 )
        TSCP  g14230, g14231;
{
        PUSHSTACKTRACE( t15435 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_tdist_Q( TSCP_DOUBLE( g14230 ), 
                                                     TSCP_DOUBLE( g14231 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_3f96dcb5_v );
DEFCSTRING( t15437, "GSL:CDF-TDIST-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_3f96dcb5( g14237, g14238 )
        TSCP  g14237, g14238;
{
        PUSHSTACKTRACE( t15437 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_tdist_Pinv( TSCP_DOUBLE( g14237 ), 
                                                        TSCP_DOUBLE( g14238 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_99e1d701_v );
DEFCSTRING( t15439, "GSL:CDF-TDIST-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_99e1d701( g14244, g14245 )
        TSCP  g14244, g14245;
{
        PUSHSTACKTRACE( t15439 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_tdist_Qinv( TSCP_DOUBLE( g14244 ), 
                                                        TSCP_DOUBLE( g14245 ) ) ) );
}

DEFTSCP( lib_2dgsl_dfdist_2dp_89e9cf0b_v );
DEFCSTRING( t15441, "GSL:CDF-FDIST-P" );

TSCP  lib_2dgsl_dfdist_2dp_89e9cf0b( g14251, g14252, g14253 )
        TSCP  g14251, g14252, g14253;
{
        PUSHSTACKTRACE( t15441 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_fdist_P( TSCP_DOUBLE( g14251 ), 
                                                     TSCP_DOUBLE( g14252 ), 
                                                     TSCP_DOUBLE( g14253 ) ) ) );
}

DEFTSCP( lib_2dgsl_dfdist_2dq_feeeff9d_v );
DEFCSTRING( t15443, "GSL:CDF-FDIST-Q" );

TSCP  lib_2dgsl_dfdist_2dq_feeeff9d( g14260, g14261, g14262 )
        TSCP  g14260, g14261, g14262;
{
        PUSHSTACKTRACE( t15443 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_fdist_Q( TSCP_DOUBLE( g14260 ), 
                                                     TSCP_DOUBLE( g14261 ), 
                                                     TSCP_DOUBLE( g14262 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_d372f26b_v );
DEFCSTRING( t15445, "GSL:CDF-FDIST-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_d372f26b( g14269, g14270, g14271 )
        TSCP  g14269, g14270, g14271;
{
        PUSHSTACKTRACE( t15445 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_fdist_Pinv( TSCP_DOUBLE( g14269 ), 
                                                        TSCP_DOUBLE( g14270 ), 
                                                        TSCP_DOUBLE( g14271 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_7505f9df_v );
DEFCSTRING( t15447, "GSL:CDF-FDIST-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_7505f9df( g14278, g14279, g14280 )
        TSCP  g14278, g14279, g14280;
{
        PUSHSTACKTRACE( t15447 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_fdist_Qinv( TSCP_DOUBLE( g14278 ), 
                                                        TSCP_DOUBLE( g14279 ), 
                                                        TSCP_DOUBLE( g14280 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dbeta_2dp_7cb665e3_v );
DEFCSTRING( t15449, "GSL:CDF-BETA-P" );

TSCP  lib_2dgsl_2dbeta_2dp_7cb665e3( g14287, g14288, g14289 )
        TSCP  g14287, g14288, g14289;
{
        PUSHSTACKTRACE( t15449 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_beta_P( TSCP_DOUBLE( g14287 ), 
                                                    TSCP_DOUBLE( g14288 ), 
                                                    TSCP_DOUBLE( g14289 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dbeta_2dq_bb15575_v );
DEFCSTRING( t15451, "GSL:CDF-BETA-Q" );

TSCP  lib_2dgsl_2dbeta_2dq_bb15575( g14296, g14297, g14298 )
        TSCP  g14296, g14297, g14298;
{
        PUSHSTACKTRACE( t15451 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_beta_Q( TSCP_DOUBLE( g14296 ), 
                                                    TSCP_DOUBLE( g14297 ), 
                                                    TSCP_DOUBLE( g14298 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_3393427c_v );
DEFCSTRING( t15453, "GSL:CDF-BETA-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_3393427c( g14305, g14306, g14307 )
        TSCP  g14305, g14306, g14307;
{
        PUSHSTACKTRACE( t15453 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_beta_Pinv( TSCP_DOUBLE( g14305 ), 
                                                       TSCP_DOUBLE( g14306 ), 
                                                       TSCP_DOUBLE( g14307 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_95e449c8_v );
DEFCSTRING( t15455, "GSL:CDF-BETA-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_95e449c8( g14314, g14315, g14316 )
        TSCP  g14314, g14315, g14316;
{
        PUSHSTACKTRACE( t15455 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_beta_Qinv( TSCP_DOUBLE( g14314 ), 
                                                       TSCP_DOUBLE( g14315 ), 
                                                       TSCP_DOUBLE( g14316 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dflat_2dp_967fa510_v );
DEFCSTRING( t15457, "GSL:CDF-FLAT-P" );

TSCP  lib_2dgsl_2dflat_2dp_967fa510( g14323, g14324, g14325 )
        TSCP  g14323, g14324, g14325;
{
        PUSHSTACKTRACE( t15457 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_flat_P( TSCP_DOUBLE( g14323 ), 
                                                    TSCP_DOUBLE( g14324 ), 
                                                    TSCP_DOUBLE( g14325 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dflat_2dq_e1789586_v );
DEFCSTRING( t15459, "GSL:CDF-FLAT-Q" );

TSCP  lib_2dgsl_2dflat_2dq_e1789586( g14332, g14333, g14334 )
        TSCP  g14332, g14333, g14334;
{
        PUSHSTACKTRACE( t15459 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_flat_Q( TSCP_DOUBLE( g14332 ), 
                                                    TSCP_DOUBLE( g14333 ), 
                                                    TSCP_DOUBLE( g14334 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_e6b035ea_v );
DEFCSTRING( t15461, "GSL:CDF-FLAT-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_e6b035ea( g14341, g14342, g14343 )
        TSCP  g14341, g14342, g14343;
{
        PUSHSTACKTRACE( t15461 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_flat_Pinv( TSCP_DOUBLE( g14341 ), 
                                                       TSCP_DOUBLE( g14342 ), 
                                                       TSCP_DOUBLE( g14343 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_40c73e5e_v );
DEFCSTRING( t15463, "GSL:CDF-FLAT-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_40c73e5e( g14350, g14351, g14352 )
        TSCP  g14350, g14351, g14352;
{
        PUSHSTACKTRACE( t15463 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_flat_Qinv( TSCP_DOUBLE( g14350 ), 
                                                       TSCP_DOUBLE( g14351 ), 
                                                       TSCP_DOUBLE( g14352 ) ) ) );
}

DEFTSCP( lib_2dgsl_normal_2dp_1472eefb_v );
DEFCSTRING( t15465, "GSL:CDF-LOGNORMAL-P" );

TSCP  lib_2dgsl_normal_2dp_1472eefb( g14359, g14360, g14361 )
        TSCP  g14359, g14360, g14361;
{
        PUSHSTACKTRACE( t15465 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_lognormal_P( TSCP_DOUBLE( g14359 ), 
                                                         TSCP_DOUBLE( g14360 ), 
                                                         TSCP_DOUBLE( g14361 ) ) ) );
}

DEFTSCP( lib_2dgsl_normal_2dq_6375de6d_v );
DEFCSTRING( t15467, "GSL:CDF-LOGNORMAL-Q" );

TSCP  lib_2dgsl_normal_2dq_6375de6d( g14368, g14369, g14370 )
        TSCP  g14368, g14369, g14370;
{
        PUSHSTACKTRACE( t15467 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_lognormal_Q( TSCP_DOUBLE( g14368 ), 
                                                         TSCP_DOUBLE( g14369 ), 
                                                         TSCP_DOUBLE( g14370 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_a5cba0c0_v );
DEFCSTRING( t15469, "GSL:CDF-LOGNORMAL-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_a5cba0c0( g14377, g14378, g14379 )
        TSCP  g14377, g14378, g14379;
{
        PUSHSTACKTRACE( t15469 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_lognormal_Pinv( TSCP_DOUBLE( g14377 ), 
                                                            TSCP_DOUBLE( g14378 ), 
                                                            TSCP_DOUBLE( g14379 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_3bcab74_v );
DEFCSTRING( t15471, "GSL:CDF-LOGNORMAL-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_3bcab74( g14386, g14387, g14388 )
        TSCP  g14386, g14387, g14388;
{
        PUSHSTACKTRACE( t15471 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_lognormal_Qinv( TSCP_DOUBLE( g14386 ), 
                                                            TSCP_DOUBLE( g14387 ), 
                                                            TSCP_DOUBLE( g14388 ) ) ) );
}

DEFTSCP( lib_2dgsl_umbel1_2dp_d77bb94_v );
DEFCSTRING( t15473, "GSL:CDF-GUMBEL1-P" );

TSCP  lib_2dgsl_umbel1_2dp_d77bb94( g14395, g14396, g14397 )
        TSCP  g14395, g14396, g14397;
{
        PUSHSTACKTRACE( t15473 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel1_P( TSCP_DOUBLE( g14395 ), 
                                                       TSCP_DOUBLE( g14396 ), 
                                                       TSCP_DOUBLE( g14397 ) ) ) );
}

DEFTSCP( lib_2dgsl_umbel1_2dq_7a708b02_v );
DEFCSTRING( t15475, "GSL:CDF-GUMBEL1-Q" );

TSCP  lib_2dgsl_umbel1_2dq_7a708b02( g14404, g14405, g14406 )
        TSCP  g14404, g14405, g14406;
{
        PUSHSTACKTRACE( t15475 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel1_Q( TSCP_DOUBLE( g14404 ), 
                                                       TSCP_DOUBLE( g14405 ), 
                                                       TSCP_DOUBLE( g14406 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_88b33539_v );
DEFCSTRING( t15477, "GSL:CDF-GUMBEL1-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_88b33539( g14413, g14414, g14415 )
        TSCP  g14413, g14414, g14415;
{
        PUSHSTACKTRACE( t15477 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel1_Pinv( TSCP_DOUBLE( g14413 ), 
                                                          TSCP_DOUBLE( g14414 ), 
                                                          TSCP_DOUBLE( g14415 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_2ec43e8d_v );
DEFCSTRING( t15479, "GSL:CDF-GUMBEL1-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_2ec43e8d( g14422, g14423, g14424 )
        TSCP  g14422, g14423, g14424;
{
        PUSHSTACKTRACE( t15479 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel1_Qinv( TSCP_DOUBLE( g14422 ), 
                                                          TSCP_DOUBLE( g14423 ), 
                                                          TSCP_DOUBLE( g14424 ) ) ) );
}

DEFTSCP( lib_2dgsl_umbel2_2dp_4ad7c144_v );
DEFCSTRING( t15481, "GSL:CDF-GUMBEL2-P" );

TSCP  lib_2dgsl_umbel2_2dp_4ad7c144( g14431, g14432, g14433 )
        TSCP  g14431, g14432, g14433;
{
        PUSHSTACKTRACE( t15481 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel2_P( TSCP_DOUBLE( g14431 ), 
                                                       TSCP_DOUBLE( g14432 ), 
                                                       TSCP_DOUBLE( g14433 ) ) ) );
}

DEFTSCP( lib_2dgsl_umbel2_2dq_3dd0f1d2_v );
DEFCSTRING( t15483, "GSL:CDF-GUMBEL2-Q" );

TSCP  lib_2dgsl_umbel2_2dq_3dd0f1d2( g14440, g14441, g14442 )
        TSCP  g14440, g14441, g14442;
{
        PUSHSTACKTRACE( t15483 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel2_Q( TSCP_DOUBLE( g14440 ), 
                                                       TSCP_DOUBLE( g14441 ), 
                                                       TSCP_DOUBLE( g14442 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_11515338_v );
DEFCSTRING( t15485, "GSL:CDF-GUMBEL2-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_11515338( g14449, g14450, g14451 )
        TSCP  g14449, g14450, g14451;
{
        PUSHSTACKTRACE( t15485 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel2_Pinv( TSCP_DOUBLE( g14449 ), 
                                                          TSCP_DOUBLE( g14450 ), 
                                                          TSCP_DOUBLE( g14451 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_b726588c_v );
DEFCSTRING( t15487, "GSL:CDF-GUMBEL2-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_b726588c( g14458, g14459, g14460 )
        TSCP  g14458, g14459, g14460;
{
        PUSHSTACKTRACE( t15487 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_gumbel2_Qinv( TSCP_DOUBLE( g14458 ), 
                                                          TSCP_DOUBLE( g14459 ), 
                                                          TSCP_DOUBLE( g14460 ) ) ) );
}

DEFTSCP( lib_2dgsl_eibull_2dp_7e9e380f_v );
DEFCSTRING( t15489, "GSL:CDF-WEIBULL-P" );

TSCP  lib_2dgsl_eibull_2dp_7e9e380f( g14467, g14468, g14469 )
        TSCP  g14467, g14468, g14469;
{
        PUSHSTACKTRACE( t15489 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_weibull_P( TSCP_DOUBLE( g14467 ), 
                                                       TSCP_DOUBLE( g14468 ), 
                                                       TSCP_DOUBLE( g14469 ) ) ) );
}

DEFTSCP( lib_2dgsl_eibull_2dq_9990899_v );
DEFCSTRING( t15491, "GSL:CDF-WEIBULL-Q" );

TSCP  lib_2dgsl_eibull_2dq_9990899( g14476, g14477, g14478 )
        TSCP  g14476, g14477, g14478;
{
        PUSHSTACKTRACE( t15491 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_weibull_Q( TSCP_DOUBLE( g14476 ), 
                                                       TSCP_DOUBLE( g14477 ), 
                                                       TSCP_DOUBLE( g14478 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_f494c140_v );
DEFCSTRING( t15493, "GSL:CDF-WEIBULL-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_f494c140( g14485, g14486, g14487 )
        TSCP  g14485, g14486, g14487;
{
        PUSHSTACKTRACE( t15493 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_weibull_Pinv( TSCP_DOUBLE( g14485 ), 
                                                          TSCP_DOUBLE( g14486 ), 
                                                          TSCP_DOUBLE( g14487 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_52e3caf4_v );
DEFCSTRING( t15495, "GSL:CDF-WEIBULL-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_52e3caf4( g14494, g14495, g14496 )
        TSCP  g14494, g14495, g14496;
{
        PUSHSTACKTRACE( t15495 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_weibull_Qinv( TSCP_DOUBLE( g14494 ), 
                                                          TSCP_DOUBLE( g14495 ), 
                                                          TSCP_DOUBLE( g14496 ) ) ) );
}

DEFTSCP( lib_2dgsl_pareto_2dp_ac54631d_v );
DEFCSTRING( t15497, "GSL:CDF-PARETO-P" );

TSCP  lib_2dgsl_pareto_2dp_ac54631d( g14503, g14504, g14505 )
        TSCP  g14503, g14504, g14505;
{
        PUSHSTACKTRACE( t15497 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pareto_P( TSCP_DOUBLE( g14503 ), 
                                                      TSCP_DOUBLE( g14504 ), 
                                                      TSCP_DOUBLE( g14505 ) ) ) );
}

DEFTSCP( lib_2dgsl_pareto_2dq_db53538b_v );
DEFCSTRING( t15499, "GSL:CDF-PARETO-Q" );

TSCP  lib_2dgsl_pareto_2dq_db53538b( g14512, g14513, g14514 )
        TSCP  g14512, g14513, g14514;
{
        PUSHSTACKTRACE( t15499 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pareto_Q( TSCP_DOUBLE( g14512 ), 
                                                      TSCP_DOUBLE( g14513 ), 
                                                      TSCP_DOUBLE( g14514 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_62b47336_v );
DEFCSTRING( t15501, "GSL:CDF-PARETO-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_62b47336( g14521, g14522, g14523 )
        TSCP  g14521, g14522, g14523;
{
        PUSHSTACKTRACE( t15501 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pareto_Pinv( TSCP_DOUBLE( g14521 ), 
                                                         TSCP_DOUBLE( g14522 ), 
                                                         TSCP_DOUBLE( g14523 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_c4c37882_v );
DEFCSTRING( t15503, "GSL:CDF-PARETO-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_c4c37882( g14530, g14531, g14532 )
        TSCP  g14530, g14531, g14532;
{
        PUSHSTACKTRACE( t15503 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pareto_Qinv( TSCP_DOUBLE( g14530 ), 
                                                         TSCP_DOUBLE( g14531 ), 
                                                         TSCP_DOUBLE( g14532 ) ) ) );
}

DEFTSCP( lib_2dgsl_gistic_2dp_eaecf81e_v );
DEFCSTRING( t15505, "GSL:CDF-LOGISTIC-P" );

TSCP  lib_2dgsl_gistic_2dp_eaecf81e( g14539, g14540 )
        TSCP  g14539, g14540;
{
        PUSHSTACKTRACE( t15505 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_logistic_P( TSCP_DOUBLE( g14539 ), 
                                                        TSCP_DOUBLE( g14540 ) ) ) );
}

DEFTSCP( lib_2dgsl_gistic_2dq_9debc888_v );
DEFCSTRING( t15507, "GSL:CDF-LOGISTIC-Q" );

TSCP  lib_2dgsl_gistic_2dq_9debc888( g14546, g14547 )
        TSCP  g14546, g14547;
{
        PUSHSTACKTRACE( t15507 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_logistic_Q( TSCP_DOUBLE( g14546 ), 
                                                        TSCP_DOUBLE( g14547 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dp_2dinv_ee27809e_v );
DEFCSTRING( t15509, "GSL:CDF-LOGISTIC-P-INV" );

TSCP  lib_2dgsl__2dp_2dinv_ee27809e( g14553, g14554 )
        TSCP  g14553, g14554;
{
        PUSHSTACKTRACE( t15509 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_logistic_Pinv( TSCP_DOUBLE( g14553 ), 
                                                           TSCP_DOUBLE( g14554 ) ) ) );
}

DEFTSCP( lib_2dgsl__2dq_2dinv_48508b2a_v );
DEFCSTRING( t15511, "GSL:CDF-LOGISTIC-Q-INV" );

TSCP  lib_2dgsl__2dq_2dinv_48508b2a( g14560, g14561 )
        TSCP  g14560, g14561;
{
        PUSHSTACKTRACE( t15511 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_logistic_Qinv( TSCP_DOUBLE( g14560 ), 
                                                           TSCP_DOUBLE( g14561 ) ) ) );
}

DEFTSCP( lib_2dgsl_nomial_2dp_655c78a8_v );
DEFCSTRING( t15513, "GSL:CDF-BINOMIAL-P" );

TSCP  lib_2dgsl_nomial_2dp_655c78a8( g14567, g14568, g14569 )
        TSCP  g14567, g14568, g14569;
{
        PUSHSTACKTRACE( t15513 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_binomial_P( TSCP_S2CUINT( g14567 ), 
                                                        TSCP_DOUBLE( g14568 ), 
                                                        TSCP_S2CUINT( g14569 ) ) ) );
}

DEFTSCP( lib_2dgsl_nomial_2dq_125b483e_v );
DEFCSTRING( t15515, "GSL:CDF-BINOMIAL-Q" );

TSCP  lib_2dgsl_nomial_2dq_125b483e( g14576, g14577, g14578 )
        TSCP  g14576, g14577, g14578;
{
        PUSHSTACKTRACE( t15515 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_binomial_Q( TSCP_S2CUINT( g14576 ), 
                                                        TSCP_DOUBLE( g14577 ), 
                                                        TSCP_S2CUINT( g14578 ) ) ) );
}

DEFTSCP( lib_2dgsl_oisson_2dp_6f129804_v );
DEFCSTRING( t15517, "GSL:CDF-POISSON-P" );

TSCP  lib_2dgsl_oisson_2dp_6f129804( g14585, g14586 )
        TSCP  g14585, g14586;
{
        PUSHSTACKTRACE( t15517 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_poisson_P( TSCP_S2CUINT( g14585 ), 
                                                       TSCP_DOUBLE( g14586 ) ) ) );
}

DEFTSCP( lib_2dgsl_oisson_2dq_1815a892_v );
DEFCSTRING( t15519, "GSL:CDF-POISSON-Q" );

TSCP  lib_2dgsl_oisson_2dq_1815a892( g14592, g14593 )
        TSCP  g14592, g14593;
{
        PUSHSTACKTRACE( t15519 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_poisson_Q( TSCP_S2CUINT( g14592 ), 
                                                       TSCP_DOUBLE( g14593 ) ) ) );
}

DEFTSCP( lib_2dgsl_metric_2dp_e4ac99fd_v );
DEFCSTRING( t15521, "GSL:CDF-GEOMETRIC-P" );

TSCP  lib_2dgsl_metric_2dp_e4ac99fd( g14599, g14600 )
        TSCP  g14599, g14600;
{
        PUSHSTACKTRACE( t15521 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_geometric_P( TSCP_S2CUINT( g14599 ), 
                                                         TSCP_DOUBLE( g14600 ) ) ) );
}

DEFTSCP( lib_2dgsl_metric_2dq_93aba96b_v );
DEFCSTRING( t15523, "GSL:CDF-GEOMETRIC-Q" );

TSCP  lib_2dgsl_metric_2dq_93aba96b( g14606, g14607 )
        TSCP  g14606, g14607;
{
        PUSHSTACKTRACE( t15523 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_geometric_Q( TSCP_S2CUINT( g14606 ), 
                                                         TSCP_DOUBLE( g14607 ) ) ) );
}

DEFTSCP( lib_2dgsl_nomial_2dp_6bd2f3cb_v );
DEFCSTRING( t15525, "GSL:CDF-NEGATIVE-BINOMIAL-P" );

TSCP  lib_2dgsl_nomial_2dp_6bd2f3cb( g14613, g14614, g14615 )
        TSCP  g14613, g14614, g14615;
{
        PUSHSTACKTRACE( t15525 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_negative_binomial_P( TSCP_S2CUINT( g14613 ), 
                                                                 TSCP_DOUBLE( g14614 ), 
                                                                 TSCP_DOUBLE( g14615 ) ) ) );
}

DEFTSCP( lib_2dgsl_nomial_2dq_1cd5c35d_v );
DEFCSTRING( t15527, "GSL:CDF-NEGATIVE-BINOMIAL-Q" );

TSCP  lib_2dgsl_nomial_2dq_1cd5c35d( g14622, g14623, g14624 )
        TSCP  g14622, g14623, g14624;
{
        PUSHSTACKTRACE( t15527 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_negative_binomial_Q( TSCP_S2CUINT( g14622 ), 
                                                                 TSCP_DOUBLE( g14623 ), 
                                                                 TSCP_DOUBLE( g14624 ) ) ) );
}

DEFTSCP( lib_2dgsl_pascal_2dp_1795bf41_v );
DEFCSTRING( t15529, "GSL:CDF-PASCAL-P" );

TSCP  lib_2dgsl_pascal_2dp_1795bf41( g14631, g14632, g14633 )
        TSCP  g14631, g14632, g14633;
{
        PUSHSTACKTRACE( t15529 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pascal_P( TSCP_S2CUINT( g14631 ), 
                                                      TSCP_DOUBLE( g14632 ), 
                                                      TSCP_S2CUINT( g14633 ) ) ) );
}

DEFTSCP( lib_2dgsl_pascal_2dq_60928fd7_v );
DEFCSTRING( t15531, "GSL:CDF-PASCAL-Q" );

TSCP  lib_2dgsl_pascal_2dq_60928fd7( g14640, g14641, g14642 )
        TSCP  g14640, g14641, g14642;
{
        PUSHSTACKTRACE( t15531 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_pascal_Q( TSCP_S2CUINT( g14640 ), 
                                                      TSCP_DOUBLE( g14641 ), 
                                                      TSCP_S2CUINT( g14642 ) ) ) );
}

DEFTSCP( lib_2dgsl_metric_2dp_821d4dfb_v );
DEFCSTRING( t15533, "GSL:CDF-HYPERGEOMETRIC-P" );

TSCP  lib_2dgsl_metric_2dp_821d4dfb( g14649, 
                                     g14650, g14651, g14652 )
        TSCP  g14649, g14650, g14651, g14652;
{
        PUSHSTACKTRACE( t15533 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_hypergeometric_P( TSCP_S2CUINT( g14649 ), 
                                                              TSCP_S2CUINT( g14650 ), 
                                                              TSCP_S2CUINT( g14651 ), 
                                                              TSCP_S2CUINT( g14652 ) ) ) );
}

DEFTSCP( lib_2dgsl_metric_2dq_f51a7d6d_v );
DEFCSTRING( t15535, "GSL:CDF-HYPERGEOMETRIC-Q" );

TSCP  lib_2dgsl_metric_2dq_f51a7d6d( g14660, 
                                     g14661, g14662, g14663 )
        TSCP  g14660, g14661, g14662, g14663;
{
        PUSHSTACKTRACE( t15535 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_cdf_hypergeometric_Q( TSCP_S2CUINT( g14660 ), 
                                                              TSCP_S2CUINT( g14661 ), 
                                                              TSCP_S2CUINT( g14662 ), 
                                                              TSCP_S2CUINT( g14663 ) ) ) );
}

DEFTSCP( lib_2dgsl_2dborosh13_483e9259_v );
DEFCSTRING( t15537, "GSL:RNG-BOROSH13" );
DEFTSCP( lib_2dgsl__2dcoveyou_8389c91c_v );
DEFCSTRING( t15538, "GSL:RNG-COVEYOU" );
DEFTSCP( lib_2dgsl_rng_2dcmrg_e4d8acd9_v );
DEFCSTRING( t15539, "GSL:RNG-CMRG" );
DEFTSCP( lib_2dgsl_dfishman18_ed0261bd_v );
DEFCSTRING( t15540, "GSL:RNG-FISHMAN18" );
DEFTSCP( lib_2dgsl_dfishman20_c8f4ba4c_v );
DEFCSTRING( t15541, "GSL:RNG-FISHMAN20" );
DEFTSCP( lib_2dgsl_dfishman2x_b0f373ee_v );
DEFCSTRING( t15542, "GSL:RNG-FISHMAN2X" );
DEFTSCP( lib_2dgsl_ng_2dgfsr4_caa9eb8b_v );
DEFCSTRING( t15543, "GSL:RNG-GFSR4" );
DEFTSCP( lib_2dgsl_2dknuthran_c2fb92c8_v );
DEFCSTRING( t15544, "GSL:RNG-KNUTHRAN" );
DEFTSCP( lib_2dgsl_dknuthran2_5daae090_v );
DEFCSTRING( t15545, "GSL:RNG-KNUTHRAN2" );
DEFTSCP( lib_2dgsl_uthran2002_a6948354_v );
DEFCSTRING( t15546, "GSL:RNG-KNUTHRAN2002" );
DEFTSCP( lib_2dgsl_dlecuyer21_aada6481_v );
DEFCSTRING( t15547, "GSL:RNG-LECUYER21" );
DEFTSCP( lib_2dgsl_g_2dminstd_407c48c5_v );
DEFCSTRING( t15548, "GSL:RNG-MINSTD" );
DEFTSCP( toollib_2dgsl_gsl_3arng_2dmrg_v );
DEFCSTRING( t15549, "GSL:RNG-MRG" );
DEFTSCP( lib_2dgsl__2dmt19937_2fe9cb7e_v );
DEFCSTRING( t15550, "GSL:RNG-MT19937" );
DEFTSCP( lib_2dgsl_937_2d1999_d8dcf5db_v );
DEFCSTRING( t15551, "GSL:RNG-MT19937-1999" );
DEFTSCP( lib_2dgsl_937_2d1998_afdbc54d_v );
DEFCSTRING( t15552, "GSL:RNG-MT19937-1998" );
DEFTSCP( lib_2dgsl_rng_2dr250_21aae83b_v );
DEFCSTRING( t15553, "GSL:RNG-R250" );
DEFTSCP( lib_2dgsl_rng_2dran0_161ffc4d_v );
DEFCSTRING( t15554, "GSL:RNG-RAN0" );
DEFTSCP( lib_2dgsl_rng_2dran1_6118ccdb_v );
DEFCSTRING( t15555, "GSL:RNG-RAN1" );
DEFTSCP( lib_2dgsl_rng_2dran2_f8119d61_v );
DEFCSTRING( t15556, "GSL:RNG-RAN2" );
DEFTSCP( lib_2dgsl_rng_2dran3_8f16adf7_v );
DEFCSTRING( t15557, "GSL:RNG-RAN3" );
DEFTSCP( lib_2dgsl_rng_2drand_7a1969a0_v );
DEFCSTRING( t15558, "GSL:RNG-RAND" );
DEFTSCP( lib_2dgsl_g_2drand48_9415465_v );
DEFCSTRING( t15559, "GSL:RNG-RAND48" );
DEFTSCP( lib_2dgsl_m128_2dbsd_f484cbb0_v );
DEFCSTRING( t15560, "GSL:RNG-RANDOM128-BSD" );
DEFTSCP( lib_2dgsl_8_2dglibc2_8ac688cf_v );
DEFCSTRING( t15561, "GSL:RNG-RANDOM128-GLIBC2" );
DEFTSCP( lib_2dgsl_28_2dlibc5_7409c86b_v );
DEFCSTRING( t15562, "GSL:RNG-RANDOM128-LIBC5" );
DEFTSCP( lib_2dgsl_m256_2dbsd_97f38531_v );
DEFCSTRING( t15563, "GSL:RNG-RANDOM256-BSD" );
DEFTSCP( lib_2dgsl_6_2dglibc2_caaa7f0f_v );
DEFCSTRING( t15564, "GSL:RNG-RANDOM256-GLIBC2" );
DEFTSCP( lib_2dgsl_56_2dlibc5_c7f56e81_v );
DEFCSTRING( t15565, "GSL:RNG-RANDOM256-LIBC5" );
DEFTSCP( lib_2dgsl_om32_2dbsd_5ce9e00a_v );
DEFCSTRING( t15566, "GSL:RNG-RANDOM32-BSD" );
DEFTSCP( lib_2dgsl_2_2dglibc2_77c132d_v );
DEFCSTRING( t15567, "GSL:RNG-RANDOM32-GLIBC2" );
DEFTSCP( lib_2dgsl_32_2dlibc5_c69fdf74_v );
DEFCSTRING( t15568, "GSL:RNG-RANDOM32-LIBC5" );
DEFTSCP( lib_2dgsl_om64_2dbsd_77d9db54_v );
DEFCSTRING( t15569, "GSL:RNG-RANDOM64-BSD" );
DEFTSCP( lib_2dgsl_4_2dglibc2_7b35cf28_v );
DEFCSTRING( t15570, "GSL:RNG-RANDOM64-GLIBC2" );
DEFTSCP( lib_2dgsl_64_2dlibc5_53ac6dba_v );
DEFCSTRING( t15571, "GSL:RNG-RANDOM64-LIBC5" );
DEFTSCP( lib_2dgsl_dom8_2dbsd_b7a47f46_v );
DEFCSTRING( t15572, "GSL:RNG-RANDOM8-BSD" );
DEFTSCP( lib_2dgsl_8_2dglibc2_8048cc9a_v );
DEFCSTRING( t15573, "GSL:RNG-RANDOM8-GLIBC2" );
DEFTSCP( lib_2dgsl_m8_2dlibc5_fae3bae5_v );
DEFCSTRING( t15574, "GSL:RNG-RANDOM8-LIBC5" );
DEFTSCP( lib_2dgsl_ndom_2dbsd_57917b1f_v );
DEFCSTRING( t15575, "GSL:RNG-RANDOM-BSD" );
DEFTSCP( lib_2dgsl_m_2dglibc2_d1fad862_v );
DEFCSTRING( t15576, "GSL:RNG-RANDOM-GLIBC2" );
DEFTSCP( lib_2dgsl_om_2dlibc5_96f778d4_v );
DEFCSTRING( t15577, "GSL:RNG-RANDOM-LIBC5" );
DEFTSCP( lib_2dgsl_ng_2drandu_f6c33f32_v );
DEFCSTRING( t15578, "GSL:RNG-RANDU" );
DEFTSCP( lib_2dgsl_rng_2dranf_9417088c_v );
DEFCSTRING( t15579, "GSL:RNG-RANF" );
DEFTSCP( lib_2dgsl_g_2dranlux_98ec3a09_v );
DEFCSTRING( t15580, "GSL:RNG-RANLUX" );
DEFTSCP( lib_2dgsl_dranlux389_ed732407_v );
DEFCSTRING( t15581, "GSL:RNG-RANLUX389" );
DEFTSCP( lib_2dgsl__2dranlxd1_c6359aaa_v );
DEFCSTRING( t15582, "GSL:RNG-RANLXD1" );
DEFTSCP( lib_2dgsl__2dranlxd2_5f3ccb10_v );
DEFCSTRING( t15583, "GSL:RNG-RANLXD2" );
DEFTSCP( lib_2dgsl__2dranlxs0_b4b12eaa_v );
DEFCSTRING( t15584, "GSL:RNG-RANLXS0" );
DEFTSCP( lib_2dgsl__2dranlxs1_c3b61e3c_v );
DEFCSTRING( t15585, "GSL:RNG-RANLXS1" );
DEFTSCP( lib_2dgsl__2dranlxs2_5abf4f86_v );
DEFCSTRING( t15586, "GSL:RNG-RANLXS2" );
DEFTSCP( lib_2dgsl_g_2dranmar_57556e75_v );
DEFCSTRING( t15587, "GSL:RNG-RANMAR" );
DEFTSCP( lib_2dgsl_g_2dslatec_21d1143e_v );
DEFCSTRING( t15588, "GSL:RNG-SLATEC" );
DEFTSCP( lib_2dgsl_rng_2dtaus_75977821_v );
DEFCSTRING( t15589, "GSL:RNG-TAUS" );
DEFTSCP( lib_2dgsl_ng_2dtaus2_84cbd6a6_v );
DEFCSTRING( t15590, "GSL:RNG-TAUS2" );
DEFTSCP( lib_2dgsl__2dtaus113_ec2630b8_v );
DEFCSTRING( t15591, "GSL:RNG-TAUS113" );
DEFTSCP( lib_2dgsl_transputer_c1b63220_v );
DEFCSTRING( t15592, "GSL:RNG-TRANSPUTER" );
DEFTSCP( lib_2dgsl_ng_2dtt800_ae141272_v );
DEFCSTRING( t15593, "GSL:RNG-TT800" );
DEFTSCP( toollib_2dgsl_gsl_3arng_2duni_v );
DEFCSTRING( t15594, "GSL:RNG-UNI" );
DEFTSCP( lib_2dgsl_ng_2duni32_48dfa51_v );
DEFCSTRING( t15595, "GSL:RNG-UNI32" );
DEFTSCP( toollib_2dgsl_gsl_3arng_2dvax_v );
DEFCSTRING( t15596, "GSL:RNG-VAX" );
DEFTSCP( lib_2dgsl_waterman14_551e862f_v );
DEFCSTRING( t15597, "GSL:RNG-WATERMAN14" );
DEFTSCP( toollib_2dgsl_gsl_3arng_2dzuf_v );
DEFCSTRING( t15598, "GSL:RNG-ZUF" );
DEFTSCP( lib_2dgsl_nv_2dsetup_f7fd456a_v );
DEFCSTRING( t15599, "GSL:RNG-ENV-SETUP" );

TSCP  lib_2dgsl_nv_2dsetup_f7fd456a(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t15599 );
        X1 = POINTER_TSCP( gsl_rng_env_setup(  ) );
        POPSTACKTRACE( lib_2dgsl_rng_2dtype_701c639( X1 ) );
}

DEFTSCP( lib_2dgsl__2ddefault_5d074e10_v );
DEFCSTRING( t15601, "GSL:RNG-DEFAULT" );
DEFTSCP( lib_2dgsl_ult_2dseed_4c952ed2_v );
DEFCSTRING( t15602, "GSL:RNG-DEFAULT-SEED" );
DEFTSCP( lib_2dgsl_ng_2dalloc_374db249_v );
DEFCSTRING( t15603, "GSL:RNG-ALLOC" );

TSCP  lib_2dgsl_ng_2dalloc_374db249( g14736 )
        TSCP  g14736;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t15603 );
        X2 = lib_2dgsl_e_2dhandle_fff43dc1( g14736 );
        X1 = POINTER_TSCP( gsl_rng_alloc( TSCP_POINTER( X2 ) ) );
        POPSTACKTRACE( lib_2dgsl_dgsl_3arng_ea543a60( X1 ) );
}

DEFTSCP( lib_2dgsl_g_2dmemcpy_8c750087_v );
DEFCSTRING( t15605, "GSL:RNG-MEMCPY" );

TSCP  lib_2dgsl_g_2dmemcpy_8c750087( g14741, g14742 )
        TSCP  g14741, g14742;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t15605 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14741 );
        X2 = lib_2dgsl_g_2dhandle_ccb48f8d( g14742 );
        POPSTACKTRACE( sc_int_tscp( gsl_rng_memcpy( TSCP_POINTER( X1 ), 
                                                    TSCP_POINTER( X2 ) ) ) );
}

DEFTSCP( lib_2dgsl_ng_2dclone_bfb3cb04_v );
DEFCSTRING( t15607, "GSL:RNG-CLONE" );

TSCP  lib_2dgsl_ng_2dclone_bfb3cb04( g14748 )
        TSCP  g14748;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t15607 );
        X2 = lib_2dgsl_g_2dhandle_ccb48f8d( g14748 );
        X1 = POINTER_TSCP( gsl_rng_clone( TSCP_POINTER( X2 ) ) );
        POPSTACKTRACE( lib_2dgsl_dgsl_3arng_ea543a60( X1 ) );
}

DEFTSCP( lib_2dgsl_rng_2dfree_2ff15d1c_v );
DEFCSTRING( t15609, "GSL:RNG-FREE" );

TSCP  lib_2dgsl_rng_2dfree_2ff15d1c( g14753 )
        TSCP  g14753;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15609 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14753 );
        gsl_rng_free( TSCP_POINTER( X1 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dgsl_gsl_3arng_2dset_v );
DEFCSTRING( t15612, "GSL:RNG-SET" );

TSCP  toollib_2dgsl_gsl_3arng_2dset( g14759, g14760 )
        TSCP  g14759, g14760;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15612 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14759 );
        gsl_rng_set( TSCP_POINTER( X1 ), 
                     TSCP_S2CINT( g14760 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dgsl_gsl_3arng_2dmax_v );
DEFCSTRING( t15615, "GSL:RNG-MAX" );

TSCP  toollib_2dgsl_gsl_3arng_2dmax( g14767 )
        TSCP  g14767;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15615 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14767 );
        POPSTACKTRACE( S2CINT_TSCP( gsl_rng_max( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( toollib_2dgsl_gsl_3arng_2dmin_v );
DEFCSTRING( t15617, "GSL:RNG-MIN" );

TSCP  toollib_2dgsl_gsl_3arng_2dmin( g14772 )
        TSCP  g14772;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15617 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14772 );
        POPSTACKTRACE( S2CINT_TSCP( gsl_rng_min( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_rng_2dname_3cfce2d2_v );
DEFCSTRING( t15619, "GSL:RNG-NAME" );

TSCP  lib_2dgsl_rng_2dname_3cfce2d2( g14777 )
        TSCP  g14777;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15619 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14777 );
        POPSTACKTRACE( CSTRING_TSCP( gsl_rng_name( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( toollib_2dgsl_gsl_3arng_2dget_v );
DEFCSTRING( t15621, "GSL:RNG-GET" );

TSCP  toollib_2dgsl_gsl_3arng_2dget( g14782 )
        TSCP  g14782;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15621 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14782 );
        POPSTACKTRACE( S2CINT_TSCP( gsl_rng_get( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl__2duniform_48753778_v );
DEFCSTRING( t15623, "GSL:RNG-UNIFORM" );

TSCP  lib_2dgsl__2duniform_48753778( g14787 )
        TSCP  g14787;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15623 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14787 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_rng_uniform( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_form_2dpos_3bfd69c2_v );
DEFCSTRING( t15625, "GSL:RNG-UNIFORM-POS" );

TSCP  lib_2dgsl_form_2dpos_3bfd69c2( g14792 )
        TSCP  g14792;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15625 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14792 );
        POPSTACKTRACE( DOUBLE_TSCP( gsl_rng_uniform_pos( TSCP_POINTER( X1 ) ) ) );
}

DEFTSCP( lib_2dgsl_form_2dint_af7555df_v );
DEFCSTRING( t15627, "GSL:RNG-UNIFORM-INT" );

TSCP  lib_2dgsl_form_2dint_af7555df( g14797, g14798 )
        TSCP  g14797, g14798;
{
        TSCP  X1;

        PUSHSTACKTRACE( t15627 );
        X1 = lib_2dgsl_g_2dhandle_ccb48f8d( g14797 );
        POPSTACKTRACE( S2CINT_TSCP( gsl_rng_uniform_int( TSCP_POINTER( X1 ), 
                                                         TSCP_S2CINT( g14798 ) ) ) );
}

void scrt1__init();
void toollib_2dc_2dbindings__init();
void scrt4__init();
void qobischeme__init();
void scrt2__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt1__init();
        toollib_2dc_2dbindings__init();
        scrt4__init();
        qobischeme__init();
        scrt2__init();
        scdebug__init();
        MAXDISPLAY( 2 );
}

void  toollib_2dgsl__init()
{
        TSCP  X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dgsl SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t14812, 
                       ADR( lib_2dgsl_sl_2d1_2d0_b335ec5c_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_sl_2d1_2d0_b335ec5c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14814, 
                       ADR( lib_2dgsl_sl_2d3_2d0_c9f5bf3c_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_sl_2d3_2d0_c9f5bf3c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14816, 
                       ADR( lib_2dgsl_sl_2d5_2d0_46b54a9c_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_sl_2d5_2d0_46b54a9c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14818, 
                       ADR( lib_2dgsl_sl_2d7_2d0_3c7519fc_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_sl_2d7_2d0_3c7519fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14820, 
                       ADR( lib_2dgsl_sl_2d9_2d0_8345a79d_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_sl_2d9_2d0_8345a79d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14822, 
                       ADR( lib_2dgsl_l_2d11_2d0_1d1f343f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d11_2d0_1d1f343f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14824, 
                       ADR( lib_2dgsl_l_2d13_2d0_67df675f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d13_2d0_67df675f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14826, 
                       ADR( lib_2dgsl_l_2d15_2d0_e89f92ff_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d15_2d0_e89f92ff, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14828, 
                       ADR( lib_2dgsl_l_2d17_2d0_925fc19f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d17_2d0_925fc19f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14830, 
                       ADR( lib_2dgsl_l_2d19_2d0_2d6f7ffe_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d19_2d0_2d6f7ffe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14832, 
                       ADR( lib_2dgsl_l_2d21_2d0_9b8b4691_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2d21_2d0_9b8b4691, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14834, 
                       ADR( lib_2dgsl_dgsl_3arng_ea543a60_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_dgsl_3arng_ea543a60, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14849, 
                       ADR( toollib_2dgsl_gsl_3arng_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dgsl_gsl_3arng_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14865, 
                       ADR( lib_2dgsl_dhandle_21_54981f6f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dhandle_21_54981f6f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14869, 
                       ADR( lib_2dgsl_g_2dhandle_ccb48f8d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_g_2dhandle_ccb48f8d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14880, 
                       ADR( lib_2dgsl_dhandle_21_ca995b9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dhandle_21_ca995b9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14891, 
                       ADR( lib_2dgsl_rng_2dtype_701c639_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_rng_2dtype_701c639, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14906, 
                       ADR( lib_2dgsl__2dtype_3f_d54f16ae_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dtype_3f_d54f16ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14922, 
                       ADR( lib_2dgsl_dhandle_21_43d5c16c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dhandle_21_43d5c16c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14926, 
                       ADR( lib_2dgsl_e_2dhandle_fff43dc1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_e_2dhandle_fff43dc1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14937, 
                       ADR( lib_2dgsl_dhandle_21_a61576d6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dhandle_21_a61576d6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14948, 
                       ADR( toollib_2dgsl__2agsl_2drng_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t14949, 
                       ADR( lib_2dgsl_l_2drng_21_357d1b65_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_l_2drng_21_357d1b65, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14954, 
                       ADR( lib_2dgsl_1_2dset_21_801705b6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_1_2dset_21_801705b6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14956, 
                       ADR( lib_2dgsl_ix_2dsize1_c383bdad_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ix_2dsize1_c383bdad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14958, 
                       ADR( lib_2dgsl_1_2dupdate_4a871c32_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_1_2dupdate_4a871c32, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14960, 
                       ADR( lib_2dgsl_2_2dset_21_6b20beb5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2_2dset_21_6b20beb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14962, 
                       ADR( lib_2dgsl_ix_2dsize2_5a8aec17_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ix_2dsize2_5a8aec17, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14964, 
                       ADR( lib_2dgsl_2_2dupdate_a1b0a731_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2_2dupdate_a1b0a731, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14966, 
                       ADR( lib_2dgsl_a_2dset_21_1d599edf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_a_2dset_21_1d599edf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14968, 
                       ADR( lib_2dgsl_rix_2ddata_d500dbc5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_rix_2ddata_d500dbc5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14970, 
                       ADR( lib_2dgsl_a_2dupdate_d7c9875b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_a_2dupdate_d7c9875b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14972, 
                       ADR( lib_2dgsl_e_2dset_21_1287631c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_e_2dset_21_1287631c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14974, 
                       ADR( lib_2dgsl_tor_2dsize_b7f2ea87_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_tor_2dsize_b7f2ea87, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14976, 
                       ADR( lib_2dgsl_e_2dupdate_d8177a98_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_e_2dupdate_d8177a98, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14978, 
                       ADR( lib_2dgsl_a_2dset_21_86623e1c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_a_2dset_21_86623e1c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14980, 
                       ADR( lib_2dgsl_tor_2ddata_edc13d8e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_tor_2ddata_edc13d8e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14982, 
                       ADR( lib_2dgsl_a_2dupdate_4cf22798_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_a_2dupdate_4cf22798, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14984, 
                       ADR( lib_2dgsl_ix_2dalloc_895c8eed_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ix_2dalloc_895c8eed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14986, 
                       ADR( lib_2dgsl_rix_2dfree_35dde96e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_rix_2dfree_35dde96e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14989, 
                       ADR( lib_2dgsl_or_2dalloc_686ad713_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_or_2dalloc_686ad713, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14991, 
                       ADR( lib_2dgsl_tor_2dfree_d1c0f25_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_tor_2dfree_d1c0f25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14994, 
                       ADR( lib_2dgsl_d_3egsl_21_6c4e8120_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_d_3egsl_21_6c4e8120, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15000, 
                       ADR( lib_2dgsl_d_3egsl_21_378bb610_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_d_3egsl_21_378bb610, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15019, 
                       ADR( lib_2dgsl_d_3escheme_c06d9a80_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_d_3escheme_c06d9a80, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15021, 
                       ADR( lib_2dgsl_d_3escheme_9ba8adb0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_d_3escheme_9ba8adb0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15037, 
                       ADR( lib_2dgsl__2dfprintf_d50a0f12_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dfprintf_d50a0f12, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15039, 
                       ADR( lib_2dgsl__2dfprintf_4d82cb47_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dfprintf_4d82cb47, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15041, 
                       ADR( toollib_2dgsl_stdin_v ), 
                       POINTER_TSCP( stdin ) );
        INITIALIZEVAR( t15042, 
                       ADR( toollib_2dgsl_stdout_v ), 
                       POINTER_TSCP( stdout ) );
        INITIALIZEVAR( t15043, 
                       ADR( toollib_2dgsl_stderr_v ), 
                       POINTER_TSCP( stderr ) );
        INITIALIZEVAR( t15044, 
                       ADR( lib_2dgsl_trix_2dget_6b05a1e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_trix_2dget_6b05a1e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15046, 
                       ADR( lib_2dgsl_trix_2dset_1d9f51b2_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_trix_2dset_1d9f51b2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15049, 
                       ADR( lib_2dgsl_dtranspose_19a71410_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_dtranspose_19a71410, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15051, 
                       ADR( lib_2dgsl_wap_2drows_d73fc6cf_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_wap_2drows_d73fc6cf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15053, 
                       ADR( lib_2dgsl__2dcolumns_30badcb6_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dcolumns_30badcb6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15055, 
                       ADR( lib_2dgsl_t_2drow_21_331c81b4_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_t_2drow_21_331c81b4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15057, 
                       ADR( lib_2dgsl_t_2dcol_21_7c8e8014_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_t_2dcol_21_7c8e8014, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15059, 
                       ADR( lib_2dgsl_t_2drow_21_3c025737_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_t_2drow_21_3c025737, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15061, 
                       ADR( lib_2dgsl_t_2dcol_21_73905697_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_t_2dcol_21_73905697, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15063, 
                       ADR( lib_2dgsl_dget_2drow_bb8c98f0_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dget_2drow_bb8c98f0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15066, 
                       ADR( lib_2dgsl_dget_2dcol_2c0d985b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dget_2dcol_2c0d985b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15069, 
                       ADR( lib_2dgsl_dset_2drow_4aa08b8d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dset_2drow_4aa08b8d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15072, 
                       ADR( lib_2dgsl_dset_2dcol_dd218b26_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dset_2dcol_dd218b26, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15075, 
                       ADR( lib_2dgsl_dmemcpy_21_d4e6adf1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dmemcpy_21_d4e6adf1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15077, 
                       ADR( lib_2dgsl_dmemcpy_21_8f239ac1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dmemcpy_21_8f239ac1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15079, 
                       ADR( lib_2dgsl_y_2dvector_c2e7a867_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_y_2dvector_c2e7a867, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15082, 
                       ADR( lib_2dgsl_y_2dmatrix_21baa1f3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_y_2dmatrix_21baa1f3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15085, 
                       ADR( lib_2dgsl_r_2dadd_21_a707c198_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_r_2dadd_21_a707c198, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15087, 
                       ADR( lib_2dgsl_r_2dsub_21_91f283e6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_r_2dsub_21_91f283e6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15089, 
                       ADR( lib_2dgsl_r_2dmul_21_48f1973e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_r_2dmul_21_48f1973e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15091, 
                       ADR( lib_2dgsl_r_2ddiv_21_f54a0b8e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_r_2ddiv_21_f54a0b8e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15093, 
                       ADR( lib_2dgsl_2dscale_21_b0b38b74_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2dscale_21_b0b38b74, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15095, 
                       ADR( lib_2dgsl_onstant_21_9a253a9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_onstant_21_9a253a9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15097, 
                       ADR( toollib_2dgsl_gsl_2dv_2b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dv_2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15099, 
                       ADR( toollib_2dgsl_gsl_2dv_2d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dv_2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15101, 
                       ADR( toollib_2dgsl_gsl_2dv_2a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dv_2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15103, 
                       ADR( toollib_2dgsl_gsl_2dv_2f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dv_2f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15105, 
                       ADR( toollib_2dgsl_gsl_2dk_2av_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dk_2av, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15107, 
                       ADR( toollib_2dgsl_gsl_2dk_2bv_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dk_2bv, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15109, 
                       ADR( lib_2dgsl_x_2dadd_21_fde328da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_x_2dadd_21_fde328da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15111, 
                       ADR( lib_2dgsl_x_2dsub_21_cb166aa4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_x_2dsub_21_cb166aa4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15113, 
                       ADR( lib_2dgsl_lements_21_920dbfbd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_lements_21_920dbfbd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15115, 
                       ADR( lib_2dgsl_lements_21_91d3346f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_lements_21_91d3346f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15117, 
                       ADR( lib_2dgsl_2dscale_21_ab2aa6cb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2dscale_21_ab2aa6cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15119, 
                       ADR( lib_2dgsl_onstant_21_ef4dead5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_onstant_21_ef4dead5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15121, 
                       ADR( toollib_2dgsl_gsl_2dm_2b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dm_2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15123, 
                       ADR( toollib_2dgsl_gsl_2dm_2d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dm_2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15125, 
                       ADR( toollib_2dgsl_gsl_2dk_2bm_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dk_2bm, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15127, 
                       ADR( toollib_2dgsl_gsl_2dk_2am_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_2dk_2am, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15129, 
                       ADR( lib_2dgsl_2delements_470ab48f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2delements_470ab48f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15131, 
                       ADR( lib_2dgsl_2delements_33925d00_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2delements_33925d00, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15133, 
                       ADR( lib_2dgsl_x_2dall_21_8274bf4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_x_2dall_21_8274bf4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15136, 
                       ADR( lib_2dgsl__2dzero_21_ed09527a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dzero_21_ed09527a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15139, 
                       ADR( lib_2dgsl_dentity_21_4e87e9c3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_dentity_21_4e87e9c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15142, 
                       ADR( lib_2dgsl__2dnull_3f_5c3f9b27_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dnull_3f_5c3f9b27, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15144, 
                       ADR( lib_2dgsl_ositive_3f_3ad894c9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ositive_3f_3ad894c9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15146, 
                       ADR( lib_2dgsl_egative_3f_f3b3e305_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_egative_3f_f3b3e305, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15148, 
                       ADR( lib_2dgsl_egative_3f_e2e249aa_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_egative_3f_e2e249aa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15150, 
                       ADR( lib_2dgsl__2dnull_3f_c4b75f72_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dnull_3f_c4b75f72, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15152, 
                       ADR( lib_2dgsl_ositive_3f_5d235cf0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ositive_3f_5d235cf0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15154, 
                       ADR( lib_2dgsl_egative_3f_94482b3c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_egative_3f_94482b3c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15156, 
                       ADR( lib_2dgsl_egative_3f_40df0d6_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_egative_3f_40df0d6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15158, 
                       ADR( lib_2dgsl_ddecomp_21_dd582711_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_ddecomp_21_dd582711, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15160, 
                       ADR( toollib_2dgsl_gsl_2dsvd_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dgsl_gsl_2dsvd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15166, 
                       ADR( lib_2dgsl_dworkspace_ba4f9e68_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_dworkspace_ba4f9e68, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15168, 
                       ADR( lib_2dgsl_mmv_2dfree_18b35b7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_mmv_2dfree_18b35b7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15171, 
                       ADR( lib_2dgsl_2dsymmv_21_183ec4e4_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_2dsymmv_21_183ec4e4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15173, 
                       ADR( lib_2dgsl__2dsort_21_73cf9408_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dsort_21_73cf9408, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15175, 
                       ADR( lib_2dgsl_dval_2dasc_7fb3ebfb_v ), 
                       sc_int_tscp( GSL_EIGEN_SORT_VAL_ASC ) );
        INITIALIZEVAR( t15176, 
                       ADR( lib_2dgsl_val_2ddesc_9b1c953c_v ), 
                       sc_int_tscp( GSL_EIGEN_SORT_VAL_DESC ) );
        INITIALIZEVAR( t15177, 
                       ADR( lib_2dgsl_gen_2dsymm_ca653386_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_gen_2dsymm_ca653386, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15183, 
                       ADR( lib_2dgsl_dbernoulli_f32876f4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dbernoulli_f32876f4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15185, 
                       ADR( lib_2dgsl_ulli_2dpdf_49593736_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ulli_2dpdf_49593736, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15187, 
                       ADR( lib_2dgsl_ran_2dbeta_2db84c4d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ran_2dbeta_2db84c4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15189, 
                       ADR( lib_2dgsl_beta_2dpdf_a55a2c32_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_beta_2dpdf_a55a2c32, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15191, 
                       ADR( lib_2dgsl_2dbinomial_1548d18d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dbinomial_1548d18d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15193, 
                       ADR( lib_2dgsl_al_2dknuth_c105291b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_al_2dknuth_c105291b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15195, 
                       ADR( lib_2dgsl_mial_2dtpe_81945d9b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_mial_2dtpe_81945d9b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15197, 
                       ADR( lib_2dgsl_mial_2dpdf_313a73a8_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_mial_2dpdf_313a73a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15199, 
                       ADR( lib_2dgsl_xponential_a2af66f1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_xponential_a2af66f1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15201, 
                       ADR( lib_2dgsl_tial_2dpdf_6484fb02_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_tial_2dpdf_6484fb02, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15203, 
                       ADR( lib_2dgsl_n_2dexppow_14abf27_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_n_2dexppow_14abf27, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15205, 
                       ADR( lib_2dgsl_ppow_2dpdf_1e994b2b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ppow_2dpdf_1e994b2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15207, 
                       ADR( lib_2dgsl_n_2dcauchy_3ba4ff12_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_n_2dcauchy_3ba4ff12, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15209, 
                       ADR( lib_2dgsl_uchy_2dpdf_d81d331_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_uchy_2dpdf_d81d331, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15211, 
                       ADR( lib_2dgsl_an_2dchisq_8c427556_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_an_2dchisq_8c427556, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15213, 
                       ADR( lib_2dgsl_hisq_2dpdf_511bc509_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_hisq_2dpdf_511bc509, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15215, 
                       ADR( lib_2dgsl_ddirichlet_1fdf9f5a_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_ddirichlet_1fdf9f5a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15218, 
                       ADR( lib_2dgsl_hlet_2dpdf_f4c2e5dc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_hlet_2dpdf_f4c2e5dc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15220, 
                       ADR( lib_2dgsl_et_2dlnpdf_8aab47cd_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_et_2dlnpdf_8aab47cd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15222, 
                       ADR( lib_2dgsl_n_2derlang_487da7c3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_n_2derlang_487da7c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15224, 
                       ADR( lib_2dgsl_lang_2dpdf_d16bb8ab_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_lang_2dpdf_d16bb8ab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15226, 
                       ADR( lib_2dgsl_an_2dfdist_7e1eb111_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_an_2dfdist_7e1eb111, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15228, 
                       ADR( lib_2dgsl_dist_2dpdf_6848a662_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dist_2dpdf_6848a662, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15230, 
                       ADR( lib_2dgsl_ran_2dflat_f763e26a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ran_2dflat_f763e26a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15232, 
                       ADR( lib_2dgsl_flat_2dpdf_1afb635_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_flat_2dpdf_1afb635, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15234, 
                       ADR( lib_2dgsl_an_2dgamma_ca351b7b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_an_2dgamma_ca351b7b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15236, 
                       ADR( lib_2dgsl_amma_2dint_547572a7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_amma_2dint_547572a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15238, 
                       ADR( lib_2dgsl_amma_2dpdf_4ed4739a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_amma_2dpdf_4ed4739a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15240, 
                       ADR( lib_2dgsl_gamma_2dmt_322bb2fc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_gamma_2dmt_322bb2fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15242, 
                       ADR( lib_2dgsl_ma_2dknuth_2c750284_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ma_2dknuth_2c750284, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15244, 
                       ADR( lib_2dgsl_2dgaussian_fc8e58d5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2dgaussian_fc8e58d5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15246, 
                       ADR( lib_2dgsl_o_2dmethod_633136b4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_o_2dmethod_633136b4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15248, 
                       ADR( lib_2dgsl_2dziggurat_6910e050_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2dziggurat_6910e050, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15250, 
                       ADR( lib_2dgsl_sian_2dpdf_98047124_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_sian_2dpdf_98047124, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15252, 
                       ADR( lib_2dgsl_dugaussian_ebf12660_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_dugaussian_ebf12660, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15254, 
                       ADR( lib_2dgsl_o_2dmethod_baae7078_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_o_2dmethod_baae7078, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15256, 
                       ADR( lib_2dgsl_sian_2dpdf_bed4a873_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_sian_2dpdf_bed4a873, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15258, 
                       ADR( lib_2dgsl_ian_2dtail_76ae84a0_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ian_2dtail_76ae84a0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15260, 
                       ADR( lib_2dgsl_tail_2dpdf_c37e4e66_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_tail_2dpdf_c37e4e66, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15262, 
                       ADR( lib_2dgsl_ian_2dtail_8387902e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ian_2dtail_8387902e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15264, 
                       ADR( lib_2dgsl_tail_2dpdf_1c915b03_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_tail_2dpdf_1c915b03, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15266, 
                       ADR( lib_2dgsl_2dgaussian_69b08e23_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      lib_2dgsl_2dgaussian_69b08e23, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15269, 
                       ADR( lib_2dgsl_sian_2dpdf_b656f450_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      lib_2dgsl_sian_2dpdf_b656f450, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15271, 
                       ADR( lib_2dgsl_n_2dlandau_90d17cbe_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_n_2dlandau_90d17cbe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15273, 
                       ADR( lib_2dgsl_ndau_2dpdf_1cd52ac9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ndau_2dpdf_1cd52ac9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15275, 
                       ADR( lib_2dgsl_dgeometric_403450fe_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dgeometric_403450fe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15277, 
                       ADR( lib_2dgsl_tric_2dpdf_7b94669a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_tric_2dpdf_7b94669a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15279, 
                       ADR( lib_2dgsl_rgeometric_ae91c051_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_rgeometric_ae91c051, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15281, 
                       ADR( lib_2dgsl_tric_2dpdf_9b11f62c_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_tric_2dpdf_9b11f62c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15283, 
                       ADR( lib_2dgsl__2dgumbel1_19157f72_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dgumbel1_19157f72, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15285, 
                       ADR( lib_2dgsl_bel1_2dpdf_2a94d788_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_bel1_2dpdf_2a94d788, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15287, 
                       ADR( lib_2dgsl__2dgumbel2_801c2ec8_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dgumbel2_801c2ec8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15289, 
                       ADR( lib_2dgsl_bel2_2dpdf_1b7ccd15_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_bel2_2dpdf_1b7ccd15, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15291, 
                       ADR( lib_2dgsl_2dlogistic_3703d5fb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2dlogistic_3703d5fb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15293, 
                       ADR( lib_2dgsl_stic_2dpdf_6e1d7606_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_stic_2dpdf_6e1d7606, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15295, 
                       ADR( lib_2dgsl_dlognormal_c61dda8b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dlognormal_c61dda8b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15297, 
                       ADR( lib_2dgsl_rmal_2dpdf_e3afd55d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_rmal_2dpdf_e3afd55d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15299, 
                       ADR( lib_2dgsl_ogarithmic_79f791ef_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ogarithmic_79f791ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15301, 
                       ADR( lib_2dgsl_hmic_2dpdf_2829e938_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_hmic_2dpdf_2829e938, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15303, 
                       ADR( lib_2dgsl_ultinomial_39a66ff4_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      lib_2dgsl_ultinomial_39a66ff4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15306, 
                       ADR( lib_2dgsl_mial_2dpdf_b517105b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_mial_2dpdf_b517105b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15308, 
                       ADR( lib_2dgsl_al_2dlnpdf_33be0e07_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_al_2dlnpdf_33be0e07, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15310, 
                       ADR( lib_2dgsl_2dbinomial_1365287a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dbinomial_1365287a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15312, 
                       ADR( lib_2dgsl_mial_2dpdf_2a5c6374_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_mial_2dpdf_2a5c6374, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15314, 
                       ADR( lib_2dgsl_n_2dpascal_27928f59_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_n_2dpascal_27928f59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15316, 
                       ADR( lib_2dgsl_scal_2dpdf_51b03438_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_scal_2dpdf_51b03438, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15318, 
                       ADR( lib_2dgsl_n_2dpareto_351f2320_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_n_2dpareto_351f2320, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15320, 
                       ADR( lib_2dgsl_reto_2dpdf_c8db035e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_reto_2dpdf_c8db035e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15322, 
                       ADR( lib_2dgsl__2dpoisson_cc56aa91_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dpoisson_cc56aa91, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15324, 
                       ADR( lib_2dgsl_on_2darray_b172d788_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_on_2darray_b172d788, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15327, 
                       ADR( lib_2dgsl_sson_2dpdf_f9b24e85_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_sson_2dpdf_f9b24e85, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15329, 
                       ADR( lib_2dgsl_2drayleigh_97ecad42_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_2drayleigh_97ecad42, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15331, 
                       ADR( lib_2dgsl_eigh_2dpdf_cd1e93bb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_eigh_2dpdf_cd1e93bb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15333, 
                       ADR( lib_2dgsl_igh_2dtail_164b1097_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_igh_2dtail_164b1097, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15335, 
                       ADR( lib_2dgsl_tail_2dpdf_57f18289_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_tail_2dpdf_57f18289, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15337, 
                       ADR( lib_2dgsl_an_2dtdist_643e75f3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_an_2dtdist_643e75f3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15339, 
                       ADR( lib_2dgsl_dist_2dpdf_9ed2db68_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dist_2dpdf_9ed2db68, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15341, 
                       ADR( lib_2dgsl__2dlaplace_176d6efb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dlaplace_176d6efb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15343, 
                       ADR( lib_2dgsl_lace_2dpdf_eabe89d3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_lace_2dpdf_eabe89d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15345, 
                       ADR( lib_2dgsl_ran_2dlevy_ec3dc1aa_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_ran_2dlevy_ec3dc1aa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15347, 
                       ADR( lib_2dgsl_evy_2dskew_e7097d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_evy_2dskew_e7097d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15349, 
                       ADR( lib_2dgsl__2dweibull_8161c9de_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dweibull_8161c9de, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15351, 
                       ADR( lib_2dgsl_bull_2dpdf_cc90252a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_bull_2dpdf_cc90252a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15353, 
                       ADR( lib_2dgsl_2ddir_2d2d_2e9a86e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2ddir_2d2d_2e9a86e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15356, 
                       ADR( lib_2dgsl_g_2dmethod_36b07b3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_g_2dmethod_36b07b3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15359, 
                       ADR( lib_2dgsl_2ddir_2d3d_1bf2992f_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_2ddir_2d3d_1bf2992f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15362, 
                       ADR( lib_2dgsl_2ddir_2dnd_14e7ba36_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2ddir_2dnd_14e7ba36, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15365, 
                       ADR( lib_2dgsl_ussian_2dp_1ec642e3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ussian_2dp_1ec642e3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15367, 
                       ADR( lib_2dgsl_ussian_2dq_69c17275_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ussian_2dq_69c17275, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15369, 
                       ADR( lib_2dgsl__2dp_2dinv_601e0eba_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_601e0eba, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15371, 
                       ADR( lib_2dgsl__2dq_2dinv_c669050e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_c669050e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15373, 
                       ADR( lib_2dgsl_ussian_2dp_c17755fe_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ussian_2dp_c17755fe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15375, 
                       ADR( lib_2dgsl_ussian_2dq_b6706568_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ussian_2dq_b6706568, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15377, 
                       ADR( lib_2dgsl__2dp_2dinv_2e8d0f9f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_2e8d0f9f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15379, 
                       ADR( lib_2dgsl__2dq_2dinv_88fa042b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_88fa042b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15381, 
                       ADR( lib_2dgsl_dgamma_2dp_b3e18a26_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dgamma_2dp_b3e18a26, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15383, 
                       ADR( lib_2dgsl_dgamma_2dq_c4e6bab0_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dgamma_2dq_c4e6bab0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15385, 
                       ADR( lib_2dgsl__2dp_2dinv_141b7b13_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_141b7b13, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15387, 
                       ADR( lib_2dgsl__2dq_2dinv_b26c70a7_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_b26c70a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15389, 
                       ADR( lib_2dgsl_cauchy_2dp_926cc517_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_cauchy_2dp_926cc517, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15391, 
                       ADR( lib_2dgsl_cauchy_2dq_e56bf581_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_cauchy_2dq_e56bf581, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15393, 
                       ADR( lib_2dgsl__2dp_2dinv_272222b2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_272222b2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15395, 
                       ADR( lib_2dgsl__2dq_2dinv_81552906_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_81552906, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15397, 
                       ADR( lib_2dgsl_aplace_2dp_809c559b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_aplace_2dp_809c559b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15399, 
                       ADR( lib_2dgsl_aplace_2dq_f79b650d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_aplace_2dq_f79b650d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15401, 
                       ADR( lib_2dgsl__2dp_2dinv_692b0b8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_692b0b8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15403, 
                       ADR( lib_2dgsl__2dq_2dinv_a0e5bb0c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_a0e5bb0c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15405, 
                       ADR( lib_2dgsl_yleigh_2dp_df448c2d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_yleigh_2dp_df448c2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15407, 
                       ADR( lib_2dgsl_yleigh_2dq_a843bcbb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_yleigh_2dq_a843bcbb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15409, 
                       ADR( lib_2dgsl__2dp_2dinv_cae4a503_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_cae4a503, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15411, 
                       ADR( lib_2dgsl__2dq_2dinv_6c93aeb7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_6c93aeb7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15413, 
                       ADR( lib_2dgsl_dchisq_2dp_5c31107b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dchisq_2dp_5c31107b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15415, 
                       ADR( lib_2dgsl_dchisq_2dq_2b3620ed_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dchisq_2dq_2b3620ed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15417, 
                       ADR( lib_2dgsl__2dp_2dinv_bb57718f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_bb57718f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15419, 
                       ADR( lib_2dgsl__2dq_2dinv_1d207a3b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_1d207a3b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15421, 
                       ADR( lib_2dgsl_ential_2dp_70c709cf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ential_2dp_70c709cf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15423, 
                       ADR( lib_2dgsl_ential_2dq_7c03959_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_ential_2dq_7c03959, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15425, 
                       ADR( lib_2dgsl__2dp_2dinv_c5a623e0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_c5a623e0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15427, 
                       ADR( lib_2dgsl__2dq_2dinv_63d12854_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_63d12854, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15429, 
                       ADR( lib_2dgsl_exppow_2dp_23f24794_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_exppow_2dp_23f24794, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15431, 
                       ADR( lib_2dgsl_exppow_2dq_54f57702_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_exppow_2dq_54f57702, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15433, 
                       ADR( lib_2dgsl_dtdist_2dp_bdfa5fc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dtdist_2dp_bdfa5fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15435, 
                       ADR( lib_2dgsl_dtdist_2dq_7cd8956a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_dtdist_2dq_7cd8956a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15437, 
                       ADR( lib_2dgsl__2dp_2dinv_3f96dcb5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_3f96dcb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15439, 
                       ADR( lib_2dgsl__2dq_2dinv_99e1d701_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_99e1d701, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15441, 
                       ADR( lib_2dgsl_dfdist_2dp_89e9cf0b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dfdist_2dp_89e9cf0b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15443, 
                       ADR( lib_2dgsl_dfdist_2dq_feeeff9d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_dfdist_2dq_feeeff9d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15445, 
                       ADR( lib_2dgsl__2dp_2dinv_d372f26b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_d372f26b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15447, 
                       ADR( lib_2dgsl__2dq_2dinv_7505f9df_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_7505f9df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15449, 
                       ADR( lib_2dgsl_2dbeta_2dp_7cb665e3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dbeta_2dp_7cb665e3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15451, 
                       ADR( lib_2dgsl_2dbeta_2dq_bb15575_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dbeta_2dq_bb15575, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15453, 
                       ADR( lib_2dgsl__2dp_2dinv_3393427c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_3393427c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15455, 
                       ADR( lib_2dgsl__2dq_2dinv_95e449c8_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_95e449c8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15457, 
                       ADR( lib_2dgsl_2dflat_2dp_967fa510_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dflat_2dp_967fa510, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15459, 
                       ADR( lib_2dgsl_2dflat_2dq_e1789586_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_2dflat_2dq_e1789586, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15461, 
                       ADR( lib_2dgsl__2dp_2dinv_e6b035ea_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_e6b035ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15463, 
                       ADR( lib_2dgsl__2dq_2dinv_40c73e5e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_40c73e5e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15465, 
                       ADR( lib_2dgsl_normal_2dp_1472eefb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_normal_2dp_1472eefb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15467, 
                       ADR( lib_2dgsl_normal_2dq_6375de6d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_normal_2dq_6375de6d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15469, 
                       ADR( lib_2dgsl__2dp_2dinv_a5cba0c0_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_a5cba0c0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15471, 
                       ADR( lib_2dgsl__2dq_2dinv_3bcab74_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_3bcab74, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15473, 
                       ADR( lib_2dgsl_umbel1_2dp_d77bb94_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_umbel1_2dp_d77bb94, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15475, 
                       ADR( lib_2dgsl_umbel1_2dq_7a708b02_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_umbel1_2dq_7a708b02, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15477, 
                       ADR( lib_2dgsl__2dp_2dinv_88b33539_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_88b33539, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15479, 
                       ADR( lib_2dgsl__2dq_2dinv_2ec43e8d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_2ec43e8d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15481, 
                       ADR( lib_2dgsl_umbel2_2dp_4ad7c144_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_umbel2_2dp_4ad7c144, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15483, 
                       ADR( lib_2dgsl_umbel2_2dq_3dd0f1d2_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_umbel2_2dq_3dd0f1d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15485, 
                       ADR( lib_2dgsl__2dp_2dinv_11515338_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_11515338, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15487, 
                       ADR( lib_2dgsl__2dq_2dinv_b726588c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_b726588c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15489, 
                       ADR( lib_2dgsl_eibull_2dp_7e9e380f_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_eibull_2dp_7e9e380f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15491, 
                       ADR( lib_2dgsl_eibull_2dq_9990899_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_eibull_2dq_9990899, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15493, 
                       ADR( lib_2dgsl__2dp_2dinv_f494c140_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_f494c140, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15495, 
                       ADR( lib_2dgsl__2dq_2dinv_52e3caf4_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_52e3caf4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15497, 
                       ADR( lib_2dgsl_pareto_2dp_ac54631d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_pareto_2dp_ac54631d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15499, 
                       ADR( lib_2dgsl_pareto_2dq_db53538b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_pareto_2dq_db53538b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15501, 
                       ADR( lib_2dgsl__2dp_2dinv_62b47336_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_62b47336, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15503, 
                       ADR( lib_2dgsl__2dq_2dinv_c4c37882_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_c4c37882, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15505, 
                       ADR( lib_2dgsl_gistic_2dp_eaecf81e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_gistic_2dp_eaecf81e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15507, 
                       ADR( lib_2dgsl_gistic_2dq_9debc888_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_gistic_2dq_9debc888, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15509, 
                       ADR( lib_2dgsl__2dp_2dinv_ee27809e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dp_2dinv_ee27809e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15511, 
                       ADR( lib_2dgsl__2dq_2dinv_48508b2a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl__2dq_2dinv_48508b2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15513, 
                       ADR( lib_2dgsl_nomial_2dp_655c78a8_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_nomial_2dp_655c78a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15515, 
                       ADR( lib_2dgsl_nomial_2dq_125b483e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_nomial_2dq_125b483e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15517, 
                       ADR( lib_2dgsl_oisson_2dp_6f129804_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_oisson_2dp_6f129804, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15519, 
                       ADR( lib_2dgsl_oisson_2dq_1815a892_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_oisson_2dq_1815a892, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15521, 
                       ADR( lib_2dgsl_metric_2dp_e4ac99fd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_metric_2dp_e4ac99fd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15523, 
                       ADR( lib_2dgsl_metric_2dq_93aba96b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_metric_2dq_93aba96b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15525, 
                       ADR( lib_2dgsl_nomial_2dp_6bd2f3cb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_nomial_2dp_6bd2f3cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15527, 
                       ADR( lib_2dgsl_nomial_2dq_1cd5c35d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_nomial_2dq_1cd5c35d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15529, 
                       ADR( lib_2dgsl_pascal_2dp_1795bf41_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_pascal_2dp_1795bf41, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15531, 
                       ADR( lib_2dgsl_pascal_2dq_60928fd7_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      lib_2dgsl_pascal_2dq_60928fd7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15533, 
                       ADR( lib_2dgsl_metric_2dp_821d4dfb_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_metric_2dp_821d4dfb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15535, 
                       ADR( lib_2dgsl_metric_2dq_f51a7d6d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      lib_2dgsl_metric_2dq_f51a7d6d, 
                                      EMPTYLIST ) );
        X1 = POINTER_TSCP( gsl_rng_borosh13 );
        INITIALIZEVAR( t15537, 
                       ADR( lib_2dgsl_2dborosh13_483e9259_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_coveyou );
        INITIALIZEVAR( t15538, 
                       ADR( lib_2dgsl__2dcoveyou_8389c91c_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_cmrg );
        INITIALIZEVAR( t15539, 
                       ADR( lib_2dgsl_rng_2dcmrg_e4d8acd9_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_fishman18 );
        INITIALIZEVAR( t15540, 
                       ADR( lib_2dgsl_dfishman18_ed0261bd_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_fishman20 );
        INITIALIZEVAR( t15541, 
                       ADR( lib_2dgsl_dfishman20_c8f4ba4c_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_fishman2x );
        INITIALIZEVAR( t15542, 
                       ADR( lib_2dgsl_dfishman2x_b0f373ee_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_gfsr4 );
        INITIALIZEVAR( t15543, 
                       ADR( lib_2dgsl_ng_2dgfsr4_caa9eb8b_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_knuthran );
        INITIALIZEVAR( t15544, 
                       ADR( lib_2dgsl_2dknuthran_c2fb92c8_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_knuthran2 );
        INITIALIZEVAR( t15545, 
                       ADR( lib_2dgsl_dknuthran2_5daae090_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_knuthran2002 );
        INITIALIZEVAR( t15546, 
                       ADR( lib_2dgsl_uthran2002_a6948354_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_lecuyer21 );
        INITIALIZEVAR( t15547, 
                       ADR( lib_2dgsl_dlecuyer21_aada6481_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_minstd );
        INITIALIZEVAR( t15548, 
                       ADR( lib_2dgsl_g_2dminstd_407c48c5_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_mrg );
        INITIALIZEVAR( t15549, 
                       ADR( toollib_2dgsl_gsl_3arng_2dmrg_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_mt19937 );
        INITIALIZEVAR( t15550, 
                       ADR( lib_2dgsl__2dmt19937_2fe9cb7e_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_mt19937_1999 );
        INITIALIZEVAR( t15551, 
                       ADR( lib_2dgsl_937_2d1999_d8dcf5db_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_mt19937_1998 );
        INITIALIZEVAR( t15552, 
                       ADR( lib_2dgsl_937_2d1998_afdbc54d_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_r250 );
        INITIALIZEVAR( t15553, 
                       ADR( lib_2dgsl_rng_2dr250_21aae83b_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ran0 );
        INITIALIZEVAR( t15554, 
                       ADR( lib_2dgsl_rng_2dran0_161ffc4d_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ran1 );
        INITIALIZEVAR( t15555, 
                       ADR( lib_2dgsl_rng_2dran1_6118ccdb_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ran2 );
        INITIALIZEVAR( t15556, 
                       ADR( lib_2dgsl_rng_2dran2_f8119d61_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ran3 );
        INITIALIZEVAR( t15557, 
                       ADR( lib_2dgsl_rng_2dran3_8f16adf7_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_rand );
        INITIALIZEVAR( t15558, 
                       ADR( lib_2dgsl_rng_2drand_7a1969a0_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_rand48 );
        INITIALIZEVAR( t15559, 
                       ADR( lib_2dgsl_g_2drand48_9415465_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random128_bsd );
        INITIALIZEVAR( t15560, 
                       ADR( lib_2dgsl_m128_2dbsd_f484cbb0_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random128_glibc2 );
        INITIALIZEVAR( t15561, 
                       ADR( lib_2dgsl_8_2dglibc2_8ac688cf_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random128_libc5 );
        INITIALIZEVAR( t15562, 
                       ADR( lib_2dgsl_28_2dlibc5_7409c86b_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random256_bsd );
        INITIALIZEVAR( t15563, 
                       ADR( lib_2dgsl_m256_2dbsd_97f38531_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random256_glibc2 );
        INITIALIZEVAR( t15564, 
                       ADR( lib_2dgsl_6_2dglibc2_caaa7f0f_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random256_libc5 );
        INITIALIZEVAR( t15565, 
                       ADR( lib_2dgsl_56_2dlibc5_c7f56e81_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random32_bsd );
        INITIALIZEVAR( t15566, 
                       ADR( lib_2dgsl_om32_2dbsd_5ce9e00a_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random32_glibc2 );
        INITIALIZEVAR( t15567, 
                       ADR( lib_2dgsl_2_2dglibc2_77c132d_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random32_libc5 );
        INITIALIZEVAR( t15568, 
                       ADR( lib_2dgsl_32_2dlibc5_c69fdf74_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random64_bsd );
        INITIALIZEVAR( t15569, 
                       ADR( lib_2dgsl_om64_2dbsd_77d9db54_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random64_glibc2 );
        INITIALIZEVAR( t15570, 
                       ADR( lib_2dgsl_4_2dglibc2_7b35cf28_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random64_libc5 );
        INITIALIZEVAR( t15571, 
                       ADR( lib_2dgsl_64_2dlibc5_53ac6dba_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random8_bsd );
        INITIALIZEVAR( t15572, 
                       ADR( lib_2dgsl_dom8_2dbsd_b7a47f46_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random8_glibc2 );
        INITIALIZEVAR( t15573, 
                       ADR( lib_2dgsl_8_2dglibc2_8048cc9a_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random8_libc5 );
        INITIALIZEVAR( t15574, 
                       ADR( lib_2dgsl_m8_2dlibc5_fae3bae5_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random_bsd );
        INITIALIZEVAR( t15575, 
                       ADR( lib_2dgsl_ndom_2dbsd_57917b1f_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random_glibc2 );
        INITIALIZEVAR( t15576, 
                       ADR( lib_2dgsl_m_2dglibc2_d1fad862_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_random_libc5 );
        INITIALIZEVAR( t15577, 
                       ADR( lib_2dgsl_om_2dlibc5_96f778d4_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_randu );
        INITIALIZEVAR( t15578, 
                       ADR( lib_2dgsl_ng_2drandu_f6c33f32_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranf );
        INITIALIZEVAR( t15579, 
                       ADR( lib_2dgsl_rng_2dranf_9417088c_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlux );
        INITIALIZEVAR( t15580, 
                       ADR( lib_2dgsl_g_2dranlux_98ec3a09_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlux389 );
        INITIALIZEVAR( t15581, 
                       ADR( lib_2dgsl_dranlux389_ed732407_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlxd1 );
        INITIALIZEVAR( t15582, 
                       ADR( lib_2dgsl__2dranlxd1_c6359aaa_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlxd2 );
        INITIALIZEVAR( t15583, 
                       ADR( lib_2dgsl__2dranlxd2_5f3ccb10_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlxs0 );
        INITIALIZEVAR( t15584, 
                       ADR( lib_2dgsl__2dranlxs0_b4b12eaa_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlxs1 );
        INITIALIZEVAR( t15585, 
                       ADR( lib_2dgsl__2dranlxs1_c3b61e3c_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranlxs2 );
        INITIALIZEVAR( t15586, 
                       ADR( lib_2dgsl__2dranlxs2_5abf4f86_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_ranmar );
        INITIALIZEVAR( t15587, 
                       ADR( lib_2dgsl_g_2dranmar_57556e75_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_slatec );
        INITIALIZEVAR( t15588, 
                       ADR( lib_2dgsl_g_2dslatec_21d1143e_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_taus );
        INITIALIZEVAR( t15589, 
                       ADR( lib_2dgsl_rng_2dtaus_75977821_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_taus2 );
        INITIALIZEVAR( t15590, 
                       ADR( lib_2dgsl_ng_2dtaus2_84cbd6a6_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_taus113 );
        INITIALIZEVAR( t15591, 
                       ADR( lib_2dgsl__2dtaus113_ec2630b8_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_transputer );
        INITIALIZEVAR( t15592, 
                       ADR( lib_2dgsl_transputer_c1b63220_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_tt800 );
        INITIALIZEVAR( t15593, 
                       ADR( lib_2dgsl_ng_2dtt800_ae141272_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_uni );
        INITIALIZEVAR( t15594, 
                       ADR( toollib_2dgsl_gsl_3arng_2duni_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_uni32 );
        INITIALIZEVAR( t15595, 
                       ADR( lib_2dgsl_ng_2duni32_48dfa51_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_vax );
        INITIALIZEVAR( t15596, 
                       ADR( toollib_2dgsl_gsl_3arng_2dvax_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_waterman14 );
        INITIALIZEVAR( t15597, 
                       ADR( lib_2dgsl_waterman14_551e862f_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        X1 = POINTER_TSCP( gsl_rng_zuf );
        INITIALIZEVAR( t15598, 
                       ADR( toollib_2dgsl_gsl_3arng_2dzuf_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        INITIALIZEVAR( t15599, 
                       ADR( lib_2dgsl_nv_2dsetup_f7fd456a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      lib_2dgsl_nv_2dsetup_f7fd456a, 
                                      EMPTYLIST ) );
        X1 = POINTER_TSCP( gsl_rng_default );
        INITIALIZEVAR( t15601, 
                       ADR( lib_2dgsl__2ddefault_5d074e10_v ), 
                       lib_2dgsl_rng_2dtype_701c639( X1 ) );
        INITIALIZEVAR( t15602, 
                       ADR( lib_2dgsl_ult_2dseed_4c952ed2_v ), 
                       S2CINT_TSCP( gsl_rng_default_seed ) );
        INITIALIZEVAR( t15603, 
                       ADR( lib_2dgsl_ng_2dalloc_374db249_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ng_2dalloc_374db249, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15605, 
                       ADR( lib_2dgsl_g_2dmemcpy_8c750087_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_g_2dmemcpy_8c750087, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15607, 
                       ADR( lib_2dgsl_ng_2dclone_bfb3cb04_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_ng_2dclone_bfb3cb04, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15609, 
                       ADR( lib_2dgsl_rng_2dfree_2ff15d1c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_rng_2dfree_2ff15d1c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15612, 
                       ADR( toollib_2dgsl_gsl_3arng_2dset_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dgsl_gsl_3arng_2dset, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15615, 
                       ADR( toollib_2dgsl_gsl_3arng_2dmax_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dgsl_gsl_3arng_2dmax, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15617, 
                       ADR( toollib_2dgsl_gsl_3arng_2dmin_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dgsl_gsl_3arng_2dmin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15619, 
                       ADR( lib_2dgsl_rng_2dname_3cfce2d2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_rng_2dname_3cfce2d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15621, 
                       ADR( toollib_2dgsl_gsl_3arng_2dget_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dgsl_gsl_3arng_2dget, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15623, 
                       ADR( lib_2dgsl__2duniform_48753778_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl__2duniform_48753778, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15625, 
                       ADR( lib_2dgsl_form_2dpos_3bfd69c2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      lib_2dgsl_form_2dpos_3bfd69c2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15627, 
                       ADR( lib_2dgsl_form_2dint_af7555df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      lib_2dgsl_form_2dint_af7555df, 
                                      EMPTYLIST ) );
        return;
}
