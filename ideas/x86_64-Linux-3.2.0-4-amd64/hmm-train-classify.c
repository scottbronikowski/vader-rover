
/* SCHEME->C */

#include <objects.h>

void hmm_2dtrain_2dclassify__init();
DEFCSTRING( t13999, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c13848 );
DEFSTATICTSCP( c13847 );
DEFCSTRING( t14000, "BEST-STATES: movie has zero length" );
DEFSTATICTSCP( c13671 );
DEFCSTRING( t14001, "~s" );
DEFSTATICTSCP( c13635 );
DEFCSTRING( t14002, "~s -~s-> " );
DEFSTATICTSCP( c13598 );
DEFCSTRING( t14003, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c13597 );
DEFSTATICTSCP( c13596 );
DEFCSTRING( t14004, "~%" );
DEFSTATICTSCP( c13585 );
DEFSTATICTSCP( c13307 );
DEFCSTRING( t14005, "Unrecognized feature type" );
DEFSTATICTSCP( c13306 );
DEFSTATICTSCP( c13030 );
DEFSTATICTSCP( c13026 );
DEFSTATICTSCP( c13022 );
DEFSTATICTSCP( c12968 );
DEFSTATICTSCP( c12903 );
DEFSTATICTSCP( c12896 );
DEFSTATICTSCP( c12883 );
DEFSTATICTSCP( c12870 );
DEFSTATICTSCP( c12857 );
DEFSTATICTSCP( c12844 );
DEFSTATICTSCP( c12831 );
DEFSTATICTSCP( c12790 );
DEFSTATICTSCP( c12783 );
DEFSTATICTSCP( c12770 );
DEFSTATICTSCP( c12757 );
DEFSTATICTSCP( c12744 );
DEFSTATICTSCP( c12731 );
DEFSTATICTSCP( c12718 );
DEFSTATICTSCP( c12705 );
DEFSTATICTSCP( c12692 );
DEFSTATICTSCP( c12685 );
DEFSTATICTSCP( c12662 );
DEFSTATICTSCP( c12561 );
DEFSTATICTSCP( c12544 );
DEFCSTRING( t14006, "SET-STATE-SEQUENCE-DELTAS! error" );
DEFSTATICTSCP( c12510 );
DEFCSTRING( t14007, "STATE-SEQUENCE-DELTAS error" );
DEFSTATICTSCP( c12496 );
DEFCSTRING( t14008, "LOCAL-SET-STATE-SEQUENCE-DELTAS! error" );
DEFSTATICTSCP( c12493 );
DEFCSTRING( t14009, "SET-STATE-SEQUENCE-STATES! error" );
DEFSTATICTSCP( c12478 );
DEFCSTRING( t14010, "STATE-SEQUENCE-STATES error" );
DEFSTATICTSCP( c12464 );
DEFCSTRING( t14011, "LOCAL-SET-STATE-SEQUENCE-STATES! error" );
DEFSTATICTSCP( c12461 );
DEFSTATICTSCP( c12397 );
DEFCSTRING( t14012, "SET-MATCH-PERMUTATION! error" );
DEFSTATICTSCP( c12369 );
DEFCSTRING( t14013, "MATCH-PERMUTATION error" );
DEFSTATICTSCP( c12354 );
DEFCSTRING( t14014, "LOCAL-SET-MATCH-PERMUTATION! error" );
DEFSTATICTSCP( c12350 );
DEFCSTRING( t14015, "SET-MATCH-LOG-LIKELIHOOD! error" );
DEFSTATICTSCP( c12334 );
DEFCSTRING( t14016, "MATCH-LOG-LIKELIHOOD error" );
DEFSTATICTSCP( c12319 );
DEFCSTRING( t14017, "LOCAL-SET-MATCH-LOG-LIKELIHOOD! error" );
DEFSTATICTSCP( c12315 );
DEFCSTRING( t14018, "SET-MATCH-PSI! error" );
DEFSTATICTSCP( c12299 );
DEFCSTRING( t14019, "MATCH-PSI error" );
DEFSTATICTSCP( c12284 );
DEFCSTRING( t14020, "LOCAL-SET-MATCH-PSI! error" );
DEFSTATICTSCP( c12280 );
DEFSTATICTSCP( c12270 );
DEFSTATICTSCP( c12260 );
DEFSTATICTSCP( c12197 );
DEFCSTRING( t14021, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12195 );
DEFCSTRING( t14022, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12191 );
DEFCSTRING( t14023, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12188 );
DEFSTATICTSCP( c12187 );
DEFSTATICTSCP( c12167 );

static void  init_constants()
{
        c13848 = CSTRING_TSCP( t13999 );
        CONSTANTEXP( ADR( c13848 ) );
        c13847 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c13847 ) );
        c13671 = CSTRING_TSCP( t14000 );
        CONSTANTEXP( ADR( c13671 ) );
        c13635 = CSTRING_TSCP( t14001 );
        CONSTANTEXP( ADR( c13635 ) );
        c13598 = CSTRING_TSCP( t14002 );
        CONSTANTEXP( ADR( c13598 ) );
        c13597 = CSTRING_TSCP( t14003 );
        CONSTANTEXP( ADR( c13597 ) );
        c13596 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c13596 ) );
        c13585 = CSTRING_TSCP( t14004 );
        CONSTANTEXP( ADR( c13585 ) );
        c13307 = DOUBLE_TSCP( 100. );
        CONSTANTEXP( ADR( c13307 ) );
        c13306 = CSTRING_TSCP( t14005 );
        CONSTANTEXP( ADR( c13306 ) );
        c13030 = STRINGTOSYMBOL( CSTRING_TSCP( "DISCRETE" ) );
        CONSTANTEXP( ADR( c13030 ) );
        c13026 = STRINGTOSYMBOL( CSTRING_TSCP( "RADIAL" ) );
        CONSTANTEXP( ADR( c13026 ) );
        c13022 = STRINGTOSYMBOL( CSTRING_TSCP( "CONTINUOUS" ) );
        CONSTANTEXP( ADR( c13022 ) );
        c12968 = DOUBLE_TSCP( 0. );
        CONSTANTEXP( ADR( c12968 ) );
        c12903 = DOUBLE_TSCP( 0.0045813 );
        CONSTANTEXP( ADR( c12903 ) );
        c12896 = DOUBLE_TSCP( 0.0360768 );
        CONSTANTEXP( ADR( c12896 ) );
        c12883 = DOUBLE_TSCP( 0.2659732 );
        CONSTANTEXP( ADR( c12883 ) );
        c12870 = DOUBLE_TSCP( 1.2067492 );
        CONSTANTEXP( ADR( c12870 ) );
        c12857 = DOUBLE_TSCP( 3.0899424 );
        CONSTANTEXP( ADR( c12857 ) );
        c12844 = DOUBLE_TSCP( 3.5156229 );
        CONSTANTEXP( ADR( c12844 ) );
        c12831 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c12831 ) );
        c12790 = DOUBLE_TSCP( 0.00392377 );
        CONSTANTEXP( ADR( c12790 ) );
        c12783 = DOUBLE_TSCP( -0.01647633 );
        CONSTANTEXP( ADR( c12783 ) );
        c12770 = DOUBLE_TSCP( 0.02635537 );
        CONSTANTEXP( ADR( c12770 ) );
        c12757 = DOUBLE_TSCP( -0.02057706 );
        CONSTANTEXP( ADR( c12757 ) );
        c12744 = DOUBLE_TSCP( 0.00916281 );
        CONSTANTEXP( ADR( c12744 ) );
        c12731 = DOUBLE_TSCP( -0.00157565 );
        CONSTANTEXP( ADR( c12731 ) );
        c12718 = DOUBLE_TSCP( 0.00225319 );
        CONSTANTEXP( ADR( c12718 ) );
        c12705 = DOUBLE_TSCP( 0.01328592 );
        CONSTANTEXP( ADR( c12705 ) );
        c12692 = DOUBLE_TSCP( 0.39894228 );
        CONSTANTEXP( ADR( c12692 ) );
        c12685 = DOUBLE_TSCP( 0.5 );
        CONSTANTEXP( ADR( c12685 ) );
        c12662 = DOUBLE_TSCP( 3.75 );
        CONSTANTEXP( ADR( c12662 ) );
        c12561 = DOUBLE_TSCP( -0.5 );
        CONSTANTEXP( ADR( c12561 ) );
        c12544 = DOUBLE_TSCP( 9.999999999999999e-12 );
        CONSTANTEXP( ADR( c12544 ) );
        c12510 = CSTRING_TSCP( t14006 );
        CONSTANTEXP( ADR( c12510 ) );
        c12496 = CSTRING_TSCP( t14007 );
        CONSTANTEXP( ADR( c12496 ) );
        c12493 = CSTRING_TSCP( t14008 );
        CONSTANTEXP( ADR( c12493 ) );
        c12478 = CSTRING_TSCP( t14009 );
        CONSTANTEXP( ADR( c12478 ) );
        c12464 = CSTRING_TSCP( t14010 );
        CONSTANTEXP( ADR( c12464 ) );
        c12461 = CSTRING_TSCP( t14011 );
        CONSTANTEXP( ADR( c12461 ) );
        c12397 = STRINGTOSYMBOL( CSTRING_TSCP( "STATE-SEQUENCE" ) );
        CONSTANTEXP( ADR( c12397 ) );
        c12369 = CSTRING_TSCP( t14012 );
        CONSTANTEXP( ADR( c12369 ) );
        c12354 = CSTRING_TSCP( t14013 );
        CONSTANTEXP( ADR( c12354 ) );
        c12350 = CSTRING_TSCP( t14014 );
        CONSTANTEXP( ADR( c12350 ) );
        c12334 = CSTRING_TSCP( t14015 );
        CONSTANTEXP( ADR( c12334 ) );
        c12319 = CSTRING_TSCP( t14016 );
        CONSTANTEXP( ADR( c12319 ) );
        c12315 = CSTRING_TSCP( t14017 );
        CONSTANTEXP( ADR( c12315 ) );
        c12299 = CSTRING_TSCP( t14018 );
        CONSTANTEXP( ADR( c12299 ) );
        c12284 = CSTRING_TSCP( t14019 );
        CONSTANTEXP( ADR( c12284 ) );
        c12280 = CSTRING_TSCP( t14020 );
        CONSTANTEXP( ADR( c12280 ) );
        c12270 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12270 ) );
        c12260 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12260 ) );
        c12197 = STRINGTOSYMBOL( CSTRING_TSCP( "MATCH" ) );
        CONSTANTEXP( ADR( c12197 ) );
        c12195 = CSTRING_TSCP( t14021 );
        CONSTANTEXP( ADR( c12195 ) );
        c12191 = CSTRING_TSCP( t14022 );
        CONSTANTEXP( ADR( c12191 ) );
        c12188 = CSTRING_TSCP( t14023 );
        CONSTANTEXP( ADR( c12188 ) );
        c12187 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c12187 ) );
        c12167 = DOUBLE_TSCP( 2. );
        CONSTANTEXP( ADR( c12167 ) );
}

DEFTSCP( dclassify_fy_2d1_2d0_50de118a_v );
DEFCSTRING( t14024, "gensym-hmm_2dtrain_2dclassify-1-0" );

TSCP  dclassify_fy_2d1_2d0_50de118a(  )
{
        PUSHSTACKTRACE( t14024 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_hmm_2dtrain_2dclassify_2_0(){ return 1;gensym_hmm_2dtrain_2dclassify_2_0( );
}

DEFTSCP( dclassify_fy_2d3_2d0_2a1e42ea_v );
DEFCSTRING( t14026, "gensym-hmm_2dtrain_2dclassify-3-0" );

TSCP  dclassify_fy_2d3_2d0_2a1e42ea(  )
{
        PUSHSTACKTRACE( t14026 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_hmm_2dtrain_2dclassify_4_0(){ return 1;gensym_hmm_2dtrain_2dclassify_4_0( );
}

DEFTSCP( dclassify_fy_2d5_2d0_a55eb74a_v );
DEFCSTRING( t14028, "gensym-hmm_2dtrain_2dclassify-5-0" );

TSCP  dclassify_fy_2d5_2d0_a55eb74a(  )
{
        PUSHSTACKTRACE( t14028 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_hmm_2dtrain_2dclassify_6_0(){ return 1;gensym_hmm_2dtrain_2dclassify_6_0( );
}

DEFTSCP( dclassify_fy_2d7_2d0_df9ee42a_v );
DEFCSTRING( t14030, "gensym-hmm_2dtrain_2dclassify-7-0" );

TSCP  dclassify_fy_2d7_2d0_df9ee42a(  )
{
        PUSHSTACKTRACE( t14030 );
        POPSTACKTRACE( 0 );}
  #include<idealib-c.h>
int gensym_hmm_2dtrain_2dclassify_8_0(){ return 1;gensym_hmm_2dtrain_2dclassify_8_0( );
}

DEFTSCP( dclassify_fy_2d9_2d0_60ae5a4b_v );
DEFCSTRING( t14032, "gensym-hmm_2dtrain_2dclassify-9-0" );

TSCP  dclassify_fy_2d9_2d0_60ae5a4b(  )
{
        PUSHSTACKTRACE( t14032 );
        POPSTACKTRACE( 0 );}
  #include<hmm.h>
int gensym_hmm_2dtrain_2dclassify_10_0(){ return 1;gensym_hmm_2dtrain_2dclassify_10_0( );
}

DEFTSCP( dclassify_ctor_2dref_ef0af1ef_v );
DEFCSTRING( t14034, "C-INT-VECTOR-REF" );

TSCP  dclassify_ctor_2dref_ef0af1ef( g12151, g12152 )
        TSCP  g12151, g12152;
{
        PUSHSTACKTRACE( t14034 );
        POPSTACKTRACE( sc_int_tscp( c_int_vector_ref( TSCP_POINTER( g12151 ), 
                                                      TSCP_S2CUINT( g12152 ) ) ) );
}

DEFTSCP( dclassify_dvector_21_cfc9aeef_v );
DEFCSTRING( t14036, "FREE-C-VECTOR!" );

TSCP  dclassify_dvector_21_cfc9aeef( g12157 )
        TSCP  g12157;
{
        PUSHSTACKTRACE( t14036 );
        free_c_vector( TSCP_POINTER( g12157 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( dclassify_2dtwo_2dpi_e692e766_v );
DEFCSTRING( t14039, "SQRT-TWO-PI" );
EXTERNTSCPP( scrt2_sqrt, XAL1( TSCP ) );
EXTERNTSCP( scrt2_sqrt_v );
EXTERNTSCP( qobischeme_pi_v );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
DEFTSCP( dclassify_2dtwo_2dpi_7364711a_v );
DEFCSTRING( t14043, "LOG-TWO-PI" );
EXTERNTSCPP( scrt2_log, XAL1( TSCP ) );
EXTERNTSCP( scrt2_log_v );
DEFTSCP( dclassify_ke_2dmatch_ee7036bf_v );
DEFCSTRING( t14047, "MAKE-MATCH" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  dclassify_ke_2dmatch_ee7036bf( p12176, l12177, p12178 )
        TSCP  p12176, l12177, p12178;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14047 );
        X1 = sc_make_2dvector( _TSCP( 16 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14051;
        scdebug_error( c12187, 
                       c12188, CONS( X1, EMPTYLIST ) );
L14051:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14053;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14053:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14055;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14055:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12197 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14058;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14058:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14060;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14060:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), p12176 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14063;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14063:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14065;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14065:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), l12177 );
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L14068;
        scdebug_error( c12187, 
                       c12191, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14068:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14070;
        scdebug_error( c12187, 
                       c12195, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14070:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 12 ) ), p12178 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( dclassify_match_3f_6a0807a1_v );
DEFCSTRING( t14072, "MATCH?" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  dclassify_match_3f_6a0807a1( o12237 )
        TSCP  o12237;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14072 );
        if  ( NOT( AND( EQ( TSCPTAG( o12237 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12237 ), 
                            VECTORTAG ) ) ) )  goto L14074;
        X2 = C_FIXED( VECTOR_LENGTH( o12237 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 16 ) ) ), 
                      3 ) )  goto L14078;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 16 ) ) ) );
        goto L14079;
L14078:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 16 ) );
L14079:
        if  ( FALSE( X1 ) )  goto L14081;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14084;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14084:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12237 ) ) ) )  goto L14086;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14086:
        X2 = VECTOR_ELEMENT( o12237, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12197 ) ) ) );
