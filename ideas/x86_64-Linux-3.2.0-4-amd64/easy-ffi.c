
/* SCHEME->C */

#include <objects.h>

void easy_2dffi__init();
DEFCSTRING( t12401, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c12319 );
DEFSTATICTSCP( c12318 );
DEFCSTRING( t12402, "Argument(s) not CHAR: ~s ~s" );
DEFSTATICTSCP( c12312 );
DEFSTATICTSCP( c12311 );
DEFSTATICTSCP( c12171 );
DEFSTATICTSCP( c12167 );
DEFSTATICTSCP( c12030 );
DEFCSTRING( t12403, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12025 );
DEFCSTRING( t12404, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12021 );
DEFCSTRING( t12405, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12018 );
DEFSTATICTSCP( c12017 );
DEFCSTRING( t12406, "Not a list or vector" );
DEFSTATICTSCP( c11995 );

static void  init_constants()
{
        c12319 = CSTRING_TSCP( t12401 );
        CONSTANTEXP( ADR( c12319 ) );
        c12318 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c12318 ) );
        c12312 = CSTRING_TSCP( t12402 );
        CONSTANTEXP( ADR( c12312 ) );
        c12311 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR=?" ) );
        CONSTANTEXP( ADR( c12311 ) );
        c12171 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR" ) );
        CONSTANTEXP( ADR( c12171 ) );
        c12167 = STRINGTOSYMBOL( CSTRING_TSCP( "LIST" ) );
        CONSTANTEXP( ADR( c12167 ) );
        c12030 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12030 ) );
        c12025 = CSTRING_TSCP( t12403 );
        CONSTANTEXP( ADR( c12025 ) );
        c12021 = CSTRING_TSCP( t12404 );
        CONSTANTEXP( ADR( c12021 ) );
        c12018 = CSTRING_TSCP( t12405 );
        CONSTANTEXP( ADR( c12018 ) );
        c12017 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12017 ) );
        c11995 = CSTRING_TSCP( t12406 );
        CONSTANTEXP( ADR( c11995 ) );
}

DEFTSCP( asy_2dffi_fi_2d1_2d0_8506d0f9_v );
DEFCSTRING( t12407, "gensym-easy_2dffi-1-0" );

TSCP  asy_2dffi_fi_2d1_2d0_8506d0f9(  )
{
        PUSHSTACKTRACE( t12407 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_easy_2dffi_2_0(){ return 1;gensym_easy_2dffi_2_0( );
}

DEFTSCP( asy_2dffi_fi_2d3_2d0_ffc68399_v );
DEFCSTRING( t12409, "gensym-easy_2dffi-3-0" );

TSCP  asy_2dffi_fi_2d3_2d0_ffc68399(  )
{
        PUSHSTACKTRACE( t12409 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_easy_2dffi_4_0(){ return 1;gensym_easy_2dffi_4_0( );
}

DEFTSCP( asy_2dffi_fi_2d5_2d0_70867639_v );
DEFCSTRING( t12411, "gensym-easy_2dffi-5-0" );

TSCP  asy_2dffi_fi_2d5_2d0_70867639(  )
{
        PUSHSTACKTRACE( t12411 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_easy_2dffi_6_0(){ return 1;gensym_easy_2dffi_6_0( );
}

DEFTSCP( asy_2dffi_i_3ato_2dc_4737233d_v );
DEFCSTRING( t12413, "EASY-FFI:TO-C" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCP( scrt4_c_2dsizeof_2ds2cuint_v );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
EXTERNTSCPP( obischeme__2dindexed_d1069d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dindexed_d1069d4_v );
EXTERNTSCPP( scrt4_c_2ds2cuint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ds2cuint_2dset_21_v );
EXTERNTSCPP( easy_2dffi_l11979, XAL2( TSCP, TSCP ) );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );

TSCP  easy_2dffi_l12047( x12048, i12049, c12435 )
        TSCP  x12048, i12049, c12435;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12047 [inside EASY-FFI:TO-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12435, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12435, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12435, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12435, 3 );
        X7 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i12049 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L12438;
        X6 = _TSCP( ITIMES( FIXED_C( i12049 ), 
                            _S2CINT( X7 ) ) );
        goto L12439;
L12438:
        X6 = scrt2__2a_2dtwo( i12049, X7 );
L12439:
        X9 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X9 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12441;
        X8 = _TSCP( IDIFFERENCE( _S2CINT( X9 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L12442;
L12441:
        X8 = scrt2__2d_2dtwo( X9, _TSCP( 4 ) );
L12442:
        X7 = easy_2dffi_l11979( X8, x12048 );
        X5 = scrt4_c_2ds2cuint_2dset_21( DISPLAY( 4 ), 
                                         X6, X7 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        DISPLAY( 4 ) = X4;
        POPSTACKTRACE( X5 );
}

EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( qobischeme_for_2deach_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_for_2deach_2dn_v );

TSCP  easy_2dffi_l11998( i11999, c12452 )
        TSCP  i11999, c12452;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l11998 [inside EASY-FFI:TO-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12452, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12452, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c12452, 2 );
        X4 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12452, 3 );
        X5 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12452, 4 );
        X8 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i11999 ), 
                             _S2CINT( X8 ) ), 
                      3 ) )  goto L12455;
        X7 = _TSCP( ITIMES( FIXED_C( i11999 ), 
                            _S2CINT( X8 ) ) );
        goto L12456;
L12455:
        X7 = scrt2__2a_2dtwo( i11999, X8 );
L12456:
        X10 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X10 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12458;
        X9 = _TSCP( IDIFFERENCE( _S2CINT( X10 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L12459;
L12458:
        X9 = scrt2__2d_2dtwo( X10, _TSCP( 4 ) );
L12459:
        X11 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X11 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X11 ), VECTORTAG ) )
            )  goto L12461;
        scdebug_error( c12017, 
                       c12018, CONS( X11, EMPTYLIST ) );
L12461:
        if  ( EQ( TSCPTAG( i11999 ), FIXNUMTAG ) )  goto L12463;
        scdebug_error( c12017, 
                       c12021, CONS( i11999, EMPTYLIST ) );
L12463:
        if  ( LT( _S2CUINT( FIXED_C( i11999 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X11 ) ) ) )  goto L12465;
        scdebug_error( c12017, 
                       c12025, CONS( i11999, EMPTYLIST ) );
L12465:
        X10 = VECTOR_ELEMENT( X11, i11999 );
        X8 = easy_2dffi_l11979( X9, X10 );
        X6 = scrt4_c_2ds2cuint_2dset_21( DISPLAY( 4 ), 
                                         X7, X8 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 2 ) = X4;
        DISPLAY( 4 ) = X5;
        POPSTACKTRACE( X6 );
}

EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );

