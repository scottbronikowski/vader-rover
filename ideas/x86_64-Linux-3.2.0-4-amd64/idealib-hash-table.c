
/* SCHEME->C */

#include <objects.h>

void idealib_2dhash_2dtable__init();
DEFCSTRING( t13318, "hash-table-update!: no value exists for key" );
DEFSTATICTSCP( c13019 );
DEFCSTRING( t13319, "hash-table-ref: no value associated with" );
DEFSTATICTSCP( c12966 );
DEFCSTRING( t13320, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c12822 );
DEFSTATICTSCP( c12821 );
DEFCSTRING( t13321, "SET-HASH-TABLE-ENTRIES! error" );
DEFSTATICTSCP( c12508 );
DEFCSTRING( t13322, "HASH-TABLE-ENTRIES error" );
DEFSTATICTSCP( c12493 );
DEFCSTRING( t13323, "LOCAL-SET-HASH-TABLE-ENTRIES! error" );
DEFSTATICTSCP( c12489 );
DEFCSTRING( t13324, "SET-HASH-TABLE-ASSOCIATION-FUNCTION! error" );
DEFSTATICTSCP( c12473 );
DEFCSTRING( t13325, "HASH-TABLE-ASSOCIATION-FUNCTION error" );
DEFSTATICTSCP( c12458 );
DEFCSTRING( t13326, 
            "LOCAL-SET-HASH-TABLE-ASSOCIATION-FUNCTION! error" );
DEFSTATICTSCP( c12454 );
DEFCSTRING( t13327, "SET-HASH-TABLE-EQUIVALENCE-FUNCTION! error" );
DEFSTATICTSCP( c12438 );
DEFCSTRING( t13328, "HASH-TABLE-EQUIVALENCE-FUNCTION error" );
DEFSTATICTSCP( c12423 );
DEFCSTRING( t13329, 
            "LOCAL-SET-HASH-TABLE-EQUIVALENCE-FUNCTION! error" );
DEFSTATICTSCP( c12419 );
DEFCSTRING( t13330, "SET-HASH-TABLE-HASH-FUNCTION! error" );
DEFSTATICTSCP( c12403 );
DEFCSTRING( t13331, "HASH-TABLE-HASH-FUNCTION error" );
DEFSTATICTSCP( c12388 );
DEFCSTRING( t13332, "LOCAL-SET-HASH-TABLE-HASH-FUNCTION! error" );
DEFSTATICTSCP( c12384 );
DEFCSTRING( t13333, "SET-HASH-TABLE-SIZE! error" );
DEFSTATICTSCP( c12368 );
DEFCSTRING( t13334, "HASH-TABLE-SIZE error" );
DEFSTATICTSCP( c12353 );
DEFCSTRING( t13335, "LOCAL-SET-HASH-TABLE-SIZE! error" );
DEFSTATICTSCP( c12349 );
DEFSTATICTSCP( c12247 );
DEFSTATICTSCP( c12241 );
DEFSTATICTSCP( c12221 );
DEFCSTRING( t13336, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12209 );
DEFCSTRING( t13337, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12203 );
DEFSTATICTSCP( c12202 );
DEFCSTRING( t13338, "hash: procedures cannot be hashed" );
DEFSTATICTSCP( c12131 );
DEFCSTRING( t13339, "Argument is not a SYMBOL: ~s" );
DEFSTATICTSCP( c12049 );
DEFSTATICTSCP( c12048 );
DEFCSTRING( t13340, "Argument is out of range: ~s" );
DEFSTATICTSCP( c11992 );
DEFCSTRING( t13341, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c11991 );
DEFSTATICTSCP( c11990 );
DEFCSTRING( t13342, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c11969 );
DEFSTATICTSCP( c11968 );
DEFCSTRING( t13343, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c11962 );
DEFSTATICTSCP( c11961 );

static void  init_constants()
{
        c13019 = CSTRING_TSCP( t13318 );
        CONSTANTEXP( ADR( c13019 ) );
        c12966 = CSTRING_TSCP( t13319 );
        CONSTANTEXP( ADR( c12966 ) );
        c12822 = CSTRING_TSCP( t13320 );
        CONSTANTEXP( ADR( c12822 ) );
        c12821 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c12821 ) );
        c12508 = CSTRING_TSCP( t13321 );
        CONSTANTEXP( ADR( c12508 ) );
        c12493 = CSTRING_TSCP( t13322 );
        CONSTANTEXP( ADR( c12493 ) );
        c12489 = CSTRING_TSCP( t13323 );
        CONSTANTEXP( ADR( c12489 ) );
        c12473 = CSTRING_TSCP( t13324 );
        CONSTANTEXP( ADR( c12473 ) );
        c12458 = CSTRING_TSCP( t13325 );
        CONSTANTEXP( ADR( c12458 ) );
        c12454 = CSTRING_TSCP( t13326 );
        CONSTANTEXP( ADR( c12454 ) );
        c12438 = CSTRING_TSCP( t13327 );
        CONSTANTEXP( ADR( c12438 ) );
        c12423 = CSTRING_TSCP( t13328 );
        CONSTANTEXP( ADR( c12423 ) );
        c12419 = CSTRING_TSCP( t13329 );
        CONSTANTEXP( ADR( c12419 ) );
        c12403 = CSTRING_TSCP( t13330 );
        CONSTANTEXP( ADR( c12403 ) );
        c12388 = CSTRING_TSCP( t13331 );
        CONSTANTEXP( ADR( c12388 ) );
        c12384 = CSTRING_TSCP( t13332 );
        CONSTANTEXP( ADR( c12384 ) );
        c12368 = CSTRING_TSCP( t13333 );
        CONSTANTEXP( ADR( c12368 ) );
        c12353 = CSTRING_TSCP( t13334 );
        CONSTANTEXP( ADR( c12353 ) );
        c12349 = CSTRING_TSCP( t13335 );
        CONSTANTEXP( ADR( c12349 ) );
        c12247 = STRINGTOSYMBOL( CSTRING_TSCP( "HASH-TABLE" ) );
        CONSTANTEXP( ADR( c12247 ) );
        c12241 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c12241 ) );
        c12221 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12221 ) );
        c12209 = CSTRING_TSCP( t13336 );
        CONSTANTEXP( ADR( c12209 ) );
        c12203 = CSTRING_TSCP( t13337 );
        CONSTANTEXP( ADR( c12203 ) );
        c12202 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12202 ) );
        c12131 = CSTRING_TSCP( t13338 );
        CONSTANTEXP( ADR( c12131 ) );
        c12049 = CSTRING_TSCP( t13339 );
        CONSTANTEXP( ADR( c12049 ) );
        c12048 = STRINGTOSYMBOL( CSTRING_TSCP( "SYMBOL->STRING" ) );
        CONSTANTEXP( ADR( c12048 ) );
        c11992 = CSTRING_TSCP( t13340 );
        CONSTANTEXP( ADR( c11992 ) );
        c11991 = CSTRING_TSCP( t13341 );
        CONSTANTEXP( ADR( c11991 ) );
        c11990 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c11990 ) );
        c11969 = CSTRING_TSCP( t13342 );
        CONSTANTEXP( ADR( c11969 ) );
        c11968 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c11968 ) );
        c11962 = CSTRING_TSCP( t13343 );
        CONSTANTEXP( ADR( c11962 ) );
        c11961 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c11961 ) );
}

DEFTSCP( h_2dtable_2dbound_2a_506e6655_v );
DEFCSTRING( t13344, "*DEFAULT-BOUND*" );
EXTERNTSCPP( scrt2_expt, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_expt_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
DEFTSCP( h_2dtable_ing_2dhash_dcb7f4d4_v );
DEFCSTRING( t13348, "%STRING-HASH" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( scrt2_modulo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_modulo_v );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );

TSCP  h_2dtable_ing_2dhash_dcb7f4d4( s11927, c11928, b11929 )
        TSCP  s11927, c11928, b11929;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13348 );
        if  ( AND( EQ( TSCPTAG( s11927 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s11927 ), STRINGTAG ) )
            )  goto L13351;
        scdebug_error( c11990, 
                       c11991, CONS( s11927, EMPTYLIST ) );
L13351:
        X1 = C_FIXED( STRING_LENGTH( s11927 ) );
        X2 = _TSCP( 124 );
        X2 = CONS( X2, EMPTYLIST );
        X3 = _TSCP( 0 );
L13355:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L13357;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X1 ) ) )  goto L13361;
        goto L13362;
L13357:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X1 ) ) )  goto L13362;
L13361:
        POPSTACKTRACE( scrt2_modulo( PAIR_CAR( X2 ), b11929 ) );
L13362:
        X7 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 148 ) ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L13367;
        X6 = _TSCP( ITIMES( FIXED_C( _TSCP( 148 ) ), 
                            _S2CINT( X7 ) ) );
        goto L13368;
L13367:
        X6 = scrt2__2a_2dtwo( _TSCP( 148 ), X7 );
L13368:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L13370;
        scdebug_error( c11968, 
                       c11969, CONS( X3, EMPTYLIST ) );
L13370:
        X11 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X11 ) )  goto L13376;
        X12 = C_FIXED( STRING_LENGTH( s11927 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X12 ) ), 
                      3 ) )  goto L13380;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X12 ) ) )  goto L13376;
        goto L13387;
L13380:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X12 ) ) )  goto L13387;
L13376:
        scdebug_error( c11968, 
                       c11992, CONS( X3, EMPTYLIST ) );
L13387:
        X10 = C_CHAR( STRING_CHAR( s11927, X3 ) );
        X9 = c11928;
        X9 = UNKNOWNCALL( X9, 1 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                          PROCEDURE_CLOSURE( X9 ) );
        if  ( EQ( TSCPIMMEDIATETAG( X8 ), CHARACTERTAG ) )  goto L13389;
        scdebug_error( c11961, 
                       c11962, CONS( X8, EMPTYLIST ) );
L13389:
        X7 = CHAR_FIX( X8 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L13392;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), _S2CINT( X7 ) ) );
        goto L13393;
L13392:
        X5 = scrt2__2b_2dtwo( X6, X7 );
L13393:
        X4 = scrt2_modulo( X5, h_2dtable_2dbound_2a_506e6655_v );
        SETGEN( PAIR_CAR( X2 ), X4 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13394;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L13355 );
L13394:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
        GOBACK( L13355 );
}