L14081:
        POPSTACKTRACE( X1 );
L14074:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( dclassify_h_2dpsi_21_33bf92f9_v );
DEFCSTRING( t14088, "LOCAL-SET-MATCH-PSI!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  dclassify_h_2dpsi_21_33bf92f9( t12278, o12279 )
        TSCP  t12278, o12279;
{
        PUSHSTACKTRACE( t14088 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12278 ) ) )  goto L14090;
        qobischeme_panic( c12280, EMPTYLIST );
L14090:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12278, 
                                                      _TSCP( 4 ), 
                                                      o12279 ) );
}

DEFTSCP( dclassify_atch_2dpsi_6ac4536a_v );
DEFCSTRING( t14092, "MATCH-PSI" );

TSCP  dclassify_atch_2dpsi_6ac4536a( t12283 )
        TSCP  t12283;
{
        PUSHSTACKTRACE( t14092 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12283 ) ) )  goto L14094;
        qobischeme_panic( c12284, EMPTYLIST );
L14094:
        if  ( AND( EQ( TSCPTAG( t12283 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12283 ), VECTORTAG ) )
            )  goto L14097;
        scdebug_error( c12270, 
                       c12188, CONS( t12283, EMPTYLIST ) );
L14097:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14099;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14099:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12283 ) ) ) )  goto L14101;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14101:
        POPSTACKTRACE( VECTOR_ELEMENT( t12283, _TSCP( 4 ) ) );
}

DEFTSCP( dclassify_h_2dpsi_21_294cb98_v );
DEFCSTRING( t14103, "SET-MATCH-PSI!" );

TSCP  dclassify_h_2dpsi_21_294cb98( t12297, o12298 )
        TSCP  t12297, o12298;
{
        PUSHSTACKTRACE( t14103 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12297 ) ) )  goto L14105;
        qobischeme_panic( c12299, EMPTYLIST );
L14105:
        if  ( AND( EQ( TSCPTAG( t12297 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12297 ), VECTORTAG ) )
            )  goto L14108;
        scdebug_error( c12187, 
                       c12188, CONS( t12297, EMPTYLIST ) );
L14108:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14110;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14110:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12297 ) ) ) )  goto L14112;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14112:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12297, _TSCP( 4 ) ), 
                               o12298 ) );
}

DEFTSCP( dclassify_elihood_21_54ec8fc8_v );
DEFCSTRING( t14114, "LOCAL-SET-MATCH-LOG-LIKELIHOOD!" );

TSCP  dclassify_elihood_21_54ec8fc8( t12313, o12314 )
        TSCP  t12313, o12314;
{
        PUSHSTACKTRACE( t14114 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12313 ) ) )  goto L14116;
        qobischeme_panic( c12315, EMPTYLIST );
L14116:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12313, 
                                                      _TSCP( 8 ), 
                                                      o12314 ) );
}

DEFTSCP( dclassify_likelihood_84b389bc_v );
DEFCSTRING( t14118, "MATCH-LOG-LIKELIHOOD" );

TSCP  dclassify_likelihood_84b389bc( t12318 )
        TSCP  t12318;
{
        PUSHSTACKTRACE( t14118 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12318 ) ) )  goto L14120;
        qobischeme_panic( c12319, EMPTYLIST );
L14120:
        if  ( AND( EQ( TSCPTAG( t12318 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12318 ), VECTORTAG ) )
            )  goto L14123;
        scdebug_error( c12270, 
                       c12188, CONS( t12318, EMPTYLIST ) );
L14123:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14125;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14125:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12318 ) ) ) )  goto L14127;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14127:
        POPSTACKTRACE( VECTOR_ELEMENT( t12318, _TSCP( 8 ) ) );
}

DEFTSCP( dclassify_elihood_21_4d70d1b_v );
DEFCSTRING( t14129, "SET-MATCH-LOG-LIKELIHOOD!" );

TSCP  dclassify_elihood_21_4d70d1b( t12332, o12333 )
        TSCP  t12332, o12333;
{
        PUSHSTACKTRACE( t14129 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12332 ) ) )  goto L14131;
        qobischeme_panic( c12334, EMPTYLIST );
L14131:
        if  ( AND( EQ( TSCPTAG( t12332 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12332 ), VECTORTAG ) )
            )  goto L14134;
        scdebug_error( c12187, 
                       c12188, CONS( t12332, EMPTYLIST ) );
L14134:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14136;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14136:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12332 ) ) ) )  goto L14138;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14138:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12332, _TSCP( 8 ) ), 
                               o12333 ) );
}

DEFTSCP( dclassify_utation_21_542bc4de_v );
DEFCSTRING( t14140, "LOCAL-SET-MATCH-PERMUTATION!" );

TSCP  dclassify_utation_21_542bc4de( t12348, o12349 )
        TSCP  t12348, o12349;
{
        PUSHSTACKTRACE( t14140 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12348 ) ) )  goto L14142;
        qobischeme_panic( c12350, EMPTYLIST );
L14142:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12348, 
                                                      _TSCP( 12 ), 
                                                      o12349 ) );
}

DEFTSCP( dclassify_ermutation_24a3f68b_v );
DEFCSTRING( t14144, "MATCH-PERMUTATION" );

TSCP  dclassify_ermutation_24a3f68b( t12353 )
        TSCP  t12353;
{
        PUSHSTACKTRACE( t14144 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12353 ) ) )  goto L14146;
        qobischeme_panic( c12354, EMPTYLIST );
L14146:
        if  ( AND( EQ( TSCPTAG( t12353 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12353 ), VECTORTAG ) )
            )  goto L14149;
        scdebug_error( c12270, 
                       c12188, CONS( t12353, EMPTYLIST ) );
L14149:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L14151;
        scdebug_error( c12270, 
                       c12191, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14151:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12353 ) ) ) )  goto L14153;
        scdebug_error( c12270, 
                       c12195, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14153:
        POPSTACKTRACE( VECTOR_ELEMENT( t12353, _TSCP( 12 ) ) );
}

DEFTSCP( dclassify_utation_21_f0dac5c_v );
DEFCSTRING( t14155, "SET-MATCH-PERMUTATION!" );

TSCP  dclassify_utation_21_f0dac5c( t12367, o12368 )
        TSCP  t12367, o12368;
{
        PUSHSTACKTRACE( t14155 );
        if  ( TRUE( dclassify_match_3f_6a0807a1( t12367 ) ) )  goto L14157;
        qobischeme_panic( c12369, EMPTYLIST );
L14157:
        if  ( AND( EQ( TSCPTAG( t12367 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12367 ), VECTORTAG ) )
            )  goto L14160;
        scdebug_error( c12187, 
                       c12188, CONS( t12367, EMPTYLIST ) );
L14160:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L14162;
        scdebug_error( c12187, 
                       c12191, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14162:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12367 ) ) ) )  goto L14164;
        scdebug_error( c12187, 
                       c12195, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L14164:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12367, _TSCP( 12 ) ), 
                               o12368 ) );
}

DEFTSCP( dclassify_2dsequence_7a86352d_v );
DEFCSTRING( t14166, "MAKE-STATE-SEQUENCE" );

TSCP  dclassify_2dsequence_7a86352d( s12382, d12383 )
        TSCP  s12382, d12383;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14166 );
        X1 = sc_make_2dvector( _TSCP( 12 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14170;
        scdebug_error( c12187, 
                       c12188, CONS( X1, EMPTYLIST ) );
L14170:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14172;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14172:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14174;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14174:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12397 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14177;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14177:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14179;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14179:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), s12382 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14182;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14182:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14184;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14184:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), d12383 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( dclassify_equence_3f_d1e8a45_v );
DEFCSTRING( t14186, "STATE-SEQUENCE?" );

TSCP  dclassify_equence_3f_d1e8a45( o12421 )
        TSCP  o12421;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14186 );
        if  ( NOT( AND( EQ( TSCPTAG( o12421 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12421 ), 
                            VECTORTAG ) ) ) )  goto L14188;
        X2 = C_FIXED( VECTOR_LENGTH( o12421 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L14192;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 12 ) ) ) );
        goto L14193;
L14192:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 12 ) );
L14193:
        if  ( FALSE( X1 ) )  goto L14195;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14198;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14198:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12421 ) ) ) )  goto L14200;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14200:
        X2 = VECTOR_ELEMENT( o12421, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12397 ) ) ) );
L14195:
        POPSTACKTRACE( X1 );
L14188:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( dclassify_dstates_21_cce06245_v );
DEFCSTRING( t14202, "LOCAL-SET-STATE-SEQUENCE-STATES!" );

TSCP  dclassify_dstates_21_cce06245( t12459, o12460 )
        TSCP  t12459, o12460;
{
        PUSHSTACKTRACE( t14202 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12459 ) ) )  goto L14204;
        qobischeme_panic( c12461, EMPTYLIST );
L14204:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12459, 
                                                      _TSCP( 4 ), 
                                                      o12460 ) );
}

DEFTSCP( dclassify_e_2dstates_c7e8474a_v );
DEFCSTRING( t14206, "STATE-SEQUENCE-STATES" );

TSCP  dclassify_e_2dstates_c7e8474a( t12463 )
        TSCP  t12463;
{
        PUSHSTACKTRACE( t14206 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12463 ) ) )  goto L14208;
        qobischeme_panic( c12464, EMPTYLIST );
L14208:
        if  ( AND( EQ( TSCPTAG( t12463 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12463 ), VECTORTAG ) )
            )  goto L14211;
        scdebug_error( c12270, 
                       c12188, CONS( t12463, EMPTYLIST ) );
L14211:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14213;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14213:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12463 ) ) ) )  goto L14215;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14215:
        POPSTACKTRACE( VECTOR_ELEMENT( t12463, _TSCP( 4 ) ) );
}

DEFTSCP( dclassify_dstates_21_d36adaa9_v );
DEFCSTRING( t14217, "SET-STATE-SEQUENCE-STATES!" );

TSCP  dclassify_dstates_21_d36adaa9( t12476, o12477 )
        TSCP  t12476, o12477;
{
        PUSHSTACKTRACE( t14217 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12476 ) ) )  goto L14219;
        qobischeme_panic( c12478, EMPTYLIST );
L14219:
        if  ( AND( EQ( TSCPTAG( t12476 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12476 ), VECTORTAG ) )
            )  goto L14222;
        scdebug_error( c12187, 
                       c12188, CONS( t12476, EMPTYLIST ) );
L14222:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L14224;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14224:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12476 ) ) ) )  goto L14226;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 4 ), EMPTYLIST ) );
L14226:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12476, _TSCP( 4 ) ), 
                               o12477 ) );
}

DEFTSCP( dclassify_ddeltas_21_2007bb48_v );
DEFCSTRING( t14228, "LOCAL-SET-STATE-SEQUENCE-DELTAS!" );

TSCP  dclassify_ddeltas_21_2007bb48( t12491, o12492 )
        TSCP  t12491, o12492;
{
        PUSHSTACKTRACE( t14228 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12491 ) ) )  goto L14230;
        qobischeme_panic( c12493, EMPTYLIST );
L14230:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12491, 
                                                      _TSCP( 8 ), 
                                                      o12492 ) );
}

DEFTSCP( dclassify_e_2ddeltas_12bdd682_v );
DEFCSTRING( t14232, "STATE-SEQUENCE-DELTAS" );

TSCP  dclassify_e_2ddeltas_12bdd682( t12495 )
        TSCP  t12495;
{
        PUSHSTACKTRACE( t14232 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12495 ) ) )  goto L14234;
        qobischeme_panic( c12496, EMPTYLIST );
L14234:
        if  ( AND( EQ( TSCPTAG( t12495 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12495 ), VECTORTAG ) )
            )  goto L14237;
        scdebug_error( c12270, 
                       c12188, CONS( t12495, EMPTYLIST ) );
L14237:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14239;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14239:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12495 ) ) ) )  goto L14241;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14241:
        POPSTACKTRACE( VECTOR_ELEMENT( t12495, _TSCP( 8 ) ) );
}

DEFTSCP( dclassify_ddeltas_21_3f8d03a4_v );
DEFCSTRING( t14243, "SET-STATE-SEQUENCE-DELTAS!" );