TSCP  easy_2dffi_l12114( x12115, i12116, c12476 )
        TSCP  x12115, i12116, c12476;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12114 [inside EASY-FFI:TO-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12476, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12476, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12476, 2 );
        X7 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( i12116 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L12479;
        X6 = _TSCP( ITIMES( FIXED_C( i12116 ), 
                            _S2CINT( X7 ) ) );
        goto L12480;
L12479:
        X6 = scrt2__2a_2dtwo( i12116, X7 );
L12480:
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 4 ), 
                                          X6, 
                                          x12115, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  easy_2dffi_l12076( i12077, c12490 )
        TSCP  i12077, c12490;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12076 [inside EASY-FFI:TO-C]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c12490, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12490, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12490, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12490, 3 );
        X8 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( i12077 ), 
                             _S2CINT( X8 ) ), 
                      3 ) )  goto L12493;
        X7 = _TSCP( ITIMES( FIXED_C( i12077 ), 
                            _S2CINT( X8 ) ) );
        goto L12494;
L12493:
        X7 = scrt2__2a_2dtwo( i12077, X8 );
L12494:
        X9 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X9 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X9 ), VECTORTAG ) ) )  goto L12496;
        scdebug_error( c12017, 
                       c12018, CONS( X9, EMPTYLIST ) );
L12496:
        if  ( EQ( TSCPTAG( i12077 ), FIXNUMTAG ) )  goto L12498;
        scdebug_error( c12017, 
                       c12021, CONS( i12077, EMPTYLIST ) );
L12498:
        if  ( LT( _S2CUINT( FIXED_C( i12077 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X9 ) ) ) )  goto L12500;
        scdebug_error( c12017, 
                       c12025, CONS( i12077, EMPTYLIST ) );
L12500:
        X8 = VECTOR_ELEMENT( X9, i12077 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 3 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( DISPLAY( 4 ), 
                                          X7, 
                                          X8, 
                                          PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  easy_2dffi_l11979( n11981, x11982 )
        TSCP  n11981, x11982;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside EASY-FFI:TO-C]" );
        DISPLAY( 2 ) = n11981;
        DISPLAY( 3 ) = x11982;
        X1 = DISPLAY( 2 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12421;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L12425;
        goto L12426;
L12421:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 4 ) ) ) )  goto L12425;
L12426:
        if  ( FALSE( scrt1_list_3f( DISPLAY( 3 ) ) ) )  goto L12429;
        X2 = scrt1_length( DISPLAY( 3 ) );
        X3 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L12432;
        X1 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X3 ) ) );
        goto L12433;
L12432:
        X1 = scrt2__2a_2dtwo( X2, X3 );