DEFTSCP( h_2dtable_ing_2dhash_f311ca0d_v );
DEFCSTRING( t13396, "STRING-HASH" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  idealib_2dhash_2dtable_l12012( x12013, c13404 )
        TSCP  x12013, c13404;
{
        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l12012 [inside STRING-HASH]" );
        POPSTACKTRACE( x12013 );
}

TSCP  h_2dtable_ing_2dhash_f311ca0d( s12008, m12009 )
        TSCP  s12008, m12009;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13396 );
        if  ( NEQ( _S2CUINT( m12009 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13398;
        X1 = h_2dtable_2dbound_2a_506e6655_v;
        goto L13399;
L13398:
        if  ( EQ( TSCPTAG( m12009 ), PAIRTAG ) )  goto L13401;
        scrt1__24__car_2derror( m12009 );
L13401:
        X1 = PAIR_CAR( m12009 );
L13399:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dhash_2dtable_l12012, EMPTYLIST );
        POPSTACKTRACE( h_2dtable_ing_2dhash_dcb7f4d4( s12008, 
                                                      X2, X1 ) );
}

DEFTSCP( h_2dtable_dci_2dhash_abe320d2_v );
DEFCSTRING( t13406, "STRING-CI-HASH" );
EXTERNTSCPP( scrt3_char_2ddowncase, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2ddowncase_v );

TSCP  h_2dtable_dci_2dhash_abe320d2( s12025, m12026 )
        TSCP  s12025, m12026;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13406 );
        if  ( NEQ( _S2CUINT( m12026 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13408;
        X1 = h_2dtable_2dbound_2a_506e6655_v;
        goto L13409;
L13408:
        if  ( EQ( TSCPTAG( m12026 ), PAIRTAG ) )  goto L13411;
        scrt1__24__car_2derror( m12026 );
L13411:
        X1 = PAIR_CAR( m12026 );
L13409:
        POPSTACKTRACE( h_2dtable_ing_2dhash_dcb7f4d4( s12025, 
                                                      scrt3_char_2ddowncase_v, 
                                                      X1 ) );
}

DEFTSCP( h_2dtable_bol_2dhash_e241080c_v );
DEFCSTRING( t13413, "SYMBOL-HASH" );

TSCP  idealib_2dhash_2dtable_l12050( x12051, c13424 )
        TSCP  x12051, c13424;
{
        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l12050 [inside SYMBOL-HASH]" );
        POPSTACKTRACE( x12051 );
}

TSCP  h_2dtable_bol_2dhash_e241080c( s12040, m12041 )
        TSCP  s12040, m12041;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13413 );
        if  ( NEQ( _S2CUINT( m12041 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13415;
        X1 = h_2dtable_2dbound_2a_506e6655_v;
        goto L13416;
L13415:
        if  ( EQ( TSCPTAG( m12041 ), PAIRTAG ) )  goto L13418;
        scrt1__24__car_2derror( m12041 );
L13418:
        X1 = PAIR_CAR( m12041 );
L13416:
        if  ( AND( EQ( TSCPTAG( s12040 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12040 ), SYMBOLTAG ) )
            )  goto L13422;
        scdebug_error( c12048, 
                       c12049, CONS( s12040, EMPTYLIST ) );
L13422:
        X2 = SYMBOL_NAME( s12040 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dhash_2dtable_l12050, EMPTYLIST );
        POPSTACKTRACE( h_2dtable_ing_2dhash_dcb7f4d4( X2, X3, X1 ) );
}

DEFTSCP( idealib_2dhash_2dtable_hash_v );
DEFCSTRING( t13426, "HASH" );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );
EXTERNTSCPP( h_2dtable_tor_2dhash_e78be2d2, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( h_2dtable_tor_2dhash_e78be2d2_v );
EXTERNTSCPP( idealib_2dhash_2dtable_hash, XAL2( TSCP, TSCP ) );
EXTERNTSCP( idealib_2dhash_2dtable_hash_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );

TSCP  idealib_2dhash_2dtable_hash( o12063, m12064 )
        TSCP  o12063, m12064;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13426 );
        if  ( NEQ( _S2CUINT( m12064 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13428;
        X1 = h_2dtable_2dbound_2a_506e6655_v;
        goto L13429;
L13428:
        if  ( EQ( TSCPTAG( m12064 ), PAIRTAG ) )  goto L13431;
        scrt1__24__car_2derror( m12064 );
L13431:
        X1 = PAIR_CAR( m12064 );
L13429:
        X2 = BOOLEAN( EQ( TSCPTAG( o12063 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L13438;
        if  ( NOT( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12063 ), 
                            DOUBLEFLOATTAG ) ) ) )  goto L13452;
        X3 = scrt2_round( o12063 );
        if  ( BITAND( BITOR( _S2CINT( o12063 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L13444;
        if  ( EQ( _S2CUINT( o12063 ), _S2CUINT( X3 ) ) )  goto L13438;
        goto L13452;
L13444:
        if  ( TRUE( scrt2__3d_2dtwo( o12063, X3 ) ) )  goto L13438;
L13452:
        if  ( NOT( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12063 ), 
                            STRINGTAG ) ) ) )  goto L13453;
        POPSTACKTRACE( h_2dtable_ing_2dhash_f311ca0d( o12063, 
                                                      CONS( X1, 
                                                            EMPTYLIST ) ) );
L13453:
        if  ( NOT( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12063 ), 
                            SYMBOLTAG ) ) ) )  goto L13455;
        POPSTACKTRACE( h_2dtable_bol_2dhash_e241080c( o12063, 
                                                      CONS( X1, 
                                                            EMPTYLIST ) ) );
L13455:
        X2 = BOOLEAN( EQ( TSCPTAG( o12063 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L13461;
        if  ( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( o12063 ), 
                       DOUBLEFLOATTAG ) ) )  goto L13461;
        if  ( NEQ( TSCPTAG( o12063 ), FIXNUMTAG ) )  goto L13464;
        X3 = TRUEVALUE;
        goto L13465;
L13464:
        X3 = BOOLEAN( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                           EQ( TSCP_EXTENDEDTAG( o12063 ), 
                               DOUBLEFLOATTAG ) ) );
L13465:
        if  ( TRUE( X3 ) )  goto L13467;
        if  ( NEQ( TSCPIMMEDIATETAG( o12063 ), CHARACTERTAG )
            )  goto L13469;
        X4 = CHAR_FIX( o12063 );
        POPSTACKTRACE( scrt2_modulo( X4, X1 ) );
L13469:
        if  ( NOT( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12063 ), 
                            VECTORTAG ) ) ) )  goto L13472;
        POPSTACKTRACE( h_2dtable_tor_2dhash_e78be2d2( o12063, X1 ) );
L13472:
        if  ( NEQ( TSCPTAG( o12063 ), PAIRTAG ) )  goto L13474;
        X6 = PAIR_CAR( o12063 );
        X5 = idealib_2dhash_2dtable_hash( X6, EMPTYLIST );
        X8 = PAIR_CDR( o12063 );
        X7 = idealib_2dhash_2dtable_hash( X8, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 12 ) ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L13479;
        X6 = _TSCP( ITIMES( FIXED_C( _TSCP( 12 ) ), 
                            _S2CINT( X7 ) ) );
        goto L13480;
L13479:
        X6 = scrt2__2a_2dtwo( _TSCP( 12 ), X7 );
L13480:
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L13482;
        X4 = _TSCP( IPLUS( _S2CINT( X5 ), _S2CINT( X6 ) ) );
        goto L13483;
L13482:
        X4 = scrt2__2b_2dtwo( X5, X6 );
L13483:
        POPSTACKTRACE( scrt2_modulo( X4, X1 ) );
L13474:
        if  ( EQ( _S2CUINT( o12063 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L13484;
        if  ( FALSE( o12063 ) )  goto L13486;
        if  ( NOT( AND( EQ( TSCPTAG( o12063 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12063 ), 
                            PROCEDURETAG ) ) ) )  goto L13488;
        POPSTACKTRACE( scdebug_error( c12131, o12063, EMPTYLIST ) );
L13488:
        POPSTACKTRACE( _TSCP( 4 ) );
L13486:
        POPSTACKTRACE( _TSCP( 0 ) );
L13484:
        POPSTACKTRACE( _TSCP( 0 ) );
L13467:
        POPSTACKTRACE( X3 );
L13461:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
L13438:
        POPSTACKTRACE( scrt2_modulo( o12063, X1 ) );
}

DEFTSCP( h_2dtable_2didentity_85a84b18_v );
DEFCSTRING( t13490, "HASH-BY-IDENTITY" );
DEFTSCP( h_2dtable_tor_2dhash_e78be2d2_v );
DEFCSTRING( t13491, "VECTOR-HASH" );

TSCP  h_2dtable_tor_2dhash_e78be2d2( v12168, b12169 )
        TSCP  v12168, b12169;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13491 );
        if  ( AND( EQ( TSCPTAG( v12168 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v12168 ), VECTORTAG ) )
            )  goto L13494;
        scdebug_error( c12221, 
                       c12203, CONS( v12168, EMPTYLIST ) );
L13494:
        X1 = C_FIXED( VECTOR_LENGTH( v12168 ) );
        X2 = _TSCP( 2284 );
        X2 = CONS( X2, EMPTYLIST );
        X3 = _TSCP( 0 );
L13498:
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L13500;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X1 ) ) )  goto L13504;
        goto L13505;
L13500:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X1 ) ) )  goto L13505;
L13504:
        POPSTACKTRACE( scrt2_modulo( PAIR_CAR( X2 ), b12169 ) );
L13505:
        X7 = PAIR_CAR( X2 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 1028 ) ), 
                             _S2CINT( X7 ) ), 
                      3 ) )  goto L13510;
        X6 = _TSCP( ITIMES( FIXED_C( _TSCP( 1028 ) ), 
                            _S2CINT( X7 ) ) );
        goto L13511;
L13510:
        X6 = scrt2__2a_2dtwo( _TSCP( 1028 ), X7 );
L13511:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L13513;
        scdebug_error( c12202, 
                       c11969, CONS( X3, EMPTYLIST ) );
L13513:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v12168 ) ) ) )  goto L13515;
        scdebug_error( c12202, 
                       c12209, CONS( X3, EMPTYLIST ) );
L13515:
        X8 = VECTOR_ELEMENT( v12168, X3 );
        X7 = idealib_2dhash_2dtable_hash( X8, EMPTYLIST );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L13518;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), _S2CINT( X7 ) ) );
        goto L13519;
L13518:
        X5 = scrt2__2b_2dtwo( X6, X7 );
L13519:
        X4 = scrt2_modulo( X5, h_2dtable_2dbound_2a_506e6655_v );
        SETGEN( PAIR_CAR( X2 ), X4 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13520;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L13498 );
L13520:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
        GOBACK( L13498 );
}