TSCP  dclassify_ddeltas_21_3f8d03a4( t12508, o12509 )
        TSCP  t12508, o12509;
{
        PUSHSTACKTRACE( t14243 );
        if  ( TRUE( dclassify_equence_3f_d1e8a45( t12508 ) ) )  goto L14245;
        qobischeme_panic( c12510, EMPTYLIST );
L14245:
        if  ( AND( EQ( TSCPTAG( t12508 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12508 ), VECTORTAG ) )
            )  goto L14248;
        scdebug_error( c12187, 
                       c12188, CONS( t12508, EMPTYLIST ) );
L14248:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L14250;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14250:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12508 ) ) ) )  goto L14252;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 8 ), EMPTYLIST ) );
L14252:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12508, _TSCP( 8 ) ), 
                               o12509 ) );
}

DEFTSCP( dclassify_x_2dset_21_1303a589_v );
DEFCSTRING( t14254, "IVECSTRUCT-X-SET!" );
EXTERNTSCPP( scrt4_c_2dunsigned_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dunsigned_2dset_21_v );

TSCP  dclassify_x_2dset_21_1303a589( o12524, v12525 )
        TSCP  o12524, v12525;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14254 );
        X1 = C_FIXED( offsetof( struct IVecStruct, x ) );
        POPSTACKTRACE( scrt4_c_2dunsigned_2dset_21( o12524, 
                                                    X1, v12525 ) );
}

DEFTSCP( dclassify_struct_2dx_a2e69655_v );
DEFCSTRING( t14256, "IVECSTRUCT-X" );
EXTERNTSCPP( scrt4_c_2dunsigned_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dunsigned_2dref_v );

TSCP  dclassify_struct_2dx_a2e69655( o12528 )
        TSCP  o12528;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14256 );
        X1 = C_FIXED( offsetof( struct IVecStruct, x ) );
        POPSTACKTRACE( scrt4_c_2dunsigned_2dref( o12528, X1 ) );
}

DEFTSCP( dclassify_x_2dupdate_d993bc0d_v );
DEFCSTRING( t14258, "IVECSTRUCT-X-UPDATE" );

TSCP  dclassify_x_2dupdate_d993bc0d( o12531, f12532 )
        TSCP  o12531, f12532;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14258 );
        X3 = dclassify_struct_2dx_a2e69655( o12531 );
        X2 = f12532;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( dclassify_x_2dset_21_1303a589( o12531, X1 ) );
}

DEFTSCP( dclassify_v_2dset_21_dca953a_v );
DEFCSTRING( t14260, "IVECSTRUCT-V-SET!" );
EXTERNTSCPP( scrt4_c_2ds2cuint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ds2cuint_2dset_21_v );

TSCP  dclassify_v_2dset_21_dca953a( o12535, v12536 )
        TSCP  o12535, v12536;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14260 );
        X1 = C_FIXED( offsetof( struct IVecStruct, v ) );
        POPSTACKTRACE( scrt4_c_2ds2cuint_2dset_21( o12535, 
                                                   X1, v12536 ) );
}

DEFTSCP( dclassify_struct_2dv_455ebb52_v );
DEFCSTRING( t14262, "IVECSTRUCT-V" );
EXTERNTSCPP( scrt4_c_2ds2cuint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ds2cuint_2dref_v );

TSCP  dclassify_struct_2dv_455ebb52( o12539 )
        TSCP  o12539;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14262 );
        X1 = C_FIXED( offsetof( struct IVecStruct, v ) );
        POPSTACKTRACE( scrt4_c_2ds2cuint_2dref( o12539, X1 ) );
}

DEFTSCP( dclassify_v_2dupdate_c75a8cbe_v );
DEFCSTRING( t14264, "IVECSTRUCT-V-UPDATE" );

TSCP  dclassify_v_2dupdate_c75a8cbe( o12542, f12543 )
        TSCP  o12542, f12543;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t14264 );
        X3 = dclassify_struct_2dv_455ebb52( o12542 );
        X2 = f12543;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                          PROCEDURE_CLOSURE( X2 ) );
        POPSTACKTRACE( dclassify_v_2dset_21_dca953a( o12542, X1 ) );
}

DEFTSCP( dclassify_2adelta_2a_738f2c68_v );
DEFCSTRING( t14266, "*DELTA*" );
DEFTSCP( dclassify_bose_3f_2a_59464ca5_v );
DEFCSTRING( t14267, "*VERBOSE?*" );
DEFTSCP( dclassify_2dgaussian_68ee7919_v );
DEFCSTRING( t14268, "LOG-UNIVARIATE-GAUSSIAN" );
EXTERNTSCPP( qobischeme_sqr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqr_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
EXTERNTSCPP( scrt2__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2f_2dtwo_v );

TSCP  dclassify_2dgaussian_68ee7919( x12546, m12547, s12548 )
        TSCP  x12546, m12547, s12548;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14268 );
        X3 = dclassify_2dtwo_2dpi_e692e766_v;
        if  ( BITAND( BITOR( _S2CINT( s12548 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L14271;
        X2 = _TSCP( ITIMES( FIXED_C( s12548 ), 
                            _S2CINT( X3 ) ) );
        goto L14272;
L14271:
        X2 = scrt2__2a_2dtwo( s12548, X3 );
L14272:
        X1 = scrt2_log( X2 );
        if  ( BITAND( BITOR( _S2CINT( x12546 ), 
                             _S2CINT( m12547 ) ), 
                      3 ) )  goto L14273;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( x12546 ), 
                                 _S2CINT( m12547 ) ) );
        goto L14274;
L14273:
        X5 = scrt2__2d_2dtwo( x12546, m12547 );
L14274:
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( s12548 ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L14286;
        if  ( EQ( _S2CUINT( s12548 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L14286;
        X7 = _TSCP( REMAINDER( _S2CINT( X5 ), 
                               _S2CINT( s12548 ) ) );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14286;
        X4 = C_FIXED( QUOTIENT( _S2CINT( X5 ), 
                                _S2CINT( s12548 ) ) );
        goto L14287;
L14286:
        X4 = scrt2__2f_2dtwo( X5, s12548 );
L14287:
        X3 = qobischeme_sqr( X4 );
        if  ( BITAND( BITOR( _S2CINT( c12561 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L14289;
        X2 = _TSCP( ITIMES( FIXED_C( c12561 ), 
                            _S2CINT( X3 ) ) );
        goto L14290;
L14289:
        X2 = scrt2__2a_2dtwo( c12561, X3 );
L14290:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L14292;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                           _S2CINT( X1 ) ) ) );
L14292:
        POPSTACKTRACE( scrt2__2d_2dtwo( X2, X1 ) );
}

DEFTSCP( dclassify_an_2fd_2dx_247d8fdb_v );
DEFCSTRING( t14294, "LOG-D-UNIVARIATE-GAUSSIAN/D-X" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  dclassify_an_2fd_2dx_247d8fdb( x12595, m12596, s12597 )
        TSCP  x12595, m12596, s12597;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14294 );
        X1 = dclassify_2dgaussian_68ee7919( x12595, m12596, s12597 );
        if  ( BITAND( BITOR( _S2CINT( s12597 ), 
                             _S2CINT( s12597 ) ), 
                      3 ) )  goto L14296;
        X5 = _TSCP( ITIMES( FIXED_C( s12597 ), 
                            _S2CINT( s12597 ) ) );
        goto L14297;
L14296:
        X5 = scrt2__2a_2dtwo( s12597, s12597 );
L14297:
        if  ( BITAND( BITOR( _S2CINT( s12597 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14299;
        X4 = _TSCP( ITIMES( FIXED_C( s12597 ), 
                            _S2CINT( X5 ) ) );
        goto L14300;
L14299:
        X4 = scrt2__2a_2dtwo( s12597, X5 );
L14300:
        if  ( BITAND( BITOR( _S2CINT( m12596 ), 
                             _S2CINT( x12595 ) ), 
                      3 ) )  goto L14301;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( m12596 ), 
                                 _S2CINT( x12595 ) ) );
        goto L14302;
L14301:
        X5 = scrt2__2d_2dtwo( m12596, x12595 );
L14302:
        X6 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X5 ), 
                                          _S2CINT( X4 ) ), 
                                   3 ) ) );
        if  ( FALSE( X6 ) )  goto L14314;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14314;
        X7 = _TSCP( REMAINDER( _S2CINT( X5 ), 
                               _S2CINT( X4 ) ) );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14314;
        X3 = C_FIXED( QUOTIENT( _S2CINT( X5 ), 
                                _S2CINT( X4 ) ) );
        goto L14315;
L14314:
        X3 = scrt2__2f_2dtwo( X5, X4 );
L14315:
        X2 = scrt2_log( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L14317;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( X2 ), 
                                     _S2CINT( X1 ) ) ) );
L14317:
        POPSTACKTRACE( scrt2__2b_2dtwo( X2, X1 ) );
}

DEFTSCP( dclassify_lbessi0_953b4f9e_v );
DEFCSTRING( t14319, "LBESSI0" );
EXTERNTSCPP( scrt2_abs, XAL1( TSCP ) );
EXTERNTSCP( scrt2_abs_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  dclassify_lbessi0_953b4f9e( x12643 )
        TSCP  x12643;
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

        PUSHSTACKTRACE( t14319 );
        if  ( NEQ( TSCPTAG( x12643 ), FIXNUMTAG ) )  goto L14321;
        if  ( LT( _S2CINT( x12643 ), 0 ) )  goto L14326;
        X1 = x12643;
        goto L14322;
L14326:
        X1 = _TSCP( INEGATE( _S2CINT( x12643 ) ) );
        goto L14322;
L14321:
        X1 = scrt2_abs( x12643 );
L14322:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( c12662 ) ), 
                      3 ) )  goto L14330;
        if  ( LT( _S2CINT( X1 ), _S2CINT( c12662 ) ) )  goto L14334;
        goto L14335;
L14330:
        if  ( FALSE( scrt2__3c_2dtwo( X1, c12662 ) ) )  goto L14335;
L14334:
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( x12643 ), 
                                          _S2CINT( c12662 ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L14348;
        if  ( EQ( _S2CUINT( c12662 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L14348;
        X4 = _TSCP( REMAINDER( _S2CINT( x12643 ), 
                               _S2CINT( c12662 ) ) );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14348;
        X2 = C_FIXED( QUOTIENT( _S2CINT( x12643 ), 
                                _S2CINT( c12662 ) ) );
        goto L14349;
L14348:
        X2 = scrt2__2f_2dtwo( x12643, c12662 );
L14349:
        X1 = qobischeme_sqr( X2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( c12903 ) ), 
                      3 ) )  goto L14351;
        X13 = _TSCP( ITIMES( FIXED_C( X1 ), 
                             _S2CINT( c12903 ) ) );
        goto L14352;
L14351:
        X13 = scrt2__2a_2dtwo( X1, c12903 );
L14352:
        if  ( BITAND( BITOR( _S2CINT( c12896 ), 
                             _S2CINT( X13 ) ), 
                      3 ) )  goto L14354;
        X12 = _TSCP( IPLUS( _S2CINT( c12896 ), 
                            _S2CINT( X13 ) ) );
        goto L14355;
L14354:
        X12 = scrt2__2b_2dtwo( c12896, X13 );
L14355:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X12 ) ), 
                      3 ) )  goto L14357;
        X11 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X12 ) ) );
        goto L14358;
L14357:
        X11 = scrt2__2a_2dtwo( X1, X12 );
L14358:
        if  ( BITAND( BITOR( _S2CINT( c12883 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L14360;
        X10 = _TSCP( IPLUS( _S2CINT( c12883 ), 
                            _S2CINT( X11 ) ) );
        goto L14361;
L14360:
        X10 = scrt2__2b_2dtwo( c12883, X11 );
L14361:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X10 ) ), 
                      3 ) )  goto L14363;
        X9 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X10 ) ) );
        goto L14364;
L14363:
        X9 = scrt2__2a_2dtwo( X1, X10 );
L14364:
        if  ( BITAND( BITOR( _S2CINT( c12870 ), 
                             _S2CINT( X9 ) ), 
                      3 ) )  goto L14366;
        X8 = _TSCP( IPLUS( _S2CINT( c12870 ), 
                           _S2CINT( X9 ) ) );
        goto L14367;
L14366:
        X8 = scrt2__2b_2dtwo( c12870, X9 );
L14367:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L14369;
        X7 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X8 ) ) );
        goto L14370;
L14369:
        X7 = scrt2__2a_2dtwo( X1, X8 );
L14370:
        if  ( BITAND( BITOR( _S2CINT( c12857 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L14372;
        X6 = _TSCP( IPLUS( _S2CINT( c12857 ), 
                           _S2CINT( X7 ) ) );
        goto L14373;
L14372:
        X6 = scrt2__2b_2dtwo( c12857, X7 );
L14373:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L14375;
        X5 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X6 ) ) );
        goto L14376;
L14375:
        X5 = scrt2__2a_2dtwo( X1, X6 );
L14376:
        if  ( BITAND( BITOR( _S2CINT( c12844 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14378;
        X4 = _TSCP( IPLUS( _S2CINT( c12844 ), 
                           _S2CINT( X5 ) ) );
        goto L14379;
L14378:
        X4 = scrt2__2b_2dtwo( c12844, X5 );
L14379:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L14381;
        X3 = _TSCP( ITIMES( FIXED_C( X1 ), _S2CINT( X4 ) ) );
        goto L14382;
L14381:
        X3 = scrt2__2a_2dtwo( X1, X4 );
L14382:
        if  ( BITAND( BITOR( _S2CINT( c12831 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L14384;
        X2 = _TSCP( IPLUS( _S2CINT( c12831 ), 
                           _S2CINT( X3 ) ) );
        goto L14385;
L14384:
        X2 = scrt2__2b_2dtwo( c12831, X3 );
L14385:
        POPSTACKTRACE( scrt2_log( X2 ) );
L14335:
        if  ( NEQ( TSCPTAG( x12643 ), FIXNUMTAG ) )  goto L14386;
        if  ( LT( _S2CINT( x12643 ), 0 ) )  goto L14391;
        X1 = x12643;
        goto L14387;
L14391:
        X1 = _TSCP( INEGATE( _S2CINT( x12643 ) ) );
        goto L14387;
L14386:
        X1 = scrt2_abs( x12643 );
L14387:
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( c12662 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L14404;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14404;
        X4 = _TSCP( REMAINDER( _S2CINT( c12662 ), 
                               _S2CINT( X1 ) ) );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14404;
        X2 = C_FIXED( QUOTIENT( _S2CINT( c12662 ), 
                                _S2CINT( X1 ) ) );
        goto L14405;
L14404:
        X2 = scrt2__2f_2dtwo( c12662, X1 );
L14405:
        X5 = scrt2_log( X1 );
        if  ( BITAND( BITOR( _S2CINT( c12685 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14408;
        X4 = _TSCP( ITIMES( FIXED_C( c12685 ), 
                            _S2CINT( X5 ) ) );
        goto L14409;
L14408:
        X4 = scrt2__2a_2dtwo( c12685, X5 );
L14409:
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L14411;
        X3 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( X4 ) ) );
        goto L14412;
L14411:
        X3 = scrt2__2d_2dtwo( X1, X4 );
L14412:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( c12790 ) ), 
                      3 ) )  goto L14413;
        X20 = _TSCP( ITIMES( FIXED_C( X2 ), 
                             _S2CINT( c12790 ) ) );
        goto L14414;
L14413:
        X20 = scrt2__2a_2dtwo( X2, c12790 );
L14414:
        if  ( BITAND( BITOR( _S2CINT( c12783 ), 
                             _S2CINT( X20 ) ), 
                      3 ) )  goto L14416;
        X19 = _TSCP( IPLUS( _S2CINT( c12783 ), 
                            _S2CINT( X20 ) ) );
        goto L14417;
L14416:
        X19 = scrt2__2b_2dtwo( c12783, X20 );
L14417:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X19 ) ), 
                      3 ) )  goto L14419;
        X18 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X19 ) ) );
        goto L14420;
L14419:
        X18 = scrt2__2a_2dtwo( X2, X19 );
L14420:
        if  ( BITAND( BITOR( _S2CINT( c12770 ), 
                             _S2CINT( X18 ) ), 
                      3 ) )  goto L14422;
        X17 = _TSCP( IPLUS( _S2CINT( c12770 ), 
                            _S2CINT( X18 ) ) );
        goto L14423;
L14422:
        X17 = scrt2__2b_2dtwo( c12770, X18 );
L14423:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X17 ) ), 
                      3 ) )  goto L14425;
        X16 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X17 ) ) );
        goto L14426;