L12433:
        DISPLAY( 4 ) = POINTER_TSCP( malloc( TSCP_S2CUINT( X1 ) ) );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            easy_2dffi_l12047, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 4 ) ) );
        obischeme__2dindexed_d1069d4( X1, DISPLAY( 3 ) );
        SDVAL = DISPLAY( 4 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12429:
        if  ( NOT( AND( EQ( TSCPTAG( DISPLAY( 3 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( DISPLAY( 3 ) ), 
                            VECTORTAG ) ) ) )  goto L12443;
        X2 = scrt4_c_2dsizeof_2ds2cuint_v;
        X4 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L12446;
        scdebug_error( c12030, 
                       c12018, CONS( X4, EMPTYLIST ) );
L12446:
        X3 = C_FIXED( VECTOR_LENGTH( X4 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L12449;
        X1 = _TSCP( ITIMES( FIXED_C( X3 ), _S2CINT( X2 ) ) );
        goto L12450;
L12449:
        X1 = scrt2__2a_2dtwo( X3, X2 );
L12450:
        DISPLAY( 4 ) = POINTER_TSCP( malloc( TSCP_S2CUINT( X1 ) ) );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l11998, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 4 ) ) );
        X3 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L12468;
        scdebug_error( c12030, 
                       c12018, CONS( X3, EMPTYLIST ) );
L12468:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        qobischeme_for_2deach_2dn( X1, X2 );
        SDVAL = DISPLAY( 4 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12443:
        SDVAL = qobischeme_panic( c11995, EMPTYLIST );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12425:
        if  ( FALSE( scrt1_list_3f( DISPLAY( 3 ) ) ) )  goto L12470;
        X2 = scrt1_length( DISPLAY( 3 ) );
        X3 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L12473;
        X1 = _TSCP( ITIMES( FIXED_C( X2 ), _S2CINT( X3 ) ) );
        goto L12474;
L12473:
        X1 = scrt2__2a_2dtwo( X2, X3 );
L12474:
        DISPLAY( 4 ) = POINTER_TSCP( malloc( TSCP_S2CUINT( X1 ) ) );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            easy_2dffi_l12114, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ) ) );
        obischeme__2dindexed_d1069d4( X1, DISPLAY( 3 ) );
        SDVAL = DISPLAY( 4 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12470:
        if  ( NOT( AND( EQ( TSCPTAG( DISPLAY( 3 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( DISPLAY( 3 ) ), 
                            VECTORTAG ) ) ) )  goto L12481;
        X2 = DISPLAY( 1 );
        X4 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L12484;
        scdebug_error( c12030, 
                       c12018, CONS( X4, EMPTYLIST ) );
L12484:
        X3 = C_FIXED( VECTOR_LENGTH( X4 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L12487;
        X1 = _TSCP( ITIMES( FIXED_C( X3 ), _S2CINT( X2 ) ) );
        goto L12488;
L12487:
        X1 = scrt2__2a_2dtwo( X3, X2 );
L12488:
        DISPLAY( 4 ) = POINTER_TSCP( malloc( TSCP_S2CUINT( X1 ) ) );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12076, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ) ) );
        X3 = DISPLAY( 3 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L12503;
        scdebug_error( c12030, 
                       c12018, CONS( X3, EMPTYLIST ) );
L12503:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        qobischeme_for_2deach_2dn( X1, X2 );
        SDVAL = DISPLAY( 4 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12481:
        SDVAL = qobischeme_panic( c11995, EMPTYLIST );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  easy_2dffi_l11972( n11973, x11974, c12415 )
        TSCP  n11973, x11974, c12415;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l11972 [inside EASY-FFI:TO-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12415, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12415, 1 );
        X3 = easy_2dffi_l11979( n11973, x11974 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  asy_2dffi_i_3ato_2dc_4737233d( c11970, c11971 )
        TSCP  c11970, c11971;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12413 );
        DISPLAY( 0 ) = c11970;
        DISPLAY( 1 ) = c11971;
        SDVAL = MAKEPROCEDURE( 2, 
                               0, 
                               easy_2dffi_l11972, 
                               MAKECLOSURE( EMPTYLIST, 
                                            2, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( asy_2dffi_3afrom_2dc_d15f4f72_v );
DEFCSTRING( t12505, "EASY-FFI:FROM-C" );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );
EXTERNTSCPP( easy_2dffi_l12148, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );
EXTERNTSCPP( scrt4_c_2ds2cuint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ds2cuint_2dref_v );

TSCP  easy_2dffi_l12180( i12181, c12524 )
        TSCP  i12181, c12524;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12180 [inside EASY-FFI:FROM-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12524, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12524, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12524, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c12524, 3 );
        X5 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12524, 4 );
        X7 = qobischeme_rest( DISPLAY( 2 ) );
        X8 = qobischeme_rest( DISPLAY( 3 ) );
        X11 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i12181 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L12527;
        X10 = _TSCP( ITIMES( FIXED_C( i12181 ), 
                             _S2CINT( X11 ) ) );
        goto L12528;
L12527:
        X10 = scrt2__2a_2dtwo( i12181, X11 );
L12528:
        X9 = scrt4_c_2ds2cuint_2dref( DISPLAY( 4 ), X10 );
        X6 = easy_2dffi_l12148( X7, X8, X9 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 3 ) = X4;
        DISPLAY( 2 ) = X5;
        POPSTACKTRACE( X6 );
}

EXTERNTSCPP( qobischeme_map_2dn_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_2dvector_v );

TSCP  easy_2dffi_l12172( i12173, c12531 )
        TSCP  i12173, c12531;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12172 [inside EASY-FFI:FROM-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12531, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12531, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12531, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c12531, 3 );
        X5 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12531, 4 );
        X7 = qobischeme_rest( DISPLAY( 2 ) );
        X8 = qobischeme_rest( DISPLAY( 3 ) );
        X11 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i12173 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L12534;
        X10 = _TSCP( ITIMES( FIXED_C( i12173 ), 
                             _S2CINT( X11 ) ) );
        goto L12535;
L12534:
        X10 = scrt2__2a_2dtwo( i12173, X11 );
L12535:
        X9 = scrt4_c_2ds2cuint_2dref( DISPLAY( 4 ), X10 );
        X6 = easy_2dffi_l12148( X7, X8, X9 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 3 ) = X4;
        DISPLAY( 2 ) = X5;
        POPSTACKTRACE( X6 );
}

TSCP  easy_2dffi_l12204( i12205, c12539 )
        TSCP  i12205, c12539;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12204 [inside EASY-FFI:FROM-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12539, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12539, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12539, 2 );
        X7 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( i12205 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L12542;
        X6 = _TSCP( ITIMES( FIXED_C( i12205 ), 
                            _S2CINT( X7 ) ) );
        goto L12543;
L12542:
        X6 = scrt2__2a_2dtwo( i12205, X7 );
L12543:
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 4 ), 
                                          X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  easy_2dffi_l12196( i12197, c12546 )
        TSCP  i12197, c12546;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12196 [inside EASY-FFI:FROM-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12546, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c12546, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12546, 2 );
        X7 = DISPLAY( 1 );
        if  ( BITAND( BITOR( _S2CINT( i12197 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L12549;
        X6 = _TSCP( ITIMES( FIXED_C( i12197 ), 
                            _S2CINT( X7 ) ) );
        goto L12550;
L12549:
        X6 = scrt2__2a_2dtwo( i12197, X7 );
L12550:
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 2 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 4 ), 
                                          X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  easy_2dffi_l12148( n12150, t12151, v12152 )
        TSCP  n12150, t12151, v12152;
{
        TSCP  X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside EASY-FFI:FROM-C]" );
        DISPLAY( 2 ) = n12150;
        DISPLAY( 3 ) = t12151;
        DISPLAY( 4 ) = v12152;
        X1 = scrt1_length( DISPLAY( 2 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12513;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L12517;
        goto L12518;
L12513:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 4 ) ) ) )  goto L12517;
L12518:
        X1 = qobischeme_first( DISPLAY( 3 ) );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12167 ) ) )  goto L12522;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12180, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ) ) );
        X3 = qobischeme_first( DISPLAY( 2 ) );
        SDVAL = qobischeme_map_2dn( X2, X3 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12522:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12171 ) ) )  goto L12529;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12172, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ) ) );
        X3 = qobischeme_first( DISPLAY( 2 ) );
        SDVAL = qobischeme_map_2dn_2dvector( X2, X3 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12529:
        SDVAL = qobischeme_panic( c11995, EMPTYLIST );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12517:
        X1 = qobischeme_first( DISPLAY( 3 ) );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12167 ) ) )  goto L12537;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12204, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_first( DISPLAY( 2 ) );
        SDVAL = qobischeme_map_2dn( X2, X3 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12537:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12171 ) ) )  goto L12544;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12196, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_first( DISPLAY( 2 ) );
        SDVAL = qobischeme_map_2dn_2dvector( X2, X3 );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