DEFTSCP( h_2dtable_ash_2dnode_55913c4f_v );
DEFCSTRING( t13522, "%MAKE-HASH-NODE" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
DEFTSCP( h_2dtable_2dvalue_21_644a0987_v );
DEFCSTRING( t13523, "%HASH-NODE-SET-VALUE!" );
EXTERNTSCPP( scrt1_set_2dcdr_21, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_set_2dcdr_21_v );
DEFTSCP( h_2dtable_node_2dkey_11f21b52_v );
DEFCSTRING( t13524, "%HASH-NODE-KEY" );
EXTERNTSCPP( scrt1_car, XAL1( TSCP ) );
EXTERNTSCP( scrt1_car_v );
DEFTSCP( h_2dtable_de_2dvalue_60875a53_v );
DEFCSTRING( t13525, "%HASH-NODE-VALUE" );
EXTERNTSCPP( scrt1_cdr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdr_v );
DEFTSCP( h_2dtable_sh_2dtable_b41f6b05_v );
DEFCSTRING( t13526, "MAKE-HASH-TABLE" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );

TSCP  h_2dtable_sh_2dtable_b41f6b05( s12228, 
                                     h12229, 
                                     e12230, a12231, e12232 )
        TSCP  s12228, h12229, e12230, a12231, e12232;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13526 );
        X1 = sc_make_2dvector( _TSCP( 24 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L13530;
        scdebug_error( c12241, 
                       c12203, CONS( X1, EMPTYLIST ) );
L13530:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L13532;
        scdebug_error( c12241, 
                       c11969, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13532:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13534;
        scdebug_error( c12241, 
                       c12209, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13534:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12247 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13537;
        scdebug_error( c12241, 
                       c11969, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13537:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13539;
        scdebug_error( c12241, 
                       c12209, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13539:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), s12228 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13542;
        scdebug_error( c12241, 
                       c11969, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13542:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13544;
        scdebug_error( c12241, 
                       c12209, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13544:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), h12229 );
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13547;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13547:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13549;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13549:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 12 ) ), e12230 );
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13552;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13552:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13554;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13554:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 16 ) ), a12231 );
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13557;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13557:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13559;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13559:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 20 ) ), e12232 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( h_2dtable_2dtable_3f_a3b8666_v );
DEFCSTRING( t13561, "HASH-TABLE?" );

TSCP  h_2dtable_2dtable_3f_a3b8666( o12308 )
        TSCP  o12308;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13561 );
        if  ( NOT( AND( EQ( TSCPTAG( o12308 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12308 ), 
                            VECTORTAG ) ) ) )  goto L13563;
        X2 = C_FIXED( VECTOR_LENGTH( o12308 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 24 ) ) ), 
                      3 ) )  goto L13567;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 24 ) ) ) );
        goto L13568;
L13567:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 24 ) );
L13568:
        if  ( FALSE( X1 ) )  goto L13570;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L13573;
        scdebug_error( c12202, 
                       c11969, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13573:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12308 ) ) ) )  goto L13575;
        scdebug_error( c12202, 
                       c12209, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13575:
        X2 = VECTOR_ELEMENT( o12308, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12247 ) ) ) );
L13570:
        POPSTACKTRACE( X1 );
L13563:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( h_2dtable__2dsize_21_a6c2a89b_v );
DEFCSTRING( t13577, "LOCAL-SET-HASH-TABLE-SIZE!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  h_2dtable__2dsize_21_a6c2a89b( t12347, o12348 )
        TSCP  t12347, o12348;
{
        PUSHSTACKTRACE( t13577 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12347 ) ) )  goto L13579;
        qobischeme_panic( c12349, EMPTYLIST );
L13579:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12347, 
                                                      _TSCP( 4 ), 
                                                      o12348 ) );
}

DEFTSCP( h_2dtable_ble_2dsize_408ab278_v );
DEFCSTRING( t13581, "HASH-TABLE-SIZE" );

TSCP  h_2dtable_ble_2dsize_408ab278( t12352 )
        TSCP  t12352;
{
        PUSHSTACKTRACE( t13581 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12352 ) ) )  goto L13583;
        qobischeme_panic( c12353, EMPTYLIST );
L13583:
        if  ( AND( EQ( TSCPTAG( t12352 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12352 ), VECTORTAG ) )
            )  goto L13586;
        scdebug_error( c12202, 
                       c12203, CONS( t12352, EMPTYLIST ) );
L13586:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13588;
        scdebug_error( c12202, 
                       c11969, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13588:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12352 ) ) ) )  goto L13590;
        scdebug_error( c12202, 
                       c12209, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13590:
        POPSTACKTRACE( VECTOR_ELEMENT( t12352, _TSCP( 4 ) ) );
}

DEFTSCP( h_2dtable__2dsize_21_4d9e5095_v );
DEFCSTRING( t13592, "SET-HASH-TABLE-SIZE!" );

TSCP  h_2dtable__2dsize_21_4d9e5095( t12366, o12367 )
        TSCP  t12366, o12367;
{
        PUSHSTACKTRACE( t13592 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12366 ) ) )  goto L13594;
        qobischeme_panic( c12368, EMPTYLIST );
L13594:
        if  ( AND( EQ( TSCPTAG( t12366 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12366 ), VECTORTAG ) )
            )  goto L13597;
        scdebug_error( c12241, 
                       c12203, CONS( t12366, EMPTYLIST ) );
L13597:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13599;
        scdebug_error( c12241, 
                       c11969, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13599:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12366 ) ) ) )  goto L13601;
        scdebug_error( c12241, 
                       c12209, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13601:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12366, _TSCP( 4 ) ), 
                               o12367 ) );
}

DEFTSCP( h_2dtable_unction_21_44aed0df_v );
DEFCSTRING( t13603, "LOCAL-SET-HASH-TABLE-HASH-FUNCTION!" );

TSCP  h_2dtable_unction_21_44aed0df( t12382, o12383 )
        TSCP  t12382, o12383;
{
        PUSHSTACKTRACE( t13603 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12382 ) ) )  goto L13605;
        qobischeme_panic( c12384, EMPTYLIST );
L13605:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12382, 
                                                      _TSCP( 8 ), 
                                                      o12383 ) );
}

DEFTSCP( h_2dtable_2dfunction_8db2ee14_v );
DEFCSTRING( t13607, "HASH-TABLE-HASH-FUNCTION" );

TSCP  h_2dtable_2dfunction_8db2ee14( t12387 )
        TSCP  t12387;
{
        PUSHSTACKTRACE( t13607 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12387 ) ) )  goto L13609;
        qobischeme_panic( c12388, EMPTYLIST );
L13609:
        if  ( AND( EQ( TSCPTAG( t12387 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12387 ), VECTORTAG ) )
            )  goto L13612;
        scdebug_error( c12202, 
                       c12203, CONS( t12387, EMPTYLIST ) );
L13612:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13614;
        scdebug_error( c12202, 
                       c11969, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13614:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12387 ) ) ) )  goto L13616;
        scdebug_error( c12202, 
                       c12209, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13616:
        POPSTACKTRACE( VECTOR_ELEMENT( t12387, _TSCP( 8 ) ) );
}

DEFTSCP( h_2dtable_unction_21_5f9fbce1_v );
DEFCSTRING( t13618, "SET-HASH-TABLE-HASH-FUNCTION!" );

TSCP  h_2dtable_unction_21_5f9fbce1( t12401, o12402 )
        TSCP  t12401, o12402;
{
        PUSHSTACKTRACE( t13618 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12401 ) ) )  goto L13620;
        qobischeme_panic( c12403, EMPTYLIST );
L13620:
        if  ( AND( EQ( TSCPTAG( t12401 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12401 ), VECTORTAG ) )
            )  goto L13623;
        scdebug_error( c12241, 
                       c12203, CONS( t12401, EMPTYLIST ) );
L13623:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13625;
        scdebug_error( c12241, 
                       c11969, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13625:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12401 ) ) ) )  goto L13627;
        scdebug_error( c12241, 
                       c12209, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13627:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12401, _TSCP( 8 ) ), 
                               o12402 ) );
}

DEFTSCP( h_2dtable_unction_21_e063f95_v );
DEFCSTRING( t13629, "LOCAL-SET-HASH-TABLE-EQUIVALENCE-FUNCTION!" );

TSCP  h_2dtable_unction_21_e063f95( t12417, o12418 )
        TSCP  t12417, o12418;
{
        PUSHSTACKTRACE( t13629 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12417 ) ) )  goto L13631;
        qobischeme_panic( c12419, EMPTYLIST );
L13631:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12417, 
                                                      _TSCP( 12 ), 
                                                      o12418 ) );
}

DEFTSCP( h_2dtable_2dfunction_73c889c9_v );
DEFCSTRING( t13633, "HASH-TABLE-EQUIVALENCE-FUNCTION" );

TSCP  h_2dtable_2dfunction_73c889c9( t12422 )
        TSCP  t12422;
{
        PUSHSTACKTRACE( t13633 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12422 ) ) )  goto L13635;
        qobischeme_panic( c12423, EMPTYLIST );
L13635:
        if  ( AND( EQ( TSCPTAG( t12422 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12422 ), VECTORTAG ) )
            )  goto L13638;
        scdebug_error( c12202, 
                       c12203, CONS( t12422, EMPTYLIST ) );
L13638:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13640;
        scdebug_error( c12202, 
                       c11969, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13640:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12422 ) ) ) )  goto L13642;
        scdebug_error( c12202, 
                       c12209, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13642:
        POPSTACKTRACE( VECTOR_ELEMENT( t12422, _TSCP( 12 ) ) );
}

DEFTSCP( h_2dtable_unction_21_92356f13_v );
DEFCSTRING( t13644, "SET-HASH-TABLE-EQUIVALENCE-FUNCTION!" );

TSCP  h_2dtable_unction_21_92356f13( t12436, o12437 )
        TSCP  t12436, o12437;
{
        PUSHSTACKTRACE( t13644 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12436 ) ) )  goto L13646;
        qobischeme_panic( c12438, EMPTYLIST );
L13646:
        if  ( AND( EQ( TSCPTAG( t12436 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12436 ), VECTORTAG ) )
            )  goto L13649;
        scdebug_error( c12241, 
                       c12203, CONS( t12436, EMPTYLIST ) );
L13649:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13651;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13651:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12436 ) ) ) )  goto L13653;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13653:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12436, _TSCP( 12 ) ), 
                               o12437 ) );
}

DEFTSCP( h_2dtable_unction_21_4739a15b_v );
DEFCSTRING( t13655, "LOCAL-SET-HASH-TABLE-ASSOCIATION-FUNCTION!" );