L14425:
        X16 = scrt2__2a_2dtwo( X2, X17 );
L14426:
        if  ( BITAND( BITOR( _S2CINT( c12757 ), 
                             _S2CINT( X16 ) ), 
                      3 ) )  goto L14428;
        X15 = _TSCP( IPLUS( _S2CINT( c12757 ), 
                            _S2CINT( X16 ) ) );
        goto L14429;
L14428:
        X15 = scrt2__2b_2dtwo( c12757, X16 );
L14429:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X15 ) ), 
                      3 ) )  goto L14431;
        X14 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X15 ) ) );
        goto L14432;
L14431:
        X14 = scrt2__2a_2dtwo( X2, X15 );
L14432:
        if  ( BITAND( BITOR( _S2CINT( c12744 ), 
                             _S2CINT( X14 ) ), 
                      3 ) )  goto L14434;
        X13 = _TSCP( IPLUS( _S2CINT( c12744 ), 
                            _S2CINT( X14 ) ) );
        goto L14435;
L14434:
        X13 = scrt2__2b_2dtwo( c12744, X14 );
L14435:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X13 ) ), 
                      3 ) )  goto L14437;
        X12 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X13 ) ) );
        goto L14438;
L14437:
        X12 = scrt2__2a_2dtwo( X2, X13 );
L14438:
        if  ( BITAND( BITOR( _S2CINT( c12731 ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L14440;
        X11 = _TSCP( IPLUS( _S2CINT( c12731 ), 
                            _S2CINT( X12 ) ) );
        goto L14441;
L14440:
        X11 = scrt2__2b_2dtwo( c12731, X12 );
L14441:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X11 ) ), 
                      3 ) )  goto L14443;
        X10 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X11 ) ) );
        goto L14444;
L14443:
        X10 = scrt2__2a_2dtwo( X2, X11 );
L14444:
        if  ( BITAND( BITOR( _S2CINT( c12718 ), 
                             _S2CINT( X10 ) ), 
                      3 ) )  goto L14446;
        X9 = _TSCP( IPLUS( _S2CINT( c12718 ), 
                           _S2CINT( X10 ) ) );
        goto L14447;
L14446:
        X9 = scrt2__2b_2dtwo( c12718, X10 );
L14447:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L14449;
        X8 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X9 ) ) );
        goto L14450;
L14449:
        X8 = scrt2__2a_2dtwo( X2, X9 );
L14450:
        if  ( BITAND( BITOR( _S2CINT( c12705 ), 
                             _S2CINT( X8 ) ), 
                      3 ) )  goto L14452;
        X7 = _TSCP( IPLUS( _S2CINT( c12705 ), 
                           _S2CINT( X8 ) ) );
        goto L14453;
L14452:
        X7 = scrt2__2b_2dtwo( c12705, X8 );
L14453:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L14455;
        X6 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X7 ) ) );
        goto L14456;
L14455:
        X6 = scrt2__2a_2dtwo( X2, X7 );
L14456:
        if  ( BITAND( BITOR( _S2CINT( c12692 ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L14458;
        X5 = _TSCP( IPLUS( _S2CINT( c12692 ), 
                           _S2CINT( X6 ) ) );
        goto L14459;
L14458:
        X5 = scrt2__2b_2dtwo( c12692, X6 );
L14459:
        X4 = scrt2_log( X5 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L14461;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( X3 ), 
                                     _S2CINT( X4 ) ) ) );
L14461:
        POPSTACKTRACE( scrt2__2b_2dtwo( X3, X4 ) );
}

DEFTSCP( dclassify_on_2dmises_9659de3_v );
DEFCSTRING( t14463, "LOG-VON-MISES" );
EXTERNTSCPP( scrt2_cos, XAL1( TSCP ) );
EXTERNTSCP( scrt2_cos_v );

TSCP  dclassify_on_2dmises_9659de3( x12925, m12926, k12927 )
        TSCP  x12925, m12926, k12927;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14463 );
        X1 = dclassify_lbessi0_953b4f9e( k12927 );
        X3 = dclassify_2dtwo_2dpi_7364711a_v;
        if  ( BITAND( BITOR( _S2CINT( x12925 ), 
                             _S2CINT( m12926 ) ), 
                      3 ) )  goto L14465;
        X6 = _TSCP( IDIFFERENCE( _S2CINT( x12925 ), 
                                 _S2CINT( m12926 ) ) );
        goto L14466;
L14465:
        X6 = scrt2__2d_2dtwo( x12925, m12926 );
L14466:
        X5 = scrt2_cos( X6 );
        if  ( BITAND( BITOR( _S2CINT( k12927 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14468;
        X4 = _TSCP( ITIMES( FIXED_C( k12927 ), 
                            _S2CINT( X5 ) ) );
        goto L14469;
L14468:
        X4 = scrt2__2a_2dtwo( k12927, X5 );
L14469:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L14471;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( X4 ), 
                                 _S2CINT( X3 ) ) );
        goto L14472;
L14471:
        X2 = scrt2__2d_2dtwo( X4, X3 );
L14472:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L14474;
        POPSTACKTRACE( _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                           _S2CINT( X1 ) ) ) );
L14474:
        POPSTACKTRACE( scrt2__2d_2dtwo( X2, X1 ) );
}

DEFTSCP( dclassify_es_2fd_2dx_f595e618_v );
DEFCSTRING( t14476, "LOG-D-VON-MISES/D-X" );
EXTERNTSCPP( scrt2_sin, XAL1( TSCP ) );
EXTERNTSCP( scrt2_sin_v );

TSCP  dclassify_es_2fd_2dx_f595e618( x12953, m12954, k12955 )
        TSCP  x12953, m12954, k12955;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14476 );
        X1 = dclassify_on_2dmises_9659de3( x12953, m12954, k12955 );
        if  ( BITAND( BITOR( _S2CINT( x12953 ), 
                             _S2CINT( m12954 ) ), 
                      3 ) )  goto L14478;
        X6 = _TSCP( IDIFFERENCE( _S2CINT( x12953 ), 
                                 _S2CINT( m12954 ) ) );
        goto L14479;
L14478:
        X6 = scrt2__2d_2dtwo( x12953, m12954 );
L14479:
        X5 = scrt2_sin( X6 );
        if  ( BITAND( BITOR( _S2CINT( k12955 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14481;
        X4 = _TSCP( ITIMES( FIXED_C( k12955 ), 
                            _S2CINT( X5 ) ) );
        goto L14482;
L14481:
        X4 = scrt2__2a_2dtwo( k12955, X5 );
L14482:
        if  ( NEQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L14484;
        X3 = _TSCP( INEGATE( _S2CINT( X4 ) ) );
        goto L14485;
L14484:
        X3 = scrt2__2d_2dtwo( c12968, X4 );
L14485:
        X2 = scrt2_log( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L14487;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( X2 ), 
                                     _S2CINT( X1 ) ) ) );
L14487:
        POPSTACKTRACE( scrt2__2b_2dtwo( X2, X1 ) );
}

DEFTSCP( dclassify_e_2dmatrix_8d4db969_v );
DEFCSTRING( t14489, "LOG-LIKELIHOOD-OF-FEATURE-MATRIX" );
EXTERNTSCPP( hmm_2dwbm_psi_2db, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_psi_2db_v );
EXTERNTSCPP( qobischeme_matrix_2drows, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2drows_v );
EXTERNTSCPP( qobischeme_matrix_2dcolumns, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dcolumns_v );
EXTERNTSCPP( qobischeme_make_2dmatrix, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_make_2dmatrix_v );
EXTERNTSCPP( qobischeme_map_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dvector_v );

TSCP  hmm_2dtrain_2dclassify_l13152( r13153, c14498 )
        TSCP  r13153, c14498;
{
        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13152 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        POPSTACKTRACE( qobischeme_map_2dvector( scrt2_log_v, 
                                                r13153, EMPTYLIST ) );
}

EXTERNTSCPP( hmm_2dwbm_psi_2da, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_psi_2da_v );
EXTERNTSCPP( hmm_2dwbm_psi_2dparameters, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_psi_2dparameters_v );
EXTERNTSCPP( qobischeme_for_2deach_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_for_2deach_2dn_v );
EXTERNTSCPP( qobischeme_matrix_2dset_21, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dset_21_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( qobischeme_log_2dsum, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_log_2dsum_v );
EXTERNTSCPP( qobischeme_matrix_2dref, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dref_v );

TSCP  hmm_2dtrain_2dclassify_l13080( v13081, c14534 )
        TSCP  v13081, c14534;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13080 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        X1 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c14534, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14534, 1 );
        X3 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c14534, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14534, 3 );
        X8 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14537;
        X7 = _TSCP( IDIFFERENCE( _S2CINT( X8 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L14538;
L14537:
        X7 = scrt2__2d_2dtwo( X8, _TSCP( 4 ) );
L14538:
        X6 = qobischeme_matrix_2dref( DISPLAY( 4 ), 
                                      v13081, X7 );
        X7 = qobischeme_matrix_2dref( DISPLAY( 5 ), 
                                      v13081, DISPLAY( 10 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L14540;
        X5 = _TSCP( IPLUS( _S2CINT( X7 ), _S2CINT( X6 ) ) );
        goto L14541;
L14540:
        X5 = scrt2__2b_2dtwo( X7, X6 );
L14541:
        DISPLAY( 10 ) = X1;
        DISPLAY( 5 ) = X2;
        DISPLAY( 8 ) = X3;
        DISPLAY( 4 ) = X4;
        POPSTACKTRACE( X5 );
}

EXTERNTSCPP( qobischeme_sum, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sum_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );
EXTERNTSCPP( qobischeme_second, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_second_v );
EXTERNTSCPP( qobischeme_third, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_third_v );
EXTERNTSCPP( scrt1_list_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dref_v );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );

TSCP  hmm_2dtrain_2dclassify_l13013( i13014, c14549 )
        TSCP  i13014, c14549;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13013 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        X1 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c14549, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c14549, 1 );
        X5 = DISPLAY( 11 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L14552;
        scdebug_error( c12270, 
                       c12188, CONS( X5, EMPTYLIST ) );
L14552:
        if  ( EQ( TSCPTAG( i13014 ), FIXNUMTAG ) )  goto L14554;
        scdebug_error( c12270, 
                       c12191, CONS( i13014, EMPTYLIST ) );
L14554:
        if  ( LT( _S2CUINT( FIXED_C( i13014 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L14556;
        scdebug_error( c12270, 
                       c12195, CONS( i13014, EMPTYLIST ) );
L14556:
        X4 = VECTOR_ELEMENT( X5, i13014 );
        X5 = qobischeme_first( X4 );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c13022 ) ) )  goto L14560;
        X7 = DISPLAY( 9 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L14563;
        scdebug_error( c12270, 
                       c12188, CONS( X7, EMPTYLIST ) );
L14563:
        if  ( LT( _S2CUINT( FIXED_C( i13014 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L14565;
        scdebug_error( c12270, 
                       c12195, CONS( i13014, EMPTYLIST ) );
L14565:
        X6 = VECTOR_ELEMENT( X7, i13014 );
        X7 = qobischeme_second( X4 );
        X8 = qobischeme_third( X4 );
        X3 = dclassify_2dgaussian_68ee7919( X6, X7, X8 );
        goto L14575;
L14560:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c13026 ) ) )  goto L14567;
        X7 = DISPLAY( 9 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L14570;
        scdebug_error( c12270, 
                       c12188, CONS( X7, EMPTYLIST ) );
L14570:
        if  ( LT( _S2CUINT( FIXED_C( i13014 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L14572;
        scdebug_error( c12270, 
                       c12195, CONS( i13014, EMPTYLIST ) );
L14572:
        X6 = VECTOR_ELEMENT( X7, i13014 );
        X7 = qobischeme_second( X4 );
        X8 = qobischeme_third( X4 );
        X3 = dclassify_on_2dmises_9659de3( X6, X7, X8 );
        goto L14575;
L14567:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( c13030 ) ) )  goto L14574;
        X7 = qobischeme_rest( X4 );
        X10 = DISPLAY( 9 );
        if  ( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X10 ), VECTORTAG ) )
            )  goto L14577;
        scdebug_error( c12270, 
                       c12188, CONS( X10, EMPTYLIST ) );
L14577:
        if  ( LT( _S2CUINT( FIXED_C( i13014 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X10 ) ) ) )  goto L14579;
        scdebug_error( c12270, 
                       c12195, CONS( i13014, EMPTYLIST ) );
L14579:
        X9 = VECTOR_ELEMENT( X10, i13014 );
        X8 = scrt2_round( X9 );
        X6 = scrt1_list_2dref( X7, X8 );
        X3 = scrt2_log( X6 );
        goto L14575;
L14574:
        X3 = qobischeme_fuck_2dup(  );
L14575:
        DISPLAY( 11 ) = X1;
        DISPLAY( 9 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  hmm_2dtrain_2dclassify_l13003( u13004, c14513 )
        TSCP  u13004, c14513;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13003 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c14513, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14513, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c14513, 2 );
        X4 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c14513, 3 );
        X5 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14513, 4 );
        X6 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14513, 5 );
        X7 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c14513, 6 );
        X8 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14513, 7 );
        DISPLAY( 10 ) = u13004;
        X10 = DISPLAY( 10 );
        X11 = DISPLAY( 7 );
        if  ( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X11 ), VECTORTAG ) )
            )  goto L14516;
        scdebug_error( c12270, 
                       c12188, CONS( X11, EMPTYLIST ) );