L12544:
        SDVAL = qobischeme_panic( c11995, EMPTYLIST );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  easy_2dffi_l12139( n12140, t12141, v12142, c12507 )
        TSCP  n12140, t12141, v12142, c12507;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12139 [inside EASY-FFI:FROM-C]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12507, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12507, 1 );
        X3 = easy_2dffi_l12148( n12140, t12141, v12142 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  asy_2dffi_3afrom_2dc_d15f4f72( c12137, c12138 )
        TSCP  c12137, c12138;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12505 );
        DISPLAY( 0 ) = c12137;
        DISPLAY( 1 ) = c12138;
        SDVAL = MAKEPROCEDURE( 3, 
                               0, 
                               easy_2dffi_l12139, 
                               MAKECLOSURE( EMPTYLIST, 
                                            2, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( easy_2dffi_easy_2dffi_3afree_v );
DEFCSTRING( t12551, "EASY-FFI:FREE" );
EXTERNTSCPP( easy_2dffi_l12221, XAL3( TSCP, TSCP, TSCP ) );

TSCP  easy_2dffi_l12272( x12273, i12274, c12568 )
        TSCP  x12273, i12274, c12568;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12272 [inside EASY-FFI:FREE]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12568, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12568, 1 );
        X5 = DISPLAY( 0 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12571;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X5 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L12572;
L12571:
        X4 = scrt2__2d_2dtwo( X5, _TSCP( 4 ) );
L12572:
        X7 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i12274 ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L12574;
        X6 = _TSCP( ITIMES( FIXED_C( i12274 ), 
                            _S2CINT( X7 ) ) );
        goto L12575;
L12574:
        X6 = scrt2__2a_2dtwo( i12274, X7 );
L12575:
        X5 = scrt4_c_2ds2cuint_2dref( DISPLAY( 2 ), X6 );
        X3 = easy_2dffi_l12221( X4, x12273, X5 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  easy_2dffi_l12238( i12239, c12581 )
        TSCP  i12239, c12581;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "easy_2dffi_l12238 [inside EASY-FFI:FREE]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12581, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12581, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12581, 2 );
        X6 = DISPLAY( 0 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12584;
        X5 = _TSCP( IDIFFERENCE( _S2CINT( X6 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L12585;
L12584:
        X5 = scrt2__2d_2dtwo( X6, _TSCP( 4 ) );
L12585:
        X7 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X7 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X7 ), VECTORTAG ) ) )  goto L12587;
        scdebug_error( c12017, 
                       c12018, CONS( X7, EMPTYLIST ) );
L12587:
        if  ( EQ( TSCPTAG( i12239 ), FIXNUMTAG ) )  goto L12589;
        scdebug_error( c12017, 
                       c12021, CONS( i12239, EMPTYLIST ) );
L12589:
        if  ( LT( _S2CUINT( FIXED_C( i12239 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X7 ) ) ) )  goto L12591;
        scdebug_error( c12017, 
                       c12025, CONS( i12239, EMPTYLIST ) );
L12591:
        X6 = VECTOR_ELEMENT( X7, i12239 );
        X9 = scrt4_c_2dsizeof_2ds2cuint_v;
        if  ( BITAND( BITOR( _S2CINT( i12239 ), 
                             _S2CINT( X9 ) ), 
                      3 ) )  goto L12594;
        X8 = _TSCP( ITIMES( FIXED_C( i12239 ), 
                            _S2CINT( X9 ) ) );
        goto L12595;
L12594:
        X8 = scrt2__2a_2dtwo( i12239, X9 );
L12595:
        X7 = scrt4_c_2ds2cuint_2dref( DISPLAY( 2 ), X8 );
        X4 = easy_2dffi_l12221( X5, X6, X7 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  easy_2dffi_l12221( n12223, x12224, v12225 )
        TSCP  n12223, x12224, v12225;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside EASY-FFI:FREE]" );
        DISPLAY( 0 ) = n12223;
        DISPLAY( 1 ) = x12224;
        DISPLAY( 2 ) = v12225;
        X1 = DISPLAY( 0 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12557;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L12561;
        goto L12562;
L12557:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 4 ) ) ) )  goto L12561;
L12562:
        if  ( FALSE( scrt1_list_3f( DISPLAY( 1 ) ) ) )  goto L12565;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            easy_2dffi_l12272, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        obischeme__2dindexed_d1069d4( X1, DISPLAY( 1 ) );
        X1 = DISPLAY( 2 );
        free( TSCP_POINTER( X1 ) );
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L12565:
        if  ( NOT( AND( EQ( TSCPTAG( DISPLAY( 1 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( DISPLAY( 1 ) ), 
                            VECTORTAG ) ) ) )  goto L12578;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            easy_2dffi_l12238, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L12597;
        scdebug_error( c12030, 
                       c12018, CONS( X3, EMPTYLIST ) );
L12597:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        qobischeme_for_2deach_2dn( X1, X2 );
        X1 = DISPLAY( 2 );
        free( TSCP_POINTER( X1 ) );
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L12578:
        SDVAL = qobischeme_panic( c11995, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L12561:
        X1 = DISPLAY( 2 );
        free( TSCP_POINTER( X1 ) );
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  easy_2dffi_easy_2dffi_3afree( n12213, x12214, v12215 )
        TSCP  n12213, x12214, v12215;
{
        PUSHSTACKTRACE( t12551 );
        POPSTACKTRACE( easy_2dffi_l12221( n12213, x12214, v12215 ) );
}

DEFTSCP( asy_2dffi_e_2dto_2dc_f497c900_v );
DEFCSTRING( t12603, "EASY-FFI:BYTE-TO-C" );
EXTERNTSCPP( scrt4_c_2dbyte_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dbyte_2dset_21_v );
DEFTSCP( asy_2dffi_e_2dto_2dc_6e7b37fb_v );
DEFCSTRING( t12604, "EASY-FFI:DOUBLE-TO-C" );
EXTERNTSCPP( scrt4_c_2ddouble_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ddouble_2dset_21_v );
EXTERNTSCP( scrt4_c_2dsizeof_2ddouble_v );
DEFTSCP( asy_2dffi_t_2dto_2dc_61925e17_v );
DEFCSTRING( t12605, "EASY-FFI:FLOAT-TO-C" );
EXTERNTSCPP( scrt4_c_2dfloat_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dfloat_2dset_21_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dfloat_v );
DEFTSCP( asy_2dffi_t_2dto_2dc_d3906c33_v );
DEFCSTRING( t12606, "EASY-FFI:INT-TO-C" );
EXTERNTSCPP( scrt4_c_2dint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dset_21_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dint_v );
DEFTSCP( asy_2dffi_t_2dto_2dc_ca84e256_v );
DEFCSTRING( t12607, "EASY-FFI:LONGINT-TO-C" );
EXTERNTSCPP( scrt4_c_2dlongint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dlongint_2dset_21_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dlong_v );
DEFTSCP( asy_2dffi_d_2dto_2dc_5b40207f_v );
DEFCSTRING( t12608, "EASY-FFI:LONGUNSIGNED-TO-C" );
EXTERNTSCPP( scrt4_d_2dset_21_2e97375c, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_d_2dset_21_2e97375c_v );
DEFTSCP( asy_2dffi_t_2dto_2dc_2259710f_v );
DEFCSTRING( t12609, "EASY-FFI:SHORTINT-TO-C" );
EXTERNTSCPP( scrt4_c_2dshortint_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dshortint_2dset_21_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dshort_v );
DEFTSCP( asy_2dffi_d_2dto_2dc_d2401c08_v );
DEFCSTRING( t12610, "EASY-FFI:SHORTUNSIGNED-TO-C" );
EXTERNTSCPP( scrt4_d_2dset_21_828269c5, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_d_2dset_21_828269c5_v );
DEFTSCP( asy_2dffi_d_2dto_2dc_873bbbfe_v );
DEFCSTRING( t12611, "EASY-FFI:UNSIGNED-TO-C" );
EXTERNTSCPP( scrt4_c_2dunsigned_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dunsigned_2dset_21_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_fb68bf0a_v );
DEFCSTRING( t12612, "EASY-FFI:BYTE-FROM-C" );
EXTERNTSCPP( scrt4_c_2dbyte_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dbyte_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_5625c28b_v );
DEFCSTRING( t12613, "EASY-FFI:DOUBLE-FROM-C" );
EXTERNTSCPP( scrt4_c_2ddouble_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ddouble_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_9080a87e_v );
DEFCSTRING( t12614, "EASY-FFI:FLOAT-FROM-C" );
EXTERNTSCPP( scrt4_c_2dfloat_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dfloat_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_a9bfaa5a_v );
DEFCSTRING( t12615, "EASY-FFI:INT-FROM-C" );
EXTERNTSCPP( scrt4_c_2dint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dint_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_bb35828b_v );
DEFCSTRING( t12616, "EASY-FFI:LONGINT-FROM-C" );
EXTERNTSCPP( scrt4_c_2dlongint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dlongint_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_8a192f38_v );
DEFCSTRING( t12617, "EASY-FFI:LONGUNSIGNED-FROM-C" );
EXTERNTSCPP( scrt4_c_2dlongunsigned_2dref, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dlongunsigned_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_b94a4eb5_v );
DEFCSTRING( t12618, "EASY-FFI:SHORTINT-FROM-C" );
EXTERNTSCPP( scrt4_c_2dshortint_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dshortint_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_c508358e_v );
DEFCSTRING( t12619, "EASY-FFI:SHORTUNSIGNED-FROM-C" );
EXTERNTSCPP( scrt4_c_2dshortunsigned_2dref, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dshortunsigned_2dref_v );
DEFTSCP( asy_2dffi_2dfrom_2dc_cf5c1085_v );
DEFCSTRING( t12620, "EASY-FFI:UNSIGNED-FROM-C" );
EXTERNTSCPP( scrt4_c_2dunsigned_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2dunsigned_2dref_v );
DEFTSCP( asy_2dffi_ng_2dstars_fc382be5_v );
DEFCSTRING( t12621, "EASY-FFI:REMOVE-LEADING-STARS" );
EXTERNTSCPP( sc_string_2d_3esymbol, XAL1( TSCP ) );
EXTERNTSCP( sc_string_2d_3esymbol_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );
EXTERNTSCPP( scrt3_string_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2d_3elist_v );

TSCP  asy_2dffi_ng_2dstars_fc382be5( t12298 )
        TSCP  t12298;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t12621 );
        if  ( AND( EQ( TSCPTAG( t12298 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12298 ), SYMBOLTAG ) )
            )  goto L12624;
        scdebug_error( c12318, 
                       c12319, CONS( t12298, EMPTYLIST ) );
L12624:
        X4 = SYMBOL_NAME( t12298 );
        X3 = scrt3_string_2d_3elist( X4 );
        X4 = X3;
L12628:
        X5 = qobischeme_first( X4 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10770 ) ), 
                       CHARACTERTAG ) ) )  goto L12630;
        X6 = CONS( _TSCP( 10770 ), EMPTYLIST );
        scdebug_error( c12311, c12312, CONS( X5, X6 ) );