TSCP  h_2dtable_unction_21_4739a15b( t12452, o12453 )
        TSCP  t12452, o12453;
{
        PUSHSTACKTRACE( t13655 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12452 ) ) )  goto L13657;
        qobischeme_panic( c12454, EMPTYLIST );
L13657:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12452, 
                                                      _TSCP( 16 ), 
                                                      o12453 ) );
}

DEFTSCP( h_2dtable_2dfunction_842d4ed8_v );
DEFCSTRING( t13659, "HASH-TABLE-ASSOCIATION-FUNCTION" );

TSCP  h_2dtable_2dfunction_842d4ed8( t12457 )
        TSCP  t12457;
{
        PUSHSTACKTRACE( t13659 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12457 ) ) )  goto L13661;
        qobischeme_panic( c12458, EMPTYLIST );
L13661:
        if  ( AND( EQ( TSCPTAG( t12457 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12457 ), VECTORTAG ) )
            )  goto L13664;
        scdebug_error( c12202, 
                       c12203, CONS( t12457, EMPTYLIST ) );
L13664:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13666;
        scdebug_error( c12202, 
                       c11969, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13666:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12457 ) ) ) )  goto L13668;
        scdebug_error( c12202, 
                       c12209, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13668:
        POPSTACKTRACE( VECTOR_ELEMENT( t12457, _TSCP( 16 ) ) );
}

DEFTSCP( h_2dtable_unction_21_db0af1dd_v );
DEFCSTRING( t13670, "SET-HASH-TABLE-ASSOCIATION-FUNCTION!" );

TSCP  h_2dtable_unction_21_db0af1dd( t12471, o12472 )
        TSCP  t12471, o12472;
{
        PUSHSTACKTRACE( t13670 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12471 ) ) )  goto L13672;
        qobischeme_panic( c12473, EMPTYLIST );
L13672:
        if  ( AND( EQ( TSCPTAG( t12471 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12471 ), VECTORTAG ) )
            )  goto L13675;
        scdebug_error( c12241, 
                       c12203, CONS( t12471, EMPTYLIST ) );
L13675:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13677;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13677:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12471 ) ) ) )  goto L13679;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13679:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12471, _TSCP( 16 ) ), 
                               o12472 ) );
}

DEFTSCP( h_2dtable_entries_21_a993b4c5_v );
DEFCSTRING( t13681, "LOCAL-SET-HASH-TABLE-ENTRIES!" );

TSCP  h_2dtable_entries_21_a993b4c5( t12487, o12488 )
        TSCP  t12487, o12488;
{
        PUSHSTACKTRACE( t13681 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12487 ) ) )  goto L13683;
        qobischeme_panic( c12489, EMPTYLIST );
L13683:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12487, 
                                                      _TSCP( 20 ), 
                                                      o12488 ) );
}

DEFTSCP( h_2dtable__2dentries_7c09986c_v );
DEFCSTRING( t13685, "HASH-TABLE-ENTRIES" );

TSCP  h_2dtable__2dentries_7c09986c( t12492 )
        TSCP  t12492;
{
        PUSHSTACKTRACE( t13685 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12492 ) ) )  goto L13687;
        qobischeme_panic( c12493, EMPTYLIST );
L13687:
        if  ( AND( EQ( TSCPTAG( t12492 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12492 ), VECTORTAG ) )
            )  goto L13690;
        scdebug_error( c12202, 
                       c12203, CONS( t12492, EMPTYLIST ) );
L13690:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13692;
        scdebug_error( c12202, 
                       c11969, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13692:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12492 ) ) ) )  goto L13694;
        scdebug_error( c12202, 
                       c12209, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13694:
        POPSTACKTRACE( VECTOR_ELEMENT( t12492, _TSCP( 20 ) ) );
}

DEFTSCP( h_2dtable_entries_21_1db5ef4e_v );
DEFCSTRING( t13696, "SET-HASH-TABLE-ENTRIES!" );

TSCP  h_2dtable_entries_21_1db5ef4e( t12506, o12507 )
        TSCP  t12506, o12507;
{
        PUSHSTACKTRACE( t13696 );
        if  ( TRUE( h_2dtable_2dtable_3f_a3b8666( t12506 ) ) )  goto L13698;
        qobischeme_panic( c12508, EMPTYLIST );
L13698:
        if  ( AND( EQ( TSCPTAG( t12506 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12506 ), VECTORTAG ) )
            )  goto L13701;
        scdebug_error( c12241, 
                       c12203, CONS( t12506, EMPTYLIST ) );
L13701:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13703;
        scdebug_error( c12241, 
                       c11969, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13703:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12506 ) ) ) )  goto L13705;
        scdebug_error( c12241, 
                       c12209, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13705:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12506, _TSCP( 20 ) ), 
                               o12507 ) );
}

DEFTSCP( h_2dtable__2dsize_2a_bea91a14_v );
DEFCSTRING( t13707, "*DEFAULT-TABLE-SIZE*" );
DEFTSCP( h_2dtable_tion_2dfor_e2aa786_v );
DEFCSTRING( t13708, "APPROPRIATE-HASH-FUNCTION-FOR" );
EXTERNTSCPP( scrt1_eq_3f, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt1_eq_3f_v );
EXTERNTSCPP( scrt3_string_3d_3f, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_string_3d_3f_v );
EXTERNTSCPP( scrt3_string_2dci_3d_3f, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_string_2dci_3d_3f_v );

TSCP  h_2dtable_tion_2dfor_e2aa786( c12524 )
        TSCP  c12524;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13708 );
        if  ( NEQ( _S2CUINT( c12524 ), 
                   _S2CUINT( scrt1_eq_3f_v ) ) )  goto L13710;
        X1 = h_2dtable_2didentity_85a84b18_v;
        goto L13711;
L13710:
        X1 = FALSEVALUE;
L13711:
        if  ( TRUE( X1 ) )  goto L13713;
        if  ( NEQ( _S2CUINT( c12524 ), 
                   _S2CUINT( scrt3_string_3d_3f_v ) ) )  goto L13715;
        X2 = h_2dtable_ing_2dhash_f311ca0d_v;
        goto L13716;
L13715:
        X2 = FALSEVALUE;
L13716:
        if  ( TRUE( X2 ) )  goto L13718;
        if  ( NEQ( _S2CUINT( c12524 ), 
                   _S2CUINT( scrt3_string_2dci_3d_3f_v ) ) )  goto L13720;
        X3 = h_2dtable_dci_2dhash_abe320d2_v;
        goto L13721;
L13720:
        X3 = FALSEVALUE;
L13721:
        if  ( TRUE( X3 ) )  goto L13723;
        POPSTACKTRACE( idealib_2dhash_2dtable_hash_v );
L13723:
        POPSTACKTRACE( X3 );
L13718:
        POPSTACKTRACE( X2 );
L13713:
        POPSTACKTRACE( X1 );
}

DEFTSCP( h_2dtable_sh_2dtable_7d5bc92_v );
DEFCSTRING( t13725, "CREATE-HASH-TABLE" );
EXTERNTSCPP( scrt1_equal_3f, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );
EXTERNTSCPP( scrt1_assq, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assq_v );
EXTERNTSCPP( scrt1_eqv_3f, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt1_eqv_3f_v );
EXTERNTSCPP( scrt1_assv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assv_v );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );

TSCP  idealib_2dhash_2dtable_a12603( v12605, a12606, c13783 )
        TSCP  v12605, a12606, c13783;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "ASSOCIATE [inside CREATE-HASH-TABLE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13783, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13783, 1 );