L14516:
        if  ( EQ( TSCPTAG( X10 ), FIXNUMTAG ) )  goto L14518;
        scdebug_error( c12270, 
                       c12191, CONS( X10, EMPTYLIST ) );
L14518:
        if  ( LT( _S2CUINT( FIXED_C( X10 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X11 ) ) ) )  goto L14520;
        scdebug_error( c12270, 
                       c12195, CONS( X10, EMPTYLIST ) );
L14520:
        DISPLAY( 11 ) = VECTOR_ELEMENT( X11, X10 );
        X12 = DISPLAY( 8 );
        if  ( NEQ( TSCPTAG( X12 ), FIXNUMTAG ) )  goto L14525;
        if  ( EQ( _S2CUINT( X12 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14529;
        goto L14530;
L14525:
        if  ( TRUE( scrt2_zero_3f( X12 ) ) )  goto L14529;
L14530:
        X13 = MAKEPROCEDURE( 1, 
                             0, 
                             hmm_2dtrain_2dclassify_l13080, 
                             MAKECLOSURE( EMPTYLIST, 
                                          4, 
                                          DISPLAY( 10 ), 
                                          DISPLAY( 5 ), 
                                          DISPLAY( 8 ), 
                                          DISPLAY( 4 ) ) );
        X11 = qobischeme_log_2dsum( X13, DISPLAY( 1 ) );
        goto L14533;
L14529:
        X14 = DISPLAY( 10 );
        X15 = DISPLAY( 6 );
        if  ( AND( EQ( TSCPTAG( X15 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X15 ), VECTORTAG ) )
            )  goto L14543;
        scdebug_error( c12270, 
                       c12188, CONS( X15, EMPTYLIST ) );
L14543:
        if  ( EQ( TSCPTAG( X14 ), FIXNUMTAG ) )  goto L14545;
        scdebug_error( c12270, 
                       c12191, CONS( X14, EMPTYLIST ) );
L14545:
        if  ( LT( _S2CUINT( FIXED_C( X14 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X15 ) ) ) )  goto L14547;
        scdebug_error( c12270, 
                       c12195, CONS( X14, EMPTYLIST ) );
L14547:
        X13 = VECTOR_ELEMENT( X15, X14 );
        X11 = scrt2_log( X13 );
L14533:
        X13 = MAKEPROCEDURE( 1, 
                             0, 
                             hmm_2dtrain_2dclassify_l13013, 
                             MAKECLOSURE( EMPTYLIST, 
                                          2, 
                                          DISPLAY( 11 ), 
                                          DISPLAY( 9 ) ) );
        X12 = qobischeme_sum( X13, DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X12 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L14582;
        X10 = _TSCP( IPLUS( _S2CINT( X12 ), _S2CINT( X11 ) ) );
        goto L14583;
L14582:
        X10 = scrt2__2b_2dtwo( X12, X11 );
L14583:
        X9 = qobischeme_matrix_2dset_21( DISPLAY( 4 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 8 ), X10 );
        DISPLAY( 7 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 9 ) = X3;
        DISPLAY( 6 ) = X4;
        DISPLAY( 1 ) = X5;
        DISPLAY( 5 ) = X6;
        DISPLAY( 8 ) = X7;
        DISPLAY( 4 ) = X8;
        SDVAL = X9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
}

TSCP  hmm_2dtrain_2dclassify_l12999( t13000, c14503 )
        TSCP  t13000, c14503;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l12999 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14503, 0 );
        X2 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c14503, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14503, 2 );
        X4 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c14503, 3 );
        X5 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14503, 4 );
        X6 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14503, 5 );
        X7 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14503, 6 );
        DISPLAY( 8 ) = t13000;
        X9 = DISPLAY( 8 );
        X10 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X10 ), VECTORTAG ) )
            )  goto L14506;
        scdebug_error( c12270, 
                       c12188, CONS( X10, EMPTYLIST ) );
L14506:
        if  ( EQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L14508;
        scdebug_error( c12270, 
                       c12191, CONS( X9, EMPTYLIST ) );
L14508:
        if  ( LT( _S2CUINT( FIXED_C( X9 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X10 ) ) ) )  goto L14510;
        scdebug_error( c12270, 
                       c12195, CONS( X9, EMPTYLIST ) );
L14510:
        DISPLAY( 9 ) = VECTOR_ELEMENT( X10, X9 );
        X9 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13003, 
                            MAKECLOSURE( EMPTYLIST, 
                                         8, 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 4 ) ) );
        X8 = qobischeme_for_2deach_2dn( X9, DISPLAY( 1 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 7 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 6 ) = X4;
        DISPLAY( 1 ) = X5;
        DISPLAY( 5 ) = X6;
        DISPLAY( 4 ) = X7;
        SDVAL = X8;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        POPSTACKTRACE( SDVAL );
}

TSCP  hmm_2dtrain_2dclassify_l13144( u13145, c14584 )
        TSCP  u13145, c14584;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13144 [inside LOG-LIKELIHOO\
D-OF-FEATURE-MATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14584, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14584, 1 );
        X5 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14587;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L14588;
L14587:
        X4 = scrt2__2d_2dtwo( X5, _TSCP( 4 ) );