L12630:
        if  ( NEQ( _S2CINT( X5 ), 
                   _S2CINT( _TSCP( 10770 ) ) ) )  goto L12632;
        X4 = qobischeme_rest( X4 );
        GOBACK( L12628 );
L12632:
        X2 = X4;
        X1 = scrt3_list_2d_3estring( X2 );
        POPSTACKTRACE( sc_string_2d_3esymbol( X1 ) );
}

DEFTSCP( asy_2dffi_ng_2dstars_f1256bf1_v );
DEFCSTRING( t12634, "EASY-FFI:COUNT-LEADING-STARS" );
EXTERNTSCPP( easy_2dffi_l12325, XAL1( TSCP ) );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  easy_2dffi_l12325( c12327 )
        TSCP  c12327;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EASY-FFI:COUNT-LEADING-STARS]" );
        X1 = qobischeme_first( c12327 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10770 ) ), 
                       CHARACTERTAG ) ) )  goto L12643;
        X2 = CONS( _TSCP( 10770 ), EMPTYLIST );
        scdebug_error( c12311, c12312, CONS( X1, X2 ) );
L12643:
        if  ( NEQ( _S2CINT( X1 ), 
                   _S2CINT( _TSCP( 10770 ) ) ) )  goto L12645;
        X3 = qobischeme_rest( c12327 );
        X2 = easy_2dffi_l12325( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12648;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( X2 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) ) );
