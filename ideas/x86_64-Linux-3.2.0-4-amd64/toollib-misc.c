
/* SCHEME->C */

#include <objects.h>

void toollib_2dmisc__init();
DEFCSTRING( t18997, "gunzip -c ~a > ~a" );
DEFSTATICTSCP( c18874 );
DEFCSTRING( t18998, "bunzip2 -c ~a > ~a" );
DEFSTATICTSCP( c18872 );
DEFCSTRING( t18999, ".bz2" );
DEFSTATICTSCP( c18870 );
DEFCSTRING( t19000, ".gz" );
DEFSTATICTSCP( c18869 );
DEFCSTRING( t19001, "scatter(P~a,R~a,C~a)~%" );
DEFSTATICTSCP( c18863 );
DEFCSTRING( t19002, "C~a = [" );
DEFSTATICTSCP( c18839 );
DEFCSTRING( t19003, "scatter(P~a,R~a)~%" );
DEFSTATICTSCP( c18789 );
DEFCSTRING( t19004, "R~a = [" );
DEFSTATICTSCP( c18765 );
DEFCSTRING( t19005, "]~%" );
DEFSTATICTSCP( c18764 );
DEFCSTRING( t19006, "~a ~%" );
DEFSTATICTSCP( c18763 );
DEFCSTRING( t19007, "P~a = [" );
DEFSTATICTSCP( c18739 );
DEFSTATICTSCP( c18119 );
DEFSTATICTSCP( c18012 );
DEFCSTRING( t19008, "~a ~a ~a ~a ~a ~a ~a~%" );
DEFSTATICTSCP( c17284 );
DEFCSTRING( t19009, "matlab" );
DEFSTATICTSCP( c17251 );
DEFCSTRING( t19010, "Abort" );
DEFSTATICTSCP( c16897 );
DEFCSTRING( t19011, "Quit" );
DEFSTATICTSCP( c16889 );
DEFCSTRING( t19012, "Help" );
DEFSTATICTSCP( c16884 );
DEFCSTRING( t19013, "-*-lucidatypewriter-*-*-*-*-26-*-*-*-*-*-*-*" );
DEFSTATICTSCP( c16862 );
DEFCSTRING( t19014, "SET-IMAGE-CENTER-Y! error" );
DEFSTATICTSCP( c16837 );
DEFCSTRING( t19015, "IMAGE-CENTER-Y error" );
DEFSTATICTSCP( c16822 );
DEFCSTRING( t19016, "LOCAL-SET-IMAGE-CENTER-Y! error" );
DEFSTATICTSCP( c16818 );
DEFCSTRING( t19017, "SET-IMAGE-CENTER-X! error" );
DEFSTATICTSCP( c16802 );
DEFCSTRING( t19018, "IMAGE-CENTER-X error" );
DEFSTATICTSCP( c16787 );
DEFCSTRING( t19019, "LOCAL-SET-IMAGE-CENTER-X! error" );
DEFSTATICTSCP( c16783 );
DEFSTATICTSCP( c16723 );
DEFCSTRING( t19020, " " );
DEFSTATICTSCP( c16705 );
DEFSTATICTSCP( c16672 );
DEFCSTRING( t19021, "Argument is out of range: ~s" );
DEFSTATICTSCP( c16630 );
DEFSTATICTSCP( c16618 );
DEFCSTRING( t19022, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c16612 );
DEFSTATICTSCP( c16611 );
DEFCSTRING( t19023, "Matrix not hypersquare!" );
DEFSTATICTSCP( c15851 );
DEFCSTRING( t19024, "," );
DEFSTATICTSCP( c15076 );
DEFCSTRING( t19025, "~a does not exist!" );
DEFSTATICTSCP( c15044 );
DEFCSTRING( t19026, "PWD" );
DEFSTATICTSCP( c15031 );
DEFCSTRING( t19027, "architecture-path" );
DEFSTATICTSCP( c15029 );
DEFCSTRING( t19028, "~a > ~s" );
DEFSTATICTSCP( c15023 );
DEFCSTRING( t19029, "/tmp/system.out" );
DEFSTATICTSCP( c15020 );
DEFCSTRING( t19030, "killall >/dev/null recordmydesktop" );
DEFSTATICTSCP( c14802 );
DEFCSTRING( t19031, 
            "recordmydesktop >/tmp/rec -x ~a -y ~a -width ~a -height ~a --no\
-sound --on-the-fly-encoding -fps ~a&" );
DEFSTATICTSCP( c14800 );
DEFCSTRING( t19032, 
            "recordmydesktop >/tmp/rec -windowid ~a --no-sound --on-the-fly-\
encoding -fps ~a&" );
DEFSTATICTSCP( c14793 );
DEFCSTRING( t19033, "USERNAME" );
DEFSTATICTSCP( c14790 );
DEFCSTRING( t19034, "/tmp/xwininfo-~a-~a.text" );
DEFSTATICTSCP( c14789 );
DEFCSTRING( t19035, "xwininfo -name ~a|fgrep id:|cut -d ' ' -f 4 >~a" );
DEFSTATICTSCP( c14786 );
DEFCSTRING( t19036, "zipper: cannot ascend negative levels" );
DEFSTATICTSCP( c14524 );
DEFCSTRING( t19037, "zipper: cannot ascend any further" );
DEFSTATICTSCP( c14440 );
DEFCSTRING( t19038, "zipper: cannot descend to out-of-bounds index" );
DEFSTATICTSCP( c14424 );
DEFCSTRING( t19039, "SET-ZIPPER-THREAD! error" );
DEFSTATICTSCP( c14404 );
DEFCSTRING( t19040, "ZIPPER-THREAD error" );
DEFSTATICTSCP( c14390 );
DEFCSTRING( t19041, "LOCAL-SET-ZIPPER-THREAD! error" );
DEFSTATICTSCP( c14387 );
DEFCSTRING( t19042, "SET-ZIPPER-TREE! error" );
DEFSTATICTSCP( c14372 );
DEFCSTRING( t19043, "ZIPPER-TREE error" );
DEFSTATICTSCP( c14358 );
DEFCSTRING( t19044, "LOCAL-SET-ZIPPER-TREE! error" );
DEFSTATICTSCP( c14355 );
DEFSTATICTSCP( c14297 );
DEFSTATICTSCP( c14291 );
DEFCSTRING( t19045, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c13514 );
DEFSTATICTSCP( c13513 );
DEFCSTRING( t19046, "HOME" );
DEFSTATICTSCP( c13429 );
DEFCSTRING( t19047, "~a/imitate/tool/settings" );
DEFSTATICTSCP( c13428 );
DEFSTATICTSCP( c13426 );
DEFCSTRING( t19048, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c13418 );
DEFCSTRING( t19049, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c13414 );
DEFCSTRING( t19050, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c13411 );
DEFSTATICTSCP( c13410 );
DEFCSTRING( t19051, "~s ~s~%" );
DEFSTATICTSCP( c13340 );

static void  init_constants()
{
        c18874 = CSTRING_TSCP( t18997 );
        CONSTANTEXP( ADR( c18874 ) );
        c18872 = CSTRING_TSCP( t18998 );
        CONSTANTEXP( ADR( c18872 ) );
        c18870 = CSTRING_TSCP( t18999 );
        CONSTANTEXP( ADR( c18870 ) );
        c18869 = CSTRING_TSCP( t19000 );
        CONSTANTEXP( ADR( c18869 ) );
        c18863 = CSTRING_TSCP( t19001 );
        CONSTANTEXP( ADR( c18863 ) );
        c18839 = CSTRING_TSCP( t19002 );
        CONSTANTEXP( ADR( c18839 ) );
        c18789 = CSTRING_TSCP( t19003 );
        CONSTANTEXP( ADR( c18789 ) );
        c18765 = CSTRING_TSCP( t19004 );
        CONSTANTEXP( ADR( c18765 ) );
        c18764 = CSTRING_TSCP( t19005 );
        CONSTANTEXP( ADR( c18764 ) );
        c18763 = CSTRING_TSCP( t19006 );
        CONSTANTEXP( ADR( c18763 ) );
        c18739 = CSTRING_TSCP( t19007 );
        CONSTANTEXP( ADR( c18739 ) );
        c18119 = DOUBLE_TSCP( 3. );
        CONSTANTEXP( ADR( c18119 ) );
        c18012 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c18012 ) );
        c17284 = CSTRING_TSCP( t19008 );
        CONSTANTEXP( ADR( c17284 ) );
        c17251 = CSTRING_TSCP( t19009 );
        CONSTANTEXP( ADR( c17251 ) );
        c16897 = CSTRING_TSCP( t19010 );
        CONSTANTEXP( ADR( c16897 ) );
        c16889 = CSTRING_TSCP( t19011 );
        CONSTANTEXP( ADR( c16889 ) );
        c16884 = CSTRING_TSCP( t19012 );
        CONSTANTEXP( ADR( c16884 ) );
        c16862 = CSTRING_TSCP( t19013 );
        CONSTANTEXP( ADR( c16862 ) );
        c16837 = CSTRING_TSCP( t19014 );
        CONSTANTEXP( ADR( c16837 ) );
        c16822 = CSTRING_TSCP( t19015 );
        CONSTANTEXP( ADR( c16822 ) );
        c16818 = CSTRING_TSCP( t19016 );
        CONSTANTEXP( ADR( c16818 ) );
        c16802 = CSTRING_TSCP( t19017 );
        CONSTANTEXP( ADR( c16802 ) );
        c16787 = CSTRING_TSCP( t19018 );
        CONSTANTEXP( ADR( c16787 ) );
        c16783 = CSTRING_TSCP( t19019 );
        CONSTANTEXP( ADR( c16783 ) );
        c16723 = STRINGTOSYMBOL( CSTRING_TSCP( "IMAGE-CENTER" ) );
        CONSTANTEXP( ADR( c16723 ) );
        c16705 = CSTRING_TSCP( t19020 );
        CONSTANTEXP( ADR( c16705 ) );
        c16672 = EMPTYLIST;
        c16672 = CONS( _TSCP( 2578 ), c16672 );
        CONSTANTEXP( ADR( c16672 ) );
        c16630 = CSTRING_TSCP( t19021 );
        CONSTANTEXP( ADR( c16630 ) );
        c16618 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c16618 ) );
        c16612 = CSTRING_TSCP( t19022 );
        CONSTANTEXP( ADR( c16612 ) );
        c16611 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c16611 ) );
        c15851 = CSTRING_TSCP( t19023 );
        CONSTANTEXP( ADR( c15851 ) );
        c15076 = CSTRING_TSCP( t19024 );
        CONSTANTEXP( ADR( c15076 ) );
        c15044 = CSTRING_TSCP( t19025 );
        CONSTANTEXP( ADR( c15044 ) );
        c15031 = CSTRING_TSCP( t19026 );
        CONSTANTEXP( ADR( c15031 ) );
        c15029 = CSTRING_TSCP( t19027 );
        CONSTANTEXP( ADR( c15029 ) );
        c15023 = CSTRING_TSCP( t19028 );
        CONSTANTEXP( ADR( c15023 ) );
        c15020 = CSTRING_TSCP( t19029 );
        CONSTANTEXP( ADR( c15020 ) );
        c14802 = CSTRING_TSCP( t19030 );
        CONSTANTEXP( ADR( c14802 ) );
        c14800 = CSTRING_TSCP( t19031 );
        CONSTANTEXP( ADR( c14800 ) );
        c14793 = CSTRING_TSCP( t19032 );
        CONSTANTEXP( ADR( c14793 ) );
        c14790 = CSTRING_TSCP( t19033 );
        CONSTANTEXP( ADR( c14790 ) );
        c14789 = CSTRING_TSCP( t19034 );
        CONSTANTEXP( ADR( c14789 ) );
        c14786 = CSTRING_TSCP( t19035 );
        CONSTANTEXP( ADR( c14786 ) );
        c14524 = CSTRING_TSCP( t19036 );
        CONSTANTEXP( ADR( c14524 ) );
        c14440 = CSTRING_TSCP( t19037 );
        CONSTANTEXP( ADR( c14440 ) );
        c14424 = CSTRING_TSCP( t19038 );
        CONSTANTEXP( ADR( c14424 ) );
        c14404 = CSTRING_TSCP( t19039 );
        CONSTANTEXP( ADR( c14404 ) );
        c14390 = CSTRING_TSCP( t19040 );
        CONSTANTEXP( ADR( c14390 ) );
        c14387 = CSTRING_TSCP( t19041 );
        CONSTANTEXP( ADR( c14387 ) );
        c14372 = CSTRING_TSCP( t19042 );
        CONSTANTEXP( ADR( c14372 ) );
        c14358 = CSTRING_TSCP( t19043 );
        CONSTANTEXP( ADR( c14358 ) );
        c14355 = CSTRING_TSCP( t19044 );
        CONSTANTEXP( ADR( c14355 ) );
        c14297 = STRINGTOSYMBOL( CSTRING_TSCP( "ZIPPER" ) );
        CONSTANTEXP( ADR( c14297 ) );
        c14291 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c14291 ) );
        c13514 = CSTRING_TSCP( t19045 );
        CONSTANTEXP( ADR( c13514 ) );
        c13513 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c13513 ) );
        c13429 = CSTRING_TSCP( t19046 );
        CONSTANTEXP( ADR( c13429 ) );
        c13428 = CSTRING_TSCP( t19047 );
        CONSTANTEXP( ADR( c13428 ) );
        c13426 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c13426 ) );
        c13418 = CSTRING_TSCP( t19048 );
        CONSTANTEXP( ADR( c13418 ) );
        c13414 = CSTRING_TSCP( t19049 );
        CONSTANTEXP( ADR( c13414 ) );
        c13411 = CSTRING_TSCP( t19050 );
        CONSTANTEXP( ADR( c13411 ) );
        c13410 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c13410 ) );
        c13340 = CSTRING_TSCP( t19051 );
        CONSTANTEXP( ADR( c13340 ) );
}

DEFTSCP( ib_2dmisc_sc_2d1_2d0_e920e698_v );
DEFCSTRING( t19052, "gensym-toollib_2dmisc-1-0" );

TSCP  ib_2dmisc_sc_2d1_2d0_e920e698(  )
{
        PUSHSTACKTRACE( t19052 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dmisc_2_0(){ return 1;gensym_toollib_2dmisc_2_0( );
}

DEFTSCP( ib_2dmisc_sc_2d3_2d0_93e0b5f8_v );
DEFCSTRING( t19054, "gensym-toollib_2dmisc-3-0" );

TSCP  ib_2dmisc_sc_2d3_2d0_93e0b5f8(  )
{
        PUSHSTACKTRACE( t19054 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dmisc_4_0(){ return 1;gensym_toollib_2dmisc_4_0( );
}

DEFTSCP( ib_2dmisc_sc_2d5_2d0_1ca04058_v );
DEFCSTRING( t19056, "gensym-toollib_2dmisc-5-0" );

TSCP  ib_2dmisc_sc_2d5_2d0_1ca04058(  )
{
        PUSHSTACKTRACE( t19056 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dmisc_6_0(){ return 1;gensym_toollib_2dmisc_6_0( );
}

DEFTSCP( ib_2dmisc_sc_2d7_2d0_66601338_v );
DEFCSTRING( t19058, "gensym-toollib_2dmisc-7-0" );

TSCP  ib_2dmisc_sc_2d7_2d0_66601338(  )
{
        PUSHSTACKTRACE( t19058 );
        POPSTACKTRACE( 0 );}
  #include<unistd.h>
int gensym_toollib_2dmisc_8_0(){ return 1;gensym_toollib_2dmisc_8_0( );
}

DEFTSCP( ib_2dmisc_ging_3f_2a_f4a9801b_v );
DEFCSTRING( t19060, "*DEBUGGING?*" );
DEFTSCP( toollib_2dmisc__2aquiet_3f_2a_v );
DEFCSTRING( t19061, "*QUIET?*" );
DEFTSCP( toollib_2dmisc_implies_v );
DEFCSTRING( t19062, "IMPLIES" );

TSCP  toollib_2dmisc_implies( a13331, b13332 )
        TSCP  a13331, b13332;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19062 );
        if  ( FALSE( a13331 ) )  goto L19064;
        X1 = FALSEVALUE;
        goto L19065;
L19064:
        X1 = TRUEVALUE;
L19065:
        if  ( TRUE( X1 ) )  goto L19067;
        POPSTACKTRACE( b13332 );
L19067:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_dtrace_v );
DEFCSTRING( t19069, "DTRACE" );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  toollib_2dmisc_dtrace( s13338, v13339 )
        TSCP  s13338, v13339;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19069 );
        X1 = CONS( v13339, EMPTYLIST );
        X1 = CONS( s13338, X1 );
        scrt6_format( TRUEVALUE, CONS( c13340, X1 ) );
        POPSTACKTRACE( v13339 );
}

DEFTSCP( toollib_2dmisc_fixpointp_v );
DEFCSTRING( t19071, "FIXPOINTP" );

TSCP  toollib_2dmisc_fixpointp( p13342, f13343, v13344 )
        TSCP  p13342, f13343, v13344;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19071 );
L19072:
        X2 = f13343;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( v13344, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X2 = p13342;
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( v13344, 
                                                 X1, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L19074;
        v13344 = X1;
        GOBACK( L19072 );
L19074:
        POPSTACKTRACE( v13344 );
}

DEFTSCP( toollib_2dmisc_exact_2dround_v );
DEFCSTRING( t19076, "EXACT-ROUND" );
EXTERNTSCPP( scrt2_inexact_2d_3eexact, XAL1( TSCP ) );
EXTERNTSCP( scrt2_inexact_2d_3eexact_v );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );

TSCP  toollib_2dmisc_exact_2dround( v13349 )
        TSCP  v13349;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19076 );
        X1 = scrt2_round( v13349 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( toollib_2dmisc_exact_2dfloor_v );
DEFCSTRING( t19078, "EXACT-FLOOR" );
EXTERNTSCPP( scrt2_floor, XAL1( TSCP ) );
EXTERNTSCP( scrt2_floor_v );

TSCP  toollib_2dmisc_exact_2dfloor( v13351 )
        TSCP  v13351;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19078 );
        X1 = scrt2_floor( v13351 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( ib_2dmisc__2dceiling_3845082b_v );
DEFCSTRING( t19080, "EXACT-CEILING" );
EXTERNTSCPP( scrt2_ceiling, XAL1( TSCP ) );
EXTERNTSCP( scrt2_ceiling_v );

TSCP  ib_2dmisc__2dceiling_3845082b( v13353 )
        TSCP  v13353;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19080 );
        X1 = scrt2_ceiling( v13353 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( toollib_2dmisc_sigmoid_v );
DEFCSTRING( t19082, "SIGMOID" );
EXTERNTSCPP( qobischeme__2f_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2f_2dtwo_v );
EXTERNTSCPP( qobischeme__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2b_2dtwo_v );
EXTERNTSCPP( qobischeme_exp, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_exp_v );
EXTERNTSCPP( qobischeme__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2d_2dtwo_v );
EXTERNTSCPP( qobischeme__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__2a_2dtwo_v );

TSCP  toollib_2dmisc_sigmoid( t13355, a13356, b13357 )
        TSCP  t13355, a13356, b13357;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19082 );
        X5 = qobischeme__2d_2dtwo( t13355, a13356 );
        X4 = qobischeme__2a_2dtwo( b13357, X5 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), X4 );
        X2 = qobischeme_exp( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( _TSCP( 4 ), X1 ) );
}

DEFTSCP( ib_2dmisc_ct_2dangle_ed09f1a1_v );
DEFCSTRING( t19084, "CORRECT-ANGLE" );
EXTERNTSCPP( toollib_2dmisc_float_2dmodulo, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_float_2dmodulo_v );
EXTERNTSCP( qobischeme_pi_v );
EXTERNTSCPP( qobischeme__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_2dtwo_v );
EXTERNTSCP( qobischeme_half_2dpi_v );
EXTERNTSCPP( qobischeme__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_2dtwo_v );

TSCP  ib_2dmisc_ct_2dangle_ed09f1a1( a13376 )
        TSCP  a13376;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19084 );
        X1 = toollib_2dmisc_float_2dmodulo( a13376, qobischeme_pi_v );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, qobischeme_half_2dpi_v ) )
            )  goto L19087;
        POPSTACKTRACE( qobischeme__2d_2dtwo( X1, qobischeme_pi_v ) );
L19087:
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), qobischeme_half_2dpi_v );
        if  ( FALSE( qobischeme__3c_2dtwo( X1, X2 ) ) )  goto L19089;
        POPSTACKTRACE( qobischeme__2b_2dtwo( X1, qobischeme_pi_v ) );
L19089:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_percentage_v );
DEFCSTRING( t19091, "PERCENTAGE" );

TSCP  toollib_2dmisc_percentage( a13395 )
        TSCP  a13395;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19091 );
        X2 = qobischeme__2a_2dtwo( _TSCP( 400 ), a13395 );
        X1 = scrt2_round( X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 400 ) ) );
}

DEFTSCP( toollib_2dmisc_last_2dvector_v );
DEFCSTRING( t19093, "LAST-VECTOR" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  toollib_2dmisc_last_2dvector( v13404 )
        TSCP  v13404;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19093 );
        if  ( AND( EQ( TSCPTAG( v13404 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v13404 ), VECTORTAG ) )
            )  goto L19096;
        scdebug_error( c13426, 
                       c13411, CONS( v13404, EMPTYLIST ) );
L19096:
        X2 = C_FIXED( VECTOR_LENGTH( v13404 ) );
        X1 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L19099;
        scdebug_error( c13410, 
                       c13414, CONS( X1, EMPTYLIST ) );
L19099:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v13404 ) ) ) )  goto L19101;
        scdebug_error( c13410, 
                       c13418, CONS( X1, EMPTYLIST ) );
L19101:
        POPSTACKTRACE( VECTOR_ELEMENT( v13404, X1 ) );
}

DEFTSCP( toollib_2dmisc__2asettings_2a_v );
DEFCSTRING( t19103, "*SETTINGS*" );
DEFTSCP( ib_2dmisc_ings_21_2a_77c5ebb_v );
DEFCSTRING( t19104, "*LOAD-SETTINGS!*" );
EXTERNTSCPP( obischeme_rom_2dfile_92544bb1, XAL1( TSCP ) );
EXTERNTSCP( obischeme_rom_2dfile_92544bb1_v );
EXTERNTSCPP( qobischeme_getenv, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_getenv_v );

TSCP  ib_2dmisc_ings_21_2a_77c5ebb(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19104 );
        X2 = CONS( qobischeme_getenv( c13429 ), EMPTYLIST );
        X1 = scrt6_format( FALSEVALUE, CONS( c13428, X2 ) );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            obischeme_rom_2dfile_92544bb1( X1 ) ) );
}

DEFTSCP( ib_2dmisc_ettings_2a_9d4d158e_v );
DEFCSTRING( t19106, "*SAVE-SETTINGS*" );
EXTERNTSCPP( obischeme_dto_2dfile_ae5c74d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_dto_2dfile_ae5c74d4_v );

TSCP  ib_2dmisc_ettings_2a_9d4d158e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19106 );
        X2 = CONS( qobischeme_getenv( c13429 ), EMPTYLIST );
        X1 = scrt6_format( FALSEVALUE, CONS( c13428, X2 ) );
        POPSTACKTRACE( obischeme_dto_2dfile_ae5c74d4( toollib_2dmisc__2asettings_2a_v, 
                                                      X1 ) );
}

DEFTSCP( ib_2dmisc_s_2dlookup_299fc00b_v );
DEFCSTRING( t19108, "SETTINGS-LOOKUP" );
EXTERNTSCPP( toollib_2dmisc_foldl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldl_v );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  toollib_2dmisc_l13436( t13437, v13438, c19112 )
        TSCP  t13437, v13438, c19112;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13436 [inside SETTINGS-LOOKUP]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19112, 0 );
        if  ( TRUE( scrt1_assoc( v13438, t13437 ) ) )  goto L19114;
        X3 = DISPLAY( 2 );
        X3 = UNKNOWNCALL( X3, 1 );
        VIA( PROCEDURE_CODE( X3 ) )( FALSEVALUE, 
                                     PROCEDURE_CLOSURE( X3 ) );
L19114:
        X3 = scrt1_assoc( v13438, t13437 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19118;
        scrt1__24__cdr_2derror( X3 );
L19118:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19121;
        scrt1__24__car_2derror( X4 );
L19121:
        X2 = PAIR_CAR( X4 );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l13434( c13435, c19110 )
        TSCP  c13435, c19110;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l13434 [inside SETTINGS-LOOKUP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19110, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19110, 1 );
        DISPLAY( 2 ) = c13435;
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l13436, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 2 ) ) );
        X3 = toollib_2dmisc_foldl( X4, 
                                   DISPLAY( 1 ), 
                                   DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );

TSCP  ib_2dmisc_s_2dlookup_299fc00b( r13432, p13433 )
        TSCP  r13432, p13433;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19108 );
        DISPLAY( 0 ) = r13432;
        DISPLAY( 1 ) = p13433;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13434, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_s_2dupdate_41a64476_v );
DEFCSTRING( t19123, "SETTINGS-UPDATE" );
EXTERNTSCPP( qobischeme_find_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_find_2dif_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  toollib_2dmisc_l13466( x13467, c19131 )
        TSCP  x13467, c19131;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13466 [inside SETTINGS-UPDATE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19131, 0 );
        if  ( EQ( TSCPTAG( x13467 ), PAIRTAG ) )  goto L19134;
        scrt1__24__car_2derror( x13467 );
L19134:
        X3 = PAIR_CAR( x13467 );
        X5 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19137;
        scrt1__24__car_2derror( X5 );
L19137:
        X4 = PAIR_CAR( X5 );
        X2 = scrt1_equal_3f( X3, X4 );
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( toollib_2dmisc_l13457, XAL2( TSCP, TSCP ) );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  toollib_2dmisc_l13476( a13477, b13478, c19171 )
        TSCP  a13477, b13478, c19171;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13476 [inside SETTINGS-UPDATE]" );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( b13478, CONS( a13477, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  toollib_2dmisc_l13457( t13459, p13460 )
        TSCP  t13459, p13460;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside SETTINGS-UPDATE]" );
        DISPLAY( 1 ) = p13460;
        if  ( EQ( _S2CUINT( DISPLAY( 1 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19127;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13466, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        if  ( FALSE( qobischeme_find_2dif( X1, t13459 ) ) )  goto L19129;
        X1 = t13459;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L19140:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19141;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19144;
        scrt1__24__car_2derror( X1 );
L19144:
        X6 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19150;
        scrt1__24__car_2derror( X6 );
L19150:
        X7 = PAIR_CAR( X6 );
        X9 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19153;
        scrt1__24__car_2derror( X9 );
L19153:
        X8 = PAIR_CAR( X9 );
        if  ( FALSE( scrt1_equal_3f( X7, X8 ) ) )  goto L19147;
        X7 = PAIR_CAR( X6 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19158;
        scrt1__24__car_2derror( X10 );
L19158:
        X9 = PAIR_CAR( X10 );
        X11 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L19161;
        scrt1__24__cdr_2derror( X11 );
L19161:
        X10 = PAIR_CDR( X11 );
        X5 = scrt1_cons_2a( X7, 
                            CONS( toollib_2dmisc_l13457( X9, X10 ), 
                                  X8 ) );
        goto L19148;
L19147:
        X5 = X6;
L19148:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19164;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L19140 );
L19164:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19169;
        scdebug_error( c13513, 
                       c13514, CONS( X3, EMPTYLIST ) );
L19169:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L19140 );
L19141:
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L19129:
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l13476, EMPTYLIST );
        X3 = scrt1_reverse( DISPLAY( 1 ) );
        X1 = toollib_2dmisc_foldl( X2, X3, DISPLAY( 0 ) );
        SDVAL = scrt1_append_2dtwo( X1, t13459 );
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L19127:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_s_2dupdate_41a64476( r13450, v13451, p13452 )
        TSCP  r13450, v13451, p13452;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19123 );
        DISPLAY( 0 ) = v13451;
        SDVAL = toollib_2dmisc_l13457( r13450, p13452 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_s_2dremove_b1036c3e_v );
DEFCSTRING( t19173, "SETTINGS-REMOVE" );
EXTERNTSCPP( qobischeme__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3d_2dtwo_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( qobischeme_remove_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_v );

TSCP  toollib_2dmisc_l13636( x13637, c19181 )
        TSCP  x13637, c19181;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13636 [inside SETTINGS-REMOVE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19181, 0 );
        if  ( EQ( TSCPTAG( x13637 ), PAIRTAG ) )  goto L19184;
        scrt1__24__car_2derror( x13637 );
L19184:
        X3 = PAIR_CAR( x13637 );
        X5 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19187;
        scrt1__24__car_2derror( X5 );
L19187:
        X4 = PAIR_CAR( X5 );
        X2 = scrt1_equal_3f( X3, X4 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( toollib_2dmisc_l13558, XAL2( TSCP, TSCP ) );

TSCP  toollib_2dmisc_l13558( t13560, p13561 )
        TSCP  t13560, p13561;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside SETTINGS-REMOVE]" );
        DISPLAY( 0 ) = p13561;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19177;
        X1 = scrt1_length( DISPLAY( 0 ) );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L19179;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13636, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_remove_2dif( X1, t13560 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L19179:
        X1 = t13560;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L19190:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19191;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19194;
        scrt1__24__car_2derror( X1 );
L19194:
        X6 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19200;
        scrt1__24__car_2derror( X6 );
L19200:
        X7 = PAIR_CAR( X6 );
        X9 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19203;
        scrt1__24__car_2derror( X9 );
L19203:
        X8 = PAIR_CAR( X9 );
        if  ( FALSE( scrt1_equal_3f( X7, X8 ) ) )  goto L19197;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19207;
        scrt1__24__car_2derror( X9 );
L19207:
        X8 = PAIR_CAR( X9 );
        X10 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19210;
        scrt1__24__cdr_2derror( X10 );
L19210:
        X9 = PAIR_CDR( X10 );
        X5 = scrt1_cons_2a( X6, 
                            CONS( toollib_2dmisc_l13558( X8, X9 ), 
                                  X7 ) );
        goto L19198;
L19197:
        X5 = X6;
L19198:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19213;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L19190 );
L19213:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19218;
        scdebug_error( c13513, 
                       c13514, CONS( X3, EMPTYLIST ) );
L19218:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L19190 );
L19191:
        SDVAL = X2;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L19177:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_s_2dremove_b1036c3e( r13552, p13553 )
        TSCP  r13552, p13553;
{
        PUSHSTACKTRACE( t19173 );
        POPSTACKTRACE( toollib_2dmisc_l13558( r13552, p13553 ) );
}

DEFTSCP( ib_2dmisc_dlookup_2a_5f54d161_v );
DEFCSTRING( t19220, "*SETTINGS-LOOKUP*" );

TSCP  ib_2dmisc_dlookup_2a_5f54d161( p13647 )
        TSCP  p13647;
{
        PUSHSTACKTRACE( t19220 );
        POPSTACKTRACE( ib_2dmisc_s_2dlookup_299fc00b( toollib_2dmisc__2asettings_2a_v, 
                                                      p13647 ) );
}

DEFTSCP( ib_2dmisc_date_21_2a_fe258695_v );
DEFCSTRING( t19222, "*SETTINGS-UPDATE!*" );

TSCP  ib_2dmisc_date_21_2a_fe258695( v13649, p13650 )
        TSCP  v13649, p13650;
{
        PUSHSTACKTRACE( t19222 );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            ib_2dmisc_s_2dupdate_41a64476( toollib_2dmisc__2asettings_2a_v, 
                                                           v13649, 
                                                           p13650 ) ) );
}

DEFTSCP( ib_2dmisc_dremove_2a_86ffda08_v );
DEFCSTRING( t19224, "*SETTINGS-REMOVE*" );

TSCP  ib_2dmisc_dremove_2a_86ffda08( p13652 )
        TSCP  p13652;
{
        PUSHSTACKTRACE( t19224 );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            ib_2dmisc_s_2dremove_b1036c3e( toollib_2dmisc__2asettings_2a_v, 
                                                           p13652 ) ) );
}

DEFTSCP( toollib_2dmisc_list_2dmean_v );
DEFCSTRING( t19226, "LIST-MEAN" );
EXTERNTSCPP( qobischeme_k_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_k_2av_v );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( qobischeme_v_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_2b_v );
EXTERNTSCPP( qobischeme__2b, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2b_v );

TSCP  toollib_2dmisc_list_2dmean( p13654 )
        TSCP  p13654;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19226 );
        if  ( EQ( TSCPTAG( p13654 ), PAIRTAG ) )  goto L19231;
        scrt1__24__car_2derror( p13654 );
L19231:
        X1 = PAIR_CAR( p13654 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )
            )  goto L19228;
        X2 = scrt1_length( p13654 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X2 = qobischeme_reduce( qobischeme_v_2b_v, 
                                p13654, _TSCP( 0 ) );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
L19228:
        X1 = qobischeme_reduce( qobischeme__2b_v, 
                                p13654, _TSCP( 0 ) );
        X2 = scrt1_length( p13654 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_covariance_14dd252a_v );
DEFCSTRING( t19233, "LIST-COVARIANCE" );
EXTERNTSCPP( qobischeme_k_2am, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_k_2am_v );
EXTERNTSCPP( qobischeme_m_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2b_v );
EXTERNTSCPP( obischeme__2dproduct_d0bc63f0, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dproduct_d0bc63f0_v );
EXTERNTSCPP( qobischeme__2a, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2a_v );
EXTERNTSCPP( qobischeme_v_2d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_2d_v );

TSCP  ib_2dmisc_covariance_14dd252a( l13668 )
        TSCP  l13668;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19233 );
        X1 = toollib_2dmisc_list_2dmean( l13668 );
        X3 = scrt1_length( l13668 );
        X2 = qobischeme__2f_2dtwo( _TSCP( 4 ), X3 );
        X5 = l13668;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L19237:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L19238;
        X4 = X6;
        goto L19246;
L19238:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19241;
        scrt1__24__car_2derror( X5 );
L19241:
        X10 = PAIR_CAR( X5 );
        X11 = qobischeme_v_2d( X10, X1 );
        X9 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L19245;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L19237 );
L19245:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19250;
        scdebug_error( c13513, 
                       c13514, CONS( X7, EMPTYLIST ) );
L19250:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L19237 );
L19246:
        X3 = qobischeme_reduce( qobischeme_m_2b_v, X4, FALSEVALUE );
        POPSTACKTRACE( qobischeme_k_2am( X2, X3 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_82eaae76_v );
DEFCSTRING( t19252, "LIST-VARIANCE" );
EXTERNTSCPP( qobischeme_sqr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqr_v );

TSCP  ib_2dmisc_2dvariance_82eaae76( s13719 )
        TSCP  s13719;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19252 );
        X1 = toollib_2dmisc_list_2dmean( s13719 );
        X4 = s13719;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L19256:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19257;
        X3 = X5;
        goto L19265;
L19257:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19260;
        scrt1__24__car_2derror( X4 );
L19260:
        X9 = PAIR_CAR( X4 );
        X10 = qobischeme__2d_2dtwo( X9, X1 );
        X8 = qobischeme_sqr( X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L19264;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L19256 );
L19264:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19269;
        scdebug_error( c13513, 
                       c13514, CONS( X6, EMPTYLIST ) );
L19269:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L19256 );
L19265:
        X2 = qobischeme_reduce( qobischeme__2b_v, X3, _TSCP( 0 ) );
        X3 = scrt1_length( s13719 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X2, X3 ) );
}

DEFTSCP( ib_2dmisc_2dskewness_4559bc2b_v );
DEFCSTRING( t19271, "LIST-SKEWNESS" );
EXTERNTSCPP( qobischeme_expt, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_expt_v );

TSCP  ib_2dmisc_2dskewness_4559bc2b( l13773 )
        TSCP  l13773;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19271 );
        X1 = ib_2dmisc_2dvariance_82eaae76( l13773 );
        X2 = toollib_2dmisc_list_2dmean( l13773 );
        X5 = scrt1_length( l13773 );
        X4 = qobischeme__2f_2dtwo( _TSCP( 4 ), X5 );
        X7 = l13773;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L19275:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L19276;
        X6 = X8;
        goto L19284;
L19276:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19279;
        scrt1__24__car_2derror( X7 );
L19279:
        X12 = PAIR_CAR( X7 );
        X13 = qobischeme__2d_2dtwo( X12, X2 );
        X11 = qobischeme_expt( X13, _TSCP( 12 ) );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L19283;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L19275 );
L19283:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19288;
        scdebug_error( c13513, 
                       c13514, CONS( X9, EMPTYLIST ) );
L19288:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L19275 );
L19284:
        X5 = qobischeme_reduce( qobischeme__2b_v, X6, _TSCP( 0 ) );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        X5 = qobischeme__2f_2dtwo( _TSCP( 12 ), _TSCP( 8 ) );
        X4 = qobischeme_expt( X1, X5 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X3, X4 ) );
}

DEFTSCP( ib_2dmisc_2dkurtosis_94af7ba9_v );
DEFCSTRING( t19290, "LIST-KURTOSIS" );

TSCP  ib_2dmisc_2dkurtosis_94af7ba9( l13839 )
        TSCP  l13839;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19290 );
        X1 = ib_2dmisc_2dvariance_82eaae76( l13839 );
        X2 = toollib_2dmisc_list_2dmean( l13839 );
        X6 = scrt1_length( l13839 );
        X5 = qobischeme__2f_2dtwo( _TSCP( 4 ), X6 );
        X8 = l13839;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L19294:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L19295;
        X7 = X9;
        goto L19303;
L19295:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19298;
        scrt1__24__car_2derror( X8 );
L19298:
        X13 = PAIR_CAR( X8 );
        X14 = qobischeme__2d_2dtwo( X13, X2 );
        X12 = qobischeme_expt( X14, _TSCP( 16 ) );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L19302;
        X12 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X12;
        GOBACK( L19294 );
L19302:
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19307;
        scdebug_error( c13513, 
                       c13514, CONS( X10, EMPTYLIST ) );
L19307:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X12;
        GOBACK( L19294 );
L19303:
        X6 = qobischeme_reduce( qobischeme__2b_v, X7, _TSCP( 0 ) );
        X4 = qobischeme__2a_2dtwo( X5, X6 );
        X5 = qobischeme_sqr( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( X3, _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_orrelation_e415d63c_v );
DEFCSTRING( t19309, "LIST-CORRELATION" );
EXTERNTSCPP( qobischeme_sqrt, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqrt_v );

TSCP  ib_2dmisc_orrelation_e415d63c( l13904, l13905 )
        TSCP  l13904, l13905;
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

        PUSHSTACKTRACE( t19309 );
        X2 = ib_2dmisc_2dvariance_82eaae76( l13905 );
        X1 = qobischeme_sqrt( X2 );
        X3 = ib_2dmisc_2dvariance_82eaae76( l13904 );
        X2 = qobischeme_sqrt( X3 );
        X3 = toollib_2dmisc_list_2dmean( l13905 );
        X4 = toollib_2dmisc_list_2dmean( l13904 );
        X7 = l13904;
        X8 = l13905;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L19313:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L19314;
        X6 = X9;
        goto L19325;
L19314:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19317;
        scrt1__24__car_2derror( X8 );
L19317:
        X13 = PAIR_CAR( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19320;
        scrt1__24__car_2derror( X7 );
L19320:
        X14 = PAIR_CAR( X7 );
        X15 = qobischeme__2d_2dtwo( X14, X4 );
        X16 = qobischeme__2d_2dtwo( X13, X3 );
        X12 = qobischeme__2a_2dtwo( X15, X16 );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L19324;
        X12 = PAIR_CDR( X7 );
        X13 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X13;
        X7 = X12;
        GOBACK( L19313 );
L19324:
        X12 = PAIR_CDR( X7 );
        X13 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19331;
        scdebug_error( c13513, 
                       c13514, CONS( X10, EMPTYLIST ) );
L19331:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X13;
        X7 = X12;
        GOBACK( L19313 );
L19325:
        X5 = qobischeme_reduce( qobischeme__2b_v, X6, _TSCP( 0 ) );
        X8 = scrt1_length( l13904 );
        X7 = qobischeme__2d_2dtwo( X8, _TSCP( 4 ) );
        X8 = qobischeme__2a_2dtwo( X2, X1 );
        X6 = qobischeme__2a_2dtwo( X7, X8 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X5, X6 ) );
}

DEFTSCP( toollib_2dmisc_vector_2dmean_v );
DEFCSTRING( t19333, "VECTOR-MEAN" );
EXTERNTSCPP( qobischeme_reduce_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_2dvector_v );

TSCP  toollib_2dmisc_vector_2dmean( v13993 )
        TSCP  v13993;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19333 );
        X1 = qobischeme_reduce_2dvector( qobischeme__2b_v, 
                                         v13993, _TSCP( 0 ) );
        if  ( AND( EQ( TSCPTAG( v13993 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v13993 ), VECTORTAG ) )
            )  goto L19336;
        scdebug_error( c13426, 
                       c13411, CONS( v13993, EMPTYLIST ) );
L19336:
        X2 = C_FIXED( VECTOR_LENGTH( v13993 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_3a32caa5_v );
DEFCSTRING( t19338, "VECTOR-VARIANCE" );
EXTERNTSCPP( obischeme_e_2dvector_6be5ec0a, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_e_2dvector_6be5ec0a_v );

TSCP  toollib_2dmisc_l14008( s14009, c19341 )
        TSCP  s14009, c19341;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14008 [inside VECTOR-VARIANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19341, 0 );
        X3 = qobischeme__2d_2dtwo( s14009, DISPLAY( 0 ) );
        X2 = qobischeme_sqr( X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dvariance_3a32caa5( v14002 )
        TSCP  v14002;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19338 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14002 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14008, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X2, v14002, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( v14002 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14002 ), VECTORTAG ) )
            )  goto L19344;
        scdebug_error( c13426, 
                       c13411, CONS( v14002, EMPTYLIST ) );
L19344:
        X2 = C_FIXED( VECTOR_LENGTH( v14002 ) );
        SDVAL = qobischeme__2f_2dtwo( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2dskewness_fd81d8f8_v );
DEFCSTRING( t19346, "VECTOR-SKEWNESS" );

TSCP  toollib_2dmisc_l14035( e14036, c19352 )
        TSCP  e14036, c19352;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14035 [inside VECTOR-SKEWNESS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19352, 0 );
        X3 = qobischeme__2d_2dtwo( e14036, DISPLAY( 0 ) );
        X2 = qobischeme_expt( X3, _TSCP( 12 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dskewness_fd81d8f8( v14018 )
        TSCP  v14018;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19346 );
        X1 = ib_2dmisc_2dvariance_3a32caa5( v14018 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14018 );
        if  ( AND( EQ( TSCPTAG( v14018 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14018 ), VECTORTAG ) )
            )  goto L19350;
        scdebug_error( c13426, 
                       c13411, CONS( v14018, EMPTYLIST ) );
L19350:
        X4 = C_FIXED( VECTOR_LENGTH( v14018 ) );
        X3 = qobischeme__2f_2dtwo( _TSCP( 4 ), X4 );
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14035, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X4 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X5, v14018, EMPTYLIST );
        X2 = qobischeme__2a_2dtwo( X3, X4 );
        X4 = qobischeme__2f_2dtwo( _TSCP( 12 ), _TSCP( 8 ) );
        X3 = qobischeme_expt( X1, X4 );
        SDVAL = qobischeme__2f_2dtwo( X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2dkurtosis_2c771f7a_v );
DEFCSTRING( t19354, "VECTOR-KURTOSIS" );

TSCP  toollib_2dmisc_l14064( e14065, c19360 )
        TSCP  e14065, c19360;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14064 [inside VECTOR-KURTOSIS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19360, 0 );
        X3 = qobischeme__2d_2dtwo( e14065, DISPLAY( 0 ) );
        X2 = qobischeme_expt( X3, _TSCP( 16 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dkurtosis_2c771f7a( v14044 )
        TSCP  v14044;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19354 );
        X1 = ib_2dmisc_2dvariance_3a32caa5( v14044 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14044 );
        if  ( AND( EQ( TSCPTAG( v14044 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14044 ), VECTORTAG ) )
            )  goto L19358;
        scdebug_error( c13426, 
                       c13411, CONS( v14044, EMPTYLIST ) );
L19358:
        X5 = C_FIXED( VECTOR_LENGTH( v14044 ) );
        X4 = qobischeme__2f_2dtwo( _TSCP( 4 ), X5 );
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14064, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X5 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X6, v14044, EMPTYLIST );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        X4 = qobischeme_sqr( X1 );
        X2 = qobischeme__2f_2dtwo( X3, X4 );
        SDVAL = qobischeme__2d_2dtwo( X2, _TSCP( 12 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_orrelation_e243a9a8_v );
DEFCSTRING( t19362, "VECTOR-CORRELATION" );

TSCP  toollib_2dmisc_l14080( v14081, v14082, c19365 )
        TSCP  v14081, v14082, c19365;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14080 [inside VECTOR-CORRELATION]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19365, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19365, 1 );
        X4 = qobischeme__2d_2dtwo( v14081, DISPLAY( 1 ) );
        X5 = qobischeme__2d_2dtwo( v14082, DISPLAY( 0 ) );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_orrelation_e243a9a8( v14070, v14071 )
        TSCP  v14070, v14071;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19362 );
        X2 = ib_2dmisc_2dvariance_3a32caa5( v14071 );
        X1 = qobischeme_sqrt( X2 );
        X3 = ib_2dmisc_2dvariance_3a32caa5( v14070 );
        X2 = qobischeme_sqrt( X3 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14071 );
        DISPLAY( 1 ) = toollib_2dmisc_vector_2dmean( v14070 );
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l14080, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X4, 
                                            v14070, 
                                            CONS( v14071, EMPTYLIST ) );
        X6 = scrt1_length( v14070 );
        X5 = qobischeme__2d_2dtwo( X6, _TSCP( 4 ) );
        X6 = qobischeme__2a_2dtwo( X2, X1 );
        X4 = qobischeme__2a_2dtwo( X5, X6 );
        SDVAL = qobischeme__2f_2dtwo( X3, X4 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_bimodality_dba868a3_v );
DEFCSTRING( t19367, "COEFFICIENT-OF-BIMODALITY" );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );

TSCP  ib_2dmisc_bimodality_dba868a3( v14102 )
        TSCP  v14102;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19367 );
        if  ( FALSE( scrt1_list_3f( v14102 ) ) )  goto L19369;
        X3 = ib_2dmisc_2dskewness_4559bc2b( v14102 );
        X2 = qobischeme_sqr( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        X3 = ib_2dmisc_2dkurtosis_94af7ba9( v14102 );
        X2 = qobischeme__2b_2dtwo( X3, _TSCP( 12 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L19369:
        if  ( NOT( AND( EQ( TSCPTAG( v14102 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( v14102 ), 
                            VECTORTAG ) ) ) )  goto L19371;
        X3 = ib_2dmisc_2dskewness_fd81d8f8( v14102 );
        X2 = qobischeme_sqr( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        X3 = ib_2dmisc_2dkurtosis_2c771f7a( v14102 );
        X2 = qobischeme__2b_2dtwo( X3, _TSCP( 12 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L19371:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
}

DEFTSCP( toollib_2dmisc_vectors_2dmean_v );
DEFCSTRING( t19373, "VECTORS-MEAN" );

TSCP  toollib_2dmisc_vectors_2dmean( v14124 )
        TSCP  v14124;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19373 );
        if  ( AND( EQ( TSCPTAG( v14124 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14124 ), VECTORTAG ) )
            )  goto L19376;
        scdebug_error( c13426, 
                       c13411, CONS( v14124, EMPTYLIST ) );
L19376:
        X2 = C_FIXED( VECTOR_LENGTH( v14124 ) );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X2 = qobischeme_reduce_2dvector( qobischeme_v_2b_v, 
                                         v14124, FALSEVALUE );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_54d102bf_v );
DEFCSTRING( t19378, "VECTORS-VARIANCE" );
EXTERNTSCPP( qobischeme_map_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dvector_v );

TSCP  toollib_2dmisc_l14142( v14143, c19383 )
        TSCP  v14143, c19383;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14142 [inside VECTORS-VARIANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19383, 0 );
        X3 = qobischeme_v_2d( v14143, DISPLAY( 0 ) );
        X2 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dvariance_54d102bf( m14133, v14134 )
        TSCP  m14133, v14134;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19378 );
        DISPLAY( 0 ) = m14133;
        if  ( AND( EQ( TSCPTAG( v14134 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14134 ), VECTORTAG ) )
            )  goto L19381;
        scdebug_error( c13426, 
                       c13411, CONS( v14134, EMPTYLIST ) );
L19381:
        X2 = C_FIXED( VECTOR_LENGTH( v14134 ) );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14142, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X3 = qobischeme_map_2dvector( X4, v14134, EMPTYLIST );
        X2 = qobischeme_reduce_2dvector( qobischeme_m_2b_v, 
                                         X3, FALSEVALUE );
        SDVAL = qobischeme_k_2am( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2ddistance_971fca4c_v );
DEFCSTRING( t19385, "MAHALANOBIS-DISTANCE" );
EXTERNTSCPP( qobischeme_dot, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_dot_v );
EXTERNTSCPP( qobischeme_m_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2av_v );
EXTERNTSCPP( qobischeme_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_negative_3f_v );
EXTERNTSCPP( scrt2_abs, XAL1( TSCP ) );
EXTERNTSCP( scrt2_abs_v );

TSCP  ib_2dmisc_2ddistance_971fca4c( v14145, m14146, i14147 )
        TSCP  v14145, m14146, i14147;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t19385 );
        X1 = qobischeme_v_2d( v14145, m14146 );
        X4 = qobischeme_m_2av( i14147, X1 );
        X3 = qobischeme_dot( X1, X4 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L19389;
        if  ( FALSE( qobischeme_negative_3f( X3 ) ) )  goto L19391;
        X2 = _TSCP( INEGATE( _S2CINT( X3 ) ) );
        goto L19390;
L19391:
        X2 = X3;
        goto L19390;
L19389:
        X2 = scrt2_abs( X3 );
L19390:
        POPSTACKTRACE( qobischeme_sqrt( X2 ) );
}

DEFTSCP( toollib_2dmisc_frequencies_v );
DEFCSTRING( t19393, "FREQUENCIES" );
EXTERNTSCPP( qobischeme_count, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_count_v );
EXTERNTSCPP( scrt1_remove, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remove_v );

TSCP  toollib_2dmisc_frequencies( l14157 )
        TSCP  l14157;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19393 );
        X1 = EMPTYLIST;
        X2 = l14157;
L19396:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19397;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19400;
        scrt1__24__car_2derror( X2 );
L19400:
        X5 = PAIR_CAR( X2 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X7 = PAIR_CAR( X2 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( qobischeme_count( X7, X2 ), 
                                  X6 ) );
        X3 = sc_cons( X4, X1 );
        X4 = PAIR_CAR( X2 );
        X2 = scrt1_remove( X4, X2 );
        X1 = X3;
        GOBACK( L19396 );
L19397:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_sublist_3f_66fdafb3_v );
DEFCSTRING( t19404, "INITIAL-SUBLIST?" );

TSCP  ib_2dmisc_sublist_3f_66fdafb3( r14184, l14185 )
        TSCP  r14184, l14185;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19404 );
        X2 = scrt1_length( r14184 );
        X3 = scrt1_length( l14185 );
        X1 = qobischeme__3e_2dtwo( X2, X3 );
        if  ( FALSE( X1 ) )  goto L19407;
        X2 = l14185;
        X3 = r14184;
L19410:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19411;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19414;
        scrt1__24__car_2derror( X2 );
L19414:
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19417;
        scrt1__24__car_2derror( X3 );
L19417:
        X6 = PAIR_CAR( X3 );
        X4 = scrt1_equal_3f( X5, X6 );
        if  ( FALSE( X4 ) )  goto L19420;
        X5 = PAIR_CDR( X2 );
        X3 = PAIR_CDR( X3 );
        X2 = X5;
        GOBACK( L19410 );
L19420:
        POPSTACKTRACE( X4 );
L19411:
        POPSTACKTRACE( TRUEVALUE );
L19407:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_p_2dleaf_3f_v );
DEFCSTRING( t19424, "P-LEAF?" );
EXTERNTSCPP( qobischeme_every, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_every_v );
EXTERNTSCPP( scrt2_symbol_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_symbol_3f_v );

TSCP  toollib_2dmisc_p_2dleaf_3f( l14227 )
        TSCP  l14227;
{
        PUSHSTACKTRACE( t19424 );
        POPSTACKTRACE( qobischeme_every( scrt2_symbol_3f_v, 
                                         l14227, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_ip_2dleaf_3f_v );
DEFCSTRING( t19426, "IP-LEAF?" );
EXTERNTSCPP( toollib_2dmisc_drop_2duntil, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_drop_2duntil_v );
EXTERNTSCPP( scrt4_vector_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_3f_v );
EXTERNTSCPP( toollib_2dmisc_take_2duntil, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_take_2duntil_v );

TSCP  toollib_2dmisc_ip_2dleaf_3f( l14229 )
        TSCP  l14229;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19426 );
        X1 = toollib_2dmisc_drop_2duntil( scrt4_vector_3f_v, l14229 );
        X2 = toollib_2dmisc_take_2duntil( scrt4_vector_3f_v, l14229 );
        X3 = qobischeme_every( scrt2_symbol_3f_v, X2, EMPTYLIST );
        if  ( FALSE( X3 ) )  goto L19430;
        POPSTACKTRACE( qobischeme_every( scrt4_vector_3f_v, 
                                         X1, EMPTYLIST ) );
L19430:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_index_2dleaves_v );
DEFCSTRING( t19432, "INDEX-LEAVES" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );
EXTERNTSCP( qobischeme_fail_v );
EXTERNTSCPP( qobischeme_set_2dfail_21, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_set_2dfail_21_v );

TSCP  toollib_2dmisc_l14251( c19444 )
        TSCP  c19444;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14251 [inside INDEX-LEAVES]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c19444, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c19444, 1 );
        qobischeme_set_2dfail_21( DISPLAY( 5 ) );
        X4 = DISPLAY( 4 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( obischeme__2dbetween_97a3111a, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dbetween_97a3111a_v );
EXTERNTSCPP( toollib_2dmisc_index_2dleaves, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_index_2dleaves_v );
EXTERNTSCPP( scrt1_list_2dref, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_list_2dref_v );

TSCP  toollib_2dmisc_l14247( r14248, c19441 )
        TSCP  r14248, c19441;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l14247 [inside INDEX-LEAVES]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19441, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19441, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19441, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c19441, 3 );
        DISPLAY( 4 ) = r14248;
        DISPLAY( 5 ) = qobischeme_fail_v;
        X6 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l14251, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_set_2dfail_21( X6 );
        X11 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L19447;
        scrt1__24__cdr_2derror( X11 );
L19447:
        X10 = PAIR_CDR( X11 );
        X9 = scrt1_length( X10 );
        X8 = obischeme__2dbetween_97a3111a( _TSCP( 4 ), X9 );
        X9 = scrt1_list_2dref( DISPLAY( 0 ), X8 );
        X10 = sc_cons( X8, DISPLAY( 2 ) );
        X7 = toollib_2dmisc_index_2dleaves( X9, 
                                            DISPLAY( 1 ), X10 );
        X6 = sc_cons( X7, PAIR_CAR( DISPLAY( 3 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X6 );
        X6 = qobischeme_fail_v;
        X6 = UNKNOWNCALL( X6, 0 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        DISPLAY( 3 ) = X4;
        SDVAL = X5;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_index_2dleaves( t14238, l14239, p14240 )
        TSCP  t14238, l14239, p14240;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19432 );
        DISPLAY( 0 ) = t14238;
        DISPLAY( 1 ) = l14239;
        DISPLAY( 2 ) = p14240;
        X1 = DISPLAY( 1 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L19434;
        X3 = scrt4_list_2d_3evector( DISPLAY( 2 ) );
        X2 = sc_cons( X3, EMPTYLIST );
        X1 = X2;
        SDVAL = scrt1_append_2dtwo( DISPLAY( 0 ), X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
L19434:
        X2 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19438;
        scrt1__24__car_2derror( X2 );
L19438:
        X1 = PAIR_CAR( X2 );
        DISPLAY( 3 ) = EMPTYLIST;
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14247, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ) ) );
        X3 = sc_ntinuation_1af38b9f_v;
        X3 = UNKNOWNCALL( X3, 1 );
        VIA( PROCEDURE_CODE( X3 ) )( X4, PROCEDURE_CLOSURE( X3 ) );
        X2 = scrt1_reverse( PAIR_CAR( DISPLAY( 3 ) ) );
        SDVAL = sc_cons( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_3eleaves_f440aa79_v );
DEFCSTRING( t19450, "TREE->LEAVES" );

TSCP  toollib_2dmisc_l14277( c19461 )
        TSCP  c19461;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14277 [inside TREE->LEAVES]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c19461, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c19461, 1 );
        qobischeme_set_2dfail_21( DISPLAY( 5 ) );
        X4 = DISPLAY( 4 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( qobischeme_a_2dmember_2dof, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_a_2dmember_2dof_v );
EXTERNTSCPP( toollib_2dmisc_l14268, XAL1( TSCP ) );

TSCP  toollib_2dmisc_l14273( r14274, c19458 )
        TSCP  r14274, c19458;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l14273 [inside TREE->LEAVES]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19458, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19458, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19458, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c19458, 3 );
        DISPLAY( 4 ) = r14274;
        DISPLAY( 5 ) = qobischeme_fail_v;
        X6 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l14277, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_set_2dfail_21( X6 );
        X8 = qobischeme_a_2dmember_2dof( DISPLAY( 2 ) );
        if  ( FALSE( scrt1_list_3f( X8 ) ) )  goto L19464;
        X9 = DISPLAY( 0 );
        X9 = UNKNOWNCALL( X9, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X9 ) )( X8, 
                                                  PROCEDURE_CLOSURE( X9 ) ) )
            )  goto L19466;
        X9 = sc_cons( X8, PAIR_CAR( DISPLAY( 1 ) ) );
        X7 = SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X9 );
        goto L19465;
L19466:
        X7 = toollib_2dmisc_l14268( X8 );
        goto L19465;
L19464:
        X9 = qobischeme_fail_v;
        X9 = UNKNOWNCALL( X9, 0 );
        X7 = VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L19465:
        X6 = sc_cons( X7, PAIR_CAR( DISPLAY( 3 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X6 );
        X6 = qobischeme_fail_v;
        X6 = UNKNOWNCALL( X6, 0 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        DISPLAY( 3 ) = X4;
        SDVAL = X5;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_l14268( t14270 )
        TSCP  t14270;
{
        TSCP  X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside TREE->LEAVES]" );
        DISPLAY( 2 ) = t14270;
        DISPLAY( 3 ) = EMPTYLIST;
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14273, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        SDVAL = scrt1_reverse( PAIR_CAR( DISPLAY( 3 ) ) );
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_d_3eleaves_f440aa79( t14261, l14262 )
        TSCP  t14261, l14262;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19450 );
        DISPLAY( 0 ) = l14262;
        DISPLAY( 1 ) = EMPTYLIST;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = DISPLAY( 0 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( t14261, 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L19453;
        X1 = sc_cons( t14261, PAIR_CAR( DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        goto L19454;
L19453:
        toollib_2dmisc_l14268( t14261 );
L19454:
        SDVAL = scrt1_reverse( PAIR_CAR( DISPLAY( 1 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_make_2dzipper_v );
DEFCSTRING( t19468, "MAKE-ZIPPER" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );

TSCP  toollib_2dmisc_make_2dzipper( t14281, t14282 )
        TSCP  t14281, t14282;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19468 );
        X1 = sc_make_2dvector( _TSCP( 12 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L19472;
        scdebug_error( c14291, 
                       c13411, CONS( X1, EMPTYLIST ) );
L19472:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19474;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19474:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19476;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19476:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c14297 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19479;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19479:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19481;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19481:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), t14281 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19484;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19484:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19486;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19486:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), t14282 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_zipper_3f_v );
DEFCSTRING( t19488, "ZIPPER?" );

TSCP  toollib_2dmisc_zipper_3f( o14321 )
        TSCP  o14321;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19488 );
        if  ( NOT( AND( EQ( TSCPTAG( o14321 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o14321 ), 
                            VECTORTAG ) ) ) )  goto L19490;
        X2 = C_FIXED( VECTOR_LENGTH( o14321 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 12 ) );
        if  ( FALSE( X1 ) )  goto L19494;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19497;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19497:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o14321 ) ) ) )  goto L19499;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19499:
        X2 = VECTOR_ELEMENT( o14321, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c14297 ) ) ) );
L19494:
        POPSTACKTRACE( X1 );
L19490:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dtree_21_edaf9ba0_v );
DEFCSTRING( t19501, "LOCAL-SET-ZIPPER-TREE!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  ib_2dmisc__2dtree_21_edaf9ba0( t14353, o14354 )
        TSCP  t14353, o14354;
{
        PUSHSTACKTRACE( t19501 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14353 ) ) )  goto L19503;
        qobischeme_panic( c14355, EMPTYLIST );
L19503:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t14353, 
                                                      _TSCP( 4 ), 
                                                      o14354 ) );
}

DEFTSCP( toollib_2dmisc_zipper_2dtree_v );
DEFCSTRING( t19505, "ZIPPER-TREE" );

TSCP  toollib_2dmisc_zipper_2dtree( t14357 )
        TSCP  t14357;
{
        PUSHSTACKTRACE( t19505 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14357 ) ) )  goto L19507;
        qobischeme_panic( c14358, EMPTYLIST );
L19507:
        if  ( AND( EQ( TSCPTAG( t14357 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14357 ), VECTORTAG ) )
            )  goto L19510;
        scdebug_error( c13410, 
                       c13411, CONS( t14357, EMPTYLIST ) );
L19510:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19512;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19512:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14357 ) ) ) )  goto L19514;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19514:
        POPSTACKTRACE( VECTOR_ELEMENT( t14357, _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc__2dtree_21_d6235974_v );
DEFCSTRING( t19516, "SET-ZIPPER-TREE!" );

TSCP  ib_2dmisc__2dtree_21_d6235974( t14370, o14371 )
        TSCP  t14370, o14371;
{
        PUSHSTACKTRACE( t19516 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14370 ) ) )  goto L19518;
        qobischeme_panic( c14372, EMPTYLIST );
L19518:
        if  ( AND( EQ( TSCPTAG( t14370 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14370 ), VECTORTAG ) )
            )  goto L19521;
        scdebug_error( c14291, 
                       c13411, CONS( t14370, EMPTYLIST ) );
L19521:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19523;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19523:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14370 ) ) ) )  goto L19525;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19525:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t14370, _TSCP( 4 ) ), 
                               o14371 ) );
}

DEFTSCP( ib_2dmisc_dthread_21_884870d1_v );
DEFCSTRING( t19527, "LOCAL-SET-ZIPPER-THREAD!" );

TSCP  ib_2dmisc_dthread_21_884870d1( t14385, o14386 )
        TSCP  t14385, o14386;
{
        PUSHSTACKTRACE( t19527 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14385 ) ) )  goto L19529;
        qobischeme_panic( c14387, EMPTYLIST );
L19529:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t14385, 
                                                      _TSCP( 8 ), 
                                                      o14386 ) );
}

DEFTSCP( ib_2dmisc_r_2dthread_bdbb94d4_v );
DEFCSTRING( t19531, "ZIPPER-THREAD" );

TSCP  ib_2dmisc_r_2dthread_bdbb94d4( t14389 )
        TSCP  t14389;
{
        PUSHSTACKTRACE( t19531 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14389 ) ) )  goto L19533;
        qobischeme_panic( c14390, EMPTYLIST );
L19533:
        if  ( AND( EQ( TSCPTAG( t14389 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14389 ), VECTORTAG ) )
            )  goto L19536;
        scdebug_error( c13410, 
                       c13411, CONS( t14389, EMPTYLIST ) );
L19536:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19538;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19538:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14389 ) ) ) )  goto L19540;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19540:
        POPSTACKTRACE( VECTOR_ELEMENT( t14389, _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_dthread_21_1876e8da_v );
DEFCSTRING( t19542, "SET-ZIPPER-THREAD!" );

TSCP  ib_2dmisc_dthread_21_1876e8da( t14402, o14403 )
        TSCP  t14402, o14403;
{
        PUSHSTACKTRACE( t19542 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14402 ) ) )  goto L19544;
        qobischeme_panic( c14404, EMPTYLIST );
L19544:
        if  ( AND( EQ( TSCPTAG( t14402 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14402 ), VECTORTAG ) )
            )  goto L19547;
        scdebug_error( c14291, 
                       c13411, CONS( t14402, EMPTYLIST ) );
L19547:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19549;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19549:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14402 ) ) ) )  goto L19551;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19551:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t14402, _TSCP( 8 ) ), 
                               o14403 ) );
}

DEFTSCP( ib_2dmisc_initialize_b0401efa_v );
DEFCSTRING( t19553, "ZIPPER:INITIALIZE" );

TSCP  ib_2dmisc_initialize_b0401efa( t14417 )
        TSCP  t14417;
{
        PUSHSTACKTRACE( t19553 );
        POPSTACKTRACE( toollib_2dmisc_make_2dzipper( t14417, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc__3adescend_aaeaab15_v );
DEFCSTRING( t19555, "ZIPPER:DESCEND" );
EXTERNTSCPP( qobischeme__3c_3d, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3c_3d_v );
EXTERNTSCPP( qobischeme_map_2dindexed, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dindexed_v );

TSCP  toollib_2dmisc_l14427( e14428, j14429, c19560 )
        TSCP  e14428, j14429, c19560;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14427 [inside ZIPPER:DESCEND]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19560, 0 );
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 0 ), j14429 ) )
            )  goto L19562;
        X2 = FALSEVALUE;
        goto L19563;
L19562:
        X2 = e14428;
L19563:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc__3adescend_aaeaab15( z14419, i14420 )
        TSCP  z14419, i14420;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19555 );
        DISPLAY( 0 ) = i14420;
        X3 = toollib_2dmisc_zipper_2dtree( z14419 );
        X2 = scrt1_length( X3 );
        X1 = CONS( qobischeme__2d_2dtwo( X2, _TSCP( 4 ) ), 
                   EMPTYLIST );
        X1 = CONS( DISPLAY( 0 ), X1 );
        if  ( TRUE( qobischeme__3c_3d( CONS( _TSCP( 0 ), X1 ) ) )
            )  goto L19557;
        qobischeme_panic( c14424, EMPTYLIST );
L19557:
        X2 = toollib_2dmisc_zipper_2dtree( z14419 );
        X1 = scrt1_list_2dref( X2, DISPLAY( 0 ) );
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l14427, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X5 = toollib_2dmisc_zipper_2dtree( z14419 );
        X3 = qobischeme_map_2dindexed( X4, X5 );
        X4 = ib_2dmisc_r_2dthread_bdbb94d4( z14419 );
        X2 = sc_cons( X3, X4 );
        SDVAL = toollib_2dmisc_make_2dzipper( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_r_3aascend_83fa263_v );
DEFCSTRING( t19564, "ZIPPER:ASCEND" );

TSCP  ib_2dmisc_r_3aascend_83fa263( z14434 )
        TSCP  z14434;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19564 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14434 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19566;
        qobischeme_panic( c14440, EMPTYLIST );
L19566:
        X3 = ib_2dmisc_r_2dthread_bdbb94d4( z14434 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19569;
        scrt1__24__car_2derror( X3 );
L19569:
        X2 = PAIR_CAR( X3 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L19573:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L19574;
        X1 = X4;
        goto L19584;
L19574:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19577;
        scrt1__24__car_2derror( X3 );
L19577:
        X8 = PAIR_CAR( X3 );
        if  ( FALSE( X8 ) )  goto L19580;
        X7 = X8;
        goto L19581;
L19580:
        X7 = toollib_2dmisc_zipper_2dtree( z14434 );
L19581:
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19583;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L19573 );
L19583:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19588;
        scdebug_error( c13513, 
                       c13514, CONS( X5, EMPTYLIST ) );
L19588:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L19573 );
L19584:
        X3 = ib_2dmisc_r_2dthread_bdbb94d4( z14434 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19591;
        scrt1__24__cdr_2derror( X3 );
L19591:
        X2 = PAIR_CDR( X3 );
        POPSTACKTRACE( toollib_2dmisc_make_2dzipper( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_cend_2dseq_c2837d94_v );
DEFCSTRING( t19593, "ZIPPER:DESCEND-SEQ" );

TSCP  ib_2dmisc_cend_2dseq_c2837d94( z14494, s14495 )
        TSCP  z14494, s14495;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t19593 );
        X1 = z14494;
        X2 = s14495;
L19596:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19597;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19600;
        scrt1__24__car_2derror( X2 );
L19600:
        X4 = PAIR_CAR( X2 );
        X3 = ib_2dmisc__3adescend_aaeaab15( z14494, X4 );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L19596 );
L19597:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_ascend_2dn_ba70bf1b_v );
DEFCSTRING( t19603, "ZIPPER:ASCEND-N" );
EXTERNTSCPP( qobischeme__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_3d_2dtwo_v );

TSCP  ib_2dmisc_ascend_2dn_ba70bf1b( z14519, n14520 )
        TSCP  z14519, n14520;
{
        PUSHSTACKTRACE( t19603 );
L19604:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( _TSCP( 0 ), n14520 ) )
            )  goto L19605;
        qobischeme_panic( c14524, EMPTYLIST );
L19605:
        if  ( EQ( _S2CUINT( n14520 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L19607;
        if  ( NEQ( _S2CUINT( n14520 ), 
                   _S2CUINT( _TSCP( 4 ) ) ) )  goto L19609;
        POPSTACKTRACE( ib_2dmisc_r_3aascend_83fa263( z14519 ) );
L19609:
        n14520 = qobischeme__2d_2dtwo( n14520, _TSCP( 4 ) );
        GOBACK( L19604 );
L19607:
        POPSTACKTRACE( z14519 );
}

DEFTSCP( ib_2dmisc_dascend_3f_f58e1843_v );
DEFCSTRING( t19611, "ZIPPER:CAN-ASCEND?" );

TSCP  ib_2dmisc_dascend_3f_f58e1843( z14537 )
        TSCP  z14537;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19611 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14537 );
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CUINT( X1 ), 
                                     _S2CUINT( EMPTYLIST ) ) ) );
}

DEFTSCP( ib_2dmisc_descend_3f_ec35a266_v );
DEFCSTRING( t19613, "ZIPPER:CAN-DESCEND?" );
EXTERNTSCPP( qobischeme_some, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_v );

TSCP  ib_2dmisc_descend_3f_ec35a266( z14544 )
        TSCP  z14544;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19613 );
        X1 = toollib_2dmisc_zipper_2dtree( z14544 );
        POPSTACKTRACE( qobischeme_some( scrt1_list_3f_v, 
                                        X1, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_nd_2duntil_229b5165_v );
DEFCSTRING( t19615, "ZIPPER:ASCEND-UNTIL" );

TSCP  ib_2dmisc_nd_2duntil_229b5165( z14546, p14547 )
        TSCP  z14546, p14547;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19615 );
        X1 = z14546;
L19618:
        X2 = p14547;
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( X1, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L19619;
        X1 = ib_2dmisc_r_3aascend_83fa263( z14546 );
        GOBACK( L19618 );
L19619:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_d_2dheight_6e8bfcbb_v );
DEFCSTRING( t19621, "ZIPPER:ASCEND-HEIGHT" );

TSCP  ib_2dmisc_d_2dheight_6e8bfcbb( z14555 )
        TSCP  z14555;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19621 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14555 );
        POPSTACKTRACE( scrt1_length( X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dfloor_v );
DEFCSTRING( t19623, "MY-FLOOR" );
EXTERNTSCPP( qobischeme_primal_2a, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_primal_2a_v );

TSCP  toollib_2dmisc_my_2dfloor( a14557 )
        TSCP  a14557;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19623 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14557 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19629;
        if  ( AND( EQ( TSCPTAG( a14557 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14557 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19629;
        X2 = qobischeme_primal_2a( a14557 );
        POPSTACKTRACE( scrt2_floor( X2 ) );
L19629:
        POPSTACKTRACE( scrt2_floor( a14557 ) );
}

DEFTSCP( toollib_2dmisc_my_2dceiling_v );
DEFCSTRING( t19632, "MY-CEILING" );

TSCP  toollib_2dmisc_my_2dceiling( a14569 )
        TSCP  a14569;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19632 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14569 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19638;
        if  ( AND( EQ( TSCPTAG( a14569 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14569 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19638;
        X2 = qobischeme_primal_2a( a14569 );
        POPSTACKTRACE( scrt2_ceiling( X2 ) );
L19638:
        POPSTACKTRACE( scrt2_ceiling( a14569 ) );
}

DEFTSCP( toollib_2dmisc_my_2dround_v );
DEFCSTRING( t19641, "MY-ROUND" );

TSCP  toollib_2dmisc_my_2dround( a14581 )
        TSCP  a14581;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19641 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14581 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19647;
        if  ( AND( EQ( TSCPTAG( a14581 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14581 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19647;
        X2 = qobischeme_primal_2a( a14581 );
        POPSTACKTRACE( scrt2_round( X2 ) );
L19647:
        POPSTACKTRACE( scrt2_round( a14581 ) );
}

DEFTSCP( toollib_2dmisc_my_2dmax_v );
DEFCSTRING( t19650, "MY-MAX" );

TSCP  toollib_2dmisc_my_2dmax( a14593, b14594 )
        TSCP  a14593, b14594;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19650 );
        if  ( TRUE( qobischeme__3e_2dtwo( a14593, b14594 ) ) )  goto L19652;
        if  ( TRUE( qobischeme__3c_2dtwo( a14593, b14594 ) ) )  goto L19654;
        X1 = qobischeme__2b_2dtwo( a14593, b14594 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 8 ) ) );
L19654:
        POPSTACKTRACE( b14594 );
L19652:
        POPSTACKTRACE( a14593 );
}

DEFTSCP( toollib_2dmisc_my_2dmin_v );
DEFCSTRING( t19656, "MY-MIN" );

TSCP  toollib_2dmisc_my_2dmin( a14608, b14609 )
        TSCP  a14608, b14609;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19656 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), a14608 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), b14609 );
        X1 = toollib_2dmisc_my_2dmax( X2, X3 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dabs_v );
DEFCSTRING( t19658, "MY-ABS" );

TSCP  toollib_2dmisc_my_2dabs( a14620 )
        TSCP  a14620;
{
        PUSHSTACKTRACE( t19658 );
        if  ( TRUE( qobischeme__3e_2dtwo( a14620, _TSCP( 0 ) ) )
            )  goto L19660;
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), a14620 ) );
L19660:
        POPSTACKTRACE( a14620 );
}

DEFTSCP( ib_2dmisc_2dchks_2d2_dfd44528_v );
DEFCSTRING( t19662, "SMOOTH-MAX-CHKS-2" );
EXTERNTSCP( qobischeme_infinity_v );
EXTERNTSCP( qobischeme_minus_2dinfinity_v );
EXTERNTSCPP( obischeme__2d_3ereal_31985a7f, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme__2d_3ereal_31985a7f_v );

TSCP  toollib_2dmisc_l14699( a14700, b14701, c19693 )
        TSCP  a14700, b14701, c19693;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14699 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( b14701 );
}

TSCP  toollib_2dmisc_l14702( a14703, b14704, c19695 )
        TSCP  a14703, b14704, c19695;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14702 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  toollib_2dmisc_l14705( a14706, b14707, c19697 )
        TSCP  a14706, b14707, c19697;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14705 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 4 ) );
}

TSCP  toollib_2dmisc_l14690( a14691, b14692, c19699 )
        TSCP  a14691, b14692, c19699;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14690 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( a14691 );
}

TSCP  toollib_2dmisc_l14693( a14694, b14695, c19701 )
        TSCP  a14694, b14695, c19701;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14693 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 4 ) );
}

TSCP  toollib_2dmisc_l14696( a14697, b14698, c19703 )
        TSCP  a14697, b14698, c19703;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14696 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  ib_2dmisc_2dchks_2d2_dfd44528( a14628, b14629, t14630 )
        TSCP  a14628, b14629, t14630;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19662 );
        X2 = qobischeme__3d_2dtwo( qobischeme_infinity_v, a14628 );
        if  ( FALSE( X2 ) )  goto L19665;
        X1 = qobischeme__3d_2dtwo( qobischeme_infinity_v, b14629 );
        goto L19666;
L19665:
        X1 = X2;
L19666:
        if  ( TRUE( X1 ) )  goto L19671;
        X2 = qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                   a14628 );
        if  ( FALSE( X2 ) )  goto L19678;
        if  ( FALSE( qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                           b14629 ) ) )  goto L19678;
L19671:
        X2 = qobischeme__2b_2dtwo( b14629, t14630 );
        X1 = qobischeme__2b_2dtwo( a14628, X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 8 ) ) );
L19678:
        X1 = qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                   a14628 );
        if  ( TRUE( X1 ) )  goto L19683;
        if  ( TRUE( qobischeme__3d_2dtwo( qobischeme_infinity_v, 
                                          b14629 ) ) )  goto L19683;
        X2 = qobischeme__3d_2dtwo( qobischeme_infinity_v, a14628 );
        if  ( TRUE( X2 ) )  goto L19690;
        if  ( TRUE( qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                          b14629 ) ) )  goto L19690;
        X7 = qobischeme__2d_2dtwo( a14628, b14629 );
        X6 = qobischeme_sqr( X7 );
        X7 = qobischeme_sqr( t14630 );
        X5 = qobischeme__2b_2dtwo( X6, X7 );
        X4 = qobischeme_sqrt( X5 );
        X5 = qobischeme__2b_2dtwo( a14628, b14629 );
        X3 = qobischeme__2b_2dtwo( X4, X5 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X3, _TSCP( 8 ) ) );
L19683:
        X1 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14699, EMPTYLIST );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14702, EMPTYLIST );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14705, EMPTYLIST );
        POPSTACKTRACE( obischeme__2d_3ereal_31985a7f( X1, 
                                                      X2, 
                                                      X3, 
                                                      a14628, b14629 ) );
L19690:
        X1 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14690, EMPTYLIST );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14693, EMPTYLIST );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14696, EMPTYLIST );
        POPSTACKTRACE( obischeme__2d_3ereal_31985a7f( X1, 
                                                      X2, 
                                                      X3, 
                                                      a14628, b14629 ) );
}

DEFTSCP( ib_2dmisc_2dchks_2d2_66f2de59_v );
DEFCSTRING( t19705, "SMOOTH-MIN-CHKS-2" );

TSCP  ib_2dmisc_2dchks_2d2_66f2de59( a14718, b14719, t14720 )
        TSCP  a14718, b14719, t14720;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19705 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), a14718 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), b14719 );
        X1 = ib_2dmisc_2dchks_2d2_dfd44528( X2, X3, t14720 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dadd_2dexp_v );
DEFCSTRING( t19707, "MY-ADD-EXP" );
EXTERNTSCP( obischeme_dprecision_ce156f5c_v );
EXTERNTSCPP( qobischeme_log, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_log_v );

TSCP  toollib_2dmisc_my_2dadd_2dexp( e14731, e14732 )
        TSCP  e14731, e14732;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19707 );
        X1 = toollib_2dmisc_my_2dmax( e14731, e14732 );
        X2 = toollib_2dmisc_my_2dmin( e14731, e14732 );
        X3 = toollib_2dmisc_my_2dfloor( X2 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, 
                                          qobischeme_minus_2dinfinity_v ) )
            )  goto L19712;
        X4 = qobischeme__2d_2dtwo( X1, X3 );
        if  ( TRUE( qobischeme__3e_2dtwo( X4, 
                                          obischeme_dprecision_ce156f5c_v ) )
            )  goto L19714;
        X7 = qobischeme__2d_2dtwo( X1, X3 );
        X6 = qobischeme_exp( X7 );
        X8 = qobischeme__2d_2dtwo( X2, X3 );
        X7 = qobischeme_exp( X8 );
        X5 = qobischeme__2b_2dtwo( X6, X7 );
        X4 = qobischeme_log( X5 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X4, X3 ) );
L19714:
        POPSTACKTRACE( X1 );
L19712:
        POPSTACKTRACE( qobischeme_minus_2dinfinity_v );
}

DEFTSCP( toollib_2dmisc_recip_2dexp_v );
DEFCSTRING( t19716, "RECIP-EXP" );

TSCP  toollib_2dmisc_recip_2dexp( e14761 )
        TSCP  e14761;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19716 );
        X1 = toollib_2dmisc_my_2dfloor( e14761 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), X1 );
        if  ( TRUE( qobischeme__3e_2dtwo( X2, 
                                          obischeme_dprecision_ce156f5c_v ) )
            )  goto L19719;
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X1 );
        X4 = qobischeme_exp( X5 );
        X6 = qobischeme__2d_2dtwo( e14761, X1 );
        X5 = qobischeme_exp( X6 );
        X3 = qobischeme__2d_2dtwo( X4, X5 );
        X2 = qobischeme_log( X3 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X2, X1 ) );
L19719:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_window_2did_v );
DEFCSTRING( t19721, "WINDOW-ID" );
EXTERNTSCPP( qobischeme_getpid, XAL0(  ) );
EXTERNTSCP( qobischeme_getpid_v );
EXTERNTSCPP( qobischeme_rm, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rm_v );
EXTERNTSCPP( scrt4_system, XAL1( TSCP ) );
EXTERNTSCP( scrt4_system_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );
EXTERNTSCPP( qobischeme_read_2dfile, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_read_2dfile_v );

TSCP  toollib_2dmisc_window_2did( n14783 )
        TSCP  n14783;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19721 );
        X2 = CONS( qobischeme_getpid(  ), EMPTYLIST );
        X2 = CONS( qobischeme_getenv( c14790 ), X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14789, X2 ) );
        qobischeme_rm( X1 );
        X3 = CONS( X1, EMPTYLIST );
        X3 = CONS( n14783, X3 );
        X2 = scrt6_format( FALSEVALUE, CONS( c14786, X3 ) );
        scrt4_system( X2 );
        X3 = qobischeme_read_2dfile( X1 );
        X2 = qobischeme_first( X3 );
        qobischeme_rm( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( ib_2dmisc_cording_21_5bb4940f_v );
DEFCSTRING( t19725, "START-RECORDING!" );
EXTERNTSCP( qobischeme__2aprogram_2a_v );

TSCP  ib_2dmisc_cording_21_5bb4940f( f14792 )
        TSCP  f14792;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19725 );
        X2 = CONS( f14792, EMPTYLIST );
        X2 = CONS( toollib_2dmisc_window_2did( qobischeme__2aprogram_2a_v ), 
                   X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14793, X2 ) );
        POPSTACKTRACE( scrt4_system( X1 ) );
}

DEFTSCP( ib_2dmisc_ocation_21_cd203ece_v );
DEFCSTRING( t19727, "START-RECORDING-LOCATION!" );

TSCP  ib_2dmisc_ocation_21_cd203ece( f14795, 
                                     x14796, 
                                     y14797, w14798, h14799 )
        TSCP  f14795, x14796, y14797, w14798, h14799;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19727 );
        X2 = CONS( f14795, EMPTYLIST );
        X2 = CONS( h14799, X2 );
        X2 = CONS( w14798, X2 );
        X2 = CONS( y14797, X2 );
        X2 = CONS( x14796, X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14800, X2 ) );
        POPSTACKTRACE( scrt4_system( X1 ) );
}

DEFTSCP( ib_2dmisc_cording_21_1421a7f0_v );
DEFCSTRING( t19729, "STOP-RECORDING!" );

TSCP  ib_2dmisc_cording_21_1421a7f0(  )
{
        PUSHSTACKTRACE( t19729 );
        POPSTACKTRACE( scrt4_system( c14802 ) );
}

DEFTSCP( ib_2dmisc_ation_2d3d_b4bc348b_v );
DEFCSTRING( t19731, "TRANSLATION-3D" );

TSCP  ib_2dmisc_ation_2d3d_b4bc348b( x14804, y14805, z14806 )
        TSCP  x14804, y14805, z14806;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19731 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( x14804, X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( _TSCP( 4 ), 
                            CONS( _TSCP( 0 ), X4 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( z14806, X5 );
        X5 = CONS( _TSCP( 4 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( y14805, X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_scaling_2d3d_v );
DEFCSTRING( t19733, "SCALING-3D" );

TSCP  toollib_2dmisc_scaling_2d3d( x14808, y14809, z14810 )
        TSCP  x14808, y14809, z14810;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19733 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( x14808, CONS( _TSCP( 0 ), X4 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( z14810, X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), CONS( y14809, X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_n_2d3d_2dx_13f7eadc_v );
DEFCSTRING( t19735, "ROTATION-3D-X" );
EXTERNTSCPP( qobischeme_cos, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_cos_v );
EXTERNTSCPP( qobischeme_sin, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sin_v );

TSCP  ib_2dmisc_n_2d3d_2dx_13f7eadc( a14812 )
        TSCP  a14812;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19735 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( _TSCP( 4 ), 
                            CONS( _TSCP( 0 ), X4 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( qobischeme_cos( a14812 ), X5 );
        X6 = qobischeme_sin( a14812 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X6 ), 
                                  X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( qobischeme_sin( a14812 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( qobischeme_cos( a14812 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_n_2d3d_2dy_64f0da4a_v );
DEFCSTRING( t19737, "ROTATION-3D-Y" );

TSCP  ib_2dmisc_n_2d3d_2dy_64f0da4a( a14817 )
        TSCP  a14817;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19737 );
        X4 = qobischeme_cos( a14817 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( qobischeme_sin( a14817 ), X5 );
        X3 = scrt1_cons_2a( X4, CONS( _TSCP( 0 ), X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X6 = qobischeme_sin( a14817 );
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( _TSCP( 0 ), X6 );
        X6 = CONS( qobischeme_cos( a14817 ), X6 );
        X4 = scrt1_cons_2a( X5, CONS( _TSCP( 0 ), X6 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_n_2d3d_2dz_fdf98bf0_v );
DEFCSTRING( t19739, "ROTATION-3D-Z" );

TSCP  ib_2dmisc_n_2d3d_2dz_fdf98bf0( a14822 )
        TSCP  a14822;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19739 );
        X4 = qobischeme_cos( a14822 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( qobischeme_sin( a14822 ), X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 4 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X6 = qobischeme_sin( a14822 );
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( _TSCP( 0 ), X6 );
        X6 = CONS( _TSCP( 0 ), X6 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( qobischeme_cos( a14822 ), X6 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_identity_2d3d_v );
DEFCSTRING( t19741, "IDENTITY-3D" );
DEFTSCP( ib_2dmisc_sform_2d3d_e2268f0e_v );
DEFCSTRING( t19742, "MAKE-TRANSFORM-3D" );
EXTERNTSCPP( qobischeme_m_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2a_v );

TSCP  ib_2dmisc_sform_2d3d_e2268f0e( t14827, 
                                     p14828, 
                                     p14829, 
                                     x14830, y14831, z14832 )
        TSCP  t14827, 
              p14828, p14829, x14830, y14831, z14832;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19742 );
        X1 = ib_2dmisc_ation_2d3d_b4bc348b( x14830, y14831, z14832 );
        X4 = ib_2dmisc_n_2d3d_2dx_13f7eadc( t14827 );
        X5 = ib_2dmisc_n_2d3d_2dy_64f0da4a( p14828 );
        X3 = qobischeme_m_2a( X4, X5 );
        X4 = ib_2dmisc_n_2d3d_2dz_fdf98bf0( p14829 );
        X2 = qobischeme_m_2a( X3, X4 );
        POPSTACKTRACE( qobischeme_m_2a( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_homogenous_22fd274e_v );
DEFCSTRING( t19744, "POINT->HOMOGENOUS" );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  ib_2dmisc_homogenous_22fd274e( p14834 )
        TSCP  p14834;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19744 );
        X2 = scrt4_vector_2d_3elist( p14834 );
        X3 = scrt1_cons_2a( _TSCP( 4 ), 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X1 = scrt1_append_2dtwo( X2, X3 );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_2d_3epoint_9d37e6e9_v );
DEFCSTRING( t19746, "HOMOGENOUS->POINT" );
EXTERNTSCPP( qobischeme_subvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_subvector_v );

TSCP  ib_2dmisc_2d_3epoint_9d37e6e9( p14836 )
        TSCP  p14836;
{
        PUSHSTACKTRACE( t19746 );
        POPSTACKTRACE( qobischeme_subvector( p14836, 
                                             _TSCP( 0 ), _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_point_2d3d_50aa6438_v );
DEFCSTRING( t19748, "TRANSFORM-POINT-3D" );

TSCP  ib_2dmisc_point_2d3d_50aa6438( m14838, p14839 )
        TSCP  m14838, p14839;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19748 );
        X2 = ib_2dmisc_homogenous_22fd274e( p14839 );
        X1 = qobischeme_m_2av( m14838, X2 );
        POPSTACKTRACE( ib_2dmisc_2d_3epoint_9d37e6e9( X1 ) );
}

DEFTSCP( ib_2dmisc_dline_2d3d_9b771eb6_v );
DEFCSTRING( t19750, "TRANSFORM-LINE-3D" );
EXTERNTSCPP( obischeme__2dsegment_42724a73, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dsegment_42724a73_v );
EXTERNTSCPP( qobischeme_p, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_p_v );
EXTERNTSCPP( qobischeme_q, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_q_v );

TSCP  ib_2dmisc_dline_2d3d_9b771eb6( m14841, l14842 )
        TSCP  m14841, l14842;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19750 );
        X2 = qobischeme_p( l14842 );
        X1 = ib_2dmisc_point_2d3d_50aa6438( m14841, X2 );
        X3 = qobischeme_q( l14842 );
        X2 = ib_2dmisc_point_2d3d_50aa6438( m14841, X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_orm_2dline_4d8a20e7_v );
DEFCSTRING( t19752, "APPLY-TRANSFORM-LINE" );
EXTERNTSCPP( qobischeme_apply_2dtransform, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_apply_2dtransform_v );

TSCP  ib_2dmisc_orm_2dline_4d8a20e7( t14844, l14845 )
        TSCP  t14844, l14845;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19752 );
        X2 = qobischeme_p( l14845 );
        X1 = qobischeme_apply_2dtransform( t14844, X2 );
        X3 = qobischeme_q( l14845 );
        X2 = qobischeme_apply_2dtransform( t14844, X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_components_a776ca69_v );
DEFCSTRING( t19754, "TRANSFORM->COMPONENTS" );
EXTERNTSCPP( scrt2_asin, XAL1( TSCP ) );
EXTERNTSCP( scrt2_asin_v );
EXTERNTSCPP( qobischeme_matrix_2dref, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dref_v );
EXTERNTSCPP( obischeme_2drotation_1b89590c, XAL1( TSCP ) );
EXTERNTSCP( obischeme_2drotation_1b89590c_v );
EXTERNTSCPP( scrt2_acos, XAL1( TSCP ) );
EXTERNTSCP( scrt2_acos_v );
EXTERNTSCPP( obischeme__3edegrees_c68f581, XAL1( TSCP ) );
EXTERNTSCP( obischeme__3edegrees_c68f581_v );
EXTERNTSCPP( obischeme_ranslation_e9029c50, XAL1( TSCP ) );
EXTERNTSCP( obischeme_ranslation_e9029c50_v );

TSCP  ib_2dmisc_components_a776ca69( t14847 )
        TSCP  t14847;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19754 );
        X3 = obischeme_2drotation_1b89590c( t14847 );
        X2 = qobischeme_matrix_2dref( X3, _TSCP( 0 ), _TSCP( 8 ) );
        X1 = scrt2_asin( X2 );
        X5 = obischeme_2drotation_1b89590c( t14847 );
        X4 = qobischeme_matrix_2dref( X5, _TSCP( 8 ), _TSCP( 8 ) );
        X5 = qobischeme_cos( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X2 = scrt2_acos( X3 );
        X6 = obischeme_2drotation_1b89590c( t14847 );
        X5 = qobischeme_matrix_2dref( X6, _TSCP( 0 ), _TSCP( 4 ) );
        X6 = qobischeme_cos( X1 );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        X3 = scrt2_asin( X4 );
        X4 = obischeme__3edegrees_c68f581( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = obischeme_ranslation_e9029c50( t14847 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19760;
        scdebug_error( c13410, 
                       c13411, CONS( X6, EMPTYLIST ) );
L19760:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19762;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19762:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19764;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19764:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 8 ) ), X5 );
        X6 = obischeme_ranslation_e9029c50( t14847 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19767;
        scdebug_error( c13410, 
                       c13411, CONS( X6, EMPTYLIST ) );
L19767:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19769;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19769:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19771;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19771:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 4 ) ), X5 );
        X6 = obischeme_ranslation_e9029c50( t14847 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19774;
        scdebug_error( c13410, 
                       c13411, CONS( X6, EMPTYLIST ) );
L19774:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19776;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19776:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19778;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19778:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 0 ) ), X5 );
        X5 = CONS( obischeme__3edegrees_c68f581( X3 ), X5 );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( obischeme__3edegrees_c68f581( X1 ), 
                                            X5 ) ) );
}

DEFTSCP( ib_2dmisc_components_9631de6f_v );
DEFCSTRING( t19780, "TRANSFORM-3D->COMPONENTS" );

TSCP  ib_2dmisc_components_9631de6f( t14891 )
        TSCP  t14891;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19780 );
        X2 = qobischeme_matrix_2dref( t14891, 
                                      _TSCP( 0 ), _TSCP( 8 ) );
        X1 = scrt2_asin( X2 );
        X4 = qobischeme_matrix_2dref( t14891, 
                                      _TSCP( 8 ), _TSCP( 8 ) );
        X5 = qobischeme_cos( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X2 = scrt2_acos( X3 );
        X5 = qobischeme_matrix_2dref( t14891, 
                                      _TSCP( 0 ), _TSCP( 4 ) );
        X6 = qobischeme_cos( X1 );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        X3 = scrt2_asin( X4 );
        X4 = obischeme__3edegrees_c68f581( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( qobischeme_matrix_2dref( t14891, 
                                            _TSCP( 8 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( qobischeme_matrix_2dref( t14891, 
                                            _TSCP( 4 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( qobischeme_matrix_2dref( t14891, 
                                            _TSCP( 0 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( obischeme__3edegrees_c68f581( X3 ), X5 );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( obischeme__3edegrees_c68f581( X1 ), 
                                            X5 ) ) );
}

DEFTSCP( toollib_2dmisc_project_2dline_v );
DEFCSTRING( t19785, "PROJECT-LINE" );
EXTERNTSCPP( qobischeme_project, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_project_v );

TSCP  toollib_2dmisc_project_2dline( l14905, f14906 )
        TSCP  l14905, f14906;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19785 );
        X2 = qobischeme_p( l14905 );
        X1 = qobischeme_project( X2, f14906 );
        X3 = qobischeme_q( l14905 );
        X2 = qobischeme_project( X3, f14906 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( toollib_2dmisc_safe_2dproject_v );
DEFCSTRING( t19787, "SAFE-PROJECT" );
EXTERNTSCPP( qobischeme_z, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_z_v );
EXTERNTSCPP( scrt4_vector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_v );
EXTERNTSCPP( qobischeme_y, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_y_v );
EXTERNTSCPP( qobischeme_x, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_x_v );

TSCP  toollib_2dmisc_safe_2dproject( v14908, f14909 )
        TSCP  v14908, f14909;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19787 );
        X1 = qobischeme_z( v14908 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) )
            )  goto L19789;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( qobischeme_infinity_v, 
                            CONS( qobischeme_infinity_v, X2 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
L19789:
        X2 = qobischeme_z( v14908 );
        X1 = qobischeme__2f_2dtwo( f14909, X2 );
        X3 = CONS( qobischeme_y( v14908 ), EMPTYLIST );
        X2 = scrt4_vector( CONS( qobischeme_x( v14908 ), X3 ) );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_ect_2dline_92cf24d3_v );
DEFCSTRING( t19791, "SAFE-PROJECT-LINE" );

TSCP  ib_2dmisc_ect_2dline_92cf24d3( l14917, f14918 )
        TSCP  l14917, f14918;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19791 );
        X2 = qobischeme_p( l14917 );
        X1 = toollib_2dmisc_safe_2dproject( X2, f14918 );
        X3 = qobischeme_q( l14917 );
        X2 = toollib_2dmisc_safe_2dproject( X3, f14918 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_point_2d2d_5a547106_v );
DEFCSTRING( t19793, "ROTATE-POINT-2D" );
EXTERNTSCPP( obischeme_atrix_2d2d_f732ed37, XAL1( TSCP ) );
EXTERNTSCP( obischeme_atrix_2d2d_f732ed37_v );
EXTERNTSCPP( obischeme__3eradians_78a74454, XAL1( TSCP ) );
EXTERNTSCP( obischeme__3eradians_78a74454_v );

TSCP  ib_2dmisc_point_2d2d_5a547106( p14920, t14921 )
        TSCP  p14920, t14921;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19793 );
        X2 = obischeme__3eradians_78a74454( t14921 );
        X1 = obischeme_atrix_2d2d_f732ed37( X2 );
        POPSTACKTRACE( qobischeme_m_2av( X1, p14920 ) );
}

DEFTSCP( ib_2dmisc_dline_2d2d_bd006ef_v );
DEFCSTRING( t19795, "ROTATE-LINE-2D" );

TSCP  ib_2dmisc_dline_2d2d_bd006ef( l14923, t14924 )
        TSCP  l14923, t14924;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19795 );
        X2 = qobischeme_p( l14923 );
        X1 = ib_2dmisc_point_2d2d_5a547106( X2, t14924 );
        X3 = qobischeme_q( l14923 );
        X2 = ib_2dmisc_point_2d2d_5a547106( X3, t14924 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_n_2dvector_fadaca1b_v );
DEFCSTRING( t19797, "LINE->DIRECTION-VECTOR" );
EXTERNTSCPP( qobischeme_unit, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_unit_v );
EXTERNTSCPP( qobischeme__2d, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2d_v );

TSCP  ib_2dmisc_n_2dvector_fadaca1b( l14926 )
        TSCP  l14926;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19797 );
        X2 = qobischeme_p( l14926 );
        X1 = qobischeme_map_2dvector( qobischeme__2d_v, 
                                      X2, 
                                      CONS( qobischeme_q( l14926 ), 
                                            EMPTYLIST ) );
        POPSTACKTRACE( qobischeme_unit( X1 ) );
}

DEFTSCP( ib_2dmisc_dline_2d2d_396d1575_v );
DEFCSTRING( t19799, "TRANSLATE-LINE-2D" );

TSCP  toollib_2dmisc_l14930( x14931, c19801 )
        TSCP  x14931, c19801;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14930 [inside TRANSLATE-LINE-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19801, 0 );
        X2 = qobischeme__2b_2dtwo( DISPLAY( 0 ), x14931 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l14935( x14936, c19803 )
        TSCP  x14936, c19803;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14935 [inside TRANSLATE-LINE-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19803, 0 );
        X2 = qobischeme__2b_2dtwo( DISPLAY( 0 ), x14936 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_dline_2d2d_396d1575( l14928, v14929 )
        TSCP  l14928, v14929;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19799 );
        DISPLAY( 0 ) = v14929;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14930, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X3 = qobischeme_p( l14928 );
        X1 = qobischeme_map_2dvector( X2, X3, EMPTYLIST );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14935, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X4 = qobischeme_q( l14928 );
        X2 = qobischeme_map_2dvector( X3, X4, EMPTYLIST );
        SDVAL = obischeme__2dsegment_42724a73( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_filter_2dlines_v );
DEFCSTRING( t19805, "FILTER-LINES" );
EXTERNTSCPP( obischeme_t_2dlength_98b94dda, XAL1( TSCP ) );
EXTERNTSCP( obischeme_t_2dlength_98b94dda_v );

TSCP  toollib_2dmisc_l14944( l14945, c19807 )
        TSCP  l14945, c19807;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14944 [inside FILTER-LINES]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19807, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19807, 1 );
        X7 = qobischeme_p( l14945 );
        X6 = qobischeme_x( X7 );
        X7 = qobischeme_x( DISPLAY( 1 ) );
        X5 = qobischeme__3e_2dtwo( X6, X7 );
        if  ( FALSE( X5 ) )  goto L19810;
        X7 = qobischeme_q( l14945 );
        X6 = qobischeme_x( X7 );
        X7 = qobischeme_x( DISPLAY( 1 ) );
        X4 = qobischeme__3e_2dtwo( X6, X7 );
        goto L19811;
L19810:
        X4 = X5;
L19811:
        if  ( FALSE( X4 ) )  goto L19813;
        X3 = X4;
        goto L19832;
L19813:
        X8 = qobischeme_p( l14945 );
        X7 = qobischeme_x( X8 );
        X8 = qobischeme_x( DISPLAY( 0 ) );
        X6 = qobischeme__3c_2dtwo( X7, X8 );
        if  ( FALSE( X6 ) )  goto L19816;
        X8 = qobischeme_q( l14945 );
        X7 = qobischeme_x( X8 );
        X8 = qobischeme_x( DISPLAY( 0 ) );
        X5 = qobischeme__3c_2dtwo( X7, X8 );
        goto L19817;
L19816:
        X5 = X6;
L19817:
        if  ( FALSE( X5 ) )  goto L19819;
        X3 = X5;
        goto L19832;
L19819:
        X9 = qobischeme_p( l14945 );
        X8 = qobischeme_y( X9 );
        X9 = qobischeme_y( DISPLAY( 1 ) );
        X7 = qobischeme__3e_2dtwo( X8, X9 );
        if  ( FALSE( X7 ) )  goto L19822;
        X9 = qobischeme_q( l14945 );
        X8 = qobischeme_y( X9 );
        X9 = qobischeme_y( DISPLAY( 1 ) );
        X6 = qobischeme__3e_2dtwo( X8, X9 );
        goto L19823;
L19822:
        X6 = X7;
L19823:
        if  ( FALSE( X6 ) )  goto L19825;
        X3 = X6;
        goto L19832;
L19825:
        X10 = qobischeme_p( l14945 );
        X9 = qobischeme_y( X10 );
        X10 = qobischeme_y( DISPLAY( 0 ) );
        X8 = qobischeme__3c_2dtwo( X9, X10 );
        if  ( FALSE( X8 ) )  goto L19828;
        X10 = qobischeme_q( l14945 );
        X9 = qobischeme_y( X10 );
        X10 = qobischeme_y( DISPLAY( 0 ) );
        X7 = qobischeme__3c_2dtwo( X9, X10 );
        goto L19829;
L19828:
        X7 = X8;
L19829:
        if  ( FALSE( X7 ) )  goto L19831;
        X3 = X7;
        goto L19832;
L19831:
        X8 = obischeme_t_2dlength_98b94dda( l14945 );
        X3 = qobischeme__3c_2dtwo( X8, _TSCP( 40 ) );
L19832:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_filter_2dlines( l14941, m14942, m14943 )
        TSCP  l14941, m14942, m14943;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19805 );
        DISPLAY( 0 ) = m14942;
        DISPLAY( 1 ) = m14943;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14944, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_remove_2dif( X1, l14941 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2ddistance_b82131e6_v );
DEFCSTRING( t19833, "LINE-DISTANCE" );
EXTERNTSCPP( qobischeme_minp, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_minp_v );
EXTERNTSCPP( qobischeme__3c, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3c_v );
EXTERNTSCPP( qobischeme_distance, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_distance_v );

TSCP  ib_2dmisc_2ddistance_b82131e6( l15007, l15008 )
        TSCP  l15007, l15008;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19833 );
        X4 = qobischeme_p( l15007 );
        X5 = qobischeme_p( l15008 );
        X3 = qobischeme_distance( X4, X5 );
        X6 = qobischeme_p( l15007 );
        X7 = qobischeme_q( l15008 );
        X5 = qobischeme_distance( X6, X7 );
        X8 = qobischeme_q( l15007 );
        X9 = qobischeme_p( l15008 );
        X7 = qobischeme_distance( X8, X9 );
        X10 = qobischeme_q( l15007 );
        X11 = qobischeme_q( l15008 );
        X9 = qobischeme_distance( X10, X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        X6 = sc_cons( X7, X8 );
        X4 = sc_cons( X5, X6 );
        X2 = sc_cons( X3, X4 );
        X1 = X2;
        POPSTACKTRACE( qobischeme_minp( qobischeme__3c_v, X1 ) );
}

DEFTSCP( ib_2dmisc_ary_2dfile_c506fef2_v );
DEFCSTRING( t19836, "WITH-PERSISTENT-TEMPORARY-FILE" );
EXTERNTSCPP( obischeme_ary_2dfile_f455cdb8, XAL1( TSCP ) );
EXTERNTSCP( obischeme_ary_2dfile_f455cdb8_v );
EXTERNTSCPP( obischeme_dnecessary_1e393221, XAL1( TSCP ) );
EXTERNTSCP( obischeme_dnecessary_1e393221_v );

TSCP  ib_2dmisc_ary_2dfile_c506fef2( p15012, f15013 )
        TSCP  p15012, f15013;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19836 );
        X1 = obischeme_ary_2dfile_f455cdb8( p15012 );
        X3 = f15013;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                          PROCEDURE_CLOSURE( X3 ) );
        obischeme_dnecessary_1e393221( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( ib_2dmisc_m_2doutput_38ec6a1e_v );
DEFCSTRING( t19840, "SYSTEM-OUTPUT" );
EXTERNTSCPP( obischeme_ary_2dfile_15e4569d, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_ary_2dfile_15e4569d_v );

TSCP  toollib_2dmisc_l15021( f15022, c19842 )
        TSCP  f15022, c19842;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15021 [inside SYSTEM-OUTPUT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19842, 0 );
        X4 = CONS( f15022, EMPTYLIST );
        X4 = CONS( DISPLAY( 0 ), X4 );
        X3 = scrt6_format( FALSEVALUE, CONS( c15023, X4 ) );
        scrt4_system( X3 );
        X2 = qobischeme_read_2dfile( f15022 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_m_2doutput_38ec6a1e( c15019 )
        TSCP  c15019;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19840 );
        DISPLAY( 0 ) = c15019;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15021, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( c15020, X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ure_2dpath_df819e9e_v );
DEFCSTRING( t19844, "ARCHITECTURE-PATH" );

TSCP  ib_2dmisc_ure_2dpath_df819e9e(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t19844 );
        X1 = ib_2dmisc_m_2doutput_38ec6a1e( c15029 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19847;
        scrt1__24__car_2derror( X1 );
L19847:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( toollib_2dmisc_pwd_v );
DEFCSTRING( t19849, "PWD" );

TSCP  toollib_2dmisc_pwd(  )
{
        PUSHSTACKTRACE( t19849 );
        POPSTACKTRACE( qobischeme_getenv( c15031 ) );
}

DEFTSCP( ib_2dmisc_ead_2dfile_58650293_v );
DEFCSTRING( t19851, "SAFE-READ-FILE" );
EXTERNTSCPP( qobischeme_file_2dexists_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_file_2dexists_3f_v );

TSCP  ib_2dmisc_ead_2dfile_58650293( f15033, d15034 )
        TSCP  f15033, d15034;
{
        PUSHSTACKTRACE( t19851 );
        if  ( FALSE( qobischeme_file_2dexists_3f( f15033 ) ) )  goto L19853;
        POPSTACKTRACE( qobischeme_read_2dfile( f15033 ) );
L19853:
        if  ( NEQ( _S2CUINT( d15034 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L19855;
        POPSTACKTRACE( qobischeme_panic( c15044, 
                                         CONS( f15033, EMPTYLIST ) ) );
L19855:
        if  ( EQ( TSCPTAG( d15034 ), PAIRTAG ) )  goto L19858;
        scrt1__24__car_2derror( d15034 );
L19858:
        POPSTACKTRACE( PAIR_CAR( d15034 ) );
}

DEFTSCP( toollib_2dmisc_lookup_v );
DEFCSTRING( t19860, "LOOKUP" );

TSCP  toollib_2dmisc_lookup( i15046, g15047 )
        TSCP  i15046, g15047;
{
        PUSHSTACKTRACE( t19860 );
        POPSTACKTRACE( scrt1_assoc( i15046, g15047 ) );
}

DEFTSCP( toollib_2dmisc_lookup_2dvalue_v );
DEFCSTRING( t19862, "LOOKUP-VALUE" );
EXTERNTSCPP( qobischeme_second, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_second_v );

TSCP  toollib_2dmisc_lookup_2dvalue( i15049, g15050 )
        TSCP  i15049, g15050;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19862 );
        X1 = scrt1_assoc( i15049, g15050 );
        if  ( FALSE( X1 ) )  goto L19865;
        POPSTACKTRACE( qobischeme_second( X1 ) );
L19865:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_p_2dvalues_6c98ba51_v );
DEFCSTRING( t19867, "LOOKUP-VALUES" );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );

TSCP  ib_2dmisc_p_2dvalues_6c98ba51( i15058, g15059 )
        TSCP  i15058, g15059;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19867 );
        X1 = scrt1_assoc( i15058, g15059 );
        if  ( FALSE( X1 ) )  goto L19870;
        POPSTACKTRACE( qobischeme_rest( X1 ) );
L19870:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_split_2dn_v );
DEFCSTRING( t19872, "SPLIT-N" );
EXTERNTSCPP( toollib_2dmisc_take, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_take_v );
EXTERNTSCPP( toollib_2dmisc_split_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_split_2dn_v );
EXTERNTSCPP( toollib_2dmisc_drop, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_drop_v );

TSCP  toollib_2dmisc_split_2dn( n15067, l15068 )
        TSCP  n15067, l15068;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19872 );
        if  ( EQ( _S2CUINT( l15068 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19874;
        X1 = toollib_2dmisc_take( n15067, l15068 );
        X3 = toollib_2dmisc_drop( n15067, l15068 );
        X2 = toollib_2dmisc_split_2dn( n15067, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L19874:
        POPSTACKTRACE( l15068 );
}

DEFTSCP( toollib_2dmisc_split_2dcomma_v );
DEFCSTRING( t19876, "SPLIT-COMMA" );
EXTERNTSCPP( _dpregexp_xp_2dsplit_6ce966b, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_xp_2dsplit_6ce966b_v );

TSCP  toollib_2dmisc_split_2dcomma( s15075 )
        TSCP  s15075;
{
        PUSHSTACKTRACE( t19876 );
        POPSTACKTRACE( _dpregexp_xp_2dsplit_6ce966b( c15076, s15075 ) );
}

DEFTSCP( toollib_2dmisc_flatten_2a_v );
DEFCSTRING( t19878, "FLATTEN*" );
EXTERNTSCPP( toollib_2dmisc_flatten_2a, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_flatten_2a_v );

TSCP  toollib_2dmisc_flatten_2a( l15078 )
        TSCP  l15078;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19878 );
L19879:
        if  ( EQ( _S2CUINT( l15078 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19880;
        if  ( EQ( TSCPTAG( l15078 ), PAIRTAG ) )  goto L19885;
        scrt1__24__car_2derror( l15078 );
L19885:
        X1 = PAIR_CAR( l15078 );
        if  ( FALSE( scrt1_list_3f( X1 ) ) )  goto L19882;
        X1 = PAIR_CAR( l15078 );
        X2 = PAIR_CDR( l15078 );
        l15078 = scrt1_append_2dtwo( X1, X2 );
        GOBACK( L19879 );
L19882:
        if  ( EQ( TSCPTAG( l15078 ), PAIRTAG ) )  goto L19890;
        scrt1__24__car_2derror( l15078 );
L19890:
        X1 = PAIR_CAR( l15078 );
        X3 = PAIR_CDR( l15078 );
        X2 = toollib_2dmisc_flatten_2a( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L19880:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( toollib_2dmisc_snoc_v );
DEFCSTRING( t19893, "SNOC" );

TSCP  toollib_2dmisc_snoc( l15105, a15106 )
        TSCP  l15105, a15106;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19893 );
        X2 = sc_cons( a15106, EMPTYLIST );
        X1 = X2;
        POPSTACKTRACE( scrt1_append_2dtwo( l15105, X1 ) );
}

DEFTSCP( toollib_2dmisc_maximum_v );
DEFCSTRING( t19896, "MAXIMUM" );

TSCP  toollib_2dmisc_maximum( l15110 )
        TSCP  l15110;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19896 );
        if  ( EQ( _S2CUINT( l15110 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19899;
        if  ( EQ( TSCPTAG( l15110 ), PAIRTAG ) )  goto L19902;
        scrt1__24__cdr_2derror( l15110 );
L19902:
        X1 = PAIR_CDR( l15110 );
        X2 = PAIR_CAR( l15110 );
L19905:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19906;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19911;
        scrt1__24__car_2derror( X1 );
L19911:
        X3 = PAIR_CAR( X1 );
        if  ( FALSE( qobischeme__3e_2dtwo( X3, X2 ) ) )  goto L19908;
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X1 );
        X1 = X3;
        GOBACK( L19905 );
L19908:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19916;
        scrt1__24__cdr_2derror( X1 );
L19916:
        X3 = PAIR_CDR( X1 );
        X1 = X3;
        GOBACK( L19905 );
L19906:
        POPSTACKTRACE( X2 );
L19899:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_minimum_v );
DEFCSTRING( t19918, "MINIMUM" );

TSCP  toollib_2dmisc_minimum( l15154 )
        TSCP  l15154;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19918 );
        if  ( EQ( _S2CUINT( l15154 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19921;
        if  ( EQ( TSCPTAG( l15154 ), PAIRTAG ) )  goto L19924;
        scrt1__24__cdr_2derror( l15154 );
L19924:
        X1 = PAIR_CDR( l15154 );
        X2 = PAIR_CAR( l15154 );
L19927:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19928;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19933;
        scrt1__24__car_2derror( X1 );
L19933:
        X3 = PAIR_CAR( X1 );
        if  ( FALSE( qobischeme__3c_2dtwo( X3, X2 ) ) )  goto L19930;
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X1 );
        X1 = X3;
        GOBACK( L19927 );
L19930:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19938;
        scrt1__24__cdr_2derror( X1 );
L19938:
        X3 = PAIR_CDR( X1 );
        X1 = X3;
        GOBACK( L19927 );
L19928:
        POPSTACKTRACE( X2 );
L19921:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_maximump_v );
DEFCSTRING( t19940, "MAXIMUMP" );

TSCP  toollib_2dmisc_maximump( l15198, p15199 )
        TSCP  l15198, p15199;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19940 );
        if  ( EQ( _S2CUINT( l15198 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19943;
        X1 = p15199;
        if  ( EQ( TSCPTAG( l15198 ), PAIRTAG ) )  goto L19946;
        scrt1__24__cdr_2derror( l15198 );
L19946:
        X2 = PAIR_CDR( l15198 );
        X3 = PAIR_CAR( l15198 );
L19949:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19950;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19955;
        scrt1__24__car_2derror( X2 );
L19955:
        X6 = PAIR_CAR( X2 );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = X1;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( qobischeme__3e_2dtwo( X4, X5 ) ) )  goto L19952;
        X4 = PAIR_CDR( X2 );
        X3 = PAIR_CAR( X2 );
        X2 = X4;
        GOBACK( L19949 );
L19952:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19960;
        scrt1__24__cdr_2derror( X2 );
L19960:
        X4 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L19949 );
L19950:
        POPSTACKTRACE( X3 );
L19943:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_minimump_v );
DEFCSTRING( t19962, "MINIMUMP" );

TSCP  toollib_2dmisc_minimump( l15244, p15245 )
        TSCP  l15244, p15245;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19962 );
        if  ( EQ( _S2CUINT( l15244 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19965;
        X1 = p15245;
        if  ( EQ( TSCPTAG( l15244 ), PAIRTAG ) )  goto L19968;
        scrt1__24__cdr_2derror( l15244 );
L19968:
        X2 = PAIR_CDR( l15244 );
        X3 = PAIR_CAR( l15244 );
L19971:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19972;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19977;
        scrt1__24__car_2derror( X2 );
L19977:
        X6 = PAIR_CAR( X2 );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = X1;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X4, X5 ) ) )  goto L19974;
        X4 = PAIR_CDR( X2 );
        X3 = PAIR_CAR( X2 );
        X2 = X4;
        GOBACK( L19971 );
L19974:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19982;
        scrt1__24__cdr_2derror( X2 );
L19982:
        X4 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L19971 );
L19972:
        POPSTACKTRACE( X3 );
L19965:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_2dposition_5ae68915_v );
DEFCSTRING( t19984, "MAXIMUM-WITH-POSITION" );

TSCP  ib_2dmisc_2dposition_5ae68915( l15290 )
        TSCP  l15290;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19984 );
        X1 = _TSCP( 0 );
        X2 = _TSCP( -4 );
        X3 = FALSEVALUE;
        X4 = l15290;
L19987:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19988;
        X6 = sc_cons( X2, EMPTYLIST );
        X5 = sc_cons( X3, X6 );
        POPSTACKTRACE( X5 );
L19988:
        X5 = qobischeme_first( X4 );
        if  ( FALSE( X3 ) )  goto L19993;
        X6 = X3;
        goto L19994;
L19993:
        X6 = qobischeme_minus_2dinfinity_v;
L19994:
        if  ( FALSE( qobischeme__3e_2dtwo( X5, X6 ) ) )  goto L19991;
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X6 = qobischeme_first( X4 );
        X4 = qobischeme_rest( X4 );
        X3 = X6;
        X2 = X1;
        X1 = X5;
        GOBACK( L19987 );
L19991:
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X4 = qobischeme_rest( X4 );
        X1 = X5;
        GOBACK( L19987 );
}

DEFTSCP( ib_2dmisc_2dposition_6453419d_v );
DEFCSTRING( t19995, "MINIMUM-WITH-POSITION" );

TSCP  ib_2dmisc_2dposition_6453419d( l15321 )
        TSCP  l15321;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19995 );
        X1 = _TSCP( 0 );
        X2 = _TSCP( -4 );
        X3 = FALSEVALUE;
        X4 = l15321;
L19998:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19999;
        X6 = sc_cons( X2, EMPTYLIST );
        X5 = sc_cons( X3, X6 );
        POPSTACKTRACE( X5 );
L19999:
        X5 = qobischeme_first( X4 );
        if  ( FALSE( X3 ) )  goto L20004;
        X6 = X3;
        goto L20005;
L20004:
        X6 = qobischeme_infinity_v;
L20005:
        if  ( FALSE( qobischeme__3c_2dtwo( X5, X6 ) ) )  goto L20002;
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X6 = qobischeme_first( X4 );
        X4 = qobischeme_rest( X4 );
        X3 = X6;
        X2 = X1;
        X1 = X5;
        GOBACK( L19998 );
L20002:
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X4 = qobischeme_rest( X4 );
        X1 = X5;
        GOBACK( L19998 );
}

DEFTSCP( toollib_2dmisc_safe_2dsublist_v );
DEFCSTRING( t20006, "SAFE-SUBLIST" );
EXTERNTSCPP( qobischeme_sublist, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sublist_v );

TSCP  toollib_2dmisc_safe_2dsublist( l15351, s15352, f15353 )
        TSCP  l15351, s15352, f15353;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20006 );
        X1 = scrt1_length( l15351 );
        X2 = qobischeme__2d_2dtwo( f15353, s15352 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X1, X2 ) ) )  goto L20008;
        POPSTACKTRACE( qobischeme_sublist( l15351, s15352, f15353 ) );
L20008:
        POPSTACKTRACE( l15351 );
}

DEFTSCP( ib_2dmisc_d_2dvector_58ad8696_v );
DEFCSTRING( t20010, "APPEND-VECTOR" );
EXTERNTSCPP( qobischeme_map_2dn_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_2dvector_v );

TSCP  toollib_2dmisc_l15366( i15367, c20019 )
        TSCP  i15367, c20019;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15366 [inside APPEND-VECTOR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20019, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20019, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20019, 2 );
        if  ( FALSE( qobischeme__3c_2dtwo( i15367, DISPLAY( 2 ) ) )
            )  goto L20021;
        X5 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20024;
        scdebug_error( c13410, 
                       c13411, CONS( X5, EMPTYLIST ) );
L20024:
        if  ( EQ( TSCPTAG( i15367 ), FIXNUMTAG ) )  goto L20026;
        scdebug_error( c13410, 
                       c13414, CONS( i15367, EMPTYLIST ) );
L20026:
        if  ( LT( _S2CUINT( FIXED_C( i15367 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20028;
        scdebug_error( c13410, 
                       c13418, CONS( i15367, EMPTYLIST ) );
L20028:
        X4 = VECTOR_ELEMENT( X5, i15367 );
        goto L20022;
L20021:
        X5 = DISPLAY( 1 );
        X6 = qobischeme__2d_2dtwo( i15367, DISPLAY( 2 ) );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20031;
        scdebug_error( c13410, 
                       c13411, CONS( X5, EMPTYLIST ) );
L20031:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L20033;
        scdebug_error( c13410, 
                       c13414, CONS( X6, EMPTYLIST ) );
L20033:
        if  ( LT( _S2CUINT( FIXED_C( X6 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20035;
        scdebug_error( c13410, 
                       c13418, CONS( X6, EMPTYLIST ) );
L20035:
        X4 = VECTOR_ELEMENT( X5, X6 );
L20022:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  ib_2dmisc_d_2dvector_58ad8696( v15361, v15362 )
        TSCP  v15361, v15362;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20010 );
        DISPLAY( 0 ) = v15361;
        DISPLAY( 1 ) = v15362;
        X2 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20013;
        scdebug_error( c13426, 
                       c13411, CONS( X2, EMPTYLIST ) );
L20013:
        X1 = C_FIXED( VECTOR_LENGTH( X2 ) );
        X2 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20016;
        scdebug_error( c13426, 
                       c13411, CONS( X2, EMPTYLIST ) );
L20016:
        DISPLAY( 2 ) = C_FIXED( VECTOR_LENGTH( X2 ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15366, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 2 ) ) );
        X3 = qobischeme__2b_2dtwo( DISPLAY( 2 ), X1 );
        SDVAL = qobischeme_map_2dn_2dvector( X2, X3 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2dposition_3ed14c76_v );
DEFCSTRING( t20037, "VECTOR-POSITION" );

TSCP  ib_2dmisc_2dposition_3ed14c76( v15406, v15407 )
        TSCP  v15406, v15407;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20037 );
        X1 = _TSCP( 0 );
L20040:
        if  ( AND( EQ( TSCPTAG( v15406 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v15406 ), VECTORTAG ) )
            )  goto L20044;
        scdebug_error( c13426, 
                       c13411, CONS( v15406, EMPTYLIST ) );
L20044:
        X2 = C_FIXED( VECTOR_LENGTH( v15406 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X1, X2 ) ) )  goto L20041;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20049;
        scdebug_error( c13410, 
                       c13414, CONS( X1, EMPTYLIST ) );
L20049:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v15406 ) ) ) )  goto L20051;
        scdebug_error( c13410, 
                       c13418, CONS( X1, EMPTYLIST ) );
L20051:
        X2 = VECTOR_ELEMENT( v15406, X1 );
        if  ( TRUE( scrt1_equal_3f( v15407, X2 ) ) )  goto L20046;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20040 );
L20046:
        POPSTACKTRACE( X1 );
L20041:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_rest_2dvector_v );
DEFCSTRING( t20053, "REST-VECTOR" );

TSCP  toollib_2dmisc_rest_2dvector( v15435 )
        TSCP  v15435;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20053 );
        if  ( AND( EQ( TSCPTAG( v15435 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v15435 ), VECTORTAG ) )
            )  goto L20056;
        scdebug_error( c13426, 
                       c13411, CONS( v15435, EMPTYLIST ) );
L20056:
        X1 = C_FIXED( VECTOR_LENGTH( v15435 ) );
        POPSTACKTRACE( qobischeme_subvector( v15435, 
                                             _TSCP( 4 ), X1 ) );
}

DEFTSCP( ib_2dmisc_f_2dvector_8b75269e_v );
DEFCSTRING( t20058, "REMOVE-IF-VECTOR" );
EXTERNTSCP( sc_emptyvector );
EXTERNTSCPP( qobischeme_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_zero_3f_v );

TSCP  ib_2dmisc_f_2dvector_8b75269e( p15441, v15442 )
        TSCP  p15441, v15442;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20058 );
        X1 = sc_emptyvector;
        X2 = v15442;
        X3 = X1;
L20062:
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20066;
        scdebug_error( c13426, 
                       c13411, CONS( X2, EMPTYLIST ) );
L20066:
        X4 = C_FIXED( VECTOR_LENGTH( X2 ) );
        if  ( TRUE( qobischeme_zero_3f( X4 ) ) )  goto L20063;
        X5 = qobischeme_x( X2 );
        X4 = p15441;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20068;
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X2 = X4;
        GOBACK( L20062 );
L20068:
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X5 = qobischeme_subvector( X2, _TSCP( 0 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_d_2dvector_58ad8696( X3, X5 );
        X2 = X4;
        GOBACK( L20062 );
L20063:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_t_2dvector_9580ea2a_v );
DEFCSTRING( t20070, "REMOVE-IF-NOT-VECTOR" );

TSCP  ib_2dmisc_t_2dvector_9580ea2a( p15456, v15457 )
        TSCP  p15456, v15457;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20070 );
        X1 = sc_emptyvector;
        X2 = v15457;
        X3 = X1;
L20074:
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20078;
        scdebug_error( c13426, 
                       c13411, CONS( X2, EMPTYLIST ) );
L20078:
        X4 = C_FIXED( VECTOR_LENGTH( X2 ) );
        if  ( TRUE( qobischeme_zero_3f( X4 ) ) )  goto L20075;
        X5 = qobischeme_x( X2 );
        X4 = p15456;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20080;
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X5 = qobischeme_subvector( X2, _TSCP( 0 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_d_2dvector_58ad8696( X3, X5 );
        X2 = X4;
        GOBACK( L20074 );
L20080:
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X2 = X4;
        GOBACK( L20074 );
L20075:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_o_v );
DEFCSTRING( t20082, "O" );

TSCP  toollib_2dmisc_l15478( x15479, f15480, c20087 )
        TSCP  x15479, f15480, c20087;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15478 [inside O]" );
        X1 = f15480;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( x15479, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( qobischeme_last, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_last_v );

TSCP  toollib_2dmisc_l15476( d15477, c20085 )
        TSCP  d15477, c20085;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15476 [inside O]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20085, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l15478, EMPTYLIST );
        X5 = scrt1_reverse( DISPLAY( 0 ) );
        X4 = qobischeme_rest( X5 );
        X6 = qobischeme_last( DISPLAY( 0 ) );
        X5 = sc_apply_2dtwo( X6, d15477 );
        X2 = toollib_2dmisc_foldl( X3, X4, X5 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_o( a15471, b15472, c15473 )
        TSCP  a15471, b15472, c15473;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20082 );
        X1 = sc_cons( b15472, c15473 );
        DISPLAY( 0 ) = sc_cons( a15471, X1 );
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               toollib_2dmisc_l15476, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dvector_e52d1f5a_v );
DEFCSTRING( t20089, "FOR-EACH-INDEXED-VECTOR" );
EXTERNTSCPP( qobischeme_for_2deach_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_for_2deach_2dn_v );

TSCP  toollib_2dmisc_l15484( i15485, c20091 )
        TSCP  i15485, c20091;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15484 [inside FOR-EACH-INDEXED-VECT\
OR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20091, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20091, 1 );
        X6 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L20094;
        scdebug_error( c13410, 
                       c13411, CONS( X6, EMPTYLIST ) );
L20094:
        if  ( EQ( TSCPTAG( i15485 ), FIXNUMTAG ) )  goto L20096;
        scdebug_error( c13410, 
                       c13414, CONS( i15485, EMPTYLIST ) );
L20096:
        if  ( LT( _S2CUINT( FIXED_C( i15485 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L20098;
        scdebug_error( c13410, 
                       c13418, CONS( i15485, EMPTYLIST ) );
L20098:
        X5 = VECTOR_ELEMENT( X6, i15485 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          i15485, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_d_2dvector_e52d1f5a( f15482, v15483 )
        TSCP  f15482, v15483;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20089 );
        DISPLAY( 0 ) = f15482;
        DISPLAY( 1 ) = v15483;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15484, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20101;
        scdebug_error( c13426, 
                       c13411, CONS( X3, EMPTYLIST ) );
L20101:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        SDVAL = qobischeme_for_2deach_2dn( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_crop_v );
DEFCSTRING( t20103, "CROP" );

TSCP  toollib_2dmisc_l15506( r15507, c20105 )
        TSCP  r15507, c20105;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15506 [inside CROP]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20105, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20105, 1 );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 0 ), 
                                   DISPLAY( 1 ) );
        X3 = qobischeme_subvector( r15507, DISPLAY( 0 ), X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_crop( m15501, 
                           x15502, y15503, w15504, h15505 )
        TSCP  m15501, x15502, y15503, w15504, h15505;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20103 );
        DISPLAY( 0 ) = x15502;
        DISPLAY( 1 ) = w15504;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15506, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme__2b_2dtwo( y15503, h15505 );
        X2 = qobischeme_subvector( m15501, y15503, X3 );
        SDVAL = qobischeme_map_2dvector( X1, X2, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dlinear_v );
DEFCSTRING( t20107, "MAP-LINEAR" );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );

TSCP  toollib_2dmisc_l15519( v15520, c20109 )
        TSCP  v15520, c20109;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15519 [inside MAP-LINEAR]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20109, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20109, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20109, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20109, 3 );
        X10 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X9 = qobischeme__2f_2dtwo( X10, DISPLAY( 3 ) );
        X8 = qobischeme__2a_2dtwo( v15520, X9 );
        X7 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X8 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X7, 
                                          PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_map_2dlinear( f15515, 
                                   s15516, e15517, n15518 )
        TSCP  f15515, s15516, e15517, n15518;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20107 );
        DISPLAY( 0 ) = f15515;
        DISPLAY( 1 ) = s15516;
        DISPLAY( 2 ) = e15517;
        DISPLAY( 3 ) = n15518;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15519, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = qobischeme__2b_2dtwo( _TSCP( 4 ), DISPLAY( 3 ) );
        SDVAL = qobischeme_map_2dn( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dmedial_v );
DEFCSTRING( t20111, "MAP-MEDIAL" );
EXTERNTSCPP( qobischeme_sort, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sort_v );

TSCP  toollib_2dmisc_map_2dmedial( f15537, l15538, k15539 )
        TSCP  f15537, l15538, k15539;
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

        PUSHSTACKTRACE( t20111 );
        if  ( EQ( _S2CUINT( l15538 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20113;
        X2 = qobischeme_sort( l15538, qobischeme__3c_v, k15539 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20116;
        scrt1__24__cdr_2derror( X2 );
L20116:
        X1 = PAIR_CDR( X2 );
        X2 = qobischeme_sort( l15538, qobischeme__3c_v, k15539 );
        X3 = X1;
        X4 = X2;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L20120:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20121;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L20124;
        scrt1__24__car_2derror( X3 );
L20124:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20127;
        scrt1__24__car_2derror( X4 );
L20127:
        X10 = PAIR_CAR( X4 );
        X15 = k15539;
        X15 = UNKNOWNCALL( X15, 1 );
        X14 = VIA( PROCEDURE_CODE( X15 ) )( X9, 
                                            PROCEDURE_CLOSURE( X15 ) );
        X16 = k15539;
        X16 = UNKNOWNCALL( X16, 1 );
        X15 = VIA( PROCEDURE_CODE( X16 ) )( X10, 
                                            PROCEDURE_CLOSURE( X16 ) );
        X13 = qobischeme__2b_2dtwo( X14, X15 );
        X12 = qobischeme__2f_2dtwo( X13, _TSCP( 8 ) );
        X11 = f15537;
        X11 = UNKNOWNCALL( X11, 1 );
        X8 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                           PROCEDURE_CLOSURE( X11 ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20131;
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X9;
        X3 = X8;
        GOBACK( L20120 );
L20131:
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L20138;
        scdebug_error( c13513, 
                       c13514, CONS( X6, EMPTYLIST ) );
L20138:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X9;
        X3 = X8;
        GOBACK( L20120 );
L20121:
        POPSTACKTRACE( X5 );
L20113:
        POPSTACKTRACE( l15538 );
}

DEFTSCP( ib_2dmisc_2dref_2dnd_f10eab19_v );
DEFCSTRING( t20140, "MATRIX-REF-ND" );
EXTERNTSCPP( ib_2dmisc_2dref_2dnd_f10eab19, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_2dref_2dnd_f10eab19_v );

TSCP  ib_2dmisc_2dref_2dnd_f10eab19( m15616, i15617 )
        TSCP  m15616, i15617;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20140 );
        X1 = scrt1_length( i15617 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20142;
        X1 = qobischeme_first( i15617 );
        if  ( AND( EQ( TSCPTAG( m15616 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15616 ), VECTORTAG ) )
            )  goto L20145;
        scdebug_error( c13410, 
                       c13411, CONS( m15616, EMPTYLIST ) );
L20145:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20147;
        scdebug_error( c13410, 
                       c13414, CONS( X1, EMPTYLIST ) );
L20147:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15616 ) ) ) )  goto L20149;
        scdebug_error( c13410, 
                       c13418, CONS( X1, EMPTYLIST ) );
L20149:
        POPSTACKTRACE( VECTOR_ELEMENT( m15616, X1 ) );
L20142:
        X3 = qobischeme_first( i15617 );
        if  ( AND( EQ( TSCPTAG( m15616 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15616 ), VECTORTAG ) )
            )  goto L20152;
        scdebug_error( c13410, 
                       c13411, CONS( m15616, EMPTYLIST ) );
L20152:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L20154;
        scdebug_error( c13410, 
                       c13414, CONS( X3, EMPTYLIST ) );
L20154:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15616 ) ) ) )  goto L20156;
        scdebug_error( c13410, 
                       c13418, CONS( X3, EMPTYLIST ) );
L20156:
        X2 = VECTOR_ELEMENT( m15616, X3 );
        X3 = qobischeme_rest( i15617 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt1_append_2dtwo( X3, X4 ), 
                                  EMPTYLIST ) );
        POPSTACKTRACE( sc_apply_2dtwo( ib_2dmisc_2dref_2dnd_f10eab19_v, 
                                       X1 ) );
}

DEFTSCP( ib_2dmisc_2d3d_2dref_baeb01c_v );
DEFCSTRING( t20158, "MATRIX-3D-REF" );

TSCP  ib_2dmisc_2d3d_2dref_baeb01c( a15642, 
                                    s15643, i15644, j15645 )
        TSCP  a15642, s15643, i15644, j15645;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20158 );
        X1 = CONS( j15645, EMPTYLIST );
        X1 = CONS( i15644, X1 );
        POPSTACKTRACE( ib_2dmisc_2dref_2dnd_f10eab19( a15642, 
                                                      CONS( s15643, X1 ) ) );
}

DEFTSCP( ib_2dmisc_et_2dnd_21_214a58da_v );
DEFCSTRING( t20160, "MATRIX-SET-ND!" );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( ib_2dmisc_et_2dnd_21_214a58da, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_et_2dnd_21_214a58da_v );

TSCP  ib_2dmisc_et_2dnd_21_214a58da( m15647, v15648, i15649 )
        TSCP  m15647, v15648, i15649;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20160 );
        X1 = scrt1_length( i15649 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20162;
        scrt6_write( m15647, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        X1 = qobischeme_first( i15649 );
        if  ( AND( EQ( TSCPTAG( m15647 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15647 ), VECTORTAG ) )
            )  goto L20166;
        scdebug_error( c14291, 
                       c13411, CONS( m15647, EMPTYLIST ) );
L20166:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20168;
        scdebug_error( c14291, 
                       c13414, CONS( X1, EMPTYLIST ) );
L20168:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15647 ) ) ) )  goto L20170;
        scdebug_error( c14291, 
                       c13418, CONS( X1, EMPTYLIST ) );
L20170:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( m15647, X1 ), 
                               v15648 ) );
L20162:
        X3 = qobischeme_first( i15649 );
        if  ( AND( EQ( TSCPTAG( m15647 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15647 ), VECTORTAG ) )
            )  goto L20173;
        scdebug_error( c13410, 
                       c13411, CONS( m15647, EMPTYLIST ) );
L20173:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L20175;
        scdebug_error( c13410, 
                       c13414, CONS( X3, EMPTYLIST ) );
L20175:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15647 ) ) ) )  goto L20177;
        scdebug_error( c13410, 
                       c13418, CONS( X3, EMPTYLIST ) );
L20177:
        X2 = VECTOR_ELEMENT( m15647, X3 );
        X4 = qobischeme_rest( i15649 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_append_2dtwo( X4, X5 ), EMPTYLIST );
        X1 = scrt1_cons_2a( X2, CONS( v15648, X3 ) );
        POPSTACKTRACE( sc_apply_2dtwo( ib_2dmisc_et_2dnd_21_214a58da_v, 
                                       X1 ) );
}

DEFTSCP( ib_2dmisc_d_2dset_21_2a950b3f_v );
DEFCSTRING( t20179, "MATRIX-3D-SET!" );

TSCP  ib_2dmisc_d_2dset_21_2a950b3f( a15676, 
                                     v15677, 
                                     s15678, i15679, j15680 )
        TSCP  a15676, v15677, s15678, i15679, j15680;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20179 );
        X1 = CONS( j15680, EMPTYLIST );
        X1 = CONS( i15679, X1 );
        POPSTACKTRACE( ib_2dmisc_et_2dnd_21_214a58da( a15676, 
                                                      v15677, 
                                                      CONS( s15678, X1 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_96246a2e_v );
DEFCSTRING( t20181, "MAP-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_96246a2e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_96246a2e_v );

TSCP  toollib_2dmisc_l15688( m15689, c20185 )
        TSCP  m15689, c20185;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15688 [inside MAP-MATRIX-ND]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20185, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20185, 1 );
        X4 = qobischeme__2d_2dtwo( DISPLAY( 1 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_atrix_2dnd_96246a2e( DISPLAY( 0 ), 
                                            m15689, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_atrix_2dnd_96246a2e( f15682, m15683, n15684 )
        TSCP  f15682, m15683, n15684;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20181 );
        DISPLAY( 0 ) = f15682;
        DISPLAY( 1 ) = n15684;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 1 ), 
                                           _TSCP( 4 ) ) ) )  goto L20183;
        SDVAL = qobischeme_map_2dvector( DISPLAY( 0 ), 
                                         m15683, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L20183:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15688, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, m15683, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_243ca8eb_v );
DEFCSTRING( t20187, "FOR-EACH-MATRIX-ND" );
EXTERNTSCPP( obischeme_h_2dvector_fe309b1e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_h_2dvector_fe309b1e_v );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_243ca8eb, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_243ca8eb_v );

TSCP  toollib_2dmisc_l15700( m15701, c20191 )
        TSCP  m15701, c20191;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15700 [inside FOR-EACH-MATRIX-ND]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20191, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20191, 1 );
        X4 = qobischeme__2d_2dtwo( DISPLAY( 1 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_atrix_2dnd_243ca8eb( DISPLAY( 0 ), 
                                            m15701, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_atrix_2dnd_243ca8eb( f15694, m15695, n15696 )
        TSCP  f15694, m15695, n15696;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20187 );
        DISPLAY( 0 ) = f15694;
        DISPLAY( 1 ) = n15696;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 1 ), 
                                           _TSCP( 4 ) ) ) )  goto L20189;
        SDVAL = obischeme_h_2dvector_fe309b1e( DISPLAY( 0 ), 
                                               m15695, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L20189:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15700, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = obischeme_h_2dvector_fe309b1e( X1, 
                                               m15695, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dmatrix_v );
DEFCSTRING( t20193, "MAP-MATRIX" );

TSCP  toollib_2dmisc_map_2dmatrix( f15706, m15707 )
        TSCP  f15706, m15707;
{
        PUSHSTACKTRACE( t20193 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_96246a2e( f15706, 
                                                      m15707, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_h_2dmatrix_9b00ff76_v );
DEFCSTRING( t20195, "FOR-EACH-MATRIX" );

TSCP  ib_2dmisc_h_2dmatrix_9b00ff76( f15709, m15710 )
        TSCP  f15709, m15710;
{
        PUSHSTACKTRACE( t20195 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_243ca8eb( f15709, 
                                                      m15710, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_99314937_v );
DEFCSTRING( t20197, "MAP-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_99314937( f15712, m15713 )
        TSCP  f15712, m15713;
{
        PUSHSTACKTRACE( t20197 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_96246a2e( f15712, 
                                                      m15713, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_2b298bf2_v );
DEFCSTRING( t20199, "FOR-EACH-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_2b298bf2( f15715, m15716 )
        TSCP  f15715, m15716;
{
        PUSHSTACKTRACE( t20199 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_243ca8eb( f15715, 
                                                      m15716, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_n_2dmatrix_7b48bbf5_v );
DEFCSTRING( t20201, "MAP-N-MATRIX" );

TSCP  toollib_2dmisc_l15723( j15724, c20205 )
        TSCP  j15724, c20205;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15723 [inside MAP-N-MATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20205, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20205, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          j15724, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15721( i15722, c20203 )
        TSCP  i15722, c20203;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15721 [inside MAP-N-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20203, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20203, 1 );
        DISPLAY( 2 ) = i15722;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15723, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_map_2dn_2dvector( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_n_2dmatrix_7b48bbf5( f15718, i15719, j15720 )
        TSCP  f15718, i15719, j15720;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20201 );
        DISPLAY( 0 ) = f15718;
        DISPLAY( 1 ) = j15720;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15721, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, i15719 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_n_2dmatrix_de81564c_v );
DEFCSTRING( t20207, "FOR-EACH-N-MATRIX" );

TSCP  toollib_2dmisc_l15731( j15732, c20211 )
        TSCP  j15732, c20211;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15731 [inside FOR-EACH-N-MATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20211, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20211, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          j15732, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15729( i15730, c20209 )
        TSCP  i15730, c20209;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15729 [inside FOR-EACH-N-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20209, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20209, 1 );
        DISPLAY( 2 ) = i15730;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15731, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_for_2deach_2dn( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_n_2dmatrix_de81564c( f15726, i15727, j15728 )
        TSCP  f15726, i15727, j15728;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20207 );
        DISPLAY( 0 ) = f15726;
        DISPLAY( 1 ) = j15728;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15729, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_for_2deach_2dn( X1, i15727 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dmatrix_3f07691a_v );
DEFCSTRING( t20213, "MAP-INDEXED-MATRIX" );
EXTERNTSCPP( ib_2dmisc_d_2dvector_dc5a608e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_d_2dvector_dc5a608e_v );

TSCP  toollib_2dmisc_l15739( c15740, j15741, c20217 )
        TSCP  c15740, j15741, c20217;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15739 [inside MAP-INDEXED-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20217, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20217, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15740, 
                                          DISPLAY( 1 ), 
                                          j15741, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15736( r15737, i15738, c20215 )
        TSCP  r15737, i15738, c20215;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15736 [inside MAP-INDEXED-MATRIX]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20215, 0 );
        DISPLAY( 1 ) = i15738;
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15739, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dvector_dc5a608e( X3, r15737, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_d_2dmatrix_3f07691a( f15734, m15735 )
        TSCP  f15734, m15735;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20213 );
        DISPLAY( 0 ) = f15734;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15736, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_dc5a608e( X1, 
                                               m15735, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dmatrix_67016ce_v );
DEFCSTRING( t20219, "FOR-EACH-INDEXED-MATRIX" );

TSCP  toollib_2dmisc_l15748( c15749, j15750, c20223 )
        TSCP  c15749, j15750, c20223;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15748 [inside FOR-EACH-INDEXED-MATR\
IX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20223, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20223, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15749, 
                                          DISPLAY( 1 ), 
                                          j15750, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15745( r15746, i15747, c20221 )
        TSCP  r15746, i15747, c20221;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15745 [inside FOR-EACH-INDEXED-MATR\
IX]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20221, 0 );
        DISPLAY( 1 ) = i15747;
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15748, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dvector_e52d1f5a( X3, r15746 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_d_2dmatrix_67016ce( f15743, m15744 )
        TSCP  f15743, m15744;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20219 );
        DISPLAY( 0 ) = f15743;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15745, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_e52d1f5a( X1, m15744 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_20e4c0ae_v );
DEFCSTRING( t20225, "MAP-INDEXED-MATRIX-3D" );

TSCP  toollib_2dmisc_l15757( c15758, i15759, j15760, c20229 )
        TSCP  c15758, i15759, j15760, c20229;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15757 [inside MAP-INDEXED-MATRIX-3D\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20229, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20229, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 4 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15758, 
                                          DISPLAY( 1 ), 
                                          i15759, 
                                          j15760, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15754( s15755, l15756, c20227 )
        TSCP  s15755, l15756, c20227;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15754 [inside MAP-INDEXED-MATRIX-3D\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20227, 0 );
        DISPLAY( 1 ) = l15756;
        X3 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l15757, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dmatrix_3f07691a( X3, s15755 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_atrix_2d3d_20e4c0ae( f15752, p15753 )
        TSCP  f15752, p15753;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20225 );
        DISPLAY( 0 ) = f15752;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15754, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_dc5a608e( X1, 
                                               p15753, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_30f75a92_v );
DEFCSTRING( t20231, "FOR-EACH-INDEXED-MATRIX-3D" );

TSCP  toollib_2dmisc_l15767( c15768, i15769, j15770, c20235 )
        TSCP  c15768, i15769, j15770, c20235;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15767 [inside FOR-EACH-INDEXED-MATR\
IX-3D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20235, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20235, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 4 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15768, 
                                          DISPLAY( 1 ), 
                                          i15769, 
                                          j15770, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15764( s15765, l15766, c20233 )
        TSCP  s15765, l15766, c20233;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15764 [inside FOR-EACH-INDEXED-MATR\
IX-3D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20233, 0 );
        DISPLAY( 1 ) = l15766;
        X3 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l15767, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dmatrix_67016ce( X3, s15765 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_atrix_2d3d_30f75a92( f15762, p15763 )
        TSCP  f15762, p15763;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20231 );
        DISPLAY( 0 ) = f15762;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15764, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_e52d1f5a( X1, p15763 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_835dc287_v );
DEFCSTRING( t20237, "REDUCE-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_835dc287, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_835dc287_v );

TSCP  toollib_2dmisc_l15779( m15780, c20241 )
        TSCP  m15780, c20241;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15779 [inside REDUCE-MATRIX-ND]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20241, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20241, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20241, 2 );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 2 ), _TSCP( 4 ) );
        X4 = ib_2dmisc_atrix_2dnd_835dc287( DISPLAY( 0 ), 
                                            m15780, 
                                            DISPLAY( 1 ), X5 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  ib_2dmisc_atrix_2dnd_835dc287( g15772, 
                                     m15773, i15774, n15775 )
        TSCP  g15772, m15773, i15774, n15775;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20237 );
        DISPLAY( 0 ) = g15772;
        DISPLAY( 1 ) = i15774;
        DISPLAY( 2 ) = n15775;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 2 ), 
                                           _TSCP( 4 ) ) ) )  goto L20239;
        SDVAL = qobischeme_reduce_2dvector( DISPLAY( 0 ), 
                                            m15773, DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L20239:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15779, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = qobischeme_map_2dvector( X2, m15773, EMPTYLIST );
        SDVAL = qobischeme_reduce_2dvector( DISPLAY( 0 ), 
                                            X1, DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_17ba6b06_v );
DEFCSTRING( t20243, "MAP-REDUCE-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_17ba6b06, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_17ba6b06_v );

TSCP  toollib_2dmisc_l15793( m15794, c20247 )
        TSCP  m15794, c20247;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15793 [inside MAP-REDUCE-MATRIX-ND]\
" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20247, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20247, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20247, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20247, 3 );
        X6 = qobischeme__2d_2dtwo( DISPLAY( 3 ), _TSCP( 4 ) );
        X5 = ib_2dmisc_atrix_2dnd_17ba6b06( DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            m15794, X6 );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  ib_2dmisc_atrix_2dnd_17ba6b06( g15785, 
                                     i15786, 
                                     f15787, m15788, n15789 )
        TSCP  g15785, i15786, f15787, m15788, n15789;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20243 );
        DISPLAY( 0 ) = g15785;
        DISPLAY( 1 ) = i15786;
        DISPLAY( 2 ) = f15787;
        DISPLAY( 3 ) = n15789;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 3 ), 
                                           _TSCP( 4 ) ) ) )  goto L20245;
        SDVAL = obischeme_e_2dvector_6be5ec0a( DISPLAY( 0 ), 
                                               DISPLAY( 1 ), 
                                               DISPLAY( 2 ), 
                                               m15788, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
L20245:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15793, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = qobischeme_map_2dvector( X2, m15788, EMPTYLIST );
        SDVAL = obischeme_e_2dvector_6be5ec0a( DISPLAY( 0 ), 
                                               DISPLAY( 1 ), 
                                               DISPLAY( 2 ), 
                                               X1, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_e_2dmatrix_500e2fbc_v );
DEFCSTRING( t20249, "REDUCE-MATRIX" );

TSCP  ib_2dmisc_e_2dmatrix_500e2fbc( g15799, m15800, i15801 )
        TSCP  g15799, m15800, i15801;
{
        PUSHSTACKTRACE( t20249 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_835dc287( g15799, 
                                                      m15800, 
                                                      i15801, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_e_2dmatrix_3b2d0a7_v );
DEFCSTRING( t20251, "MAP-REDUCE-MATRIX" );

TSCP  ib_2dmisc_e_2dmatrix_3b2d0a7( g15803, 
                                    i15804, f15805, m15806 )
        TSCP  g15803, i15804, f15805, m15806;
{
        PUSHSTACKTRACE( t20251 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_17ba6b06( g15803, 
                                                      i15804, 
                                                      f15805, 
                                                      m15806, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_8c48e19e_v );
DEFCSTRING( t20253, "REDUCE-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_8c48e19e( g15808, m15809, i15810 )
        TSCP  g15808, m15809, i15810;
{
        PUSHSTACKTRACE( t20253 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_835dc287( g15808, 
                                                      m15809, 
                                                      i15810, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_18af481f_v );
DEFCSTRING( t20255, "MAP-REDUCE-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_18af481f( g15812, 
                                     i15813, f15814, m15815 )
        TSCP  g15812, i15813, f15814, m15815;
{
        PUSHSTACKTRACE( t20255 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_17ba6b06( g15812, 
                                                      i15813, 
                                                      f15814, 
                                                      m15815, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_dimensions_4d85f46e_v );
DEFCSTRING( t20257, "MATRIX-DIMENSIONS" );
EXTERNTSCPP( qobischeme_vector_2dappend, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_vector_2dappend_v );

TSCP  ib_2dmisc_dimensions_4d85f46e( m15817 )
        TSCP  m15817;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20257 );
        X1 = sc_emptyvector;
        X2 = X1;
        X3 = m15817;
L20261:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )
            )  goto L20262;
        X7 = C_FIXED( VECTOR_LENGTH( X3 ) );
        X6 = scrt1_cons_2a( X7, CONS( EMPTYLIST, EMPTYLIST ) );
        X5 = CONS( scrt4_list_2d_3evector( X6 ), EMPTYLIST );
        X4 = qobischeme_vector_2dappend( CONS( X2, X5 ) );
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20266;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20266:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L20268;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20268:
        X3 = VECTOR_ELEMENT( X3, _TSCP( 0 ) );
        X2 = X4;
        GOBACK( L20261 );
L20262:
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_matrix_2dtrace_v );
DEFCSTRING( t20270, "MATRIX-TRACE" );
EXTERNTSCPP( obischeme_duplicates_bbb15811, XAL1( TSCP ) );
EXTERNTSCP( obischeme_duplicates_bbb15811_v );

TSCP  toollib_2dmisc_l15854( __15855, c20278 )
        TSCP  __15855, c20278;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15854 [inside MATRIX-TRACE]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20278, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15852( i15853, c20276 )
        TSCP  i15853, c20276;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15852 [inside MATRIX-TRACE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20276, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20276, 1 );
        DISPLAY( 2 ) = i15853;
        X5 = MAKEPROCEDURE( 0, 
                            1, 
                            toollib_2dmisc_l15854, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 2 ) ) );
        X4 = scrt1_cons_2a( DISPLAY( 0 ), 
                            CONS( qobischeme_map_2dn( X5, 
                                                      DISPLAY( 1 ) ), 
                                  EMPTYLIST ) );
        X3 = sc_apply_2dtwo( ib_2dmisc_2dref_2dnd_f10eab19_v, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_matrix_2dtrace( m15843 )
        TSCP  m15843;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20270 );
        DISPLAY( 0 ) = m15843;
        X2 = ib_2dmisc_dimensions_4d85f46e( DISPLAY( 0 ) );
        X1 = scrt4_vector_2d_3elist( X2 );
        DISPLAY( 1 ) = scrt1_length( X1 );
        X3 = obischeme_duplicates_bbb15811( X1 );
        X2 = scrt1_length( X3 );
        if  ( TRUE( qobischeme__3d_2dtwo( X2, _TSCP( 4 ) ) ) )  goto L20274;
        qobischeme_panic( c15851, EMPTYLIST );
L20274:
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15852, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X4 = qobischeme_first( X1 );
        X2 = qobischeme_map_2dn( X3, X4 );
        SDVAL = qobischeme_reduce( qobischeme__2b_v, 
                                   X2, _TSCP( 0 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dm_2dn_v );
DEFCSTRING( t20280, "MAP-M-N" );

TSCP  toollib_2dmisc_map_2dm_2dn( f15857, m15858, n15859 )
        TSCP  f15857, m15858, n15859;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20280 );
        X1 = m15858;
        X2 = EMPTYLIST;
L20283:
        if  ( FALSE( qobischeme__3e_2dtwo( X1, n15859 ) ) )  goto L20284;
        POPSTACKTRACE( scrt1_reverse( X2 ) );
L20284:
        X3 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X5 = f15857;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X1, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X2 = sc_cons( X4, X2 );
        X1 = X3;
        GOBACK( L20283 );
}

DEFTSCP( ib_2dmisc_ch_2dm_2dn_8222982c_v );
DEFCSTRING( t20286, "FOR-EACH-M-N" );

TSCP  ib_2dmisc_ch_2dm_2dn_8222982c( f15875, m15876, n15877 )
        TSCP  f15875, m15876, n15877;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20286 );
        X1 = m15876;
L20289:
        if  ( TRUE( qobischeme__3e_2dtwo( X1, n15877 ) ) )  goto L20290;
        X2 = f15875;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, PROCEDURE_CLOSURE( X2 ) );
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20289 );
L20290:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dn_2ddec_6800fcab_v );
DEFCSTRING( t20293, "FOR-EACH-M-N-DEC" );

TSCP  ib_2dmisc__2dn_2ddec_6800fcab( f15890, m15891, n15892 )
        TSCP  f15890, m15891, n15892;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20293 );
        X1 = m15891;
L20296:
        if  ( TRUE( qobischeme__3c_2dtwo( X1, n15892 ) ) )  goto L20297;
        X2 = f15890;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, PROCEDURE_CLOSURE( X2 ) );
        X1 = qobischeme__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20296 );
L20297:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_concat_v );
DEFCSTRING( t20300, "CONCAT" );
EXTERNTSCPP( scrt1_append, XAL1( TSCP ) );
EXTERNTSCP( scrt1_append_v );

TSCP  toollib_2dmisc_concat( l15905 )
        TSCP  l15905;
{
        PUSHSTACKTRACE( t20300 );
        POPSTACKTRACE( qobischeme_reduce( scrt1_append_v, 
                                          l15905, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_lat_2dlist_6a66ab96_v );
DEFCSTRING( t20302, "MATRIX->FLAT-LIST" );
EXTERNTSCPP( ib_2dmisc_e_2dmatrix_11b5d357, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_e_2dmatrix_11b5d357_v );

TSCP  ib_2dmisc_lat_2dlist_6a66ab96( p15907 )
        TSCP  p15907;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20302 );
        X1 = ib_2dmisc_e_2dmatrix_11b5d357( p15907 );
        POPSTACKTRACE( scrt4_vector_2d_3elist( X1 ) );
}

DEFTSCP( toollib_2dmisc_map_2dn_2d3_v );
DEFCSTRING( t20304, "MAP-N-3" );

TSCP  toollib_2dmisc_l15917( z15918, c20310 )
        TSCP  z15918, c20310;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15917 [inside MAP-N-3]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20310, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20310, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20310, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          z15918, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l15915( y15916, c20308 )
        TSCP  y15916, c20308;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15915 [inside MAP-N-3]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20308, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20308, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20308, 2 );
        DISPLAY( 4 ) = y15916;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15917, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = qobischeme_map_2dn( X5, DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_l15913( x15914, c20306 )
        TSCP  x15914, c20306;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15913 [inside MAP-N-3]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20306, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20306, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20306, 2 );
        DISPLAY( 3 ) = x15914;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15915, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = qobischeme_map_2dn( X5, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_map_2dn_2d3( f15909, 
                                  x15910, y15911, z15912 )
        TSCP  f15909, x15910, y15911, z15912;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20304 );
        DISPLAY( 0 ) = f15909;
        DISPLAY( 1 ) = y15911;
        DISPLAY( 2 ) = z15912;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15913, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn( X1, x15910 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_at_2dn_2d3_628f792d_v );
DEFCSTRING( t20312, "MAP-CONCAT-N-3" );
EXTERNTSCPP( ib_2dmisc_concat_2dn_feb89efa, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_concat_2dn_feb89efa_v );

TSCP  toollib_2dmisc_l15928( z15929, c20318 )
        TSCP  z15929, c20318;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15928 [inside MAP-CONCAT-N-3]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20318, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20318, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20318, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          z15929, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l15926( y15927, c20316 )
        TSCP  y15927, c20316;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15926 [inside MAP-CONCAT-N-3]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20316, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20316, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20316, 2 );
        DISPLAY( 4 ) = y15927;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15928, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = qobischeme_map_2dn( X5, DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_l15924( x15925, c20314 )
        TSCP  x15925, c20314;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15924 [inside MAP-CONCAT-N-3]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20314, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20314, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20314, 2 );
        DISPLAY( 3 ) = x15925;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15926, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = ib_2dmisc_concat_2dn_feb89efa( X5, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_at_2dn_2d3_628f792d( f15920, 
                                     x15921, y15922, z15923 )
        TSCP  f15920, x15921, y15922, z15923;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20312 );
        DISPLAY( 0 ) = f15920;
        DISPLAY( 1 ) = y15922;
        DISPLAY( 2 ) = z15923;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15924, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_concat_2dn_feb89efa( X1, x15921 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_c893abe0_v );
DEFCSTRING( t20320, "MAP-VECTOR-2D" );

TSCP  ib_2dmisc_ector_2d2d_c893abe0( f15931, m15932 )
        TSCP  f15931, m15932;
{
        PUSHSTACKTRACE( t20320 );
        POPSTACKTRACE( toollib_2dmisc_map_2dmatrix( f15931, m15932 ) );
}

DEFTSCP( ib_2dmisc_2d2_2dargs_aa33907c_v );
DEFCSTRING( t20322, "MAP-VECTOR-2D-2-ARGS" );

TSCP  toollib_2dmisc_l15940( x15941, x15942, c20326 )
        TSCP  x15941, x15942, c20326;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15940 [inside MAP-VECTOR-2D-2-ARGS]\
" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20326, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15941, 
                                          x15942, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15937( v15938, v15939, c20324 )
        TSCP  v15938, v15939, c20324;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15937 [inside MAP-VECTOR-2D-2-ARGS]\
" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20324, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15940, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_map_2dvector( X3, 
                                      v15938, 
                                      CONS( v15939, EMPTYLIST ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2d2_2dargs_aa33907c( f15934, m15935, m15936 )
        TSCP  f15934, m15935, m15936;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20322 );
        DISPLAY( 0 ) = f15934;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15937, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, 
                                         m15935, 
                                         CONS( m15936, EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_r_2d2d_2d2_b146b1cb_v );
DEFCSTRING( t20328, "MAP-VECTOR-2D-2" );

TSCP  toollib_2dmisc_l15950( x15951, y15952, c20332 )
        TSCP  x15951, y15952, c20332;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15950 [inside MAP-VECTOR-2D-2]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20332, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15951, 
                                          y15952, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15947( a15948, b15949, c20330 )
        TSCP  a15948, b15949, c20330;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15947 [inside MAP-VECTOR-2D-2]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20330, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15950, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_map_2dvector( X3, 
                                      a15948, 
                                      CONS( b15949, EMPTYLIST ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_r_2d2d_2d2_b146b1cb( f15944, a15945, b15946 )
        TSCP  f15944, a15945, b15946;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20328 );
        DISPLAY( 0 ) = f15944;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15947, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, 
                                         a15945, 
                                         CONS( b15946, EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_cf4cd6d4_v );
DEFCSTRING( t20334, "SOME-VECTOR-2D" );
EXTERNTSCPP( qobischeme_some_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_2dvector_v );

TSCP  toollib_2dmisc_l15958( x15959, c20338 )
        TSCP  x15959, c20338;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15958 [inside SOME-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20338, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15959, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15956( s15957, c20336 )
        TSCP  s15957, c20336;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15956 [inside SOME-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20336, 0 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15958, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_some_2dvector( X3, s15957, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_ector_2d2d_cf4cd6d4( p15954, v15955 )
        TSCP  p15954, v15955;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20334 );
        DISPLAY( 0 ) = p15954;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15956, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_some_2dvector( X1, v15955, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_d35ffcee_v );
DEFCSTRING( t20340, "EVERY-VECTOR-2D" );

TSCP  toollib_2dmisc_l15963( x15964, c20344 )
        TSCP  x15964, c20344;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15963 [inside EVERY-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20344, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( x15964, 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L20346;
        X2 = FALSEVALUE;
        goto L20347;
L20346:
        X2 = TRUEVALUE;
L20347:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_ector_2d2d_d35ffcee( p15961, v15962 )
        TSCP  p15961, v15962;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20340 );
        DISPLAY( 0 ) = p15961;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15963, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( TRUE( ib_2dmisc_ector_2d2d_cf4cd6d4( X1, v15962 ) )
            )  goto L20342;
        SDVAL = TRUEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20342:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_ddea0349_v );
DEFCSTRING( t20348, "REDUCE-VECTOR-2D" );

TSCP  ib_2dmisc_ector_2d2d_ddea0349( f15966, m15967, i15968 )
        TSCP  f15966, m15967, i15968;
{
        PUSHSTACKTRACE( t20348 );
        POPSTACKTRACE( ib_2dmisc_e_2dmatrix_500e2fbc( f15966, 
                                                      m15967, i15968 ) );
}

DEFTSCP( toollib_2dmisc_shape_2dmatrix_v );
DEFCSTRING( t20350, "SHAPE-MATRIX" );

TSCP  toollib_2dmisc_l15976( i15977, c20357 )
        TSCP  i15977, c20357;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15976 [inside SHAPE-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20357, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20357, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20357, 2 );
        X5 = DISPLAY( 2 );
        X7 = qobischeme__2a_2dtwo( i15977, DISPLAY( 1 ) );
        X9 = qobischeme__2b_2dtwo( i15977, _TSCP( 4 ) );
        X8 = qobischeme__2a_2dtwo( X9, DISPLAY( 1 ) );
        X6 = qobischeme_subvector( DISPLAY( 0 ), X7, X8 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20360;
        scdebug_error( c14291, 
                       c13411, CONS( X5, EMPTYLIST ) );
L20360:
        if  ( EQ( TSCPTAG( i15977 ), FIXNUMTAG ) )  goto L20362;
        scdebug_error( c14291, 
                       c13414, CONS( i15977, EMPTYLIST ) );
L20362:
        if  ( LT( _S2CUINT( FIXED_C( i15977 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20364;
        scdebug_error( c14291, 
                       c13418, CONS( i15977, EMPTYLIST ) );
L20364:
        X4 = SETGEN( VECTOR_ELEMENT( X5, i15977 ), X6 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_shape_2dmatrix( v15970, c15971 )
        TSCP  v15970, c15971;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20350 );
        DISPLAY( 0 ) = v15970;
        DISPLAY( 1 ) = c15971;
        X3 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20353;
        scdebug_error( c13426, 
                       c13411, CONS( X3, EMPTYLIST ) );
L20353:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        X1 = qobischeme__2f_2dtwo( X2, DISPLAY( 1 ) );
        DISPLAY( 2 ) = sc_make_2dvector( X1, EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15976, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 2 ) ) );
        qobischeme_for_2deach_2dn( X2, X1 );
        SDVAL = DISPLAY( 2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_e_2dmatrix_11b5d357_v );
DEFCSTRING( t20366, "UNSHAPE-MATRIX" );
EXTERNTSCPP( toollib_2dmisc_matrix_3f, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_matrix_3f_v );

TSCP  ib_2dmisc_e_2dmatrix_11b5d357( m16006 )
        TSCP  m16006;
{
        PUSHSTACKTRACE( t20366 );
L20367:
        if  ( TRUE( scrt1_equal_3f( m16006, sc_emptyvector ) )
            )  goto L20368;
        if  ( FALSE( toollib_2dmisc_matrix_3f( m16006 ) ) )  goto L20370;
        m16006 = qobischeme_reduce_2dvector( ib_2dmisc_d_2dvector_58ad8696_v, 
                                             m16006, sc_emptyvector );
        GOBACK( L20367 );
L20370:
        POPSTACKTRACE( m16006 );
L20368:
        POPSTACKTRACE( m16006 );
}

DEFTSCP( ib_2dmisc_of_2dlists_d3b9f71d_v );
DEFCSTRING( t20372, "MATRIX->LIST-OF-LISTS" );

TSCP  ib_2dmisc_of_2dlists_d3b9f71d( m16012 )
        TSCP  m16012;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20372 );
        X1 = qobischeme_map_2dvector( scrt4_vector_2d_3elist_v, 
                                      m16012, EMPTYLIST );
        POPSTACKTRACE( scrt4_vector_2d_3elist( X1 ) );
}

DEFTSCP( ib_2dmisc_d_3ematrix_c6388f1f_v );
DEFCSTRING( t20374, "LIST-OF-LISTS->MATRIX" );

TSCP  ib_2dmisc_d_3ematrix_c6388f1f( l16014 )
        TSCP  l16014;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20374 );
        X2 = l16014;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20378:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20379;
        X1 = X3;
        goto L20386;
L20379:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20382;
        scrt1__24__car_2derror( X2 );
L20382:
        X7 = PAIR_CAR( X2 );
        X6 = scrt4_list_2d_3evector( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20385;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20378 );
L20385:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20390;
        scdebug_error( c13513, 
                       c13514, CONS( X4, EMPTYLIST ) );
L20390:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20378 );
L20386:
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_of_2dlists_4a915dec_v );
DEFCSTRING( t20392, "TRANSPOSE-LIST-OF-LISTS" );
EXTERNTSCPP( qobischeme_transpose, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_transpose_v );

TSCP  ib_2dmisc_of_2dlists_4a915dec( l16058 )
        TSCP  l16058;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20392 );
        X2 = ib_2dmisc_d_3ematrix_c6388f1f( l16058 );
        X1 = qobischeme_transpose( X2 );
        POPSTACKTRACE( ib_2dmisc_of_2dlists_d3b9f71d( X1 ) );
}

DEFTSCP( toollib_2dmisc_zip_v );
DEFCSTRING( t20394, "ZIP" );

TSCP  toollib_2dmisc_l16105( a16106, b16107, c20396 )
        TSCP  a16106, b16107, c20396;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16105 [inside ZIP]" );
        X1 = b16107;
        X2 = a16106;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20400:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20401;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L20404;
        scrt1__24__car_2derror( X1 );
L20404:
        X7 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20407;
        scrt1__24__car_2derror( X2 );
L20407:
        X8 = PAIR_CAR( X2 );
        X6 = sc_cons( X7, X8 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20410;
        X6 = PAIR_CDR( X1 );
        X7 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X7;
        X1 = X6;
        GOBACK( L20400 );
L20410:
        X6 = PAIR_CDR( X1 );
        X7 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20417;
        scdebug_error( c13513, 
                       c13514, CONS( X4, EMPTYLIST ) );
L20417:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X7;
        X1 = X6;
        GOBACK( L20400 );
L20401:
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt1_list, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_v );

TSCP  toollib_2dmisc_zip( a16060, b16061, c16062 )
        TSCP  a16060, b16061, c16062;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20394 );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l16105, EMPTYLIST );
        X3 = sc_cons( b16061, c16062 );
        X5 = a16060;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L20421:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20422;
        X4 = X6;
        goto L20429;
L20422:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L20425;
        scrt1__24__car_2derror( X5 );
L20425:
        X9 = scrt1_list( CONS( PAIR_CAR( X5 ), EMPTYLIST ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L20428;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L20421 );
L20428:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L20433;
        scdebug_error( c13513, 
                       c13514, CONS( X7, EMPTYLIST ) );
L20433:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L20421 );
L20429:
        X1 = toollib_2dmisc_foldl( X2, X3, X4 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20437:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20438;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20441;
        scrt1__24__car_2derror( X2 );
L20441:
        X7 = PAIR_CAR( X2 );
        X6 = scrt1_reverse( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20444;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20437 );
L20444:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20449;
        scdebug_error( c13513, 
                       c13514, CONS( X4, EMPTYLIST ) );
L20449:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20437 );
L20438:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_take_v );
DEFCSTRING( t20451, "TAKE" );

TSCP  toollib_2dmisc_take( n16208, l16209 )
        TSCP  n16208, l16209;
{
        PUSHSTACKTRACE( t20451 );
        POPSTACKTRACE( qobischeme_sublist( l16209, 
                                           _TSCP( 0 ), n16208 ) );
}

DEFTSCP( toollib_2dmisc_take_2duntil_v );
DEFCSTRING( t20453, "TAKE-UNTIL" );

TSCP  toollib_2dmisc_take_2duntil( p16211, l16212 )
        TSCP  p16211, l16212;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20453 );
        X2 = l16212;
        X1 = EMPTYLIST;
L20456:
        X3 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X3 ) )  goto L20461;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20465;
        scrt1__24__car_2derror( X2 );
L20465:
        X5 = PAIR_CAR( X2 );
        X4 = p16211;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                 PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20461;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20468;
        scrt1__24__cdr_2derror( X2 );
L20468:
        X4 = PAIR_CDR( X2 );
        X5 = PAIR_CAR( X2 );
        X1 = sc_cons( X5, X1 );
        X2 = X4;
        GOBACK( L20456 );
L20461:
        POPSTACKTRACE( scrt1_reverse( X1 ) );
}

DEFTSCP( toollib_2dmisc_drop_v );
DEFCSTRING( t20471, "DROP" );

TSCP  toollib_2dmisc_drop( n16243, l16244 )
        TSCP  n16243, l16244;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20471 );
        X1 = scrt1_length( l16244 );
        POPSTACKTRACE( qobischeme_sublist( l16244, n16243, X1 ) );
}

DEFTSCP( toollib_2dmisc_drop_2duntil_v );
DEFCSTRING( t20473, "DROP-UNTIL" );

TSCP  toollib_2dmisc_drop_2duntil( p16246, l16247 )
        TSCP  p16246, l16247;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20473 );
        X1 = l16247;
L20476:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20477;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L20482;
        scrt1__24__car_2derror( X1 );
L20482:
        X3 = PAIR_CAR( X1 );
        X2 = p16246;
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L20479;
        X1 = PAIR_CDR( X1 );
        GOBACK( L20476 );
L20479:
        POPSTACKTRACE( X1 );
L20477:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_fold_v );
DEFCSTRING( t20485, "FOLD" );
EXTERNTSCPP( toollib_2dmisc_foldr, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldr_v );

TSCP  toollib_2dmisc_fold( f16272, l16273, i16274 )
        TSCP  f16272, l16273, i16274;
{
        PUSHSTACKTRACE( t20485 );
        POPSTACKTRACE( toollib_2dmisc_foldr( f16272, 
                                             l16273, i16274 ) );
}

DEFTSCP( toollib_2dmisc_foldl_v );
DEFCSTRING( t20487, "FOLDL" );

TSCP  toollib_2dmisc_foldl( f16276, l16277, i16278 )
        TSCP  f16276, l16277, i16278;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20487 );
        X1 = l16277;
        X2 = i16278;
L20490:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20491;
        X3 = qobischeme_rest( X1 );
        X5 = qobischeme_first( X1 );
        X4 = f16276;
        X4 = UNKNOWNCALL( X4, 2 );
        X2 = VIA( PROCEDURE_CODE( X4 ) )( X2, 
                                          X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X1 = X3;
        GOBACK( L20490 );
L20491:
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_foldr_v );
DEFCSTRING( t20493, "FOLDR" );
EXTERNTSCPP( toollib_2dmisc_l16299, XAL1( TSCP ) );

TSCP  toollib_2dmisc_l16299( l16301 )
        TSCP  l16301;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside FOLDR]" );
        if  ( EQ( _S2CUINT( l16301 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20497;
        if  ( EQ( TSCPTAG( l16301 ), PAIRTAG ) )  goto L20500;
        scrt1__24__car_2derror( l16301 );
L20500:
        X2 = PAIR_CAR( l16301 );
        X4 = qobischeme_rest( l16301 );
        X3 = toollib_2dmisc_l16299( X4 );
        X1 = DISPLAY( 0 );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    X3, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L20497:
        POPSTACKTRACE( DISPLAY( 1 ) );
}

TSCP  toollib_2dmisc_foldr( f16293, l16294, i16295 )
        TSCP  f16293, l16294, i16295;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20493 );
        DISPLAY( 0 ) = f16293;
        DISPLAY( 1 ) = i16295;
        SDVAL = toollib_2dmisc_l16299( l16294 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_join_v );
DEFCSTRING( t20502, "JOIN" );

TSCP  toollib_2dmisc_join( l16312 )
        TSCP  l16312;
{
        PUSHSTACKTRACE( t20502 );
        POPSTACKTRACE( qobischeme_reduce( scrt1_append_v, 
                                          l16312, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_map_2dconcat_v );
DEFCSTRING( t20504, "MAP-CONCAT" );

TSCP  toollib_2dmisc_map_2dconcat( f16314, l16315 )
        TSCP  f16314, l16315;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20504 );
        X2 = l16315;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20507:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20508;
        X1 = X3;
        goto L20515;
L20508:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20511;
        scrt1__24__car_2derror( X2 );
L20511:
        X8 = PAIR_CAR( X2 );
        X7 = f16314;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20514;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20507 );
L20514:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20519;
        scdebug_error( c13513, 
                       c13514, CONS( X4, EMPTYLIST ) );
L20519:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20507 );
L20515:
        POPSTACKTRACE( toollib_2dmisc_join( X1 ) );
}

DEFTSCP( ib_2dmisc_concat_2dn_feb89efa_v );
DEFCSTRING( t20521, "MAP-CONCAT-N" );

TSCP  ib_2dmisc_concat_2dn_feb89efa( f16359, n16360 )
        TSCP  f16359, n16360;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20521 );
        X1 = qobischeme_map_2dn( f16359, n16360 );
        POPSTACKTRACE( toollib_2dmisc_join( X1 ) );
}

DEFTSCP( toollib_2dmisc_ring_2dforward_v );
DEFCSTRING( t20523, "RING-FORWARD" );

TSCP  toollib_2dmisc_ring_2dforward( l16362 )
        TSCP  l16362;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20523 );
        X1 = scrt1_length( l16362 );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20525;
        X1 = qobischeme_last( l16362 );
        X4 = scrt1_reverse( l16362 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20528;
        scrt1__24__cdr_2derror( X4 );
L20528:
        X3 = PAIR_CDR( X4 );
        X2 = scrt1_reverse( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L20525:
        POPSTACKTRACE( l16362 );
}

DEFTSCP( ib_2dmisc_2dbackward_b31d3193_v );
DEFCSTRING( t20530, "RING-BACKWARD" );

TSCP  ib_2dmisc_2dbackward_b31d3193( l16371 )
        TSCP  l16371;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20530 );
        if  ( EQ( TSCPTAG( l16371 ), PAIRTAG ) )  goto L20533;
        scrt1__24__cdr_2derror( l16371 );
L20533:
        X1 = PAIR_CDR( l16371 );
        X3 = PAIR_CAR( l16371 );
        X2 = scrt1_cons_2a( X3, CONS( EMPTYLIST, EMPTYLIST ) );
        POPSTACKTRACE( scrt1_append_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_rward_2dto_988e410e_v );
DEFCSTRING( t20536, "RING-FORWARD-TO" );

TSCP  ib_2dmisc_rward_2dto_988e410e( l16381, o16382 )
        TSCP  l16381, o16382;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20536 );
L20537:
        if  ( EQ( TSCPTAG( l16381 ), PAIRTAG ) )  goto L20541;
        scrt1__24__car_2derror( l16381 );
L20541:
        X1 = PAIR_CAR( l16381 );
        if  ( TRUE( scrt1_equal_3f( o16382, X1 ) ) )  goto L20538;
        X1 = toollib_2dmisc_ring_2dforward( l16381 );
        l16381 = X1;
        GOBACK( L20537 );
L20538:
        POPSTACKTRACE( l16381 );
}

DEFTSCP( ib_2dmisc__2dbetween_6d18396f_v );
DEFCSTRING( t20543, "RING-FORWARD-BETWEEN" );
EXTERNTSCPP( qobischeme_position, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_position_v );

TSCP  ib_2dmisc__2dbetween_6d18396f( r16388, a16389, b16390 )
        TSCP  r16388, a16389, b16390;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20543 );
        X3 = ib_2dmisc_rward_2dto_988e410e( r16388, a16389 );
        X2 = qobischeme_position( b16390, X3 );
        X1 = qobischeme__2b_2dtwo( X2, _TSCP( 4 ) );
        X2 = ib_2dmisc_rward_2dto_988e410e( r16388, a16389 );
        POPSTACKTRACE( toollib_2dmisc_take( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_d_2dvector_dc5a608e_v );
DEFCSTRING( t20545, "MAP-INDEXED-VECTOR" );

TSCP  toollib_2dmisc_l16400( i16401, c20551 )
        TSCP  i16401, c20551;
{
        TSCP  X18, 
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

        PUSHSTACKTRACE( "toollib_2dmisc_l16400 [inside MAP-INDEXED-VECTOR]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20551, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20551, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20551, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20551, 3 );
        X6 = DISPLAY( 3 );
        X10 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X10 ), VECTORTAG ) )
            )  goto L20554;
        scdebug_error( c13410, 
                       c13411, CONS( X10, EMPTYLIST ) );
L20554:
        if  ( EQ( TSCPTAG( i16401 ), FIXNUMTAG ) )  goto L20556;
        scdebug_error( c13410, 
                       c13414, CONS( i16401, EMPTYLIST ) );
L20556:
        if  ( LT( _S2CUINT( FIXED_C( i16401 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X10 ) ) ) )  goto L20558;
        scdebug_error( c13410, 
                       c13418, CONS( i16401, EMPTYLIST ) );
L20558:
        X9 = VECTOR_ELEMENT( X10, i16401 );
        X11 = DISPLAY( 2 );
        X12 = X11;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L20562:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L20563;
        X15 = X13;
        goto L20576;
L20563:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L20566;
        scrt1__24__car_2derror( X12 );
L20566:
        X18 = PAIR_CAR( X12 );
        if  ( AND( EQ( TSCPTAG( X18 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X18 ), VECTORTAG ) )
            )  goto L20570;
        scdebug_error( c13410, 
                       c13411, CONS( X18, EMPTYLIST ) );
L20570:
        if  ( LT( _S2CUINT( FIXED_C( i16401 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X18 ) ) ) )  goto L20572;
        scdebug_error( c13410, 
                       c13418, CONS( i16401, EMPTYLIST ) );
L20572:
        X17 = VECTOR_ELEMENT( X18, i16401 );
        X16 = sc_cons( X17, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L20575;
        X17 = PAIR_CDR( X12 );
        X14 = X16;
        X13 = X16;
        X12 = X17;
        GOBACK( L20562 );
L20575:
        X17 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L20580;
        scdebug_error( c13513, 
                       c13514, CONS( X14, EMPTYLIST ) );
L20580:
        X14 = SETGEN( PAIR_CDR( X14 ), X16 );
        X12 = X17;
        GOBACK( L20562 );
L20576:
        X10 = CONS( X15, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, CONS( i16401, X10 ) );
        X7 = sc_apply_2dtwo( DISPLAY( 0 ), X8 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L20583;
        scdebug_error( c14291, 
                       c13411, CONS( X6, EMPTYLIST ) );
L20583:
        if  ( LT( _S2CUINT( FIXED_C( i16401 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L20585;
        scdebug_error( c14291, 
                       c13418, CONS( i16401, EMPTYLIST ) );
L20585:
        X5 = SETGEN( VECTOR_ELEMENT( X6, i16401 ), X7 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        DISPLAY( 3 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  ib_2dmisc_d_2dvector_dc5a608e( f16395, v16396, _2616397 )
        TSCP  f16395, v16396, _2616397;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20545 );
        DISPLAY( 0 ) = f16395;
        DISPLAY( 1 ) = v16396;
        DISPLAY( 2 ) = _2616397;
        X2 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20548;
        scdebug_error( c13426, 
                       c13411, CONS( X2, EMPTYLIST ) );
L20548:
        X1 = C_FIXED( VECTOR_LENGTH( X2 ) );
        DISPLAY( 3 ) = sc_make_2dvector( X1, EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16400, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ) ) );
        X3 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20588;
        scdebug_error( c13426, 
                       c13411, CONS( X3, EMPTYLIST ) );
L20588:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        qobischeme_for_2deach_2dn( X1, X2 );
        SDVAL = DISPLAY( 3 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_t_2dcenter_8103fadf_v );
DEFCSTRING( t20590, "LINE-SEGMENT-CENTER" );

TSCP  ib_2dmisc_t_2dcenter_8103fadf( l16486 )
        TSCP  l16486;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20590 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), _TSCP( 8 ) );
        X3 = qobischeme_p( l16486 );
        X4 = qobischeme_q( l16486 );
        X2 = qobischeme_v_2b( X3, X4 );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_trix_2dref_a6f30345_v );
DEFCSTRING( t20592, "INEXACT-MATRIX-REF" );

TSCP  ib_2dmisc_trix_2dref_a6f30345( m16491, y16492, x16493 )
        TSCP  m16491, y16492, x16493;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20592 );
        X2 = scrt2_round( y16492 );
        X1 = scrt2_inexact_2d_3eexact( X2 );
        X3 = scrt2_round( x16493 );
        X2 = scrt2_inexact_2d_3eexact( X3 );
        POPSTACKTRACE( qobischeme_matrix_2dref( m16491, X1, X2 ) );
}

DEFTSCP( toollib_2dmisc_matrix_3f_v );
DEFCSTRING( t20594, "MATRIX?" );

TSCP  toollib_2dmisc_matrix_3f( v16495 )
        TSCP  v16495;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20594 );
        if  ( NOT( AND( EQ( TSCPTAG( v16495 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( v16495 ), 
                            VECTORTAG ) ) ) )  goto L20596;
        X2 = C_FIXED( VECTOR_LENGTH( v16495 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 0 ) );
        if  ( TRUE( X1 ) )  goto L20600;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20603;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20603:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( v16495 ) ) ) )  goto L20605;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20605:
        X2 = VECTOR_ELEMENT( v16495, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( X2 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( X2 ), 
                                         VECTORTAG ) ) ) );
L20600:
        POPSTACKTRACE( X1 );
L20596:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_submatrix_v );
DEFCSTRING( t20607, "SUBMATRIX" );
EXTERNTSCPP( qobischeme_matrix_2drows, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2drows_v );
EXTERNTSCPP( qobischeme_matrix_2dcolumns, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dcolumns_v );

TSCP  toollib_2dmisc_l16549( y16550, c20612 )
        TSCP  y16550, c20612;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16549 [inside SUBMATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20612, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20612, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20612, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20612, 3 );
        X6 = DISPLAY( 0 );
        X7 = qobischeme__2b_2dtwo( DISPLAY( 4 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2b_2dtwo( y16550, DISPLAY( 2 ) );
        X9 = qobischeme_matrix_2drows( X6 );
        if  ( FALSE( qobischeme__3c_2dtwo( X7, X9 ) ) )  goto L20615;
        X9 = qobischeme_matrix_2dcolumns( X6 );
        if  ( FALSE( qobischeme__3c_2dtwo( X8, X9 ) ) )  goto L20617;
        X5 = qobischeme_matrix_2dref( X6, X7, X8 );
        goto L20616;
L20617:
        X5 = FALSEVALUE;
        goto L20616;
L20615:
        X5 = FALSEVALUE;
L20616:
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_l16547( x16548, c20610 )
        TSCP  x16548, c20610;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l16547 [inside SUBMATRIX]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20610, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20610, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20610, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20610, 3 );
        DISPLAY( 4 ) = x16548;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16549, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ) ) );
        X5 = qobischeme_map_2dn_2dvector( X6, DISPLAY( 3 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X4;
        SDVAL = X5;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_submatrix( m16526, 
                                x16527, y16528, x16529, y16530 )
        TSCP  m16526, x16527, y16528, x16529, y16530;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20607 );
        DISPLAY( 0 ) = m16526;
        DISPLAY( 1 ) = x16527;
        DISPLAY( 2 ) = y16528;
        DISPLAY( 3 ) = y16530;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16547, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, x16529 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_string_2djoin_v );
DEFCSTRING( t20619, "STRING-JOIN" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  toollib_2dmisc_l16565( a16566, b16567, c20623 )
        TSCP  a16566, b16567, c20623;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16565 [inside STRING-JOIN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20623, 0 );
        X3 = CONS( b16567, EMPTYLIST );
        X3 = CONS( DISPLAY( 0 ), X3 );
        X2 = scrt3_string_2dappend( CONS( a16566, X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( sc_emptystring );

TSCP  toollib_2dmisc_string_2djoin( d16558, l16559 )
        TSCP  d16558, l16559;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20619 );
        DISPLAY( 0 ) = d16558;
        if  ( EQ( _S2CUINT( l16559 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20621;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16565, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( EQ( TSCPTAG( l16559 ), PAIRTAG ) )  goto L20626;
        scrt1__24__cdr_2derror( l16559 );
L20626:
        X2 = PAIR_CDR( l16559 );
        X3 = PAIR_CAR( l16559 );
        SDVAL = toollib_2dmisc_foldl( X1, X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20621:
        SDVAL = sc_emptystring;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc__2a_2djoin_126dcf23_v );
DEFCSTRING( t20629, "STRING*-JOIN" );
EXTERNTSCPP( b_2dstuff_a_2dappend_2ada51f7, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_a_2dappend_2ada51f7_v );

TSCP  toollib_2dmisc_l16584( a16585, b16586, c20633 )
        TSCP  a16585, b16586, c20633;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16584 [inside STRING*-JOIN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20633, 0 );
        X3 = CONS( b16586, EMPTYLIST );
        X3 = CONS( DISPLAY( 0 ), X3 );
        X2 = b_2dstuff_a_2dappend_2ada51f7( CONS( a16585, X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc__2a_2djoin_126dcf23( d16577, l16578 )
        TSCP  d16577, l16578;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20629 );
        DISPLAY( 0 ) = d16577;
        if  ( EQ( _S2CUINT( l16578 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20631;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16584, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( EQ( TSCPTAG( l16578 ), PAIRTAG ) )  goto L20636;
        scrt1__24__cdr_2derror( l16578 );
L20636:
        X2 = PAIR_CDR( l16578 );
        X3 = PAIR_CAR( l16578 );
        SDVAL = toollib_2dmisc_foldl( X1, X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20631:
        SDVAL = sc_emptystring;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_string_2dfind_v );
DEFCSTRING( t20639, "STRING-FIND" );
EXTERNTSCPP( qobischeme__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_3d_2dtwo_v );

TSCP  toollib_2dmisc_string_2dfind( s16596, c16597 )
        TSCP  s16596, c16597;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20639 );
        X1 = _TSCP( 0 );
L20642:
        if  ( AND( EQ( TSCPTAG( s16596 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16596 ), STRINGTAG ) )
            )  goto L20646;
        scdebug_error( c16611, 
                       c16612, CONS( s16596, EMPTYLIST ) );
L20646:
        X2 = C_FIXED( STRING_LENGTH( s16596 ) );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, X2 ) ) )  goto L20643;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20651;
        scdebug_error( c16618, 
                       c13414, CONS( X1, EMPTYLIST ) );
L20651:
        X3 = qobischeme_negative_3f( X1 );
        if  ( TRUE( X3 ) )  goto L20657;
        X4 = C_FIXED( STRING_LENGTH( s16596 ) );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X1, X4 ) ) )  goto L20661;
L20657:
        scdebug_error( c16618, 
                       c16630, CONS( X1, EMPTYLIST ) );
L20661:
        X2 = C_CHAR( STRING_CHAR( s16596, X1 ) );
        if  ( TRUE( scrt1_equal_3f( c16597, X2 ) ) )  goto L20648;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20642 );
L20648:
        POPSTACKTRACE( X1 );
L20643:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_om_2dindex_546de6a3_v );
DEFCSTRING( t20662, "STRING-FIND-FROM-INDEX" );

TSCP  ib_2dmisc_om_2dindex_546de6a3( s16635, c16636, s16637 )
        TSCP  s16635, c16636, s16637;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20662 );
        X1 = s16637;
L20665:
        if  ( AND( EQ( TSCPTAG( s16635 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16635 ), STRINGTAG ) )
            )  goto L20669;
        scdebug_error( c16611, 
                       c16612, CONS( s16635, EMPTYLIST ) );
L20669:
        X2 = C_FIXED( STRING_LENGTH( s16635 ) );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, X2 ) ) )  goto L20666;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20674;
        scdebug_error( c16618, 
                       c13414, CONS( X1, EMPTYLIST ) );
L20674:
        X3 = qobischeme_negative_3f( X1 );
        if  ( TRUE( X3 ) )  goto L20680;
        X4 = C_FIXED( STRING_LENGTH( s16635 ) );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X1, X4 ) ) )  goto L20684;
L20680:
        scdebug_error( c16618, 
                       c16630, CONS( X1, EMPTYLIST ) );
L20684:
        X2 = C_CHAR( STRING_CHAR( s16635, X1 ) );
        if  ( TRUE( scrt1_equal_3f( c16636, X2 ) ) )  goto L20671;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20665 );
L20671:
        POPSTACKTRACE( X1 );
L20666:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_unlines_v );
DEFCSTRING( t20685, "UNLINES" );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );

TSCP  toollib_2dmisc_unlines( l16671 )
        TSCP  l16671;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20685 );
        X1 = scrt3_list_2d_3estring( c16672 );
        POPSTACKTRACE( toollib_2dmisc_string_2djoin( X1, l16671 ) );
}

DEFTSCP( toollib_2dmisc_lines_v );
DEFCSTRING( t20687, "LINES" );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );

TSCP  toollib_2dmisc_lines( s16674 )
        TSCP  s16674;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20687 );
        X1 = _TSCP( 0 );
        X2 = EMPTYLIST;
L20690:
        X3 = ib_2dmisc_om_2dindex_546de6a3( s16674, 
                                            _TSCP( 2578 ), X1 );
        if  ( FALSE( X3 ) )  goto L20692;
        X4 = qobischeme__2b_2dtwo( X3, _TSCP( 4 ) );
        X5 = scrt3_substring( s16674, X1, X3 );
        X2 = sc_cons( X5, X2 );
        X1 = X4;
        GOBACK( L20690 );
L20692:
        if  ( AND( EQ( TSCPTAG( s16674 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16674 ), STRINGTAG ) )
            )  goto L20697;
        scdebug_error( c16611, 
                       c16612, CONS( s16674, EMPTYLIST ) );
L20697:
        X6 = C_FIXED( STRING_LENGTH( s16674 ) );
        X5 = qobischeme__2d_2dtwo( X6, _TSCP( 4 ) );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, X5 ) ) )  goto L20694;
        X4 = X2;
        goto L20695;
L20694:
        if  ( AND( EQ( TSCPTAG( s16674 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16674 ), STRINGTAG ) )
            )  goto L20700;
        scdebug_error( c16611, 
                       c16612, CONS( s16674, EMPTYLIST ) );
L20700:
        X6 = C_FIXED( STRING_LENGTH( s16674 ) );
        X5 = scrt3_substring( s16674, X1, X6 );
        X4 = sc_cons( X5, X2 );
L20695:
        POPSTACKTRACE( scrt1_reverse( X4 ) );
}

DEFTSCP( toollib_2dmisc_words_v );
DEFCSTRING( t20702, "WORDS" );
EXTERNTSCPP( qobischeme_fields, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_fields_v );
DEFTSCP( toollib_2dmisc_unwords_v );
DEFCSTRING( t20703, "UNWORDS" );

TSCP  toollib_2dmisc_unwords( l16704 )
        TSCP  l16704;
{
        PUSHSTACKTRACE( t20703 );
        POPSTACKTRACE( toollib_2dmisc_string_2djoin( c16705, l16704 ) );
}

DEFTSCP( ib_2dmisc_e_2dcenter_ed08db28_v );
DEFCSTRING( t20705, "MAKE-IMAGE-CENTER" );

TSCP  ib_2dmisc_e_2dcenter_ed08db28( x16708, y16709 )
        TSCP  x16708, y16709;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20705 );
        X1 = sc_make_2dvector( _TSCP( 12 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L20709;
        scdebug_error( c14291, 
                       c13411, CONS( X1, EMPTYLIST ) );
L20709:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20711;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20711:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20713;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20713:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c16723 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20716;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20716:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20718;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20718:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), x16708 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20721;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20721:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20723;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20723:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), y16709 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_dcenter_3f_8e2f98a8_v );
DEFCSTRING( t20725, "IMAGE-CENTER?" );

TSCP  ib_2dmisc_dcenter_3f_8e2f98a8( o16748 )
        TSCP  o16748;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20725 );
        if  ( NOT( AND( EQ( TSCPTAG( o16748 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o16748 ), 
                            VECTORTAG ) ) ) )  goto L20727;
        X2 = C_FIXED( VECTOR_LENGTH( o16748 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 12 ) );
        if  ( FALSE( X1 ) )  goto L20731;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20734;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20734:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o16748 ) ) ) )  goto L20736;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20736:
        X2 = VECTOR_ELEMENT( o16748, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c16723 ) ) ) );
L20731:
        POPSTACKTRACE( X1 );
L20727:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_ter_2dx_21_b89b2172_v );
DEFCSTRING( t20738, "LOCAL-SET-IMAGE-CENTER-X!" );

TSCP  ib_2dmisc_ter_2dx_21_b89b2172( t16781, o16782 )
        TSCP  t16781, o16782;
{
        PUSHSTACKTRACE( t20738 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16781 ) )
            )  goto L20740;
        qobischeme_panic( c16783, EMPTYLIST );
L20740:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t16781, 
                                                      _TSCP( 4 ), 
                                                      o16782 ) );
}

DEFTSCP( ib_2dmisc_center_2dx_b5a9f5f9_v );
DEFCSTRING( t20742, "IMAGE-CENTER-X" );

TSCP  ib_2dmisc_center_2dx_b5a9f5f9( t16786 )
        TSCP  t16786;
{
        PUSHSTACKTRACE( t20742 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16786 ) )
            )  goto L20744;
        qobischeme_panic( c16787, EMPTYLIST );
L20744:
        if  ( AND( EQ( TSCPTAG( t16786 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16786 ), VECTORTAG ) )
            )  goto L20747;
        scdebug_error( c13410, 
                       c13411, CONS( t16786, EMPTYLIST ) );
L20747:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20749;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20749:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16786 ) ) ) )  goto L20751;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20751:
        POPSTACKTRACE( VECTOR_ELEMENT( t16786, _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ter_2dx_21_cc37d3ba_v );
DEFCSTRING( t20753, "SET-IMAGE-CENTER-X!" );

TSCP  ib_2dmisc_ter_2dx_21_cc37d3ba( t16800, o16801 )
        TSCP  t16800, o16801;
{
        PUSHSTACKTRACE( t20753 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16800 ) )
            )  goto L20755;
        qobischeme_panic( c16802, EMPTYLIST );
L20755:
        if  ( AND( EQ( TSCPTAG( t16800 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16800 ), VECTORTAG ) )
            )  goto L20758;
        scdebug_error( c14291, 
                       c13411, CONS( t16800, EMPTYLIST ) );
L20758:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20760;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20760:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16800 ) ) ) )  goto L20762;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20762:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t16800, _TSCP( 4 ) ), 
                               o16801 ) );
}

DEFTSCP( ib_2dmisc_ter_2dy_21_274617_v );
DEFCSTRING( t20764, "LOCAL-SET-IMAGE-CENTER-Y!" );

TSCP  ib_2dmisc_ter_2dy_21_274617( t16816, o16817 )
        TSCP  t16816, o16817;
{
        PUSHSTACKTRACE( t20764 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16816 ) )
            )  goto L20766;
        qobischeme_panic( c16818, EMPTYLIST );
L20766:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t16816, 
                                                      _TSCP( 8 ), 
                                                      o16817 ) );
}

DEFTSCP( ib_2dmisc_center_2dy_c2aec56f_v );
DEFCSTRING( t20768, "IMAGE-CENTER-Y" );

TSCP  ib_2dmisc_center_2dy_c2aec56f( t16821 )
        TSCP  t16821;
{
        PUSHSTACKTRACE( t20768 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16821 ) )
            )  goto L20770;
        qobischeme_panic( c16822, EMPTYLIST );
L20770:
        if  ( AND( EQ( TSCPTAG( t16821 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16821 ), VECTORTAG ) )
            )  goto L20773;
        scdebug_error( c13410, 
                       c13411, CONS( t16821, EMPTYLIST ) );
L20773:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20775;
        scdebug_error( c13410, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20775:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16821 ) ) ) )  goto L20777;
        scdebug_error( c13410, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20777:
        POPSTACKTRACE( VECTOR_ELEMENT( t16821, _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_ter_2dy_21_748bb4df_v );
DEFCSTRING( t20779, "SET-IMAGE-CENTER-Y!" );

TSCP  ib_2dmisc_ter_2dy_21_748bb4df( t16835, o16836 )
        TSCP  t16835, o16836;
{
        PUSHSTACKTRACE( t20779 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16835 ) )
            )  goto L20781;
        qobischeme_panic( c16837, EMPTYLIST );
L20781:
        if  ( AND( EQ( TSCPTAG( t16835 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16835 ), VECTORTAG ) )
            )  goto L20784;
        scdebug_error( c14291, 
                       c13411, CONS( t16835, EMPTYLIST ) );
L20784:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20786;
        scdebug_error( c14291, 
                       c13414, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20786:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16835 ) ) ) )  goto L20788;
        scdebug_error( c14291, 
                       c13418, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20788:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t16835, _TSCP( 8 ) ), 
                               o16836 ) );
}

DEFTSCP( ib_2dmisc_e_2dcenter_6f8fe7a1_v );
DEFCSTRING( t20790, "TRANSFORM-LINE-TO-IMAGE-CENTER" );

TSCP  ib_2dmisc_e_2dcenter_6f8fe7a1( l16850, i16851 )
        TSCP  l16850, i16851;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20790 );
        X4 = ib_2dmisc_center_2dx_b5a9f5f9( i16851 );
        X6 = qobischeme_p( l16850 );
        X5 = qobischeme_x( X6 );
        X3 = qobischeme__2d_2dtwo( X4, X5 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = ib_2dmisc_center_2dy_c2aec56f( i16851 );
        X7 = qobischeme_p( l16850 );
        X6 = qobischeme_y( X7 );
        X2 = scrt1_cons_2a( X3, 
                            CONS( qobischeme__2d_2dtwo( X5, X6 ), 
                                  X4 ) );
        X1 = scrt4_list_2d_3evector( X2 );
        X5 = ib_2dmisc_center_2dx_b5a9f5f9( i16851 );
        X7 = qobischeme_q( l16850 );
        X6 = qobischeme_x( X7 );
        X4 = qobischeme__2d_2dtwo( X5, X6 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = ib_2dmisc_center_2dy_c2aec56f( i16851 );
        X8 = qobischeme_q( l16850 );
        X7 = qobischeme_y( X8 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( qobischeme__2d_2dtwo( X6, X7 ), 
                                  X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_ed_2dgc_2a_9062c7ce_v );
DEFCSTRING( t20792, "*THICK-RED-GC*" );
DEFTSCP( ib_2dmisc_ue_2dgc_2a_51440329_v );
DEFCSTRING( t20793, "*THICK-BLUE-GC*" );
DEFTSCP( ib_2dmisc_ge_2dgc_2a_cae315b6_v );
DEFCSTRING( t20794, "*THICK-ORANGE-GC*" );
DEFTSCP( ib_2dmisc_en_2dgc_2a_477bc7e_v );
DEFCSTRING( t20795, "*THICK-GREEN-GC*" );
DEFTSCP( ib_2dmisc_ed_2dgc_2a_ac36d558_v );
DEFCSTRING( t20796, "*MEDIUM-RED-GC*" );
DEFTSCP( ib_2dmisc_ue_2dgc_2a_4814614a_v );
DEFCSTRING( t20797, "*MEDIUM-BLUE-GC*" );
DEFTSCP( ib_2dmisc_ge_2dgc_2a_278f34f6_v );
DEFCSTRING( t20798, "*MEDIUM-ORANGE-GC*" );
DEFTSCP( ib_2dmisc_en_2dgc_2a_d0d5dcfe_v );
DEFCSTRING( t20799, "*MEDIUM-GREEN-GC*" );
DEFTSCP( ib_2dmisc__2dfont_2a_280b0bc8_v );
DEFCSTRING( t20800, "*LARGE-LUCIDA-FONT*" );
DEFTSCP( ib_2dmisc_da_2dgc_2a_30479eb9_v );
DEFCSTRING( t20801, "*LARGE-LUCIDA-GC*" );
DEFTSCP( ib_2dmisc_aseline_2a_eb2c34b2_v );
DEFCSTRING( t20802, "*LARGE-LUCIDA-BASELINE*" );
DEFTSCP( ib_2dmisc_ed_2dgc_2a_cb09fb42_v );
DEFCSTRING( t20803, "SETUP-*THICK-RED-GC*" );
EXTERNTSCPP( xws5_xcreategc, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws5_xcreategc_v );
EXTERNTSCP( qobischeme__2adisplay_2a_v );
EXTERNTSCP( qobischeme__2awindow_2a_v );
EXTERNTSCPP( xgcvalues_make_2dxgcvalues, XAL0(  ) );
EXTERNTSCP( xgcvalues_make_2dxgcvalues_v );
EXTERNTSCPP( xws5_xsetbackground, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws5_xsetbackground_v );
EXTERNTSCPP( xcolor_xcolor_2dpixel, XAL1( TSCP ) );
EXTERNTSCP( xcolor_xcolor_2dpixel_v );
EXTERNTSCP( qobischeme__2abackground_2a_v );
EXTERNTSCPP( xws5_xsetforeground, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws5_xsetforeground_v );
EXTERNTSCP( qobischeme__2ared_2a_v );
EXTERNTSCPP( xws5_xsetfont, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws5_xsetfont_v );
EXTERNTSCPP( xfontstruct_xfontstruct_2dfid, XAL1( TSCP ) );
EXTERNTSCP( xfontstruct_xfontstruct_2dfid_v );
EXTERNTSCP( qobischeme__2abold_2dfont_2a_v );
EXTERNTSCPP( xws5_xsetlineattributes, 
             XAL6( TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws5_xsetlineattributes_v );

TSCP  ib_2dmisc_ed_2dgc_2a_cb09fb42(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20803 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ed_2dgc_2a_9062c7ce_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ed_2dgc_2a_9062c7ce_v, X1 );
        X2 = qobischeme_second( qobischeme__2ared_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ed_2dgc_2a_9062c7ce_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ed_2dgc_2a_9062c7ce_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ed_2dgc_2a_9062c7ce_v, 
                                                _TSCP( 20 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ue_2dgc_2a_b511a71e_v );
DEFCSTRING( t20805, "SETUP-*THICK-BLUE-GC*" );
EXTERNTSCP( qobischeme__2ablue_2a_v );

TSCP  ib_2dmisc_ue_2dgc_2a_b511a71e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20805 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ue_2dgc_2a_51440329_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ue_2dgc_2a_51440329_v, X1 );
        X2 = qobischeme_second( qobischeme__2ablue_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ue_2dgc_2a_51440329_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ue_2dgc_2a_51440329_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ue_2dgc_2a_51440329_v, 
                                                _TSCP( 20 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ge_2dgc_2a_8b5f3626_v );
DEFCSTRING( t20807, "SETUP-*THICK-ORANGE-GC*" );
EXTERNTSCP( qobischeme__2aorange_2a_v );

TSCP  ib_2dmisc_ge_2dgc_2a_8b5f3626(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20807 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ge_2dgc_2a_cae315b6_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ge_2dgc_2a_cae315b6_v, X1 );
        X2 = qobischeme_second( qobischeme__2aorange_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ge_2dgc_2a_cae315b6_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ge_2dgc_2a_cae315b6_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ge_2dgc_2a_cae315b6_v, 
                                                _TSCP( 20 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_en_2dgc_2a_bc2e4cd5_v );
DEFCSTRING( t20809, "SETUP-*THICK-GREEN-GC*" );
EXTERNTSCP( qobischeme__2agreen_2a_v );

TSCP  ib_2dmisc_en_2dgc_2a_bc2e4cd5(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20809 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_en_2dgc_2a_477bc7e_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                         qobischeme__2awindow_2a_v, 
                                                         _TSCP( 0 ), 
                                                         X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_en_2dgc_2a_477bc7e_v, X1 );
        X2 = qobischeme_second( qobischeme__2agreen_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_en_2dgc_2a_477bc7e_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_en_2dgc_2a_477bc7e_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_en_2dgc_2a_477bc7e_v, 
                                                _TSCP( 20 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ed_2dgc_2a_4863716f_v );
DEFCSTRING( t20811, "SETUP-*MEDIUM-RED-GC*" );

TSCP  ib_2dmisc_ed_2dgc_2a_4863716f(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20811 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ed_2dgc_2a_ac36d558_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ed_2dgc_2a_ac36d558_v, X1 );
        X2 = qobischeme_second( qobischeme__2ared_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ed_2dgc_2a_ac36d558_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ed_2dgc_2a_ac36d558_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ed_2dgc_2a_ac36d558_v, 
                                                _TSCP( 8 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ue_2dgc_2a_f04d91e1_v );
DEFCSTRING( t20813, "SETUP-*MEDIUM-BLUE-GC*" );

TSCP  ib_2dmisc_ue_2dgc_2a_f04d91e1(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20813 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ue_2dgc_2a_4814614a_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ue_2dgc_2a_4814614a_v, X1 );
        X2 = qobischeme_second( qobischeme__2ablue_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ue_2dgc_2a_4814614a_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ue_2dgc_2a_4814614a_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ue_2dgc_2a_4814614a_v, 
                                                _TSCP( 8 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ge_2dgc_2a_d7c11b91_v );
DEFCSTRING( t20815, "SETUP-*MEDIUM-ORANGE-GC*" );

TSCP  ib_2dmisc_ge_2dgc_2a_d7c11b91(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20815 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_ge_2dgc_2a_278f34f6_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ge_2dgc_2a_278f34f6_v, X1 );
        X2 = qobischeme_second( qobischeme__2aorange_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_ge_2dgc_2a_278f34f6_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_ge_2dgc_2a_278f34f6_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_ge_2dgc_2a_278f34f6_v, 
                                                _TSCP( 8 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_en_2dgc_2a_9169ff6e_v );
DEFCSTRING( t20817, "SETUP-*MEDIUM-GREEN-GC*" );

TSCP  ib_2dmisc_en_2dgc_2a_9169ff6e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20817 );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_en_2dgc_2a_d0d5dcfe_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_en_2dgc_2a_d0d5dcfe_v, X1 );
        X2 = qobischeme_second( qobischeme__2agreen_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_en_2dgc_2a_d0d5dcfe_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( qobischeme__2abold_2dfont_2a_v );
        xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                       ib_2dmisc_en_2dgc_2a_d0d5dcfe_v, X1 );
        POPSTACKTRACE( xws5_xsetlineattributes( qobischeme__2adisplay_2a_v, 
                                                ib_2dmisc_en_2dgc_2a_d0d5dcfe_v, 
                                                _TSCP( 8 ), 
                                                _TSCP( 0 ), 
                                                _TSCP( 8 ), _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_da_2dgc_2a_71fbbd29_v );
DEFCSTRING( t20819, "SETUP-*LARGE-LUCIDA-GC*" );
EXTERNTSCPP( xws6_xloadqueryfont, XAL2( TSCP, TSCP ) );
EXTERNTSCP( xws6_xloadqueryfont_v );
EXTERNTSCPP( ontstruct__2ddescent_aec93f8c, XAL1( TSCP ) );
EXTERNTSCP( ontstruct__2ddescent_aec93f8c_v );
EXTERNTSCP( qobischeme__2aforeground_2a_v );

TSCP  ib_2dmisc_da_2dgc_2a_71fbbd29(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20819 );
        ib_2dmisc__2dfont_2a_280b0bc8_v = xws6_xloadqueryfont( qobischeme__2adisplay_2a_v, 
                                                               c16862 );
        ib_2dmisc_aseline_2a_eb2c34b2_v = ontstruct__2ddescent_aec93f8c( ib_2dmisc__2dfont_2a_280b0bc8_v );
        X1 = xgcvalues_make_2dxgcvalues(  );
        ib_2dmisc_da_2dgc_2a_30479eb9_v = xws5_xcreategc( qobischeme__2adisplay_2a_v, 
                                                          qobischeme__2awindow_2a_v, 
                                                          _TSCP( 0 ), 
                                                          X1 );
        X2 = qobischeme_second( qobischeme__2abackground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetbackground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_da_2dgc_2a_30479eb9_v, X1 );
        X2 = qobischeme_second( qobischeme__2aforeground_2a_v );
        X1 = xcolor_xcolor_2dpixel( X2 );
        xws5_xsetforeground( qobischeme__2adisplay_2a_v, 
                             ib_2dmisc_da_2dgc_2a_30479eb9_v, X1 );
        X1 = xfontstruct_xfontstruct_2dfid( ib_2dmisc__2dfont_2a_280b0bc8_v );
        POPSTACKTRACE( xws5_xsetfont( qobischeme__2adisplay_2a_v, 
                                      ib_2dmisc_da_2dgc_2a_30479eb9_v, 
                                      X1 ) );
}

DEFTSCP( ib_2dmisc__2dx_2dgcs_966031b0_v );
DEFCSTRING( t20821, "SETUP-EXTRA-X-GCS" );

TSCP  ib_2dmisc__2dx_2dgcs_966031b0(  )
{
        PUSHSTACKTRACE( t20821 );
        ib_2dmisc_ed_2dgc_2a_cb09fb42(  );
        ib_2dmisc_ue_2dgc_2a_b511a71e(  );
        ib_2dmisc_ge_2dgc_2a_8b5f3626(  );
        ib_2dmisc_en_2dgc_2a_bc2e4cd5(  );
        ib_2dmisc_ed_2dgc_2a_4863716f(  );
        ib_2dmisc_ue_2dgc_2a_f04d91e1(  );
        ib_2dmisc_ge_2dgc_2a_d7c11b91(  );
        ib_2dmisc_en_2dgc_2a_9169ff6e(  );
        POPSTACKTRACE( ib_2dmisc_da_2dgc_2a_71fbbd29(  ) );
}

DEFTSCP( ib_2dmisc__2dx_2dgcs_425cb919_v );
DEFCSTRING( t20823, "FREE-EXTRA-X-GCS" );
EXTERNTSCPP( xws5_xfreegc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( xws5_xfreegc_v );

TSCP  ib_2dmisc__2dx_2dgcs_425cb919(  )
{
        PUSHSTACKTRACE( t20823 );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ed_2dgc_2a_ac36d558_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ue_2dgc_2a_4814614a_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ge_2dgc_2a_278f34f6_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_en_2dgc_2a_d0d5dcfe_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ed_2dgc_2a_9062c7ce_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ue_2dgc_2a_51440329_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_ge_2dgc_2a_cae315b6_v );
        xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                      ib_2dmisc_en_2dgc_2a_477bc7e_v );
        POPSTACKTRACE( xws5_xfreegc( qobischeme__2adisplay_2a_v, 
                                     ib_2dmisc_da_2dgc_2a_30479eb9_v ) );
}

DEFTSCP( ib_2dmisc_e_2devents_5e33b1f4_v );
DEFCSTRING( t20825, "XREMOVE-EXPOSE-EVENTS" );
EXTERNTSCPP( xws8_xpending, XAL1( TSCP ) );
EXTERNTSCP( xws8_xpending_v );
EXTERNTSCPP( xws8_xpeekevent, XAL1( TSCP ) );
EXTERNTSCP( xws8_xpeekevent_v );
EXTERNTSCPP( xevent_xevent_2dxany_2dtype, XAL1( TSCP ) );
EXTERNTSCP( xevent_xevent_2dxany_2dtype_v );
EXTERNTSCPP( xws8_xnextevent, XAL1( TSCP ) );
EXTERNTSCP( xws8_xnextevent_v );

TSCP  ib_2dmisc_e_2devents_5e33b1f4(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20825 );
L20826:
        X1 = xws8_xpending( qobischeme__2adisplay_2a_v );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, _TSCP( 0 ) ) )
            )  goto L20829;
        X1 = xws8_xpeekevent( qobischeme__2adisplay_2a_v );
        X2 = xevent_xevent_2dxany_2dtype( X1 );
        if  ( FALSE( qobischeme__3d_2dtwo( X2, _TSCP( 48 ) ) )
            )  goto L20832;
        xws8_xnextevent( qobischeme__2adisplay_2a_v );
        GOBACK( L20826 );
L20832:
        POPSTACKTRACE( FALSEVALUE );
L20829:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dbuttons_da277968_v );
DEFCSTRING( t20835, "STANDARD-BUTTONS" );
EXTERNTSCPP( qobischeme_define_2dbutton, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_define_2dbutton_v );
EXTERNTSCP( qobischeme_message_v );
EXTERNTSCPP( qobischeme_help_2dcommand, XAL0(  ) );
EXTERNTSCP( qobischeme_help_2dcommand_v );

TSCP  toollib_2dmisc_l16885( c20837 )
        TSCP  c20837;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16885 [inside STANDARD-BUTTONS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20837, 0 );
        X3 = qobischeme_message_v;
        X3 = UNKNOWNCALL( X3, 1 );
        VIA( PROCEDURE_CODE( X3 ) )( sc_emptystring, 
                                     PROCEDURE_CLOSURE( X3 ) );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 0 );
        VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        X2 = qobischeme_help_2dcommand(  );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( qobischeme_quit, XAL0(  ) );
EXTERNTSCP( qobischeme_quit_v );
EXTERNTSCPP( qobischeme_define_2dkey, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_define_2dkey_v );
EXTERNTSCPP( qobischeme_control, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_control_v );

TSCP  toollib_2dmisc_l16895( c20840 )
        TSCP  c20840;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16895 [inside STANDARD-BUTTONS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20840, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 0 );
        VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        X2 = qobischeme_help_2dcommand(  );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( qobischeme_abort_2dcommand_v );

TSCP  ib_2dmisc__2dbuttons_da277968( b16882, h16883 )
        TSCP  b16882, h16883;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20835 );
        DISPLAY( 0 ) = h16883;
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l16885, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        qobischeme_define_2dbutton( _TSCP( 0 ), 
                                    _TSCP( 0 ), 
                                    c16884, FALSEVALUE, X1 );
        X1 = qobischeme__2d_2dtwo( b16882, _TSCP( 4 ) );
        qobischeme_define_2dbutton( X1, 
                                    _TSCP( 0 ), 
                                    c16889, 
                                    FALSEVALUE, qobischeme_quit_v );
        X3 = qobischeme_control( _TSCP( 30738 ) );
        X5 = qobischeme_control( _TSCP( 25362 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        X2 = sc_cons( X3, X4 );
        X1 = X2;
        qobischeme_define_2dkey( X1, c16889, qobischeme_quit_v );
        X1 = qobischeme_control( _TSCP( 26642 ) );
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l16895, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        qobischeme_define_2dkey( X1, c16884, X2 );
        X1 = qobischeme_control( _TSCP( 26386 ) );
        SDVAL = qobischeme_define_2dkey( X1, 
                                         c16897, 
                                         qobischeme_abort_2dcommand_v );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_roll_2dbar_94710cad_v );
DEFCSTRING( t20842, "DRAW-CLICKABLE-STRINGS-WITH-SCROLL-BAR" );
EXTERNTSCP( obischeme_dheight_2a_954d402b_v );
EXTERNTSCPP( scrt2_quotient, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_quotient_v );
EXTERNTSCPP( scrt2_min_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_min_2dtwo_v );
EXTERNTSCPP( xws6_xfillrectangle, 
             XAL7( TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws6_xfillrectangle_v );
EXTERNTSCP( obischeme__2dpane_2a_b407de83_v );
EXTERNTSCP( qobischeme__2athin_2dgc_2a_v );
EXTERNTSCPP( qobischeme_define_2dregion, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_define_2dregion_v );
EXTERNTSCPP( scrt2_max_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_max_2dtwo_v );
EXTERNTSCPP( obischeme_lay_2dpane_c5e084fa, XAL0(  ) );
EXTERNTSCP( obischeme_lay_2dpane_c5e084fa_v );

TSCP  toollib_2dmisc_l16946( x16947, y16948, c20867 )
        TSCP  x16947, y16948, c20867;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16946 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20867, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20867, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20867, 2 );
        X4 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20867, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20867, 4 );
        X10 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                    DISPLAY( 9 ) );
        X12 = scrt1_length( DISPLAY( 4 ) );
        X13 = qobischeme__2d_2dtwo( y16948, DISPLAY( 9 ) );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        X12 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X11 ), 
                                           _S2CINT( X10 ) ), 
                                    3 ) ) );
        if  ( FALSE( X12 ) )  goto L20876;
        if  ( EQ( _S2CUINT( X10 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20876;
        X9 = C_FIXED( QUOTIENT( _S2CINT( X11 ), 
                                _S2CINT( X10 ) ) );
        goto L20877;
L20876:
        X9 = scrt2_quotient( X11, X10 );
L20877:
        X12 = scrt1_length( DISPLAY( 4 ) );
        X11 = qobischeme__2d_2dtwo( X12, DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L20879;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X11 ) ) )  goto L20881;
        X10 = _TSCP( 0 );
        goto L20880;
L20881:
        X10 = X11;
        goto L20880;
L20879:
        X10 = scrt2_max_2dtwo( _TSCP( 0 ), X11 );
L20880:
        if  ( BITAND( BITOR( _S2CINT( X10 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L20884;
        if  ( GTE( _S2CINT( X10 ), _S2CINT( X9 ) ) )  goto L20886;
        X8 = X10;
        goto L20885;
L20886:
        X8 = X9;
        goto L20885;
L20884:
        X8 = scrt2_min_2dtwo( X10, X9 );
L20885:
        X7 = DISPLAY( 0 );
        X7 = UNKNOWNCALL( X7, 1 );
        VIA( PROCEDURE_CODE( X7 ) )( X8, PROCEDURE_CLOSURE( X7 ) );
        X6 = obischeme_lay_2dpane_c5e084fa(  );
        DISPLAY( 7 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 9 ) = X3;
        DISPLAY( 10 ) = X4;
        DISPLAY( 0 ) = X5;
        POPSTACKTRACE( X6 );
}

EXTERNTSCPP( qobischeme_tracking_2dpointer, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_tracking_2dpointer_v );

TSCP  toollib_2dmisc_l16995( x16996, y16997, c20890 )
        TSCP  x16996, y16997, c20890;
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

        PUSHSTACKTRACE( "toollib_2dmisc_l16995 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20890, 0 );
        X2 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c20890, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20890, 2 );
        X4 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20890, 3 );
        X5 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20890, 4 );
        X6 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20890, 5 );
        X7 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20890, 6 );
        X14 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                    DISPLAY( 9 ) );
        X16 = scrt1_length( DISPLAY( 4 ) );
        X17 = qobischeme__2d_2dtwo( y16997, DISPLAY( 11 ) );
        X15 = qobischeme__2a_2dtwo( X16, X17 );
        X16 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X15 ), 
                                           _S2CINT( X14 ) ), 
                                    3 ) ) );
        if  ( FALSE( X16 ) )  goto L20899;
        if  ( EQ( _S2CUINT( X14 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20899;
        X13 = C_FIXED( QUOTIENT( _S2CINT( X15 ), 
                                 _S2CINT( X14 ) ) );
        goto L20900;
L20899:
        X13 = scrt2_quotient( X15, X14 );
L20900:
        X12 = qobischeme__2b_2dtwo( DISPLAY( 8 ), X13 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L20902;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X12 ) ) )  goto L20904;
        X11 = _TSCP( 0 );
        goto L20903;
L20904:
        X11 = X12;
        goto L20903;
L20902:
        X11 = scrt2_max_2dtwo( _TSCP( 0 ), X12 );
L20903:
        X14 = scrt1_length( DISPLAY( 4 ) );
        X13 = qobischeme__2d_2dtwo( X14, DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X13 ) ), 
                      3 ) )  goto L20907;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X13 ) ) )  goto L20909;
        X12 = _TSCP( 0 );
        goto L20908;
L20909:
        X12 = X13;
        goto L20908;
L20907:
        X12 = scrt2_max_2dtwo( _TSCP( 0 ), X13 );
L20908:
        if  ( BITAND( BITOR( _S2CINT( X12 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L20912;
        if  ( GTE( _S2CINT( X12 ), _S2CINT( X11 ) ) )  goto L20914;
        X10 = X12;
        goto L20913;
L20914:
        X10 = X11;
        goto L20913;
L20912:
        X10 = scrt2_min_2dtwo( X12, X11 );
L20913:
        X9 = DISPLAY( 0 );
        X9 = UNKNOWNCALL( X9, 1 );
        VIA( PROCEDURE_CODE( X9 ) )( X10, 
                                     PROCEDURE_CLOSURE( X9 ) );
        X8 = obischeme_lay_2dpane_c5e084fa(  );
        DISPLAY( 7 ) = X1;
        DISPLAY( 11 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 9 ) = X4;
        DISPLAY( 10 ) = X5;
        DISPLAY( 8 ) = X6;
        DISPLAY( 0 ) = X7;
        POPSTACKTRACE( X8 );
}

TSCP  toollib_2dmisc_l16992( x16993, y16994, c20888 )
        TSCP  x16993, y16994, c20888;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l16992 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20888, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20888, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20888, 2 );
        X4 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20888, 3 );
        X5 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20888, 4 );
        X6 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20888, 5 );
        DISPLAY( 11 ) = y16994;
        X8 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16995, 
                            MAKECLOSURE( EMPTYLIST, 
                                         7, 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 0 ) ) );
        X7 = qobischeme_tracking_2dpointer( FALSEVALUE, 
                                            FALSEVALUE, X8 );
        DISPLAY( 7 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 9 ) = X3;
        DISPLAY( 10 ) = X4;
        DISPLAY( 8 ) = X5;
        DISPLAY( 0 ) = X6;
        SDVAL = X7;
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( obischeme__2dindexed_d1069d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dindexed_d1069d4_v );
EXTERNTSCPP( obischeme_c_2dregion_63f0d501, 
             XAL8( TSCP, 
                   TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_c_2dregion_63f0d501_v );
EXTERNTSCPP( xws6_xtextwidth, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws6_xtextwidth_v );
EXTERNTSCP( qobischeme__2aroman_2dfont_2a_v );

TSCP  toollib_2dmisc_l17081( x17082, y17083, c20921 )
        TSCP  x17082, y17083, c20921;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17081 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20921, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20921, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20921, 2 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 9 ), 
                                   DISPLAY( 8 ) );
        X5 = DISPLAY( 1 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 8 ) = X1;
        DISPLAY( 9 ) = X2;
        DISPLAY( 1 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17097( x17098, y17099, c20924 )
        TSCP  x17098, y17099, c20924;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17097 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20924, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20924, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20924, 2 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 9 ), 
                                   DISPLAY( 8 ) );
        X5 = DISPLAY( 2 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 8 ) = X1;
        DISPLAY( 9 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17113( x17114, y17115, c20927 )
        TSCP  x17114, y17115, c20927;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17113 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20927, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20927, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20927, 2 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 9 ), 
                                   DISPLAY( 8 ) );
        X5 = DISPLAY( 3 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 8 ) = X1;
        DISPLAY( 9 ) = X2;
        DISPLAY( 3 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( xws6_xdrawstring, 
             XAL7( TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws6_xdrawstring_v );
EXTERNTSCP( qobischeme__2aroman_2dgc_2a_v );

TSCP  toollib_2dmisc_l17068( s17069, i17070, c20916 )
        TSCP  s17069, i17070, c20916;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17068 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20916, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20916, 1 );
        X3 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c20916, 2 );
        X4 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c20916, 3 );
        X5 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20916, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20916, 5 );
        DISPLAY( 9 ) = i17070;
        X9 = qobischeme__2a_2dtwo( DISPLAY( 9 ), 
                                   obischeme_dheight_2a_954d402b_v );
        X8 = qobischeme__2b_2dtwo( X9, DISPLAY( 6 ) );
        if  ( AND( EQ( TSCPTAG( s17069 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s17069 ), STRINGTAG ) )
            )  goto L20919;
        scdebug_error( c16611, 
                       c16612, CONS( s17069, EMPTYLIST ) );
L20919:
        X10 = C_FIXED( STRING_LENGTH( s17069 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17069, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17081, 
                             MAKECLOSURE( EMPTYLIST, 
                                          3, 
                                          DISPLAY( 8 ), 
                                          DISPLAY( 9 ), 
                                          DISPLAY( 1 ) ) );
        obischeme_c_2dregion_63f0d501( _TSCP( 4 ), 
                                       _TSCP( 0 ), 
                                       _TSCP( 0 ), 
                                       DISPLAY( 5 ), 
                                       X8, 
                                       X9, 
                                       obischeme_dheight_2a_954d402b_v, 
                                       X10 );
        X9 = qobischeme__2a_2dtwo( DISPLAY( 9 ), 
                                   obischeme_dheight_2a_954d402b_v );
        X8 = qobischeme__2b_2dtwo( X9, DISPLAY( 6 ) );
        X10 = C_FIXED( STRING_LENGTH( s17069 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17069, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17097, 
                             MAKECLOSURE( EMPTYLIST, 
                                          3, 
                                          DISPLAY( 8 ), 
                                          DISPLAY( 9 ), 
                                          DISPLAY( 2 ) ) );
        obischeme_c_2dregion_63f0d501( _TSCP( 8 ), 
                                       _TSCP( 0 ), 
                                       _TSCP( 0 ), 
                                       DISPLAY( 5 ), 
                                       X8, 
                                       X9, 
                                       obischeme_dheight_2a_954d402b_v, 
                                       X10 );
        X9 = qobischeme__2a_2dtwo( DISPLAY( 9 ), 
                                   obischeme_dheight_2a_954d402b_v );
        X8 = qobischeme__2b_2dtwo( X9, DISPLAY( 6 ) );
        X10 = C_FIXED( STRING_LENGTH( s17069 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17069, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17113, 
                             MAKECLOSURE( EMPTYLIST, 
                                          3, 
                                          DISPLAY( 8 ), 
                                          DISPLAY( 9 ), 
                                          DISPLAY( 3 ) ) );
        obischeme_c_2dregion_63f0d501( _TSCP( 12 ), 
                                       _TSCP( 0 ), 
                                       _TSCP( 0 ), 
                                       DISPLAY( 5 ), 
                                       X8, 
                                       X9, 
                                       obischeme_dheight_2a_954d402b_v, 
                                       X10 );
        X10 = qobischeme__2b_2dtwo( DISPLAY( 9 ), _TSCP( 4 ) );
        X9 = qobischeme__2a_2dtwo( X10, 
                                   obischeme_dheight_2a_954d402b_v );
        X8 = qobischeme__2b_2dtwo( X9, DISPLAY( 6 ) );
        X9 = C_FIXED( STRING_LENGTH( s17069 ) );
        X7 = xws6_xdrawstring( qobischeme__2adisplay_2a_v, 
                               obischeme__2dpane_2a_b407de83_v, 
                               qobischeme__2aroman_2dgc_2a_v, 
                               DISPLAY( 5 ), 
                               X8, s17069, X9 );
        DISPLAY( 8 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 6 ) = X3;
        DISPLAY( 5 ) = X4;
        DISPLAY( 2 ) = X5;
        DISPLAY( 3 ) = X6;
        SDVAL = X7;
        DISPLAY( 9 ) = SD9;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_roll_2dbar_94710cad( f16899, 
                                     s16900, 
                                     l16901, 
                                     m16902, 
                                     r16903, 
                                     s16904, 
                                     x16905, 
                                     x16906, y16907, y16908 )
        TSCP  f16899, 
              s16900, 
              l16901, 
              m16902, 
              r16903, 
              s16904, x16905, x16906, y16907, y16908;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20842 );
        DISPLAY( 0 ) = s16900;
        DISPLAY( 1 ) = l16901;
        DISPLAY( 2 ) = m16902;
        DISPLAY( 3 ) = r16903;
        DISPLAY( 4 ) = s16904;
        DISPLAY( 5 ) = x16905;
        DISPLAY( 6 ) = y16907;
        X1 = obischeme_dheight_2a_954d402b_v;
        X2 = qobischeme__2d_2dtwo( y16908, DISPLAY( 6 ) );
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L20851;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20851;
        DISPLAY( 7 ) = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ) );
        goto L20852;
L20851:
        DISPLAY( 7 ) = scrt2_quotient( X2, X1 );
L20852:
        X1 = f16899;
        X1 = UNKNOWNCALL( X1, 0 );
        DISPLAY( 8 ) = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        X2 = scrt1_length( DISPLAY( 4 ) );
        X3 = qobischeme__2b_2dtwo( DISPLAY( 8 ), 
                                   DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L20856;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L20858;
        X1 = X3;
        goto L20857;
L20858:
        X1 = X2;
        goto L20857;
L20856:
        X1 = scrt2_min_2dtwo( X3, X2 );
L20857:
        if  ( EQ( _S2CUINT( DISPLAY( 4 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20861;
        DISPLAY( 9 ) = DISPLAY( 6 );
        DISPLAY( 10 ) = y16908;
        X6 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        X8 = scrt1_length( DISPLAY( 4 ) );
        X7 = qobischeme__2f_2dtwo( DISPLAY( 8 ), X8 );
        X5 = qobischeme__2a_2dtwo( X6, X7 );
        X4 = scrt2_floor( X5 );
        X3 = scrt2_inexact_2d_3eexact( X4 );
        X2 = qobischeme__2b_2dtwo( DISPLAY( 9 ), X3 );
        X7 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        X9 = scrt1_length( DISPLAY( 4 ) );
        X8 = qobischeme__2f_2dtwo( X1, X9 );
        X6 = qobischeme__2a_2dtwo( X7, X8 );
        X5 = scrt2_floor( X6 );
        X4 = scrt2_inexact_2d_3eexact( X5 );
        X3 = qobischeme__2b_2dtwo( DISPLAY( 9 ), X4 );
        X4 = qobischeme__2b_2dtwo( x16906, _TSCP( 16 ) );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        xws6_xfillrectangle( qobischeme__2adisplay_2a_v, 
                             obischeme__2dpane_2a_b407de83_v, 
                             qobischeme__2athin_2dgc_2a_v, 
                             X4, 
                             DISPLAY( 9 ), _TSCP( 4 ), X5 );
        X4 = qobischeme__2b_2dtwo( x16906, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( X3, X2 );
        xws6_xfillrectangle( qobischeme__2adisplay_2a_v, 
                             obischeme__2dpane_2a_b407de83_v, 
                             qobischeme__2athin_2dgc_2a_v, 
                             X4, X2, _TSCP( 20 ), X5 );
        X4 = qobischeme__2b_2dtwo( x16906, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        X6 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16946, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 0 ) ) );
        qobischeme_define_2dregion( X4, 
                                    DISPLAY( 9 ), 
                                    _TSCP( 20 ), X5, X6 );
        X4 = qobischeme__2b_2dtwo( x16906, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( X3, X2 );
        X6 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16992, 
                            MAKECLOSURE( EMPTYLIST, 
                                         6, 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 0 ) ) );
        qobischeme_define_2dregion( X4, 
                                    X2, _TSCP( 20 ), X5, X6 );
L20861:
        X2 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17068, 
                            MAKECLOSURE( EMPTYLIST, 
                                         6, 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 3 ) ) );
        X3 = qobischeme_sublist( DISPLAY( 4 ), 
                                 DISPLAY( 8 ), X1 );
        SDVAL = obischeme__2dindexed_d1069d4( X2, X3 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2d_3elines_2a2b92ea_v );
DEFCSTRING( t20930, "ELLIPSE->LINES" );
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

TSCP  toollib_2dmisc_l17183( i17184, c20944 )
        TSCP  i17184, c20944;
{
        TSCP  X22, 
              X21, 
              X20, 
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

        PUSHSTACKTRACE( "toollib_2dmisc_l17183 [inside ELLIPSE->LINES]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20944, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c20944, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20944, 2 );
        X4 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20944, 3 );
        X5 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c20944, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20944, 5 );
        X7 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20944, 6 );
        X8 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20944, 7 );
        X9 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20944, 8 );
        X10 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20944, 9 );
        X11 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20944, 10 );
        X16 = qobischeme__2a_2dtwo( _TSCP( 40 ), i17184 );
        X15 = obischeme__3eradians_78a74454( X16 );
        X14 = qobischeme_sin( X15 );
        X13 = qobischeme__2a_2dtwo( DISPLAY( 4 ), X14 );
        X17 = qobischeme__2a_2dtwo( _TSCP( 40 ), i17184 );
        X16 = obischeme__3eradians_78a74454( X17 );
        X15 = qobischeme_cos( X16 );
        X14 = qobischeme__2a_2dtwo( DISPLAY( 5 ), X15 );
        X16 = qobischeme__2a_2dtwo( DISPLAY( 6 ), X13 );
        X18 = qobischeme__2a_2dtwo( DISPLAY( 7 ), X14 );
        X17 = qobischeme__2b_2dtwo( X18, DISPLAY( 2 ) );
        X15 = qobischeme__2b_2dtwo( X16, X17 );
        X17 = qobischeme__2a_2dtwo( DISPLAY( 8 ), X13 );
        X19 = qobischeme__2a_2dtwo( DISPLAY( 9 ), X14 );
        X18 = qobischeme__2b_2dtwo( X19, DISPLAY( 3 ) );
        X16 = qobischeme__2b_2dtwo( X17, X18 );
        if  ( FALSE( PAIR_CAR( DISPLAY( 0 ) ) ) )  goto L20950;
        X21 = CONS( EMPTYLIST, EMPTYLIST );
        X20 = scrt1_cons_2a( X15, CONS( X16, X21 ) );
        X19 = scrt4_list_2d_3evector( X20 );
        X22 = CONS( EMPTYLIST, EMPTYLIST );
        X21 = scrt1_cons_2a( PAIR_CAR( DISPLAY( 0 ) ), 
                             CONS( PAIR_CAR( DISPLAY( 1 ) ), 
                                   X22 ) );
        X20 = scrt4_list_2d_3evector( X21 );
        X18 = obischeme__2dsegment_42724a73( X19, X20 );
        X17 = sc_cons( X18, PAIR_CAR( DISPLAY( 10 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 10 ) ), X17 );
L20950:
        X17 = X15;
        SETGEN( PAIR_CAR( DISPLAY( 0 ) ), X17 );
        X17 = X16;
        X12 = SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X17 );
        DISPLAY( 4 ) = X1;
        DISPLAY( 5 ) = X2;
        DISPLAY( 2 ) = X3;
        DISPLAY( 7 ) = X4;
        DISPLAY( 6 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 9 ) = X7;
        DISPLAY( 8 ) = X8;
        DISPLAY( 1 ) = X9;
        DISPLAY( 10 ) = X10;
        DISPLAY( 0 ) = X11;
        POPSTACKTRACE( X12 );
}

TSCP  ib_2dmisc_2d_3elines_2a2b92ea( e17158 )
        TSCP  e17158;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20930 );
        DISPLAY( 0 ) = FALSEVALUE;
        DISPLAY( 0 ) = CONS( DISPLAY( 0 ), EMPTYLIST );
        DISPLAY( 1 ) = FALSEVALUE;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 2 ) = qobischeme_ellipse_2dx0( e17158 );
        DISPLAY( 3 ) = qobischeme_ellipse_2dy0( e17158 );
        X1 = qobischeme_ellipse_2dt0( e17158 );
        DISPLAY( 4 ) = qobischeme_ellipse_2da( e17158 );
        DISPLAY( 5 ) = qobischeme_ellipse_2db( e17158 );
        DISPLAY( 6 ) = qobischeme_cos( X1 );
        X2 = qobischeme_sin( X1 );
        DISPLAY( 7 ) = qobischeme__2d_2dtwo( _TSCP( 0 ), X2 );
        DISPLAY( 8 ) = qobischeme__2d_2dtwo( _TSCP( 0 ), 
                                             DISPLAY( 7 ) );
        DISPLAY( 9 ) = DISPLAY( 6 );
        DISPLAY( 10 ) = EMPTYLIST;
        DISPLAY( 10 ) = CONS( DISPLAY( 10 ), EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17183, 
                            MAKECLOSURE( EMPTYLIST, 
                                         11, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 0 ) ) );
        qobischeme_for_2deach_2dn( X2, _TSCP( 148 ) );
        SDVAL = PAIR_CAR( DISPLAY( 10 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_acot_v );
DEFCSTRING( t20952, "ACOT" );
EXTERNTSCPP( qobischeme_atan, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_atan_v );

TSCP  toollib_2dmisc_acot( x17237 )
        TSCP  x17237;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20952 );
        X1 = qobischeme_atan( CONS( x17237, EMPTYLIST ) );
        POPSTACKTRACE( qobischeme__2d_2dtwo( qobischeme_half_2dpi_v, 
                                             X1 ) );
}

DEFTSCP( ib_2dmisc__2dinverse_e1b53b4a_v );
DEFCSTRING( t20954, "LEFT-PSEUDO-INVERSE" );
EXTERNTSCPP( qobischeme_invert_2dmatrix, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_invert_2dmatrix_v );

TSCP  ib_2dmisc__2dinverse_e1b53b4a( m17242 )
        TSCP  m17242;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20954 );
        X3 = qobischeme_transpose( m17242 );
        X2 = qobischeme_m_2a( X3, m17242 );
        X1 = qobischeme_invert_2dmatrix( X2 );
        if  ( FALSE( X1 ) )  goto L20957;
        X2 = qobischeme_transpose( m17242 );
        POPSTACKTRACE( qobischeme_m_2a( X1, X2 ) );
L20957:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dinverse_2d42fdb5_v );
DEFCSTRING( t20959, "RIGHT-PSEUDO-INVERSE" );

TSCP  ib_2dmisc__2dinverse_2d42fdb5( m17246 )
        TSCP  m17246;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20959 );
        X3 = qobischeme_transpose( m17246 );
        X2 = qobischeme_m_2a( m17246, X3 );
        X1 = qobischeme_invert_2dmatrix( X2 );
        if  ( FALSE( X1 ) )  goto L20962;
        X2 = qobischeme_transpose( m17246 );
        POPSTACKTRACE( qobischeme_m_2a( X2, X1 ) );
L20962:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_ellipse_2dfit_v );
DEFCSTRING( t20964, "ELLIPSE-FIT" );

TSCP  toollib_2dmisc_ellipse_2dfit( p17250 )
        TSCP  p17250;
{
        PUSHSTACKTRACE( t20964 );
        POPSTACKTRACE( qobischeme_panic( c17251, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_t_2dscheme_6289f649_v );
DEFCSTRING( t20966, "ELLIPSE-FIT-SCHEME" );
EXTERNTSCPP( qobischeme_make_2dellipse, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_make_2dellipse_v );

TSCP  ib_2dmisc_t_2dscheme_6289f649( p17253 )
        TSCP  p17253;
{
        TSCP  X24, 
              X23, 
              X22, 
              X21, 
              X20, 
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

        PUSHSTACKTRACE( t20966 );
        X3 = p17253;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L20969:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20970;
        X2 = X4;
        goto L20978;
L20970:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L20973;
        scrt1__24__car_2derror( X3 );
L20973:
        X8 = PAIR_CAR( X3 );
        X12 = qobischeme_x( X8 );
        X13 = qobischeme_y( X8 );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        X10 = qobischeme__2a_2dtwo( _TSCP( 8 ), X11 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = CONS( _TSCP( 4 ), X11 );
        X12 = qobischeme_y( X8 );
        X11 = CONS( qobischeme__2a_2dtwo( _TSCP( 8 ), X12 ), 
                    X11 );
        X12 = qobischeme_x( X8 );
        X11 = CONS( qobischeme__2a_2dtwo( _TSCP( 8 ), X12 ), 
                    X11 );
        X12 = qobischeme_y( X8 );
        X9 = scrt1_cons_2a( X10, 
                            CONS( qobischeme_sqr( X12 ), X11 ) );
        X7 = scrt4_list_2d_3evector( X9 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L20977;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L20969 );
L20977:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L20982;
        scdebug_error( c13513, 
                       c13514, CONS( X5, EMPTYLIST ) );
L20982:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L20969 );
L20978:
        X1 = scrt4_list_2d_3evector( X2 );
        X4 = p17253;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L20986:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L20987;
        X3 = X5;
        goto L20995;
L20987:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20990;
        scrt1__24__car_2derror( X4 );
L20990:
        X9 = PAIR_CAR( X4 );
        X11 = qobischeme_x( X9 );
        X10 = qobischeme_sqr( X11 );
        X8 = scrt4_vector( CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X10 ), 
                                 EMPTYLIST ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20994;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L20986 );
L20994:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L20999;
        scdebug_error( c13513, 
                       c13514, CONS( X6, EMPTYLIST ) );
L20999:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L20986 );
L20995:
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = ib_2dmisc__2dinverse_e1b53b4a( X1 );
        X5 = qobischeme_m_2a( X3, X2 );
        X4 = ib_2dmisc_e_2dmatrix_11b5d357( X5 );
        X5 = qobischeme_x( X4 );
        X6 = qobischeme_y( X4 );
        X7 = qobischeme_z( X4 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L21008;
        scdebug_error( c13410, 
                       c13411, CONS( X4, EMPTYLIST ) );
L21008:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L21010;
        scdebug_error( c13410, 
                       c13414, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L21010:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L21012;
        scdebug_error( c13410, 
                       c13418, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L21012:
        X8 = VECTOR_ELEMENT( X4, _TSCP( 12 ) );
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L21016;
        scdebug_error( c13410, 
                       c13414, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L21016:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L21018;
        scdebug_error( c13410, 
                       c13418, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L21018:
        X9 = VECTOR_ELEMENT( X4, _TSCP( 16 ) );
        X11 = qobischeme__2a_2dtwo( X5, X5 );
        X12 = qobischeme__2a_2dtwo( _TSCP( 4 ), X6 );
        X10 = qobischeme__2d_2dtwo( X11, X12 );
        X14 = qobischeme__2a_2dtwo( X8, X8 );
        X13 = qobischeme__2a_2dtwo( _TSCP( 4 ), X14 );
        X16 = qobischeme__2a_2dtwo( X7, X7 );
        X15 = qobischeme__2a_2dtwo( X6, X16 );
        X18 = qobischeme__2a_2dtwo( X5, X5 );
        X17 = qobischeme__2a_2dtwo( X9, X18 );
        X22 = qobischeme__2a_2dtwo( X7, X8 );
        X21 = qobischeme__2a_2dtwo( X5, X22 );
        X20 = qobischeme__2a_2dtwo( _TSCP( 8 ), X21 );
        X19 = qobischeme__2d_2dtwo( _TSCP( 0 ), X20 );
        X22 = qobischeme__2a_2dtwo( X6, X9 );
        X21 = qobischeme__2a_2dtwo( _TSCP( 4 ), X22 );
        X20 = qobischeme__2d_2dtwo( _TSCP( 0 ), X21 );
        X18 = qobischeme__2b_2dtwo( X19, X20 );
        X16 = qobischeme__2b_2dtwo( X17, X18 );
        X14 = qobischeme__2b_2dtwo( X15, X16 );
        X12 = qobischeme__2b_2dtwo( X13, X14 );
        X11 = qobischeme__2a_2dtwo( _TSCP( 8 ), X12 );
        X16 = qobischeme__2a_2dtwo( X5, X5 );
        X15 = qobischeme__2a_2dtwo( _TSCP( 16 ), X16 );
        X17 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X16 = qobischeme_sqr( X17 );
        X14 = qobischeme__2f_2dtwo( X15, X16 );
        X13 = qobischeme__2b_2dtwo( _TSCP( 4 ), X14 );
        X12 = qobischeme_sqrt( X13 );
        X18 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X17 = qobischeme__2a_2dtwo( X18, X12 );
        X18 = qobischeme__2b_2dtwo( X6, _TSCP( 4 ) );
        X16 = qobischeme__2d_2dtwo( X17, X18 );
        X15 = qobischeme__2a_2dtwo( X10, X16 );
        X14 = qobischeme__2f_2dtwo( X11, X15 );
        X13 = qobischeme_sqrt( X14 );
        X19 = qobischeme__2d_2dtwo( X6, _TSCP( 4 ) );
        X18 = qobischeme__2a_2dtwo( X19, X12 );
        X19 = qobischeme__2b_2dtwo( X6, _TSCP( 4 ) );
        X17 = qobischeme__2d_2dtwo( X18, X19 );
        X16 = qobischeme__2a_2dtwo( X10, X17 );
        X15 = qobischeme__2f_2dtwo( X11, X16 );
        X14 = qobischeme_sqrt( X15 );
        X16 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X16 ) )  goto L21032;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21032;
        X17 = _TSCP( 0 );
        goto L21033;
L21032:
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21040;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21040;
        X17 = qobischeme_half_2dpi_v;
        goto L21033;
L21040:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21041;
        X18 = FALSEVALUE;
        goto L21042;
L21041:
        X18 = TRUEVALUE;
L21042:
        if  ( FALSE( X18 ) )  goto L21049;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21049;
        X21 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X22 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X20 = qobischeme__2f_2dtwo( X21, X22 );
        X19 = toollib_2dmisc_acot( X20 );
        X17 = qobischeme__2f_2dtwo( X19, _TSCP( 8 ) );
        goto L21033;
L21049:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21050;
        X18 = FALSEVALUE;
        goto L21051;
L21050:
        X18 = TRUEVALUE;
L21051:
        if  ( FALSE( X18 ) )  goto L21058;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21058;
        X22 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X23 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X21 = qobischeme__2f_2dtwo( X22, X23 );
        X20 = toollib_2dmisc_acot( X21 );
        X19 = qobischeme__2f_2dtwo( X20, _TSCP( 8 ) );
        X17 = qobischeme__2b_2dtwo( qobischeme_half_2dpi_v, X19 );
        goto L21033;
L21058:
        X17 = qobischeme_fuck_2dup(  );
L21033:
        X15 = CONS( X17, EMPTYLIST );
        if  ( FALSE( qobischeme__3e_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21059;
        X16 = qobischeme_half_2dpi_v;
        goto L21060;
L21059:
        X16 = _TSCP( 0 );
L21060:
        X18 = qobischeme__2f_2dtwo( _TSCP( 4 ), _TSCP( 8 ) );
        X21 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X22 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X20 = qobischeme__2f_2dtwo( X21, X22 );
        X19 = toollib_2dmisc_acot( X20 );
        X17 = qobischeme__2a_2dtwo( X18, X19 );
        X15 = CONS( qobischeme__2b_2dtwo( X16, X17 ), X15 );
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21062;
        X17 = qobischeme__3c_2dtwo( _TSCP( 4 ), X6 );
        goto L21063;
L21062:
        X17 = X18;
L21063:
        X20 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X20 ) )  goto L21065;
        X19 = qobischeme__3e_2dtwo( _TSCP( 4 ), X6 );
        goto L21066;
L21065:
        X19 = X20;
L21066:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21067;
        X22 = FALSEVALUE;
        goto L21068;
L21067:
        X22 = TRUEVALUE;
L21068:
        if  ( FALSE( X22 ) )  goto L21070;
        X21 = qobischeme__3c_2dtwo( _TSCP( 4 ), X6 );
        goto L21071;
L21070:
        X21 = X22;
L21071:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21072;
        X24 = FALSEVALUE;
        goto L21073;
L21072:
        X24 = TRUEVALUE;
L21073:
        if  ( FALSE( X24 ) )  goto L21075;
        X23 = qobischeme__3e_2dtwo( _TSCP( 4 ), X6 );
        goto L21076;
L21075:
        X23 = X24;
L21076:
        X22 = sc_cons( X23, EMPTYLIST );
        X20 = sc_cons( X21, X22 );
        X18 = sc_cons( X19, X20 );
        X16 = sc_cons( X17, X18 );
        X15 = CONS( X16, X15 );
        X15 = CONS( X7, X15 );
        X15 = CONS( X6, X15 );
        X15 = CONS( X5, X15 );
        X15 = CONS( _TSCP( 4 ), X15 );
        scrt6_format( TRUEVALUE, CONS( c17284, X15 ) );
        X17 = qobischeme__2a_2dtwo( X6, X7 );
        X18 = qobischeme__2a_2dtwo( X5, X8 );
        X16 = qobischeme__2d_2dtwo( X17, X18 );
        X15 = qobischeme__2f_2dtwo( X16, X10 );
        X18 = qobischeme__2a_2dtwo( _TSCP( 4 ), X8 );
        X19 = qobischeme__2a_2dtwo( X5, X7 );
        X17 = qobischeme__2d_2dtwo( X18, X19 );
        X16 = qobischeme__2f_2dtwo( X17, X10 );
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21084;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21084;
        X17 = _TSCP( 0 );
        goto L21085;
L21084:
        X19 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X19 ) )  goto L21092;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21092;
        X17 = qobischeme_half_2dpi_v;
        goto L21085;
L21092:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21093;
        X19 = FALSEVALUE;
        goto L21094;
L21093:
        X19 = TRUEVALUE;
L21094:
        if  ( FALSE( X19 ) )  goto L21101;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21101;
        X22 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X23 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X21 = qobischeme__2f_2dtwo( X22, X23 );
        X20 = toollib_2dmisc_acot( X21 );
        X17 = qobischeme__2f_2dtwo( X20, _TSCP( 8 ) );
        goto L21085;
L21101:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21102;
        X19 = FALSEVALUE;
        goto L21103;
L21102:
        X19 = TRUEVALUE;
L21103:
        if  ( FALSE( X19 ) )  goto L21110;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21110;
        X23 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X24 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X22 = qobischeme__2f_2dtwo( X23, X24 );
        X21 = toollib_2dmisc_acot( X22 );
        X20 = qobischeme__2f_2dtwo( X21, _TSCP( 8 ) );
        X17 = qobischeme__2b_2dtwo( qobischeme_half_2dpi_v, X20 );
        goto L21085;
L21110:
        X17 = qobischeme_fuck_2dup(  );
L21085:
        POPSTACKTRACE( qobischeme_make_2dellipse( X15, 
                                                  X16, 
                                                  X17, X13, X14 ) );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d2d_v );
DEFCSTRING( t21111, "EVERY-N-2D" );
EXTERNTSCPP( qobischeme_every_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_every_2dn_v );

TSCP  toollib_2dmisc_l17749( b17750, c21115 )
        TSCP  b17750, c21115;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17749 [inside EVERY-N-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21115, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21115, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17750, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17747( a17748, c21113 )
        TSCP  a17748, c21113;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17747 [inside EVERY-N-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21113, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21113, 1 );
        DISPLAY( 2 ) = a17748;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17749, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_every_2dn( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_every_2dn_2d2d( p17744, v17745, w17746 )
        TSCP  p17744, v17745, w17746;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21111 );
        DISPLAY( 0 ) = p17744;
        DISPLAY( 1 ) = w17746;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17747, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17745 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d3d_v );
DEFCSTRING( t21117, "EVERY-N-3D" );

TSCP  toollib_2dmisc_l17758( b17759, c17760, c21121 )
        TSCP  b17759, c17760, c21121;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17758 [inside EVERY-N-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21121, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21121, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17759, 
                                          c17760, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17756( a17757, c21119 )
        TSCP  a17757, c21119;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17756 [inside EVERY-N-3D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21119, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21119, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21119, 2 );
        DISPLAY( 3 ) = a17757;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17758, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = toollib_2dmisc_every_2dn_2d2d( X5, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_every_2dn_2d3d( p17752, 
                                     v17753, w17754, x17755 )
        TSCP  p17752, v17753, w17754, x17755;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21117 );
        DISPLAY( 0 ) = p17752;
        DISPLAY( 1 ) = w17754;
        DISPLAY( 2 ) = x17755;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17756, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17753 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d4d_v );
DEFCSTRING( t21123, "EVERY-N-4D" );

TSCP  toollib_2dmisc_l17770( c17771, d17772, c21127 )
        TSCP  c17771, d17772, c21127;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17770 [inside EVERY-N-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21127, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21127, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21127, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17771, 
                                          d17772, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17767( a17768, b17769, c21125 )
        TSCP  a17768, b17769, c21125;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17767 [inside EVERY-N-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21125, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21125, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21125, 2 );
        DISPLAY( 3 ) = a17768;
        DISPLAY( 4 ) = b17769;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17770, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = toollib_2dmisc_every_2dn_2d2d( X5, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_every_2dn_2d4d( p17762, 
                                     v17763, 
                                     w17764, x17765, y17766 )
        TSCP  p17762, v17763, w17764, x17765, y17766;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21123 );
        DISPLAY( 0 ) = p17762;
        DISPLAY( 1 ) = x17765;
        DISPLAY( 2 ) = y17766;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17767, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_every_2dn_2d2d( X1, v17763, w17764 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d5d_v );
DEFCSTRING( t21129, "EVERY-N-5D" );

TSCP  toollib_2dmisc_l17782( b17783, 
                             c17784, d17785, e17786, c21133 )
        TSCP  b17783, c17784, d17785, e17786, c21133;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17782 [inside EVERY-N-5D]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c21133, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21133, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 5 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 5 ), 
                                          b17783, 
                                          c17784, 
                                          d17785, 
                                          e17786, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17780( a17781, c21131 )
        TSCP  a17781, c21131;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17780 [inside EVERY-N-5D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21131, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21131, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21131, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21131, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21131, 4 );
        DISPLAY( 5 ) = a17781;
        X7 = MAKEPROCEDURE( 4, 
                            0, 
                            toollib_2dmisc_l17782, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 0 ) ) );
        X6 = toollib_2dmisc_every_2dn_2d4d( X7, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            DISPLAY( 3 ), 
                                            DISPLAY( 4 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 2 ) = X3;
        DISPLAY( 1 ) = X4;
        DISPLAY( 0 ) = X5;
        SDVAL = X6;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_every_2dn_2d5d( p17774, 
                                     v17775, 
                                     w17776, 
                                     x17777, y17778, z17779 )
        TSCP  p17774, 
              v17775, w17776, x17777, y17778, z17779;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21129 );
        DISPLAY( 0 ) = p17774;
        DISPLAY( 1 ) = w17776;
        DISPLAY( 2 ) = x17777;
        DISPLAY( 3 ) = y17778;
        DISPLAY( 4 ) = z17779;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17780, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17775 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_b84c4399_v );
DEFCSTRING( t21135, "MAP-N-VECTOR-2D" );

TSCP  toollib_2dmisc_l17793( b17794, c21139 )
        TSCP  b17794, c21139;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17793 [inside MAP-N-VECTOR-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21139, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21139, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17794, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17791( a17792, c21137 )
        TSCP  a17792, c21137;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17791 [inside MAP-N-VECTOR-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21137, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21137, 1 );
        DISPLAY( 2 ) = a17792;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17793, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_map_2dn_2dvector( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_ector_2d2d_b84c4399( f17788, m17789, n17790 )
        TSCP  f17788, m17789, n17790;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21135 );
        DISPLAY( 0 ) = f17788;
        DISPLAY( 1 ) = n17790;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17791, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, m17789 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d3d_a15772d8_v );
DEFCSTRING( t21141, "MAP-N-VECTOR-3D" );

TSCP  toollib_2dmisc_l17802( b17803, c17804, c21145 )
        TSCP  b17803, c17804, c21145;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17802 [inside MAP-N-VECTOR-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21145, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21145, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17803, 
                                          c17804, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17800( a17801, c21143 )
        TSCP  a17801, c21143;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17800 [inside MAP-N-VECTOR-3D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21143, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21143, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21143, 2 );
        DISPLAY( 3 ) = a17801;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17802, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = ib_2dmisc_ector_2d2d_b84c4399( X5, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_ector_2d3d_a15772d8( f17796, 
                                     m17797, n17798, p17799 )
        TSCP  f17796, m17797, n17798, p17799;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21141 );
        DISPLAY( 0 ) = f17796;
        DISPLAY( 1 ) = n17798;
        DISPLAY( 2 ) = p17799;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17800, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, m17797 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d4d_ee16e41f_v );
DEFCSTRING( t21147, "MAP-N-VECTOR-4D" );

TSCP  toollib_2dmisc_l17814( c17815, d17816, c21151 )
        TSCP  c17815, d17816, c21151;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17814 [inside MAP-N-VECTOR-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21151, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21151, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21151, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17815, 
                                          d17816, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17811( a17812, b17813, c21149 )
        TSCP  a17812, b17813, c21149;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17811 [inside MAP-N-VECTOR-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21149, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21149, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21149, 2 );
        DISPLAY( 3 ) = a17812;
        DISPLAY( 4 ) = b17813;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17814, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = ib_2dmisc_ector_2d2d_b84c4399( X5, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_ector_2d4d_ee16e41f( f17806, 
                                     m17807, 
                                     n17808, p17809, q17810 )
        TSCP  f17806, m17807, n17808, p17809, q17810;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21147 );
        DISPLAY( 0 ) = f17806;
        DISPLAY( 1 ) = p17809;
        DISPLAY( 2 ) = q17810;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17811, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_ector_2d2d_b84c4399( X1, m17807, n17808 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d5d_f70dd55e_v );
DEFCSTRING( t21153, "MAP-N-VECTOR-5D" );

TSCP  toollib_2dmisc_l17828( d17829, e17830, c21157 )
        TSCP  d17829, e17830, c21157;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17828 [inside MAP-N-VECTOR-5D]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c21157, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21157, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21157, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21157, 3 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 5 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          DISPLAY( 5 ), 
                                          d17829, 
                                          e17830, 
                                          PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_l17824( a17825, b17826, c17827, c21155 )
        TSCP  a17825, b17826, c17827, c21155;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17824 [inside MAP-N-VECTOR-5D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21155, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21155, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21155, 2 );
        DISPLAY( 3 ) = a17825;
        DISPLAY( 4 ) = b17826;
        DISPLAY( 5 ) = c17827;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17828, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = ib_2dmisc_ector_2d2d_b84c4399( X5, 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_ector_2d5d_f70dd55e( f17818, 
                                     m17819, 
                                     n17820, 
                                     p17821, q17822, r17823 )
        TSCP  f17818, 
              m17819, n17820, p17821, q17822, r17823;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21153 );
        DISPLAY( 0 ) = f17818;
        DISPLAY( 1 ) = q17822;
        DISPLAY( 2 ) = r17823;
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l17824, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_ector_2d3d_a15772d8( X1, 
                                               m17819, 
                                               n17820, p17821 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_product_2d2d_v );
DEFCSTRING( t21159, "PRODUCT-2D" );
EXTERNTSCPP( qobischeme_product, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_product_v );

TSCP  toollib_2dmisc_l17837( b17838, c21163 )
        TSCP  b17838, c21163;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17837 [inside PRODUCT-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21163, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21163, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17838, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17835( a17836, c21161 )
        TSCP  a17836, c21161;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17835 [inside PRODUCT-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21161, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21161, 1 );
        DISPLAY( 2 ) = a17836;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17837, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_product( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_product_2d2d( f17832, m17833, n17834 )
        TSCP  f17832, m17833, n17834;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21159 );
        DISPLAY( 0 ) = f17832;
        DISPLAY( 1 ) = n17834;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17835, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_product( X1, m17833 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_ref_2d1d_v );
DEFCSTRING( t21165, "REF-1D" );

TSCP  toollib_2dmisc_ref_2d1d( m17840, a17841 )
        TSCP  m17840, a17841;
{
        PUSHSTACKTRACE( t21165 );
        if  ( AND( EQ( TSCPTAG( m17840 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m17840 ), VECTORTAG ) )
            )  goto L21168;
        scdebug_error( c13410, 
                       c13411, CONS( m17840, EMPTYLIST ) );
L21168:
        if  ( EQ( TSCPTAG( a17841 ), FIXNUMTAG ) )  goto L21170;
        scdebug_error( c13410, 
                       c13414, CONS( a17841, EMPTYLIST ) );
L21170:
        if  ( LT( _S2CUINT( FIXED_C( a17841 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m17840 ) ) ) )  goto L21172;
        scdebug_error( c13410, 
                       c13418, CONS( a17841, EMPTYLIST ) );
L21172:
        POPSTACKTRACE( VECTOR_ELEMENT( m17840, a17841 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d2d_v );
DEFCSTRING( t21174, "REF-2D" );

TSCP  toollib_2dmisc_ref_2d2d( m17853, a17854, b17855 )
        TSCP  m17853, a17854, b17855;
{
        PUSHSTACKTRACE( t21174 );
        POPSTACKTRACE( qobischeme_matrix_2dref( m17853, 
                                                a17854, b17855 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d3d_v );
DEFCSTRING( t21176, "REF-3D" );

TSCP  toollib_2dmisc_ref_2d3d( m17857, a17858, b17859, c17860 )
        TSCP  m17857, a17858, b17859, c17860;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21176 );
        if  ( AND( EQ( TSCPTAG( m17857 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m17857 ), VECTORTAG ) )
            )  goto L21179;
        scdebug_error( c13410, 
                       c13411, CONS( m17857, EMPTYLIST ) );
L21179:
        if  ( EQ( TSCPTAG( a17858 ), FIXNUMTAG ) )  goto L21181;
        scdebug_error( c13410, 
                       c13414, CONS( a17858, EMPTYLIST ) );
L21181:
        if  ( LT( _S2CUINT( FIXED_C( a17858 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m17857 ) ) ) )  goto L21183;
        scdebug_error( c13410, 
                       c13418, CONS( a17858, EMPTYLIST ) );
L21183:
        X1 = VECTOR_ELEMENT( m17857, a17858 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, b17859, c17860 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d4d_v );
DEFCSTRING( t21185, "REF-4D" );

TSCP  toollib_2dmisc_ref_2d4d( m17872, 
                               a17873, b17874, c17875, d17876 )
        TSCP  m17872, a17873, b17874, c17875, d17876;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21185 );
        X1 = qobischeme_matrix_2dref( m17872, a17873, b17874 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, c17875, d17876 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d5d_v );
DEFCSTRING( t21187, "REF-5D" );

TSCP  toollib_2dmisc_ref_2d5d( m17878, 
                               a17879, 
                               b17880, c17881, d17882, e17883 )
        TSCP  m17878, 
              a17879, b17880, c17881, d17882, e17883;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21187 );
        X1 = toollib_2dmisc_ref_2d3d( m17878, 
                                      a17879, b17880, c17881 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, d17882, e17883 ) );
}

DEFTSCP( toollib_2dmisc_sum_2d2d_v );
DEFCSTRING( t21189, "SUM-2D" );
EXTERNTSCPP( qobischeme_sum, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sum_v );

TSCP  toollib_2dmisc_l17890( b17891, c21193 )
        TSCP  b17891, c21193;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17890 [inside SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21193, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21193, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17891, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17888( a17889, c21191 )
        TSCP  a17889, c21191;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17888 [inside SUM-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21191, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21191, 1 );
        DISPLAY( 2 ) = a17889;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17890, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_sum( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_sum_2d2d( f17885, m17886, n17887 )
        TSCP  f17885, m17886, n17887;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21189 );
        DISPLAY( 0 ) = f17885;
        DISPLAY( 1 ) = n17887;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17888, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_sum( X1, m17886 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2d3d_v );
DEFCSTRING( t21195, "SUM-3D" );

TSCP  toollib_2dmisc_l17900( c17901, c21199 )
        TSCP  c17901, c21199;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17900 [inside SUM-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21199, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21199, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21199, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 2 ), 
                                          DISPLAY( 3 ), 
                                          c17901, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17897( a17898, b17899, c21197 )
        TSCP  a17898, b17899, c21197;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17897 [inside SUM-3D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21197, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21197, 1 );
        DISPLAY( 2 ) = a17898;
        DISPLAY( 3 ) = b17899;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17900, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme_sum( X4, DISPLAY( 1 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_sum_2d3d( f17893, m17894, n17895, p17896 )
        TSCP  f17893, m17894, n17895, p17896;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21195 );
        DISPLAY( 0 ) = f17893;
        DISPLAY( 1 ) = p17896;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17897, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_sum_2d2d( X1, m17894, n17895 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2d4d_v );
DEFCSTRING( t21201, "SUM-4D" );

TSCP  toollib_2dmisc_l17911( c17912, d17913, c21205 )
        TSCP  c17912, d17913, c21205;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17911 [inside SUM-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21205, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21205, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21205, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17912, 
                                          d17913, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17908( a17909, b17910, c21203 )
        TSCP  a17909, b17910, c21203;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17908 [inside SUM-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21203, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21203, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21203, 2 );
        DISPLAY( 3 ) = a17909;
        DISPLAY( 4 ) = b17910;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17911, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = toollib_2dmisc_sum_2d2d( X5, 
                                      DISPLAY( 1 ), 
                                      DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_sum_2d4d( f17903, 
                               m17904, n17905, p17906, q17907 )
        TSCP  f17903, m17904, n17905, p17906, q17907;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21201 );
        DISPLAY( 0 ) = f17903;
        DISPLAY( 1 ) = p17906;
        DISPLAY( 2 ) = q17907;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17908, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_sum_2d2d( X1, m17904, n17905 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2dpairs_v );
DEFCSTRING( t21207, "SUM-PAIRS" );

TSCP  toollib_2dmisc_l17919( b17920, c21211 )
        TSCP  b17920, c21211;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17919 [inside SUM-PAIRS]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21211, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21211, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 1 ), 
                                          b17920, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17917( a17918, c21209 )
        TSCP  a17918, c21209;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17917 [inside SUM-PAIRS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21209, 0 );
        DISPLAY( 1 ) = a17918;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17919, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = qobischeme_sum( X3, DISPLAY( 1 ) );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  toollib_2dmisc_sum_2dpairs( f17915, m17916 )
        TSCP  f17915, m17916;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21207 );
        DISPLAY( 0 ) = f17915;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17917, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_sum( X1, m17916 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_vector_2dsum_v );
DEFCSTRING( t21213, "VECTOR-SUM" );

TSCP  toollib_2dmisc_vector_2dsum( f17922, n17923, i17924 )
        TSCP  f17922, n17923, i17924;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21213 );
        X1 = qobischeme__2d_2dtwo( n17923, _TSCP( 4 ) );
        X2 = X1;
        X3 = i17924;
L21217:
        if  ( TRUE( qobischeme_negative_3f( X2 ) ) )  goto L21218;
        X4 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        X6 = f17922;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X2, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = qobischeme_v_2b( X3, X5 );
        X2 = X4;
        GOBACK( L21217 );
L21218:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_2dsum_2d2d_3d2af86d_v );
DEFCSTRING( t21220, "VECTOR-SUM-2D" );

TSCP  toollib_2dmisc_l17946( b17947, c21224 )
        TSCP  b17947, c21224;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17946 [inside VECTOR-SUM-2D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21224, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21224, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17947, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17944( a17945, c21222 )
        TSCP  a17945, c21222;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17944 [inside VECTOR-SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21222, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21222, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21222, 2 );
        DISPLAY( 3 ) = a17945;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17946, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = toollib_2dmisc_vector_2dsum( X5, 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_2dsum_2d2d_3d2af86d( f17940, 
                                     m17941, n17942, i17943 )
        TSCP  f17940, m17941, n17942, i17943;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21220 );
        DISPLAY( 0 ) = f17940;
        DISPLAY( 1 ) = n17942;
        DISPLAY( 2 ) = i17943;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17944, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_vector_2dsum( X1, 
                                             m17941, 
                                             DISPLAY( 2 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_matrix_2dsum_v );
DEFCSTRING( t21226, "MATRIX-SUM" );

TSCP  toollib_2dmisc_matrix_2dsum( f17949, n17950, i17951 )
        TSCP  f17949, n17950, i17951;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21226 );
        X1 = qobischeme__2d_2dtwo( n17950, _TSCP( 4 ) );
        X2 = X1;
        X3 = i17951;
L21230:
        if  ( TRUE( qobischeme_negative_3f( X2 ) ) )  goto L21231;
        X4 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        X6 = f17949;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X2, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = qobischeme_m_2b( X3, X5 );
        X2 = X4;
        GOBACK( L21230 );
L21231:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_2dsum_2d2d_26b3d5d2_v );
DEFCSTRING( t21233, "MATRIX-SUM-2D" );

TSCP  toollib_2dmisc_l17973( b17974, c21237 )
        TSCP  b17974, c21237;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17973 [inside MATRIX-SUM-2D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21237, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21237, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17974, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17971( a17972, c21235 )
        TSCP  a17972, c21235;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17971 [inside MATRIX-SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21235, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21235, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21235, 2 );
        DISPLAY( 3 ) = a17972;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17973, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 0 ) ) );
        X4 = toollib_2dmisc_matrix_2dsum( X5, 
                                          DISPLAY( 1 ), 
                                          DISPLAY( 2 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        SDVAL = X4;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_2dsum_2d2d_26b3d5d2( f17967, 
                                     m17968, n17969, i17970 )
        TSCP  f17967, m17968, n17969, i17970;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21233 );
        DISPLAY( 0 ) = f17967;
        DISPLAY( 1 ) = n17969;
        DISPLAY( 2 ) = i17970;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17971, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_matrix_2dsum( X1, 
                                             m17968, 
                                             DISPLAY( 2 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_v_2fk_v );
DEFCSTRING( t21239, "V/K" );

TSCP  toollib_2dmisc_v_2fk( v17976, k17977 )
        TSCP  v17976, k17977;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21239 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), k17977 );
        POPSTACKTRACE( qobischeme_k_2av( X1, v17976 ) );
}

DEFTSCP( toollib_2dmisc_m_2fk_v );
DEFCSTRING( t21241, "M/K" );

TSCP  toollib_2dmisc_m_2fk( m17982, k17983 )
        TSCP  m17982, k17983;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21241 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), k17983 );
        POPSTACKTRACE( qobischeme_k_2am( X1, m17982 ) );
}

DEFTSCP( toollib_2dmisc_v_2am_2av_v );
DEFCSTRING( t21243, "V*M*V" );

TSCP  toollib_2dmisc_v_2am_2av( v17988, m17989 )
        TSCP  v17988, m17989;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21243 );
        X1 = qobischeme_m_2av( m17989, v17988 );
        POPSTACKTRACE( qobischeme_dot( v17988, X1 ) );
}

DEFTSCP( toollib_2dmisc_sum_2df_v );
DEFCSTRING( t21245, "SUM-F" );
EXTERNTSCPP( qobischeme_map_2dreduce, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dreduce_v );

TSCP  toollib_2dmisc_sum_2df( f17991, l17992 )
        TSCP  f17991, l17992;
{
        PUSHSTACKTRACE( t21245 );
        POPSTACKTRACE( qobischeme_map_2dreduce( qobischeme__2b_v, 
                                                _TSCP( 0 ), 
                                                f17991, 
                                                l17992, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_sum_2dvector_v );
DEFCSTRING( t21247, "SUM-VECTOR" );

TSCP  toollib_2dmisc_sum_2dvector( v17994 )
        TSCP  v17994;
{
        PUSHSTACKTRACE( t21247 );
        POPSTACKTRACE( qobischeme_reduce_2dvector( qobischeme__2b_v, 
                                                   v17994, _TSCP( 0 ) ) );
}

DEFTSCP( ib_2dmisc_vector_2df_f10f8b95_v );
DEFCSTRING( t21249, "SUM-VECTOR-F" );

TSCP  ib_2dmisc_vector_2df_f10f8b95( f17996, v17997 )
        TSCP  f17996, v17997;
{
        PUSHSTACKTRACE( t21249 );
        POPSTACKTRACE( obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                                      _TSCP( 0 ), 
                                                      f17996, 
                                                      v17997, 
                                                      EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_float_2dmodulo_v );
DEFCSTRING( t21251, "FLOAT-MODULO" );

TSCP  toollib_2dmisc_float_2dmodulo( x17999, m18000 )
        TSCP  x17999, m18000;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t21251 );
        X3 = qobischeme__2f_2dtwo( x17999, m18000 );
        X2 = scrt2_inexact_2d_3eexact( X3 );
        X1 = qobischeme__2a_2dtwo( m18000, X2 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( x17999, X1 ) );
}

DEFTSCP( ib_2dmisc_y_2dmatrix_28bb2f8c_v );
DEFCSTRING( t21253, "EXACT-IDENTITY-MATRIX" );
EXTERNTSCPP( obischeme_l_2dmatrix_a532a373, XAL1( TSCP ) );
EXTERNTSCP( obischeme_l_2dmatrix_a532a373_v );

TSCP  ib_2dmisc_y_2dmatrix_28bb2f8c( n18011 )
        TSCP  n18011;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21253 );
        X1 = sc_make_2dvector( n18011, 
                               CONS( c18012, EMPTYLIST ) );
        POPSTACKTRACE( obischeme_l_2dmatrix_a532a373( X1 ) );
}

DEFTSCP( toollib_2dmisc_translate_2d3d_v );
DEFCSTRING( t21255, "TRANSLATE-3D" );

TSCP  toollib_2dmisc_translate_2d3d( x18014, y18015, z18016 )
        TSCP  x18014, y18015, z18016;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21255 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( x18014, X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( _TSCP( 4 ), 
                            CONS( _TSCP( 0 ), X4 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( z18016, X5 );
        X5 = CONS( _TSCP( 4 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( y18015, X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_draw_2dcircle_v );
DEFCSTRING( t21257, "DRAW-CIRCLE" );
EXTERNTSCPP( xws6_xdrawarc, 
             XAL9( TSCP, 
                   TSCP, 
                   TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws6_xdrawarc_v );

TSCP  toollib_2dmisc_draw_2dcircle( p18018, r18019, g18020 )
        TSCP  p18018, r18019, g18020;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21257 );
        X2 = qobischeme_x( p18018 );
        X1 = qobischeme__2d_2dtwo( X2, r18019 );
        X3 = qobischeme_y( p18018 );
        X2 = qobischeme__2d_2dtwo( X3, r18019 );
        X4 = qobischeme__2a_2dtwo( _TSCP( 8 ), r18019 );
        X3 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        X5 = qobischeme__2a_2dtwo( _TSCP( 8 ), r18019 );
        X4 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        X5 = qobischeme__2a_2dtwo( _TSCP( 0 ), _TSCP( 1440 ) );
        X6 = qobischeme__2a_2dtwo( _TSCP( 256 ), _TSCP( 1440 ) );
        POPSTACKTRACE( xws6_xdrawarc( qobischeme__2adisplay_2a_v, 
                                      obischeme__2dpane_2a_b407de83_v, 
                                      g18020, 
                                      X1, 
                                      X2, X3, X4, X5, X6 ) );
}

DEFTSCP( ib_2dmisc_riangle_3f_ee3b420c_v );
DEFCSTRING( t21259, "DEGENERATE-TRIANGLE?" );
EXTERNTSCPP( qobischeme_v_3d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_3d_v );
EXTERNTSCPP( qobischeme_third, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_third_v );

TSCP  ib_2dmisc_riangle_3f_ee3b420c( t18048 )
        TSCP  t18048;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21259 );
        X2 = qobischeme_first( t18048 );
        X3 = qobischeme_second( t18048 );
        X1 = qobischeme_v_3d( X2, X3 );
        if  ( TRUE( X1 ) )  goto L21262;
        X3 = qobischeme_second( t18048 );
        X4 = qobischeme_third( t18048 );
        X2 = qobischeme_v_3d( X3, X4 );
        if  ( TRUE( X2 ) )  goto L21265;
        X3 = qobischeme_third( t18048 );
        X4 = qobischeme_first( t18048 );
        POPSTACKTRACE( qobischeme_v_3d( X3, X4 ) );
L21265:
        POPSTACKTRACE( X2 );
L21262:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc__2dpolygon_3a3a6277_v );
DEFCSTRING( t21267, "DRAW-FILLED-POLYGON" );
EXTERNTSCPP( qobischeme_triangulate, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_triangulate_v );
EXTERNTSCPP( qobischeme__3e, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3e_v );
EXTERNTSCPP( obischeme_riangle_3f_8da00d0d, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_riangle_3f_8da00d0d_v );

TSCP  toollib_2dmisc_l18082( t18083, c21283 )
        TSCP  t18083, c21283;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18082 [inside DRAW-FILLED-POLYGON]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21283, 0 );
        X3 = qobischeme_first( t18083 );
        X4 = qobischeme_second( t18083 );
        X5 = qobischeme_third( t18083 );
        X2 = obischeme_riangle_3f_8da00d0d( DISPLAY( 0 ), 
                                            X3, X4, X5 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( qobischeme_matrix_2dset_21, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dset_21_v );
EXTERNTSCPP( qobischeme_pbm_2dbitmap, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_pbm_2dbitmap_v );

TSCP  ib_2dmisc__2dpolygon_3a3a6277( p18058, p18059 )
        TSCP  p18058, p18059;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21267 );
        X2 = qobischeme_triangulate( p18059 );
        X1 = qobischeme_remove_2dif( ib_2dmisc_riangle_3f_ee3b420c_v, 
                                     X2 );
        X7 = qobischeme_sort( p18059, 
                              qobischeme__3e_v, qobischeme_x_v );
        X6 = qobischeme_first( X7 );
        X5 = qobischeme_x( X6 );
        X4 = toollib_2dmisc_exact_2dround( X5 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = qobischeme_sort( p18059, 
                              qobischeme__3e_v, qobischeme_y_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_y( X7 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( toollib_2dmisc_exact_2dround( X6 ), 
                                  X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X8 = qobischeme_sort( p18059, 
                              qobischeme__3c_v, qobischeme_x_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_x( X7 );
        X5 = toollib_2dmisc_exact_2dround( X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = qobischeme_sort( p18059, 
                              qobischeme__3c_v, qobischeme_y_v );
        X8 = qobischeme_first( X9 );
        X7 = qobischeme_y( X8 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( toollib_2dmisc_exact_2dround( X7 ), 
                                  X6 ) );
        X3 = scrt4_list_2d_3evector( X4 );
        X4 = qobischeme_y( X3 );
L21271:
        X5 = qobischeme_y( X2 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X4, X5 ) ) )  goto L21272;
        X5 = qobischeme_x( X3 );
L21276:
        X6 = qobischeme_x( X2 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X5, X6 ) ) )  goto L21277;
        X6 = CONS( X4, EMPTYLIST );
        DISPLAY( 0 ) = scrt4_vector( CONS( X5, X6 ) );
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18082, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( FALSE( qobischeme_some( X6, X1, EMPTYLIST ) ) )  goto L21281;
        X6 = qobischeme_pbm_2dbitmap( p18058 );
        qobischeme_matrix_2dset_21( X6, X4, X5, TRUEVALUE );
L21281:
        X5 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L21276 );
L21277:
        X4 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L21271 );
L21272:
        SDVAL = p18058;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_cumference_8da04d9e_v );
DEFCSTRING( t21285, "ELLIPSE-CIRCUMFERENCE" );

TSCP  ib_2dmisc_cumference_8da04d9e( e18091 )
        TSCP  e18091;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21285 );
        X2 = qobischeme_ellipse_2da( e18091 );
        X3 = qobischeme_ellipse_2db( e18091 );
        X1 = qobischeme__2b_2dtwo( X2, X3 );
        X3 = qobischeme_ellipse_2da( e18091 );
        X4 = qobischeme_ellipse_2db( e18091 );
        X2 = qobischeme__2d_2dtwo( X3, X4 );
        X5 = qobischeme__2f_2dtwo( X2, X1 );
        X4 = qobischeme_sqr( X5 );
        X3 = qobischeme__2a_2dtwo( c18119, X4 );
        X9 = qobischeme__2d_2dtwo( _TSCP( 16 ), X3 );
        X8 = qobischeme_sqrt( X9 );
        X7 = qobischeme__2b_2dtwo( _TSCP( 40 ), X8 );
        X6 = qobischeme__2f_2dtwo( X3, X7 );
        X5 = qobischeme__2b_2dtwo( _TSCP( 4 ), X6 );
        X4 = qobischeme__2a_2dtwo( X1, X5 );
        POPSTACKTRACE( qobischeme__2a_2dtwo( qobischeme_pi_v, X4 ) );
}

DEFTSCP( ib_2dmisc_ellipse_3f_13b723b2_v );
DEFCSTRING( t21290, "POINT-INSIDE-OR-ON-ELLIPSE?" );

TSCP  ib_2dmisc_ellipse_3f_13b723b2( p18130, e18131 )
        TSCP  p18130, e18131;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21290 );
        X1 = qobischeme_ellipse_2dx0( e18131 );
        X2 = qobischeme_ellipse_2dy0( e18131 );
        X3 = qobischeme_ellipse_2da( e18131 );
        X4 = qobischeme_ellipse_2db( e18131 );
        X5 = qobischeme_ellipse_2dt0( e18131 );
        X8 = qobischeme__2d_2dtwo( _TSCP( 0 ), X5 );
        X7 = obischeme_atrix_2d2d_f732ed37( X8 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = scrt1_cons_2a( X1, CONS( X2, X11 ) );
        X9 = scrt4_list_2d_3evector( X10 );
        X8 = qobischeme_v_2d( p18130, X9 );
        X6 = qobischeme_m_2av( X7, X8 );
        X10 = qobischeme_x( X6 );
        X9 = qobischeme__2f_2dtwo( X10, X3 );
        X8 = qobischeme_sqr( X9 );
        X11 = qobischeme_y( X6 );
        X10 = qobischeme__2f_2dtwo( X11, X4 );
        X9 = qobischeme_sqr( X10 );
        X7 = qobischeme__2b_2dtwo( X8, X9 );
        POPSTACKTRACE( qobischeme__3c_3d_2dtwo( X7, c18012 ) );
}

DEFTSCP( ib_2dmisc_ding_2dbox_bf69ab8f_v );
DEFCSTRING( t21298, "ELLIPSE-BOUNDING-BOX" );

TSCP  ib_2dmisc_ding_2dbox_bf69ab8f( e18160 )
        TSCP  e18160;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21298 );
        X1 = qobischeme_ellipse_2dx0( e18160 );
        X2 = qobischeme_ellipse_2dy0( e18160 );
        X3 = qobischeme_ellipse_2da( e18160 );
        X4 = qobischeme_ellipse_2db( e18160 );
        X5 = qobischeme_ellipse_2dt0( e18160 );
        X9 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = scrt1_cons_2a( X3, CONS( X4, X9 ) );
        X7 = scrt4_list_2d_3evector( X8 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_cons_2a( X3, 
                            CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X4 ), 
                                  X10 ) );
        X8 = CONS( scrt4_list_2d_3evector( X9 ), X8 );
        X10 = qobischeme__2d_2dtwo( _TSCP( 0 ), X3 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_cons_2a( X10, 
                            CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X4 ), 
                                  X11 ) );
        X8 = CONS( scrt4_list_2d_3evector( X9 ), X8 );
        X10 = qobischeme__2d_2dtwo( _TSCP( 0 ), X3 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = scrt1_cons_2a( X10, CONS( X4, X11 ) );
        X6 = scrt1_cons_2a( X7, 
                            CONS( scrt4_list_2d_3evector( X9 ), 
                                  X8 ) );
        X7 = X6;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L21307:
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L21308;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L21311;
        scrt1__24__car_2derror( X7 );
L21311:
        X12 = PAIR_CAR( X7 );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = scrt1_cons_2a( X1, CONS( X2, X15 ) );
        X13 = scrt4_list_2d_3evector( X14 );
        X15 = obischeme_atrix_2d2d_f732ed37( X5 );
        X14 = qobischeme_m_2av( X15, X12 );
        X11 = qobischeme_v_2b( X13, X14 );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L21315;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L21307 );
L21315:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L21320;
        scdebug_error( c13513, 
                       c13514, CONS( X9, EMPTYLIST ) );
L21320:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L21307 );
L21308:
        POPSTACKTRACE( X8 );
}

DEFTSCP( ib_2dmisc__2dellipse_b19dc50f_v );
DEFCSTRING( t21322, "DRAW-FILLED-ELLIPSE" );

TSCP  ib_2dmisc__2dellipse_b19dc50f( p18228, e18229 )
        TSCP  p18228, e18229;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21322 );
        X1 = ib_2dmisc_ding_2dbox_bf69ab8f( e18229 );
        X7 = qobischeme_sort( X1, qobischeme__3c_v, qobischeme_x_v );
        X6 = qobischeme_first( X7 );
        X5 = qobischeme_x( X6 );
        X4 = toollib_2dmisc_exact_2dround( X5 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = qobischeme_sort( X1, qobischeme__3c_v, qobischeme_y_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_y( X7 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( toollib_2dmisc_exact_2dround( X6 ), 
                                  X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X8 = qobischeme_sort( X1, qobischeme__3e_v, qobischeme_x_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_x( X7 );
        X5 = toollib_2dmisc_exact_2dround( X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = qobischeme_sort( X1, qobischeme__3e_v, qobischeme_y_v );
        X8 = qobischeme_first( X9 );
        X7 = qobischeme_y( X8 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( toollib_2dmisc_exact_2dround( X7 ), 
                                  X6 ) );
        X3 = scrt4_list_2d_3evector( X4 );
        X4 = qobischeme_y( X2 );
L21328:
        X5 = qobischeme_y( X3 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X4, X5 ) ) )  goto L21329;
        X5 = qobischeme_x( X2 );
L21333:
        X6 = qobischeme_x( X3 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X5, X6 ) ) )  goto L21334;
        X7 = CONS( X4, EMPTYLIST );
        X6 = scrt4_vector( CONS( X5, X7 ) );
        if  ( FALSE( ib_2dmisc_ellipse_3f_13b723b2( X6, e18229 ) )
            )  goto L21337;
        X6 = qobischeme_pbm_2dbitmap( p18228 );
        qobischeme_matrix_2dset_21( X6, X4, X5, TRUEVALUE );
L21337:
        X5 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L21333 );
L21334:
        X4 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L21328 );
L21329:
        POPSTACKTRACE( p18228 );
}

DEFTSCP( toollib_2dmisc_precision_v );
DEFCSTRING( t21339, "PRECISION" );
EXTERNTSCPP( qobischeme_intersection, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_intersection_v );

TSCP  toollib_2dmisc_precision( r18261, r18262 )
        TSCP  r18261, r18262;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t21339 );
        X1 = scrt1_length( r18262 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L21341;
        X2 = qobischeme_intersection( r18261, r18262 );
        X1 = scrt1_length( X2 );
        X2 = scrt1_length( r18262 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L21341:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_recall_v );
DEFCSTRING( t21343, "RECALL" );

TSCP  toollib_2dmisc_recall( r18270, r18271 )
        TSCP  r18270, r18271;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t21343 );
        X1 = scrt1_length( r18270 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L21345;
        X2 = qobischeme_intersection( r18270, r18271 );
        X1 = scrt1_length( X2 );
        X2 = scrt1_length( r18270 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L21345:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_accuracy_v );
DEFCSTRING( t21347, "ACCURACY" );
EXTERNTSCPP( qobischeme_remove_2dif_2dnot, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_2dnot_v );

TSCP  toollib_2dmisc_l18307( a18308, c21351 )
        TSCP  a18308, c21351;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18307 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21351, 0 );
        X4 = qobischeme_second( a18308 );
        X3 = qobischeme__3e_3d_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21354;
        if  ( FALSE( qobischeme_third( a18308 ) ) )  goto L21356;
        X2 = FALSEVALUE;
        goto L21355;
L21356:
        X2 = TRUEVALUE;
        goto L21355;
L21354:
        X2 = X3;
L21355:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_f18283(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( "FP [inside ACCURACY]" );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18307, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( X1, 
                                                     DISPLAY( 0 ) ) );
}

TSCP  toollib_2dmisc_l18317( a18318, c21359 )
        TSCP  a18318, c21359;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18317 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21359, 0 );
        X4 = qobischeme_second( a18318 );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21362;
        X2 = qobischeme_third( a18318 );
        goto L21363;
L21362:
        X2 = X3;
L21363:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_f18282(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( "FN [inside ACCURACY]" );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18317, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( X1, 
                                                     DISPLAY( 0 ) ) );
}

TSCP  toollib_2dmisc_l18287( a18288, c21365 )
        TSCP  a18288, c21365;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18287 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21365, 0 );
        X4 = qobischeme_second( a18288 );
        X3 = qobischeme__3e_3d_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21368;
        X2 = qobischeme_third( a18288 );
        goto L21369;
L21368:
        X2 = X3;
L21369:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l18297( a18298, c21371 )
        TSCP  a18298, c21371;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18297 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21371, 0 );
        X4 = qobischeme_second( a18298 );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21374;
        if  ( FALSE( qobischeme_third( a18298 ) ) )  goto L21376;
        X2 = FALSEVALUE;
        goto L21375;
L21376:
        X2 = TRUEVALUE;
        goto L21375;
L21374:
        X2 = X3;
L21375:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_accuracy( a18279, t18280 )
        TSCP  a18279, t18280;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21347 );
        DISPLAY( 0 ) = a18279;
        DISPLAY( 1 ) = t18280;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18287, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        X3 = qobischeme_remove_2dif_2dnot( X4, DISPLAY( 0 ) );
        X2 = scrt1_length( X3 );
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18297, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        X4 = qobischeme_remove_2dif_2dnot( X5, DISPLAY( 0 ) );
        X3 = scrt1_length( X4 );
        X1 = qobischeme__2b_2dtwo( X2, X3 );
        X2 = scrt1_length( DISPLAY( 0 ) );
        SDVAL = qobischeme__2f_2dtwo( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_prf_v );
DEFCSTRING( t21378, "PRF" );
EXTERNTSCPP( toollib_2dmisc_pr, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_pr_v );

TSCP  toollib_2dmisc_prf( f18333, t18334 )
        TSCP  f18333, t18334;
{
        TSCP  X26, 
              X25, 
              X24, 
              X23, 
              X22, 
              X21, 
              X20, 
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

        PUSHSTACKTRACE( t21378 );
        X3 = f18333;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L21381:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21382;
        X2 = X4;
        goto L21423;
L21382:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L21385;
        scrt1__24__car_2derror( X3 );
L21385:
        X8 = PAIR_CAR( X3 );
        X10 = X8;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L21389:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L21390;
        X9 = X11;
        goto L21415;
L21390:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L21393;
        scrt1__24__car_2derror( X10 );
L21393:
        X15 = PAIR_CAR( X10 );
        X17 = qobischeme_first( X15 );
        X21 = qobischeme_second( X15 );
        X20 = toollib_2dmisc_pr( X21, t18334 );
        X21 = X20;
        X22 = EMPTYLIST;
        X23 = EMPTYLIST;
L21398:
        if  ( NEQ( _S2CUINT( X21 ), _S2CUINT( EMPTYLIST ) ) )  goto L21399;
        X19 = X22;
        goto L21406;
L21399:
        if  ( EQ( TSCPTAG( X21 ), PAIRTAG ) )  goto L21402;
        scrt1__24__car_2derror( X21 );
L21402:
        X26 = PAIR_CAR( X21 );
        X25 = toollib_2dmisc_percentage( X26 );
        X24 = sc_cons( X25, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X22 ), _S2CUINT( EMPTYLIST ) ) )  goto L21405;
        X25 = PAIR_CDR( X21 );
        X23 = X24;
        X22 = X24;
        X21 = X25;
        GOBACK( L21398 );
L21405:
        X25 = PAIR_CDR( X21 );
        if  ( EQ( TSCPTAG( X23 ), PAIRTAG ) )  goto L21410;
        scdebug_error( c13513, 
                       c13514, CONS( X23, EMPTYLIST ) );
L21410:
        X23 = SETGEN( PAIR_CDR( X23 ), X24 );
        X21 = X25;
        GOBACK( L21398 );
L21406:
        X24 = qobischeme_second( X15 );
        X23 = toollib_2dmisc_pr( X24, t18334 );
        X22 = sc_apply_2dtwo( qobischeme__2a_v, X23 );
        X21 = toollib_2dmisc_percentage( X22 );
        X20 = sc_cons( X21, EMPTYLIST );
        X18 = sc_cons( X19, X20 );
        X16 = sc_cons( X17, X18 );
        X14 = X16;
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L21414;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L21389 );
L21414:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L21419;
        scdebug_error( c13513, 
                       c13514, CONS( X12, EMPTYLIST ) );
L21419:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L21389 );
L21415:
        X7 = toollib_2dmisc_maximump( X9, qobischeme_last_v );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L21422;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L21381 );
L21422:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L21427;
        scdebug_error( c13513, 
                       c13514, CONS( X5, EMPTYLIST ) );
L21427:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L21381 );
L21423:
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L21431:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21432;
        X1 = X4;
        goto L21439;
L21432:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L21435;
        scrt1__24__car_2derror( X3 );
L21435:
        X8 = PAIR_CAR( X3 );
        X7 = qobischeme_second( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L21438;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L21431 );
L21438:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L21443;
        scdebug_error( c13513, 
                       c13514, CONS( X5, EMPTYLIST ) );
L21443:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L21431 );
L21439:
        X6 = X1;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L21448:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L21449;
        X5 = X7;
        goto L21456;
L21449:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L21452;
        scrt1__24__car_2derror( X6 );
L21452:
        X11 = PAIR_CAR( X6 );
        X10 = qobischeme_first( X11 );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L21455;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L21448 );
L21455:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L21460;
        scdebug_error( c13513, 
                       c13514, CONS( X8, EMPTYLIST ) );
L21460:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L21448 );
L21456:
        X4 = qobischeme_reduce( qobischeme__2b_v, X5, _TSCP( 0 ) );
        X5 = scrt1_length( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X8 = X1;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L21464:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L21465;
        X7 = X9;
        goto L21472;
L21465:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L21468;
        scrt1__24__car_2derror( X8 );
L21468:
        X13 = PAIR_CAR( X8 );
        X12 = qobischeme_second( X13 );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L21471;
        X12 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X12;
        GOBACK( L21464 );
L21471:
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L21476;
        scdebug_error( c13513, 
                       c13514, CONS( X10, EMPTYLIST ) );
L21476:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X12;
        GOBACK( L21464 );
L21472:
        X6 = qobischeme_reduce( qobischeme__2b_v, X7, _TSCP( 0 ) );
        X7 = scrt1_length( X1 );
        X5 = qobischeme__2f_2dtwo( X6, X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        X2 = sc_cons( X3, X4 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_accuracy_2dn_v );
DEFCSTRING( t21479, "ACCURACY-N" );

TSCP  toollib_2dmisc_l18608( v18609, c21481 )
        TSCP  v18609, c21481;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18608 [inside ACCURACY-N]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21481, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21481, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21481, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21481, 3 );
        X9 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2f_2dtwo( X9, DISPLAY( 3 ) );
        X7 = qobischeme__2a_2dtwo( v18609, X8 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X7 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X10 = qobischeme__2f_2dtwo( X11, DISPLAY( 3 ) );
        X9 = qobischeme__2a_2dtwo( v18609, X10 );
        X8 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X9 );
        X5 = scrt1_cons_2a( X6, 
                            CONS( toollib_2dmisc_accuracy( DISPLAY( 0 ), 
                                                           X8 ), 
                                  X7 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 2 ) = X3;
        DISPLAY( 1 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_accuracy_2dn( a18604, 
                                   a18605, b18606, n18607 )
        TSCP  a18604, a18605, b18606, n18607;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21479 );
        DISPLAY( 0 ) = a18604;
        DISPLAY( 1 ) = a18605;
        DISPLAY( 2 ) = b18606;
        DISPLAY( 3 ) = n18607;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18608, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        X2 = qobischeme__2b_2dtwo( _TSCP( 4 ), DISPLAY( 3 ) );
        SDVAL = qobischeme_map_2dn( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_accuracy_2da_v );
DEFCSTRING( t21483, "ACCURACY-A" );

TSCP  toollib_2dmisc_accuracy_2da( a18638, n18639 )
        TSCP  a18638, n18639;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21483 );
        X2 = a18638;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L21487:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L21488;
        X1 = X3;
        goto L21495;
L21488:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L21491;
        scrt1__24__car_2derror( X2 );
L21491:
        X7 = PAIR_CAR( X2 );
        X6 = qobischeme_second( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21494;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L21487 );
L21494:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L21499;
        scdebug_error( c13513, 
                       c13514, CONS( X4, EMPTYLIST ) );
L21499:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L21487 );
L21495:
        X2 = toollib_2dmisc_minimum( X1 );
        X3 = toollib_2dmisc_maximum( X1 );
        POPSTACKTRACE( toollib_2dmisc_accuracy_2dn( a18638, 
                                                    X2, X3, n18639 ) );
}

DEFTSCP( toollib_2dmisc_prf_2dn_v );
DEFCSTRING( t21502, "PRF-N" );

TSCP  toollib_2dmisc_l18689( v18690, c21504 )
        TSCP  v18690, c21504;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18689 [inside PRF-N]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21504, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21504, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21504, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21504, 3 );
        X9 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2f_2dtwo( X9, DISPLAY( 3 ) );
        X7 = qobischeme__2a_2dtwo( v18690, X8 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X7 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X10 = qobischeme__2f_2dtwo( X11, DISPLAY( 3 ) );
        X9 = qobischeme__2a_2dtwo( v18690, X10 );
        X8 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X9 );
        X5 = scrt1_cons_2a( X6, 
                            CONS( toollib_2dmisc_prf( DISPLAY( 0 ), 
                                                      X8 ), 
                                  X7 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 2 ) = X3;
        DISPLAY( 1 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_prf_2dn( a18685, a18686, b18687, n18688 )
        TSCP  a18685, a18686, b18687, n18688;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21502 );
        DISPLAY( 0 ) = a18685;
        DISPLAY( 1 ) = a18686;
        DISPLAY( 2 ) = b18687;
        DISPLAY( 3 ) = n18688;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18689, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ) ) );
        X2 = qobischeme__2b_2dtwo( _TSCP( 4 ), DISPLAY( 3 ) );
        SDVAL = qobischeme_map_2dn( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_eshold_2dp_45a07561_v );
DEFCSTRING( t21506, "PRECISION-RECALL-THRESHOLD-P" );

TSCP  toollib_2dmisc_l18726( a18727, c21509 )
        TSCP  a18727, c21509;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18726 [inside PRECISION-RECALL-THRE\
SHOLD-P]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21509, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21509, 1 );
        X5 = DISPLAY( 1 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( a18727, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_eshold_2dp_45a07561( t18719, 
                                     a18720, p18721, g18722 )
        TSCP  t18719, a18720, p18721, g18722;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21506 );
        DISPLAY( 0 ) = t18719;
        DISPLAY( 1 ) = p18721;
        X1 = _TSCP( 0 );
        X2 = _TSCP( 0 );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18726, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = qobischeme_remove_2dif( X4, a18720 );
        SETGEN( PAIR_CAR( X1 ), X3 );
        X3 = qobischeme_remove_2dif_2dnot( g18722, a18720 );
        SETGEN( PAIR_CAR( X2 ), X3 );
        X4 = toollib_2dmisc_precision( PAIR_CAR( X2 ), 
                                       PAIR_CAR( X1 ) );
        X6 = toollib_2dmisc_recall( PAIR_CAR( X2 ), 
                                    PAIR_CAR( X1 ) );
        X5 = sc_cons( X6, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        SDVAL = X3;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_pr_v );
DEFCSTRING( t21512, "PR" );

TSCP  toollib_2dmisc_pr( a18734, t18735 )
        TSCP  a18734, t18735;
{
        PUSHSTACKTRACE( t21512 );
        POPSTACKTRACE( ib_2dmisc_eshold_2dp_45a07561( t18735, 
                                                      a18734, 
                                                      qobischeme_second_v, 
                                                      qobischeme_third_v ) );
}

DEFTSCP( toollib_2dmisc_graph_2droc_v );
DEFCSTRING( t21514, "GRAPH-ROC" );

TSCP  toollib_2dmisc_graph_2droc( a18737, s18738 )
        TSCP  a18737, s18738;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21514 );
        X1 = CONS( s18738, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18739, X1 ) );
        X1 = a18737;
L21517:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21518;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21522;
        scrt1__24__car_2derror( X1 );
L21522:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_first( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18763, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21517 );
L21518:
        scrt6_format( TRUEVALUE, CONS( c18764, EMPTYLIST ) );
        X1 = CONS( s18738, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18765, X1 ) );
        X1 = a18737;
L21527:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21528;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21532;
        scrt1__24__car_2derror( X1 );
L21532:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_second( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18763, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21527 );
L21528:
        scrt6_format( TRUEVALUE, CONS( c18764, EMPTYLIST ) );
        X1 = CONS( s18738, EMPTYLIST );
        POPSTACKTRACE( scrt6_format( TRUEVALUE, 
                                     CONS( c18789, X1 ) ) );
}

DEFTSCP( ib_2dmisc_olor_2droc_28bc10e2_v );
DEFCSTRING( t21536, "GRAPH-COLOR-ROC" );

TSCP  ib_2dmisc_olor_2droc_28bc10e2( a18791, s18792 )
        TSCP  a18791, s18792;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21536 );
        X1 = CONS( s18792, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18739, X1 ) );
        X1 = a18791;
L21539:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21540;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21544;
        scrt1__24__car_2derror( X1 );
L21544:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_first( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18763, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21539 );
L21540:
        scrt6_format( TRUEVALUE, CONS( c18764, EMPTYLIST ) );
        X1 = CONS( s18792, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18765, X1 ) );
        X1 = a18791;
L21549:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21550;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21554;
        scrt1__24__car_2derror( X1 );
L21554:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_second( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18763, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21549 );
L21550:
        scrt6_format( TRUEVALUE, CONS( c18764, EMPTYLIST ) );
        X1 = CONS( s18792, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18839, X1 ) );
        X1 = a18791;
L21559:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21560;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21564;
        scrt1__24__car_2derror( X1 );
L21564:
        X2 = PAIR_CAR( X1 );
        X3 = CONS( qobischeme_first( X2 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18763, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21559 );
L21560:
        scrt6_format( TRUEVALUE, CONS( c18764, EMPTYLIST ) );
        X1 = CONS( s18792, EMPTYLIST );
        X1 = CONS( s18792, X1 );
        X1 = CONS( s18792, X1 );
        POPSTACKTRACE( scrt6_format( TRUEVALUE, 
                                     CONS( c18863, X1 ) ) );
}

DEFTSCP( ib_2dmisc_compressed_dc9714fc_v );
DEFCSTRING( t21568, "WITH-DECOMPRESSED" );
EXTERNTSCPP( qobischeme_strip_2ddirectory, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_strip_2ddirectory_v );

TSCP  toollib_2dmisc_l18867( t18868, c21570 )
        TSCP  t18868, c21570;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18867 [inside WITH-DECOMPRESSED]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21570, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21570, 1 );
        X7 = CONS( c18869, EMPTYLIST );
        X6 = scrt3_string_2dappend( CONS( DISPLAY( 0 ), X7 ) );
        if  ( FALSE( qobischeme_file_2dexists_3f( X6 ) ) )  goto L21572;
        X7 = CONS( t18868, EMPTYLIST );
        X8 = CONS( c18869, EMPTYLIST );
        X7 = CONS( scrt3_string_2dappend( CONS( DISPLAY( 0 ), X8 ) ), 
                   X7 );
        X6 = scrt6_format( FALSEVALUE, CONS( c18874, X7 ) );
        scrt4_system( X6 );
        X5 = t18868;
        goto L21576;
L21572:
        X7 = CONS( c18870, EMPTYLIST );
        X6 = scrt3_string_2dappend( CONS( DISPLAY( 0 ), X7 ) );
        if  ( FALSE( qobischeme_file_2dexists_3f( X6 ) ) )  goto L21575;
        X7 = CONS( t18868, EMPTYLIST );
        X8 = CONS( c18870, EMPTYLIST );
        X7 = CONS( scrt3_string_2dappend( CONS( DISPLAY( 0 ), X8 ) ), 
                   X7 );
        X6 = scrt6_format( FALSEVALUE, CONS( c18872, X7 ) );
        scrt4_system( X6 );
        X5 = t18868;
        goto L21576;
L21575:
        X5 = DISPLAY( 0 );
L21576:
        X4 = DISPLAY( 1 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_compressed_dc9714fc( p18865, f18866 )
        TSCP  p18865, f18866;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21568 );
        DISPLAY( 0 ) = p18865;
        DISPLAY( 1 ) = f18866;
        X1 = qobischeme_strip_2ddirectory( DISPLAY( 0 ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18867, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_om_2dcfile_df02fb06_v );
DEFCSTRING( t21578, "READ-OBJECT-FROM-CFILE" );

TSCP  ib_2dmisc_om_2dcfile_df02fb06( p18876 )
        TSCP  p18876;
{
        PUSHSTACKTRACE( t21578 );
        POPSTACKTRACE( ib_2dmisc_compressed_dc9714fc( p18876, 
                                                      obischeme_rom_2dfile_92544bb1_v ) );
}

void xevent__init();
void xws8__init();
void xws6__init();
void xfontstruct__init();
void xcolor__init();
void xgcvalues__init();
void xws5__init();
void idealib_2dstuff__init();
void scrt3__init();
void idealib_2dpregexp__init();
void scrt4__init();
void scrt1__init();
void scdebug__init();
void qobischeme__init();
void scrt2__init();
void scrt6__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        xevent__init();
        xws8__init();
        xws6__init();
        xfontstruct__init();
        xcolor__init();
        xgcvalues__init();
        xws5__init();
        idealib_2dstuff__init();
        scrt3__init();
        idealib_2dpregexp__init();
        scrt4__init();
        scrt1__init();
        scdebug__init();
        qobischeme__init();
        scrt2__init();
        scrt6__init();
        MAXDISPLAY( 12 );
}

void  toollib_2dmisc__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dmisc SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t19052, 
                       ADR( ib_2dmisc_sc_2d1_2d0_e920e698_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d1_2d0_e920e698, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19054, 
                       ADR( ib_2dmisc_sc_2d3_2d0_93e0b5f8_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d3_2d0_93e0b5f8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19056, 
                       ADR( ib_2dmisc_sc_2d5_2d0_1ca04058_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d5_2d0_1ca04058, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19058, 
                       ADR( ib_2dmisc_sc_2d7_2d0_66601338_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d7_2d0_66601338, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19060, 
                       ADR( ib_2dmisc_ging_3f_2a_f4a9801b_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t19061, 
                       ADR( toollib_2dmisc__2aquiet_3f_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t19062, 
                       ADR( toollib_2dmisc_implies_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_implies, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19069, 
                       ADR( toollib_2dmisc_dtrace_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_dtrace, EMPTYLIST ) );
        INITIALIZEVAR( t19071, 
                       ADR( toollib_2dmisc_fixpointp_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_fixpointp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19076, 
                       ADR( toollib_2dmisc_exact_2dround_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_exact_2dround, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19078, 
                       ADR( toollib_2dmisc_exact_2dfloor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_exact_2dfloor, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19080, 
                       ADR( ib_2dmisc__2dceiling_3845082b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dceiling_3845082b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19082, 
                       ADR( toollib_2dmisc_sigmoid_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_sigmoid, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19084, 
                       ADR( ib_2dmisc_ct_2dangle_ed09f1a1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_ct_2dangle_ed09f1a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19091, 
                       ADR( toollib_2dmisc_percentage_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_percentage, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19093, 
                       ADR( toollib_2dmisc_last_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_last_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19103, 
                       ADR( toollib_2dmisc__2asettings_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t19104, 
                       ADR( ib_2dmisc_ings_21_2a_77c5ebb_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ings_21_2a_77c5ebb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19106, 
                       ADR( ib_2dmisc_ettings_2a_9d4d158e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ettings_2a_9d4d158e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19108, 
                       ADR( ib_2dmisc_s_2dlookup_299fc00b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_s_2dlookup_299fc00b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19123, 
                       ADR( ib_2dmisc_s_2dupdate_41a64476_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_s_2dupdate_41a64476, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19173, 
                       ADR( ib_2dmisc_s_2dremove_b1036c3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_s_2dremove_b1036c3e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19220, 
                       ADR( ib_2dmisc_dlookup_2a_5f54d161_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      ib_2dmisc_dlookup_2a_5f54d161, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19222, 
                       ADR( ib_2dmisc_date_21_2a_fe258695_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_date_21_2a_fe258695, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19224, 
                       ADR( ib_2dmisc_dremove_2a_86ffda08_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      ib_2dmisc_dremove_2a_86ffda08, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19226, 
                       ADR( toollib_2dmisc_list_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_list_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19233, 
                       ADR( ib_2dmisc_covariance_14dd252a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_covariance_14dd252a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19252, 
                       ADR( ib_2dmisc_2dvariance_82eaae76_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dvariance_82eaae76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19271, 
                       ADR( ib_2dmisc_2dskewness_4559bc2b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dskewness_4559bc2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19290, 
                       ADR( ib_2dmisc_2dkurtosis_94af7ba9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dkurtosis_94af7ba9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19309, 
                       ADR( ib_2dmisc_orrelation_e415d63c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orrelation_e415d63c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19333, 
                       ADR( toollib_2dmisc_vector_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_vector_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19338, 
                       ADR( ib_2dmisc_2dvariance_3a32caa5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dvariance_3a32caa5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19346, 
                       ADR( ib_2dmisc_2dskewness_fd81d8f8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dskewness_fd81d8f8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19354, 
                       ADR( ib_2dmisc_2dkurtosis_2c771f7a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dkurtosis_2c771f7a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19362, 
                       ADR( ib_2dmisc_orrelation_e243a9a8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orrelation_e243a9a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19367, 
                       ADR( ib_2dmisc_bimodality_dba868a3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_bimodality_dba868a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19373, 
                       ADR( toollib_2dmisc_vectors_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_vectors_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19378, 
                       ADR( ib_2dmisc_2dvariance_54d102bf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2dvariance_54d102bf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19385, 
                       ADR( ib_2dmisc_2ddistance_971fca4c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2ddistance_971fca4c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19393, 
                       ADR( toollib_2dmisc_frequencies_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_frequencies, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19404, 
                       ADR( ib_2dmisc_sublist_3f_66fdafb3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_sublist_3f_66fdafb3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19424, 
                       ADR( toollib_2dmisc_p_2dleaf_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_p_2dleaf_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19426, 
                       ADR( toollib_2dmisc_ip_2dleaf_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ip_2dleaf_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19432, 
                       ADR( toollib_2dmisc_index_2dleaves_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_index_2dleaves, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19450, 
                       ADR( ib_2dmisc_d_3eleaves_f440aa79_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_3eleaves_f440aa79, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19468, 
                       ADR( toollib_2dmisc_make_2dzipper_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_make_2dzipper, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19488, 
                       ADR( toollib_2dmisc_zipper_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_zipper_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19501, 
                       ADR( ib_2dmisc__2dtree_21_edaf9ba0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dtree_21_edaf9ba0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19505, 
                       ADR( toollib_2dmisc_zipper_2dtree_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_zipper_2dtree, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19516, 
                       ADR( ib_2dmisc__2dtree_21_d6235974_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dtree_21_d6235974, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19527, 
                       ADR( ib_2dmisc_dthread_21_884870d1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dthread_21_884870d1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19531, 
                       ADR( ib_2dmisc_r_2dthread_bdbb94d4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_r_2dthread_bdbb94d4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19542, 
                       ADR( ib_2dmisc_dthread_21_1876e8da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dthread_21_1876e8da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19553, 
                       ADR( ib_2dmisc_initialize_b0401efa_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_initialize_b0401efa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19555, 
                       ADR( ib_2dmisc__3adescend_aaeaab15_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__3adescend_aaeaab15, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19564, 
                       ADR( ib_2dmisc_r_3aascend_83fa263_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_r_3aascend_83fa263, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19593, 
                       ADR( ib_2dmisc_cend_2dseq_c2837d94_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_cend_2dseq_c2837d94, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19603, 
                       ADR( ib_2dmisc_ascend_2dn_ba70bf1b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ascend_2dn_ba70bf1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19611, 
                       ADR( ib_2dmisc_dascend_3f_f58e1843_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dascend_3f_f58e1843, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19613, 
                       ADR( ib_2dmisc_descend_3f_ec35a266_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_descend_3f_ec35a266, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19615, 
                       ADR( ib_2dmisc_nd_2duntil_229b5165_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_nd_2duntil_229b5165, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19621, 
                       ADR( ib_2dmisc_d_2dheight_6e8bfcbb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_d_2dheight_6e8bfcbb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19623, 
                       ADR( toollib_2dmisc_my_2dfloor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dfloor, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19632, 
                       ADR( toollib_2dmisc_my_2dceiling_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dceiling, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19641, 
                       ADR( toollib_2dmisc_my_2dround_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dround, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19650, 
                       ADR( toollib_2dmisc_my_2dmax_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dmax, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19656, 
                       ADR( toollib_2dmisc_my_2dmin_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dmin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19658, 
                       ADR( toollib_2dmisc_my_2dabs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dabs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19662, 
                       ADR( ib_2dmisc_2dchks_2d2_dfd44528_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2dchks_2d2_dfd44528, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19705, 
                       ADR( ib_2dmisc_2dchks_2d2_66f2de59_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2dchks_2d2_66f2de59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19707, 
                       ADR( toollib_2dmisc_my_2dadd_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dadd_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19716, 
                       ADR( toollib_2dmisc_recip_2dexp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_recip_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19721, 
                       ADR( toollib_2dmisc_window_2did_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_window_2did, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19725, 
                       ADR( ib_2dmisc_cording_21_5bb4940f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_cording_21_5bb4940f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19727, 
                       ADR( ib_2dmisc_ocation_21_cd203ece_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_ocation_21_cd203ece, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19729, 
                       ADR( ib_2dmisc_cording_21_1421a7f0_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_cording_21_1421a7f0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19731, 
                       ADR( ib_2dmisc_ation_2d3d_b4bc348b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ation_2d3d_b4bc348b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19733, 
                       ADR( toollib_2dmisc_scaling_2d3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_scaling_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19735, 
                       ADR( ib_2dmisc_n_2d3d_2dx_13f7eadc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dx_13f7eadc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19737, 
                       ADR( ib_2dmisc_n_2d3d_2dy_64f0da4a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dy_64f0da4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19739, 
                       ADR( ib_2dmisc_n_2d3d_2dz_fdf98bf0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dz_fdf98bf0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19741, 
                       ADR( toollib_2dmisc_identity_2d3d_v ), 
                       ib_2dmisc_ation_2d3d_b4bc348b( _TSCP( 0 ), 
                                                      _TSCP( 0 ), 
                                                      _TSCP( 0 ) ) );
        INITIALIZEVAR( t19742, 
                       ADR( ib_2dmisc_sform_2d3d_e2268f0e_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      ib_2dmisc_sform_2d3d_e2268f0e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19744, 
                       ADR( ib_2dmisc_homogenous_22fd274e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_homogenous_22fd274e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19746, 
                       ADR( ib_2dmisc_2d_3epoint_9d37e6e9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2d_3epoint_9d37e6e9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19748, 
                       ADR( ib_2dmisc_point_2d3d_50aa6438_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_point_2d3d_50aa6438, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19750, 
                       ADR( ib_2dmisc_dline_2d3d_9b771eb6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d3d_9b771eb6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19752, 
                       ADR( ib_2dmisc_orm_2dline_4d8a20e7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orm_2dline_4d8a20e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19754, 
                       ADR( ib_2dmisc_components_a776ca69_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_components_a776ca69, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19780, 
                       ADR( ib_2dmisc_components_9631de6f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_components_9631de6f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19785, 
                       ADR( toollib_2dmisc_project_2dline_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_project_2dline, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19787, 
                       ADR( toollib_2dmisc_safe_2dproject_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_safe_2dproject, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19791, 
                       ADR( ib_2dmisc_ect_2dline_92cf24d3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ect_2dline_92cf24d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19793, 
                       ADR( ib_2dmisc_point_2d2d_5a547106_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_point_2d2d_5a547106, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19795, 
                       ADR( ib_2dmisc_dline_2d2d_bd006ef_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d2d_bd006ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19797, 
                       ADR( ib_2dmisc_n_2dvector_fadaca1b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2dvector_fadaca1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19799, 
                       ADR( ib_2dmisc_dline_2d2d_396d1575_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d2d_396d1575, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19805, 
                       ADR( toollib_2dmisc_filter_2dlines_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_filter_2dlines, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19833, 
                       ADR( ib_2dmisc_2ddistance_b82131e6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2ddistance_b82131e6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19836, 
                       ADR( ib_2dmisc_ary_2dfile_c506fef2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ary_2dfile_c506fef2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19840, 
                       ADR( ib_2dmisc_m_2doutput_38ec6a1e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_m_2doutput_38ec6a1e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19844, 
                       ADR( ib_2dmisc_ure_2dpath_df819e9e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ure_2dpath_df819e9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19849, 
                       ADR( toollib_2dmisc_pwd_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      toollib_2dmisc_pwd, EMPTYLIST ) );
        INITIALIZEVAR( t19851, 
                       ADR( ib_2dmisc_ead_2dfile_58650293_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_ead_2dfile_58650293, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19860, 
                       ADR( toollib_2dmisc_lookup_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_lookup, EMPTYLIST ) );
        INITIALIZEVAR( t19862, 
                       ADR( toollib_2dmisc_lookup_2dvalue_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_lookup_2dvalue, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19867, 
                       ADR( ib_2dmisc_p_2dvalues_6c98ba51_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_p_2dvalues_6c98ba51, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19872, 
                       ADR( toollib_2dmisc_split_2dn_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_split_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19876, 
                       ADR( toollib_2dmisc_split_2dcomma_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_split_2dcomma, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19878, 
                       ADR( toollib_2dmisc_flatten_2a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_flatten_2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19893, 
                       ADR( toollib_2dmisc_snoc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_snoc, EMPTYLIST ) );
        INITIALIZEVAR( t19896, 
                       ADR( toollib_2dmisc_maximum_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_maximum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19918, 
                       ADR( toollib_2dmisc_minimum_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_minimum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19940, 
                       ADR( toollib_2dmisc_maximump_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_maximump, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19962, 
                       ADR( toollib_2dmisc_minimump_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_minimump, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19984, 
                       ADR( ib_2dmisc_2dposition_5ae68915_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dposition_5ae68915, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19995, 
                       ADR( ib_2dmisc_2dposition_6453419d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dposition_6453419d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20006, 
                       ADR( toollib_2dmisc_safe_2dsublist_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_safe_2dsublist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20010, 
                       ADR( ib_2dmisc_d_2dvector_58ad8696_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dvector_58ad8696, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20037, 
                       ADR( ib_2dmisc_2dposition_3ed14c76_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2dposition_3ed14c76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20053, 
                       ADR( toollib_2dmisc_rest_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_rest_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20058, 
                       ADR( ib_2dmisc_f_2dvector_8b75269e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_f_2dvector_8b75269e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20070, 
                       ADR( ib_2dmisc_t_2dvector_9580ea2a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_t_2dvector_9580ea2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20082, 
                       ADR( toollib_2dmisc_o_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      toollib_2dmisc_o, EMPTYLIST ) );
        INITIALIZEVAR( t20089, 
                       ADR( ib_2dmisc_d_2dvector_e52d1f5a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dvector_e52d1f5a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20103, 
                       ADR( toollib_2dmisc_crop_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_crop, EMPTYLIST ) );
        INITIALIZEVAR( t20107, 
                       ADR( toollib_2dmisc_map_2dlinear_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_map_2dlinear, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20111, 
                       ADR( toollib_2dmisc_map_2dmedial_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_map_2dmedial, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20140, 
                       ADR( ib_2dmisc_2dref_2dnd_f10eab19_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_2dref_2dnd_f10eab19, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20158, 
                       ADR( ib_2dmisc_2d3d_2dref_baeb01c_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2d3d_2dref_baeb01c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20160, 
                       ADR( ib_2dmisc_et_2dnd_21_214a58da_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      ib_2dmisc_et_2dnd_21_214a58da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20179, 
                       ADR( ib_2dmisc_d_2dset_21_2a950b3f_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_d_2dset_21_2a950b3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20181, 
                       ADR( ib_2dmisc_atrix_2dnd_96246a2e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_96246a2e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20187, 
                       ADR( ib_2dmisc_atrix_2dnd_243ca8eb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_243ca8eb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20193, 
                       ADR( toollib_2dmisc_map_2dmatrix_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_map_2dmatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20195, 
                       ADR( ib_2dmisc_h_2dmatrix_9b00ff76_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_h_2dmatrix_9b00ff76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20197, 
                       ADR( ib_2dmisc_atrix_2d3d_99314937_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_99314937, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20199, 
                       ADR( ib_2dmisc_atrix_2d3d_2b298bf2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_2b298bf2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20201, 
                       ADR( ib_2dmisc_n_2dmatrix_7b48bbf5_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_n_2dmatrix_7b48bbf5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20207, 
                       ADR( ib_2dmisc_n_2dmatrix_de81564c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_n_2dmatrix_de81564c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20213, 
                       ADR( ib_2dmisc_d_2dmatrix_3f07691a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dmatrix_3f07691a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20219, 
                       ADR( ib_2dmisc_d_2dmatrix_67016ce_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dmatrix_67016ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20225, 
                       ADR( ib_2dmisc_atrix_2d3d_20e4c0ae_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_20e4c0ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20231, 
                       ADR( ib_2dmisc_atrix_2d3d_30f75a92_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_30f75a92, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20237, 
                       ADR( ib_2dmisc_atrix_2dnd_835dc287_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_835dc287, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20243, 
                       ADR( ib_2dmisc_atrix_2dnd_17ba6b06_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_17ba6b06, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20249, 
                       ADR( ib_2dmisc_e_2dmatrix_500e2fbc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_500e2fbc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20251, 
                       ADR( ib_2dmisc_e_2dmatrix_3b2d0a7_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_3b2d0a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20253, 
                       ADR( ib_2dmisc_atrix_2d3d_8c48e19e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_8c48e19e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20255, 
                       ADR( ib_2dmisc_atrix_2d3d_18af481f_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_18af481f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20257, 
                       ADR( ib_2dmisc_dimensions_4d85f46e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dimensions_4d85f46e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20270, 
                       ADR( toollib_2dmisc_matrix_2dtrace_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_matrix_2dtrace, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20280, 
                       ADR( toollib_2dmisc_map_2dm_2dn_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_map_2dm_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20286, 
                       ADR( ib_2dmisc_ch_2dm_2dn_8222982c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ch_2dm_2dn_8222982c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20293, 
                       ADR( ib_2dmisc__2dn_2ddec_6800fcab_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc__2dn_2ddec_6800fcab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20300, 
                       ADR( toollib_2dmisc_concat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_concat, EMPTYLIST ) );
        INITIALIZEVAR( t20302, 
                       ADR( ib_2dmisc_lat_2dlist_6a66ab96_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_lat_2dlist_6a66ab96, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20304, 
                       ADR( toollib_2dmisc_map_2dn_2d3_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_map_2dn_2d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20312, 
                       ADR( ib_2dmisc_at_2dn_2d3_628f792d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_at_2dn_2d3_628f792d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20320, 
                       ADR( ib_2dmisc_ector_2d2d_c893abe0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_c893abe0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20322, 
                       ADR( ib_2dmisc_2d2_2dargs_aa33907c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2d2_2dargs_aa33907c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20328, 
                       ADR( ib_2dmisc_r_2d2d_2d2_b146b1cb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_r_2d2d_2d2_b146b1cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20334, 
                       ADR( ib_2dmisc_ector_2d2d_cf4cd6d4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_cf4cd6d4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20340, 
                       ADR( ib_2dmisc_ector_2d2d_d35ffcee_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_d35ffcee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20348, 
                       ADR( ib_2dmisc_ector_2d2d_ddea0349_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_ddea0349, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20350, 
                       ADR( toollib_2dmisc_shape_2dmatrix_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_shape_2dmatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20366, 
                       ADR( ib_2dmisc_e_2dmatrix_11b5d357_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_11b5d357, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20372, 
                       ADR( ib_2dmisc_of_2dlists_d3b9f71d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_of_2dlists_d3b9f71d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20374, 
                       ADR( ib_2dmisc_d_3ematrix_c6388f1f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_d_3ematrix_c6388f1f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20392, 
                       ADR( ib_2dmisc_of_2dlists_4a915dec_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_of_2dlists_4a915dec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20394, 
                       ADR( toollib_2dmisc_zip_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      toollib_2dmisc_zip, EMPTYLIST ) );
        INITIALIZEVAR( t20451, 
                       ADR( toollib_2dmisc_take_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_take, EMPTYLIST ) );
        INITIALIZEVAR( t20453, 
                       ADR( toollib_2dmisc_take_2duntil_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_take_2duntil, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20471, 
                       ADR( toollib_2dmisc_drop_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_drop, EMPTYLIST ) );
        INITIALIZEVAR( t20473, 
                       ADR( toollib_2dmisc_drop_2duntil_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_drop_2duntil, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20485, 
                       ADR( toollib_2dmisc_fold_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_fold, EMPTYLIST ) );
        INITIALIZEVAR( t20487, 
                       ADR( toollib_2dmisc_foldl_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_foldl, EMPTYLIST ) );
        INITIALIZEVAR( t20493, 
                       ADR( toollib_2dmisc_foldr_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_foldr, EMPTYLIST ) );
        INITIALIZEVAR( t20502, 
                       ADR( toollib_2dmisc_join_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_join, EMPTYLIST ) );
        INITIALIZEVAR( t20504, 
                       ADR( toollib_2dmisc_map_2dconcat_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_map_2dconcat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20521, 
                       ADR( ib_2dmisc_concat_2dn_feb89efa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_concat_2dn_feb89efa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20523, 
                       ADR( toollib_2dmisc_ring_2dforward_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ring_2dforward, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20530, 
                       ADR( ib_2dmisc_2dbackward_b31d3193_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dbackward_b31d3193, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20536, 
                       ADR( ib_2dmisc_rward_2dto_988e410e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_rward_2dto_988e410e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20543, 
                       ADR( ib_2dmisc__2dbetween_6d18396f_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc__2dbetween_6d18396f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20545, 
                       ADR( ib_2dmisc_d_2dvector_dc5a608e_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      ib_2dmisc_d_2dvector_dc5a608e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20590, 
                       ADR( ib_2dmisc_t_2dcenter_8103fadf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_t_2dcenter_8103fadf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20592, 
                       ADR( ib_2dmisc_trix_2dref_a6f30345_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_trix_2dref_a6f30345, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20594, 
                       ADR( toollib_2dmisc_matrix_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_matrix_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20607, 
                       ADR( toollib_2dmisc_submatrix_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_submatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20619, 
                       ADR( toollib_2dmisc_string_2djoin_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_string_2djoin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20629, 
                       ADR( ib_2dmisc__2a_2djoin_126dcf23_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2a_2djoin_126dcf23, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20639, 
                       ADR( toollib_2dmisc_string_2dfind_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_string_2dfind, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20662, 
                       ADR( ib_2dmisc_om_2dindex_546de6a3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_om_2dindex_546de6a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20685, 
                       ADR( toollib_2dmisc_unlines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_unlines, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20687, 
                       ADR( toollib_2dmisc_lines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_lines, EMPTYLIST ) );
        INITIALIZEVAR( t20702, 
                       ADR( toollib_2dmisc_words_v ), 
                       qobischeme_fields_v );
        INITIALIZEVAR( t20703, 
                       ADR( toollib_2dmisc_unwords_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_unwords, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20705, 
                       ADR( ib_2dmisc_e_2dcenter_ed08db28_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_e_2dcenter_ed08db28, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20725, 
                       ADR( ib_2dmisc_dcenter_3f_8e2f98a8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dcenter_3f_8e2f98a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20738, 
                       ADR( ib_2dmisc_ter_2dx_21_b89b2172_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dx_21_b89b2172, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20742, 
                       ADR( ib_2dmisc_center_2dx_b5a9f5f9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_center_2dx_b5a9f5f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20753, 
                       ADR( ib_2dmisc_ter_2dx_21_cc37d3ba_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dx_21_cc37d3ba, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20764, 
                       ADR( ib_2dmisc_ter_2dy_21_274617_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dy_21_274617, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20768, 
                       ADR( ib_2dmisc_center_2dy_c2aec56f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_center_2dy_c2aec56f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20779, 
                       ADR( ib_2dmisc_ter_2dy_21_748bb4df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dy_21_748bb4df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20790, 
                       ADR( ib_2dmisc_e_2dcenter_6f8fe7a1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_e_2dcenter_6f8fe7a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20792, 
                       ADR( ib_2dmisc_ed_2dgc_2a_9062c7ce_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20793, 
                       ADR( ib_2dmisc_ue_2dgc_2a_51440329_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20794, 
                       ADR( ib_2dmisc_ge_2dgc_2a_cae315b6_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20795, 
                       ADR( ib_2dmisc_en_2dgc_2a_477bc7e_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20796, 
                       ADR( ib_2dmisc_ed_2dgc_2a_ac36d558_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20797, 
                       ADR( ib_2dmisc_ue_2dgc_2a_4814614a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20798, 
                       ADR( ib_2dmisc_ge_2dgc_2a_278f34f6_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20799, 
                       ADR( ib_2dmisc_en_2dgc_2a_d0d5dcfe_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20800, 
                       ADR( ib_2dmisc__2dfont_2a_280b0bc8_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20801, 
                       ADR( ib_2dmisc_da_2dgc_2a_30479eb9_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20802, 
                       ADR( ib_2dmisc_aseline_2a_eb2c34b2_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20803, 
                       ADR( ib_2dmisc_ed_2dgc_2a_cb09fb42_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ed_2dgc_2a_cb09fb42, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20805, 
                       ADR( ib_2dmisc_ue_2dgc_2a_b511a71e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ue_2dgc_2a_b511a71e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20807, 
                       ADR( ib_2dmisc_ge_2dgc_2a_8b5f3626_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ge_2dgc_2a_8b5f3626, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20809, 
                       ADR( ib_2dmisc_en_2dgc_2a_bc2e4cd5_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_en_2dgc_2a_bc2e4cd5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20811, 
                       ADR( ib_2dmisc_ed_2dgc_2a_4863716f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ed_2dgc_2a_4863716f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20813, 
                       ADR( ib_2dmisc_ue_2dgc_2a_f04d91e1_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ue_2dgc_2a_f04d91e1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20815, 
                       ADR( ib_2dmisc_ge_2dgc_2a_d7c11b91_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ge_2dgc_2a_d7c11b91, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20817, 
                       ADR( ib_2dmisc_en_2dgc_2a_9169ff6e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_en_2dgc_2a_9169ff6e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20819, 
                       ADR( ib_2dmisc_da_2dgc_2a_71fbbd29_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_da_2dgc_2a_71fbbd29, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20821, 
                       ADR( ib_2dmisc__2dx_2dgcs_966031b0_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc__2dx_2dgcs_966031b0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20823, 
                       ADR( ib_2dmisc__2dx_2dgcs_425cb919_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc__2dx_2dgcs_425cb919, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20825, 
                       ADR( ib_2dmisc_e_2devents_5e33b1f4_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_e_2devents_5e33b1f4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20835, 
                       ADR( ib_2dmisc__2dbuttons_da277968_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dbuttons_da277968, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20842, 
                       ADR( ib_2dmisc_roll_2dbar_94710cad_v ), 
                       MAKEPROCEDURE( 10, 
                                      0, 
                                      ib_2dmisc_roll_2dbar_94710cad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20930, 
                       ADR( ib_2dmisc_2d_3elines_2a2b92ea_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2d_3elines_2a2b92ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20952, 
                       ADR( toollib_2dmisc_acot_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_acot, EMPTYLIST ) );
        INITIALIZEVAR( t20954, 
                       ADR( ib_2dmisc__2dinverse_e1b53b4a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dinverse_e1b53b4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20959, 
                       ADR( ib_2dmisc__2dinverse_2d42fdb5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dinverse_2d42fdb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20964, 
                       ADR( toollib_2dmisc_ellipse_2dfit_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ellipse_2dfit, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20966, 
                       ADR( ib_2dmisc_t_2dscheme_6289f649_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_t_2dscheme_6289f649, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21111, 
                       ADR( toollib_2dmisc_every_2dn_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21117, 
                       ADR( toollib_2dmisc_every_2dn_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21123, 
                       ADR( toollib_2dmisc_every_2dn_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21129, 
                       ADR( toollib_2dmisc_every_2dn_2d5d_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d5d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21135, 
                       ADR( ib_2dmisc_ector_2d2d_b84c4399_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_b84c4399, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21141, 
                       ADR( ib_2dmisc_ector_2d3d_a15772d8_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_ector_2d3d_a15772d8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21147, 
                       ADR( ib_2dmisc_ector_2d4d_ee16e41f_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_ector_2d4d_ee16e41f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21153, 
                       ADR( ib_2dmisc_ector_2d5d_f70dd55e_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      ib_2dmisc_ector_2d5d_f70dd55e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21159, 
                       ADR( toollib_2dmisc_product_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_product_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21165, 
                       ADR( toollib_2dmisc_ref_2d1d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_ref_2d1d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21174, 
                       ADR( toollib_2dmisc_ref_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_ref_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21176, 
                       ADR( toollib_2dmisc_ref_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_ref_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21185, 
                       ADR( toollib_2dmisc_ref_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_ref_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21187, 
                       ADR( toollib_2dmisc_ref_2d5d_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dmisc_ref_2d5d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21189, 
                       ADR( toollib_2dmisc_sum_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_sum_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21195, 
                       ADR( toollib_2dmisc_sum_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_sum_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21201, 
                       ADR( toollib_2dmisc_sum_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_sum_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21207, 
                       ADR( toollib_2dmisc_sum_2dpairs_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_sum_2dpairs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21213, 
                       ADR( toollib_2dmisc_vector_2dsum_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_vector_2dsum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21220, 
                       ADR( ib_2dmisc_2dsum_2d2d_3d2af86d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2dsum_2d2d_3d2af86d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21226, 
                       ADR( toollib_2dmisc_matrix_2dsum_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_matrix_2dsum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21233, 
                       ADR( ib_2dmisc_2dsum_2d2d_26b3d5d2_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2dsum_2d2d_26b3d5d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21239, 
                       ADR( toollib_2dmisc_v_2fk_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_v_2fk, EMPTYLIST ) );
        INITIALIZEVAR( t21241, 
                       ADR( toollib_2dmisc_m_2fk_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_m_2fk, EMPTYLIST ) );
        INITIALIZEVAR( t21243, 
                       ADR( toollib_2dmisc_v_2am_2av_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_v_2am_2av, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21245, 
                       ADR( toollib_2dmisc_sum_2df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_sum_2df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21247, 
                       ADR( toollib_2dmisc_sum_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_sum_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21249, 
                       ADR( ib_2dmisc_vector_2df_f10f8b95_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_vector_2df_f10f8b95, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21251, 
                       ADR( toollib_2dmisc_float_2dmodulo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_float_2dmodulo, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21253, 
                       ADR( ib_2dmisc_y_2dmatrix_28bb2f8c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_y_2dmatrix_28bb2f8c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21255, 
                       ADR( toollib_2dmisc_translate_2d3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_translate_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21257, 
                       ADR( toollib_2dmisc_draw_2dcircle_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_draw_2dcircle, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21259, 
                       ADR( ib_2dmisc_riangle_3f_ee3b420c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_riangle_3f_ee3b420c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21267, 
                       ADR( ib_2dmisc__2dpolygon_3a3a6277_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dpolygon_3a3a6277, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21285, 
                       ADR( ib_2dmisc_cumference_8da04d9e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_cumference_8da04d9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21290, 
                       ADR( ib_2dmisc_ellipse_3f_13b723b2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ellipse_3f_13b723b2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21298, 
                       ADR( ib_2dmisc_ding_2dbox_bf69ab8f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_ding_2dbox_bf69ab8f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21322, 
                       ADR( ib_2dmisc__2dellipse_b19dc50f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dellipse_b19dc50f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21339, 
                       ADR( toollib_2dmisc_precision_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_precision, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21343, 
                       ADR( toollib_2dmisc_recall_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_recall, EMPTYLIST ) );
        INITIALIZEVAR( t21347, 
                       ADR( toollib_2dmisc_accuracy_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_accuracy, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21378, 
                       ADR( toollib_2dmisc_prf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_prf, EMPTYLIST ) );
        INITIALIZEVAR( t21479, 
                       ADR( toollib_2dmisc_accuracy_2dn_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_accuracy_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21483, 
                       ADR( toollib_2dmisc_accuracy_2da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_accuracy_2da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21502, 
                       ADR( toollib_2dmisc_prf_2dn_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_prf_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21506, 
                       ADR( ib_2dmisc_eshold_2dp_45a07561_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_eshold_2dp_45a07561, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21512, 
                       ADR( toollib_2dmisc_pr_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_pr, EMPTYLIST ) );
        INITIALIZEVAR( t21514, 
                       ADR( toollib_2dmisc_graph_2droc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_graph_2droc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21536, 
                       ADR( ib_2dmisc_olor_2droc_28bc10e2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_olor_2droc_28bc10e2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21568, 
                       ADR( ib_2dmisc_compressed_dc9714fc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_compressed_dc9714fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21578, 
                       ADR( ib_2dmisc_om_2dcfile_df02fb06_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_om_2dcfile_df02fb06, 
                                      EMPTYLIST ) );
        return;
}