L14588:
        X3 = qobischeme_matrix_2dref( DISPLAY( 4 ), 
                                      u13145, X4 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 4 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  dclassify_e_2dmatrix_8d4db969( p12983, f12984 )
        TSCP  p12983, f12984;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14489 );
        DISPLAY( 0 ) = f12984;
        X3 = hmm_2dwbm_psi_2db( p12983 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L14492;
        scdebug_error( c12260, 
                       c12188, CONS( X3, EMPTYLIST ) );
L14492:
        DISPLAY( 1 ) = C_FIXED( VECTOR_LENGTH( X3 ) );
        DISPLAY( 2 ) = qobischeme_matrix_2drows( DISPLAY( 0 ) );
        DISPLAY( 3 ) = qobischeme_matrix_2dcolumns( DISPLAY( 0 ) );
        DISPLAY( 4 ) = qobischeme_make_2dmatrix( DISPLAY( 1 ), 
                                                 DISPLAY( 2 ), 
                                                 EMPTYLIST );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13152, EMPTYLIST );
        X4 = hmm_2dwbm_psi_2da( p12983 );
        DISPLAY( 5 ) = qobischeme_map_2dvector( X3, X4, EMPTYLIST );
        DISPLAY( 6 ) = hmm_2dwbm_psi_2db( p12983 );
        DISPLAY( 7 ) = hmm_2dwbm_psi_2dparameters( p12983 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l12999, 
                            MAKECLOSURE( EMPTYLIST, 
                                         7, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_for_2deach_2dn( X3, DISPLAY( 2 ) );
        X1 = DISPLAY( 3 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13144, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 4 ) ) );
        X2 = qobischeme_log_2dsum( X3, DISPLAY( 1 ) );
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L14600;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14600;
        X4 = _TSCP( REMAINDER( _S2CINT( X2 ), 
                               _S2CINT( X1 ) ) );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14600;
        SDVAL = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                   _S2CINT( X1 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        POPSTACKTRACE( SDVAL );
L14600:
        SDVAL = scrt2__2f_2dtwo( X2, X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( hmm_2dtrain_2dclassify_e_2b_v );
DEFCSTRING( t14601, "E+" );
EXTERNTSCPP( qobischeme_make_2dellipse, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_make_2dellipse_v );
EXTERNTSCPP( qobischeme_ellipse_2dx0, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_ellipse_2dx0_v );
EXTERNTSCPP( qobischeme_ellipse_2dy0, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_ellipse_2dy0_v );
EXTERNTSCPP( qobischeme_ellipse_2dt0, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_ellipse_2dt0_v );
EXTERNTSCPP( qobischeme_ellipse_2da, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_ellipse_2da_v );
EXTERNTSCPP( qobischeme_ellipse_2db, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_ellipse_2db_v );

TSCP  hmm_2dtrain_2dclassify_e_2b( e13159, e13160 )
        TSCP  e13159, e13160;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14601 );
        X2 = qobischeme_ellipse_2dx0( e13160 );
        X3 = qobischeme_ellipse_2dx0( e13159 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L14604;
        X1 = _TSCP( IPLUS( _S2CINT( X3 ), _S2CINT( X2 ) ) );
        goto L14605;
L14604:
        X1 = scrt2__2b_2dtwo( X3, X2 );
L14605:
        X3 = qobischeme_ellipse_2dy0( e13160 );
        X4 = qobischeme_ellipse_2dy0( e13159 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L14607;
        X2 = _TSCP( IPLUS( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L14608;
L14607:
        X2 = scrt2__2b_2dtwo( X4, X3 );
L14608:
        X4 = qobischeme_ellipse_2dt0( e13160 );
        X5 = qobischeme_ellipse_2dt0( e13159 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L14610;
        X3 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X4 ) ) );
        goto L14611;
L14610:
        X3 = scrt2__2b_2dtwo( X5, X4 );
L14611:
        X5 = qobischeme_ellipse_2da( e13160 );
        X6 = qobischeme_ellipse_2da( e13159 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L14613;
        X4 = _TSCP( IPLUS( _S2CINT( X6 ), _S2CINT( X5 ) ) );
        goto L14614;
L14613:
        X4 = scrt2__2b_2dtwo( X6, X5 );
L14614:
        X6 = qobischeme_ellipse_2db( e13160 );
        X7 = qobischeme_ellipse_2db( e13159 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L14616;
        X5 = _TSCP( IPLUS( _S2CINT( X7 ), _S2CINT( X6 ) ) );
        goto L14617;
L14616:
        X5 = scrt2__2b_2dtwo( X7, X6 );
L14617:
        POPSTACKTRACE( qobischeme_make_2dellipse( X1, 
                                                  X2, 
                                                  X3, X4, X5 ) );
}

DEFTSCP( dclassify__2dellipse_e883644_v );
DEFCSTRING( t14618, "SUM-ELLIPSE" );
EXTERNTSCPP( scrt2_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_negative_3f_v );

TSCP  dclassify__2dellipse_e883644( f13192, n13193 )
        TSCP  f13192, n13193;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14618 );
        X1 = qobischeme_make_2dellipse( c12968, 
                                        c12968, 
                                        c12968, c12968, c12968 );
        if  ( BITAND( BITOR( _S2CINT( n13193 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14620;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( n13193 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L14621;
L14620:
        X2 = scrt2__2d_2dtwo( n13193, _TSCP( 4 ) );
L14621:
        X3 = X2;
        X4 = X1;
L14624:
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L14626;
        if  ( GTE( _S2CINT( X3 ), 0 ) )  goto L14630;
        POPSTACKTRACE( X4 );
L14626:
        if  ( FALSE( scrt2_negative_3f( X3 ) ) )  goto L14630;
        POPSTACKTRACE( X4 );
L14630:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14633;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L14634;
L14633:
        X5 = scrt2__2d_2dtwo( X3, _TSCP( 4 ) );
L14634:
        X7 = f13192;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X3, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X4 = hmm_2dtrain_2dclassify_e_2b( X4, X6 );
        X3 = X5;
        GOBACK( L14624 );
}

DEFTSCP( hmm_2dtrain_2dclassify_k_2ae_v );
DEFCSTRING( t14635, "K*E" );

TSCP  hmm_2dtrain_2dclassify_k_2ae( k13221, e13222 )
        TSCP  k13221, e13222;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14635 );
        X2 = qobischeme_ellipse_2dx0( e13222 );
        if  ( BITAND( BITOR( _S2CINT( k13221 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L14638;
        X1 = _TSCP( ITIMES( FIXED_C( k13221 ), 
                            _S2CINT( X2 ) ) );
        goto L14639;
L14638:
        X1 = scrt2__2a_2dtwo( k13221, X2 );
L14639:
        X3 = qobischeme_ellipse_2dy0( e13222 );
        if  ( BITAND( BITOR( _S2CINT( k13221 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L14641;
        X2 = _TSCP( ITIMES( FIXED_C( k13221 ), 
                            _S2CINT( X3 ) ) );
        goto L14642;
L14641:
        X2 = scrt2__2a_2dtwo( k13221, X3 );
L14642:
        X4 = qobischeme_ellipse_2dt0( e13222 );
        if  ( BITAND( BITOR( _S2CINT( k13221 ), 
                             _S2CINT( X4 ) ), 
                      3 ) )  goto L14644;
        X3 = _TSCP( ITIMES( FIXED_C( k13221 ), 
                            _S2CINT( X4 ) ) );
        goto L14645;
L14644:
        X3 = scrt2__2a_2dtwo( k13221, X4 );
L14645:
        X5 = qobischeme_ellipse_2da( e13222 );
        if  ( BITAND( BITOR( _S2CINT( k13221 ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L14647;
        X4 = _TSCP( ITIMES( FIXED_C( k13221 ), 
                            _S2CINT( X5 ) ) );
        goto L14648;
L14647:
        X4 = scrt2__2a_2dtwo( k13221, X5 );
L14648:
        X6 = qobischeme_ellipse_2db( e13222 );
        if  ( BITAND( BITOR( _S2CINT( k13221 ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L14650;
        X5 = _TSCP( ITIMES( FIXED_C( k13221 ), 
                            _S2CINT( X6 ) ) );
        goto L14651;
L14650:
        X5 = scrt2__2a_2dtwo( k13221, X6 );
L14651:
        POPSTACKTRACE( qobischeme_make_2dellipse( X1, 
                                                  X2, 
                                                  X3, X4, X5 ) );
}

DEFTSCP( dclassify_psi_2dii_fa0ba786_v );
DEFCSTRING( t14652, "PSI-II" );

TSCP  dclassify_psi_2dii_fa0ba786( p13254 )
        TSCP  p13254;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14652 );
        X2 = hmm_2dwbm_psi_2dparameters( p13254 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L14655;
        scdebug_error( c12270, 
                       c12188, CONS( X2, EMPTYLIST ) );
L14655:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14657;
        scdebug_error( c12270, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14657:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X2 ) ) ) )  goto L14659;
        scdebug_error( c12270, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14659:
        X1 = VECTOR_ELEMENT( X2, _TSCP( 0 ) );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14662;
        scdebug_error( c12260, 
                       c12188, CONS( X1, EMPTYLIST ) );
L14662:
        POPSTACKTRACE( C_FIXED( VECTOR_LENGTH( X1 ) ) );
}

DEFTSCP( dclassify_psi_2duu_87da694_v );
DEFCSTRING( t14664, "PSI-UU" );

TSCP  dclassify_psi_2duu_87da694( p13270 )
        TSCP  p13270;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14664 );
        X1 = hmm_2dwbm_psi_2db( p13270 );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14667;
        scdebug_error( c12260, 
                       c12188, CONS( X1, EMPTYLIST ) );
L14667:
        POPSTACKTRACE( C_FIXED( VECTOR_LENGTH( X1 ) ) );
}

DEFTSCP( dclassify_2d_3emodel_e835326a_v );
DEFCSTRING( t14669, "PSI->MODEL" );
EXTERNTSCP( hmm_2dwbm_allocate_2dmodel_v );
EXTERNTSCPP( dbindings_c_2dstring_a000da03, XAL1( TSCP ) );
EXTERNTSCP( dbindings_c_2dstring_a000da03_v );
EXTERNTSCPP( hmm_2dwbm_psi_2dname, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_psi_2dname_v );
EXTERNTSCP( hmm_2dwbm__2dname_21_1cfad0f1_v );
EXTERNTSCPP( hmm_2dwbm_f_2dspeech_b703e518, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_f_2dspeech_b703e518_v );
EXTERNTSCP( hmm_2dwbm_l_2dpos_21_c03d4a50_v );
EXTERNTSCPP( hmm_2dwbm_psi_2dn_2droles, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_psi_2dn_2droles_v );
EXTERNTSCP( hmm_2dwbm_2droles_21_4b2bece3_v );
EXTERNTSCP( hmm_2dwbm_tinuous_21_658cfeed_v );
EXTERNTSCP( hmm_2dwbm_dradial_21_ce95ee5e_v );
EXTERNTSCP( hmm_2dwbm_iscrete_21_6a40c8_v );
EXTERNTSCP( hmm_2dwbm_set_2dmodel_2db_21_v );
EXTERNTSCP( hmm_2dwbm_set_2dmodel_2da_21_v );
EXTERNTSCP( hmm_2dwbm_rameter_21_56e16bae_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( obischeme__2dindexed_d1069d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dindexed_d1069d4_v );

TSCP  hmm_2dtrain_2dclassify_l13386( p13387, j13388, c14753 )
        TSCP  p13387, j13388, c14753;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13386 [inside PSI->MODEL]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14753, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14753, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14753, 2 );
        if  ( BITAND( BITOR( _S2CINT( j13388 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14755;
        X6 = _TSCP( IPLUS( _S2CINT( j13388 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L14756;
L14755:
        X6 = scrt2__2b_2dtwo( j13388, _TSCP( 4 ) );
L14756:
        X5 = hmm_2dwbm_rameter_21_56e16bae_v;
        X5 = UNKNOWNCALL( X5, 5 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 0 ), 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ), 
                                          X6, 
                                          p13387, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  dclassify_2d_3emodel_e835326a( p13278 )
        TSCP  p13278;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14669 );
        X2 = dclassify_psi_2dii_fa0ba786( p13278 );
        X3 = dclassify_psi_2duu_87da694( p13278 );
        X1 = hmm_2dwbm_allocate_2dmodel_v;
        X1 = UNKNOWNCALL( X1, 2 );
        DISPLAY( 0 ) = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    X3, 
                                                    PROCEDURE_CLOSURE( X1 ) );
        X3 = hmm_2dwbm_psi_2dname( p13278 );
        X2 = dbindings_c_2dstring_a000da03( X3 );
        X1 = hmm_2dwbm__2dname_21_1cfad0f1_v;
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X2 = hmm_2dwbm_f_2dspeech_b703e518( p13278 );
        X1 = hmm_2dwbm_l_2dpos_21_c03d4a50_v;
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X2 = hmm_2dwbm_psi_2dn_2droles( p13278 );
        X1 = hmm_2dwbm_2droles_21_4b2bece3_v;
        X1 = UNKNOWNCALL( X1, 2 );
        VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = _TSCP( 0 );
L14673:
        X2 = dclassify_psi_2dii_fa0ba786( p13278 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L14676;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X2 ) ) )  goto L14680;
        goto L14683;
L14676:
        if  ( TRUE( scrt2__3d_2dtwo( X1, X2 ) ) )  goto L14683;
L14680:
        X4 = hmm_2dwbm_psi_2dparameters( p13278 );
        X3 = qobischeme_matrix_2dref( X4, _TSCP( 0 ), X1 );
        X2 = qobischeme_first( X3 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13022 ) ) )  goto L14686;
        X3 = hmm_2dwbm_tinuous_21_658cfeed_v;
        X3 = UNKNOWNCALL( X3, 3 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     X1, 
                                     c13307, 
                                     PROCEDURE_CLOSURE( X3 ) );
        goto L14691;
L14686:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13026 ) ) )  goto L14688;
        X3 = hmm_2dwbm_dradial_21_ce95ee5e_v;
        X3 = UNKNOWNCALL( X3, 2 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     X1, PROCEDURE_CLOSURE( X3 ) );
        goto L14691;
L14688:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13030 ) ) )  goto L14690;
        X3 = hmm_2dwbm_iscrete_21_6a40c8_v;
        X3 = UNKNOWNCALL( X3, 2 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     X1, PROCEDURE_CLOSURE( X3 ) );
        goto L14691;
L14690:
        qobischeme_panic( c13306, EMPTYLIST );
L14691:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14692;
        X1 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14673 );
L14692:
        X1 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L14673 );
L14683:
        DISPLAY( 1 ) = _TSCP( 0 );
L14695:
        X1 = dclassify_psi_2duu_87da694( p13278 );
        X2 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L14698;
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) )  goto L14702;
        goto L14705;
L14698:
        if  ( TRUE( scrt2__3d_2dtwo( X2, X1 ) ) )  goto L14705;
L14702:
        X3 = hmm_2dwbm_psi_2db( p13278 );
        X4 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L14708;
        scdebug_error( c12270, 
                       c12188, CONS( X3, EMPTYLIST ) );
L14708:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L14710;
        scdebug_error( c12270, 
                       c12191, CONS( X4, EMPTYLIST ) );
L14710:
        if  ( LT( _S2CUINT( FIXED_C( X4 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L14712;
        scdebug_error( c12270, 
                       c12195, CONS( X4, EMPTYLIST ) );
L14712:
        X2 = VECTOR_ELEMENT( X3, X4 );
        X1 = hmm_2dwbm_set_2dmodel_2db_21_v;
        X1 = UNKNOWNCALL( X1, 3 );
        VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     X2, PROCEDURE_CLOSURE( X1 ) );
        X1 = _TSCP( 0 );
L14715:
        X2 = dclassify_psi_2duu_87da694( p13278 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L14718;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X2 ) ) )  goto L14722;
        goto L14725;
L14718:
        if  ( TRUE( scrt2__3d_2dtwo( X1, X2 ) ) )  goto L14725;
L14722:
        X4 = hmm_2dwbm_psi_2da( p13278 );
        X3 = qobischeme_matrix_2dref( X4, DISPLAY( 1 ), X1 );
        X2 = hmm_2dwbm_set_2dmodel_2da_21_v;
        X2 = UNKNOWNCALL( X2, 4 );
        VIA( PROCEDURE_CODE( X2 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     X1, 
                                     X3, PROCEDURE_CLOSURE( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14727;
        X1 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14715 );
L14727:
        X1 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L14715 );
L14725:
        DISPLAY( 2 ) = _TSCP( 0 );
L14730:
        X1 = DISPLAY( 2 );
        X2 = dclassify_psi_2dii_fa0ba786( p13278 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L14733;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( X2 ) ) )  goto L14737;
        goto L14740;
L14733:
        if  ( TRUE( scrt2__3d_2dtwo( X1, X2 ) ) )  goto L14740;
L14737:
        X2 = hmm_2dwbm_psi_2dparameters( p13278 );
        X1 = qobischeme_matrix_2dref( X2, 
                                      DISPLAY( 1 ), 
                                      DISPLAY( 2 ) );
        X2 = qobischeme_first( X1 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13022 ) ) )  goto L14744;
        X4 = qobischeme_second( X1 );
        X3 = hmm_2dwbm_rameter_21_56e16bae_v;
        X3 = UNKNOWNCALL( X3, 5 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     DISPLAY( 2 ), 
                                     _TSCP( 0 ), 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        X4 = qobischeme_third( X1 );
        X3 = hmm_2dwbm_rameter_21_56e16bae_v;
        X3 = UNKNOWNCALL( X3, 5 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     DISPLAY( 2 ), 
                                     _TSCP( 4 ), 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        goto L14751;
L14744:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13026 ) ) )  goto L14747;
        X4 = qobischeme_second( X1 );
        X3 = hmm_2dwbm_rameter_21_56e16bae_v;
        X3 = UNKNOWNCALL( X3, 5 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     DISPLAY( 2 ), 
                                     _TSCP( 0 ), 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        X4 = qobischeme_third( X1 );
        X3 = hmm_2dwbm_rameter_21_56e16bae_v;
        X3 = UNKNOWNCALL( X3, 5 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     DISPLAY( 2 ), 
                                     _TSCP( 4 ), 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        goto L14751;
L14747:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( c13030 ) ) )  goto L14750;
        X5 = qobischeme_rest( X1 );
        X4 = scrt1_length( X5 );
        X3 = hmm_2dwbm_rameter_21_56e16bae_v;
        X3 = UNKNOWNCALL( X3, 5 );
        VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                     DISPLAY( 1 ), 
                                     DISPLAY( 2 ), 
                                     _TSCP( 0 ), 
                                     X4, PROCEDURE_CLOSURE( X3 ) );
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            hmm_2dtrain_2dclassify_l13386, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = qobischeme_rest( X1 );
        obischeme__2dindexed_d1069d4( X3, X4 );
        goto L14751;
L14750:
        qobischeme_panic( c13306, EMPTYLIST );
L14751:
        X1 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14758;
        DISPLAY( 2 ) = _TSCP( IPLUS( _S2CINT( X1 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14730 );
L14758:
        DISPLAY( 2 ) = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L14730 );
L14740:
        X1 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14761;
        DISPLAY( 1 ) = _TSCP( IPLUS( _S2CINT( X1 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14695 );
L14761:
        DISPLAY( 1 ) = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L14695 );
L14705:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( dclassify_l_2d_3epsi_df2d065c_v );
DEFCSTRING( t14763, "MODEL->PSI" );
EXTERNTSCPP( hmm_2dwbm_make_2dpsi, 
             XAL7( TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( hmm_2dwbm_make_2dpsi_v );
EXTERNTSCPP( dbindings_d_3esymbol_d89bd1b0, XAL1( TSCP ) );
EXTERNTSCP( dbindings_d_3esymbol_d89bd1b0_v );
EXTERNTSCP( hmm_2dwbm_model_2dname_v );
EXTERNTSCP( hmm_2dwbm_model_2dpos_v );
EXTERNTSCP( hmm_2dwbm_model_2dn_2droles_v );
EXTERNTSCP( hmm_2dwbm_model_2duu_v );
EXTERNTSCP( hmm_2dwbm_model_2dii_v );
EXTERNTSCP( hmm_2dwbm_ure_2dtype_9bf469a7_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );
EXTERNTSCP( hmm_2dwbm_model_2dparameter_v );

TSCP  hmm_2dtrain_2dclassify_l13462( j13463, c14803 )
        TSCP  j13463, c14803;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13462 [inside MODEL->PSI]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14803, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14803, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14803, 2 );
        if  ( BITAND( BITOR( _S2CINT( j13463 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14805;
        X6 = _TSCP( IPLUS( _S2CINT( j13463 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L14806;
L14805:
        X6 = scrt2__2b_2dtwo( j13463, _TSCP( 4 ) );
L14806:
        X5 = hmm_2dwbm_model_2dparameter_v;
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 0 ), 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ), 
                                          X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCP( hmm_2dwbm_model_2da_v );
EXTERNTSCP( hmm_2dwbm_model_2db_v );

TSCP  dclassify_l_2d_3epsi_df2d065c( f13411, m13412 )
        TSCP  f13411, m13412;
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

        PUSHSTACKTRACE( t14763 );
        DISPLAY( 0 ) = m13412;
        X3 = hmm_2dwbm_model_2dname_v;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        X1 = dbindings_d_3esymbol_d89bd1b0( X2 );
        X3 = hmm_2dwbm_model_2dpos_v;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X3 ) );
        X4 = hmm_2dwbm_model_2dn_2droles_v;
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X4 ) );
        X7 = hmm_2dwbm_model_2duu_v;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = hmm_2dwbm_model_2dii_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X8 ) );
        X5 = qobischeme_make_2dmatrix( X6, X7, EMPTYLIST );
        DISPLAY( 1 ) = _TSCP( 0 );
L14767:
        X7 = hmm_2dwbm_model_2duu_v;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X7 ) );
        X7 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L14770;
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( X6 ) ) )  goto L14774;
        goto L14777;
L14770:
        if  ( TRUE( scrt2__3d_2dtwo( X7, X6 ) ) )  goto L14777;
L14774:
        DISPLAY( 2 ) = _TSCP( 0 );
L14780:
        X6 = DISPLAY( 2 );
        X8 = hmm_2dwbm_model_2dii_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X8 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L14783;
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( X7 ) ) )  goto L14787;
        goto L14790;
L14783:
        if  ( TRUE( scrt2__3d_2dtwo( X6, X7 ) ) )  goto L14790;