L12648:
        POPSTACKTRACE( scrt2__2b_2dtwo( X2, _TSCP( 4 ) ) );
L12645:
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  asy_2dffi_ng_2dstars_f1256bf1( t12321 )
        TSCP  t12321;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t12634 );
        if  ( AND( EQ( TSCPTAG( t12321 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12321 ), SYMBOLTAG ) )
            )  goto L12637;
        scdebug_error( c12318, 
                       c12319, CONS( t12321, EMPTYLIST ) );
L12637:
        X2 = SYMBOL_NAME( t12321 );
        X1 = scrt3_string_2d_3elist( X2 );
        POPSTACKTRACE( easy_2dffi_l12325( X1 ) );
}

DEFTSCP( asy_2dffi_ng_2dstars_b2b7822_v );
DEFCSTRING( t12650, "EASY-FFI:REMOVE-TRAILING-STARS" );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  asy_2dffi_ng_2dstars_b2b7822( t12345 )
        TSCP  t12345;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t12650 );
        if  ( AND( EQ( TSCPTAG( t12345 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12345 ), SYMBOLTAG ) )
            )  goto L12653;
        scdebug_error( c12318, 
                       c12319, CONS( t12345, EMPTYLIST ) );
L12653:
        X6 = SYMBOL_NAME( t12345 );
        X5 = scrt3_string_2d_3elist( X6 );
        X4 = scrt1_reverse( X5 );
        X5 = X4;