L13784:
        if  ( NEQ( _S2CUINT( a12606 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13785;
        X3 = FALSEVALUE;
        goto L13788;
L13785:
        if  ( EQ( TSCPTAG( a12606 ), PAIRTAG ) )  goto L13790;
        scrt1__24__car_2derror( a12606 );
L13790:
        X6 = PAIR_CAR( a12606 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L13793;
        scrt1__24__car_2derror( X6 );
L13793:
        X5 = PAIR_CAR( X6 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( v12605, 
                                                  X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L13787;
        X3 = PAIR_CAR( a12606 );
        goto L13788;
L13787:
        if  ( EQ( TSCPTAG( a12606 ), PAIRTAG ) )  goto L13797;
        scrt1__24__cdr_2derror( a12606 );
L13797:
        a12606 = PAIR_CDR( a12606 );
        GOBACK( L13784 );
L13788:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  h_2dtable_sh_2dtable_7d5bc92( a12560 )
        TSCP  a12560;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13725 );
        if  ( NEQ( _S2CUINT( a12560 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13727;
        DISPLAY( 0 ) = scrt1_equal_3f_v;
        goto L13728;
L13727:
        if  ( EQ( TSCPTAG( a12560 ), PAIRTAG ) )  goto L13730;
        scrt1__24__car_2derror( a12560 );
L13730:
        DISPLAY( 0 ) = PAIR_CAR( a12560 );
L13728:
        X2 = BOOLEAN( EQ( _S2CUINT( a12560 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X2 ) )  goto L13737;
        if  ( EQ( TSCPTAG( a12560 ), PAIRTAG ) )  goto L13741;
        scrt1__24__cdr_2derror( a12560 );
L13741:
        X3 = PAIR_CDR( a12560 );
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13737;
        if  ( EQ( TSCPTAG( a12560 ), PAIRTAG ) )  goto L13744;
        scrt1__24__cdr_2derror( a12560 );
L13744:
        X3 = PAIR_CDR( a12560 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13747;
        scrt1__24__car_2derror( X3 );
L13747:
        X1 = PAIR_CAR( X3 );
        goto L13749;
L13737:
        X1 = h_2dtable_tion_2dfor_e2aa786( DISPLAY( 0 ) );
L13749:
        if  ( NEQ( _S2CUINT( a12560 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13751;
        X2 = h_2dtable__2dsize_2a_bea91a14_v;
        goto L13759;
L13751:
        if  ( EQ( TSCPTAG( a12560 ), PAIRTAG ) )  goto L13756;
        scrt1__24__cdr_2derror( a12560 );
L13756:
        X3 = PAIR_CDR( a12560 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13753;
        X2 = h_2dtable__2dsize_2a_bea91a14_v;
        goto L13759;
L13753:
        if  ( EQ( TSCPTAG( a12560 ), PAIRTAG ) )  goto L13761;
        scrt1__24__cdr_2derror( a12560 );
L13761:
        X4 = PAIR_CDR( a12560 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13764;
        scrt1__24__cdr_2derror( X4 );
L13764:
        X3 = PAIR_CDR( X4 );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13758;
        X2 = h_2dtable__2dsize_2a_bea91a14_v;
        goto L13759;
L13758:
        X2 = scrt1_caddr( a12560 );
L13759:
        if  ( NEQ( _S2CUINT( DISPLAY( 0 ) ), 
                   _S2CUINT( scrt1_eq_3f_v ) ) )  goto L13767;
        X4 = scrt1_assq_v;
        goto L13768;
L13767:
        X4 = FALSEVALUE;
L13768:
        if  ( FALSE( X4 ) )  goto L13770;
        X3 = X4;
        goto L13781;
L13770:
        if  ( NEQ( _S2CUINT( DISPLAY( 0 ) ), 
                   _S2CUINT( scrt1_eqv_3f_v ) ) )  goto L13772;
        X5 = scrt1_assv_v;
        goto L13773;
L13772:
        X5 = FALSEVALUE;
L13773:
        if  ( FALSE( X5 ) )  goto L13775;
        X3 = X5;
        goto L13781;
L13775:
        if  ( NEQ( _S2CUINT( DISPLAY( 0 ) ), 
                   _S2CUINT( scrt1_equal_3f_v ) ) )  goto L13777;
        X6 = scrt1_assoc_v;
        goto L13778;
L13777:
        X6 = FALSEVALUE;
L13778:
        if  ( FALSE( X6 ) )  goto L13780;
        X3 = X6;
        goto L13781;
L13780:
        DISPLAY( 1 ) = _TSCP( 0 );
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X7 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dhash_2dtable_a12603, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X7 );
        X3 = PAIR_CAR( DISPLAY( 1 ) );
L13781:
        X4 = sc_make_2dvector( X2, 
                               CONS( EMPTYLIST, EMPTYLIST ) );
        SDVAL = h_2dtable_sh_2dtable_b41f6b05( _TSCP( 0 ), 
                                               X1, 
                                               DISPLAY( 0 ), 
                                               X3, X4 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_le_2dmaker_f6329815_v );
DEFCSTRING( t13800, "MAKE-HASH-TABLE-MAKER" );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );

TSCP  idealib_2dhash_2dtable_l12708( a12709, c13802 )
        TSCP  a12709, c13802;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l12708 [inside MAKE-HASH-TAB\
LE-MAKER]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13802, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13802, 1 );
        X5 = sc_cons( DISPLAY( 1 ), a12709 );
        X4 = sc_cons( DISPLAY( 0 ), X5 );
        X3 = sc_apply_2dtwo( h_2dtable_sh_2dtable_7d5bc92_v, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  h_2dtable_le_2dmaker_f6329815( c12706, h12707 )
        TSCP  c12706, h12707;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13800 );
        DISPLAY( 0 ) = c12706;
        DISPLAY( 1 ) = h12707;
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               idealib_2dhash_2dtable_l12708, 
                               MAKECLOSURE( EMPTYLIST, 
                                            2, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_sh_2dtable_b166c25b_v );
DEFCSTRING( t13804, "MAKE-SYMBOL-HASH-TABLE" );
DEFTSCP( h_2dtable_sh_2dtable_7740faa2_v );
DEFCSTRING( t13805, "MAKE-STRING-HASH-TABLE" );
DEFTSCP( h_2dtable_sh_2dtable_92eccbd4_v );
DEFCSTRING( t13806, "MAKE-STRING-CI-HASH-TABLE" );
DEFTSCP( h_2dtable_sh_2dtable_8b5b40f0_v );
DEFCSTRING( t13807, "MAKE-INTEGER-HASH-TABLE" );
EXTERNTSCPP( scrt2__3d, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_v );
DEFTSCP( h_2dtable_ble_2dhash_16c3f8ae_v );
DEFCSTRING( t13808, "%HASH-TABLE-HASH" );

TSCP  h_2dtable_ble_2dhash_16c3f8ae( h12716, k12717 )
        TSCP  h12716, k12717;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13808 );
        X3 = h_2dtable__2dentries_7c09986c( h12716 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L13811;
        scdebug_error( c12221, 
                       c12203, CONS( X3, EMPTYLIST ) );
L13811:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        X1 = h_2dtable_2dfunction_8db2ee14( h12716 );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( k12717, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( h_2dtable_ble_2dfind_ed5fe12_v );
DEFCSTRING( t13813, "%HASH-TABLE-FIND" );

TSCP  h_2dtable_ble_2dfind_ed5fe12( e12724, 
                                    a12725, h12726, k12727 )
        TSCP  e12724, a12725, h12726, k12727;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13813 );
        if  ( AND( EQ( TSCPTAG( e12724 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e12724 ), VECTORTAG ) )
            )  goto L13816;
        scdebug_error( c12202, 
                       c12203, CONS( e12724, EMPTYLIST ) );
L13816:
        if  ( EQ( TSCPTAG( h12726 ), FIXNUMTAG ) )  goto L13818;
        scdebug_error( c12202, 
                       c11969, CONS( h12726, EMPTYLIST ) );
L13818:
        if  ( LT( _S2CUINT( FIXED_C( h12726 ) ), 
                  _S2CUINT( VECTOR_LENGTH( e12724 ) ) ) )  goto L13820;
        scdebug_error( c12202, 
                       c12209, CONS( h12726, EMPTYLIST ) );
L13820:
        X2 = VECTOR_ELEMENT( e12724, h12726 );
        X1 = a12725;
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( k12727, 
                                                    X2, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

DEFTSCP( h_2dtable_e_2dadd_21_3c49eb4a_v );
DEFCSTRING( t13822, "%HASH-TABLE-ADD!" );

TSCP  h_2dtable_e_2dadd_21_3c49eb4a( e12740, 
                                     h12741, k12742, v12743 )
        TSCP  e12740, h12741, k12742, v12743;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13822 );
        X3 = h_2dtable_ash_2dnode_55913c4f_v;
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( k12742, 
                                          v12743, 
                                          PROCEDURE_CLOSURE( X3 ) );
        if  ( AND( EQ( TSCPTAG( e12740 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e12740 ), VECTORTAG ) )
            )  goto L13825;
        scdebug_error( c12202, 
                       c12203, CONS( e12740, EMPTYLIST ) );
L13825:
        if  ( EQ( TSCPTAG( h12741 ), FIXNUMTAG ) )  goto L13827;
        scdebug_error( c12202, 
                       c11969, CONS( h12741, EMPTYLIST ) );
L13827:
        if  ( LT( _S2CUINT( FIXED_C( h12741 ) ), 
                  _S2CUINT( VECTOR_LENGTH( e12740 ) ) ) )  goto L13829;
        scdebug_error( c12202, 
                       c12209, CONS( h12741, EMPTYLIST ) );
L13829:
        X3 = VECTOR_ELEMENT( e12740, h12741 );
        X1 = sc_cons( X2, X3 );
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( e12740, h12741 ), 
                               X1 ) );
}

DEFTSCP( h_2dtable_ddelete_21_9726fc9e_v );
DEFCSTRING( t13832, "%HASH-TABLE-DELETE!" );

TSCP  h_2dtable_ddelete_21_9726fc9e( e12767, 
                                     c12768, h12769, k12770 )
        TSCP  e12767, c12768, h12769, k12770;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13832 );
        if  ( AND( EQ( TSCPTAG( e12767 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e12767 ), VECTORTAG ) )
            )  goto L13835;
        scdebug_error( c12202, 
                       c12203, CONS( e12767, EMPTYLIST ) );
L13835:
        if  ( EQ( TSCPTAG( h12769 ), FIXNUMTAG ) )  goto L13837;
        scdebug_error( c12202, 
                       c11969, CONS( h12769, EMPTYLIST ) );
L13837:
        if  ( LT( _S2CUINT( FIXED_C( h12769 ) ), 
                  _S2CUINT( VECTOR_LENGTH( e12767 ) ) ) )  goto L13839;
        scdebug_error( c12202, 
                       c12209, CONS( h12769, EMPTYLIST ) );
L13839:
        X1 = VECTOR_ELEMENT( e12767, h12769 );
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L13842;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L13847;
        scrt1__24__car_2derror( X1 );
L13847:
        X4 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13850;
        scrt1__24__car_2derror( X4 );
L13850:
        X3 = PAIR_CAR( X4 );
        X2 = c12768;
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X2 ) )( k12770, 
                                                  X3, 
                                                  PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L13844;
        X2 = PAIR_CDR( X1 );
        SETGEN( VECTOR_ELEMENT( e12767, h12769 ), X2 );
        POPSTACKTRACE( TRUEVALUE );
L13844:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L13856;
        scrt1__24__cdr_2derror( X1 );
L13856:
        X2 = PAIR_CDR( X1 );
        X3 = X2;
        X4 = X1;
L13860:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13861;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13866;
        scrt1__24__car_2derror( X3 );
L13866:
        X7 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L13869;
        scrt1__24__car_2derror( X7 );
L13869:
        X6 = PAIR_CAR( X7 );
        X5 = c12768;
        X5 = UNKNOWNCALL( X5, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X5 ) )( k12770, 
                                                  X6, 
                                                  PROCEDURE_CLOSURE( X5 ) ) )
            )  goto L13863;
        X5 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13874;
        scdebug_error( c12821, 
                       c12822, CONS( X4, EMPTYLIST ) );
L13874:
        SETGEN( PAIR_CDR( X4 ), X5 );
        POPSTACKTRACE( TRUEVALUE );
L13863:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13877;
        scrt1__24__cdr_2derror( X3 );
L13877:
        X5 = PAIR_CDR( X3 );
        X4 = X3;
        X3 = X5;
        GOBACK( L13860 );
L13861:
        POPSTACKTRACE( FALSEVALUE );
L13842:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( h_2dtable_ble_2dwalk_4aeae043_v );
DEFCSTRING( t13879, "%HASH-TABLE-WALK" );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );

TSCP  h_2dtable_ble_2dwalk_4aeae043( p12859, e12860 )
        TSCP  p12859, e12860;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13879 );
        if  ( AND( EQ( TSCPTAG( e12860 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( e12860 ), VECTORTAG ) )
            )  goto L13883;
        scdebug_error( c12221, 
                       c12203, CONS( e12860, EMPTYLIST ) );
L13883:
        X2 = C_FIXED( VECTOR_LENGTH( e12860 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13886;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L13887;
L13886:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L13887:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L13890;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L13894;
        POPSTACKTRACE( FALSEVALUE );
L13890:
        if  ( FALSE( scrt2__3c_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L13894;
        POPSTACKTRACE( FALSEVALUE );
L13894:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L13899;
        scdebug_error( c12202, 
                       c11969, CONS( X1, EMPTYLIST ) );
L13899:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( e12860 ) ) ) )  goto L13901;
        scdebug_error( c12202, 
                       c12209, CONS( X1, EMPTYLIST ) );
L13901:
        X2 = VECTOR_ELEMENT( e12860, X1 );
        X3 = X2;
L13905:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13906;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L13910;
        scrt1__24__car_2derror( X3 );
L13910:
        X5 = PAIR_CAR( X3 );
        X4 = p12859;
        X4 = UNKNOWNCALL( X4, 1 );
        VIA( PROCEDURE_CODE( X4 ) )( X5, PROCEDURE_CLOSURE( X4 ) );
        X3 = PAIR_CDR( X3 );
        GOBACK( L13905 );
L13906:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13913;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L13887 );
L13913:
        X1 = scrt2__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L13887 );
}

DEFTSCP( h_2dtable_dresize_21_ddd6e3b1_v );
DEFCSTRING( t13915, "%HASH-TABLE-MAYBE-RESIZE!" );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );

TSCP  idealib_2dhash_2dtable_l12938( n12939, c13936 )
        TSCP  n12939, c13936;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l12938 [inside %HASH-TABLE-M\
AYBE-RESIZE!]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13936, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c13936, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13936, 2 );
        X8 = h_2dtable_node_2dkey_11f21b52_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( n12939, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = DISPLAY( 2 );
        X6 = UNKNOWNCALL( X6, 2 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          DISPLAY( 0 ), 
                                          PROCEDURE_CLOSURE( X6 ) );
        X7 = h_2dtable_node_2dkey_11f21b52_v;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( n12939, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X8 = h_2dtable_de_2dvalue_60875a53_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( n12939, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X4 = h_2dtable_e_2dadd_21_3c49eb4a( DISPLAY( 1 ), 
                                            X5, X6, X7 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  h_2dtable_dresize_21_ddd6e3b1( h12921 )
        TSCP  h12921;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13915 );
        X2 = h_2dtable__2dentries_7c09986c( h12921 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L13919;
        scdebug_error( c12221, 
                       c12203, CONS( X2, EMPTYLIST ) );
L13919:
        X1 = C_FIXED( VECTOR_LENGTH( X2 ) );
        X3 = h_2dtable_ble_2dsize_408ab278( h12921 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L13924;
        if  ( GT( _S2CINT( X3 ), _S2CINT( X1 ) ) )  goto L13928;
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L13924:
        if  ( TRUE( scrt2__3e_2dtwo( X3, X1 ) ) )  goto L13928;
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L13928:
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X1 ) ), 
                      3 ) )  goto L13931;
        DISPLAY( 0 ) = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                                      _S2CINT( X1 ) ) );
        goto L13932;
L13931:
        DISPLAY( 0 ) = scrt2__2a_2dtwo( _TSCP( 8 ), X1 );
L13932:
        DISPLAY( 1 ) = sc_make_2dvector( DISPLAY( 0 ), 
                                         CONS( EMPTYLIST, EMPTYLIST ) );
        DISPLAY( 2 ) = h_2dtable_2dfunction_8db2ee14( h12921 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dhash_2dtable_l12938, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        h_2dtable_ble_2dwalk_4aeae043( X3, X2 );
        SDVAL = h_2dtable_entries_21_1db5ef4e( h12921, 
                                               DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_able_2dref_eccf67fb_v );
DEFCSTRING( t13938, "HASH-TABLE-REF" );

TSCP  h_2dtable_able_2dref_eccf67fb( h12952, k12953, m12954 )
        TSCP  h12952, k12953, m12954;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13938 );
        X2 = h_2dtable__2dentries_7c09986c( h12952 );
        X3 = h_2dtable_2dfunction_842d4ed8( h12952 );
        X4 = h_2dtable_ble_2dhash_16c3f8ae( h12952, k12953 );
        X1 = h_2dtable_ble_2dfind_ed5fe12( X2, X3, X4, k12953 );
        if  ( FALSE( X1 ) )  goto L13941;
        X2 = h_2dtable_de_2dvalue_60875a53_v;
        X2 = UNKNOWNCALL( X2, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( X1, 
                                                    PROCEDURE_CLOSURE( X2 ) ) );
L13941:
        if  ( NEQ( _S2CUINT( m12954 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13943;
        POPSTACKTRACE( scdebug_error( c12966, k12953, EMPTYLIST ) );
L13943:
        if  ( EQ( TSCPTAG( m12954 ), PAIRTAG ) )  goto L13946;
        scrt1__24__car_2derror( m12954 );
L13946:
        POPSTACKTRACE( PAIR_CAR( m12954 ) );
}

DEFTSCP( h_2dtable__2fdefault_974641f7_v );
DEFCSTRING( t13948, "HASH-TABLE-REF/DEFAULT" );

TSCP  idealib_2dhash_2dtable_l12972( c13950 )
        TSCP  c13950;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l12972 [inside HASH-TABLE-RE\
F/DEFAULT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13950, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  h_2dtable__2fdefault_974641f7( h12969, k12970, d12971 )
        TSCP  h12969, k12970, d12971;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13948 );
        DISPLAY( 0 ) = d12971;
        SDVAL = h_2dtable_able_2dref_eccf67fb( h12969, 
                                               k12970, 
                                               CONS( MAKEPROCEDURE( 0, 
                                                                    0, 
                                                                    idealib_2dhash_2dtable_l12972, 
                                                                    MAKECLOSURE( EMPTYLIST, 
                                                                                 1, 
                                                                                 DISPLAY( 0 ) ) ), 
                                                     EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_e_2dset_21_72f4cfeb_v );
DEFCSTRING( t13952, "HASH-TABLE-SET!" );

TSCP  h_2dtable_e_2dset_21_72f4cfeb( h12975, k12976, v12977 )
        TSCP  h12975, k12976, v12977;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13952 );
        X1 = h_2dtable__2dentries_7c09986c( h12975 );
        X2 = h_2dtable_ble_2dhash_16c3f8ae( h12975, k12976 );
        X4 = h_2dtable_2dfunction_842d4ed8( h12975 );
        X3 = h_2dtable_ble_2dfind_ed5fe12( X1, X4, X2, k12976 );
        if  ( FALSE( X3 ) )  goto L13956;
        X4 = h_2dtable_2dvalue_21_644a0987_v;
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( X3, 
                                                    v12977, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L13956:
        h_2dtable_e_2dadd_21_3c49eb4a( X1, X2, k12976, v12977 );
        X5 = h_2dtable_ble_2dsize_408ab278( h12975 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L13960;
        X4 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X5 ) ) );
        goto L13961;
L13960:
        X4 = scrt2__2b_2dtwo( _TSCP( 4 ), X5 );
L13961:
        h_2dtable__2dsize_21_4d9e5095( h12975, X4 );
        POPSTACKTRACE( h_2dtable_dresize_21_ddd6e3b1( h12975 ) );
}

DEFTSCP( h_2dtable_dupdate_21_57876bb_v );
DEFCSTRING( t13962, "HASH-TABLE-UPDATE!" );

TSCP  h_2dtable_dupdate_21_57876bb( h12994, 
                                    k12995, f12996, m12997 )
        TSCP  h12994, k12995, f12996, m12997;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13962 );
        X1 = h_2dtable__2dentries_7c09986c( h12994 );
        X2 = h_2dtable_ble_2dhash_16c3f8ae( h12994, k12995 );
        X4 = h_2dtable_2dfunction_842d4ed8( h12994 );
        X3 = h_2dtable_ble_2dfind_ed5fe12( X1, X4, X2, k12995 );
        if  ( FALSE( X3 ) )  goto L13966;
        X8 = h_2dtable_de_2dvalue_60875a53_v;
        X8 = UNKNOWNCALL( X8, 1 );
        X7 = VIA( PROCEDURE_CODE( X8 ) )( X3, 
                                          PROCEDURE_CLOSURE( X8 ) );
        X6 = f12996;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X4 = h_2dtable_2dvalue_21_644a0987_v;
        X4 = UNKNOWNCALL( X4, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( X3, 
                                                    X5, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L13966:
        if  ( NEQ( _S2CUINT( m12997 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L13968;
        POPSTACKTRACE( scdebug_error( c13019, k12995, EMPTYLIST ) );
L13968:
        if  ( EQ( TSCPTAG( m12997 ), PAIRTAG ) )  goto L13972;
        scrt1__24__car_2derror( m12997 );
L13972:
        X7 = PAIR_CAR( m12997 );
        X7 = UNKNOWNCALL( X7, 0 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( PROCEDURE_CLOSURE( X7 ) );
        X5 = f12996;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        h_2dtable_e_2dadd_21_3c49eb4a( X1, X2, k12995, X4 );
        X5 = h_2dtable_ble_2dsize_408ab278( h12994 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 4 ) ), 
                             _S2CINT( X5 ) ), 
                      3 ) )  goto L13975;
        X4 = _TSCP( IPLUS( _S2CINT( _TSCP( 4 ) ), 
                           _S2CINT( X5 ) ) );
        goto L13976;
L13975:
        X4 = scrt2__2b_2dtwo( _TSCP( 4 ), X5 );
L13976:
        h_2dtable__2dsize_21_4d9e5095( h12994, X4 );
        POPSTACKTRACE( h_2dtable_dresize_21_ddd6e3b1( h12994 ) );
}

DEFTSCP( h_2dtable__2fdefault_f84c2c1f_v );
DEFCSTRING( t13977, "HASH-TABLE-UPDATE!/DEFAULT" );

TSCP  idealib_2dhash_2dtable_l13028( c13979 )
        TSCP  c13979;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13028 [inside HASH-TABLE-UP\
DATE!/DEFAULT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13979, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  h_2dtable__2fdefault_f84c2c1f( h13024, 
                                     k13025, f13026, d13027 )
        TSCP  h13024, k13025, f13026, d13027;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13977 );
        DISPLAY( 0 ) = d13027;
        SDVAL = h_2dtable_dupdate_21_57876bb( h13024, 
                                              k13025, 
                                              f13026, 
                                              CONS( MAKEPROCEDURE( 0, 
                                                                   0, 
                                                                   idealib_2dhash_2dtable_l13028, 
                                                                   MAKECLOSURE( EMPTYLIST, 
                                                                                1, 
                                                                                DISPLAY( 0 ) ) ), 
                                                    EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_ddelete_21_22e613b7_v );
DEFCSTRING( t13981, "HASH-TABLE-DELETE!" );

TSCP  h_2dtable_ddelete_21_22e613b7( h13031, k13032 )
        TSCP  h13031, k13032;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t13981 );
        X1 = h_2dtable__2dentries_7c09986c( h13031 );
        X2 = h_2dtable_2dfunction_73c889c9( h13031 );
        X3 = h_2dtable_ble_2dhash_16c3f8ae( h13031, k13032 );
        if  ( FALSE( h_2dtable_ddelete_21_9726fc9e( X1, 
                                                    X2, X3, k13032 ) )
            )  goto L13983;
        X2 = h_2dtable_ble_2dsize_408ab278( h13031 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13986;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L13987;
L13986:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L13987:
        POPSTACKTRACE( h_2dtable__2dsize_21_4d9e5095( h13031, X1 ) );
L13983:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( h_2dtable_dexists_3f_ccf2107a_v );
DEFCSTRING( t13988, "HASH-TABLE-EXISTS?" );

TSCP  h_2dtable_dexists_3f_ccf2107a( h13041, k13042 )
        TSCP  h13041, k13042;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t13988 );
        X2 = h_2dtable__2dentries_7c09986c( h13041 );
        X3 = h_2dtable_2dfunction_842d4ed8( h13041 );
        X4 = h_2dtable_ble_2dhash_16c3f8ae( h13041, k13042 );
        X1 = h_2dtable_ble_2dfind_ed5fe12( X2, X3, X4, k13042 );
        if  ( TRUE( X1 ) )  goto L13991;
        POPSTACKTRACE( X1 );
L13991:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( h_2dtable_ble_2dwalk_3adbec47_v );
DEFCSTRING( t13993, "HASH-TABLE-WALK" );

TSCP  idealib_2dhash_2dtable_l13049( n13050, c13995 )
        TSCP  n13050, c13995;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13049 [inside HASH-TABLE-WA\
LK]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13995, 0 );
        X5 = h_2dtable_node_2dkey_11f21b52_v;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( n13050, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = h_2dtable_de_2dvalue_60875a53_v;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( n13050, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X4, 
                                          X5, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  h_2dtable_ble_2dwalk_3adbec47( h13047, p13048 )
        TSCP  h13047, p13048;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13993 );
        DISPLAY( 0 ) = p13048;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dhash_2dtable_l13049, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = h_2dtable__2dentries_7c09986c( h13047 );
        SDVAL = h_2dtable_ble_2dwalk_4aeae043( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_ble_2dfold_485fec26_v );
DEFCSTRING( t13997, "HASH-TABLE-FOLD" );

TSCP  idealib_2dhash_2dtable_l13056( k13057, v13058, c13999 )
        TSCP  k13057, v13058, c13999;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13056 [inside HASH-TABLE-FO\
LD]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c13999, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c13999, 1 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( k13057, 
                                          v13058, 
                                          PAIR_CAR( DISPLAY( 1 ) ), 
                                          PROCEDURE_CLOSURE( X5 ) );
        X3 = SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X4 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  h_2dtable_ble_2dfold_485fec26( h13053, f13054, a13055 )
        TSCP  h13053, f13054, a13055;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13997 );
        DISPLAY( 0 ) = f13054;
        DISPLAY( 1 ) = a13055;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dhash_2dtable_l13056, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        h_2dtable_ble_2dwalk_3adbec47( h13053, X1 );
        SDVAL = PAIR_CAR( DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_sh_2dtable_c5241048_v );