L14787:
        X8 = hmm_2dwbm_ure_2dtype_9bf469a7_v;
        X8 = UNKNOWNCALL( X8, 2 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( DISPLAY( 0 ), 
                                          DISPLAY( 2 ), 
                                          PROCEDURE_CLOSURE( X8 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L14794;
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( _TSCP( 8 ) ) ) )  goto L14798;
        goto L14799;
L14794:
        if  ( FALSE( scrt2__3d_2dtwo( X7, _TSCP( 8 ) ) ) )  goto L14799;
L14798:
        X9 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13462, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X12 = hmm_2dwbm_model_2dparameter_v;
        X12 = UNKNOWNCALL( X12, 4 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            _TSCP( 0 ), 
                                            PROCEDURE_CLOSURE( X12 ) );
        X10 = scrt2_round( X11 );
        X8 = qobischeme_map_2dn( X9, X10 );
        X6 = sc_cons( c13030, X8 );
        goto L14802;
L14799:
        X11 = hmm_2dwbm_ure_2dtype_9bf469a7_v;
        X11 = UNKNOWNCALL( X11, 2 );
        X10 = VIA( PROCEDURE_CODE( X11 ) )( DISPLAY( 0 ), 
                                            DISPLAY( 2 ), 
                                            PROCEDURE_CLOSURE( X11 ) );
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L14808;
        X9 = c13022;
        goto L14811;
L14808:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L14810;
        X9 = c13026;
        goto L14811;
L14810:
        X9 = qobischeme_panic( c13306, EMPTYLIST );
L14811:
        X12 = hmm_2dwbm_model_2dparameter_v;
        X12 = UNKNOWNCALL( X12, 4 );
        X11 = VIA( PROCEDURE_CODE( X12 ) )( DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            _TSCP( 0 ), 
                                            PROCEDURE_CLOSURE( X12 ) );
        X14 = hmm_2dwbm_model_2dparameter_v;
        X14 = UNKNOWNCALL( X14, 4 );
        X13 = VIA( PROCEDURE_CODE( X14 ) )( DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            _TSCP( 4 ), 
                                            PROCEDURE_CLOSURE( X14 ) );
        X12 = sc_cons( X13, EMPTYLIST );
        X10 = sc_cons( X11, X12 );
        X8 = sc_cons( X9, X10 );
        X6 = X8;
L14802:
        qobischeme_matrix_2dset_21( X5, 
                                    DISPLAY( 1 ), 
                                    DISPLAY( 2 ), X6 );
        X6 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14814;
        DISPLAY( 2 ) = _TSCP( IPLUS( _S2CINT( X6 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14780 );
L14814:
        DISPLAY( 2 ) = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
        GOBACK( L14780 );
L14790:
        X6 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14817;
        DISPLAY( 1 ) = _TSCP( IPLUS( _S2CINT( X6 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14767 );
L14817:
        DISPLAY( 1 ) = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
        GOBACK( L14767 );
L14777:
        X4 = X5;
        X8 = hmm_2dwbm_model_2duu_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X8 ) );
        X9 = hmm_2dwbm_model_2duu_v;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        X6 = qobischeme_make_2dmatrix( X7, X8, EMPTYLIST );
        X7 = _TSCP( 0 );
L14821:
        X9 = hmm_2dwbm_model_2duu_v;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L14824;
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( X8 ) ) )  goto L14828;
        goto L14831;
L14824:
        if  ( TRUE( scrt2__3d_2dtwo( X7, X8 ) ) )  goto L14831;
L14828:
        X8 = _TSCP( 0 );
L14834:
        X10 = hmm_2dwbm_model_2duu_v;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( DISPLAY( 0 ), 
                                           PROCEDURE_CLOSURE( X10 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L14837;
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( X9 ) ) )  goto L14841;
        goto L14844;
L14837:
        if  ( TRUE( scrt2__3d_2dtwo( X8, X9 ) ) )  goto L14844;
L14841:
        X10 = hmm_2dwbm_model_2da_v;
        X10 = UNKNOWNCALL( X10, 3 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( DISPLAY( 0 ), 
                                           X7, 
                                           X8, 
                                           PROCEDURE_CLOSURE( X10 ) );
        qobischeme_matrix_2dset_21( X6, X7, X8, X9 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14846;
        X8 = _TSCP( IPLUS( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14834 );
L14846:
        X8 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
        GOBACK( L14834 );
L14844:
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14848;
        X7 = _TSCP( IPLUS( _S2CINT( X7 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14821 );
L14848:
        X7 = scrt2__2b_2dtwo( X7, _TSCP( 4 ) );
        GOBACK( L14821 );
L14831:
        X5 = X6;
        X9 = hmm_2dwbm_model_2duu_v;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X9 ) );
        X7 = sc_make_2dvector( X8, EMPTYLIST );
        X8 = _TSCP( 0 );
L14852:
        X10 = hmm_2dwbm_model_2duu_v;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( DISPLAY( 0 ), 
                                           PROCEDURE_CLOSURE( X10 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L14855;
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( X9 ) ) )  goto L14859;
        goto L14862;
L14855:
        if  ( TRUE( scrt2__3d_2dtwo( X8, X9 ) ) )  goto L14862;
L14859:
        X10 = hmm_2dwbm_model_2db_v;
        X10 = UNKNOWNCALL( X10, 2 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( DISPLAY( 0 ), 
                                           X8, 
                                           PROCEDURE_CLOSURE( X10 ) );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L14865;
        scdebug_error( c12187, 
                       c12188, CONS( X7, EMPTYLIST ) );
L14865:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L14867;
        scdebug_error( c12187, 
                       c12191, CONS( X8, EMPTYLIST ) );
L14867:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L14869;
        scdebug_error( c12187, 
                       c12195, CONS( X8, EMPTYLIST ) );
L14869:
        SETGEN( VECTOR_ELEMENT( X7, X8 ), X9 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14871;
        X8 = _TSCP( IPLUS( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L14852 );
L14871:
        X8 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
        GOBACK( L14852 );
L14862:
        X6 = X7;
        SDVAL = hmm_2dwbm_make_2dpsi( X1, 
                                      X2, 
                                      f13411, 
                                      X3, X4, X5, X6 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( dclassify_2dsequence_b4be2ee2_v );
DEFCSTRING( t14873, "FORMAT-STATE-SEQUENCE" );
EXTERNTSCPP( scrt3_string, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_v );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  hmm_2dtrain_2dclassify_l13565( n13566, c14876 )
        TSCP  n13566, c14876;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13565 [inside FORMAT-STATE-\
SEQUENCE]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14876, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14876, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14876, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14876, 3 );
        X5 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14876, 4 );
        X10 = DISPLAY( 0 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L14879;
        X9 = _TSCP( IPLUS( _S2CINT( X10 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L14880;
L14879:
        X9 = scrt2__2b_2dtwo( X10, _TSCP( 8 ) );
L14880:
        X11 = DISPLAY( 2 );
        if  ( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X11 ), VECTORTAG ) )
            )  goto L14882;
        scdebug_error( c12270, 
                       c12188, CONS( X11, EMPTYLIST ) );
L14882:
        if  ( EQ( TSCPTAG( n13566 ), FIXNUMTAG ) )  goto L14884;
        scdebug_error( c12270, 
                       c12191, CONS( n13566, EMPTYLIST ) );
L14884:
        if  ( LT( _S2CUINT( FIXED_C( n13566 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X11 ) ) ) )  goto L14886;
        scdebug_error( c12270, 
                       c12195, CONS( n13566, EMPTYLIST ) );
L14886:
        X10 = VECTOR_ELEMENT( X11, n13566 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L14889;
        X11 = _TSCP( IPLUS( _S2CINT( X10 ), _S2CINT( X9 ) ) );
        goto L14890;
L14889:
        X11 = scrt2__2b_2dtwo( X10, X9 );
L14890:
        X8 = CONS( X11, EMPTYLIST );
        X9 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X9 ), VECTORTAG ) ) )  goto L14892;
        scdebug_error( c12270, 
                       c12188, CONS( X9, EMPTYLIST ) );
L14892:
        if  ( LT( _S2CUINT( FIXED_C( n13566 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X9 ) ) ) )  goto L14894;
        scdebug_error( c12270, 
                       c12195, CONS( n13566, EMPTYLIST ) );
L14894:
        X8 = CONS( VECTOR_ELEMENT( X9, n13566 ), X8 );
        X7 = scrt6_format( FALSEVALUE, CONS( c13598, X8 ) );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), STRINGTAG ) ) )  goto L14898;
        scdebug_error( c13596, 
                       c13597, CONS( X7, EMPTYLIST ) );