L12657:
        X6 = qobischeme_first( X5 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X6 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10770 ) ), 
                       CHARACTERTAG ) ) )  goto L12659;
        X7 = CONS( _TSCP( 10770 ), EMPTYLIST );
        scdebug_error( c12311, c12312, CONS( X6, X7 ) );
L12659:
        if  ( NEQ( _S2CINT( X6 ), 
                   _S2CINT( _TSCP( 10770 ) ) ) )  goto L12661;
        X5 = qobischeme_rest( X5 );
        GOBACK( L12657 );
L12661:
        X3 = X5;
        X2 = scrt1_reverse( X3 );
        X1 = scrt3_list_2d_3estring( X2 );
        POPSTACKTRACE( sc_string_2d_3esymbol( X1 ) );
}

DEFTSCP( asy_2dffi_ng_2dstars_11fcb11f_v );
DEFCSTRING( t12663, "EASY-FFI:COUNT-TRAILING-STARS" );
EXTERNTSCPP( easy_2dffi_l12367, XAL1( TSCP ) );

TSCP  easy_2dffi_l12367( c12369 )
        TSCP  c12369;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside EASY-FFI:COUNT-TRAILING-STARS]" );
        X1 = qobischeme_first( c12369 );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10770 ) ), 
                       CHARACTERTAG ) ) )  goto L12672;
        X2 = CONS( _TSCP( 10770 ), EMPTYLIST );
        scdebug_error( c12311, c12312, CONS( X1, X2 ) );
L12672:
        if  ( NEQ( _S2CINT( X1 ), 
                   _S2CINT( _TSCP( 10770 ) ) ) )  goto L12674;
        X3 = qobischeme_rest( c12369 );
        X2 = easy_2dffi_l12367( X3 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L12677;
        POPSTACKTRACE( _TSCP( IPLUS( _S2CINT( X2 ), 
                                     _S2CINT( _TSCP( 4 ) ) ) ) );
L12677:
        POPSTACKTRACE( scrt2__2b_2dtwo( X2, _TSCP( 4 ) ) );
L12674:
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  asy_2dffi_ng_2dstars_11fcb11f( t12363 )
        TSCP  t12363;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t12663 );
        if  ( AND( EQ( TSCPTAG( t12363 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12363 ), SYMBOLTAG ) )
            )  goto L12666;
        scdebug_error( c12318, 
                       c12319, CONS( t12363, EMPTYLIST ) );
L12666:
        X3 = SYMBOL_NAME( t12363 );
        X2 = scrt3_string_2d_3elist( X3 );
        X1 = scrt1_reverse( X2 );
        POPSTACKTRACE( easy_2dffi_l12367( X1 ) );
}

void scrt3__init();
void scdebug__init();
void qobischeme__init();
void scrt4__init();
void scrt1__init();
void scrt2__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt3__init();
        scdebug__init();
        qobischeme__init();
        scrt4__init();
        scrt1__init();
        scrt2__init();
        MAXDISPLAY( 5 );
}