DEFCSTRING( t14001, "ALIST->HASH-TABLE" );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );

TSCP  idealib_2dhash_2dtable_l13098( x13099, c14070 )
        TSCP  x13099, c14070;
{
        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13098 [inside ALIST->HASH-T\
ABLE]" );
        POPSTACKTRACE( x13099 );
}

TSCP  h_2dtable_sh_2dtable_c5241048( a13061, a13062 )
        TSCP  a13061, a13062;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14001 );
        if  ( NEQ( _S2CUINT( a13062 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L14003;
        X1 = scrt1_equal_3f_v;
        goto L14004;
L14003:
        if  ( EQ( TSCPTAG( a13062 ), PAIRTAG ) )  goto L14006;
        scrt1__24__car_2derror( a13062 );
L14006:
        X1 = PAIR_CAR( a13062 );
L14004:
        X3 = BOOLEAN( EQ( _S2CUINT( a13062 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X3 ) )  goto L14013;
        if  ( EQ( TSCPTAG( a13062 ), PAIRTAG ) )  goto L14017;
        scrt1__24__cdr_2derror( a13062 );
L14017:
        X4 = PAIR_CDR( a13062 );
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L14013;
        if  ( EQ( TSCPTAG( a13062 ), PAIRTAG ) )  goto L14020;
        scrt1__24__cdr_2derror( a13062 );
L14020:
        X4 = PAIR_CDR( a13062 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L14023;
        scrt1__24__car_2derror( X4 );
L14023:
        X2 = PAIR_CAR( X4 );
        goto L14025;
L14013:
        X2 = h_2dtable_tion_2dfor_e2aa786( X1 );
L14025:
        X4 = BOOLEAN( EQ( _S2CUINT( a13062 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X4 ) )  goto L14031;
        if  ( EQ( TSCPTAG( a13062 ), PAIRTAG ) )  goto L14036;
        scrt1__24__cdr_2derror( a13062 );
L14036:
        X5 = PAIR_CDR( a13062 );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14031;
        if  ( EQ( TSCPTAG( a13062 ), PAIRTAG ) )  goto L14042;
        scrt1__24__cdr_2derror( a13062 );
L14042:
        X6 = PAIR_CDR( a13062 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L14045;
        scrt1__24__cdr_2derror( X6 );
L14045:
        X5 = PAIR_CDR( X6 );
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14031;
        X3 = scrt1_caddr( a13062 );
        goto L14053;
L14031:
        X6 = scrt1_length( a13061 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L14049;
        X5 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X6 ) ) );
        goto L14050;
L14049:
        X5 = scrt2__2a_2dtwo( _TSCP( 8 ), X6 );
L14050:
        X6 = h_2dtable__2dsize_2a_bea91a14_v;
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L14052;
        if  ( LTE( _S2CINT( X6 ), _S2CINT( X5 ) ) )  goto L14054;
        X3 = X6;
        goto L14053;
L14054:
        X3 = X5;
        goto L14053;
L14052:
        X3 = scrt2_max_2dtwo( X6, X5 );
L14053:
        X5 = CONS( X3, EMPTYLIST );
        X5 = CONS( X2, X5 );
        X4 = h_2dtable_sh_2dtable_7d5bc92( CONS( X1, X5 ) );
        X5 = a13061;
L14059:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14060;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L14064;
        scrt1__24__car_2derror( X5 );
L14064:
        X6 = PAIR_CAR( X5 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L14068;
        scrt1__24__car_2derror( X6 );
L14068:
        X7 = PAIR_CAR( X6 );
        X8 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dhash_2dtable_l13098, EMPTYLIST );
        X9 = PAIR_CDR( X6 );
        h_2dtable__2fdefault_f84c2c1f( X4, X7, X8, X9 );
        X5 = PAIR_CDR( X5 );
        GOBACK( L14059 );
L14060:
        POPSTACKTRACE( X4 );
}

DEFTSCP( h_2dtable_2d_3ealist_94116336_v );
DEFCSTRING( t14074, "HASH-TABLE->ALIST" );

TSCP  idealib_2dhash_2dtable_l13193( k13194, 
                                     v13195, a13196, c14076 )
        TSCP  k13194, v13195, a13196, c14076;
{
        TSCP  X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13193 [inside HASH-TABLE->A\
LIST]" );
        X1 = sc_cons( k13194, v13195 );
        POPSTACKTRACE( sc_cons( X1, a13196 ) );
}

TSCP  h_2dtable_2d_3ealist_94116336( h13192 )
        TSCP  h13192;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14074 );
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            idealib_2dhash_2dtable_l13193, EMPTYLIST );
        POPSTACKTRACE( h_2dtable_ble_2dfold_485fec26( h13192, 
                                                      X1, EMPTYLIST ) );
}

DEFTSCP( h_2dtable_ble_2dcopy_faf02d90_v );
DEFCSTRING( t14078, "HASH-TABLE-COPY" );

TSCP  idealib_2dhash_2dtable_l13202( k13203, v13204, c14089 )
        TSCP  k13203, v13204, c14089;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13202 [inside HASH-TABLE-CO\
PY]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14089, 0 );
        X2 = h_2dtable_e_2dset_21_72f4cfeb( DISPLAY( 0 ), 
                                            k13203, v13204 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  h_2dtable_ble_2dcopy_faf02d90( h13199 )
        TSCP  h13199;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14078 );
        X3 = h_2dtable_ble_2dsize_408ab278( h13199 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 8 ) ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L14081;
        X2 = _TSCP( ITIMES( FIXED_C( _TSCP( 8 ) ), 
                            _S2CINT( X3 ) ) );
        goto L14082;
L14081:
        X2 = scrt2__2a_2dtwo( _TSCP( 8 ), X3 );
L14082:
        X3 = h_2dtable__2dsize_2a_bea91a14_v;
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L14084;
        if  ( LTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L14086;
        X4 = X3;
        goto L14085;
L14086:
        X4 = X2;
        goto L14085;
L14084:
        X4 = scrt2_max_2dtwo( X3, X2 );
L14085:
        X1 = CONS( X4, EMPTYLIST );
        X1 = CONS( h_2dtable_2dfunction_8db2ee14( h13199 ), X1 );
        DISPLAY( 0 ) = h_2dtable_sh_2dtable_7d5bc92( CONS( h_2dtable_2dfunction_73c889c9( h13199 ), 
                                                           X1 ) );
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dhash_2dtable_l13202, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        h_2dtable_ble_2dwalk_3adbec47( h13199, X1 );
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_2dmerge_21_305531cb_v );
DEFCSTRING( t14091, "HASH-TABLE-MERGE!" );