L14898:
        X8 = C_FIXED( STRING_LENGTH( X7 ) );
        X10 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( BITAND( BITOR( _S2CINT( X10 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L14902;
        X9 = _TSCP( IPLUS( _S2CINT( X10 ), _S2CINT( X8 ) ) );
        goto L14903;
L14902:
        X9 = scrt2__2b_2dtwo( X10, X8 );
L14903:
        if  ( BITAND( BITOR( _S2CINT( X9 ), 
                             _S2CINT( _TSCP( 300 ) ) ), 
                      3 ) )  goto L14906;
        if  ( GT( _S2CINT( X9 ), _S2CINT( _TSCP( 300 ) ) ) )  goto L14910;
        goto L14913;
L14906:
        if  ( FALSE( scrt2__3e_2dtwo( X9, _TSCP( 300 ) ) ) )  goto L14913;
L14910:
        X11 = CONS( scrt6_format( FALSEVALUE, 
                                  CONS( c13585, EMPTYLIST ) ), 
                    EMPTYLIST );
        X10 = scrt3_string_2dappend( CONS( PAIR_CAR( DISPLAY( 4 ) ), 
                                           X11 ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X10 );
        X10 = _TSCP( 0 );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X10 );
L14913:
        X10 = CONS( X7, EMPTYLIST );
        X9 = scrt3_string_2dappend( CONS( PAIR_CAR( DISPLAY( 4 ) ), 
                                          X10 ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X9 );
        X10 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( BITAND( BITOR( _S2CINT( X10 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L14916;
        X9 = _TSCP( IPLUS( _S2CINT( X10 ), _S2CINT( X8 ) ) );
        goto L14917;
L14916:
        X9 = scrt2__2b_2dtwo( X10, X8 );
L14917:
        X6 = SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X9 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 1 ) = X5;
        POPSTACKTRACE( X6 );
}

TSCP  dclassify_2dsequence_b4be2ee2( s13558, f13559 )
        TSCP  s13558, f13559;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14873 );
        DISPLAY( 0 ) = f13559;
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 2 ) = dclassify_e_2ddeltas_12bdd682( s13558 );
        DISPLAY( 3 ) = dclassify_e_2dstates_c7e8474a( s13558 );
        DISPLAY( 4 ) = scrt3_string( EMPTYLIST );
        DISPLAY( 4 ) = CONS( DISPLAY( 4 ), EMPTYLIST );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13565, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 1 ) ) );
        X3 = DISPLAY( 2 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L14919;
        scdebug_error( c12260, 
                       c12188, CONS( X3, EMPTYLIST ) );
L14919:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        qobischeme_for_2deach_2dn( X1, X2 );
        X4 = DISPLAY( 2 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L14922;
        scdebug_error( c12260, 
                       c12188, CONS( X4, EMPTYLIST ) );
L14922:
        X3 = C_FIXED( VECTOR_LENGTH( X4 ) );
        X4 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L14925;
        scdebug_error( c12270, 
                       c12188, CONS( X4, EMPTYLIST ) );
L14925:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L14927;
        scdebug_error( c12270, 
                       c12191, CONS( X3, EMPTYLIST ) );
L14927:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L14929;
        scdebug_error( c12270, 
                       c12195, CONS( X3, EMPTYLIST ) );
L14929:
        X2 = CONS( VECTOR_ELEMENT( X4, X3 ), EMPTYLIST );
        X1 = CONS( scrt6_format( FALSEVALUE, 
                                 CONS( c13635, X2 ) ), 
                   EMPTYLIST );
        SDVAL = scrt3_string_2dappend( CONS( PAIR_CAR( DISPLAY( 4 ) ), 
                                             X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( dclassify_t_2dstates_30cfc8b3_v );
DEFCSTRING( t14931, "BEST-STATES" );
EXTERNTSCP( hmm_2dwbm_2dsequence_1d9f2c00_v );

TSCP  hmm_2dtrain_2dclassify_l13683( t13684, c14953 )
        TSCP  t13684, c14953;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13683 [inside BEST-STATES]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14953, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14953, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14953, 2 );
        X4 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14953, 3 );
        X6 = dclassify_ctor_2dref_ef0af1ef( DISPLAY( 0 ), t13684 );
        X8 = DISPLAY( 2 );
        X9 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L14957;
        scdebug_error( c12270, 
                       c12188, CONS( X8, EMPTYLIST ) );
L14957:
        if  ( EQ( TSCPTAG( X9 ), FIXNUMTAG ) )  goto L14959;
        scdebug_error( c12270, 
                       c12191, CONS( X9, EMPTYLIST ) );
L14959:
        if  ( LT( _S2CUINT( FIXED_C( X9 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X8 ) ) ) )  goto L14961;
        scdebug_error( c12270, 
                       c12195, CONS( X9, EMPTYLIST ) );
L14961:
        X7 = VECTOR_ELEMENT( X8, X9 );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L14965;
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( X6 ) ) )  goto L14969;
        X5 = FALSEVALUE;
        goto L14972;
L14965:
        if  ( FALSE( scrt2__3d_2dtwo( X7, X6 ) ) )  goto L14969;
        X5 = FALSEVALUE;
        goto L14972;
L14969:
        X7 = DISPLAY( 3 );
        X8 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L14975;
        scdebug_error( c12187, 
                       c12188, CONS( X7, EMPTYLIST ) );
L14975:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L14977;
        scdebug_error( c12187, 
                       c12191, CONS( X8, EMPTYLIST ) );
L14977:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L14979;
        scdebug_error( c12187, 
                       c12195, CONS( X8, EMPTYLIST ) );
L14979:
        SETGEN( VECTOR_ELEMENT( X7, X8 ), t13684 );
        X8 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14982;
        X7 = _TSCP( IPLUS( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L14983;
L14982:
        X7 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
L14983:
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X7 );
        X7 = DISPLAY( 2 );
        X8 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L14985;
        scdebug_error( c12187, 
                       c12188, CONS( X7, EMPTYLIST ) );
L14985:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L14987;
        scdebug_error( c12187, 
                       c12191, CONS( X8, EMPTYLIST ) );
L14987:
        if  ( LT( _S2CUINT( FIXED_C( X8 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L14989;
        scdebug_error( c12187, 
                       c12195, CONS( X8, EMPTYLIST ) );
L14989:
        X5 = SETGEN( VECTOR_ELEMENT( X7, X8 ), X6 );
L14972:
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 2 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  hmm_2dtrain_2dclassify_l13759( i13760, c15009 )
        TSCP  i13760, c15009;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dtrain_2dclassify_l13759 [inside BEST-STATES]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c15009, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c15009, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c15009, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c15009, 3 );
        X6 = DISPLAY( 5 );
        X8 = DISPLAY( 2 );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L15012;
        scdebug_error( c12270, 
                       c12188, CONS( X8, EMPTYLIST ) );
L15012:
        if  ( EQ( TSCPTAG( i13760 ), FIXNUMTAG ) )  goto L15014;
        scdebug_error( c12270, 
                       c12191, CONS( i13760, EMPTYLIST ) );
L15014:
        if  ( LT( _S2CUINT( FIXED_C( i13760 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X8 ) ) ) )  goto L15016;
        scdebug_error( c12270, 
                       c12195, CONS( i13760, EMPTYLIST ) );
L15016:
        X7 = VECTOR_ELEMENT( X8, i13760 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L15019;
        scdebug_error( c12187, 
                       c12188, CONS( X6, EMPTYLIST ) );
L15019:
        if  ( LT( _S2CUINT( FIXED_C( i13760 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L15021;
        scdebug_error( c12187, 
                       c12195, CONS( i13760, EMPTYLIST ) );
L15021:
        SETGEN( VECTOR_ELEMENT( X6, i13760 ), X7 );
        X6 = DISPLAY( 4 );
        X8 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L15024;
        scdebug_error( c12270, 
                       c12188, CONS( X8, EMPTYLIST ) );
L15024:
        if  ( LT( _S2CUINT( FIXED_C( i13760 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X8 ) ) ) )  goto L15026;
        scdebug_error( c12270, 
                       c12195, CONS( i13760, EMPTYLIST ) );
L15026:
        X7 = VECTOR_ELEMENT( X8, i13760 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L15029;
        scdebug_error( c12187, 
                       c12188, CONS( X6, EMPTYLIST ) );
L15029:
        if  ( LT( _S2CUINT( FIXED_C( i13760 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L15031;
        scdebug_error( c12187, 
                       c12195, CONS( i13760, EMPTYLIST ) );
L15031:
        X5 = SETGEN( VECTOR_ELEMENT( X6, i13760 ), X7 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 5 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 4 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  dclassify_t_2dstates_30cfc8b3( t13651, m13652, r13653 )
        TSCP  t13651, m13652, r13653;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14931 );
        X1 = hmm_2dwbm_2dsequence_1d9f2c00_v;
        X1 = UNKNOWNCALL( X1, 2 );
        DISPLAY( 0 ) = VIA( PROCEDURE_CODE( X1 ) )( m13652, 
                                                    r13653, 
                                                    PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 2 ) = sc_make_2dvector( t13651, 
                                         CONS( _TSCP( -4 ), EMPTYLIST ) );
        DISPLAY( 3 ) = sc_make_2dvector( t13651, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( t13651 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L14938;
        if  ( EQ( _S2CUINT( t13651 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L14942;
        goto L14945;
L14938:
        if  ( FALSE( scrt2__3d_2dtwo( t13651, _TSCP( 0 ) ) ) )  goto L14945;
L14942:
        qobischeme_panic( c13671, EMPTYLIST );
L14945:
        X1 = DISPLAY( 2 );
        X2 = dclassify_ctor_2dref_ef0af1ef( DISPLAY( 0 ), 
                                            _TSCP( 0 ) );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L14947;
        scdebug_error( c12187, 
                       c12188, CONS( X1, EMPTYLIST ) );
L14947:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L14949;
        scdebug_error( c12187, 
                       c12191, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14949:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L14951;
        scdebug_error( c12187, 
                       c12195, CONS( _TSCP( 0 ), EMPTYLIST ) );
L14951:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), X2 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13683, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ) ) );
        qobischeme_for_2deach_2dn( X1, t13651 );
        DISPLAY( 4 ) = sc_make_2dvector( PAIR_CAR( DISPLAY( 1 ) ), 
                                         EMPTYLIST );
        X2 = PAIR_CAR( DISPLAY( 1 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14992;
        X1 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L14993;
L14992:
        X1 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L14993:
        DISPLAY( 5 ) = sc_make_2dvector( X1, EMPTYLIST );
        X2 = PAIR_CAR( DISPLAY( 1 ) );
        X3 = DISPLAY( 2 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L14996;
        scdebug_error( c12270, 
                       c12188, CONS( X3, EMPTYLIST ) );
L14996:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L14998;
        scdebug_error( c12270, 
                       c12191, CONS( X2, EMPTYLIST ) );
L14998:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L15000;
        scdebug_error( c12270, 
                       c12195, CONS( X2, EMPTYLIST ) );
L15000:
        X1 = VECTOR_ELEMENT( X3, X2 );
        X2 = PAIR_CAR( DISPLAY( 1 ) );
        X3 = DISPLAY( 5 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L15003;
        scdebug_error( c12187, 
                       c12188, CONS( X3, EMPTYLIST ) );
L15003:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L15005;
        scdebug_error( c12187, 
                       c12191, CONS( X2, EMPTYLIST ) );
L15005:
        if  ( LT( _S2CUINT( FIXED_C( X2 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L15007;
        scdebug_error( c12187, 
                       c12195, CONS( X2, EMPTYLIST ) );
L15007:
        SETGEN( VECTOR_ELEMENT( X3, X2 ), X1 );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dtrain_2dclassify_l13759, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_for_2deach_2dn( X1, 
                                   PAIR_CAR( DISPLAY( 1 ) ) );
        dclassify_dvector_21_cfc9aeef( DISPLAY( 0 ) );
        SDVAL = dclassify_2dsequence_7a86352d( DISPLAY( 5 ), 
                                               DISPLAY( 4 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( dclassify_likelihood_ae10695_v );
DEFCSTRING( t15033, "RMATS-LOG-LIKELIHOOD" );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( scrt2__2b, XAL1( TSCP ) );
EXTERNTSCP( scrt2__2b_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCP( hmm_2dwbm_likelihood_1a9c0e3b_v );

TSCP  dclassify_likelihood_ae10695( m13811, r13812 )
        TSCP  m13811, r13812;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t15033 );
        X2 = r13812;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L15036:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L15037;
        X1 = X3;
        goto L15044;
L15037:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L15040;
        scrt1__24__car_2derror( X2 );
L15040:
        X8 = PAIR_CAR( X2 );
        X7 = hmm_2dwbm_likelihood_1a9c0e3b_v;
        X7 = UNKNOWNCALL( X7, 2 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( m13811, 
                                          X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L15043;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L15036 );
L15043:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L15048;
        scdebug_error( c13847, 
                       c13848, CONS( X4, EMPTYLIST ) );
L15048:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L15036 );
L15044:
        POPSTACKTRACE( qobischeme_reduce( scrt2__2b_v, X1, c12968 ) );
}

void scrt6__init();
void scrt3__init();
void toollib_2dc_2dbindings__init();
void scrt1__init();
void hmm_2dwbm__init();
void scrt4__init();
void scdebug__init();
void qobischeme__init();
void scrt2__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt6__init();
        scrt3__init();
        toollib_2dc_2dbindings__init();
        scrt1__init();
        hmm_2dwbm__init();
        scrt4__init();
        scdebug__init();
        qobischeme__init();
        scrt2__init();
        MAXDISPLAY( 12 );
}

void  hmm_2dtrain_2dclassify__init()
{
        TSCP  X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(hmm_2dtrain_2dclassify SCHEME->C COMPILER 15mar93jfb\
)" );
        sc_segv__handlers();
        INITIALIZEVAR( t14024, 
                       ADR( dclassify_fy_2d1_2d0_50de118a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      dclassify_fy_2d1_2d0_50de118a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14026, 
                       ADR( dclassify_fy_2d3_2d0_2a1e42ea_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      dclassify_fy_2d3_2d0_2a1e42ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14028, 
                       ADR( dclassify_fy_2d5_2d0_a55eb74a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      dclassify_fy_2d5_2d0_a55eb74a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14030, 
                       ADR( dclassify_fy_2d7_2d0_df9ee42a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      dclassify_fy_2d7_2d0_df9ee42a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14032, 
                       ADR( dclassify_fy_2d9_2d0_60ae5a4b_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      dclassify_fy_2d9_2d0_60ae5a4b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14034, 
                       ADR( dclassify_ctor_2dref_ef0af1ef_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_ctor_2dref_ef0af1ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14036, 
                       ADR( dclassify_dvector_21_cfc9aeef_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_dvector_21_cfc9aeef, 
                                      EMPTYLIST ) );
        X2 = qobischeme_pi_v;
        if  ( BITAND( BITOR( _S2CINT( c12167 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L14041;
        X1 = _TSCP( ITIMES( FIXED_C( c12167 ), 
                            _S2CINT( X2 ) ) );
        goto L14042;
L14041:
        X1 = scrt2__2a_2dtwo( c12167, X2 );
L14042:
        INITIALIZEVAR( t14039, 
                       ADR( dclassify_2dtwo_2dpi_e692e766_v ), 
                       scrt2_sqrt( X1 ) );
        X2 = qobischeme_pi_v;
        if  ( BITAND( BITOR( _S2CINT( c12167 ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L14045;
        X1 = _TSCP( ITIMES( FIXED_C( c12167 ), 
                            _S2CINT( X2 ) ) );
        goto L14046;
L14045:
        X1 = scrt2__2a_2dtwo( c12167, X2 );
L14046:
        INITIALIZEVAR( t14043, 
                       ADR( dclassify_2dtwo_2dpi_7364711a_v ), 
                       scrt2_log( X1 ) );
        INITIALIZEVAR( t14047, 
                       ADR( dclassify_ke_2dmatch_ee7036bf_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_ke_2dmatch_ee7036bf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14072, 
                       ADR( dclassify_match_3f_6a0807a1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_match_3f_6a0807a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14088, 
                       ADR( dclassify_h_2dpsi_21_33bf92f9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_h_2dpsi_21_33bf92f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14092, 
                       ADR( dclassify_atch_2dpsi_6ac4536a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_atch_2dpsi_6ac4536a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14103, 
                       ADR( dclassify_h_2dpsi_21_294cb98_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_h_2dpsi_21_294cb98, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14114, 
                       ADR( dclassify_elihood_21_54ec8fc8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_elihood_21_54ec8fc8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14118, 
                       ADR( dclassify_likelihood_84b389bc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_likelihood_84b389bc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14129, 
                       ADR( dclassify_elihood_21_4d70d1b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_elihood_21_4d70d1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14140, 
                       ADR( dclassify_utation_21_542bc4de_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_utation_21_542bc4de, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14144, 
                       ADR( dclassify_ermutation_24a3f68b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_ermutation_24a3f68b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14155, 
                       ADR( dclassify_utation_21_f0dac5c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_utation_21_f0dac5c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14166, 
                       ADR( dclassify_2dsequence_7a86352d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_2dsequence_7a86352d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14186, 
                       ADR( dclassify_equence_3f_d1e8a45_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_equence_3f_d1e8a45, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14202, 
                       ADR( dclassify_dstates_21_cce06245_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_dstates_21_cce06245, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14206, 
                       ADR( dclassify_e_2dstates_c7e8474a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_e_2dstates_c7e8474a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14217, 
                       ADR( dclassify_dstates_21_d36adaa9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_dstates_21_d36adaa9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14228, 
                       ADR( dclassify_ddeltas_21_2007bb48_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_ddeltas_21_2007bb48, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14232, 
                       ADR( dclassify_e_2ddeltas_12bdd682_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_e_2ddeltas_12bdd682, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14243, 
                       ADR( dclassify_ddeltas_21_3f8d03a4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_ddeltas_21_3f8d03a4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14254, 
                       ADR( dclassify_x_2dset_21_1303a589_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_x_2dset_21_1303a589, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14256, 
                       ADR( dclassify_struct_2dx_a2e69655_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_struct_2dx_a2e69655, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14258, 
                       ADR( dclassify_x_2dupdate_d993bc0d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_x_2dupdate_d993bc0d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14260, 
                       ADR( dclassify_v_2dset_21_dca953a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_v_2dset_21_dca953a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14262, 
                       ADR( dclassify_struct_2dv_455ebb52_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_struct_2dv_455ebb52, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14264, 
                       ADR( dclassify_v_2dupdate_c75a8cbe_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_v_2dupdate_c75a8cbe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14266, 
                       ADR( dclassify_2adelta_2a_738f2c68_v ), 
                       c12544 );
        INITIALIZEVAR( t14267, 
                       ADR( dclassify_bose_3f_2a_59464ca5_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t14268, 
                       ADR( dclassify_2dgaussian_68ee7919_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_2dgaussian_68ee7919, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14294, 
                       ADR( dclassify_an_2fd_2dx_247d8fdb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_an_2fd_2dx_247d8fdb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14319, 
                       ADR( dclassify_lbessi0_953b4f9e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_lbessi0_953b4f9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14463, 
                       ADR( dclassify_on_2dmises_9659de3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_on_2dmises_9659de3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14476, 
                       ADR( dclassify_es_2fd_2dx_f595e618_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_es_2fd_2dx_f595e618, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14489, 
                       ADR( dclassify_e_2dmatrix_8d4db969_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_e_2dmatrix_8d4db969, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14601, 
                       ADR( hmm_2dtrain_2dclassify_e_2b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dtrain_2dclassify_e_2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14618, 
                       ADR( dclassify__2dellipse_e883644_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify__2dellipse_e883644, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14635, 
                       ADR( hmm_2dtrain_2dclassify_k_2ae_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dtrain_2dclassify_k_2ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14652, 
                       ADR( dclassify_psi_2dii_fa0ba786_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_psi_2dii_fa0ba786, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14664, 
                       ADR( dclassify_psi_2duu_87da694_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_psi_2duu_87da694, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14669, 
                       ADR( dclassify_2d_3emodel_e835326a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      dclassify_2d_3emodel_e835326a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14763, 
                       ADR( dclassify_l_2d_3epsi_df2d065c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_l_2d_3epsi_df2d065c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14873, 
                       ADR( dclassify_2dsequence_b4be2ee2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_2dsequence_b4be2ee2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14931, 
                       ADR( dclassify_t_2dstates_30cfc8b3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      dclassify_t_2dstates_30cfc8b3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t15033, 
                       ADR( dclassify_likelihood_ae10695_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      dclassify_likelihood_ae10695, 
                                      EMPTYLIST ) );
        return;
}