void  easy_2dffi__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(easy_2dffi SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t12407, 
                       ADR( asy_2dffi_fi_2d1_2d0_8506d0f9_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      asy_2dffi_fi_2d1_2d0_8506d0f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12409, 
                       ADR( asy_2dffi_fi_2d3_2d0_ffc68399_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      asy_2dffi_fi_2d3_2d0_ffc68399, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12411, 
                       ADR( asy_2dffi_fi_2d5_2d0_70867639_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      asy_2dffi_fi_2d5_2d0_70867639, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12413, 
                       ADR( asy_2dffi_i_3ato_2dc_4737233d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      asy_2dffi_i_3ato_2dc_4737233d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12505, 
                       ADR( asy_2dffi_3afrom_2dc_d15f4f72_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      asy_2dffi_3afrom_2dc_d15f4f72, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12551, 
                       ADR( easy_2dffi_easy_2dffi_3afree_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      easy_2dffi_easy_2dffi_3afree, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12603, 
                       ADR( asy_2dffi_e_2dto_2dc_f497c900_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dbyte_2dset_21_v, 
                                                      _TSCP( 4 ) ) );
        INITIALIZEVAR( t12604, 
                       ADR( asy_2dffi_e_2dto_2dc_6e7b37fb_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2ddouble_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2ddouble_v ) );
        INITIALIZEVAR( t12605, 
                       ADR( asy_2dffi_t_2dto_2dc_61925e17_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dfloat_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2dfloat_v ) );
        INITIALIZEVAR( t12606, 
                       ADR( asy_2dffi_t_2dto_2dc_d3906c33_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dint_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2dint_v ) );
        INITIALIZEVAR( t12607, 
                       ADR( asy_2dffi_t_2dto_2dc_ca84e256_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dlongint_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2dlong_v ) );
        INITIALIZEVAR( t12608, 
                       ADR( asy_2dffi_d_2dto_2dc_5b40207f_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_d_2dset_21_2e97375c_v, 
                                                      scrt4_c_2dsizeof_2dlong_v ) );
        INITIALIZEVAR( t12609, 
                       ADR( asy_2dffi_t_2dto_2dc_2259710f_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dshortint_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2dshort_v ) );
        INITIALIZEVAR( t12610, 
                       ADR( asy_2dffi_d_2dto_2dc_d2401c08_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_d_2dset_21_828269c5_v, 
                                                      scrt4_c_2dsizeof_2dshort_v ) );
        INITIALIZEVAR( t12611, 
                       ADR( asy_2dffi_d_2dto_2dc_873bbbfe_v ), 
                       asy_2dffi_i_3ato_2dc_4737233d( scrt4_c_2dunsigned_2dset_21_v, 
                                                      scrt4_c_2dsizeof_2dint_v ) );
        INITIALIZEVAR( t12612, 
                       ADR( asy_2dffi_2dfrom_2dc_fb68bf0a_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dbyte_2dref_v, 
                                                      _TSCP( 4 ) ) );
        INITIALIZEVAR( t12613, 
                       ADR( asy_2dffi_2dfrom_2dc_5625c28b_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2ddouble_2dref_v, 
                                                      scrt4_c_2dsizeof_2ddouble_v ) );
        INITIALIZEVAR( t12614, 
                       ADR( asy_2dffi_2dfrom_2dc_9080a87e_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dfloat_2dref_v, 
                                                      scrt4_c_2dsizeof_2dfloat_v ) );
        INITIALIZEVAR( t12615, 
                       ADR( asy_2dffi_2dfrom_2dc_a9bfaa5a_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dint_2dref_v, 
                                                      scrt4_c_2dsizeof_2dint_v ) );
        INITIALIZEVAR( t12616, 
                       ADR( asy_2dffi_2dfrom_2dc_bb35828b_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dlongint_2dref_v, 
                                                      scrt4_c_2dsizeof_2dlong_v ) );
        INITIALIZEVAR( t12617, 
                       ADR( asy_2dffi_2dfrom_2dc_8a192f38_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dlongunsigned_2dref_v, 
                                                      scrt4_c_2dsizeof_2dlong_v ) );
        INITIALIZEVAR( t12618, 
                       ADR( asy_2dffi_2dfrom_2dc_b94a4eb5_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dshortint_2dref_v, 
                                                      scrt4_c_2dsizeof_2dshort_v ) );
        INITIALIZEVAR( t12619, 
                       ADR( asy_2dffi_2dfrom_2dc_c508358e_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dshortunsigned_2dref_v, 
                                                      scrt4_c_2dsizeof_2dshort_v ) );
        INITIALIZEVAR( t12620, 
                       ADR( asy_2dffi_2dfrom_2dc_cf5c1085_v ), 
                       asy_2dffi_3afrom_2dc_d15f4f72( scrt4_c_2dunsigned_2dref_v, 
                                                      scrt4_c_2dsizeof_2dint_v ) );
        INITIALIZEVAR( t12621, 
                       ADR( asy_2dffi_ng_2dstars_fc382be5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      asy_2dffi_ng_2dstars_fc382be5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12634, 
                       ADR( asy_2dffi_ng_2dstars_f1256bf1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      asy_2dffi_ng_2dstars_f1256bf1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12650, 
                       ADR( asy_2dffi_ng_2dstars_b2b7822_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      asy_2dffi_ng_2dstars_b2b7822, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12663, 
                       ADR( asy_2dffi_ng_2dstars_11fcb11f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      asy_2dffi_ng_2dstars_11fcb11f, 
                                      EMPTYLIST ) );
        return;
}