TSCP  idealib_2dhash_2dtable_l13221( k13222, v13223, c14093 )
        TSCP  k13222, v13223, c14093;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13221 [inside HASH-TABLE-ME\
RGE!]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14093, 0 );
        X2 = h_2dtable_e_2dset_21_72f4cfeb( DISPLAY( 0 ), 
                                            k13222, v13223 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  h_2dtable_2dmerge_21_305531cb( h13219, h13220 )
        TSCP  h13219, h13220;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14091 );
        DISPLAY( 0 ) = h13219;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            idealib_2dhash_2dtable_l13221, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        h_2dtable_ble_2dwalk_3adbec47( h13220, X1 );
        SDVAL = DISPLAY( 0 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( h_2dtable_ble_2dkeys_3c4d2fe_v );
DEFCSTRING( t14095, "HASH-TABLE-KEYS" );

TSCP  idealib_2dhash_2dtable_l13227( k13228, 
                                     v13229, a13230, c14097 )
        TSCP  k13228, v13229, a13230, c14097;
{
        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13227 [inside HASH-TABLE-KE\
YS]" );
        POPSTACKTRACE( sc_cons( k13228, a13230 ) );
}

TSCP  h_2dtable_ble_2dkeys_3c4d2fe( h13226 )
        TSCP  h13226;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14095 );
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            idealib_2dhash_2dtable_l13227, EMPTYLIST );
        POPSTACKTRACE( h_2dtable_ble_2dfold_485fec26( h13226, 
                                                      X1, EMPTYLIST ) );
}

DEFTSCP( h_2dtable_e_2dvalues_1ae6aff1_v );
DEFCSTRING( t14099, "HASH-TABLE-VALUES" );

TSCP  idealib_2dhash_2dtable_l13234( k13235, 
                                     v13236, a13237, c14101 )
        TSCP  k13235, v13236, a13237, c14101;
{
        PUSHSTACKTRACE( "idealib_2dhash_2dtable_l13234 [inside HASH-TABLE-VA\
LUES]" );
        POPSTACKTRACE( sc_cons( v13236, a13237 ) );
}

TSCP  h_2dtable_e_2dvalues_1ae6aff1( h13233 )
        TSCP  h13233;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14099 );
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            idealib_2dhash_2dtable_l13234, EMPTYLIST );
        POPSTACKTRACE( h_2dtable_ble_2dfold_485fec26( h13233, 
                                                      X1, EMPTYLIST ) );
}

void qobischeme__init();
void scrt3__init();
void scrt1__init();
void scdebug__init();
void scrt2__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        qobischeme__init();
        scrt3__init();
        scrt1__init();
        scdebug__init();
        scrt2__init();
        MAXDISPLAY( 3 );
}

void  idealib_2dhash_2dtable__init()
{
        TSCP  X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(idealib_2dhash_2dtable SCHEME->C COMPILER 15mar93jfb\
)" );
        sc_segv__handlers();
        X1 = scrt2_expt( _TSCP( 8 ), _TSCP( 116 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 12 ) ) ), 
                      3 ) )  goto L13346;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 12 ) ) ) );
        goto L13347;
L13346:
        X2 = scrt2__2d_2dtwo( X1, _TSCP( 12 ) );
L13347:
        INITIALIZEVAR( t13344, 
                       ADR( h_2dtable_2dbound_2a_506e6655_v ), 
                       X2 );
        INITIALIZEVAR( t13348, 
                       ADR( h_2dtable_ing_2dhash_dcb7f4d4_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      h_2dtable_ing_2dhash_dcb7f4d4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13396, 
                       ADR( h_2dtable_ing_2dhash_f311ca0d_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      h_2dtable_ing_2dhash_f311ca0d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13406, 
                       ADR( h_2dtable_dci_2dhash_abe320d2_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      h_2dtable_dci_2dhash_abe320d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13413, 
                       ADR( h_2dtable_bol_2dhash_e241080c_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      h_2dtable_bol_2dhash_e241080c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13426, 
                       ADR( idealib_2dhash_2dtable_hash_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      idealib_2dhash_2dtable_hash, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13490, 
                       ADR( h_2dtable_2didentity_85a84b18_v ), 
                       idealib_2dhash_2dtable_hash_v );
        INITIALIZEVAR( t13491, 
                       ADR( h_2dtable_tor_2dhash_e78be2d2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_tor_2dhash_e78be2d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13522, 
                       ADR( h_2dtable_ash_2dnode_55913c4f_v ), 
                       sc_cons_v );
        INITIALIZEVAR( t13523, 
                       ADR( h_2dtable_2dvalue_21_644a0987_v ), 
                       scrt1_set_2dcdr_21_v );
        INITIALIZEVAR( t13524, 
                       ADR( h_2dtable_node_2dkey_11f21b52_v ), 
                       scrt1_car_v );
        INITIALIZEVAR( t13525, 
                       ADR( h_2dtable_de_2dvalue_60875a53_v ), 
                       scrt1_cdr_v );
        INITIALIZEVAR( t13526, 
                       ADR( h_2dtable_sh_2dtable_b41f6b05_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      h_2dtable_sh_2dtable_b41f6b05, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13561, 
                       ADR( h_2dtable_2dtable_3f_a3b8666_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_2dtable_3f_a3b8666, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13577, 
                       ADR( h_2dtable__2dsize_21_a6c2a89b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable__2dsize_21_a6c2a89b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13581, 
                       ADR( h_2dtable_ble_2dsize_408ab278_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_ble_2dsize_408ab278, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13592, 
                       ADR( h_2dtable__2dsize_21_4d9e5095_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable__2dsize_21_4d9e5095, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13603, 
                       ADR( h_2dtable_unction_21_44aed0df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_44aed0df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13607, 
                       ADR( h_2dtable_2dfunction_8db2ee14_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_2dfunction_8db2ee14, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13618, 
                       ADR( h_2dtable_unction_21_5f9fbce1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_5f9fbce1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13629, 
                       ADR( h_2dtable_unction_21_e063f95_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_e063f95, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13633, 
                       ADR( h_2dtable_2dfunction_73c889c9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_2dfunction_73c889c9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13644, 
                       ADR( h_2dtable_unction_21_92356f13_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_92356f13, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13655, 
                       ADR( h_2dtable_unction_21_4739a15b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_4739a15b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13659, 
                       ADR( h_2dtable_2dfunction_842d4ed8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_2dfunction_842d4ed8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13670, 
                       ADR( h_2dtable_unction_21_db0af1dd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_unction_21_db0af1dd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13681, 
                       ADR( h_2dtable_entries_21_a993b4c5_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_entries_21_a993b4c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13685, 
                       ADR( h_2dtable__2dentries_7c09986c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable__2dentries_7c09986c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13696, 
                       ADR( h_2dtable_entries_21_1db5ef4e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_entries_21_1db5ef4e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13707, 
                       ADR( h_2dtable__2dsize_2a_bea91a14_v ), 
                       _TSCP( 256 ) );
        INITIALIZEVAR( t13708, 
                       ADR( h_2dtable_tion_2dfor_e2aa786_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_tion_2dfor_e2aa786, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13725, 
                       ADR( h_2dtable_sh_2dtable_7d5bc92_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      h_2dtable_sh_2dtable_7d5bc92, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13800, 
                       ADR( h_2dtable_le_2dmaker_f6329815_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_le_2dmaker_f6329815, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13804, 
                       ADR( h_2dtable_sh_2dtable_b166c25b_v ), 
                       h_2dtable_le_2dmaker_f6329815( scrt1_eq_3f_v, 
                                                      h_2dtable_bol_2dhash_e241080c_v ) );
        INITIALIZEVAR( t13805, 
                       ADR( h_2dtable_sh_2dtable_7740faa2_v ), 
                       h_2dtable_le_2dmaker_f6329815( scrt3_string_3d_3f_v, 
                                                      h_2dtable_ing_2dhash_f311ca0d_v ) );
        INITIALIZEVAR( t13806, 
                       ADR( h_2dtable_sh_2dtable_92eccbd4_v ), 
                       h_2dtable_le_2dmaker_f6329815( scrt3_string_2dci_3d_3f_v, 
                                                      h_2dtable_dci_2dhash_abe320d2_v ) );
        INITIALIZEVAR( t13807, 
                       ADR( h_2dtable_sh_2dtable_8b5b40f0_v ), 
                       h_2dtable_le_2dmaker_f6329815( scrt2__3d_v, 
                                                      scrt2_modulo_v ) );
        INITIALIZEVAR( t13808, 
                       ADR( h_2dtable_ble_2dhash_16c3f8ae_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_ble_2dhash_16c3f8ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13813, 
                       ADR( h_2dtable_ble_2dfind_ed5fe12_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      h_2dtable_ble_2dfind_ed5fe12, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13822, 
                       ADR( h_2dtable_e_2dadd_21_3c49eb4a_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      h_2dtable_e_2dadd_21_3c49eb4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13832, 
                       ADR( h_2dtable_ddelete_21_9726fc9e_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      h_2dtable_ddelete_21_9726fc9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13879, 
                       ADR( h_2dtable_ble_2dwalk_4aeae043_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_ble_2dwalk_4aeae043, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13915, 
                       ADR( h_2dtable_dresize_21_ddd6e3b1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_dresize_21_ddd6e3b1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13938, 
                       ADR( h_2dtable_able_2dref_eccf67fb_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      h_2dtable_able_2dref_eccf67fb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13948, 
                       ADR( h_2dtable__2fdefault_974641f7_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      h_2dtable__2fdefault_974641f7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13952, 
                       ADR( h_2dtable_e_2dset_21_72f4cfeb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      h_2dtable_e_2dset_21_72f4cfeb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13962, 
                       ADR( h_2dtable_dupdate_21_57876bb_v ), 
                       MAKEPROCEDURE( 3, 
                                      1, 
                                      h_2dtable_dupdate_21_57876bb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13977, 
                       ADR( h_2dtable__2fdefault_f84c2c1f_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      h_2dtable__2fdefault_f84c2c1f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13981, 
                       ADR( h_2dtable_ddelete_21_22e613b7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_ddelete_21_22e613b7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13988, 
                       ADR( h_2dtable_dexists_3f_ccf2107a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_dexists_3f_ccf2107a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13993, 
                       ADR( h_2dtable_ble_2dwalk_3adbec47_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_ble_2dwalk_3adbec47, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13997, 
                       ADR( h_2dtable_ble_2dfold_485fec26_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      h_2dtable_ble_2dfold_485fec26, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14001, 
                       ADR( h_2dtable_sh_2dtable_c5241048_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      h_2dtable_sh_2dtable_c5241048, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14074, 
                       ADR( h_2dtable_2d_3ealist_94116336_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_2d_3ealist_94116336, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14078, 
                       ADR( h_2dtable_ble_2dcopy_faf02d90_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_ble_2dcopy_faf02d90, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14091, 
                       ADR( h_2dtable_2dmerge_21_305531cb_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      h_2dtable_2dmerge_21_305531cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14095, 
                       ADR( h_2dtable_ble_2dkeys_3c4d2fe_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_ble_2dkeys_3c4d2fe, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14099, 
                       ADR( h_2dtable_e_2dvalues_1ae6aff1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      h_2dtable_e_2dvalues_1ae6aff1, 
                                      EMPTYLIST ) );
        return;
}
