
/* SCHEME->C */

#include <objects.h>

void toollib_2dmisc__init();
DEFCSTRING( t18989, "gunzip -c ~a > ~a" );
DEFSTATICTSCP( c18866 );
DEFCSTRING( t18990, "bunzip2 -c ~a > ~a" );
DEFSTATICTSCP( c18864 );
DEFCSTRING( t18991, ".bz2" );
DEFSTATICTSCP( c18862 );
DEFCSTRING( t18992, ".gz" );
DEFSTATICTSCP( c18861 );
DEFCSTRING( t18993, "scatter(P~a,R~a,C~a)~%" );
DEFSTATICTSCP( c18855 );
DEFCSTRING( t18994, "C~a = [" );
DEFSTATICTSCP( c18831 );
DEFCSTRING( t18995, "scatter(P~a,R~a)~%" );
DEFSTATICTSCP( c18781 );
DEFCSTRING( t18996, "R~a = [" );
DEFSTATICTSCP( c18757 );
DEFCSTRING( t18997, "]~%" );
DEFSTATICTSCP( c18756 );
DEFCSTRING( t18998, "~a ~%" );
DEFSTATICTSCP( c18755 );
DEFCSTRING( t18999, "P~a = [" );
DEFSTATICTSCP( c18731 );
DEFSTATICTSCP( c18111 );
DEFSTATICTSCP( c18004 );
DEFCSTRING( t19000, "~a ~a ~a ~a ~a ~a ~a~%" );
DEFSTATICTSCP( c17276 );
DEFCSTRING( t19001, "matlab" );
DEFSTATICTSCP( c17243 );
DEFCSTRING( t19002, "Abort" );
DEFSTATICTSCP( c16889 );
DEFCSTRING( t19003, "Quit" );
DEFSTATICTSCP( c16881 );
DEFCSTRING( t19004, "Help" );
DEFSTATICTSCP( c16876 );
DEFCSTRING( t19005, "-*-lucidatypewriter-*-*-*-*-26-*-*-*-*-*-*-*" );
DEFSTATICTSCP( c16854 );
DEFCSTRING( t19006, "SET-IMAGE-CENTER-Y! error" );
DEFSTATICTSCP( c16829 );
DEFCSTRING( t19007, "IMAGE-CENTER-Y error" );
DEFSTATICTSCP( c16814 );
DEFCSTRING( t19008, "LOCAL-SET-IMAGE-CENTER-Y! error" );
DEFSTATICTSCP( c16810 );
DEFCSTRING( t19009, "SET-IMAGE-CENTER-X! error" );
DEFSTATICTSCP( c16794 );
DEFCSTRING( t19010, "IMAGE-CENTER-X error" );
DEFSTATICTSCP( c16779 );
DEFCSTRING( t19011, "LOCAL-SET-IMAGE-CENTER-X! error" );
DEFSTATICTSCP( c16775 );
DEFSTATICTSCP( c16715 );
DEFCSTRING( t19012, " " );
DEFSTATICTSCP( c16697 );
DEFSTATICTSCP( c16664 );
DEFCSTRING( t19013, "Argument is out of range: ~s" );
DEFSTATICTSCP( c16622 );
DEFSTATICTSCP( c16610 );
DEFCSTRING( t19014, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c16604 );
DEFSTATICTSCP( c16603 );
DEFCSTRING( t19015, "Matrix not hypersquare!" );
DEFSTATICTSCP( c15843 );
DEFCSTRING( t19016, "," );
DEFSTATICTSCP( c15068 );
DEFCSTRING( t19017, "~a does not exist!" );
DEFSTATICTSCP( c15036 );
DEFCSTRING( t19018, "PWD" );
DEFSTATICTSCP( c15023 );
DEFCSTRING( t19019, "architecture-path" );
DEFSTATICTSCP( c15021 );
DEFCSTRING( t19020, "~a > ~s" );
DEFSTATICTSCP( c15015 );
DEFCSTRING( t19021, "/tmp/system.out" );
DEFSTATICTSCP( c15012 );
DEFCSTRING( t19022, "killall >/dev/null recordmydesktop" );
DEFSTATICTSCP( c14794 );
DEFCSTRING( t19023, 
            "recordmydesktop >/tmp/rec -x ~a -y ~a -width ~a -height ~a --no\
-sound --on-the-fly-encoding -fps ~a&" );
DEFSTATICTSCP( c14792 );
DEFCSTRING( t19024, 
            "recordmydesktop >/tmp/rec -windowid ~a --no-sound --on-the-fly-\
encoding -fps ~a&" );
DEFSTATICTSCP( c14785 );
DEFCSTRING( t19025, "USERNAME" );
DEFSTATICTSCP( c14782 );
DEFCSTRING( t19026, "/tmp/xwininfo-~a-~a.text" );
DEFSTATICTSCP( c14781 );
DEFCSTRING( t19027, "xwininfo -name ~a|fgrep id:|cut -d ' ' -f 4 >~a" );
DEFSTATICTSCP( c14778 );
DEFCSTRING( t19028, "zipper: cannot ascend negative levels" );
DEFSTATICTSCP( c14516 );
DEFCSTRING( t19029, "zipper: cannot ascend any further" );
DEFSTATICTSCP( c14432 );
DEFCSTRING( t19030, "zipper: cannot descend to out-of-bounds index" );
DEFSTATICTSCP( c14416 );
DEFCSTRING( t19031, "SET-ZIPPER-THREAD! error" );
DEFSTATICTSCP( c14396 );
DEFCSTRING( t19032, "ZIPPER-THREAD error" );
DEFSTATICTSCP( c14382 );
DEFCSTRING( t19033, "LOCAL-SET-ZIPPER-THREAD! error" );
DEFSTATICTSCP( c14379 );
DEFCSTRING( t19034, "SET-ZIPPER-TREE! error" );
DEFSTATICTSCP( c14364 );
DEFCSTRING( t19035, "ZIPPER-TREE error" );
DEFSTATICTSCP( c14350 );
DEFCSTRING( t19036, "LOCAL-SET-ZIPPER-TREE! error" );
DEFSTATICTSCP( c14347 );
DEFSTATICTSCP( c14289 );
DEFSTATICTSCP( c14283 );
DEFCSTRING( t19037, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c13506 );
DEFSTATICTSCP( c13505 );
DEFCSTRING( t19038, "HOME" );
DEFSTATICTSCP( c13421 );
DEFCSTRING( t19039, "~a/imitate/tool/settings" );
DEFSTATICTSCP( c13420 );
DEFSTATICTSCP( c13418 );
DEFCSTRING( t19040, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c13410 );
DEFCSTRING( t19041, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c13406 );
DEFCSTRING( t19042, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c13403 );
DEFSTATICTSCP( c13402 );
DEFCSTRING( t19043, "~s ~s~%" );
DEFSTATICTSCP( c13332 );

static void  init_constants()
{
        c18866 = CSTRING_TSCP( t18989 );
        CONSTANTEXP( ADR( c18866 ) );
        c18864 = CSTRING_TSCP( t18990 );
        CONSTANTEXP( ADR( c18864 ) );
        c18862 = CSTRING_TSCP( t18991 );
        CONSTANTEXP( ADR( c18862 ) );
        c18861 = CSTRING_TSCP( t18992 );
        CONSTANTEXP( ADR( c18861 ) );
        c18855 = CSTRING_TSCP( t18993 );
        CONSTANTEXP( ADR( c18855 ) );
        c18831 = CSTRING_TSCP( t18994 );
        CONSTANTEXP( ADR( c18831 ) );
        c18781 = CSTRING_TSCP( t18995 );
        CONSTANTEXP( ADR( c18781 ) );
        c18757 = CSTRING_TSCP( t18996 );
        CONSTANTEXP( ADR( c18757 ) );
        c18756 = CSTRING_TSCP( t18997 );
        CONSTANTEXP( ADR( c18756 ) );
        c18755 = CSTRING_TSCP( t18998 );
        CONSTANTEXP( ADR( c18755 ) );
        c18731 = CSTRING_TSCP( t18999 );
        CONSTANTEXP( ADR( c18731 ) );
        c18111 = DOUBLE_TSCP( 3. );
        CONSTANTEXP( ADR( c18111 ) );
        c18004 = DOUBLE_TSCP( 1. );
        CONSTANTEXP( ADR( c18004 ) );
        c17276 = CSTRING_TSCP( t19000 );
        CONSTANTEXP( ADR( c17276 ) );
        c17243 = CSTRING_TSCP( t19001 );
        CONSTANTEXP( ADR( c17243 ) );
        c16889 = CSTRING_TSCP( t19002 );
        CONSTANTEXP( ADR( c16889 ) );
        c16881 = CSTRING_TSCP( t19003 );
        CONSTANTEXP( ADR( c16881 ) );
        c16876 = CSTRING_TSCP( t19004 );
        CONSTANTEXP( ADR( c16876 ) );
        c16854 = CSTRING_TSCP( t19005 );
        CONSTANTEXP( ADR( c16854 ) );
        c16829 = CSTRING_TSCP( t19006 );
        CONSTANTEXP( ADR( c16829 ) );
        c16814 = CSTRING_TSCP( t19007 );
        CONSTANTEXP( ADR( c16814 ) );
        c16810 = CSTRING_TSCP( t19008 );
        CONSTANTEXP( ADR( c16810 ) );
        c16794 = CSTRING_TSCP( t19009 );
        CONSTANTEXP( ADR( c16794 ) );
        c16779 = CSTRING_TSCP( t19010 );
        CONSTANTEXP( ADR( c16779 ) );
        c16775 = CSTRING_TSCP( t19011 );
        CONSTANTEXP( ADR( c16775 ) );
        c16715 = STRINGTOSYMBOL( CSTRING_TSCP( "IMAGE-CENTER" ) );
        CONSTANTEXP( ADR( c16715 ) );
        c16697 = CSTRING_TSCP( t19012 );
        CONSTANTEXP( ADR( c16697 ) );
        c16664 = EMPTYLIST;
        c16664 = CONS( _TSCP( 2578 ), c16664 );
        CONSTANTEXP( ADR( c16664 ) );
        c16622 = CSTRING_TSCP( t19013 );
        CONSTANTEXP( ADR( c16622 ) );
        c16610 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c16610 ) );
        c16604 = CSTRING_TSCP( t19014 );
        CONSTANTEXP( ADR( c16604 ) );
        c16603 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c16603 ) );
        c15843 = CSTRING_TSCP( t19015 );
        CONSTANTEXP( ADR( c15843 ) );
        c15068 = CSTRING_TSCP( t19016 );
        CONSTANTEXP( ADR( c15068 ) );
        c15036 = CSTRING_TSCP( t19017 );
        CONSTANTEXP( ADR( c15036 ) );
        c15023 = CSTRING_TSCP( t19018 );
        CONSTANTEXP( ADR( c15023 ) );
        c15021 = CSTRING_TSCP( t19019 );
        CONSTANTEXP( ADR( c15021 ) );
        c15015 = CSTRING_TSCP( t19020 );
        CONSTANTEXP( ADR( c15015 ) );
        c15012 = CSTRING_TSCP( t19021 );
        CONSTANTEXP( ADR( c15012 ) );
        c14794 = CSTRING_TSCP( t19022 );
        CONSTANTEXP( ADR( c14794 ) );
        c14792 = CSTRING_TSCP( t19023 );
        CONSTANTEXP( ADR( c14792 ) );
        c14785 = CSTRING_TSCP( t19024 );
        CONSTANTEXP( ADR( c14785 ) );
        c14782 = CSTRING_TSCP( t19025 );
        CONSTANTEXP( ADR( c14782 ) );
        c14781 = CSTRING_TSCP( t19026 );
        CONSTANTEXP( ADR( c14781 ) );
        c14778 = CSTRING_TSCP( t19027 );
        CONSTANTEXP( ADR( c14778 ) );
        c14516 = CSTRING_TSCP( t19028 );
        CONSTANTEXP( ADR( c14516 ) );
        c14432 = CSTRING_TSCP( t19029 );
        CONSTANTEXP( ADR( c14432 ) );
        c14416 = CSTRING_TSCP( t19030 );
        CONSTANTEXP( ADR( c14416 ) );
        c14396 = CSTRING_TSCP( t19031 );
        CONSTANTEXP( ADR( c14396 ) );
        c14382 = CSTRING_TSCP( t19032 );
        CONSTANTEXP( ADR( c14382 ) );
        c14379 = CSTRING_TSCP( t19033 );
        CONSTANTEXP( ADR( c14379 ) );
        c14364 = CSTRING_TSCP( t19034 );
        CONSTANTEXP( ADR( c14364 ) );
        c14350 = CSTRING_TSCP( t19035 );
        CONSTANTEXP( ADR( c14350 ) );
        c14347 = CSTRING_TSCP( t19036 );
        CONSTANTEXP( ADR( c14347 ) );
        c14289 = STRINGTOSYMBOL( CSTRING_TSCP( "ZIPPER" ) );
        CONSTANTEXP( ADR( c14289 ) );
        c14283 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c14283 ) );
        c13506 = CSTRING_TSCP( t19037 );
        CONSTANTEXP( ADR( c13506 ) );
        c13505 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c13505 ) );
        c13421 = CSTRING_TSCP( t19038 );
        CONSTANTEXP( ADR( c13421 ) );
        c13420 = CSTRING_TSCP( t19039 );
        CONSTANTEXP( ADR( c13420 ) );
        c13418 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c13418 ) );
        c13410 = CSTRING_TSCP( t19040 );
        CONSTANTEXP( ADR( c13410 ) );
        c13406 = CSTRING_TSCP( t19041 );
        CONSTANTEXP( ADR( c13406 ) );
        c13403 = CSTRING_TSCP( t19042 );
        CONSTANTEXP( ADR( c13403 ) );
        c13402 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c13402 ) );
        c13332 = CSTRING_TSCP( t19043 );
        CONSTANTEXP( ADR( c13332 ) );
}

DEFTSCP( ib_2dmisc_sc_2d1_2d0_e920e698_v );
DEFCSTRING( t19044, "gensym-toollib_2dmisc-1-0" );

TSCP  ib_2dmisc_sc_2d1_2d0_e920e698(  )
{
        PUSHSTACKTRACE( t19044 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dmisc_2_0(){ return 1;gensym_toollib_2dmisc_2_0( );
}

DEFTSCP( ib_2dmisc_sc_2d3_2d0_93e0b5f8_v );
DEFCSTRING( t19046, "gensym-toollib_2dmisc-3-0" );

TSCP  ib_2dmisc_sc_2d3_2d0_93e0b5f8(  )
{
        PUSHSTACKTRACE( t19046 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dmisc_4_0(){ return 1;gensym_toollib_2dmisc_4_0( );
}

DEFTSCP( ib_2dmisc_sc_2d5_2d0_1ca04058_v );
DEFCSTRING( t19048, "gensym-toollib_2dmisc-5-0" );

TSCP  ib_2dmisc_sc_2d5_2d0_1ca04058(  )
{
        PUSHSTACKTRACE( t19048 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dmisc_6_0(){ return 1;gensym_toollib_2dmisc_6_0( );
}

DEFTSCP( ib_2dmisc_sc_2d7_2d0_66601338_v );
DEFCSTRING( t19050, "gensym-toollib_2dmisc-7-0" );

TSCP  ib_2dmisc_sc_2d7_2d0_66601338(  )
{
        PUSHSTACKTRACE( t19050 );
        POPSTACKTRACE( 0 );}
  #include<unistd.h>
int gensym_toollib_2dmisc_8_0(){ return 1;gensym_toollib_2dmisc_8_0( );
}

DEFTSCP( ib_2dmisc_ging_3f_2a_f4a9801b_v );
DEFCSTRING( t19052, "*DEBUGGING?*" );
DEFTSCP( toollib_2dmisc__2aquiet_3f_2a_v );
DEFCSTRING( t19053, "*QUIET?*" );
DEFTSCP( toollib_2dmisc_implies_v );
DEFCSTRING( t19054, "IMPLIES" );

TSCP  toollib_2dmisc_implies( a13323, b13324 )
        TSCP  a13323, b13324;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19054 );
        if  ( FALSE( a13323 ) )  goto L19056;
        X1 = FALSEVALUE;
        goto L19057;
L19056:
        X1 = TRUEVALUE;
L19057:
        if  ( TRUE( X1 ) )  goto L19059;
        POPSTACKTRACE( b13324 );
L19059:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_dtrace_v );
DEFCSTRING( t19061, "DTRACE" );
EXTERNTSCPP( scrt6_format, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_format_v );

TSCP  toollib_2dmisc_dtrace( s13330, v13331 )
        TSCP  s13330, v13331;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19061 );
        X1 = CONS( v13331, EMPTYLIST );
        X1 = CONS( s13330, X1 );
        scrt6_format( TRUEVALUE, CONS( c13332, X1 ) );
        POPSTACKTRACE( v13331 );
}

DEFTSCP( toollib_2dmisc_fixpointp_v );
DEFCSTRING( t19063, "FIXPOINTP" );

TSCP  toollib_2dmisc_fixpointp( p13334, f13335, v13336 )
        TSCP  p13334, f13335, v13336;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19063 );
L19064:
        X2 = f13335;
        X2 = UNKNOWNCALL( X2, 1 );
        X1 = VIA( PROCEDURE_CODE( X2 ) )( v13336, 
                                          PROCEDURE_CLOSURE( X2 ) );
        X2 = p13334;
        X2 = UNKNOWNCALL( X2, 2 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( v13336, 
                                                 X1, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L19066;
        v13336 = X1;
        GOBACK( L19064 );
L19066:
        POPSTACKTRACE( v13336 );
}

DEFTSCP( toollib_2dmisc_exact_2dround_v );
DEFCSTRING( t19068, "EXACT-ROUND" );
EXTERNTSCPP( scrt2_inexact_2d_3eexact, XAL1( TSCP ) );
EXTERNTSCP( scrt2_inexact_2d_3eexact_v );
EXTERNTSCPP( scrt2_round, XAL1( TSCP ) );
EXTERNTSCP( scrt2_round_v );

TSCP  toollib_2dmisc_exact_2dround( v13341 )
        TSCP  v13341;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19068 );
        X1 = scrt2_round( v13341 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( toollib_2dmisc_exact_2dfloor_v );
DEFCSTRING( t19070, "EXACT-FLOOR" );
EXTERNTSCPP( scrt2_floor, XAL1( TSCP ) );
EXTERNTSCP( scrt2_floor_v );

TSCP  toollib_2dmisc_exact_2dfloor( v13343 )
        TSCP  v13343;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19070 );
        X1 = scrt2_floor( v13343 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( ib_2dmisc__2dceiling_3845082b_v );
DEFCSTRING( t19072, "EXACT-CEILING" );
EXTERNTSCPP( scrt2_ceiling, XAL1( TSCP ) );
EXTERNTSCP( scrt2_ceiling_v );

TSCP  ib_2dmisc__2dceiling_3845082b( v13345 )
        TSCP  v13345;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19072 );
        X1 = scrt2_ceiling( v13345 );
        POPSTACKTRACE( scrt2_inexact_2d_3eexact( X1 ) );
}

DEFTSCP( toollib_2dmisc_sigmoid_v );
DEFCSTRING( t19074, "SIGMOID" );
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

TSCP  toollib_2dmisc_sigmoid( t13347, a13348, b13349 )
        TSCP  t13347, a13348, b13349;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19074 );
        X5 = qobischeme__2d_2dtwo( t13347, a13348 );
        X4 = qobischeme__2a_2dtwo( b13349, X5 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), X4 );
        X2 = qobischeme_exp( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( _TSCP( 4 ), X1 ) );
}

DEFTSCP( ib_2dmisc_ct_2dangle_ed09f1a1_v );
DEFCSTRING( t19076, "CORRECT-ANGLE" );
EXTERNTSCPP( toollib_2dmisc_float_2dmodulo, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_float_2dmodulo_v );
EXTERNTSCP( qobischeme_pi_v );
EXTERNTSCPP( qobischeme__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_2dtwo_v );
EXTERNTSCP( qobischeme_half_2dpi_v );
EXTERNTSCPP( qobischeme__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_2dtwo_v );

TSCP  ib_2dmisc_ct_2dangle_ed09f1a1( a13368 )
        TSCP  a13368;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19076 );
        X1 = toollib_2dmisc_float_2dmodulo( a13368, qobischeme_pi_v );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, qobischeme_half_2dpi_v ) )
            )  goto L19079;
        POPSTACKTRACE( qobischeme__2d_2dtwo( X1, qobischeme_pi_v ) );
L19079:
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), qobischeme_half_2dpi_v );
        if  ( FALSE( qobischeme__3c_2dtwo( X1, X2 ) ) )  goto L19081;
        POPSTACKTRACE( qobischeme__2b_2dtwo( X1, qobischeme_pi_v ) );
L19081:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_percentage_v );
DEFCSTRING( t19083, "PERCENTAGE" );

TSCP  toollib_2dmisc_percentage( a13387 )
        TSCP  a13387;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19083 );
        X2 = qobischeme__2a_2dtwo( _TSCP( 400 ), a13387 );
        X1 = scrt2_round( X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 400 ) ) );
}

DEFTSCP( toollib_2dmisc_last_2dvector_v );
DEFCSTRING( t19085, "LAST-VECTOR" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  toollib_2dmisc_last_2dvector( v13396 )
        TSCP  v13396;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19085 );
        if  ( AND( EQ( TSCPTAG( v13396 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v13396 ), VECTORTAG ) )
            )  goto L19088;
        scdebug_error( c13418, 
                       c13403, CONS( v13396, EMPTYLIST ) );
L19088:
        X2 = C_FIXED( VECTOR_LENGTH( v13396 ) );
        X1 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L19091;
        scdebug_error( c13402, 
                       c13406, CONS( X1, EMPTYLIST ) );
L19091:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v13396 ) ) ) )  goto L19093;
        scdebug_error( c13402, 
                       c13410, CONS( X1, EMPTYLIST ) );
L19093:
        POPSTACKTRACE( VECTOR_ELEMENT( v13396, X1 ) );
}

DEFTSCP( toollib_2dmisc__2asettings_2a_v );
DEFCSTRING( t19095, "*SETTINGS*" );
DEFTSCP( ib_2dmisc_ings_21_2a_77c5ebb_v );
DEFCSTRING( t19096, "*LOAD-SETTINGS!*" );
EXTERNTSCPP( obischeme_rom_2dfile_92544bb1, XAL1( TSCP ) );
EXTERNTSCP( obischeme_rom_2dfile_92544bb1_v );
EXTERNTSCPP( qobischeme_getenv, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_getenv_v );

TSCP  ib_2dmisc_ings_21_2a_77c5ebb(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19096 );
        X2 = CONS( qobischeme_getenv( c13421 ), EMPTYLIST );
        X1 = scrt6_format( FALSEVALUE, CONS( c13420, X2 ) );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            obischeme_rom_2dfile_92544bb1( X1 ) ) );
}

DEFTSCP( ib_2dmisc_ettings_2a_9d4d158e_v );
DEFCSTRING( t19098, "*SAVE-SETTINGS*" );
EXTERNTSCPP( obischeme_dto_2dfile_ae5c74d4, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_dto_2dfile_ae5c74d4_v );

TSCP  ib_2dmisc_ettings_2a_9d4d158e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19098 );
        X2 = CONS( qobischeme_getenv( c13421 ), EMPTYLIST );
        X1 = scrt6_format( FALSEVALUE, CONS( c13420, X2 ) );
        POPSTACKTRACE( obischeme_dto_2dfile_ae5c74d4( toollib_2dmisc__2asettings_2a_v, 
                                                      X1 ) );
}

DEFTSCP( ib_2dmisc_s_2dlookup_299fc00b_v );
DEFCSTRING( t19100, "SETTINGS-LOOKUP" );
EXTERNTSCPP( toollib_2dmisc_foldl, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldl_v );
EXTERNTSCPP( scrt1_assoc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assoc_v );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );

TSCP  toollib_2dmisc_l13428( t13429, v13430, c19104 )
        TSCP  t13429, v13430, c19104;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13428 [inside SETTINGS-LOOKUP]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19104, 0 );
        if  ( TRUE( scrt1_assoc( v13430, t13429 ) ) )  goto L19106;
        X3 = DISPLAY( 2 );
        X3 = UNKNOWNCALL( X3, 1 );
        VIA( PROCEDURE_CODE( X3 ) )( FALSEVALUE, 
                                     PROCEDURE_CLOSURE( X3 ) );
L19106:
        X3 = scrt1_assoc( v13430, t13429 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19110;
        scrt1__24__cdr_2derror( X3 );
L19110:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19113;
        scrt1__24__car_2derror( X4 );
L19113:
        X2 = PAIR_CAR( X4 );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l13426( c13427, c19102 )
        TSCP  c13427, c19102;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l13426 [inside SETTINGS-LOOKUP]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19102, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19102, 1 );
        DISPLAY( 2 ) = c13427;
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l13428, 
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

TSCP  ib_2dmisc_s_2dlookup_299fc00b( r13424, p13425 )
        TSCP  r13424, p13425;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19100 );
        DISPLAY( 0 ) = r13424;
        DISPLAY( 1 ) = p13425;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13426, 
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
DEFCSTRING( t19115, "SETTINGS-UPDATE" );
EXTERNTSCPP( qobischeme_find_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_find_2dif_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );

TSCP  toollib_2dmisc_l13458( x13459, c19123 )
        TSCP  x13459, c19123;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13458 [inside SETTINGS-UPDATE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19123, 0 );
        if  ( EQ( TSCPTAG( x13459 ), PAIRTAG ) )  goto L19126;
        scrt1__24__car_2derror( x13459 );
L19126:
        X3 = PAIR_CAR( x13459 );
        X5 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19129;
        scrt1__24__car_2derror( X5 );
L19129:
        X4 = PAIR_CAR( X5 );
        X2 = scrt1_equal_3f( X3, X4 );
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );
EXTERNTSCPP( toollib_2dmisc_l13449, XAL2( TSCP, TSCP ) );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  toollib_2dmisc_l13468( a13469, b13470, c19163 )
        TSCP  a13469, b13470, c19163;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13468 [inside SETTINGS-UPDATE]" );
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( b13470, CONS( a13469, X2 ) );
        POPSTACKTRACE( scrt1_cons_2a( X1, 
                                      CONS( EMPTYLIST, EMPTYLIST ) ) );
}

EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  toollib_2dmisc_l13449( t13451, p13452 )
        TSCP  t13451, p13452;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside SETTINGS-UPDATE]" );
        DISPLAY( 1 ) = p13452;
        if  ( EQ( _S2CUINT( DISPLAY( 1 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19119;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13458, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        if  ( FALSE( qobischeme_find_2dif( X1, t13451 ) ) )  goto L19121;
        X1 = t13451;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L19132:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19133;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19136;
        scrt1__24__car_2derror( X1 );
L19136:
        X6 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19142;
        scrt1__24__car_2derror( X6 );
L19142:
        X7 = PAIR_CAR( X6 );
        X9 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19145;
        scrt1__24__car_2derror( X9 );
L19145:
        X8 = PAIR_CAR( X9 );
        if  ( FALSE( scrt1_equal_3f( X7, X8 ) ) )  goto L19139;
        X7 = PAIR_CAR( X6 );
        X8 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19150;
        scrt1__24__car_2derror( X10 );
L19150:
        X9 = PAIR_CAR( X10 );
        X11 = DISPLAY( 1 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L19153;
        scrt1__24__cdr_2derror( X11 );
L19153:
        X10 = PAIR_CDR( X11 );
        X5 = scrt1_cons_2a( X7, 
                            CONS( toollib_2dmisc_l13449( X9, X10 ), 
                                  X8 ) );
        goto L19140;
L19139:
        X5 = X6;
L19140:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19156;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L19132 );
L19156:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19161;
        scdebug_error( c13505, 
                       c13506, CONS( X3, EMPTYLIST ) );
L19161:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L19132 );
L19133:
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L19121:
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l13468, EMPTYLIST );
        X3 = scrt1_reverse( DISPLAY( 1 ) );
        X1 = toollib_2dmisc_foldl( X2, X3, DISPLAY( 0 ) );
        SDVAL = scrt1_append_2dtwo( X1, t13451 );
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L19119:
        SDVAL = DISPLAY( 0 );
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_s_2dupdate_41a64476( r13442, v13443, p13444 )
        TSCP  r13442, v13443, p13444;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19115 );
        DISPLAY( 0 ) = v13443;
        SDVAL = toollib_2dmisc_l13449( r13442, p13444 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_s_2dremove_b1036c3e_v );
DEFCSTRING( t19165, "SETTINGS-REMOVE" );
EXTERNTSCPP( qobischeme__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3d_2dtwo_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( qobischeme_remove_2dif, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_v );

TSCP  toollib_2dmisc_l13628( x13629, c19173 )
        TSCP  x13629, c19173;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l13628 [inside SETTINGS-REMOVE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19173, 0 );
        if  ( EQ( TSCPTAG( x13629 ), PAIRTAG ) )  goto L19176;
        scrt1__24__car_2derror( x13629 );
L19176:
        X3 = PAIR_CAR( x13629 );
        X5 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19179;
        scrt1__24__car_2derror( X5 );
L19179:
        X4 = PAIR_CAR( X5 );
        X2 = scrt1_equal_3f( X3, X4 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( toollib_2dmisc_l13550, XAL2( TSCP, TSCP ) );

TSCP  toollib_2dmisc_l13550( t13552, p13553 )
        TSCP  t13552, p13553;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside SETTINGS-REMOVE]" );
        DISPLAY( 0 ) = p13553;
        if  ( EQ( _S2CUINT( DISPLAY( 0 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19169;
        X1 = scrt1_length( DISPLAY( 0 ) );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L19171;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l13628, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_remove_2dif( X1, t13552 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L19171:
        X1 = t13552;
        X2 = EMPTYLIST;
        X3 = EMPTYLIST;
L19182:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19183;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19186;
        scrt1__24__car_2derror( X1 );
L19186:
        X6 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19192;
        scrt1__24__car_2derror( X6 );
L19192:
        X7 = PAIR_CAR( X6 );
        X9 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19195;
        scrt1__24__car_2derror( X9 );
L19195:
        X8 = PAIR_CAR( X9 );
        if  ( FALSE( scrt1_equal_3f( X7, X8 ) ) )  goto L19189;
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19199;
        scrt1__24__car_2derror( X9 );
L19199:
        X8 = PAIR_CAR( X9 );
        X10 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19202;
        scrt1__24__cdr_2derror( X10 );
L19202:
        X9 = PAIR_CDR( X10 );
        X5 = scrt1_cons_2a( X6, 
                            CONS( toollib_2dmisc_l13550( X8, X9 ), 
                                  X7 ) );
        goto L19190;
L19189:
        X5 = X6;
L19190:
        X4 = sc_cons( X5, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19205;
        X5 = PAIR_CDR( X1 );
        X3 = X4;
        X2 = X4;
        X1 = X5;
        GOBACK( L19182 );
L19205:
        X5 = PAIR_CDR( X1 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19210;
        scdebug_error( c13505, 
                       c13506, CONS( X3, EMPTYLIST ) );
L19210:
        X3 = SETGEN( PAIR_CDR( X3 ), X4 );
        X1 = X5;
        GOBACK( L19182 );
L19183:
        SDVAL = X2;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L19169:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_s_2dremove_b1036c3e( r13544, p13545 )
        TSCP  r13544, p13545;
{
        PUSHSTACKTRACE( t19165 );
        POPSTACKTRACE( toollib_2dmisc_l13550( r13544, p13545 ) );
}

DEFTSCP( ib_2dmisc_dlookup_2a_5f54d161_v );
DEFCSTRING( t19212, "*SETTINGS-LOOKUP*" );

TSCP  ib_2dmisc_dlookup_2a_5f54d161( p13639 )
        TSCP  p13639;
{
        PUSHSTACKTRACE( t19212 );
        POPSTACKTRACE( ib_2dmisc_s_2dlookup_299fc00b( toollib_2dmisc__2asettings_2a_v, 
                                                      p13639 ) );
}

DEFTSCP( ib_2dmisc_date_21_2a_fe258695_v );
DEFCSTRING( t19214, "*SETTINGS-UPDATE!*" );

TSCP  ib_2dmisc_date_21_2a_fe258695( v13641, p13642 )
        TSCP  v13641, p13642;
{
        PUSHSTACKTRACE( t19214 );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            ib_2dmisc_s_2dupdate_41a64476( toollib_2dmisc__2asettings_2a_v, 
                                                           v13641, 
                                                           p13642 ) ) );
}

DEFTSCP( ib_2dmisc_dremove_2a_86ffda08_v );
DEFCSTRING( t19216, "*SETTINGS-REMOVE*" );

TSCP  ib_2dmisc_dremove_2a_86ffda08( p13644 )
        TSCP  p13644;
{
        PUSHSTACKTRACE( t19216 );
        POPSTACKTRACE( SET( toollib_2dmisc__2asettings_2a_v, 
                            ib_2dmisc_s_2dremove_b1036c3e( toollib_2dmisc__2asettings_2a_v, 
                                                           p13644 ) ) );
}

DEFTSCP( toollib_2dmisc_list_2dmean_v );
DEFCSTRING( t19218, "LIST-MEAN" );
EXTERNTSCPP( qobischeme_k_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_k_2av_v );
EXTERNTSCPP( qobischeme_reduce, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_v );
EXTERNTSCPP( qobischeme_v_2b, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_2b_v );
EXTERNTSCPP( qobischeme__2b, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2b_v );

TSCP  toollib_2dmisc_list_2dmean( p13646 )
        TSCP  p13646;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19218 );
        if  ( EQ( TSCPTAG( p13646 ), PAIRTAG ) )  goto L19223;
        scrt1__24__car_2derror( p13646 );
L19223:
        X1 = PAIR_CAR( p13646 );
        if  ( NOT( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )
            )  goto L19220;
        X2 = scrt1_length( p13646 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X2 = qobischeme_reduce( qobischeme_v_2b_v, 
                                p13646, _TSCP( 0 ) );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
L19220:
        X1 = qobischeme_reduce( qobischeme__2b_v, 
                                p13646, _TSCP( 0 ) );
        X2 = scrt1_length( p13646 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_covariance_14dd252a_v );
DEFCSTRING( t19225, "LIST-COVARIANCE" );
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

TSCP  ib_2dmisc_covariance_14dd252a( l13660 )
        TSCP  l13660;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19225 );
        X1 = toollib_2dmisc_list_2dmean( l13660 );
        X3 = scrt1_length( l13660 );
        X2 = qobischeme__2f_2dtwo( _TSCP( 4 ), X3 );
        X5 = l13660;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L19229:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L19230;
        X4 = X6;
        goto L19238;
L19230:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19233;
        scrt1__24__car_2derror( X5 );
L19233:
        X10 = PAIR_CAR( X5 );
        X11 = qobischeme_v_2d( X10, X1 );
        X9 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L19237;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L19229 );
L19237:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19242;
        scdebug_error( c13505, 
                       c13506, CONS( X7, EMPTYLIST ) );
L19242:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L19229 );
L19238:
        X3 = qobischeme_reduce( qobischeme_m_2b_v, X4, FALSEVALUE );
        POPSTACKTRACE( qobischeme_k_2am( X2, X3 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_82eaae76_v );
DEFCSTRING( t19244, "LIST-VARIANCE" );
EXTERNTSCPP( qobischeme_sqr, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqr_v );

TSCP  ib_2dmisc_2dvariance_82eaae76( s13711 )
        TSCP  s13711;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19244 );
        X1 = toollib_2dmisc_list_2dmean( s13711 );
        X4 = s13711;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L19248:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19249;
        X3 = X5;
        goto L19257;
L19249:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19252;
        scrt1__24__car_2derror( X4 );
L19252:
        X9 = PAIR_CAR( X4 );
        X10 = qobischeme__2d_2dtwo( X9, X1 );
        X8 = qobischeme_sqr( X10 );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L19256;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L19248 );
L19256:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L19261;
        scdebug_error( c13505, 
                       c13506, CONS( X6, EMPTYLIST ) );
L19261:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L19248 );
L19257:
        X2 = qobischeme_reduce( qobischeme__2b_v, X3, _TSCP( 0 ) );
        X3 = scrt1_length( s13711 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X2, X3 ) );
}

DEFTSCP( ib_2dmisc_2dskewness_4559bc2b_v );
DEFCSTRING( t19263, "LIST-SKEWNESS" );
EXTERNTSCPP( qobischeme_expt, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_expt_v );

TSCP  ib_2dmisc_2dskewness_4559bc2b( l13765 )
        TSCP  l13765;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19263 );
        X1 = ib_2dmisc_2dvariance_82eaae76( l13765 );
        X2 = toollib_2dmisc_list_2dmean( l13765 );
        X5 = scrt1_length( l13765 );
        X4 = qobischeme__2f_2dtwo( _TSCP( 4 ), X5 );
        X7 = l13765;
        X8 = EMPTYLIST;
        X9 = EMPTYLIST;
L19267:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L19268;
        X6 = X8;
        goto L19276;
L19268:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19271;
        scrt1__24__car_2derror( X7 );
L19271:
        X12 = PAIR_CAR( X7 );
        X13 = qobischeme__2d_2dtwo( X12, X2 );
        X11 = qobischeme_expt( X13, _TSCP( 12 ) );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L19275;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L19267 );
L19275:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19280;
        scdebug_error( c13505, 
                       c13506, CONS( X9, EMPTYLIST ) );
L19280:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L19267 );
L19276:
        X5 = qobischeme_reduce( qobischeme__2b_v, X6, _TSCP( 0 ) );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        X5 = qobischeme__2f_2dtwo( _TSCP( 12 ), _TSCP( 8 ) );
        X4 = qobischeme_expt( X1, X5 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X3, X4 ) );
}

DEFTSCP( ib_2dmisc_2dkurtosis_94af7ba9_v );
DEFCSTRING( t19282, "LIST-KURTOSIS" );

TSCP  ib_2dmisc_2dkurtosis_94af7ba9( l13831 )
        TSCP  l13831;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19282 );
        X1 = ib_2dmisc_2dvariance_82eaae76( l13831 );
        X2 = toollib_2dmisc_list_2dmean( l13831 );
        X6 = scrt1_length( l13831 );
        X5 = qobischeme__2f_2dtwo( _TSCP( 4 ), X6 );
        X8 = l13831;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L19286:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L19287;
        X7 = X9;
        goto L19295;
L19287:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19290;
        scrt1__24__car_2derror( X8 );
L19290:
        X13 = PAIR_CAR( X8 );
        X14 = qobischeme__2d_2dtwo( X13, X2 );
        X12 = qobischeme_expt( X14, _TSCP( 16 ) );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L19294;
        X12 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X12;
        GOBACK( L19286 );
L19294:
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19299;
        scdebug_error( c13505, 
                       c13506, CONS( X10, EMPTYLIST ) );
L19299:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X12;
        GOBACK( L19286 );
L19295:
        X6 = qobischeme_reduce( qobischeme__2b_v, X7, _TSCP( 0 ) );
        X4 = qobischeme__2a_2dtwo( X5, X6 );
        X5 = qobischeme_sqr( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( X3, _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_orrelation_e415d63c_v );
DEFCSTRING( t19301, "LIST-CORRELATION" );
EXTERNTSCPP( qobischeme_sqrt, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sqrt_v );

TSCP  ib_2dmisc_orrelation_e415d63c( l13896, l13897 )
        TSCP  l13896, l13897;
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

        PUSHSTACKTRACE( t19301 );
        X2 = ib_2dmisc_2dvariance_82eaae76( l13897 );
        X1 = qobischeme_sqrt( X2 );
        X3 = ib_2dmisc_2dvariance_82eaae76( l13896 );
        X2 = qobischeme_sqrt( X3 );
        X3 = toollib_2dmisc_list_2dmean( l13897 );
        X4 = toollib_2dmisc_list_2dmean( l13896 );
        X7 = l13896;
        X8 = l13897;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L19305:
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L19306;
        X6 = X9;
        goto L19317;
L19306:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19309;
        scrt1__24__car_2derror( X8 );
L19309:
        X13 = PAIR_CAR( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19312;
        scrt1__24__car_2derror( X7 );
L19312:
        X14 = PAIR_CAR( X7 );
        X15 = qobischeme__2d_2dtwo( X14, X4 );
        X16 = qobischeme__2d_2dtwo( X13, X3 );
        X12 = qobischeme__2a_2dtwo( X15, X16 );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L19316;
        X12 = PAIR_CDR( X7 );
        X13 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X13;
        X7 = X12;
        GOBACK( L19305 );
L19316:
        X12 = PAIR_CDR( X7 );
        X13 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L19323;
        scdebug_error( c13505, 
                       c13506, CONS( X10, EMPTYLIST ) );
L19323:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X13;
        X7 = X12;
        GOBACK( L19305 );
L19317:
        X5 = qobischeme_reduce( qobischeme__2b_v, X6, _TSCP( 0 ) );
        X8 = scrt1_length( l13896 );
        X7 = qobischeme__2d_2dtwo( X8, _TSCP( 4 ) );
        X8 = qobischeme__2a_2dtwo( X2, X1 );
        X6 = qobischeme__2a_2dtwo( X7, X8 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X5, X6 ) );
}

DEFTSCP( toollib_2dmisc_vector_2dmean_v );
DEFCSTRING( t19325, "VECTOR-MEAN" );
EXTERNTSCPP( qobischeme_reduce_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_reduce_2dvector_v );

TSCP  toollib_2dmisc_vector_2dmean( v13985 )
        TSCP  v13985;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19325 );
        X1 = qobischeme_reduce_2dvector( qobischeme__2b_v, 
                                         v13985, _TSCP( 0 ) );
        if  ( AND( EQ( TSCPTAG( v13985 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v13985 ), VECTORTAG ) )
            )  goto L19328;
        scdebug_error( c13418, 
                       c13403, CONS( v13985, EMPTYLIST ) );
L19328:
        X2 = C_FIXED( VECTOR_LENGTH( v13985 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_3a32caa5_v );
DEFCSTRING( t19330, "VECTOR-VARIANCE" );
EXTERNTSCPP( obischeme_e_2dvector_6be5ec0a, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_e_2dvector_6be5ec0a_v );

TSCP  toollib_2dmisc_l14000( s14001, c19333 )
        TSCP  s14001, c19333;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14000 [inside VECTOR-VARIANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19333, 0 );
        X3 = qobischeme__2d_2dtwo( s14001, DISPLAY( 0 ) );
        X2 = qobischeme_sqr( X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dvariance_3a32caa5( v13994 )
        TSCP  v13994;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19330 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v13994 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14000, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X1 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X2, v13994, EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( v13994 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v13994 ), VECTORTAG ) )
            )  goto L19336;
        scdebug_error( c13418, 
                       c13403, CONS( v13994, EMPTYLIST ) );
L19336:
        X2 = C_FIXED( VECTOR_LENGTH( v13994 ) );
        SDVAL = qobischeme__2f_2dtwo( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2dskewness_fd81d8f8_v );
DEFCSTRING( t19338, "VECTOR-SKEWNESS" );

TSCP  toollib_2dmisc_l14027( e14028, c19344 )
        TSCP  e14028, c19344;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14027 [inside VECTOR-SKEWNESS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19344, 0 );
        X3 = qobischeme__2d_2dtwo( e14028, DISPLAY( 0 ) );
        X2 = qobischeme_expt( X3, _TSCP( 12 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dskewness_fd81d8f8( v14010 )
        TSCP  v14010;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19338 );
        X1 = ib_2dmisc_2dvariance_3a32caa5( v14010 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14010 );
        if  ( AND( EQ( TSCPTAG( v14010 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14010 ), VECTORTAG ) )
            )  goto L19342;
        scdebug_error( c13418, 
                       c13403, CONS( v14010, EMPTYLIST ) );
L19342:
        X4 = C_FIXED( VECTOR_LENGTH( v14010 ) );
        X3 = qobischeme__2f_2dtwo( _TSCP( 4 ), X4 );
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14027, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X4 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X5, v14010, EMPTYLIST );
        X2 = qobischeme__2a_2dtwo( X3, X4 );
        X4 = qobischeme__2f_2dtwo( _TSCP( 12 ), _TSCP( 8 ) );
        X3 = qobischeme_expt( X1, X4 );
        SDVAL = qobischeme__2f_2dtwo( X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2dkurtosis_2c771f7a_v );
DEFCSTRING( t19346, "VECTOR-KURTOSIS" );

TSCP  toollib_2dmisc_l14056( e14057, c19352 )
        TSCP  e14057, c19352;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14056 [inside VECTOR-KURTOSIS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19352, 0 );
        X3 = qobischeme__2d_2dtwo( e14057, DISPLAY( 0 ) );
        X2 = qobischeme_expt( X3, _TSCP( 16 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dkurtosis_2c771f7a( v14036 )
        TSCP  v14036;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19346 );
        X1 = ib_2dmisc_2dvariance_3a32caa5( v14036 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14036 );
        if  ( AND( EQ( TSCPTAG( v14036 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14036 ), VECTORTAG ) )
            )  goto L19350;
        scdebug_error( c13418, 
                       c13403, CONS( v14036, EMPTYLIST ) );
L19350:
        X5 = C_FIXED( VECTOR_LENGTH( v14036 ) );
        X4 = qobischeme__2f_2dtwo( _TSCP( 4 ), X5 );
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14056, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X5 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X6, v14036, EMPTYLIST );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        X4 = qobischeme_sqr( X1 );
        X2 = qobischeme__2f_2dtwo( X3, X4 );
        SDVAL = qobischeme__2d_2dtwo( X2, _TSCP( 12 ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_orrelation_e243a9a8_v );
DEFCSTRING( t19354, "VECTOR-CORRELATION" );

TSCP  toollib_2dmisc_l14072( v14073, v14074, c19357 )
        TSCP  v14073, v14074, c19357;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14072 [inside VECTOR-CORRELATION]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19357, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19357, 1 );
        X4 = qobischeme__2d_2dtwo( v14073, DISPLAY( 1 ) );
        X5 = qobischeme__2d_2dtwo( v14074, DISPLAY( 0 ) );
        X3 = qobischeme__2a_2dtwo( X4, X5 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_orrelation_e243a9a8( v14062, v14063 )
        TSCP  v14062, v14063;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19354 );
        X2 = ib_2dmisc_2dvariance_3a32caa5( v14063 );
        X1 = qobischeme_sqrt( X2 );
        X3 = ib_2dmisc_2dvariance_3a32caa5( v14062 );
        X2 = qobischeme_sqrt( X3 );
        DISPLAY( 0 ) = toollib_2dmisc_vector_2dmean( v14063 );
        DISPLAY( 1 ) = toollib_2dmisc_vector_2dmean( v14062 );
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l14072, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                            _TSCP( 0 ), 
                                            X4, 
                                            v14062, 
                                            CONS( v14063, EMPTYLIST ) );
        X6 = scrt1_length( v14062 );
        X5 = qobischeme__2d_2dtwo( X6, _TSCP( 4 ) );
        X6 = qobischeme__2a_2dtwo( X2, X1 );
        X4 = qobischeme__2a_2dtwo( X5, X6 );
        SDVAL = qobischeme__2f_2dtwo( X3, X4 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_bimodality_dba868a3_v );
DEFCSTRING( t19359, "COEFFICIENT-OF-BIMODALITY" );
EXTERNTSCPP( scrt1_list_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_3f_v );
EXTERNTSCPP( qobischeme_fuck_2dup, XAL0(  ) );
EXTERNTSCP( qobischeme_fuck_2dup_v );

TSCP  ib_2dmisc_bimodality_dba868a3( v14094 )
        TSCP  v14094;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19359 );
        if  ( FALSE( scrt1_list_3f( v14094 ) ) )  goto L19361;
        X3 = ib_2dmisc_2dskewness_4559bc2b( v14094 );
        X2 = qobischeme_sqr( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        X3 = ib_2dmisc_2dkurtosis_94af7ba9( v14094 );
        X2 = qobischeme__2b_2dtwo( X3, _TSCP( 12 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L19361:
        if  ( NOT( AND( EQ( TSCPTAG( v14094 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( v14094 ), 
                            VECTORTAG ) ) ) )  goto L19363;
        X3 = ib_2dmisc_2dskewness_fd81d8f8( v14094 );
        X2 = qobischeme_sqr( X3 );
        X1 = qobischeme__2b_2dtwo( _TSCP( 4 ), X2 );
        X3 = ib_2dmisc_2dkurtosis_2c771f7a( v14094 );
        X2 = qobischeme__2b_2dtwo( X3, _TSCP( 12 ) );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L19363:
        POPSTACKTRACE( qobischeme_fuck_2dup(  ) );
}

DEFTSCP( toollib_2dmisc_vectors_2dmean_v );
DEFCSTRING( t19365, "VECTORS-MEAN" );

TSCP  toollib_2dmisc_vectors_2dmean( v14116 )
        TSCP  v14116;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19365 );
        if  ( AND( EQ( TSCPTAG( v14116 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14116 ), VECTORTAG ) )
            )  goto L19368;
        scdebug_error( c13418, 
                       c13403, CONS( v14116, EMPTYLIST ) );
L19368:
        X2 = C_FIXED( VECTOR_LENGTH( v14116 ) );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X2 = qobischeme_reduce_2dvector( qobischeme_v_2b_v, 
                                         v14116, FALSEVALUE );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_2dvariance_54d102bf_v );
DEFCSTRING( t19370, "VECTORS-VARIANCE" );
EXTERNTSCPP( qobischeme_map_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dvector_v );

TSCP  toollib_2dmisc_l14134( v14135, c19375 )
        TSCP  v14135, c19375;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14134 [inside VECTORS-VARIANCE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19375, 0 );
        X3 = qobischeme_v_2d( v14135, DISPLAY( 0 ) );
        X2 = obischeme__2dproduct_d0bc63f0( qobischeme__2a_v, X3 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2dvariance_54d102bf( m14125, v14126 )
        TSCP  m14125, v14126;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19370 );
        DISPLAY( 0 ) = m14125;
        if  ( AND( EQ( TSCPTAG( v14126 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v14126 ), VECTORTAG ) )
            )  goto L19373;
        scdebug_error( c13418, 
                       c13403, CONS( v14126, EMPTYLIST ) );
L19373:
        X2 = C_FIXED( VECTOR_LENGTH( v14126 ) );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), X2 );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14134, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X3 = qobischeme_map_2dvector( X4, v14126, EMPTYLIST );
        X2 = qobischeme_reduce_2dvector( qobischeme_m_2b_v, 
                                         X3, FALSEVALUE );
        SDVAL = qobischeme_k_2am( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2ddistance_971fca4c_v );
DEFCSTRING( t19377, "MAHALANOBIS-DISTANCE" );
EXTERNTSCPP( qobischeme_dot, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_dot_v );
EXTERNTSCPP( qobischeme_m_2av, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2av_v );
EXTERNTSCPP( qobischeme_negative_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_negative_3f_v );
EXTERNTSCPP( scrt2_abs, XAL1( TSCP ) );
EXTERNTSCP( scrt2_abs_v );

TSCP  ib_2dmisc_2ddistance_971fca4c( v14137, m14138, i14139 )
        TSCP  v14137, m14138, i14139;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t19377 );
        X1 = qobischeme_v_2d( v14137, m14138 );
        X4 = qobischeme_m_2av( i14139, X1 );
        X3 = qobischeme_dot( X1, X4 );
        if  ( NEQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L19381;
        if  ( FALSE( qobischeme_negative_3f( X3 ) ) )  goto L19383;
        X2 = _TSCP( INEGATE( _S2CINT( X3 ) ) );
        goto L19382;
L19383:
        X2 = X3;
        goto L19382;
L19381:
        X2 = scrt2_abs( X3 );
L19382:
        POPSTACKTRACE( qobischeme_sqrt( X2 ) );
}

DEFTSCP( toollib_2dmisc_frequencies_v );
DEFCSTRING( t19385, "FREQUENCIES" );
EXTERNTSCPP( qobischeme_count, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_count_v );
EXTERNTSCPP( scrt1_remove, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_remove_v );

TSCP  toollib_2dmisc_frequencies( l14149 )
        TSCP  l14149;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19385 );
        X1 = EMPTYLIST;
        X2 = l14149;
L19388:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19389;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19392;
        scrt1__24__car_2derror( X2 );
L19392:
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
        GOBACK( L19388 );
L19389:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_sublist_3f_66fdafb3_v );
DEFCSTRING( t19396, "INITIAL-SUBLIST?" );

TSCP  ib_2dmisc_sublist_3f_66fdafb3( r14176, l14177 )
        TSCP  r14176, l14177;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19396 );
        X2 = scrt1_length( r14176 );
        X3 = scrt1_length( l14177 );
        X1 = qobischeme__3e_2dtwo( X2, X3 );
        if  ( FALSE( X1 ) )  goto L19399;
        X2 = l14177;
        X3 = r14176;
L19402:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19403;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19406;
        scrt1__24__car_2derror( X2 );
L19406:
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19409;
        scrt1__24__car_2derror( X3 );
L19409:
        X6 = PAIR_CAR( X3 );
        X4 = scrt1_equal_3f( X5, X6 );
        if  ( FALSE( X4 ) )  goto L19412;
        X5 = PAIR_CDR( X2 );
        X3 = PAIR_CDR( X3 );
        X2 = X5;
        GOBACK( L19402 );
L19412:
        POPSTACKTRACE( X4 );
L19403:
        POPSTACKTRACE( TRUEVALUE );
L19399:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_p_2dleaf_3f_v );
DEFCSTRING( t19416, "P-LEAF?" );
EXTERNTSCPP( qobischeme_every, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_every_v );
EXTERNTSCPP( scrt2_symbol_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_symbol_3f_v );

TSCP  toollib_2dmisc_p_2dleaf_3f( l14219 )
        TSCP  l14219;
{
        PUSHSTACKTRACE( t19416 );
        POPSTACKTRACE( qobischeme_every( scrt2_symbol_3f_v, 
                                         l14219, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_ip_2dleaf_3f_v );
DEFCSTRING( t19418, "IP-LEAF?" );
EXTERNTSCPP( toollib_2dmisc_drop_2duntil, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_drop_2duntil_v );
EXTERNTSCPP( scrt4_vector_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_3f_v );
EXTERNTSCPP( toollib_2dmisc_take_2duntil, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_take_2duntil_v );

TSCP  toollib_2dmisc_ip_2dleaf_3f( l14221 )
        TSCP  l14221;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19418 );
        X1 = toollib_2dmisc_drop_2duntil( scrt4_vector_3f_v, l14221 );
        X2 = toollib_2dmisc_take_2duntil( scrt4_vector_3f_v, l14221 );
        X3 = qobischeme_every( scrt2_symbol_3f_v, X2, EMPTYLIST );
        if  ( FALSE( X3 ) )  goto L19422;
        POPSTACKTRACE( qobischeme_every( scrt4_vector_3f_v, 
                                         X1, EMPTYLIST ) );
L19422:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_index_2dleaves_v );
DEFCSTRING( t19424, "INDEX-LEAVES" );
EXTERNTSCPP( scrt4_list_2d_3evector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_list_2d_3evector_v );
EXTERNTSCP( qobischeme_fail_v );
EXTERNTSCPP( qobischeme_set_2dfail_21, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_set_2dfail_21_v );

TSCP  toollib_2dmisc_l14243( c19436 )
        TSCP  c19436;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14243 [inside INDEX-LEAVES]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c19436, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c19436, 1 );
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

TSCP  toollib_2dmisc_l14239( r14240, c19433 )
        TSCP  r14240, c19433;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l14239 [inside INDEX-LEAVES]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19433, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19433, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19433, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c19433, 3 );
        DISPLAY( 4 ) = r14240;
        DISPLAY( 5 ) = qobischeme_fail_v;
        X6 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l14243, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_set_2dfail_21( X6 );
        X11 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L19439;
        scrt1__24__cdr_2derror( X11 );
L19439:
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

TSCP  toollib_2dmisc_index_2dleaves( t14230, l14231, p14232 )
        TSCP  t14230, l14231, p14232;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19424 );
        DISPLAY( 0 ) = t14230;
        DISPLAY( 1 ) = l14231;
        DISPLAY( 2 ) = p14232;
        X1 = DISPLAY( 1 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 0 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L19426;
        X3 = scrt4_list_2d_3evector( DISPLAY( 2 ) );
        X2 = sc_cons( X3, EMPTYLIST );
        X1 = X2;
        SDVAL = scrt1_append_2dtwo( DISPLAY( 0 ), X1 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
L19426:
        X2 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19430;
        scrt1__24__car_2derror( X2 );
L19430:
        X1 = PAIR_CAR( X2 );
        DISPLAY( 3 ) = EMPTYLIST;
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14239, 
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
DEFCSTRING( t19442, "TREE->LEAVES" );

TSCP  toollib_2dmisc_l14269( c19453 )
        TSCP  c19453;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14269 [inside TREE->LEAVES]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c19453, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c19453, 1 );
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
EXTERNTSCPP( toollib_2dmisc_l14260, XAL1( TSCP ) );

TSCP  toollib_2dmisc_l14265( r14266, c19450 )
        TSCP  r14266, c19450;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l14265 [inside TREE->LEAVES]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c19450, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19450, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19450, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c19450, 3 );
        DISPLAY( 4 ) = r14266;
        DISPLAY( 5 ) = qobischeme_fail_v;
        X6 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l14269, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ) ) );
        qobischeme_set_2dfail_21( X6 );
        X8 = qobischeme_a_2dmember_2dof( DISPLAY( 2 ) );
        if  ( FALSE( scrt1_list_3f( X8 ) ) )  goto L19456;
        X9 = DISPLAY( 0 );
        X9 = UNKNOWNCALL( X9, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X9 ) )( X8, 
                                                  PROCEDURE_CLOSURE( X9 ) ) )
            )  goto L19458;
        X9 = sc_cons( X8, PAIR_CAR( DISPLAY( 1 ) ) );
        X7 = SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X9 );
        goto L19457;
L19458:
        X7 = toollib_2dmisc_l14260( X8 );
        goto L19457;
L19456:
        X9 = qobischeme_fail_v;
        X9 = UNKNOWNCALL( X9, 0 );
        X7 = VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L19457:
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

TSCP  toollib_2dmisc_l14260( t14262 )
        TSCP  t14262;
{
        TSCP  X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOOP [inside TREE->LEAVES]" );
        DISPLAY( 2 ) = t14262;
        DISPLAY( 3 ) = EMPTYLIST;
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14265, 
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

TSCP  ib_2dmisc_d_3eleaves_f440aa79( t14253, l14254 )
        TSCP  t14253, l14254;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19442 );
        DISPLAY( 0 ) = l14254;
        DISPLAY( 1 ) = EMPTYLIST;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X1 = DISPLAY( 0 );
        X1 = UNKNOWNCALL( X1, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( t14253, 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L19445;
        X1 = sc_cons( t14253, PAIR_CAR( DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X1 );
        goto L19446;
L19445:
        toollib_2dmisc_l14260( t14253 );
L19446:
        SDVAL = scrt1_reverse( PAIR_CAR( DISPLAY( 1 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_make_2dzipper_v );
DEFCSTRING( t19460, "MAKE-ZIPPER" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );

TSCP  toollib_2dmisc_make_2dzipper( t14273, t14274 )
        TSCP  t14273, t14274;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19460 );
        X1 = sc_make_2dvector( _TSCP( 12 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L19464;
        scdebug_error( c14283, 
                       c13403, CONS( X1, EMPTYLIST ) );
L19464:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19466;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19466:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19468;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19468:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c14289 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19471;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19471:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19473;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19473:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), t14273 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19476;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19476:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L19478;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19478:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), t14274 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_zipper_3f_v );
DEFCSTRING( t19480, "ZIPPER?" );

TSCP  toollib_2dmisc_zipper_3f( o14313 )
        TSCP  o14313;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19480 );
        if  ( NOT( AND( EQ( TSCPTAG( o14313 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o14313 ), 
                            VECTORTAG ) ) ) )  goto L19482;
        X2 = C_FIXED( VECTOR_LENGTH( o14313 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 12 ) );
        if  ( FALSE( X1 ) )  goto L19486;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19489;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19489:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o14313 ) ) ) )  goto L19491;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19491:
        X2 = VECTOR_ELEMENT( o14313, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c14289 ) ) ) );
L19486:
        POPSTACKTRACE( X1 );
L19482:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dtree_21_edaf9ba0_v );
DEFCSTRING( t19493, "LOCAL-SET-ZIPPER-TREE!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  ib_2dmisc__2dtree_21_edaf9ba0( t14345, o14346 )
        TSCP  t14345, o14346;
{
        PUSHSTACKTRACE( t19493 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14345 ) ) )  goto L19495;
        qobischeme_panic( c14347, EMPTYLIST );
L19495:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t14345, 
                                                      _TSCP( 4 ), 
                                                      o14346 ) );
}

DEFTSCP( toollib_2dmisc_zipper_2dtree_v );
DEFCSTRING( t19497, "ZIPPER-TREE" );

TSCP  toollib_2dmisc_zipper_2dtree( t14349 )
        TSCP  t14349;
{
        PUSHSTACKTRACE( t19497 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14349 ) ) )  goto L19499;
        qobischeme_panic( c14350, EMPTYLIST );
L19499:
        if  ( AND( EQ( TSCPTAG( t14349 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14349 ), VECTORTAG ) )
            )  goto L19502;
        scdebug_error( c13402, 
                       c13403, CONS( t14349, EMPTYLIST ) );
L19502:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19504;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19504:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14349 ) ) ) )  goto L19506;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19506:
        POPSTACKTRACE( VECTOR_ELEMENT( t14349, _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc__2dtree_21_d6235974_v );
DEFCSTRING( t19508, "SET-ZIPPER-TREE!" );

TSCP  ib_2dmisc__2dtree_21_d6235974( t14362, o14363 )
        TSCP  t14362, o14363;
{
        PUSHSTACKTRACE( t19508 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14362 ) ) )  goto L19510;
        qobischeme_panic( c14364, EMPTYLIST );
L19510:
        if  ( AND( EQ( TSCPTAG( t14362 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14362 ), VECTORTAG ) )
            )  goto L19513;
        scdebug_error( c14283, 
                       c13403, CONS( t14362, EMPTYLIST ) );
L19513:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19515;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19515:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14362 ) ) ) )  goto L19517;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19517:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t14362, _TSCP( 4 ) ), 
                               o14363 ) );
}

DEFTSCP( ib_2dmisc_dthread_21_884870d1_v );
DEFCSTRING( t19519, "LOCAL-SET-ZIPPER-THREAD!" );

TSCP  ib_2dmisc_dthread_21_884870d1( t14377, o14378 )
        TSCP  t14377, o14378;
{
        PUSHSTACKTRACE( t19519 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14377 ) ) )  goto L19521;
        qobischeme_panic( c14379, EMPTYLIST );
L19521:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t14377, 
                                                      _TSCP( 8 ), 
                                                      o14378 ) );
}

DEFTSCP( ib_2dmisc_r_2dthread_bdbb94d4_v );
DEFCSTRING( t19523, "ZIPPER-THREAD" );

TSCP  ib_2dmisc_r_2dthread_bdbb94d4( t14381 )
        TSCP  t14381;
{
        PUSHSTACKTRACE( t19523 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14381 ) ) )  goto L19525;
        qobischeme_panic( c14382, EMPTYLIST );
L19525:
        if  ( AND( EQ( TSCPTAG( t14381 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14381 ), VECTORTAG ) )
            )  goto L19528;
        scdebug_error( c13402, 
                       c13403, CONS( t14381, EMPTYLIST ) );
L19528:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19530;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19530:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14381 ) ) ) )  goto L19532;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19532:
        POPSTACKTRACE( VECTOR_ELEMENT( t14381, _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_dthread_21_1876e8da_v );
DEFCSTRING( t19534, "SET-ZIPPER-THREAD!" );

TSCP  ib_2dmisc_dthread_21_1876e8da( t14394, o14395 )
        TSCP  t14394, o14395;
{
        PUSHSTACKTRACE( t19534 );
        if  ( TRUE( toollib_2dmisc_zipper_3f( t14394 ) ) )  goto L19536;
        qobischeme_panic( c14396, EMPTYLIST );
L19536:
        if  ( AND( EQ( TSCPTAG( t14394 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t14394 ), VECTORTAG ) )
            )  goto L19539;
        scdebug_error( c14283, 
                       c13403, CONS( t14394, EMPTYLIST ) );
L19539:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19541;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19541:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t14394 ) ) ) )  goto L19543;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19543:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t14394, _TSCP( 8 ) ), 
                               o14395 ) );
}

DEFTSCP( ib_2dmisc_initialize_b0401efa_v );
DEFCSTRING( t19545, "ZIPPER:INITIALIZE" );

TSCP  ib_2dmisc_initialize_b0401efa( t14409 )
        TSCP  t14409;
{
        PUSHSTACKTRACE( t19545 );
        POPSTACKTRACE( toollib_2dmisc_make_2dzipper( t14409, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc__3adescend_aaeaab15_v );
DEFCSTRING( t19547, "ZIPPER:DESCEND" );
EXTERNTSCPP( qobischeme__3c_3d, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3c_3d_v );
EXTERNTSCPP( qobischeme_map_2dindexed, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dindexed_v );

TSCP  toollib_2dmisc_l14419( e14420, j14421, c19552 )
        TSCP  e14420, j14421, c19552;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14419 [inside ZIPPER:DESCEND]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19552, 0 );
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 0 ), j14421 ) )
            )  goto L19554;
        X2 = FALSEVALUE;
        goto L19555;
L19554:
        X2 = e14420;
L19555:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc__3adescend_aaeaab15( z14411, i14412 )
        TSCP  z14411, i14412;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19547 );
        DISPLAY( 0 ) = i14412;
        X3 = toollib_2dmisc_zipper_2dtree( z14411 );
        X2 = scrt1_length( X3 );
        X1 = CONS( qobischeme__2d_2dtwo( X2, _TSCP( 4 ) ), 
                   EMPTYLIST );
        X1 = CONS( DISPLAY( 0 ), X1 );
        if  ( TRUE( qobischeme__3c_3d( CONS( _TSCP( 0 ), X1 ) ) )
            )  goto L19549;
        qobischeme_panic( c14416, EMPTYLIST );
L19549:
        X2 = toollib_2dmisc_zipper_2dtree( z14411 );
        X1 = scrt1_list_2dref( X2, DISPLAY( 0 ) );
        X4 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l14419, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X5 = toollib_2dmisc_zipper_2dtree( z14411 );
        X3 = qobischeme_map_2dindexed( X4, X5 );
        X4 = ib_2dmisc_r_2dthread_bdbb94d4( z14411 );
        X2 = sc_cons( X3, X4 );
        SDVAL = toollib_2dmisc_make_2dzipper( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_r_3aascend_83fa263_v );
DEFCSTRING( t19556, "ZIPPER:ASCEND" );

TSCP  ib_2dmisc_r_3aascend_83fa263( z14426 )
        TSCP  z14426;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19556 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14426 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19558;
        qobischeme_panic( c14432, EMPTYLIST );
L19558:
        X3 = ib_2dmisc_r_2dthread_bdbb94d4( z14426 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19561;
        scrt1__24__car_2derror( X3 );
L19561:
        X2 = PAIR_CAR( X3 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L19565:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L19566;
        X1 = X4;
        goto L19576;
L19566:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19569;
        scrt1__24__car_2derror( X3 );
L19569:
        X8 = PAIR_CAR( X3 );
        if  ( FALSE( X8 ) )  goto L19572;
        X7 = X8;
        goto L19573;
L19572:
        X7 = toollib_2dmisc_zipper_2dtree( z14426 );
L19573:
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19575;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L19565 );
L19575:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19580;
        scdebug_error( c13505, 
                       c13506, CONS( X5, EMPTYLIST ) );
L19580:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L19565 );
L19576:
        X3 = ib_2dmisc_r_2dthread_bdbb94d4( z14426 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19583;
        scrt1__24__cdr_2derror( X3 );
L19583:
        X2 = PAIR_CDR( X3 );
        POPSTACKTRACE( toollib_2dmisc_make_2dzipper( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_cend_2dseq_c2837d94_v );
DEFCSTRING( t19585, "ZIPPER:DESCEND-SEQ" );

TSCP  ib_2dmisc_cend_2dseq_c2837d94( z14486, s14487 )
        TSCP  z14486, s14487;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t19585 );
        X1 = z14486;
        X2 = s14487;
L19588:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19589;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19592;
        scrt1__24__car_2derror( X2 );
L19592:
        X4 = PAIR_CAR( X2 );
        X3 = ib_2dmisc__3adescend_aaeaab15( z14486, X4 );
        X2 = PAIR_CDR( X2 );
        X1 = X3;
        GOBACK( L19588 );
L19589:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_ascend_2dn_ba70bf1b_v );
DEFCSTRING( t19595, "ZIPPER:ASCEND-N" );
EXTERNTSCPP( qobischeme__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3c_3d_2dtwo_v );

TSCP  ib_2dmisc_ascend_2dn_ba70bf1b( z14511, n14512 )
        TSCP  z14511, n14512;
{
        PUSHSTACKTRACE( t19595 );
L19596:
        if  ( TRUE( qobischeme__3c_3d_2dtwo( _TSCP( 0 ), n14512 ) )
            )  goto L19597;
        qobischeme_panic( c14516, EMPTYLIST );
L19597:
        if  ( EQ( _S2CUINT( n14512 ), 
                  _S2CUINT( _TSCP( 0 ) ) ) )  goto L19599;
        if  ( NEQ( _S2CUINT( n14512 ), 
                   _S2CUINT( _TSCP( 4 ) ) ) )  goto L19601;
        POPSTACKTRACE( ib_2dmisc_r_3aascend_83fa263( z14511 ) );
L19601:
        n14512 = qobischeme__2d_2dtwo( n14512, _TSCP( 4 ) );
        GOBACK( L19596 );
L19599:
        POPSTACKTRACE( z14511 );
}

DEFTSCP( ib_2dmisc_dascend_3f_f58e1843_v );
DEFCSTRING( t19603, "ZIPPER:CAN-ASCEND?" );

TSCP  ib_2dmisc_dascend_3f_f58e1843( z14529 )
        TSCP  z14529;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19603 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14529 );
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CUINT( X1 ), 
                                     _S2CUINT( EMPTYLIST ) ) ) );
}

DEFTSCP( ib_2dmisc_descend_3f_ec35a266_v );
DEFCSTRING( t19605, "ZIPPER:CAN-DESCEND?" );
EXTERNTSCPP( qobischeme_some, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_v );

TSCP  ib_2dmisc_descend_3f_ec35a266( z14536 )
        TSCP  z14536;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19605 );
        X1 = toollib_2dmisc_zipper_2dtree( z14536 );
        POPSTACKTRACE( qobischeme_some( scrt1_list_3f_v, 
                                        X1, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_nd_2duntil_229b5165_v );
DEFCSTRING( t19607, "ZIPPER:ASCEND-UNTIL" );

TSCP  ib_2dmisc_nd_2duntil_229b5165( z14538, p14539 )
        TSCP  z14538, p14539;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19607 );
        X1 = z14538;
L19610:
        X2 = p14539;
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( X1, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L19611;
        X1 = ib_2dmisc_r_3aascend_83fa263( z14538 );
        GOBACK( L19610 );
L19611:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_d_2dheight_6e8bfcbb_v );
DEFCSTRING( t19613, "ZIPPER:ASCEND-HEIGHT" );

TSCP  ib_2dmisc_d_2dheight_6e8bfcbb( z14547 )
        TSCP  z14547;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19613 );
        X1 = ib_2dmisc_r_2dthread_bdbb94d4( z14547 );
        POPSTACKTRACE( scrt1_length( X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dfloor_v );
DEFCSTRING( t19615, "MY-FLOOR" );
EXTERNTSCPP( qobischeme_primal_2a, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_primal_2a_v );

TSCP  toollib_2dmisc_my_2dfloor( a14549 )
        TSCP  a14549;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19615 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14549 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19621;
        if  ( AND( EQ( TSCPTAG( a14549 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14549 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19621;
        X2 = qobischeme_primal_2a( a14549 );
        POPSTACKTRACE( scrt2_floor( X2 ) );
L19621:
        POPSTACKTRACE( scrt2_floor( a14549 ) );
}

DEFTSCP( toollib_2dmisc_my_2dceiling_v );
DEFCSTRING( t19624, "MY-CEILING" );

TSCP  toollib_2dmisc_my_2dceiling( a14561 )
        TSCP  a14561;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19624 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14561 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19630;
        if  ( AND( EQ( TSCPTAG( a14561 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14561 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19630;
        X2 = qobischeme_primal_2a( a14561 );
        POPSTACKTRACE( scrt2_ceiling( X2 ) );
L19630:
        POPSTACKTRACE( scrt2_ceiling( a14561 ) );
}

DEFTSCP( toollib_2dmisc_my_2dround_v );
DEFCSTRING( t19633, "MY-ROUND" );

TSCP  toollib_2dmisc_my_2dround( a14573 )
        TSCP  a14573;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19633 );
        X1 = BOOLEAN( EQ( TSCPTAG( a14573 ), FIXNUMTAG ) );
        if  ( TRUE( X1 ) )  goto L19639;
        if  ( AND( EQ( TSCPTAG( a14573 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( a14573 ), 
                       DOUBLEFLOATTAG ) ) )  goto L19639;
        X2 = qobischeme_primal_2a( a14573 );
        POPSTACKTRACE( scrt2_round( X2 ) );
L19639:
        POPSTACKTRACE( scrt2_round( a14573 ) );
}

DEFTSCP( toollib_2dmisc_my_2dmax_v );
DEFCSTRING( t19642, "MY-MAX" );

TSCP  toollib_2dmisc_my_2dmax( a14585, b14586 )
        TSCP  a14585, b14586;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19642 );
        if  ( TRUE( qobischeme__3e_2dtwo( a14585, b14586 ) ) )  goto L19644;
        if  ( TRUE( qobischeme__3c_2dtwo( a14585, b14586 ) ) )  goto L19646;
        X1 = qobischeme__2b_2dtwo( a14585, b14586 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 8 ) ) );
L19646:
        POPSTACKTRACE( b14586 );
L19644:
        POPSTACKTRACE( a14585 );
}

DEFTSCP( toollib_2dmisc_my_2dmin_v );
DEFCSTRING( t19648, "MY-MIN" );

TSCP  toollib_2dmisc_my_2dmin( a14600, b14601 )
        TSCP  a14600, b14601;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19648 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), a14600 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), b14601 );
        X1 = toollib_2dmisc_my_2dmax( X2, X3 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dabs_v );
DEFCSTRING( t19650, "MY-ABS" );

TSCP  toollib_2dmisc_my_2dabs( a14612 )
        TSCP  a14612;
{
        PUSHSTACKTRACE( t19650 );
        if  ( TRUE( qobischeme__3e_2dtwo( a14612, _TSCP( 0 ) ) )
            )  goto L19652;
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), a14612 ) );
L19652:
        POPSTACKTRACE( a14612 );
}

DEFTSCP( ib_2dmisc_2dchks_2d2_dfd44528_v );
DEFCSTRING( t19654, "SMOOTH-MAX-CHKS-2" );
EXTERNTSCP( qobischeme_infinity_v );
EXTERNTSCP( qobischeme_minus_2dinfinity_v );
EXTERNTSCPP( obischeme__2d_3ereal_31985a7f, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme__2d_3ereal_31985a7f_v );

TSCP  toollib_2dmisc_l14691( a14692, b14693, c19685 )
        TSCP  a14692, b14693, c19685;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14691 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( b14693 );
}

TSCP  toollib_2dmisc_l14694( a14695, b14696, c19687 )
        TSCP  a14695, b14696, c19687;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14694 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  toollib_2dmisc_l14697( a14698, b14699, c19689 )
        TSCP  a14698, b14699, c19689;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14697 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 4 ) );
}

TSCP  toollib_2dmisc_l14682( a14683, b14684, c19691 )
        TSCP  a14683, b14684, c19691;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14682 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( a14683 );
}

TSCP  toollib_2dmisc_l14685( a14686, b14687, c19693 )
        TSCP  a14686, b14687, c19693;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14685 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 4 ) );
}

TSCP  toollib_2dmisc_l14688( a14689, b14690, c19695 )
        TSCP  a14689, b14690, c19695;
{
        PUSHSTACKTRACE( "toollib_2dmisc_l14688 [inside SMOOTH-MAX-CHKS-2]" );
        POPSTACKTRACE( _TSCP( 0 ) );
}

TSCP  ib_2dmisc_2dchks_2d2_dfd44528( a14620, b14621, t14622 )
        TSCP  a14620, b14621, t14622;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19654 );
        X2 = qobischeme__3d_2dtwo( qobischeme_infinity_v, a14620 );
        if  ( FALSE( X2 ) )  goto L19657;
        X1 = qobischeme__3d_2dtwo( qobischeme_infinity_v, b14621 );
        goto L19658;
L19657:
        X1 = X2;
L19658:
        if  ( TRUE( X1 ) )  goto L19663;
        X2 = qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                   a14620 );
        if  ( FALSE( X2 ) )  goto L19670;
        if  ( FALSE( qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                           b14621 ) ) )  goto L19670;
L19663:
        X2 = qobischeme__2b_2dtwo( b14621, t14622 );
        X1 = qobischeme__2b_2dtwo( a14620, X2 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, _TSCP( 8 ) ) );
L19670:
        X1 = qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                   a14620 );
        if  ( TRUE( X1 ) )  goto L19675;
        if  ( TRUE( qobischeme__3d_2dtwo( qobischeme_infinity_v, 
                                          b14621 ) ) )  goto L19675;
        X2 = qobischeme__3d_2dtwo( qobischeme_infinity_v, a14620 );
        if  ( TRUE( X2 ) )  goto L19682;
        if  ( TRUE( qobischeme__3d_2dtwo( qobischeme_minus_2dinfinity_v, 
                                          b14621 ) ) )  goto L19682;
        X7 = qobischeme__2d_2dtwo( a14620, b14621 );
        X6 = qobischeme_sqr( X7 );
        X7 = qobischeme_sqr( t14622 );
        X5 = qobischeme__2b_2dtwo( X6, X7 );
        X4 = qobischeme_sqrt( X5 );
        X5 = qobischeme__2b_2dtwo( a14620, b14621 );
        X3 = qobischeme__2b_2dtwo( X4, X5 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X3, _TSCP( 8 ) ) );
L19675:
        X1 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14691, EMPTYLIST );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14694, EMPTYLIST );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14697, EMPTYLIST );
        POPSTACKTRACE( obischeme__2d_3ereal_31985a7f( X1, 
                                                      X2, 
                                                      X3, 
                                                      a14620, b14621 ) );
L19682:
        X1 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14682, EMPTYLIST );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14685, EMPTYLIST );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l14688, EMPTYLIST );
        POPSTACKTRACE( obischeme__2d_3ereal_31985a7f( X1, 
                                                      X2, 
                                                      X3, 
                                                      a14620, b14621 ) );
}

DEFTSCP( ib_2dmisc_2dchks_2d2_66f2de59_v );
DEFCSTRING( t19697, "SMOOTH-MIN-CHKS-2" );

TSCP  ib_2dmisc_2dchks_2d2_66f2de59( a14710, b14711, t14712 )
        TSCP  a14710, b14711, t14712;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19697 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), a14710 );
        X3 = qobischeme__2d_2dtwo( _TSCP( 0 ), b14711 );
        X1 = ib_2dmisc_2dchks_2d2_dfd44528( X2, X3, t14712 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( _TSCP( 0 ), X1 ) );
}

DEFTSCP( toollib_2dmisc_my_2dadd_2dexp_v );
DEFCSTRING( t19699, "MY-ADD-EXP" );
EXTERNTSCP( obischeme_dprecision_ce156f5c_v );
EXTERNTSCPP( qobischeme_log, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_log_v );

TSCP  toollib_2dmisc_my_2dadd_2dexp( e14723, e14724 )
        TSCP  e14723, e14724;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19699 );
        X1 = toollib_2dmisc_my_2dmax( e14723, e14724 );
        X2 = toollib_2dmisc_my_2dmin( e14723, e14724 );
        X3 = toollib_2dmisc_my_2dfloor( X2 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, 
                                          qobischeme_minus_2dinfinity_v ) )
            )  goto L19704;
        X4 = qobischeme__2d_2dtwo( X1, X3 );
        if  ( TRUE( qobischeme__3e_2dtwo( X4, 
                                          obischeme_dprecision_ce156f5c_v ) )
            )  goto L19706;
        X7 = qobischeme__2d_2dtwo( X1, X3 );
        X6 = qobischeme_exp( X7 );
        X8 = qobischeme__2d_2dtwo( X2, X3 );
        X7 = qobischeme_exp( X8 );
        X5 = qobischeme__2b_2dtwo( X6, X7 );
        X4 = qobischeme_log( X5 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X4, X3 ) );
L19706:
        POPSTACKTRACE( X1 );
L19704:
        POPSTACKTRACE( qobischeme_minus_2dinfinity_v );
}

DEFTSCP( toollib_2dmisc_recip_2dexp_v );
DEFCSTRING( t19708, "RECIP-EXP" );

TSCP  toollib_2dmisc_recip_2dexp( e14753 )
        TSCP  e14753;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19708 );
        X1 = toollib_2dmisc_my_2dfloor( e14753 );
        X2 = qobischeme__2d_2dtwo( _TSCP( 0 ), X1 );
        if  ( TRUE( qobischeme__3e_2dtwo( X2, 
                                          obischeme_dprecision_ce156f5c_v ) )
            )  goto L19711;
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X1 );
        X4 = qobischeme_exp( X5 );
        X6 = qobischeme__2d_2dtwo( e14753, X1 );
        X5 = qobischeme_exp( X6 );
        X3 = qobischeme__2d_2dtwo( X4, X5 );
        X2 = qobischeme_log( X3 );
        POPSTACKTRACE( qobischeme__2b_2dtwo( X2, X1 ) );
L19711:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_window_2did_v );
DEFCSTRING( t19713, "WINDOW-ID" );
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

TSCP  toollib_2dmisc_window_2did( n14775 )
        TSCP  n14775;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19713 );
        X2 = CONS( qobischeme_getpid(  ), EMPTYLIST );
        X2 = CONS( qobischeme_getenv( c14782 ), X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14781, X2 ) );
        qobischeme_rm( X1 );
        X3 = CONS( X1, EMPTYLIST );
        X3 = CONS( n14775, X3 );
        X2 = scrt6_format( FALSEVALUE, CONS( c14778, X3 ) );
        scrt4_system( X2 );
        X3 = qobischeme_read_2dfile( X1 );
        X2 = qobischeme_first( X3 );
        qobischeme_rm( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( ib_2dmisc_cording_21_5bb4940f_v );
DEFCSTRING( t19717, "START-RECORDING!" );
EXTERNTSCP( qobischeme__2aprogram_2a_v );

TSCP  ib_2dmisc_cording_21_5bb4940f( f14784 )
        TSCP  f14784;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19717 );
        X2 = CONS( f14784, EMPTYLIST );
        X2 = CONS( toollib_2dmisc_window_2did( qobischeme__2aprogram_2a_v ), 
                   X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14785, X2 ) );
        POPSTACKTRACE( scrt4_system( X1 ) );
}

DEFTSCP( ib_2dmisc_ocation_21_cd203ece_v );
DEFCSTRING( t19719, "START-RECORDING-LOCATION!" );

TSCP  ib_2dmisc_ocation_21_cd203ece( f14787, 
                                     x14788, 
                                     y14789, w14790, h14791 )
        TSCP  f14787, x14788, y14789, w14790, h14791;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19719 );
        X2 = CONS( f14787, EMPTYLIST );
        X2 = CONS( h14791, X2 );
        X2 = CONS( w14790, X2 );
        X2 = CONS( y14789, X2 );
        X2 = CONS( x14788, X2 );
        X1 = scrt6_format( FALSEVALUE, CONS( c14792, X2 ) );
        POPSTACKTRACE( scrt4_system( X1 ) );
}

DEFTSCP( ib_2dmisc_cording_21_1421a7f0_v );
DEFCSTRING( t19721, "STOP-RECORDING!" );

TSCP  ib_2dmisc_cording_21_1421a7f0(  )
{
        PUSHSTACKTRACE( t19721 );
        POPSTACKTRACE( scrt4_system( c14794 ) );
}

DEFTSCP( ib_2dmisc_ation_2d3d_b4bc348b_v );
DEFCSTRING( t19723, "TRANSLATION-3D" );

TSCP  ib_2dmisc_ation_2d3d_b4bc348b( x14796, y14797, z14798 )
        TSCP  x14796, y14797, z14798;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19723 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( x14796, X4 );
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
        X5 = CONS( z14798, X5 );
        X5 = CONS( _TSCP( 4 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( y14797, X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_scaling_2d3d_v );
DEFCSTRING( t19725, "SCALING-3D" );

TSCP  toollib_2dmisc_scaling_2d3d( x14800, y14801, z14802 )
        TSCP  x14800, y14801, z14802;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19725 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( _TSCP( 0 ), X4 );
        X4 = CONS( _TSCP( 0 ), X4 );
        X3 = scrt1_cons_2a( x14800, CONS( _TSCP( 0 ), X4 ) );
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
        X5 = CONS( z14802, X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), CONS( y14801, X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_n_2d3d_2dx_13f7eadc_v );
DEFCSTRING( t19727, "ROTATION-3D-X" );
EXTERNTSCPP( qobischeme_cos, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_cos_v );
EXTERNTSCPP( qobischeme_sin, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_sin_v );

TSCP  ib_2dmisc_n_2d3d_2dx_13f7eadc( a14804 )
        TSCP  a14804;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19727 );
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
        X5 = CONS( qobischeme_cos( a14804 ), X5 );
        X6 = qobischeme_sin( a14804 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X6 ), 
                                  X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( qobischeme_sin( a14804 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( qobischeme_cos( a14804 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_n_2d3d_2dy_64f0da4a_v );
DEFCSTRING( t19729, "ROTATION-3D-Y" );

TSCP  ib_2dmisc_n_2d3d_2dy_64f0da4a( a14809 )
        TSCP  a14809;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19729 );
        X4 = qobischeme_cos( a14809 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( qobischeme_sin( a14809 ), X5 );
        X3 = scrt1_cons_2a( X4, CONS( _TSCP( 0 ), X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 4 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X6 = qobischeme_sin( a14809 );
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( _TSCP( 0 ), X6 );
        X6 = CONS( qobischeme_cos( a14809 ), X6 );
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
DEFCSTRING( t19731, "ROTATION-3D-Z" );

TSCP  ib_2dmisc_n_2d3d_2dz_fdf98bf0( a14814 )
        TSCP  a14814;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19731 );
        X4 = qobischeme_cos( a14814 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( _TSCP( 0 ), X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( qobischeme_sin( a14814 ), X5 ) );
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
        X6 = qobischeme_sin( a14814 );
        X5 = qobischeme__2d_2dtwo( _TSCP( 0 ), X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = CONS( _TSCP( 0 ), X6 );
        X6 = CONS( _TSCP( 0 ), X6 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( qobischeme_cos( a14814 ), X6 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_identity_2d3d_v );
DEFCSTRING( t19733, "IDENTITY-3D" );
DEFTSCP( ib_2dmisc_sform_2d3d_e2268f0e_v );
DEFCSTRING( t19734, "MAKE-TRANSFORM-3D" );
EXTERNTSCPP( qobischeme_m_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_m_2a_v );

TSCP  ib_2dmisc_sform_2d3d_e2268f0e( t14819, 
                                     p14820, 
                                     p14821, 
                                     x14822, y14823, z14824 )
        TSCP  t14819, 
              p14820, p14821, x14822, y14823, z14824;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19734 );
        X1 = ib_2dmisc_ation_2d3d_b4bc348b( x14822, y14823, z14824 );
        X4 = ib_2dmisc_n_2d3d_2dx_13f7eadc( t14819 );
        X5 = ib_2dmisc_n_2d3d_2dy_64f0da4a( p14820 );
        X3 = qobischeme_m_2a( X4, X5 );
        X4 = ib_2dmisc_n_2d3d_2dz_fdf98bf0( p14821 );
        X2 = qobischeme_m_2a( X3, X4 );
        POPSTACKTRACE( qobischeme_m_2a( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_homogenous_22fd274e_v );
DEFCSTRING( t19736, "POINT->HOMOGENOUS" );
EXTERNTSCPP( scrt4_vector_2d_3elist, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_2d_3elist_v );

TSCP  ib_2dmisc_homogenous_22fd274e( p14826 )
        TSCP  p14826;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19736 );
        X2 = scrt4_vector_2d_3elist( p14826 );
        X3 = scrt1_cons_2a( _TSCP( 4 ), 
                            CONS( EMPTYLIST, EMPTYLIST ) );
        X1 = scrt1_append_2dtwo( X2, X3 );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_2d_3epoint_9d37e6e9_v );
DEFCSTRING( t19738, "HOMOGENOUS->POINT" );
EXTERNTSCPP( qobischeme_subvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_subvector_v );

TSCP  ib_2dmisc_2d_3epoint_9d37e6e9( p14828 )
        TSCP  p14828;
{
        PUSHSTACKTRACE( t19738 );
        POPSTACKTRACE( qobischeme_subvector( p14828, 
                                             _TSCP( 0 ), _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_point_2d3d_50aa6438_v );
DEFCSTRING( t19740, "TRANSFORM-POINT-3D" );

TSCP  ib_2dmisc_point_2d3d_50aa6438( m14830, p14831 )
        TSCP  m14830, p14831;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19740 );
        X2 = ib_2dmisc_homogenous_22fd274e( p14831 );
        X1 = qobischeme_m_2av( m14830, X2 );
        POPSTACKTRACE( ib_2dmisc_2d_3epoint_9d37e6e9( X1 ) );
}

DEFTSCP( ib_2dmisc_dline_2d3d_9b771eb6_v );
DEFCSTRING( t19742, "TRANSFORM-LINE-3D" );
EXTERNTSCPP( obischeme__2dsegment_42724a73, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme__2dsegment_42724a73_v );
EXTERNTSCPP( qobischeme_p, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_p_v );
EXTERNTSCPP( qobischeme_q, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_q_v );

TSCP  ib_2dmisc_dline_2d3d_9b771eb6( m14833, l14834 )
        TSCP  m14833, l14834;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19742 );
        X2 = qobischeme_p( l14834 );
        X1 = ib_2dmisc_point_2d3d_50aa6438( m14833, X2 );
        X3 = qobischeme_q( l14834 );
        X2 = ib_2dmisc_point_2d3d_50aa6438( m14833, X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_orm_2dline_4d8a20e7_v );
DEFCSTRING( t19744, "APPLY-TRANSFORM-LINE" );
EXTERNTSCPP( qobischeme_apply_2dtransform, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_apply_2dtransform_v );

TSCP  ib_2dmisc_orm_2dline_4d8a20e7( t14836, l14837 )
        TSCP  t14836, l14837;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19744 );
        X2 = qobischeme_p( l14837 );
        X1 = qobischeme_apply_2dtransform( t14836, X2 );
        X3 = qobischeme_q( l14837 );
        X2 = qobischeme_apply_2dtransform( t14836, X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_components_a776ca69_v );
DEFCSTRING( t19746, "TRANSFORM->COMPONENTS" );
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

TSCP  ib_2dmisc_components_a776ca69( t14839 )
        TSCP  t14839;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19746 );
        X3 = obischeme_2drotation_1b89590c( t14839 );
        X2 = qobischeme_matrix_2dref( X3, _TSCP( 0 ), _TSCP( 8 ) );
        X1 = scrt2_asin( X2 );
        X5 = obischeme_2drotation_1b89590c( t14839 );
        X4 = qobischeme_matrix_2dref( X5, _TSCP( 8 ), _TSCP( 8 ) );
        X5 = qobischeme_cos( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X2 = scrt2_acos( X3 );
        X6 = obischeme_2drotation_1b89590c( t14839 );
        X5 = qobischeme_matrix_2dref( X6, _TSCP( 0 ), _TSCP( 4 ) );
        X6 = qobischeme_cos( X1 );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        X3 = scrt2_asin( X4 );
        X4 = obischeme__3edegrees_c68f581( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = obischeme_ranslation_e9029c50( t14839 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19752;
        scdebug_error( c13402, 
                       c13403, CONS( X6, EMPTYLIST ) );
L19752:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L19754;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19754:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19756;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L19756:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 8 ) ), X5 );
        X6 = obischeme_ranslation_e9029c50( t14839 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19759;
        scdebug_error( c13402, 
                       c13403, CONS( X6, EMPTYLIST ) );
L19759:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L19761;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19761:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19763;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L19763:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 4 ) ), X5 );
        X6 = obischeme_ranslation_e9029c50( t14839 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L19766;
        scdebug_error( c13402, 
                       c13403, CONS( X6, EMPTYLIST ) );
L19766:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L19768;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19768:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L19770;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L19770:
        X5 = CONS( VECTOR_ELEMENT( X6, _TSCP( 0 ) ), X5 );
        X5 = CONS( obischeme__3edegrees_c68f581( X3 ), X5 );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( obischeme__3edegrees_c68f581( X1 ), 
                                            X5 ) ) );
}

DEFTSCP( ib_2dmisc_components_9631de6f_v );
DEFCSTRING( t19772, "TRANSFORM-3D->COMPONENTS" );

TSCP  ib_2dmisc_components_9631de6f( t14883 )
        TSCP  t14883;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19772 );
        X2 = qobischeme_matrix_2dref( t14883, 
                                      _TSCP( 0 ), _TSCP( 8 ) );
        X1 = scrt2_asin( X2 );
        X4 = qobischeme_matrix_2dref( t14883, 
                                      _TSCP( 8 ), _TSCP( 8 ) );
        X5 = qobischeme_cos( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X2 = scrt2_acos( X3 );
        X5 = qobischeme_matrix_2dref( t14883, 
                                      _TSCP( 0 ), _TSCP( 4 ) );
        X6 = qobischeme_cos( X1 );
        X4 = qobischeme__2f_2dtwo( X5, X6 );
        X3 = scrt2_asin( X4 );
        X4 = obischeme__3edegrees_c68f581( X2 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( qobischeme_matrix_2dref( t14883, 
                                            _TSCP( 8 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( qobischeme_matrix_2dref( t14883, 
                                            _TSCP( 4 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( qobischeme_matrix_2dref( t14883, 
                                            _TSCP( 0 ), _TSCP( 12 ) ), 
                   X5 );
        X5 = CONS( obischeme__3edegrees_c68f581( X3 ), X5 );
        POPSTACKTRACE( scrt1_cons_2a( X4, 
                                      CONS( obischeme__3edegrees_c68f581( X1 ), 
                                            X5 ) ) );
}

DEFTSCP( toollib_2dmisc_project_2dline_v );
DEFCSTRING( t19777, "PROJECT-LINE" );
EXTERNTSCPP( qobischeme_project, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_project_v );

TSCP  toollib_2dmisc_project_2dline( l14897, f14898 )
        TSCP  l14897, f14898;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19777 );
        X2 = qobischeme_p( l14897 );
        X1 = qobischeme_project( X2, f14898 );
        X3 = qobischeme_q( l14897 );
        X2 = qobischeme_project( X3, f14898 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( toollib_2dmisc_safe_2dproject_v );
DEFCSTRING( t19779, "SAFE-PROJECT" );
EXTERNTSCPP( qobischeme_z, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_z_v );
EXTERNTSCPP( scrt4_vector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_v );
EXTERNTSCPP( qobischeme_y, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_y_v );
EXTERNTSCPP( qobischeme_x, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_x_v );

TSCP  toollib_2dmisc_safe_2dproject( v14900, f14901 )
        TSCP  v14900, f14901;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19779 );
        X1 = qobischeme_z( v14900 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) )
            )  goto L19781;
        X2 = CONS( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( qobischeme_infinity_v, 
                            CONS( qobischeme_infinity_v, X2 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
L19781:
        X2 = qobischeme_z( v14900 );
        X1 = qobischeme__2f_2dtwo( f14901, X2 );
        X3 = CONS( qobischeme_y( v14900 ), EMPTYLIST );
        X2 = scrt4_vector( CONS( qobischeme_x( v14900 ), X3 ) );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_ect_2dline_92cf24d3_v );
DEFCSTRING( t19783, "SAFE-PROJECT-LINE" );

TSCP  ib_2dmisc_ect_2dline_92cf24d3( l14909, f14910 )
        TSCP  l14909, f14910;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19783 );
        X2 = qobischeme_p( l14909 );
        X1 = toollib_2dmisc_safe_2dproject( X2, f14910 );
        X3 = qobischeme_q( l14909 );
        X2 = toollib_2dmisc_safe_2dproject( X3, f14910 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_point_2d2d_5a547106_v );
DEFCSTRING( t19785, "ROTATE-POINT-2D" );
EXTERNTSCPP( obischeme_atrix_2d2d_f732ed37, XAL1( TSCP ) );
EXTERNTSCP( obischeme_atrix_2d2d_f732ed37_v );
EXTERNTSCPP( obischeme__3eradians_78a74454, XAL1( TSCP ) );
EXTERNTSCP( obischeme__3eradians_78a74454_v );

TSCP  ib_2dmisc_point_2d2d_5a547106( p14912, t14913 )
        TSCP  p14912, t14913;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19785 );
        X2 = obischeme__3eradians_78a74454( t14913 );
        X1 = obischeme_atrix_2d2d_f732ed37( X2 );
        POPSTACKTRACE( qobischeme_m_2av( X1, p14912 ) );
}

DEFTSCP( ib_2dmisc_dline_2d2d_bd006ef_v );
DEFCSTRING( t19787, "ROTATE-LINE-2D" );

TSCP  ib_2dmisc_dline_2d2d_bd006ef( l14915, t14916 )
        TSCP  l14915, t14916;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19787 );
        X2 = qobischeme_p( l14915 );
        X1 = ib_2dmisc_point_2d2d_5a547106( X2, t14916 );
        X3 = qobischeme_q( l14915 );
        X2 = ib_2dmisc_point_2d2d_5a547106( X3, t14916 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_n_2dvector_fadaca1b_v );
DEFCSTRING( t19789, "LINE->DIRECTION-VECTOR" );
EXTERNTSCPP( qobischeme_unit, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_unit_v );
EXTERNTSCPP( qobischeme__2d, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__2d_v );

TSCP  ib_2dmisc_n_2dvector_fadaca1b( l14918 )
        TSCP  l14918;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19789 );
        X2 = qobischeme_p( l14918 );
        X1 = qobischeme_map_2dvector( qobischeme__2d_v, 
                                      X2, 
                                      CONS( qobischeme_q( l14918 ), 
                                            EMPTYLIST ) );
        POPSTACKTRACE( qobischeme_unit( X1 ) );
}

DEFTSCP( ib_2dmisc_dline_2d2d_396d1575_v );
DEFCSTRING( t19791, "TRANSLATE-LINE-2D" );

TSCP  toollib_2dmisc_l14922( x14923, c19793 )
        TSCP  x14923, c19793;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14922 [inside TRANSLATE-LINE-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19793, 0 );
        X2 = qobischeme__2b_2dtwo( DISPLAY( 0 ), x14923 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l14927( x14928, c19795 )
        TSCP  x14928, c19795;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14927 [inside TRANSLATE-LINE-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19795, 0 );
        X2 = qobischeme__2b_2dtwo( DISPLAY( 0 ), x14928 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_dline_2d2d_396d1575( l14920, v14921 )
        TSCP  l14920, v14921;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19791 );
        DISPLAY( 0 ) = v14921;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14922, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X3 = qobischeme_p( l14920 );
        X1 = qobischeme_map_2dvector( X2, X3, EMPTYLIST );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14927, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X4 = qobischeme_q( l14920 );
        X2 = qobischeme_map_2dvector( X3, X4, EMPTYLIST );
        SDVAL = obischeme__2dsegment_42724a73( X1, X2 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_filter_2dlines_v );
DEFCSTRING( t19797, "FILTER-LINES" );
EXTERNTSCPP( obischeme_t_2dlength_98b94dda, XAL1( TSCP ) );
EXTERNTSCP( obischeme_t_2dlength_98b94dda_v );

TSCP  toollib_2dmisc_l14936( l14937, c19799 )
        TSCP  l14937, c19799;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l14936 [inside FILTER-LINES]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c19799, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19799, 1 );
        X7 = qobischeme_p( l14937 );
        X6 = qobischeme_x( X7 );
        X7 = qobischeme_x( DISPLAY( 1 ) );
        X5 = qobischeme__3e_2dtwo( X6, X7 );
        if  ( FALSE( X5 ) )  goto L19802;
        X7 = qobischeme_q( l14937 );
        X6 = qobischeme_x( X7 );
        X7 = qobischeme_x( DISPLAY( 1 ) );
        X4 = qobischeme__3e_2dtwo( X6, X7 );
        goto L19803;
L19802:
        X4 = X5;
L19803:
        if  ( FALSE( X4 ) )  goto L19805;
        X3 = X4;
        goto L19824;
L19805:
        X8 = qobischeme_p( l14937 );
        X7 = qobischeme_x( X8 );
        X8 = qobischeme_x( DISPLAY( 0 ) );
        X6 = qobischeme__3c_2dtwo( X7, X8 );
        if  ( FALSE( X6 ) )  goto L19808;
        X8 = qobischeme_q( l14937 );
        X7 = qobischeme_x( X8 );
        X8 = qobischeme_x( DISPLAY( 0 ) );
        X5 = qobischeme__3c_2dtwo( X7, X8 );
        goto L19809;
L19808:
        X5 = X6;
L19809:
        if  ( FALSE( X5 ) )  goto L19811;
        X3 = X5;
        goto L19824;
L19811:
        X9 = qobischeme_p( l14937 );
        X8 = qobischeme_y( X9 );
        X9 = qobischeme_y( DISPLAY( 1 ) );
        X7 = qobischeme__3e_2dtwo( X8, X9 );
        if  ( FALSE( X7 ) )  goto L19814;
        X9 = qobischeme_q( l14937 );
        X8 = qobischeme_y( X9 );
        X9 = qobischeme_y( DISPLAY( 1 ) );
        X6 = qobischeme__3e_2dtwo( X8, X9 );
        goto L19815;
L19814:
        X6 = X7;
L19815:
        if  ( FALSE( X6 ) )  goto L19817;
        X3 = X6;
        goto L19824;
L19817:
        X10 = qobischeme_p( l14937 );
        X9 = qobischeme_y( X10 );
        X10 = qobischeme_y( DISPLAY( 0 ) );
        X8 = qobischeme__3c_2dtwo( X9, X10 );
        if  ( FALSE( X8 ) )  goto L19820;
        X10 = qobischeme_q( l14937 );
        X9 = qobischeme_y( X10 );
        X10 = qobischeme_y( DISPLAY( 0 ) );
        X7 = qobischeme__3c_2dtwo( X9, X10 );
        goto L19821;
L19820:
        X7 = X8;
L19821:
        if  ( FALSE( X7 ) )  goto L19823;
        X3 = X7;
        goto L19824;
L19823:
        X8 = obischeme_t_2dlength_98b94dda( l14937 );
        X3 = qobischeme__3c_2dtwo( X8, _TSCP( 40 ) );
L19824:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_filter_2dlines( l14933, m14934, m14935 )
        TSCP  l14933, m14934, m14935;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19797 );
        DISPLAY( 0 ) = m14934;
        DISPLAY( 1 ) = m14935;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l14936, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_remove_2dif( X1, l14933 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_2ddistance_b82131e6_v );
DEFCSTRING( t19825, "LINE-DISTANCE" );
EXTERNTSCPP( qobischeme_minp, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_minp_v );
EXTERNTSCPP( qobischeme__3c, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3c_v );
EXTERNTSCPP( qobischeme_distance, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_distance_v );

TSCP  ib_2dmisc_2ddistance_b82131e6( l14999, l15000 )
        TSCP  l14999, l15000;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19825 );
        X4 = qobischeme_p( l14999 );
        X5 = qobischeme_p( l15000 );
        X3 = qobischeme_distance( X4, X5 );
        X6 = qobischeme_p( l14999 );
        X7 = qobischeme_q( l15000 );
        X5 = qobischeme_distance( X6, X7 );
        X8 = qobischeme_q( l14999 );
        X9 = qobischeme_p( l15000 );
        X7 = qobischeme_distance( X8, X9 );
        X10 = qobischeme_q( l14999 );
        X11 = qobischeme_q( l15000 );
        X9 = qobischeme_distance( X10, X11 );
        X8 = sc_cons( X9, EMPTYLIST );
        X6 = sc_cons( X7, X8 );
        X4 = sc_cons( X5, X6 );
        X2 = sc_cons( X3, X4 );
        X1 = X2;
        POPSTACKTRACE( qobischeme_minp( qobischeme__3c_v, X1 ) );
}

DEFTSCP( ib_2dmisc_ary_2dfile_c506fef2_v );
DEFCSTRING( t19828, "WITH-PERSISTENT-TEMPORARY-FILE" );
EXTERNTSCPP( obischeme_ary_2dfile_f455cdb8, XAL1( TSCP ) );
EXTERNTSCP( obischeme_ary_2dfile_f455cdb8_v );
EXTERNTSCPP( obischeme_dnecessary_1e393221, XAL1( TSCP ) );
EXTERNTSCP( obischeme_dnecessary_1e393221_v );

TSCP  ib_2dmisc_ary_2dfile_c506fef2( p15004, f15005 )
        TSCP  p15004, f15005;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19828 );
        X1 = obischeme_ary_2dfile_f455cdb8( p15004 );
        X3 = f15005;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                          PROCEDURE_CLOSURE( X3 ) );
        obischeme_dnecessary_1e393221( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( ib_2dmisc_m_2doutput_38ec6a1e_v );
DEFCSTRING( t19832, "SYSTEM-OUTPUT" );
EXTERNTSCPP( obischeme_ary_2dfile_15e4569d, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( obischeme_ary_2dfile_15e4569d_v );

TSCP  toollib_2dmisc_l15013( f15014, c19834 )
        TSCP  f15014, c19834;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15013 [inside SYSTEM-OUTPUT]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c19834, 0 );
        X4 = CONS( f15014, EMPTYLIST );
        X4 = CONS( DISPLAY( 0 ), X4 );
        X3 = scrt6_format( FALSEVALUE, CONS( c15015, X4 ) );
        scrt4_system( X3 );
        X2 = qobischeme_read_2dfile( f15014 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_m_2doutput_38ec6a1e( c15011 )
        TSCP  c15011;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t19832 );
        DISPLAY( 0 ) = c15011;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15013, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = obischeme_ary_2dfile_15e4569d( c15012, X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ure_2dpath_df819e9e_v );
DEFCSTRING( t19836, "ARCHITECTURE-PATH" );

TSCP  ib_2dmisc_ure_2dpath_df819e9e(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( t19836 );
        X1 = ib_2dmisc_m_2doutput_38ec6a1e( c15021 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19839;
        scrt1__24__car_2derror( X1 );
L19839:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( toollib_2dmisc_pwd_v );
DEFCSTRING( t19841, "PWD" );

TSCP  toollib_2dmisc_pwd(  )
{
        PUSHSTACKTRACE( t19841 );
        POPSTACKTRACE( qobischeme_getenv( c15023 ) );
}

DEFTSCP( ib_2dmisc_ead_2dfile_58650293_v );
DEFCSTRING( t19843, "SAFE-READ-FILE" );
EXTERNTSCPP( qobischeme_file_2dexists_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_file_2dexists_3f_v );

TSCP  ib_2dmisc_ead_2dfile_58650293( f15025, d15026 )
        TSCP  f15025, d15026;
{
        PUSHSTACKTRACE( t19843 );
        if  ( FALSE( qobischeme_file_2dexists_3f( f15025 ) ) )  goto L19845;
        POPSTACKTRACE( qobischeme_read_2dfile( f15025 ) );
L19845:
        if  ( NEQ( _S2CUINT( d15026 ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L19847;
        POPSTACKTRACE( qobischeme_panic( c15036, 
                                         CONS( f15025, EMPTYLIST ) ) );
L19847:
        if  ( EQ( TSCPTAG( d15026 ), PAIRTAG ) )  goto L19850;
        scrt1__24__car_2derror( d15026 );
L19850:
        POPSTACKTRACE( PAIR_CAR( d15026 ) );
}

DEFTSCP( toollib_2dmisc_lookup_v );
DEFCSTRING( t19852, "LOOKUP" );

TSCP  toollib_2dmisc_lookup( i15038, g15039 )
        TSCP  i15038, g15039;
{
        PUSHSTACKTRACE( t19852 );
        POPSTACKTRACE( scrt1_assoc( i15038, g15039 ) );
}

DEFTSCP( toollib_2dmisc_lookup_2dvalue_v );
DEFCSTRING( t19854, "LOOKUP-VALUE" );
EXTERNTSCPP( qobischeme_second, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_second_v );

TSCP  toollib_2dmisc_lookup_2dvalue( i15041, g15042 )
        TSCP  i15041, g15042;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19854 );
        X1 = scrt1_assoc( i15041, g15042 );
        if  ( FALSE( X1 ) )  goto L19857;
        POPSTACKTRACE( qobischeme_second( X1 ) );
L19857:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_p_2dvalues_6c98ba51_v );
DEFCSTRING( t19859, "LOOKUP-VALUES" );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );

TSCP  ib_2dmisc_p_2dvalues_6c98ba51( i15050, g15051 )
        TSCP  i15050, g15051;
{
        TSCP  X1;

        PUSHSTACKTRACE( t19859 );
        X1 = scrt1_assoc( i15050, g15051 );
        if  ( FALSE( X1 ) )  goto L19862;
        POPSTACKTRACE( qobischeme_rest( X1 ) );
L19862:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_split_2dn_v );
DEFCSTRING( t19864, "SPLIT-N" );
EXTERNTSCPP( toollib_2dmisc_take, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_take_v );
EXTERNTSCPP( toollib_2dmisc_split_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_split_2dn_v );
EXTERNTSCPP( toollib_2dmisc_drop, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_drop_v );

TSCP  toollib_2dmisc_split_2dn( n15059, l15060 )
        TSCP  n15059, l15060;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19864 );
        if  ( EQ( _S2CUINT( l15060 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19866;
        X1 = toollib_2dmisc_take( n15059, l15060 );
        X3 = toollib_2dmisc_drop( n15059, l15060 );
        X2 = toollib_2dmisc_split_2dn( n15059, X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L19866:
        POPSTACKTRACE( l15060 );
}

DEFTSCP( toollib_2dmisc_split_2dcomma_v );
DEFCSTRING( t19868, "SPLIT-COMMA" );
EXTERNTSCPP( _dpregexp_xp_2dsplit_6ce966b, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_xp_2dsplit_6ce966b_v );

TSCP  toollib_2dmisc_split_2dcomma( s15067 )
        TSCP  s15067;
{
        PUSHSTACKTRACE( t19868 );
        POPSTACKTRACE( _dpregexp_xp_2dsplit_6ce966b( c15068, s15067 ) );
}

DEFTSCP( toollib_2dmisc_flatten_2a_v );
DEFCSTRING( t19870, "FLATTEN*" );
EXTERNTSCPP( toollib_2dmisc_flatten_2a, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_flatten_2a_v );

TSCP  toollib_2dmisc_flatten_2a( l15070 )
        TSCP  l15070;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19870 );
L19871:
        if  ( EQ( _S2CUINT( l15070 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19872;
        if  ( EQ( TSCPTAG( l15070 ), PAIRTAG ) )  goto L19877;
        scrt1__24__car_2derror( l15070 );
L19877:
        X1 = PAIR_CAR( l15070 );
        if  ( FALSE( scrt1_list_3f( X1 ) ) )  goto L19874;
        X1 = PAIR_CAR( l15070 );
        X2 = PAIR_CDR( l15070 );
        l15070 = scrt1_append_2dtwo( X1, X2 );
        GOBACK( L19871 );
L19874:
        if  ( EQ( TSCPTAG( l15070 ), PAIRTAG ) )  goto L19882;
        scrt1__24__car_2derror( l15070 );
L19882:
        X1 = PAIR_CAR( l15070 );
        X3 = PAIR_CDR( l15070 );
        X2 = toollib_2dmisc_flatten_2a( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L19872:
        POPSTACKTRACE( EMPTYLIST );
}

DEFTSCP( toollib_2dmisc_snoc_v );
DEFCSTRING( t19885, "SNOC" );

TSCP  toollib_2dmisc_snoc( l15097, a15098 )
        TSCP  l15097, a15098;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19885 );
        X2 = sc_cons( a15098, EMPTYLIST );
        X1 = X2;
        POPSTACKTRACE( scrt1_append_2dtwo( l15097, X1 ) );
}

DEFTSCP( toollib_2dmisc_maximum_v );
DEFCSTRING( t19888, "MAXIMUM" );

TSCP  toollib_2dmisc_maximum( l15102 )
        TSCP  l15102;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19888 );
        if  ( EQ( _S2CUINT( l15102 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19891;
        if  ( EQ( TSCPTAG( l15102 ), PAIRTAG ) )  goto L19894;
        scrt1__24__cdr_2derror( l15102 );
L19894:
        X1 = PAIR_CDR( l15102 );
        X2 = PAIR_CAR( l15102 );
L19897:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19898;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19903;
        scrt1__24__car_2derror( X1 );
L19903:
        X3 = PAIR_CAR( X1 );
        if  ( FALSE( qobischeme__3e_2dtwo( X3, X2 ) ) )  goto L19900;
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X1 );
        X1 = X3;
        GOBACK( L19897 );
L19900:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19908;
        scrt1__24__cdr_2derror( X1 );
L19908:
        X3 = PAIR_CDR( X1 );
        X1 = X3;
        GOBACK( L19897 );
L19898:
        POPSTACKTRACE( X2 );
L19891:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_minimum_v );
DEFCSTRING( t19910, "MINIMUM" );

TSCP  toollib_2dmisc_minimum( l15146 )
        TSCP  l15146;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t19910 );
        if  ( EQ( _S2CUINT( l15146 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19913;
        if  ( EQ( TSCPTAG( l15146 ), PAIRTAG ) )  goto L19916;
        scrt1__24__cdr_2derror( l15146 );
L19916:
        X1 = PAIR_CDR( l15146 );
        X2 = PAIR_CAR( l15146 );
L19919:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L19920;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19925;
        scrt1__24__car_2derror( X1 );
L19925:
        X3 = PAIR_CAR( X1 );
        if  ( FALSE( qobischeme__3c_2dtwo( X3, X2 ) ) )  goto L19922;
        X3 = PAIR_CDR( X1 );
        X2 = PAIR_CAR( X1 );
        X1 = X3;
        GOBACK( L19919 );
L19922:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19930;
        scrt1__24__cdr_2derror( X1 );
L19930:
        X3 = PAIR_CDR( X1 );
        X1 = X3;
        GOBACK( L19919 );
L19920:
        POPSTACKTRACE( X2 );
L19913:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_maximump_v );
DEFCSTRING( t19932, "MAXIMUMP" );

TSCP  toollib_2dmisc_maximump( l15190, p15191 )
        TSCP  l15190, p15191;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19932 );
        if  ( EQ( _S2CUINT( l15190 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19935;
        X1 = p15191;
        if  ( EQ( TSCPTAG( l15190 ), PAIRTAG ) )  goto L19938;
        scrt1__24__cdr_2derror( l15190 );
L19938:
        X2 = PAIR_CDR( l15190 );
        X3 = PAIR_CAR( l15190 );
L19941:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19942;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19947;
        scrt1__24__car_2derror( X2 );
L19947:
        X6 = PAIR_CAR( X2 );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = X1;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( qobischeme__3e_2dtwo( X4, X5 ) ) )  goto L19944;
        X4 = PAIR_CDR( X2 );
        X3 = PAIR_CAR( X2 );
        X2 = X4;
        GOBACK( L19941 );
L19944:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19952;
        scrt1__24__cdr_2derror( X2 );
L19952:
        X4 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L19941 );
L19942:
        POPSTACKTRACE( X3 );
L19935:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_minimump_v );
DEFCSTRING( t19954, "MINIMUMP" );

TSCP  toollib_2dmisc_minimump( l15236, p15237 )
        TSCP  l15236, p15237;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19954 );
        if  ( EQ( _S2CUINT( l15236 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L19957;
        X1 = p15237;
        if  ( EQ( TSCPTAG( l15236 ), PAIRTAG ) )  goto L19960;
        scrt1__24__cdr_2derror( l15236 );
L19960:
        X2 = PAIR_CDR( l15236 );
        X3 = PAIR_CAR( l15236 );
L19963:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19964;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19969;
        scrt1__24__car_2derror( X2 );
L19969:
        X6 = PAIR_CAR( X2 );
        X5 = X1;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X6, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X6 = X1;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X3, 
                                          PROCEDURE_CLOSURE( X6 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X4, X5 ) ) )  goto L19966;
        X4 = PAIR_CDR( X2 );
        X3 = PAIR_CAR( X2 );
        X2 = X4;
        GOBACK( L19963 );
L19966:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19974;
        scrt1__24__cdr_2derror( X2 );
L19974:
        X4 = PAIR_CDR( X2 );
        X2 = X4;
        GOBACK( L19963 );
L19964:
        POPSTACKTRACE( X3 );
L19957:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_2dposition_5ae68915_v );
DEFCSTRING( t19976, "MAXIMUM-WITH-POSITION" );

TSCP  ib_2dmisc_2dposition_5ae68915( l15282 )
        TSCP  l15282;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19976 );
        X1 = _TSCP( 0 );
        X2 = _TSCP( -4 );
        X3 = FALSEVALUE;
        X4 = l15282;
L19979:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19980;
        X6 = sc_cons( X2, EMPTYLIST );
        X5 = sc_cons( X3, X6 );
        POPSTACKTRACE( X5 );
L19980:
        X5 = qobischeme_first( X4 );
        if  ( FALSE( X3 ) )  goto L19985;
        X6 = X3;
        goto L19986;
L19985:
        X6 = qobischeme_minus_2dinfinity_v;
L19986:
        if  ( FALSE( qobischeme__3e_2dtwo( X5, X6 ) ) )  goto L19983;
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X6 = qobischeme_first( X4 );
        X4 = qobischeme_rest( X4 );
        X3 = X6;
        X2 = X1;
        X1 = X5;
        GOBACK( L19979 );
L19983:
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X4 = qobischeme_rest( X4 );
        X1 = X5;
        GOBACK( L19979 );
}

DEFTSCP( ib_2dmisc_2dposition_6453419d_v );
DEFCSTRING( t19987, "MINIMUM-WITH-POSITION" );

TSCP  ib_2dmisc_2dposition_6453419d( l15313 )
        TSCP  l15313;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19987 );
        X1 = _TSCP( 0 );
        X2 = _TSCP( -4 );
        X3 = FALSEVALUE;
        X4 = l15313;
L19990:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19991;
        X6 = sc_cons( X2, EMPTYLIST );
        X5 = sc_cons( X3, X6 );
        POPSTACKTRACE( X5 );
L19991:
        X5 = qobischeme_first( X4 );
        if  ( FALSE( X3 ) )  goto L19996;
        X6 = X3;
        goto L19997;
L19996:
        X6 = qobischeme_infinity_v;
L19997:
        if  ( FALSE( qobischeme__3c_2dtwo( X5, X6 ) ) )  goto L19994;
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X6 = qobischeme_first( X4 );
        X4 = qobischeme_rest( X4 );
        X3 = X6;
        X2 = X1;
        X1 = X5;
        GOBACK( L19990 );
L19994:
        X5 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X4 = qobischeme_rest( X4 );
        X1 = X5;
        GOBACK( L19990 );
}

DEFTSCP( toollib_2dmisc_safe_2dsublist_v );
DEFCSTRING( t19998, "SAFE-SUBLIST" );
EXTERNTSCPP( qobischeme_sublist, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sublist_v );

TSCP  toollib_2dmisc_safe_2dsublist( l15343, s15344, f15345 )
        TSCP  l15343, s15344, f15345;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t19998 );
        X1 = scrt1_length( l15343 );
        X2 = qobischeme__2d_2dtwo( f15345, s15344 );
        if  ( TRUE( qobischeme__3c_3d_2dtwo( X1, X2 ) ) )  goto L20000;
        POPSTACKTRACE( qobischeme_sublist( l15343, s15344, f15345 ) );
L20000:
        POPSTACKTRACE( l15343 );
}

DEFTSCP( ib_2dmisc_d_2dvector_58ad8696_v );
DEFCSTRING( t20002, "APPEND-VECTOR" );
EXTERNTSCPP( qobischeme_map_2dn_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_2dvector_v );

TSCP  toollib_2dmisc_l15358( i15359, c20011 )
        TSCP  i15359, c20011;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15358 [inside APPEND-VECTOR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20011, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20011, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20011, 2 );
        if  ( FALSE( qobischeme__3c_2dtwo( i15359, DISPLAY( 2 ) ) )
            )  goto L20013;
        X5 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20016;
        scdebug_error( c13402, 
                       c13403, CONS( X5, EMPTYLIST ) );
L20016:
        if  ( EQ( TSCPTAG( i15359 ), FIXNUMTAG ) )  goto L20018;
        scdebug_error( c13402, 
                       c13406, CONS( i15359, EMPTYLIST ) );
L20018:
        if  ( LT( _S2CUINT( FIXED_C( i15359 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20020;
        scdebug_error( c13402, 
                       c13410, CONS( i15359, EMPTYLIST ) );
L20020:
        X4 = VECTOR_ELEMENT( X5, i15359 );
        goto L20014;
L20013:
        X5 = DISPLAY( 1 );
        X6 = qobischeme__2d_2dtwo( i15359, DISPLAY( 2 ) );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20023;
        scdebug_error( c13402, 
                       c13403, CONS( X5, EMPTYLIST ) );
L20023:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L20025;
        scdebug_error( c13402, 
                       c13406, CONS( X6, EMPTYLIST ) );
L20025:
        if  ( LT( _S2CUINT( FIXED_C( X6 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20027;
        scdebug_error( c13402, 
                       c13410, CONS( X6, EMPTYLIST ) );
L20027:
        X4 = VECTOR_ELEMENT( X5, X6 );
L20014:
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  ib_2dmisc_d_2dvector_58ad8696( v15353, v15354 )
        TSCP  v15353, v15354;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20002 );
        DISPLAY( 0 ) = v15353;
        DISPLAY( 1 ) = v15354;
        X2 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20005;
        scdebug_error( c13418, 
                       c13403, CONS( X2, EMPTYLIST ) );
L20005:
        X1 = C_FIXED( VECTOR_LENGTH( X2 ) );
        X2 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20008;
        scdebug_error( c13418, 
                       c13403, CONS( X2, EMPTYLIST ) );
L20008:
        DISPLAY( 2 ) = C_FIXED( VECTOR_LENGTH( X2 ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15358, 
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
DEFCSTRING( t20029, "VECTOR-POSITION" );

TSCP  ib_2dmisc_2dposition_3ed14c76( v15398, v15399 )
        TSCP  v15398, v15399;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20029 );
        X1 = _TSCP( 0 );
L20032:
        if  ( AND( EQ( TSCPTAG( v15398 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v15398 ), VECTORTAG ) )
            )  goto L20036;
        scdebug_error( c13418, 
                       c13403, CONS( v15398, EMPTYLIST ) );
L20036:
        X2 = C_FIXED( VECTOR_LENGTH( v15398 ) );
        if  ( FALSE( qobischeme__3c_2dtwo( X1, X2 ) ) )  goto L20033;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20041;
        scdebug_error( c13402, 
                       c13406, CONS( X1, EMPTYLIST ) );
L20041:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( v15398 ) ) ) )  goto L20043;
        scdebug_error( c13402, 
                       c13410, CONS( X1, EMPTYLIST ) );
L20043:
        X2 = VECTOR_ELEMENT( v15398, X1 );
        if  ( TRUE( scrt1_equal_3f( v15399, X2 ) ) )  goto L20038;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20032 );
L20038:
        POPSTACKTRACE( X1 );
L20033:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_rest_2dvector_v );
DEFCSTRING( t20045, "REST-VECTOR" );

TSCP  toollib_2dmisc_rest_2dvector( v15427 )
        TSCP  v15427;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20045 );
        if  ( AND( EQ( TSCPTAG( v15427 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( v15427 ), VECTORTAG ) )
            )  goto L20048;
        scdebug_error( c13418, 
                       c13403, CONS( v15427, EMPTYLIST ) );
L20048:
        X1 = C_FIXED( VECTOR_LENGTH( v15427 ) );
        POPSTACKTRACE( qobischeme_subvector( v15427, 
                                             _TSCP( 4 ), X1 ) );
}

DEFTSCP( ib_2dmisc_f_2dvector_8b75269e_v );
DEFCSTRING( t20050, "REMOVE-IF-VECTOR" );
EXTERNTSCP( sc_emptyvector );
EXTERNTSCPP( qobischeme_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_zero_3f_v );

TSCP  ib_2dmisc_f_2dvector_8b75269e( p15433, v15434 )
        TSCP  p15433, v15434;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20050 );
        X1 = sc_emptyvector;
        X2 = v15434;
        X3 = X1;
L20054:
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20058;
        scdebug_error( c13418, 
                       c13403, CONS( X2, EMPTYLIST ) );
L20058:
        X4 = C_FIXED( VECTOR_LENGTH( X2 ) );
        if  ( TRUE( qobischeme_zero_3f( X4 ) ) )  goto L20055;
        X5 = qobischeme_x( X2 );
        X4 = p15433;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20060;
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X2 = X4;
        GOBACK( L20054 );
L20060:
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X5 = qobischeme_subvector( X2, _TSCP( 0 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_d_2dvector_58ad8696( X3, X5 );
        X2 = X4;
        GOBACK( L20054 );
L20055:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_t_2dvector_9580ea2a_v );
DEFCSTRING( t20062, "REMOVE-IF-NOT-VECTOR" );

TSCP  ib_2dmisc_t_2dvector_9580ea2a( p15448, v15449 )
        TSCP  p15448, v15449;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20062 );
        X1 = sc_emptyvector;
        X2 = v15449;
        X3 = X1;
L20066:
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20070;
        scdebug_error( c13418, 
                       c13403, CONS( X2, EMPTYLIST ) );
L20070:
        X4 = C_FIXED( VECTOR_LENGTH( X2 ) );
        if  ( TRUE( qobischeme_zero_3f( X4 ) ) )  goto L20067;
        X5 = qobischeme_x( X2 );
        X4 = p15448;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20072;
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X5 = qobischeme_subvector( X2, _TSCP( 0 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_d_2dvector_58ad8696( X3, X5 );
        X2 = X4;
        GOBACK( L20066 );
L20072:
        X4 = toollib_2dmisc_rest_2dvector( X2 );
        X2 = X4;
        GOBACK( L20066 );
L20067:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_o_v );
DEFCSTRING( t20074, "O" );

TSCP  toollib_2dmisc_l15470( x15471, f15472, c20079 )
        TSCP  x15471, f15472, c20079;
{
        TSCP  X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15470 [inside O]" );
        X1 = f15472;
        X1 = UNKNOWNCALL( X1, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( x15471, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
}

EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( qobischeme_last, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_last_v );

TSCP  toollib_2dmisc_l15468( d15469, c20077 )
        TSCP  d15469, c20077;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15468 [inside O]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20077, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l15470, EMPTYLIST );
        X5 = scrt1_reverse( DISPLAY( 0 ) );
        X4 = qobischeme_rest( X5 );
        X6 = qobischeme_last( DISPLAY( 0 ) );
        X5 = sc_apply_2dtwo( X6, d15469 );
        X2 = toollib_2dmisc_foldl( X3, X4, X5 );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_o( a15463, b15464, c15465 )
        TSCP  a15463, b15464, c15465;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20074 );
        X1 = sc_cons( b15464, c15465 );
        DISPLAY( 0 ) = sc_cons( a15463, X1 );
        SDVAL = MAKEPROCEDURE( 0, 
                               1, 
                               toollib_2dmisc_l15468, 
                               MAKECLOSURE( EMPTYLIST, 
                                            1, DISPLAY( 0 ) ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dvector_e52d1f5a_v );
DEFCSTRING( t20081, "FOR-EACH-INDEXED-VECTOR" );
EXTERNTSCPP( qobischeme_for_2deach_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_for_2deach_2dn_v );

TSCP  toollib_2dmisc_l15476( i15477, c20083 )
        TSCP  i15477, c20083;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15476 [inside FOR-EACH-INDEXED-VECT\
OR]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20083, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20083, 1 );
        X6 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L20086;
        scdebug_error( c13402, 
                       c13403, CONS( X6, EMPTYLIST ) );
L20086:
        if  ( EQ( TSCPTAG( i15477 ), FIXNUMTAG ) )  goto L20088;
        scdebug_error( c13402, 
                       c13406, CONS( i15477, EMPTYLIST ) );
L20088:
        if  ( LT( _S2CUINT( FIXED_C( i15477 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L20090;
        scdebug_error( c13402, 
                       c13410, CONS( i15477, EMPTYLIST ) );
L20090:
        X5 = VECTOR_ELEMENT( X6, i15477 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          i15477, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_d_2dvector_e52d1f5a( f15474, v15475 )
        TSCP  f15474, v15475;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20081 );
        DISPLAY( 0 ) = f15474;
        DISPLAY( 1 ) = v15475;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15476, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20093;
        scdebug_error( c13418, 
                       c13403, CONS( X3, EMPTYLIST ) );
L20093:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        SDVAL = qobischeme_for_2deach_2dn( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_crop_v );
DEFCSTRING( t20095, "CROP" );

TSCP  toollib_2dmisc_l15498( r15499, c20097 )
        TSCP  r15499, c20097;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15498 [inside CROP]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20097, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20097, 1 );
        X4 = qobischeme__2b_2dtwo( DISPLAY( 0 ), 
                                   DISPLAY( 1 ) );
        X3 = qobischeme_subvector( r15499, DISPLAY( 0 ), X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_crop( m15493, 
                           x15494, y15495, w15496, h15497 )
        TSCP  m15493, x15494, y15495, w15496, h15497;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20095 );
        DISPLAY( 0 ) = x15494;
        DISPLAY( 1 ) = w15496;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15498, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X3 = qobischeme__2b_2dtwo( y15495, h15497 );
        X2 = qobischeme_subvector( m15493, y15495, X3 );
        SDVAL = qobischeme_map_2dvector( X1, X2, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dlinear_v );
DEFCSTRING( t20099, "MAP-LINEAR" );
EXTERNTSCPP( qobischeme_map_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dn_v );

TSCP  toollib_2dmisc_l15511( v15512, c20101 )
        TSCP  v15512, c20101;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15511 [inside MAP-LINEAR]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20101, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20101, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20101, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20101, 3 );
        X10 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X9 = qobischeme__2f_2dtwo( X10, DISPLAY( 3 ) );
        X8 = qobischeme__2a_2dtwo( v15512, X9 );
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

TSCP  toollib_2dmisc_map_2dlinear( f15507, 
                                   s15508, e15509, n15510 )
        TSCP  f15507, s15508, e15509, n15510;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20099 );
        DISPLAY( 0 ) = f15507;
        DISPLAY( 1 ) = s15508;
        DISPLAY( 2 ) = e15509;
        DISPLAY( 3 ) = n15510;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15511, 
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
DEFCSTRING( t20103, "MAP-MEDIAL" );
EXTERNTSCPP( qobischeme_sort, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sort_v );

TSCP  toollib_2dmisc_map_2dmedial( f15529, l15530, k15531 )
        TSCP  f15529, l15530, k15531;
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

        PUSHSTACKTRACE( t20103 );
        if  ( EQ( _S2CUINT( l15530 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20105;
        X2 = qobischeme_sort( l15530, qobischeme__3c_v, k15531 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20108;
        scrt1__24__cdr_2derror( X2 );
L20108:
        X1 = PAIR_CDR( X2 );
        X2 = qobischeme_sort( l15530, qobischeme__3c_v, k15531 );
        X3 = X1;
        X4 = X2;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L20112:
        if  ( EQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20113;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L20116;
        scrt1__24__car_2derror( X3 );
L20116:
        X9 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20119;
        scrt1__24__car_2derror( X4 );
L20119:
        X10 = PAIR_CAR( X4 );
        X15 = k15531;
        X15 = UNKNOWNCALL( X15, 1 );
        X14 = VIA( PROCEDURE_CODE( X15 ) )( X9, 
                                            PROCEDURE_CLOSURE( X15 ) );
        X16 = k15531;
        X16 = UNKNOWNCALL( X16, 1 );
        X15 = VIA( PROCEDURE_CODE( X16 ) )( X10, 
                                            PROCEDURE_CLOSURE( X16 ) );
        X13 = qobischeme__2b_2dtwo( X14, X15 );
        X12 = qobischeme__2f_2dtwo( X13, _TSCP( 8 ) );
        X11 = f15529;
        X11 = UNKNOWNCALL( X11, 1 );
        X8 = VIA( PROCEDURE_CODE( X11 ) )( X12, 
                                           PROCEDURE_CLOSURE( X11 ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20123;
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X9;
        X3 = X8;
        GOBACK( L20112 );
L20123:
        X8 = PAIR_CDR( X3 );
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L20130;
        scdebug_error( c13505, 
                       c13506, CONS( X6, EMPTYLIST ) );
L20130:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X9;
        X3 = X8;
        GOBACK( L20112 );
L20113:
        POPSTACKTRACE( X5 );
L20105:
        POPSTACKTRACE( l15530 );
}

DEFTSCP( ib_2dmisc_2dref_2dnd_f10eab19_v );
DEFCSTRING( t20132, "MATRIX-REF-ND" );
EXTERNTSCPP( ib_2dmisc_2dref_2dnd_f10eab19, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_2dref_2dnd_f10eab19_v );

TSCP  ib_2dmisc_2dref_2dnd_f10eab19( m15608, i15609 )
        TSCP  m15608, i15609;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20132 );
        X1 = scrt1_length( i15609 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20134;
        X1 = qobischeme_first( i15609 );
        if  ( AND( EQ( TSCPTAG( m15608 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15608 ), VECTORTAG ) )
            )  goto L20137;
        scdebug_error( c13402, 
                       c13403, CONS( m15608, EMPTYLIST ) );
L20137:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20139;
        scdebug_error( c13402, 
                       c13406, CONS( X1, EMPTYLIST ) );
L20139:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15608 ) ) ) )  goto L20141;
        scdebug_error( c13402, 
                       c13410, CONS( X1, EMPTYLIST ) );
L20141:
        POPSTACKTRACE( VECTOR_ELEMENT( m15608, X1 ) );
L20134:
        X3 = qobischeme_first( i15609 );
        if  ( AND( EQ( TSCPTAG( m15608 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15608 ), VECTORTAG ) )
            )  goto L20144;
        scdebug_error( c13402, 
                       c13403, CONS( m15608, EMPTYLIST ) );
L20144:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L20146;
        scdebug_error( c13402, 
                       c13406, CONS( X3, EMPTYLIST ) );
L20146:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15608 ) ) ) )  goto L20148;
        scdebug_error( c13402, 
                       c13410, CONS( X3, EMPTYLIST ) );
L20148:
        X2 = VECTOR_ELEMENT( m15608, X3 );
        X3 = qobischeme_rest( i15609 );
        X4 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt1_append_2dtwo( X3, X4 ), 
                                  EMPTYLIST ) );
        POPSTACKTRACE( sc_apply_2dtwo( ib_2dmisc_2dref_2dnd_f10eab19_v, 
                                       X1 ) );
}

DEFTSCP( ib_2dmisc_2d3d_2dref_baeb01c_v );
DEFCSTRING( t20150, "MATRIX-3D-REF" );

TSCP  ib_2dmisc_2d3d_2dref_baeb01c( a15634, 
                                    s15635, i15636, j15637 )
        TSCP  a15634, s15635, i15636, j15637;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20150 );
        X1 = CONS( j15637, EMPTYLIST );
        X1 = CONS( i15636, X1 );
        POPSTACKTRACE( ib_2dmisc_2dref_2dnd_f10eab19( a15634, 
                                                      CONS( s15635, X1 ) ) );
}

DEFTSCP( ib_2dmisc_et_2dnd_21_214a58da_v );
DEFCSTRING( t20152, "MATRIX-SET-ND!" );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( ib_2dmisc_et_2dnd_21_214a58da, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_et_2dnd_21_214a58da_v );

TSCP  ib_2dmisc_et_2dnd_21_214a58da( m15639, v15640, i15641 )
        TSCP  m15639, v15640, i15641;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20152 );
        X1 = scrt1_length( i15641 );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20154;
        scrt6_write( m15639, EMPTYLIST );
        scrt6_newline( EMPTYLIST );
        X1 = qobischeme_first( i15641 );
        if  ( AND( EQ( TSCPTAG( m15639 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15639 ), VECTORTAG ) )
            )  goto L20158;
        scdebug_error( c14283, 
                       c13403, CONS( m15639, EMPTYLIST ) );
L20158:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20160;
        scdebug_error( c14283, 
                       c13406, CONS( X1, EMPTYLIST ) );
L20160:
        if  ( LT( _S2CUINT( FIXED_C( X1 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15639 ) ) ) )  goto L20162;
        scdebug_error( c14283, 
                       c13410, CONS( X1, EMPTYLIST ) );
L20162:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( m15639, X1 ), 
                               v15640 ) );
L20154:
        X3 = qobischeme_first( i15641 );
        if  ( AND( EQ( TSCPTAG( m15639 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m15639 ), VECTORTAG ) )
            )  goto L20165;
        scdebug_error( c13402, 
                       c13403, CONS( m15639, EMPTYLIST ) );
L20165:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L20167;
        scdebug_error( c13402, 
                       c13406, CONS( X3, EMPTYLIST ) );
L20167:
        if  ( LT( _S2CUINT( FIXED_C( X3 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m15639 ) ) ) )  goto L20169;
        scdebug_error( c13402, 
                       c13410, CONS( X3, EMPTYLIST ) );
L20169:
        X2 = VECTOR_ELEMENT( m15639, X3 );
        X4 = qobischeme_rest( i15641 );
        X5 = scrt1_cons_2a( EMPTYLIST, EMPTYLIST );
        X3 = CONS( scrt1_append_2dtwo( X4, X5 ), EMPTYLIST );
        X1 = scrt1_cons_2a( X2, CONS( v15640, X3 ) );
        POPSTACKTRACE( sc_apply_2dtwo( ib_2dmisc_et_2dnd_21_214a58da_v, 
                                       X1 ) );
}

DEFTSCP( ib_2dmisc_d_2dset_21_2a950b3f_v );
DEFCSTRING( t20171, "MATRIX-3D-SET!" );

TSCP  ib_2dmisc_d_2dset_21_2a950b3f( a15668, 
                                     v15669, 
                                     s15670, i15671, j15672 )
        TSCP  a15668, v15669, s15670, i15671, j15672;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20171 );
        X1 = CONS( j15672, EMPTYLIST );
        X1 = CONS( i15671, X1 );
        POPSTACKTRACE( ib_2dmisc_et_2dnd_21_214a58da( a15668, 
                                                      v15669, 
                                                      CONS( s15670, X1 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_96246a2e_v );
DEFCSTRING( t20173, "MAP-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_96246a2e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_96246a2e_v );

TSCP  toollib_2dmisc_l15680( m15681, c20177 )
        TSCP  m15681, c20177;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15680 [inside MAP-MATRIX-ND]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20177, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20177, 1 );
        X4 = qobischeme__2d_2dtwo( DISPLAY( 1 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_atrix_2dnd_96246a2e( DISPLAY( 0 ), 
                                            m15681, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_atrix_2dnd_96246a2e( f15674, m15675, n15676 )
        TSCP  f15674, m15675, n15676;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20173 );
        DISPLAY( 0 ) = f15674;
        DISPLAY( 1 ) = n15676;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 1 ), 
                                           _TSCP( 4 ) ) ) )  goto L20175;
        SDVAL = qobischeme_map_2dvector( DISPLAY( 0 ), 
                                         m15675, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L20175:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15680, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, m15675, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_243ca8eb_v );
DEFCSTRING( t20179, "FOR-EACH-MATRIX-ND" );
EXTERNTSCPP( obischeme_h_2dvector_fe309b1e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_h_2dvector_fe309b1e_v );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_243ca8eb, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_243ca8eb_v );

TSCP  toollib_2dmisc_l15692( m15693, c20183 )
        TSCP  m15693, c20183;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15692 [inside FOR-EACH-MATRIX-ND]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20183, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20183, 1 );
        X4 = qobischeme__2d_2dtwo( DISPLAY( 1 ), _TSCP( 4 ) );
        X3 = ib_2dmisc_atrix_2dnd_243ca8eb( DISPLAY( 0 ), 
                                            m15693, X4 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_atrix_2dnd_243ca8eb( f15686, m15687, n15688 )
        TSCP  f15686, m15687, n15688;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20179 );
        DISPLAY( 0 ) = f15686;
        DISPLAY( 1 ) = n15688;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 1 ), 
                                           _TSCP( 4 ) ) ) )  goto L20181;
        SDVAL = obischeme_h_2dvector_fe309b1e( DISPLAY( 0 ), 
                                               m15687, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
L20181:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15692, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = obischeme_h_2dvector_fe309b1e( X1, 
                                               m15687, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_map_2dmatrix_v );
DEFCSTRING( t20185, "MAP-MATRIX" );

TSCP  toollib_2dmisc_map_2dmatrix( f15698, m15699 )
        TSCP  f15698, m15699;
{
        PUSHSTACKTRACE( t20185 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_96246a2e( f15698, 
                                                      m15699, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_h_2dmatrix_9b00ff76_v );
DEFCSTRING( t20187, "FOR-EACH-MATRIX" );

TSCP  ib_2dmisc_h_2dmatrix_9b00ff76( f15701, m15702 )
        TSCP  f15701, m15702;
{
        PUSHSTACKTRACE( t20187 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_243ca8eb( f15701, 
                                                      m15702, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_99314937_v );
DEFCSTRING( t20189, "MAP-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_99314937( f15704, m15705 )
        TSCP  f15704, m15705;
{
        PUSHSTACKTRACE( t20189 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_96246a2e( f15704, 
                                                      m15705, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_2b298bf2_v );
DEFCSTRING( t20191, "FOR-EACH-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_2b298bf2( f15707, m15708 )
        TSCP  f15707, m15708;
{
        PUSHSTACKTRACE( t20191 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_243ca8eb( f15707, 
                                                      m15708, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_n_2dmatrix_7b48bbf5_v );
DEFCSTRING( t20193, "MAP-N-MATRIX" );

TSCP  toollib_2dmisc_l15715( j15716, c20197 )
        TSCP  j15716, c20197;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15715 [inside MAP-N-MATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20197, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20197, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          j15716, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15713( i15714, c20195 )
        TSCP  i15714, c20195;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15713 [inside MAP-N-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20195, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20195, 1 );
        DISPLAY( 2 ) = i15714;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15715, 
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

TSCP  ib_2dmisc_n_2dmatrix_7b48bbf5( f15710, i15711, j15712 )
        TSCP  f15710, i15711, j15712;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20193 );
        DISPLAY( 0 ) = f15710;
        DISPLAY( 1 ) = j15712;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15713, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, i15711 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_n_2dmatrix_de81564c_v );
DEFCSTRING( t20199, "FOR-EACH-N-MATRIX" );

TSCP  toollib_2dmisc_l15723( j15724, c20203 )
        TSCP  j15724, c20203;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15723 [inside FOR-EACH-N-MATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20203, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20203, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          j15724, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15721( i15722, c20201 )
        TSCP  i15722, c20201;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15721 [inside FOR-EACH-N-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20201, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20201, 1 );
        DISPLAY( 2 ) = i15722;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15723, 
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

TSCP  ib_2dmisc_n_2dmatrix_de81564c( f15718, i15719, j15720 )
        TSCP  f15718, i15719, j15720;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20199 );
        DISPLAY( 0 ) = f15718;
        DISPLAY( 1 ) = j15720;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15721, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_for_2deach_2dn( X1, i15719 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dmatrix_3f07691a_v );
DEFCSTRING( t20205, "MAP-INDEXED-MATRIX" );
EXTERNTSCPP( ib_2dmisc_d_2dvector_dc5a608e, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_d_2dvector_dc5a608e_v );

TSCP  toollib_2dmisc_l15731( c15732, j15733, c20209 )
        TSCP  c15732, j15733, c20209;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15731 [inside MAP-INDEXED-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20209, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20209, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15732, 
                                          DISPLAY( 1 ), 
                                          j15733, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15728( r15729, i15730, c20207 )
        TSCP  r15729, i15730, c20207;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15728 [inside MAP-INDEXED-MATRIX]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20207, 0 );
        DISPLAY( 1 ) = i15730;
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15731, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dvector_dc5a608e( X3, r15729, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_d_2dmatrix_3f07691a( f15726, m15727 )
        TSCP  f15726, m15727;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20205 );
        DISPLAY( 0 ) = f15726;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15728, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_dc5a608e( X1, 
                                               m15727, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_d_2dmatrix_67016ce_v );
DEFCSTRING( t20211, "FOR-EACH-INDEXED-MATRIX" );

TSCP  toollib_2dmisc_l15740( c15741, j15742, c20215 )
        TSCP  c15741, j15742, c20215;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15740 [inside FOR-EACH-INDEXED-MATR\
IX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20215, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20215, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15741, 
                                          DISPLAY( 1 ), 
                                          j15742, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15737( r15738, i15739, c20213 )
        TSCP  r15738, i15739, c20213;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15737 [inside FOR-EACH-INDEXED-MATR\
IX]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20213, 0 );
        DISPLAY( 1 ) = i15739;
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15740, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dvector_e52d1f5a( X3, r15738 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_d_2dmatrix_67016ce( f15735, m15736 )
        TSCP  f15735, m15736;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20211 );
        DISPLAY( 0 ) = f15735;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15737, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_e52d1f5a( X1, m15736 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_20e4c0ae_v );
DEFCSTRING( t20217, "MAP-INDEXED-MATRIX-3D" );

TSCP  toollib_2dmisc_l15749( c15750, i15751, j15752, c20221 )
        TSCP  c15750, i15751, j15752, c20221;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15749 [inside MAP-INDEXED-MATRIX-3D\
]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20221, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20221, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 4 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15750, 
                                          DISPLAY( 1 ), 
                                          i15751, 
                                          j15752, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15746( s15747, l15748, c20219 )
        TSCP  s15747, l15748, c20219;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15746 [inside MAP-INDEXED-MATRIX-3D\
]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20219, 0 );
        DISPLAY( 1 ) = l15748;
        X3 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l15749, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dmatrix_3f07691a( X3, s15747 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_atrix_2d3d_20e4c0ae( f15744, p15745 )
        TSCP  f15744, p15745;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20217 );
        DISPLAY( 0 ) = f15744;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15746, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_dc5a608e( X1, 
                                               p15745, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_30f75a92_v );
DEFCSTRING( t20223, "FOR-EACH-INDEXED-MATRIX-3D" );

TSCP  toollib_2dmisc_l15759( c15760, i15761, j15762, c20227 )
        TSCP  c15760, i15761, j15762, c20227;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15759 [inside FOR-EACH-INDEXED-MATR\
IX-3D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20227, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20227, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 4 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( c15760, 
                                          DISPLAY( 1 ), 
                                          i15761, 
                                          j15762, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l15756( s15757, l15758, c20225 )
        TSCP  s15757, l15758, c20225;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15756 [inside FOR-EACH-INDEXED-MATR\
IX-3D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20225, 0 );
        DISPLAY( 1 ) = l15758;
        X3 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l15759, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X2 = ib_2dmisc_d_2dmatrix_67016ce( X3, s15757 );
        DISPLAY( 0 ) = X1;
        SDVAL = X2;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

TSCP  ib_2dmisc_atrix_2d3d_30f75a92( f15754, p15755 )
        TSCP  f15754, p15755;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20223 );
        DISPLAY( 0 ) = f15754;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15756, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_d_2dvector_e52d1f5a( X1, p15755 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_835dc287_v );
DEFCSTRING( t20229, "REDUCE-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_835dc287, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_835dc287_v );

TSCP  toollib_2dmisc_l15771( m15772, c20233 )
        TSCP  m15772, c20233;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15771 [inside REDUCE-MATRIX-ND]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20233, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20233, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20233, 2 );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 2 ), _TSCP( 4 ) );
        X4 = ib_2dmisc_atrix_2dnd_835dc287( DISPLAY( 0 ), 
                                            m15772, 
                                            DISPLAY( 1 ), X5 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  ib_2dmisc_atrix_2dnd_835dc287( g15764, 
                                     m15765, i15766, n15767 )
        TSCP  g15764, m15765, i15766, n15767;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20229 );
        DISPLAY( 0 ) = g15764;
        DISPLAY( 1 ) = i15766;
        DISPLAY( 2 ) = n15767;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 2 ), 
                                           _TSCP( 4 ) ) ) )  goto L20231;
        SDVAL = qobischeme_reduce_2dvector( DISPLAY( 0 ), 
                                            m15765, DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
L20231:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15771, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = qobischeme_map_2dvector( X2, m15765, EMPTYLIST );
        SDVAL = qobischeme_reduce_2dvector( DISPLAY( 0 ), 
                                            X1, DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_atrix_2dnd_17ba6b06_v );
DEFCSTRING( t20235, "MAP-REDUCE-MATRIX-ND" );
EXTERNTSCPP( ib_2dmisc_atrix_2dnd_17ba6b06, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_atrix_2dnd_17ba6b06_v );

TSCP  toollib_2dmisc_l15785( m15786, c20239 )
        TSCP  m15786, c20239;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15785 [inside MAP-REDUCE-MATRIX-ND]\
" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20239, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20239, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20239, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20239, 3 );
        X6 = qobischeme__2d_2dtwo( DISPLAY( 3 ), _TSCP( 4 ) );
        X5 = ib_2dmisc_atrix_2dnd_17ba6b06( DISPLAY( 0 ), 
                                            DISPLAY( 1 ), 
                                            DISPLAY( 2 ), 
                                            m15786, X6 );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 1 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  ib_2dmisc_atrix_2dnd_17ba6b06( g15777, 
                                     i15778, 
                                     f15779, m15780, n15781 )
        TSCP  g15777, i15778, f15779, m15780, n15781;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20235 );
        DISPLAY( 0 ) = g15777;
        DISPLAY( 1 ) = i15778;
        DISPLAY( 2 ) = f15779;
        DISPLAY( 3 ) = n15781;
        if  ( FALSE( qobischeme__3d_2dtwo( DISPLAY( 3 ), 
                                           _TSCP( 4 ) ) ) )  goto L20237;
        SDVAL = obischeme_e_2dvector_6be5ec0a( DISPLAY( 0 ), 
                                               DISPLAY( 1 ), 
                                               DISPLAY( 2 ), 
                                               m15780, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
L20237:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15785, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        X1 = qobischeme_map_2dvector( X2, m15780, EMPTYLIST );
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
DEFCSTRING( t20241, "REDUCE-MATRIX" );

TSCP  ib_2dmisc_e_2dmatrix_500e2fbc( g15791, m15792, i15793 )
        TSCP  g15791, m15792, i15793;
{
        PUSHSTACKTRACE( t20241 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_835dc287( g15791, 
                                                      m15792, 
                                                      i15793, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_e_2dmatrix_3b2d0a7_v );
DEFCSTRING( t20243, "MAP-REDUCE-MATRIX" );

TSCP  ib_2dmisc_e_2dmatrix_3b2d0a7( g15795, 
                                    i15796, f15797, m15798 )
        TSCP  g15795, i15796, f15797, m15798;
{
        PUSHSTACKTRACE( t20243 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_17ba6b06( g15795, 
                                                      i15796, 
                                                      f15797, 
                                                      m15798, 
                                                      _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_8c48e19e_v );
DEFCSTRING( t20245, "REDUCE-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_8c48e19e( g15800, m15801, i15802 )
        TSCP  g15800, m15801, i15802;
{
        PUSHSTACKTRACE( t20245 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_835dc287( g15800, 
                                                      m15801, 
                                                      i15802, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_atrix_2d3d_18af481f_v );
DEFCSTRING( t20247, "MAP-REDUCE-MATRIX-3D" );

TSCP  ib_2dmisc_atrix_2d3d_18af481f( g15804, 
                                     i15805, f15806, m15807 )
        TSCP  g15804, i15805, f15806, m15807;
{
        PUSHSTACKTRACE( t20247 );
        POPSTACKTRACE( ib_2dmisc_atrix_2dnd_17ba6b06( g15804, 
                                                      i15805, 
                                                      f15806, 
                                                      m15807, 
                                                      _TSCP( 12 ) ) );
}

DEFTSCP( ib_2dmisc_dimensions_4d85f46e_v );
DEFCSTRING( t20249, "MATRIX-DIMENSIONS" );
EXTERNTSCPP( qobischeme_vector_2dappend, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_vector_2dappend_v );

TSCP  ib_2dmisc_dimensions_4d85f46e( m15809 )
        TSCP  m15809;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20249 );
        X1 = sc_emptyvector;
        X2 = X1;
        X3 = m15809;
L20253:
        if  ( NOT( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )
            )  goto L20254;
        X7 = C_FIXED( VECTOR_LENGTH( X3 ) );
        X6 = scrt1_cons_2a( X7, CONS( EMPTYLIST, EMPTYLIST ) );
        X5 = CONS( scrt4_list_2d_3evector( X6 ), EMPTYLIST );
        X4 = qobischeme_vector_2dappend( CONS( X2, X5 ) );
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20258;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20258:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L20260;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20260:
        X3 = VECTOR_ELEMENT( X3, _TSCP( 0 ) );
        X2 = X4;
        GOBACK( L20253 );
L20254:
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_matrix_2dtrace_v );
DEFCSTRING( t20262, "MATRIX-TRACE" );
EXTERNTSCPP( obischeme_duplicates_bbb15811, XAL1( TSCP ) );
EXTERNTSCP( obischeme_duplicates_bbb15811_v );

TSCP  toollib_2dmisc_l15846( __15847, c20270 )
        TSCP  __15847, c20270;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15846 [inside MATRIX-TRACE]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20270, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15844( i15845, c20268 )
        TSCP  i15845, c20268;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15844 [inside MATRIX-TRACE]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20268, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20268, 1 );
        DISPLAY( 2 ) = i15845;
        X5 = MAKEPROCEDURE( 0, 
                            1, 
                            toollib_2dmisc_l15846, 
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

TSCP  toollib_2dmisc_matrix_2dtrace( m15835 )
        TSCP  m15835;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20262 );
        DISPLAY( 0 ) = m15835;
        X2 = ib_2dmisc_dimensions_4d85f46e( DISPLAY( 0 ) );
        X1 = scrt4_vector_2d_3elist( X2 );
        DISPLAY( 1 ) = scrt1_length( X1 );
        X3 = obischeme_duplicates_bbb15811( X1 );
        X2 = scrt1_length( X3 );
        if  ( TRUE( qobischeme__3d_2dtwo( X2, _TSCP( 4 ) ) ) )  goto L20266;
        qobischeme_panic( c15843, EMPTYLIST );
L20266:
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15844, 
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
DEFCSTRING( t20272, "MAP-M-N" );

TSCP  toollib_2dmisc_map_2dm_2dn( f15849, m15850, n15851 )
        TSCP  f15849, m15850, n15851;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20272 );
        X1 = m15850;
        X2 = EMPTYLIST;
L20275:
        if  ( FALSE( qobischeme__3e_2dtwo( X1, n15851 ) ) )  goto L20276;
        POPSTACKTRACE( scrt1_reverse( X2 ) );
L20276:
        X3 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        X5 = f15849;
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( X1, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X2 = sc_cons( X4, X2 );
        X1 = X3;
        GOBACK( L20275 );
}

DEFTSCP( ib_2dmisc_ch_2dm_2dn_8222982c_v );
DEFCSTRING( t20278, "FOR-EACH-M-N" );

TSCP  ib_2dmisc_ch_2dm_2dn_8222982c( f15867, m15868, n15869 )
        TSCP  f15867, m15868, n15869;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20278 );
        X1 = m15868;
L20281:
        if  ( TRUE( qobischeme__3e_2dtwo( X1, n15869 ) ) )  goto L20282;
        X2 = f15867;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, PROCEDURE_CLOSURE( X2 ) );
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20281 );
L20282:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dn_2ddec_6800fcab_v );
DEFCSTRING( t20285, "FOR-EACH-M-N-DEC" );

TSCP  ib_2dmisc__2dn_2ddec_6800fcab( f15882, m15883, n15884 )
        TSCP  f15882, m15883, n15884;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20285 );
        X1 = m15883;
L20288:
        if  ( TRUE( qobischeme__3c_2dtwo( X1, n15884 ) ) )  goto L20289;
        X2 = f15882;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, PROCEDURE_CLOSURE( X2 ) );
        X1 = qobischeme__2d_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20288 );
L20289:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_concat_v );
DEFCSTRING( t20292, "CONCAT" );
EXTERNTSCPP( scrt1_append, XAL1( TSCP ) );
EXTERNTSCP( scrt1_append_v );

TSCP  toollib_2dmisc_concat( l15897 )
        TSCP  l15897;
{
        PUSHSTACKTRACE( t20292 );
        POPSTACKTRACE( qobischeme_reduce( scrt1_append_v, 
                                          l15897, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_lat_2dlist_6a66ab96_v );
DEFCSTRING( t20294, "MATRIX->FLAT-LIST" );
EXTERNTSCPP( ib_2dmisc_e_2dmatrix_11b5d357, XAL1( TSCP ) );
EXTERNTSCP( ib_2dmisc_e_2dmatrix_11b5d357_v );

TSCP  ib_2dmisc_lat_2dlist_6a66ab96( p15899 )
        TSCP  p15899;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20294 );
        X1 = ib_2dmisc_e_2dmatrix_11b5d357( p15899 );
        POPSTACKTRACE( scrt4_vector_2d_3elist( X1 ) );
}

DEFTSCP( toollib_2dmisc_map_2dn_2d3_v );
DEFCSTRING( t20296, "MAP-N-3" );

TSCP  toollib_2dmisc_l15909( z15910, c20302 )
        TSCP  z15910, c20302;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15909 [inside MAP-N-3]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20302, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20302, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20302, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          z15910, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l15907( y15908, c20300 )
        TSCP  y15908, c20300;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15907 [inside MAP-N-3]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20300, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20300, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20300, 2 );
        DISPLAY( 4 ) = y15908;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15909, 
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

TSCP  toollib_2dmisc_l15905( x15906, c20298 )
        TSCP  x15906, c20298;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15905 [inside MAP-N-3]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20298, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20298, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20298, 2 );
        DISPLAY( 3 ) = x15906;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15907, 
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

TSCP  toollib_2dmisc_map_2dn_2d3( f15901, 
                                  x15902, y15903, z15904 )
        TSCP  f15901, x15902, y15903, z15904;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20296 );
        DISPLAY( 0 ) = f15901;
        DISPLAY( 1 ) = y15903;
        DISPLAY( 2 ) = z15904;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15905, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn( X1, x15902 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_at_2dn_2d3_628f792d_v );
DEFCSTRING( t20304, "MAP-CONCAT-N-3" );
EXTERNTSCPP( ib_2dmisc_concat_2dn_feb89efa, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ib_2dmisc_concat_2dn_feb89efa_v );

TSCP  toollib_2dmisc_l15920( z15921, c20310 )
        TSCP  z15921, c20310;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15920 [inside MAP-CONCAT-N-3]" );
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
                                          z15921, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l15918( y15919, c20308 )
        TSCP  y15919, c20308;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15918 [inside MAP-CONCAT-N-3]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20308, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20308, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20308, 2 );
        DISPLAY( 4 ) = y15919;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15920, 
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

TSCP  toollib_2dmisc_l15916( x15917, c20306 )
        TSCP  x15917, c20306;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l15916 [inside MAP-CONCAT-N-3]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20306, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20306, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20306, 2 );
        DISPLAY( 3 ) = x15917;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15918, 
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

TSCP  ib_2dmisc_at_2dn_2d3_628f792d( f15912, 
                                     x15913, y15914, z15915 )
        TSCP  f15912, x15913, y15914, z15915;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20304 );
        DISPLAY( 0 ) = f15912;
        DISPLAY( 1 ) = y15914;
        DISPLAY( 2 ) = z15915;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15916, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_concat_2dn_feb89efa( X1, x15913 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_c893abe0_v );
DEFCSTRING( t20312, "MAP-VECTOR-2D" );

TSCP  ib_2dmisc_ector_2d2d_c893abe0( f15923, m15924 )
        TSCP  f15923, m15924;
{
        PUSHSTACKTRACE( t20312 );
        POPSTACKTRACE( toollib_2dmisc_map_2dmatrix( f15923, m15924 ) );
}

DEFTSCP( ib_2dmisc_2d2_2dargs_aa33907c_v );
DEFCSTRING( t20314, "MAP-VECTOR-2D-2-ARGS" );

TSCP  toollib_2dmisc_l15932( x15933, x15934, c20318 )
        TSCP  x15933, x15934, c20318;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15932 [inside MAP-VECTOR-2D-2-ARGS]\
" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20318, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15933, 
                                          x15934, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15929( v15930, v15931, c20316 )
        TSCP  v15930, v15931, c20316;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15929 [inside MAP-VECTOR-2D-2-ARGS]\
" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20316, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15932, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_map_2dvector( X3, 
                                      v15930, 
                                      CONS( v15931, EMPTYLIST ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_2d2_2dargs_aa33907c( f15926, m15927, m15928 )
        TSCP  f15926, m15927, m15928;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20314 );
        DISPLAY( 0 ) = f15926;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15929, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, 
                                         m15927, 
                                         CONS( m15928, EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_r_2d2d_2d2_b146b1cb_v );
DEFCSTRING( t20320, "MAP-VECTOR-2D-2" );

TSCP  toollib_2dmisc_l15942( x15943, y15944, c20324 )
        TSCP  x15943, y15944, c20324;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15942 [inside MAP-VECTOR-2D-2]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20324, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 2 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15943, 
                                          y15944, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15939( a15940, b15941, c20322 )
        TSCP  a15940, b15941, c20322;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15939 [inside MAP-VECTOR-2D-2]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20322, 0 );
        X3 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15942, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_map_2dvector( X3, 
                                      a15940, 
                                      CONS( b15941, EMPTYLIST ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_r_2d2d_2d2_b146b1cb( f15936, a15937, b15938 )
        TSCP  f15936, a15937, b15938;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20320 );
        DISPLAY( 0 ) = f15936;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l15939, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dvector( X1, 
                                         a15937, 
                                         CONS( b15938, EMPTYLIST ) );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_cf4cd6d4_v );
DEFCSTRING( t20326, "SOME-VECTOR-2D" );
EXTERNTSCPP( qobischeme_some_2dvector, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_some_2dvector_v );

TSCP  toollib_2dmisc_l15950( x15951, c20330 )
        TSCP  x15951, c20330;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15950 [inside SOME-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20330, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( x15951, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l15948( s15949, c20328 )
        TSCP  s15949, c20328;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15948 [inside SOME-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20328, 0 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15950, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        X2 = qobischeme_some_2dvector( X3, s15949, EMPTYLIST );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_ector_2d2d_cf4cd6d4( p15946, v15947 )
        TSCP  p15946, v15947;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20326 );
        DISPLAY( 0 ) = p15946;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15948, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_some_2dvector( X1, v15947, EMPTYLIST );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_d35ffcee_v );
DEFCSTRING( t20332, "EVERY-VECTOR-2D" );

TSCP  toollib_2dmisc_l15955( x15956, c20336 )
        TSCP  x15956, c20336;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15955 [inside EVERY-VECTOR-2D]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20336, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 1 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X3 ) )( x15956, 
                                                  PROCEDURE_CLOSURE( X3 ) ) )
            )  goto L20338;
        X2 = FALSEVALUE;
        goto L20339;
L20338:
        X2 = TRUEVALUE;
L20339:
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc_ector_2d2d_d35ffcee( p15953, v15954 )
        TSCP  p15953, v15954;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20332 );
        DISPLAY( 0 ) = p15953;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15955, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( TRUE( ib_2dmisc_ector_2d2d_cf4cd6d4( X1, v15954 ) )
            )  goto L20334;
        SDVAL = TRUEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20334:
        SDVAL = FALSEVALUE;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_ddea0349_v );
DEFCSTRING( t20340, "REDUCE-VECTOR-2D" );

TSCP  ib_2dmisc_ector_2d2d_ddea0349( f15958, m15959, i15960 )
        TSCP  f15958, m15959, i15960;
{
        PUSHSTACKTRACE( t20340 );
        POPSTACKTRACE( ib_2dmisc_e_2dmatrix_500e2fbc( f15958, 
                                                      m15959, i15960 ) );
}

DEFTSCP( toollib_2dmisc_shape_2dmatrix_v );
DEFCSTRING( t20342, "SHAPE-MATRIX" );

TSCP  toollib_2dmisc_l15968( i15969, c20349 )
        TSCP  i15969, c20349;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l15968 [inside SHAPE-MATRIX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20349, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20349, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20349, 2 );
        X5 = DISPLAY( 2 );
        X7 = qobischeme__2a_2dtwo( i15969, DISPLAY( 1 ) );
        X9 = qobischeme__2b_2dtwo( i15969, _TSCP( 4 ) );
        X8 = qobischeme__2a_2dtwo( X9, DISPLAY( 1 ) );
        X6 = qobischeme_subvector( DISPLAY( 0 ), X7, X8 );
        if  ( AND( EQ( TSCPTAG( X5 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X5 ), VECTORTAG ) ) )  goto L20352;
        scdebug_error( c14283, 
                       c13403, CONS( X5, EMPTYLIST ) );
L20352:
        if  ( EQ( TSCPTAG( i15969 ), FIXNUMTAG ) )  goto L20354;
        scdebug_error( c14283, 
                       c13406, CONS( i15969, EMPTYLIST ) );
L20354:
        if  ( LT( _S2CUINT( FIXED_C( i15969 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X5 ) ) ) )  goto L20356;
        scdebug_error( c14283, 
                       c13410, CONS( i15969, EMPTYLIST ) );
L20356:
        X4 = SETGEN( VECTOR_ELEMENT( X5, i15969 ), X6 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_shape_2dmatrix( v15962, c15963 )
        TSCP  v15962, c15963;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20342 );
        DISPLAY( 0 ) = v15962;
        DISPLAY( 1 ) = c15963;
        X3 = DISPLAY( 0 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20345;
        scdebug_error( c13418, 
                       c13403, CONS( X3, EMPTYLIST ) );
L20345:
        X2 = C_FIXED( VECTOR_LENGTH( X3 ) );
        X1 = qobischeme__2f_2dtwo( X2, DISPLAY( 1 ) );
        DISPLAY( 2 ) = sc_make_2dvector( X1, EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l15968, 
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
DEFCSTRING( t20358, "UNSHAPE-MATRIX" );
EXTERNTSCPP( toollib_2dmisc_matrix_3f, XAL1( TSCP ) );
EXTERNTSCP( toollib_2dmisc_matrix_3f_v );

TSCP  ib_2dmisc_e_2dmatrix_11b5d357( m15998 )
        TSCP  m15998;
{
        PUSHSTACKTRACE( t20358 );
L20359:
        if  ( TRUE( scrt1_equal_3f( m15998, sc_emptyvector ) )
            )  goto L20360;
        if  ( FALSE( toollib_2dmisc_matrix_3f( m15998 ) ) )  goto L20362;
        m15998 = qobischeme_reduce_2dvector( ib_2dmisc_d_2dvector_58ad8696_v, 
                                             m15998, sc_emptyvector );
        GOBACK( L20359 );
L20362:
        POPSTACKTRACE( m15998 );
L20360:
        POPSTACKTRACE( m15998 );
}

DEFTSCP( ib_2dmisc_of_2dlists_d3b9f71d_v );
DEFCSTRING( t20364, "MATRIX->LIST-OF-LISTS" );

TSCP  ib_2dmisc_of_2dlists_d3b9f71d( m16004 )
        TSCP  m16004;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20364 );
        X1 = qobischeme_map_2dvector( scrt4_vector_2d_3elist_v, 
                                      m16004, EMPTYLIST );
        POPSTACKTRACE( scrt4_vector_2d_3elist( X1 ) );
}

DEFTSCP( ib_2dmisc_d_3ematrix_c6388f1f_v );
DEFCSTRING( t20366, "LIST-OF-LISTS->MATRIX" );

TSCP  ib_2dmisc_d_3ematrix_c6388f1f( l16006 )
        TSCP  l16006;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20366 );
        X2 = l16006;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20370:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20371;
        X1 = X3;
        goto L20378;
L20371:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20374;
        scrt1__24__car_2derror( X2 );
L20374:
        X7 = PAIR_CAR( X2 );
        X6 = scrt4_list_2d_3evector( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20377;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20370 );
L20377:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20382;
        scdebug_error( c13505, 
                       c13506, CONS( X4, EMPTYLIST ) );
L20382:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20370 );
L20378:
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( ib_2dmisc_of_2dlists_4a915dec_v );
DEFCSTRING( t20384, "TRANSPOSE-LIST-OF-LISTS" );
EXTERNTSCPP( qobischeme_transpose, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_transpose_v );

TSCP  ib_2dmisc_of_2dlists_4a915dec( l16050 )
        TSCP  l16050;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20384 );
        X2 = ib_2dmisc_d_3ematrix_c6388f1f( l16050 );
        X1 = qobischeme_transpose( X2 );
        POPSTACKTRACE( ib_2dmisc_of_2dlists_d3b9f71d( X1 ) );
}

DEFTSCP( toollib_2dmisc_zip_v );
DEFCSTRING( t20386, "ZIP" );

TSCP  toollib_2dmisc_l16097( a16098, b16099, c20388 )
        TSCP  a16098, b16099, c20388;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16097 [inside ZIP]" );
        X1 = b16099;
        X2 = a16098;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20392:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20393;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L20396;
        scrt1__24__car_2derror( X1 );
L20396:
        X7 = PAIR_CAR( X1 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20399;
        scrt1__24__car_2derror( X2 );
L20399:
        X8 = PAIR_CAR( X2 );
        X6 = sc_cons( X7, X8 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20402;
        X6 = PAIR_CDR( X1 );
        X7 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X7;
        X1 = X6;
        GOBACK( L20392 );
L20402:
        X6 = PAIR_CDR( X1 );
        X7 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20409;
        scdebug_error( c13505, 
                       c13506, CONS( X4, EMPTYLIST ) );
L20409:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X7;
        X1 = X6;
        GOBACK( L20392 );
L20393:
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( scrt1_list, XAL1( TSCP ) );
EXTERNTSCP( scrt1_list_v );

TSCP  toollib_2dmisc_zip( a16052, b16053, c16054 )
        TSCP  a16052, b16053, c16054;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20386 );
        X2 = MAKEPROCEDURE( 2, 
                            0, toollib_2dmisc_l16097, EMPTYLIST );
        X3 = sc_cons( b16053, c16054 );
        X5 = a16052;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L20413:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20414;
        X4 = X6;
        goto L20421;
L20414:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L20417;
        scrt1__24__car_2derror( X5 );
L20417:
        X9 = scrt1_list( CONS( PAIR_CAR( X5 ), EMPTYLIST ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L20420;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L20413 );
L20420:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L20425;
        scdebug_error( c13505, 
                       c13506, CONS( X7, EMPTYLIST ) );
L20425:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L20413 );
L20421:
        X1 = toollib_2dmisc_foldl( X2, X3, X4 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20429:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20430;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20433;
        scrt1__24__car_2derror( X2 );
L20433:
        X7 = PAIR_CAR( X2 );
        X6 = scrt1_reverse( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20436;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20429 );
L20436:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20441;
        scdebug_error( c13505, 
                       c13506, CONS( X4, EMPTYLIST ) );
L20441:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20429 );
L20430:
        POPSTACKTRACE( X3 );
}

DEFTSCP( toollib_2dmisc_take_v );
DEFCSTRING( t20443, "TAKE" );

TSCP  toollib_2dmisc_take( n16200, l16201 )
        TSCP  n16200, l16201;
{
        PUSHSTACKTRACE( t20443 );
        POPSTACKTRACE( qobischeme_sublist( l16201, 
                                           _TSCP( 0 ), n16200 ) );
}

DEFTSCP( toollib_2dmisc_take_2duntil_v );
DEFCSTRING( t20445, "TAKE-UNTIL" );

TSCP  toollib_2dmisc_take_2duntil( p16203, l16204 )
        TSCP  p16203, l16204;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20445 );
        X2 = l16204;
        X1 = EMPTYLIST;
L20448:
        X3 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X3 ) )  goto L20453;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20457;
        scrt1__24__car_2derror( X2 );
L20457:
        X5 = PAIR_CAR( X2 );
        X4 = p16203;
        X4 = UNKNOWNCALL( X4, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                                 PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L20453;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20460;
        scrt1__24__cdr_2derror( X2 );
L20460:
        X4 = PAIR_CDR( X2 );
        X5 = PAIR_CAR( X2 );
        X1 = sc_cons( X5, X1 );
        X2 = X4;
        GOBACK( L20448 );
L20453:
        POPSTACKTRACE( scrt1_reverse( X1 ) );
}

DEFTSCP( toollib_2dmisc_drop_v );
DEFCSTRING( t20463, "DROP" );

TSCP  toollib_2dmisc_drop( n16235, l16236 )
        TSCP  n16235, l16236;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20463 );
        X1 = scrt1_length( l16236 );
        POPSTACKTRACE( qobischeme_sublist( l16236, n16235, X1 ) );
}

DEFTSCP( toollib_2dmisc_drop_2duntil_v );
DEFCSTRING( t20465, "DROP-UNTIL" );

TSCP  toollib_2dmisc_drop_2duntil( p16238, l16239 )
        TSCP  p16238, l16239;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20465 );
        X1 = l16239;
L20468:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20469;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L20474;
        scrt1__24__car_2derror( X1 );
L20474:
        X3 = PAIR_CAR( X1 );
        X2 = p16238;
        X2 = UNKNOWNCALL( X2, 1 );
        if  ( TRUE( VIA( PROCEDURE_CODE( X2 ) )( X3, 
                                                 PROCEDURE_CLOSURE( X2 ) ) )
            )  goto L20471;
        X1 = PAIR_CDR( X1 );
        GOBACK( L20468 );
L20471:
        POPSTACKTRACE( X1 );
L20469:
        POPSTACKTRACE( X1 );
}

DEFTSCP( toollib_2dmisc_fold_v );
DEFCSTRING( t20477, "FOLD" );
EXTERNTSCPP( toollib_2dmisc_foldr, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_foldr_v );

TSCP  toollib_2dmisc_fold( f16264, l16265, i16266 )
        TSCP  f16264, l16265, i16266;
{
        PUSHSTACKTRACE( t20477 );
        POPSTACKTRACE( toollib_2dmisc_foldr( f16264, 
                                             l16265, i16266 ) );
}

DEFTSCP( toollib_2dmisc_foldl_v );
DEFCSTRING( t20479, "FOLDL" );

TSCP  toollib_2dmisc_foldl( f16268, l16269, i16270 )
        TSCP  f16268, l16269, i16270;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20479 );
        X1 = l16269;
        X2 = i16270;
L20482:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L20483;
        X3 = qobischeme_rest( X1 );
        X5 = qobischeme_first( X1 );
        X4 = f16268;
        X4 = UNKNOWNCALL( X4, 2 );
        X2 = VIA( PROCEDURE_CODE( X4 ) )( X2, 
                                          X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        X1 = X3;
        GOBACK( L20482 );
L20483:
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_foldr_v );
DEFCSTRING( t20485, "FOLDR" );
EXTERNTSCPP( toollib_2dmisc_l16291, XAL1( TSCP ) );

TSCP  toollib_2dmisc_l16291( l16293 )
        TSCP  l16293;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside FOLDR]" );
        if  ( EQ( _S2CUINT( l16293 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20489;
        if  ( EQ( TSCPTAG( l16293 ), PAIRTAG ) )  goto L20492;
        scrt1__24__car_2derror( l16293 );
L20492:
        X2 = PAIR_CAR( l16293 );
        X4 = qobischeme_rest( l16293 );
        X3 = toollib_2dmisc_l16291( X4 );
        X1 = DISPLAY( 0 );
        X1 = UNKNOWNCALL( X1, 2 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                    X3, 
                                                    PROCEDURE_CLOSURE( X1 ) ) );
L20489:
        POPSTACKTRACE( DISPLAY( 1 ) );
}

TSCP  toollib_2dmisc_foldr( f16285, l16286, i16287 )
        TSCP  f16285, l16286, i16287;
{
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20485 );
        DISPLAY( 0 ) = f16285;
        DISPLAY( 1 ) = i16287;
        SDVAL = toollib_2dmisc_l16291( l16286 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_join_v );
DEFCSTRING( t20494, "JOIN" );

TSCP  toollib_2dmisc_join( l16304 )
        TSCP  l16304;
{
        PUSHSTACKTRACE( t20494 );
        POPSTACKTRACE( qobischeme_reduce( scrt1_append_v, 
                                          l16304, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_map_2dconcat_v );
DEFCSTRING( t20496, "MAP-CONCAT" );

TSCP  toollib_2dmisc_map_2dconcat( f16306, l16307 )
        TSCP  f16306, l16307;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20496 );
        X2 = l16307;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L20499:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L20500;
        X1 = X3;
        goto L20507;
L20500:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L20503;
        scrt1__24__car_2derror( X2 );
L20503:
        X8 = PAIR_CAR( X2 );
        X7 = f16306;
        X7 = UNKNOWNCALL( X7, 1 );
        X6 = VIA( PROCEDURE_CODE( X7 ) )( X8, 
                                          PROCEDURE_CLOSURE( X7 ) );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20506;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L20499 );
L20506:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20511;
        scdebug_error( c13505, 
                       c13506, CONS( X4, EMPTYLIST ) );
L20511:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L20499 );
L20507:
        POPSTACKTRACE( toollib_2dmisc_join( X1 ) );
}

DEFTSCP( ib_2dmisc_concat_2dn_feb89efa_v );
DEFCSTRING( t20513, "MAP-CONCAT-N" );

TSCP  ib_2dmisc_concat_2dn_feb89efa( f16351, n16352 )
        TSCP  f16351, n16352;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20513 );
        X1 = qobischeme_map_2dn( f16351, n16352 );
        POPSTACKTRACE( toollib_2dmisc_join( X1 ) );
}

DEFTSCP( toollib_2dmisc_ring_2dforward_v );
DEFCSTRING( t20515, "RING-FORWARD" );

TSCP  toollib_2dmisc_ring_2dforward( l16354 )
        TSCP  l16354;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20515 );
        X1 = scrt1_length( l16354 );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, _TSCP( 4 ) ) )
            )  goto L20517;
        X1 = qobischeme_last( l16354 );
        X4 = scrt1_reverse( l16354 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20520;
        scrt1__24__cdr_2derror( X4 );
L20520:
        X3 = PAIR_CDR( X4 );
        X2 = scrt1_reverse( X3 );
        POPSTACKTRACE( sc_cons( X1, X2 ) );
L20517:
        POPSTACKTRACE( l16354 );
}

DEFTSCP( ib_2dmisc_2dbackward_b31d3193_v );
DEFCSTRING( t20522, "RING-BACKWARD" );

TSCP  ib_2dmisc_2dbackward_b31d3193( l16363 )
        TSCP  l16363;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20522 );
        if  ( EQ( TSCPTAG( l16363 ), PAIRTAG ) )  goto L20525;
        scrt1__24__cdr_2derror( l16363 );
L20525:
        X1 = PAIR_CDR( l16363 );
        X3 = PAIR_CAR( l16363 );
        X2 = scrt1_cons_2a( X3, CONS( EMPTYLIST, EMPTYLIST ) );
        POPSTACKTRACE( scrt1_append_2dtwo( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_rward_2dto_988e410e_v );
DEFCSTRING( t20528, "RING-FORWARD-TO" );

TSCP  ib_2dmisc_rward_2dto_988e410e( l16373, o16374 )
        TSCP  l16373, o16374;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20528 );
L20529:
        if  ( EQ( TSCPTAG( l16373 ), PAIRTAG ) )  goto L20533;
        scrt1__24__car_2derror( l16373 );
L20533:
        X1 = PAIR_CAR( l16373 );
        if  ( TRUE( scrt1_equal_3f( o16374, X1 ) ) )  goto L20530;
        X1 = toollib_2dmisc_ring_2dforward( l16373 );
        l16373 = X1;
        GOBACK( L20529 );
L20530:
        POPSTACKTRACE( l16373 );
}

DEFTSCP( ib_2dmisc__2dbetween_6d18396f_v );
DEFCSTRING( t20535, "RING-FORWARD-BETWEEN" );
EXTERNTSCPP( qobischeme_position, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_position_v );

TSCP  ib_2dmisc__2dbetween_6d18396f( r16380, a16381, b16382 )
        TSCP  r16380, a16381, b16382;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20535 );
        X3 = ib_2dmisc_rward_2dto_988e410e( r16380, a16381 );
        X2 = qobischeme_position( b16382, X3 );
        X1 = qobischeme__2b_2dtwo( X2, _TSCP( 4 ) );
        X2 = ib_2dmisc_rward_2dto_988e410e( r16380, a16381 );
        POPSTACKTRACE( toollib_2dmisc_take( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_d_2dvector_dc5a608e_v );
DEFCSTRING( t20537, "MAP-INDEXED-VECTOR" );

TSCP  toollib_2dmisc_l16392( i16393, c20543 )
        TSCP  i16393, c20543;
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

        PUSHSTACKTRACE( "toollib_2dmisc_l16392 [inside MAP-INDEXED-VECTOR]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20543, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20543, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20543, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20543, 3 );
        X6 = DISPLAY( 3 );
        X10 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X10 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X10 ), VECTORTAG ) )
            )  goto L20546;
        scdebug_error( c13402, 
                       c13403, CONS( X10, EMPTYLIST ) );
L20546:
        if  ( EQ( TSCPTAG( i16393 ), FIXNUMTAG ) )  goto L20548;
        scdebug_error( c13402, 
                       c13406, CONS( i16393, EMPTYLIST ) );
L20548:
        if  ( LT( _S2CUINT( FIXED_C( i16393 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X10 ) ) ) )  goto L20550;
        scdebug_error( c13402, 
                       c13410, CONS( i16393, EMPTYLIST ) );
L20550:
        X9 = VECTOR_ELEMENT( X10, i16393 );
        X11 = DISPLAY( 2 );
        X12 = X11;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L20554:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L20555;
        X15 = X13;
        goto L20568;
L20555:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L20558;
        scrt1__24__car_2derror( X12 );
L20558:
        X18 = PAIR_CAR( X12 );
        if  ( AND( EQ( TSCPTAG( X18 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X18 ), VECTORTAG ) )
            )  goto L20562;
        scdebug_error( c13402, 
                       c13403, CONS( X18, EMPTYLIST ) );
L20562:
        if  ( LT( _S2CUINT( FIXED_C( i16393 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X18 ) ) ) )  goto L20564;
        scdebug_error( c13402, 
                       c13410, CONS( i16393, EMPTYLIST ) );
L20564:
        X17 = VECTOR_ELEMENT( X18, i16393 );
        X16 = sc_cons( X17, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L20567;
        X17 = PAIR_CDR( X12 );
        X14 = X16;
        X13 = X16;
        X12 = X17;
        GOBACK( L20554 );
L20567:
        X17 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L20572;
        scdebug_error( c13505, 
                       c13506, CONS( X14, EMPTYLIST ) );
L20572:
        X14 = SETGEN( PAIR_CDR( X14 ), X16 );
        X12 = X17;
        GOBACK( L20554 );
L20568:
        X10 = CONS( X15, EMPTYLIST );
        X8 = scrt1_cons_2a( X9, CONS( i16393, X10 ) );
        X7 = sc_apply_2dtwo( DISPLAY( 0 ), X8 );
        if  ( AND( EQ( TSCPTAG( X6 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X6 ), VECTORTAG ) ) )  goto L20575;
        scdebug_error( c14283, 
                       c13403, CONS( X6, EMPTYLIST ) );
L20575:
        if  ( LT( _S2CUINT( FIXED_C( i16393 ) ), 
                  _S2CUINT( VECTOR_LENGTH( X6 ) ) ) )  goto L20577;
        scdebug_error( c14283, 
                       c13410, CONS( i16393, EMPTYLIST ) );
L20577:
        X5 = SETGEN( VECTOR_ELEMENT( X6, i16393 ), X7 );
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 0 ) = X3;
        DISPLAY( 3 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  ib_2dmisc_d_2dvector_dc5a608e( f16387, v16388, _2616389 )
        TSCP  f16387, v16388, _2616389;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20537 );
        DISPLAY( 0 ) = f16387;
        DISPLAY( 1 ) = v16388;
        DISPLAY( 2 ) = _2616389;
        X2 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), VECTORTAG ) ) )  goto L20540;
        scdebug_error( c13418, 
                       c13403, CONS( X2, EMPTYLIST ) );
L20540:
        X1 = C_FIXED( VECTOR_LENGTH( X2 ) );
        DISPLAY( 3 ) = sc_make_2dvector( X1, EMPTYLIST );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16392, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ) ) );
        X3 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L20580;
        scdebug_error( c13418, 
                       c13403, CONS( X3, EMPTYLIST ) );
L20580:
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
DEFCSTRING( t20582, "LINE-SEGMENT-CENTER" );

TSCP  ib_2dmisc_t_2dcenter_8103fadf( l16478 )
        TSCP  l16478;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20582 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), _TSCP( 8 ) );
        X3 = qobischeme_p( l16478 );
        X4 = qobischeme_q( l16478 );
        X2 = qobischeme_v_2b( X3, X4 );
        POPSTACKTRACE( qobischeme_k_2av( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_trix_2dref_a6f30345_v );
DEFCSTRING( t20584, "INEXACT-MATRIX-REF" );

TSCP  ib_2dmisc_trix_2dref_a6f30345( m16483, y16484, x16485 )
        TSCP  m16483, y16484, x16485;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20584 );
        X2 = scrt2_round( y16484 );
        X1 = scrt2_inexact_2d_3eexact( X2 );
        X3 = scrt2_round( x16485 );
        X2 = scrt2_inexact_2d_3eexact( X3 );
        POPSTACKTRACE( qobischeme_matrix_2dref( m16483, X1, X2 ) );
}

DEFTSCP( toollib_2dmisc_matrix_3f_v );
DEFCSTRING( t20586, "MATRIX?" );

TSCP  toollib_2dmisc_matrix_3f( v16487 )
        TSCP  v16487;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20586 );
        if  ( NOT( AND( EQ( TSCPTAG( v16487 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( v16487 ), 
                            VECTORTAG ) ) ) )  goto L20588;
        X2 = C_FIXED( VECTOR_LENGTH( v16487 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 0 ) );
        if  ( TRUE( X1 ) )  goto L20592;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20595;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20595:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( v16487 ) ) ) )  goto L20597;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20597:
        X2 = VECTOR_ELEMENT( v16487, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( AND( EQ( TSCPTAG( X2 ), 
                                         EXTENDEDTAG ), 
                                     EQ( TSCP_EXTENDEDTAG( X2 ), 
                                         VECTORTAG ) ) ) );
L20592:
        POPSTACKTRACE( X1 );
L20588:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_submatrix_v );
DEFCSTRING( t20599, "SUBMATRIX" );
EXTERNTSCPP( qobischeme_matrix_2drows, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2drows_v );
EXTERNTSCPP( qobischeme_matrix_2dcolumns, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_matrix_2dcolumns_v );

TSCP  toollib_2dmisc_l16541( y16542, c20604 )
        TSCP  y16542, c20604;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16541 [inside SUBMATRIX]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20604, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20604, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20604, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20604, 3 );
        X6 = DISPLAY( 0 );
        X7 = qobischeme__2b_2dtwo( DISPLAY( 4 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2b_2dtwo( y16542, DISPLAY( 2 ) );
        X9 = qobischeme_matrix_2drows( X6 );
        if  ( FALSE( qobischeme__3c_2dtwo( X7, X9 ) ) )  goto L20607;
        X9 = qobischeme_matrix_2dcolumns( X6 );
        if  ( FALSE( qobischeme__3c_2dtwo( X8, X9 ) ) )  goto L20609;
        X5 = qobischeme_matrix_2dref( X6, X7, X8 );
        goto L20608;
L20609:
        X5 = FALSEVALUE;
        goto L20608;
L20607:
        X5 = FALSEVALUE;
L20608:
        DISPLAY( 2 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_l16539( x16540, c20602 )
        TSCP  x16540, c20602;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l16539 [inside SUBMATRIX]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20602, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20602, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20602, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20602, 3 );
        DISPLAY( 4 ) = x16540;
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16541, 
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

TSCP  toollib_2dmisc_submatrix( m16518, 
                                x16519, y16520, x16521, y16522 )
        TSCP  m16518, x16519, y16520, x16521, y16522;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20599 );
        DISPLAY( 0 ) = m16518;
        DISPLAY( 1 ) = x16519;
        DISPLAY( 2 ) = y16520;
        DISPLAY( 3 ) = y16522;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l16539, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, x16521 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_string_2djoin_v );
DEFCSTRING( t20611, "STRING-JOIN" );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );

TSCP  toollib_2dmisc_l16557( a16558, b16559, c20615 )
        TSCP  a16558, b16559, c20615;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16557 [inside STRING-JOIN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20615, 0 );
        X3 = CONS( b16559, EMPTYLIST );
        X3 = CONS( DISPLAY( 0 ), X3 );
        X2 = scrt3_string_2dappend( CONS( a16558, X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( sc_emptystring );

TSCP  toollib_2dmisc_string_2djoin( d16550, l16551 )
        TSCP  d16550, l16551;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20611 );
        DISPLAY( 0 ) = d16550;
        if  ( EQ( _S2CUINT( l16551 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20613;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16557, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( EQ( TSCPTAG( l16551 ), PAIRTAG ) )  goto L20618;
        scrt1__24__cdr_2derror( l16551 );
L20618:
        X2 = PAIR_CDR( l16551 );
        X3 = PAIR_CAR( l16551 );
        SDVAL = toollib_2dmisc_foldl( X1, X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20613:
        SDVAL = sc_emptystring;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc__2a_2djoin_126dcf23_v );
DEFCSTRING( t20621, "STRING*-JOIN" );
EXTERNTSCPP( b_2dstuff_a_2dappend_2ada51f7, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_a_2dappend_2ada51f7_v );

TSCP  toollib_2dmisc_l16576( a16577, b16578, c20625 )
        TSCP  a16577, b16578, c20625;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16576 [inside STRING*-JOIN]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20625, 0 );
        X3 = CONS( b16578, EMPTYLIST );
        X3 = CONS( DISPLAY( 0 ), X3 );
        X2 = b_2dstuff_a_2dappend_2ada51f7( CONS( a16577, X3 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  ib_2dmisc__2a_2djoin_126dcf23( d16569, l16570 )
        TSCP  d16569, l16570;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20621 );
        DISPLAY( 0 ) = d16569;
        if  ( EQ( _S2CUINT( l16570 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20623;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16576, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( EQ( TSCPTAG( l16570 ), PAIRTAG ) )  goto L20628;
        scrt1__24__cdr_2derror( l16570 );
L20628:
        X2 = PAIR_CDR( l16570 );
        X3 = PAIR_CAR( l16570 );
        SDVAL = toollib_2dmisc_foldl( X1, X2, X3 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
L20623:
        SDVAL = sc_emptystring;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_string_2dfind_v );
DEFCSTRING( t20631, "STRING-FIND" );
EXTERNTSCPP( qobischeme__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme__3e_3d_2dtwo_v );

TSCP  toollib_2dmisc_string_2dfind( s16588, c16589 )
        TSCP  s16588, c16589;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20631 );
        X1 = _TSCP( 0 );
L20634:
        if  ( AND( EQ( TSCPTAG( s16588 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16588 ), STRINGTAG ) )
            )  goto L20638;
        scdebug_error( c16603, 
                       c16604, CONS( s16588, EMPTYLIST ) );
L20638:
        X2 = C_FIXED( STRING_LENGTH( s16588 ) );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, X2 ) ) )  goto L20635;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20643;
        scdebug_error( c16610, 
                       c13406, CONS( X1, EMPTYLIST ) );
L20643:
        X3 = qobischeme_negative_3f( X1 );
        if  ( TRUE( X3 ) )  goto L20649;
        X4 = C_FIXED( STRING_LENGTH( s16588 ) );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X1, X4 ) ) )  goto L20653;
L20649:
        scdebug_error( c16610, 
                       c16622, CONS( X1, EMPTYLIST ) );
L20653:
        X2 = C_CHAR( STRING_CHAR( s16588, X1 ) );
        if  ( TRUE( scrt1_equal_3f( c16589, X2 ) ) )  goto L20640;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20634 );
L20640:
        POPSTACKTRACE( X1 );
L20635:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_om_2dindex_546de6a3_v );
DEFCSTRING( t20654, "STRING-FIND-FROM-INDEX" );

TSCP  ib_2dmisc_om_2dindex_546de6a3( s16627, c16628, s16629 )
        TSCP  s16627, c16628, s16629;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t20654 );
        X1 = s16629;
L20657:
        if  ( AND( EQ( TSCPTAG( s16627 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16627 ), STRINGTAG ) )
            )  goto L20661;
        scdebug_error( c16603, 
                       c16604, CONS( s16627, EMPTYLIST ) );
L20661:
        X2 = C_FIXED( STRING_LENGTH( s16627 ) );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, X2 ) ) )  goto L20658;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L20666;
        scdebug_error( c16610, 
                       c13406, CONS( X1, EMPTYLIST ) );
L20666:
        X3 = qobischeme_negative_3f( X1 );
        if  ( TRUE( X3 ) )  goto L20672;
        X4 = C_FIXED( STRING_LENGTH( s16627 ) );
        if  ( FALSE( qobischeme__3e_3d_2dtwo( X1, X4 ) ) )  goto L20676;
L20672:
        scdebug_error( c16610, 
                       c16622, CONS( X1, EMPTYLIST ) );
L20676:
        X2 = C_CHAR( STRING_CHAR( s16627, X1 ) );
        if  ( TRUE( scrt1_equal_3f( c16628, X2 ) ) )  goto L20663;
        X1 = qobischeme__2b_2dtwo( X1, _TSCP( 4 ) );
        GOBACK( L20657 );
L20663:
        POPSTACKTRACE( X1 );
L20658:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_unlines_v );
DEFCSTRING( t20677, "UNLINES" );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );

TSCP  toollib_2dmisc_unlines( l16663 )
        TSCP  l16663;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20677 );
        X1 = scrt3_list_2d_3estring( c16664 );
        POPSTACKTRACE( toollib_2dmisc_string_2djoin( X1, l16663 ) );
}

DEFTSCP( toollib_2dmisc_lines_v );
DEFCSTRING( t20679, "LINES" );
EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );

TSCP  toollib_2dmisc_lines( s16666 )
        TSCP  s16666;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20679 );
        X1 = _TSCP( 0 );
        X2 = EMPTYLIST;
L20682:
        X3 = ib_2dmisc_om_2dindex_546de6a3( s16666, 
                                            _TSCP( 2578 ), X1 );
        if  ( FALSE( X3 ) )  goto L20684;
        X4 = qobischeme__2b_2dtwo( X3, _TSCP( 4 ) );
        X5 = scrt3_substring( s16666, X1, X3 );
        X2 = sc_cons( X5, X2 );
        X1 = X4;
        GOBACK( L20682 );
L20684:
        if  ( AND( EQ( TSCPTAG( s16666 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16666 ), STRINGTAG ) )
            )  goto L20689;
        scdebug_error( c16603, 
                       c16604, CONS( s16666, EMPTYLIST ) );
L20689:
        X6 = C_FIXED( STRING_LENGTH( s16666 ) );
        X5 = qobischeme__2d_2dtwo( X6, _TSCP( 4 ) );
        if  ( FALSE( qobischeme__3d_2dtwo( X1, X5 ) ) )  goto L20686;
        X4 = X2;
        goto L20687;
L20686:
        if  ( AND( EQ( TSCPTAG( s16666 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s16666 ), STRINGTAG ) )
            )  goto L20692;
        scdebug_error( c16603, 
                       c16604, CONS( s16666, EMPTYLIST ) );
L20692:
        X6 = C_FIXED( STRING_LENGTH( s16666 ) );
        X5 = scrt3_substring( s16666, X1, X6 );
        X4 = sc_cons( X5, X2 );
L20687:
        POPSTACKTRACE( scrt1_reverse( X4 ) );
}

DEFTSCP( toollib_2dmisc_words_v );
DEFCSTRING( t20694, "WORDS" );
EXTERNTSCPP( qobischeme_fields, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_fields_v );
DEFTSCP( toollib_2dmisc_unwords_v );
DEFCSTRING( t20695, "UNWORDS" );

TSCP  toollib_2dmisc_unwords( l16696 )
        TSCP  l16696;
{
        PUSHSTACKTRACE( t20695 );
        POPSTACKTRACE( toollib_2dmisc_string_2djoin( c16697, l16696 ) );
}

DEFTSCP( ib_2dmisc_e_2dcenter_ed08db28_v );
DEFCSTRING( t20697, "MAKE-IMAGE-CENTER" );

TSCP  ib_2dmisc_e_2dcenter_ed08db28( x16700, y16701 )
        TSCP  x16700, y16701;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20697 );
        X1 = sc_make_2dvector( _TSCP( 12 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L20701;
        scdebug_error( c14283, 
                       c13403, CONS( X1, EMPTYLIST ) );
L20701:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20703;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20703:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20705;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20705:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c16715 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20708;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20708:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20710;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20710:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), x16700 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20713;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20713:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L20715;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20715:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), y16701 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc_dcenter_3f_8e2f98a8_v );
DEFCSTRING( t20717, "IMAGE-CENTER?" );

TSCP  ib_2dmisc_dcenter_3f_8e2f98a8( o16740 )
        TSCP  o16740;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20717 );
        if  ( NOT( AND( EQ( TSCPTAG( o16740 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o16740 ), 
                            VECTORTAG ) ) ) )  goto L20719;
        X2 = C_FIXED( VECTOR_LENGTH( o16740 ) );
        X1 = qobischeme__3d_2dtwo( X2, _TSCP( 12 ) );
        if  ( FALSE( X1 ) )  goto L20723;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L20726;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20726:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o16740 ) ) ) )  goto L20728;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 0 ), EMPTYLIST ) );
L20728:
        X2 = VECTOR_ELEMENT( o16740, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c16715 ) ) ) );
L20723:
        POPSTACKTRACE( X1 );
L20719:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc_ter_2dx_21_b89b2172_v );
DEFCSTRING( t20730, "LOCAL-SET-IMAGE-CENTER-X!" );

TSCP  ib_2dmisc_ter_2dx_21_b89b2172( t16773, o16774 )
        TSCP  t16773, o16774;
{
        PUSHSTACKTRACE( t20730 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16773 ) )
            )  goto L20732;
        qobischeme_panic( c16775, EMPTYLIST );
L20732:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t16773, 
                                                      _TSCP( 4 ), 
                                                      o16774 ) );
}

DEFTSCP( ib_2dmisc_center_2dx_b5a9f5f9_v );
DEFCSTRING( t20734, "IMAGE-CENTER-X" );

TSCP  ib_2dmisc_center_2dx_b5a9f5f9( t16778 )
        TSCP  t16778;
{
        PUSHSTACKTRACE( t20734 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16778 ) )
            )  goto L20736;
        qobischeme_panic( c16779, EMPTYLIST );
L20736:
        if  ( AND( EQ( TSCPTAG( t16778 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16778 ), VECTORTAG ) )
            )  goto L20739;
        scdebug_error( c13402, 
                       c13403, CONS( t16778, EMPTYLIST ) );
L20739:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20741;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20741:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16778 ) ) ) )  goto L20743;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20743:
        POPSTACKTRACE( VECTOR_ELEMENT( t16778, _TSCP( 4 ) ) );
}

DEFTSCP( ib_2dmisc_ter_2dx_21_cc37d3ba_v );
DEFCSTRING( t20745, "SET-IMAGE-CENTER-X!" );

TSCP  ib_2dmisc_ter_2dx_21_cc37d3ba( t16792, o16793 )
        TSCP  t16792, o16793;
{
        PUSHSTACKTRACE( t20745 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16792 ) )
            )  goto L20747;
        qobischeme_panic( c16794, EMPTYLIST );
L20747:
        if  ( AND( EQ( TSCPTAG( t16792 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16792 ), VECTORTAG ) )
            )  goto L20750;
        scdebug_error( c14283, 
                       c13403, CONS( t16792, EMPTYLIST ) );
L20750:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L20752;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20752:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16792 ) ) ) )  goto L20754;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 4 ), EMPTYLIST ) );
L20754:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t16792, _TSCP( 4 ) ), 
                               o16793 ) );
}

DEFTSCP( ib_2dmisc_ter_2dy_21_274617_v );
DEFCSTRING( t20756, "LOCAL-SET-IMAGE-CENTER-Y!" );

TSCP  ib_2dmisc_ter_2dy_21_274617( t16808, o16809 )
        TSCP  t16808, o16809;
{
        PUSHSTACKTRACE( t20756 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16808 ) )
            )  goto L20758;
        qobischeme_panic( c16810, EMPTYLIST );
L20758:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t16808, 
                                                      _TSCP( 8 ), 
                                                      o16809 ) );
}

DEFTSCP( ib_2dmisc_center_2dy_c2aec56f_v );
DEFCSTRING( t20760, "IMAGE-CENTER-Y" );

TSCP  ib_2dmisc_center_2dy_c2aec56f( t16813 )
        TSCP  t16813;
{
        PUSHSTACKTRACE( t20760 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16813 ) )
            )  goto L20762;
        qobischeme_panic( c16814, EMPTYLIST );
L20762:
        if  ( AND( EQ( TSCPTAG( t16813 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16813 ), VECTORTAG ) )
            )  goto L20765;
        scdebug_error( c13402, 
                       c13403, CONS( t16813, EMPTYLIST ) );
L20765:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20767;
        scdebug_error( c13402, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20767:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16813 ) ) ) )  goto L20769;
        scdebug_error( c13402, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20769:
        POPSTACKTRACE( VECTOR_ELEMENT( t16813, _TSCP( 8 ) ) );
}

DEFTSCP( ib_2dmisc_ter_2dy_21_748bb4df_v );
DEFCSTRING( t20771, "SET-IMAGE-CENTER-Y!" );

TSCP  ib_2dmisc_ter_2dy_21_748bb4df( t16827, o16828 )
        TSCP  t16827, o16828;
{
        PUSHSTACKTRACE( t20771 );
        if  ( TRUE( ib_2dmisc_dcenter_3f_8e2f98a8( t16827 ) )
            )  goto L20773;
        qobischeme_panic( c16829, EMPTYLIST );
L20773:
        if  ( AND( EQ( TSCPTAG( t16827 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t16827 ), VECTORTAG ) )
            )  goto L20776;
        scdebug_error( c14283, 
                       c13403, CONS( t16827, EMPTYLIST ) );
L20776:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L20778;
        scdebug_error( c14283, 
                       c13406, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20778:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t16827 ) ) ) )  goto L20780;
        scdebug_error( c14283, 
                       c13410, CONS( _TSCP( 8 ), EMPTYLIST ) );
L20780:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t16827, _TSCP( 8 ) ), 
                               o16828 ) );
}

DEFTSCP( ib_2dmisc_e_2dcenter_6f8fe7a1_v );
DEFCSTRING( t20782, "TRANSFORM-LINE-TO-IMAGE-CENTER" );

TSCP  ib_2dmisc_e_2dcenter_6f8fe7a1( l16842, i16843 )
        TSCP  l16842, i16843;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t20782 );
        X4 = ib_2dmisc_center_2dx_b5a9f5f9( i16843 );
        X6 = qobischeme_p( l16842 );
        X5 = qobischeme_x( X6 );
        X3 = qobischeme__2d_2dtwo( X4, X5 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = ib_2dmisc_center_2dy_c2aec56f( i16843 );
        X7 = qobischeme_p( l16842 );
        X6 = qobischeme_y( X7 );
        X2 = scrt1_cons_2a( X3, 
                            CONS( qobischeme__2d_2dtwo( X5, X6 ), 
                                  X4 ) );
        X1 = scrt4_list_2d_3evector( X2 );
        X5 = ib_2dmisc_center_2dx_b5a9f5f9( i16843 );
        X7 = qobischeme_q( l16842 );
        X6 = qobischeme_x( X7 );
        X4 = qobischeme__2d_2dtwo( X5, X6 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X6 = ib_2dmisc_center_2dy_c2aec56f( i16843 );
        X8 = qobischeme_q( l16842 );
        X7 = qobischeme_y( X8 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( qobischeme__2d_2dtwo( X6, X7 ), 
                                  X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        POPSTACKTRACE( obischeme__2dsegment_42724a73( X1, X2 ) );
}

DEFTSCP( ib_2dmisc_ed_2dgc_2a_9062c7ce_v );
DEFCSTRING( t20784, "*THICK-RED-GC*" );
DEFTSCP( ib_2dmisc_ue_2dgc_2a_51440329_v );
DEFCSTRING( t20785, "*THICK-BLUE-GC*" );
DEFTSCP( ib_2dmisc_ge_2dgc_2a_cae315b6_v );
DEFCSTRING( t20786, "*THICK-ORANGE-GC*" );
DEFTSCP( ib_2dmisc_en_2dgc_2a_477bc7e_v );
DEFCSTRING( t20787, "*THICK-GREEN-GC*" );
DEFTSCP( ib_2dmisc_ed_2dgc_2a_ac36d558_v );
DEFCSTRING( t20788, "*MEDIUM-RED-GC*" );
DEFTSCP( ib_2dmisc_ue_2dgc_2a_4814614a_v );
DEFCSTRING( t20789, "*MEDIUM-BLUE-GC*" );
DEFTSCP( ib_2dmisc_ge_2dgc_2a_278f34f6_v );
DEFCSTRING( t20790, "*MEDIUM-ORANGE-GC*" );
DEFTSCP( ib_2dmisc_en_2dgc_2a_d0d5dcfe_v );
DEFCSTRING( t20791, "*MEDIUM-GREEN-GC*" );
DEFTSCP( ib_2dmisc__2dfont_2a_280b0bc8_v );
DEFCSTRING( t20792, "*LARGE-LUCIDA-FONT*" );
DEFTSCP( ib_2dmisc_da_2dgc_2a_30479eb9_v );
DEFCSTRING( t20793, "*LARGE-LUCIDA-GC*" );
DEFTSCP( ib_2dmisc_aseline_2a_eb2c34b2_v );
DEFCSTRING( t20794, "*LARGE-LUCIDA-BASELINE*" );
DEFTSCP( ib_2dmisc_ed_2dgc_2a_cb09fb42_v );
DEFCSTRING( t20795, "SETUP-*THICK-RED-GC*" );
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

        PUSHSTACKTRACE( t20795 );
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
DEFCSTRING( t20797, "SETUP-*THICK-BLUE-GC*" );
EXTERNTSCP( qobischeme__2ablue_2a_v );

TSCP  ib_2dmisc_ue_2dgc_2a_b511a71e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20797 );
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
DEFCSTRING( t20799, "SETUP-*THICK-ORANGE-GC*" );
EXTERNTSCP( qobischeme__2aorange_2a_v );

TSCP  ib_2dmisc_ge_2dgc_2a_8b5f3626(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20799 );
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
DEFCSTRING( t20801, "SETUP-*THICK-GREEN-GC*" );
EXTERNTSCP( qobischeme__2agreen_2a_v );

TSCP  ib_2dmisc_en_2dgc_2a_bc2e4cd5(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20801 );
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
DEFCSTRING( t20803, "SETUP-*MEDIUM-RED-GC*" );

TSCP  ib_2dmisc_ed_2dgc_2a_4863716f(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20803 );
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
DEFCSTRING( t20805, "SETUP-*MEDIUM-BLUE-GC*" );

TSCP  ib_2dmisc_ue_2dgc_2a_f04d91e1(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20805 );
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
DEFCSTRING( t20807, "SETUP-*MEDIUM-ORANGE-GC*" );

TSCP  ib_2dmisc_ge_2dgc_2a_d7c11b91(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20807 );
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
DEFCSTRING( t20809, "SETUP-*MEDIUM-GREEN-GC*" );

TSCP  ib_2dmisc_en_2dgc_2a_9169ff6e(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20809 );
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
DEFCSTRING( t20811, "SETUP-*LARGE-LUCIDA-GC*" );
EXTERNTSCPP( xws6_xloadqueryfont, XAL2( TSCP, TSCP ) );
EXTERNTSCP( xws6_xloadqueryfont_v );
EXTERNTSCPP( ontstruct__2ddescent_aec93f8c, XAL1( TSCP ) );
EXTERNTSCP( ontstruct__2ddescent_aec93f8c_v );
EXTERNTSCP( qobischeme__2aforeground_2a_v );

TSCP  ib_2dmisc_da_2dgc_2a_71fbbd29(  )
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t20811 );
        ib_2dmisc__2dfont_2a_280b0bc8_v = xws6_xloadqueryfont( qobischeme__2adisplay_2a_v, 
                                                               c16854 );
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
DEFCSTRING( t20813, "SETUP-EXTRA-X-GCS" );

TSCP  ib_2dmisc__2dx_2dgcs_966031b0(  )
{
        PUSHSTACKTRACE( t20813 );
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
DEFCSTRING( t20815, "FREE-EXTRA-X-GCS" );
EXTERNTSCPP( xws5_xfreegc, XAL2( TSCP, TSCP ) );
EXTERNTSCP( xws5_xfreegc_v );

TSCP  ib_2dmisc__2dx_2dgcs_425cb919(  )
{
        PUSHSTACKTRACE( t20815 );
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
DEFCSTRING( t20817, "XREMOVE-EXPOSE-EVENTS" );
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

        PUSHSTACKTRACE( t20817 );
L20818:
        X1 = xws8_xpending( qobischeme__2adisplay_2a_v );
        if  ( FALSE( qobischeme__3e_2dtwo( X1, _TSCP( 0 ) ) )
            )  goto L20821;
        X1 = xws8_xpeekevent( qobischeme__2adisplay_2a_v );
        X2 = xevent_xevent_2dxany_2dtype( X1 );
        if  ( FALSE( qobischeme__3d_2dtwo( X2, _TSCP( 48 ) ) )
            )  goto L20824;
        xws8_xnextevent( qobischeme__2adisplay_2a_v );
        GOBACK( L20818 );
L20824:
        POPSTACKTRACE( FALSEVALUE );
L20821:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dbuttons_da277968_v );
DEFCSTRING( t20827, "STANDARD-BUTTONS" );
EXTERNTSCPP( qobischeme_define_2dbutton, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_define_2dbutton_v );
EXTERNTSCP( qobischeme_message_v );
EXTERNTSCPP( qobischeme_help_2dcommand, XAL0(  ) );
EXTERNTSCP( qobischeme_help_2dcommand_v );

TSCP  toollib_2dmisc_l16877( c20829 )
        TSCP  c20829;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16877 [inside STANDARD-BUTTONS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20829, 0 );
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

TSCP  toollib_2dmisc_l16887( c20832 )
        TSCP  c20832;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16887 [inside STANDARD-BUTTONS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20832, 0 );
        X3 = DISPLAY( 0 );
        X3 = UNKNOWNCALL( X3, 0 );
        VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        X2 = qobischeme_help_2dcommand(  );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCP( qobischeme_abort_2dcommand_v );

TSCP  ib_2dmisc__2dbuttons_da277968( b16874, h16875 )
        TSCP  b16874, h16875;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t20827 );
        DISPLAY( 0 ) = h16875;
        X1 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l16877, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        qobischeme_define_2dbutton( _TSCP( 0 ), 
                                    _TSCP( 0 ), 
                                    c16876, FALSEVALUE, X1 );
        X1 = qobischeme__2d_2dtwo( b16874, _TSCP( 4 ) );
        qobischeme_define_2dbutton( X1, 
                                    _TSCP( 0 ), 
                                    c16881, 
                                    FALSEVALUE, qobischeme_quit_v );
        X3 = qobischeme_control( _TSCP( 30738 ) );
        X5 = qobischeme_control( _TSCP( 25362 ) );
        X4 = sc_cons( X5, EMPTYLIST );
        X2 = sc_cons( X3, X4 );
        X1 = X2;
        qobischeme_define_2dkey( X1, c16881, qobischeme_quit_v );
        X1 = qobischeme_control( _TSCP( 26642 ) );
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            toollib_2dmisc_l16887, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        qobischeme_define_2dkey( X1, c16876, X2 );
        X1 = qobischeme_control( _TSCP( 26386 ) );
        SDVAL = qobischeme_define_2dkey( X1, 
                                         c16889, 
                                         qobischeme_abort_2dcommand_v );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_roll_2dbar_94710cad_v );
DEFCSTRING( t20834, "DRAW-CLICKABLE-STRINGS-WITH-SCROLL-BAR" );
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

TSCP  toollib_2dmisc_l16938( x16939, y16940, c20859 )
        TSCP  x16939, y16940, c20859;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l16938 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20859, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20859, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20859, 2 );
        X4 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20859, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20859, 4 );
        X10 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                    DISPLAY( 9 ) );
        X12 = scrt1_length( DISPLAY( 4 ) );
        X13 = qobischeme__2d_2dtwo( y16940, DISPLAY( 9 ) );
        X11 = qobischeme__2a_2dtwo( X12, X13 );
        X12 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X11 ), 
                                           _S2CINT( X10 ) ), 
                                    3 ) ) );
        if  ( FALSE( X12 ) )  goto L20868;
        if  ( EQ( _S2CUINT( X10 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20868;
        X9 = C_FIXED( QUOTIENT( _S2CINT( X11 ), 
                                _S2CINT( X10 ) ) );
        goto L20869;
L20868:
        X9 = scrt2_quotient( X11, X10 );
L20869:
        X12 = scrt1_length( DISPLAY( 4 ) );
        X11 = qobischeme__2d_2dtwo( X12, DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L20871;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X11 ) ) )  goto L20873;
        X10 = _TSCP( 0 );
        goto L20872;
L20873:
        X10 = X11;
        goto L20872;
L20871:
        X10 = scrt2_max_2dtwo( _TSCP( 0 ), X11 );
L20872:
        if  ( BITAND( BITOR( _S2CINT( X10 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L20876;
        if  ( GTE( _S2CINT( X10 ), _S2CINT( X9 ) ) )  goto L20878;
        X8 = X10;
        goto L20877;
L20878:
        X8 = X9;
        goto L20877;
L20876:
        X8 = scrt2_min_2dtwo( X10, X9 );
L20877:
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

TSCP  toollib_2dmisc_l16987( x16988, y16989, c20882 )
        TSCP  x16988, y16989, c20882;
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

        PUSHSTACKTRACE( "toollib_2dmisc_l16987 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20882, 0 );
        X2 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c20882, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20882, 2 );
        X4 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20882, 3 );
        X5 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20882, 4 );
        X6 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20882, 5 );
        X7 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20882, 6 );
        X14 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                    DISPLAY( 9 ) );
        X16 = scrt1_length( DISPLAY( 4 ) );
        X17 = qobischeme__2d_2dtwo( y16989, DISPLAY( 11 ) );
        X15 = qobischeme__2a_2dtwo( X16, X17 );
        X16 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X15 ), 
                                           _S2CINT( X14 ) ), 
                                    3 ) ) );
        if  ( FALSE( X16 ) )  goto L20891;
        if  ( EQ( _S2CUINT( X14 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20891;
        X13 = C_FIXED( QUOTIENT( _S2CINT( X15 ), 
                                 _S2CINT( X14 ) ) );
        goto L20892;
L20891:
        X13 = scrt2_quotient( X15, X14 );
L20892:
        X12 = qobischeme__2b_2dtwo( DISPLAY( 8 ), X13 );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X12 ) ), 
                      3 ) )  goto L20894;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X12 ) ) )  goto L20896;
        X11 = _TSCP( 0 );
        goto L20895;
L20896:
        X11 = X12;
        goto L20895;
L20894:
        X11 = scrt2_max_2dtwo( _TSCP( 0 ), X12 );
L20895:
        X14 = scrt1_length( DISPLAY( 4 ) );
        X13 = qobischeme__2d_2dtwo( X14, DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 0 ) ), 
                             _S2CINT( X13 ) ), 
                      3 ) )  goto L20899;
        if  ( LTE( _S2CINT( _TSCP( 0 ) ), _S2CINT( X13 ) ) )  goto L20901;
        X12 = _TSCP( 0 );
        goto L20900;
L20901:
        X12 = X13;
        goto L20900;
L20899:
        X12 = scrt2_max_2dtwo( _TSCP( 0 ), X13 );
L20900:
        if  ( BITAND( BITOR( _S2CINT( X12 ), 
                             _S2CINT( X11 ) ), 
                      3 ) )  goto L20904;
        if  ( GTE( _S2CINT( X12 ), _S2CINT( X11 ) ) )  goto L20906;
        X10 = X12;
        goto L20905;
L20906:
        X10 = X11;
        goto L20905;
L20904:
        X10 = scrt2_min_2dtwo( X12, X11 );
L20905:
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

TSCP  toollib_2dmisc_l16984( x16985, y16986, c20880 )
        TSCP  x16985, y16986, c20880;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l16984 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20880, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20880, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20880, 2 );
        X4 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20880, 3 );
        X5 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20880, 4 );
        X6 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20880, 5 );
        DISPLAY( 11 ) = y16986;
        X8 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16987, 
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

TSCP  toollib_2dmisc_l17073( x17074, y17075, c20913 )
        TSCP  x17074, y17075, c20913;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17073 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20913, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20913, 1 );
        X3 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20913, 2 );
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

TSCP  toollib_2dmisc_l17089( x17090, y17091, c20916 )
        TSCP  x17090, y17091, c20916;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17089 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20916, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20916, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20916, 2 );
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

TSCP  toollib_2dmisc_l17105( x17106, y17107, c20919 )
        TSCP  x17106, y17107, c20919;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17105 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20919, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20919, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20919, 2 );
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

TSCP  toollib_2dmisc_l17060( s17061, i17062, c20908 )
        TSCP  s17061, i17062, c20908;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17060 [inside DRAW-CLICKABLE-STRING\
S-WITH-SCROLL-BAR]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20908, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20908, 1 );
        X3 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c20908, 2 );
        X4 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c20908, 3 );
        X5 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20908, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20908, 5 );
        DISPLAY( 9 ) = i17062;
        X9 = qobischeme__2a_2dtwo( DISPLAY( 9 ), 
                                   obischeme_dheight_2a_954d402b_v );
        X8 = qobischeme__2b_2dtwo( X9, DISPLAY( 6 ) );
        if  ( AND( EQ( TSCPTAG( s17061 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s17061 ), STRINGTAG ) )
            )  goto L20911;
        scdebug_error( c16603, 
                       c16604, CONS( s17061, EMPTYLIST ) );
L20911:
        X10 = C_FIXED( STRING_LENGTH( s17061 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17061, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17073, 
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
        X10 = C_FIXED( STRING_LENGTH( s17061 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17061, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17089, 
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
        X10 = C_FIXED( STRING_LENGTH( s17061 ) );
        X9 = xws6_xtextwidth( qobischeme__2aroman_2dfont_2a_v, 
                              s17061, X10 );
        X10 = MAKEPROCEDURE( 2, 
                             0, 
                             toollib_2dmisc_l17105, 
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
        X9 = C_FIXED( STRING_LENGTH( s17061 ) );
        X7 = xws6_xdrawstring( qobischeme__2adisplay_2a_v, 
                               obischeme__2dpane_2a_b407de83_v, 
                               qobischeme__2aroman_2dgc_2a_v, 
                               DISPLAY( 5 ), 
                               X8, s17061, X9 );
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

TSCP  ib_2dmisc_roll_2dbar_94710cad( f16891, 
                                     s16892, 
                                     l16893, 
                                     m16894, 
                                     r16895, 
                                     s16896, 
                                     x16897, 
                                     x16898, y16899, y16900 )
        TSCP  f16891, 
              s16892, 
              l16893, 
              m16894, 
              r16895, 
              s16896, x16897, x16898, y16899, y16900;
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

        PUSHSTACKTRACE( t20834 );
        DISPLAY( 0 ) = s16892;
        DISPLAY( 1 ) = l16893;
        DISPLAY( 2 ) = m16894;
        DISPLAY( 3 ) = r16895;
        DISPLAY( 4 ) = s16896;
        DISPLAY( 5 ) = x16897;
        DISPLAY( 6 ) = y16899;
        X1 = obischeme_dheight_2a_954d402b_v;
        X2 = qobischeme__2d_2dtwo( y16900, DISPLAY( 6 ) );
        X3 = BOOLEAN( NOT( BITAND( BITOR( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ), 
                                   3 ) ) );
        if  ( FALSE( X3 ) )  goto L20843;
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L20843;
        DISPLAY( 7 ) = C_FIXED( QUOTIENT( _S2CINT( X2 ), 
                                          _S2CINT( X1 ) ) );
        goto L20844;
L20843:
        DISPLAY( 7 ) = scrt2_quotient( X2, X1 );
L20844:
        X1 = f16891;
        X1 = UNKNOWNCALL( X1, 0 );
        DISPLAY( 8 ) = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        X2 = scrt1_length( DISPLAY( 4 ) );
        X3 = qobischeme__2b_2dtwo( DISPLAY( 8 ), 
                                   DISPLAY( 7 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L20848;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L20850;
        X1 = X3;
        goto L20849;
L20850:
        X1 = X2;
        goto L20849;
L20848:
        X1 = scrt2_min_2dtwo( X3, X2 );
L20849:
        if  ( EQ( _S2CUINT( DISPLAY( 4 ) ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L20853;
        DISPLAY( 9 ) = DISPLAY( 6 );
        DISPLAY( 10 ) = y16900;
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
        X4 = qobischeme__2b_2dtwo( x16898, _TSCP( 16 ) );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        xws6_xfillrectangle( qobischeme__2adisplay_2a_v, 
                             obischeme__2dpane_2a_b407de83_v, 
                             qobischeme__2athin_2dgc_2a_v, 
                             X4, 
                             DISPLAY( 9 ), _TSCP( 4 ), X5 );
        X4 = qobischeme__2b_2dtwo( x16898, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( X3, X2 );
        xws6_xfillrectangle( qobischeme__2adisplay_2a_v, 
                             obischeme__2dpane_2a_b407de83_v, 
                             qobischeme__2athin_2dgc_2a_v, 
                             X4, X2, _TSCP( 20 ), X5 );
        X4 = qobischeme__2b_2dtwo( x16898, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( DISPLAY( 10 ), 
                                   DISPLAY( 9 ) );
        X6 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16938, 
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
        X4 = qobischeme__2b_2dtwo( x16898, _TSCP( 8 ) );
        X5 = qobischeme__2d_2dtwo( X3, X2 );
        X6 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l16984, 
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
L20853:
        X2 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17060, 
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
DEFCSTRING( t20922, "ELLIPSE->LINES" );
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

TSCP  toollib_2dmisc_l17175( i17176, c20936 )
        TSCP  i17176, c20936;
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

        PUSHSTACKTRACE( "toollib_2dmisc_l17175 [inside ELLIPSE->LINES]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c20936, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c20936, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c20936, 2 );
        X4 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c20936, 3 );
        X5 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c20936, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c20936, 5 );
        X7 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c20936, 6 );
        X8 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c20936, 7 );
        X9 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c20936, 8 );
        X10 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c20936, 9 );
        X11 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c20936, 10 );
        X16 = qobischeme__2a_2dtwo( _TSCP( 40 ), i17176 );
        X15 = obischeme__3eradians_78a74454( X16 );
        X14 = qobischeme_sin( X15 );
        X13 = qobischeme__2a_2dtwo( DISPLAY( 4 ), X14 );
        X17 = qobischeme__2a_2dtwo( _TSCP( 40 ), i17176 );
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
        if  ( FALSE( PAIR_CAR( DISPLAY( 0 ) ) ) )  goto L20942;
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
L20942:
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

TSCP  ib_2dmisc_2d_3elines_2a2b92ea( e17150 )
        TSCP  e17150;
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

        PUSHSTACKTRACE( t20922 );
        DISPLAY( 0 ) = FALSEVALUE;
        DISPLAY( 0 ) = CONS( DISPLAY( 0 ), EMPTYLIST );
        DISPLAY( 1 ) = FALSEVALUE;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 2 ) = qobischeme_ellipse_2dx0( e17150 );
        DISPLAY( 3 ) = qobischeme_ellipse_2dy0( e17150 );
        X1 = qobischeme_ellipse_2dt0( e17150 );
        DISPLAY( 4 ) = qobischeme_ellipse_2da( e17150 );
        DISPLAY( 5 ) = qobischeme_ellipse_2db( e17150 );
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
                            toollib_2dmisc_l17175, 
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
DEFCSTRING( t20944, "ACOT" );
EXTERNTSCPP( qobischeme_atan, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_atan_v );

TSCP  toollib_2dmisc_acot( x17229 )
        TSCP  x17229;
{
        TSCP  X1;

        PUSHSTACKTRACE( t20944 );
        X1 = qobischeme_atan( CONS( x17229, EMPTYLIST ) );
        POPSTACKTRACE( qobischeme__2d_2dtwo( qobischeme_half_2dpi_v, 
                                             X1 ) );
}

DEFTSCP( ib_2dmisc__2dinverse_e1b53b4a_v );
DEFCSTRING( t20946, "LEFT-PSEUDO-INVERSE" );
EXTERNTSCPP( qobischeme_invert_2dmatrix, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_invert_2dmatrix_v );

TSCP  ib_2dmisc__2dinverse_e1b53b4a( m17234 )
        TSCP  m17234;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20946 );
        X3 = qobischeme_transpose( m17234 );
        X2 = qobischeme_m_2a( X3, m17234 );
        X1 = qobischeme_invert_2dmatrix( X2 );
        if  ( FALSE( X1 ) )  goto L20949;
        X2 = qobischeme_transpose( m17234 );
        POPSTACKTRACE( qobischeme_m_2a( X1, X2 ) );
L20949:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( ib_2dmisc__2dinverse_2d42fdb5_v );
DEFCSTRING( t20951, "RIGHT-PSEUDO-INVERSE" );

TSCP  ib_2dmisc__2dinverse_2d42fdb5( m17238 )
        TSCP  m17238;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t20951 );
        X3 = qobischeme_transpose( m17238 );
        X2 = qobischeme_m_2a( m17238, X3 );
        X1 = qobischeme_invert_2dmatrix( X2 );
        if  ( FALSE( X1 ) )  goto L20954;
        X2 = qobischeme_transpose( m17238 );
        POPSTACKTRACE( qobischeme_m_2a( X2, X1 ) );
L20954:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dmisc_ellipse_2dfit_v );
DEFCSTRING( t20956, "ELLIPSE-FIT" );

TSCP  toollib_2dmisc_ellipse_2dfit( p17242 )
        TSCP  p17242;
{
        PUSHSTACKTRACE( t20956 );
        POPSTACKTRACE( qobischeme_panic( c17243, EMPTYLIST ) );
}

DEFTSCP( ib_2dmisc_t_2dscheme_6289f649_v );
DEFCSTRING( t20958, "ELLIPSE-FIT-SCHEME" );
EXTERNTSCPP( qobischeme_make_2dellipse, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_make_2dellipse_v );

TSCP  ib_2dmisc_t_2dscheme_6289f649( p17245 )
        TSCP  p17245;
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

        PUSHSTACKTRACE( t20958 );
        X3 = p17245;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L20961:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L20962;
        X2 = X4;
        goto L20970;
L20962:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L20965;
        scrt1__24__car_2derror( X3 );
L20965:
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
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L20969;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L20961 );
L20969:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L20974;
        scdebug_error( c13505, 
                       c13506, CONS( X5, EMPTYLIST ) );
L20974:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L20961 );
L20970:
        X1 = scrt4_list_2d_3evector( X2 );
        X4 = p17245;
        X5 = EMPTYLIST;
        X6 = EMPTYLIST;
L20978:
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L20979;
        X3 = X5;
        goto L20987;
L20979:
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L20982;
        scrt1__24__car_2derror( X4 );
L20982:
        X9 = PAIR_CAR( X4 );
        X11 = qobischeme_x( X9 );
        X10 = qobischeme_sqr( X11 );
        X8 = scrt4_vector( CONS( qobischeme__2d_2dtwo( _TSCP( 0 ), X10 ), 
                                 EMPTYLIST ) );
        X7 = sc_cons( X8, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L20986;
        X8 = PAIR_CDR( X4 );
        X6 = X7;
        X5 = X7;
        X4 = X8;
        GOBACK( L20978 );
L20986:
        X8 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L20991;
        scdebug_error( c13505, 
                       c13506, CONS( X6, EMPTYLIST ) );
L20991:
        X6 = SETGEN( PAIR_CDR( X6 ), X7 );
        X4 = X8;
        GOBACK( L20978 );
L20987:
        X2 = scrt4_list_2d_3evector( X3 );
        X3 = ib_2dmisc__2dinverse_e1b53b4a( X1 );
        X5 = qobischeme_m_2a( X3, X2 );
        X4 = ib_2dmisc_e_2dmatrix_11b5d357( X5 );
        X5 = qobischeme_x( X4 );
        X6 = qobischeme_y( X4 );
        X7 = qobischeme_z( X4 );
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), VECTORTAG ) ) )  goto L21000;
        scdebug_error( c13402, 
                       c13403, CONS( X4, EMPTYLIST ) );
L21000:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L21002;
        scdebug_error( c13402, 
                       c13406, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L21002:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L21004;
        scdebug_error( c13402, 
                       c13410, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L21004:
        X8 = VECTOR_ELEMENT( X4, _TSCP( 12 ) );
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L21008;
        scdebug_error( c13402, 
                       c13406, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L21008:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X4 ) ) ) )  goto L21010;
        scdebug_error( c13402, 
                       c13410, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L21010:
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
        if  ( FALSE( X16 ) )  goto L21024;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21024;
        X17 = _TSCP( 0 );
        goto L21025;
L21024:
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21032;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21032;
        X17 = qobischeme_half_2dpi_v;
        goto L21025;
L21032:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21033;
        X18 = FALSEVALUE;
        goto L21034;
L21033:
        X18 = TRUEVALUE;
L21034:
        if  ( FALSE( X18 ) )  goto L21041;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21041;
        X21 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X22 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X20 = qobischeme__2f_2dtwo( X21, X22 );
        X19 = toollib_2dmisc_acot( X20 );
        X17 = qobischeme__2f_2dtwo( X19, _TSCP( 8 ) );
        goto L21025;
L21041:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21042;
        X18 = FALSEVALUE;
        goto L21043;
L21042:
        X18 = TRUEVALUE;
L21043:
        if  ( FALSE( X18 ) )  goto L21050;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21050;
        X22 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X23 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X21 = qobischeme__2f_2dtwo( X22, X23 );
        X20 = toollib_2dmisc_acot( X21 );
        X19 = qobischeme__2f_2dtwo( X20, _TSCP( 8 ) );
        X17 = qobischeme__2b_2dtwo( qobischeme_half_2dpi_v, X19 );
        goto L21025;
L21050:
        X17 = qobischeme_fuck_2dup(  );
L21025:
        X15 = CONS( X17, EMPTYLIST );
        if  ( FALSE( qobischeme__3e_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21051;
        X16 = qobischeme_half_2dpi_v;
        goto L21052;
L21051:
        X16 = _TSCP( 0 );
L21052:
        X18 = qobischeme__2f_2dtwo( _TSCP( 4 ), _TSCP( 8 ) );
        X21 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X22 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X20 = qobischeme__2f_2dtwo( X21, X22 );
        X19 = toollib_2dmisc_acot( X20 );
        X17 = qobischeme__2a_2dtwo( X18, X19 );
        X15 = CONS( qobischeme__2b_2dtwo( X16, X17 ), X15 );
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21054;
        X17 = qobischeme__3c_2dtwo( _TSCP( 4 ), X6 );
        goto L21055;
L21054:
        X17 = X18;
L21055:
        X20 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X20 ) )  goto L21057;
        X19 = qobischeme__3e_2dtwo( _TSCP( 4 ), X6 );
        goto L21058;
L21057:
        X19 = X20;
L21058:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21059;
        X22 = FALSEVALUE;
        goto L21060;
L21059:
        X22 = TRUEVALUE;
L21060:
        if  ( FALSE( X22 ) )  goto L21062;
        X21 = qobischeme__3c_2dtwo( _TSCP( 4 ), X6 );
        goto L21063;
L21062:
        X21 = X22;
L21063:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21064;
        X24 = FALSEVALUE;
        goto L21065;
L21064:
        X24 = TRUEVALUE;
L21065:
        if  ( FALSE( X24 ) )  goto L21067;
        X23 = qobischeme__3e_2dtwo( _TSCP( 4 ), X6 );
        goto L21068;
L21067:
        X23 = X24;
L21068:
        X22 = sc_cons( X23, EMPTYLIST );
        X20 = sc_cons( X21, X22 );
        X18 = sc_cons( X19, X20 );
        X16 = sc_cons( X17, X18 );
        X15 = CONS( X16, X15 );
        X15 = CONS( X7, X15 );
        X15 = CONS( X6, X15 );
        X15 = CONS( X5, X15 );
        X15 = CONS( _TSCP( 4 ), X15 );
        scrt6_format( TRUEVALUE, CONS( c17276, X15 ) );
        X17 = qobischeme__2a_2dtwo( X6, X7 );
        X18 = qobischeme__2a_2dtwo( X5, X8 );
        X16 = qobischeme__2d_2dtwo( X17, X18 );
        X15 = qobischeme__2f_2dtwo( X16, X10 );
        X18 = qobischeme__2a_2dtwo( _TSCP( 4 ), X8 );
        X19 = qobischeme__2a_2dtwo( X5, X7 );
        X17 = qobischeme__2d_2dtwo( X18, X19 );
        X16 = qobischeme__2f_2dtwo( X17, X10 );
        X18 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X18 ) )  goto L21076;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21076;
        X17 = _TSCP( 0 );
        goto L21077;
L21076:
        X19 = qobischeme__3d_2dtwo( X5, _TSCP( 0 ) );
        if  ( FALSE( X19 ) )  goto L21084;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21084;
        X17 = qobischeme_half_2dpi_v;
        goto L21077;
L21084:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21085;
        X19 = FALSEVALUE;
        goto L21086;
L21085:
        X19 = TRUEVALUE;
L21086:
        if  ( FALSE( X19 ) )  goto L21093;
        if  ( FALSE( qobischeme__3c_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21093;
        X22 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X23 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X21 = qobischeme__2f_2dtwo( X22, X23 );
        X20 = toollib_2dmisc_acot( X21 );
        X17 = qobischeme__2f_2dtwo( X20, _TSCP( 8 ) );
        goto L21077;
L21093:
        if  ( FALSE( qobischeme__3d_2dtwo( X5, _TSCP( 0 ) ) )
            )  goto L21094;
        X19 = FALSEVALUE;
        goto L21095;
L21094:
        X19 = TRUEVALUE;
L21095:
        if  ( FALSE( X19 ) )  goto L21102;
        if  ( FALSE( qobischeme__3e_2dtwo( _TSCP( 4 ), X6 ) )
            )  goto L21102;
        X23 = qobischeme__2d_2dtwo( _TSCP( 4 ), X6 );
        X24 = qobischeme__2a_2dtwo( _TSCP( 8 ), X5 );
        X22 = qobischeme__2f_2dtwo( X23, X24 );
        X21 = toollib_2dmisc_acot( X22 );
        X20 = qobischeme__2f_2dtwo( X21, _TSCP( 8 ) );
        X17 = qobischeme__2b_2dtwo( qobischeme_half_2dpi_v, X20 );
        goto L21077;
L21102:
        X17 = qobischeme_fuck_2dup(  );
L21077:
        POPSTACKTRACE( qobischeme_make_2dellipse( X15, 
                                                  X16, 
                                                  X17, X13, X14 ) );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d2d_v );
DEFCSTRING( t21103, "EVERY-N-2D" );
EXTERNTSCPP( qobischeme_every_2dn, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_every_2dn_v );

TSCP  toollib_2dmisc_l17741( b17742, c21107 )
        TSCP  b17742, c21107;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17741 [inside EVERY-N-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21107, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21107, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17742, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17739( a17740, c21105 )
        TSCP  a17740, c21105;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17739 [inside EVERY-N-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21105, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21105, 1 );
        DISPLAY( 2 ) = a17740;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17741, 
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

TSCP  toollib_2dmisc_every_2dn_2d2d( p17736, v17737, w17738 )
        TSCP  p17736, v17737, w17738;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21103 );
        DISPLAY( 0 ) = p17736;
        DISPLAY( 1 ) = w17738;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17739, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17737 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d3d_v );
DEFCSTRING( t21109, "EVERY-N-3D" );

TSCP  toollib_2dmisc_l17750( b17751, c17752, c21113 )
        TSCP  b17751, c17752, c21113;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17750 [inside EVERY-N-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21113, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21113, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17751, 
                                          c17752, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17748( a17749, c21111 )
        TSCP  a17749, c21111;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17748 [inside EVERY-N-3D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21111, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21111, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21111, 2 );
        DISPLAY( 3 ) = a17749;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17750, 
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

TSCP  toollib_2dmisc_every_2dn_2d3d( p17744, 
                                     v17745, w17746, x17747 )
        TSCP  p17744, v17745, w17746, x17747;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21109 );
        DISPLAY( 0 ) = p17744;
        DISPLAY( 1 ) = w17746;
        DISPLAY( 2 ) = x17747;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17748, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17745 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d4d_v );
DEFCSTRING( t21115, "EVERY-N-4D" );

TSCP  toollib_2dmisc_l17762( c17763, d17764, c21119 )
        TSCP  c17763, d17764, c21119;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17762 [inside EVERY-N-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21119, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21119, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21119, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17763, 
                                          d17764, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17759( a17760, b17761, c21117 )
        TSCP  a17760, b17761, c21117;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17759 [inside EVERY-N-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21117, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21117, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21117, 2 );
        DISPLAY( 3 ) = a17760;
        DISPLAY( 4 ) = b17761;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17762, 
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

TSCP  toollib_2dmisc_every_2dn_2d4d( p17754, 
                                     v17755, 
                                     w17756, x17757, y17758 )
        TSCP  p17754, v17755, w17756, x17757, y17758;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21115 );
        DISPLAY( 0 ) = p17754;
        DISPLAY( 1 ) = x17757;
        DISPLAY( 2 ) = y17758;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17759, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_every_2dn_2d2d( X1, v17755, w17756 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_every_2dn_2d5d_v );
DEFCSTRING( t21121, "EVERY-N-5D" );

TSCP  toollib_2dmisc_l17774( b17775, 
                             c17776, d17777, e17778, c21125 )
        TSCP  b17775, c17776, d17777, e17778, c21125;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17774 [inside EVERY-N-5D]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c21125, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21125, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 5 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 5 ), 
                                          b17775, 
                                          c17776, 
                                          d17777, 
                                          e17778, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17772( a17773, c21123 )
        TSCP  a17773, c21123;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17772 [inside EVERY-N-5D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21123, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21123, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21123, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21123, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21123, 4 );
        DISPLAY( 5 ) = a17773;
        X7 = MAKEPROCEDURE( 4, 
                            0, 
                            toollib_2dmisc_l17774, 
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

TSCP  toollib_2dmisc_every_2dn_2d5d( p17766, 
                                     v17767, 
                                     w17768, 
                                     x17769, y17770, z17771 )
        TSCP  p17766, 
              v17767, w17768, x17769, y17770, z17771;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21121 );
        DISPLAY( 0 ) = p17766;
        DISPLAY( 1 ) = w17768;
        DISPLAY( 2 ) = x17769;
        DISPLAY( 3 ) = y17770;
        DISPLAY( 4 ) = z17771;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17772, 
                            MAKECLOSURE( EMPTYLIST, 
                                         5, 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_every_2dn( X1, v17767 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d2d_b84c4399_v );
DEFCSTRING( t21127, "MAP-N-VECTOR-2D" );

TSCP  toollib_2dmisc_l17785( b17786, c21131 )
        TSCP  b17786, c21131;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17785 [inside MAP-N-VECTOR-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21131, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21131, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17786, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17783( a17784, c21129 )
        TSCP  a17784, c21129;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17783 [inside MAP-N-VECTOR-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21129, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21129, 1 );
        DISPLAY( 2 ) = a17784;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17785, 
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

TSCP  ib_2dmisc_ector_2d2d_b84c4399( f17780, m17781, n17782 )
        TSCP  f17780, m17781, n17782;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21127 );
        DISPLAY( 0 ) = f17780;
        DISPLAY( 1 ) = n17782;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17783, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, m17781 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d3d_a15772d8_v );
DEFCSTRING( t21133, "MAP-N-VECTOR-3D" );

TSCP  toollib_2dmisc_l17794( b17795, c17796, c21137 )
        TSCP  b17795, c17796, c21137;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17794 [inside MAP-N-VECTOR-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21137, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21137, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 3 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17795, 
                                          c17796, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17792( a17793, c21135 )
        TSCP  a17793, c21135;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17792 [inside MAP-N-VECTOR-3D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21135, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21135, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21135, 2 );
        DISPLAY( 3 ) = a17793;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17794, 
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

TSCP  ib_2dmisc_ector_2d3d_a15772d8( f17788, 
                                     m17789, n17790, p17791 )
        TSCP  f17788, m17789, n17790, p17791;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21133 );
        DISPLAY( 0 ) = f17788;
        DISPLAY( 1 ) = n17790;
        DISPLAY( 2 ) = p17791;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17792, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_map_2dn_2dvector( X1, m17789 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d4d_ee16e41f_v );
DEFCSTRING( t21139, "MAP-N-VECTOR-4D" );

TSCP  toollib_2dmisc_l17806( c17807, d17808, c21143 )
        TSCP  c17807, d17808, c21143;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17806 [inside MAP-N-VECTOR-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21143, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21143, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21143, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17807, 
                                          d17808, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17803( a17804, b17805, c21141 )
        TSCP  a17804, b17805, c21141;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17803 [inside MAP-N-VECTOR-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21141, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21141, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21141, 2 );
        DISPLAY( 3 ) = a17804;
        DISPLAY( 4 ) = b17805;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17806, 
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

TSCP  ib_2dmisc_ector_2d4d_ee16e41f( f17798, 
                                     m17799, 
                                     n17800, p17801, q17802 )
        TSCP  f17798, m17799, n17800, p17801, q17802;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21139 );
        DISPLAY( 0 ) = f17798;
        DISPLAY( 1 ) = p17801;
        DISPLAY( 2 ) = q17802;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17803, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_ector_2d2d_b84c4399( X1, m17799, n17800 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_ector_2d5d_f70dd55e_v );
DEFCSTRING( t21145, "MAP-N-VECTOR-5D" );

TSCP  toollib_2dmisc_l17820( d17821, e17822, c21149 )
        TSCP  d17821, e17822, c21149;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17820 [inside MAP-N-VECTOR-5D]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c21149, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21149, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21149, 2 );
        X4 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21149, 3 );
        X6 = DISPLAY( 0 );
        X6 = UNKNOWNCALL( X6, 5 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          DISPLAY( 5 ), 
                                          d17821, 
                                          e17822, 
                                          PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 0 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  toollib_2dmisc_l17816( a17817, b17818, c17819, c21147 )
        TSCP  a17817, b17818, c17819, c21147;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17816 [inside MAP-N-VECTOR-5D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21147, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21147, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21147, 2 );
        DISPLAY( 3 ) = a17817;
        DISPLAY( 4 ) = b17818;
        DISPLAY( 5 ) = c17819;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17820, 
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

TSCP  ib_2dmisc_ector_2d5d_f70dd55e( f17810, 
                                     m17811, 
                                     n17812, 
                                     p17813, q17814, r17815 )
        TSCP  f17810, 
              m17811, n17812, p17813, q17814, r17815;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21145 );
        DISPLAY( 0 ) = f17810;
        DISPLAY( 1 ) = q17814;
        DISPLAY( 2 ) = r17815;
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dmisc_l17816, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = ib_2dmisc_ector_2d3d_a15772d8( X1, 
                                               m17811, 
                                               n17812, p17813 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_product_2d2d_v );
DEFCSTRING( t21151, "PRODUCT-2D" );
EXTERNTSCPP( qobischeme_product, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_product_v );

TSCP  toollib_2dmisc_l17829( b17830, c21155 )
        TSCP  b17830, c21155;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17829 [inside PRODUCT-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21155, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21155, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17830, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17827( a17828, c21153 )
        TSCP  a17828, c21153;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17827 [inside PRODUCT-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21153, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21153, 1 );
        DISPLAY( 2 ) = a17828;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17829, 
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

TSCP  toollib_2dmisc_product_2d2d( f17824, m17825, n17826 )
        TSCP  f17824, m17825, n17826;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21151 );
        DISPLAY( 0 ) = f17824;
        DISPLAY( 1 ) = n17826;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17827, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_product( X1, m17825 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_ref_2d1d_v );
DEFCSTRING( t21157, "REF-1D" );

TSCP  toollib_2dmisc_ref_2d1d( m17832, a17833 )
        TSCP  m17832, a17833;
{
        PUSHSTACKTRACE( t21157 );
        if  ( AND( EQ( TSCPTAG( m17832 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m17832 ), VECTORTAG ) )
            )  goto L21160;
        scdebug_error( c13402, 
                       c13403, CONS( m17832, EMPTYLIST ) );
L21160:
        if  ( EQ( TSCPTAG( a17833 ), FIXNUMTAG ) )  goto L21162;
        scdebug_error( c13402, 
                       c13406, CONS( a17833, EMPTYLIST ) );
L21162:
        if  ( LT( _S2CUINT( FIXED_C( a17833 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m17832 ) ) ) )  goto L21164;
        scdebug_error( c13402, 
                       c13410, CONS( a17833, EMPTYLIST ) );
L21164:
        POPSTACKTRACE( VECTOR_ELEMENT( m17832, a17833 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d2d_v );
DEFCSTRING( t21166, "REF-2D" );

TSCP  toollib_2dmisc_ref_2d2d( m17845, a17846, b17847 )
        TSCP  m17845, a17846, b17847;
{
        PUSHSTACKTRACE( t21166 );
        POPSTACKTRACE( qobischeme_matrix_2dref( m17845, 
                                                a17846, b17847 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d3d_v );
DEFCSTRING( t21168, "REF-3D" );

TSCP  toollib_2dmisc_ref_2d3d( m17849, a17850, b17851, c17852 )
        TSCP  m17849, a17850, b17851, c17852;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21168 );
        if  ( AND( EQ( TSCPTAG( m17849 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( m17849 ), VECTORTAG ) )
            )  goto L21171;
        scdebug_error( c13402, 
                       c13403, CONS( m17849, EMPTYLIST ) );
L21171:
        if  ( EQ( TSCPTAG( a17850 ), FIXNUMTAG ) )  goto L21173;
        scdebug_error( c13402, 
                       c13406, CONS( a17850, EMPTYLIST ) );
L21173:
        if  ( LT( _S2CUINT( FIXED_C( a17850 ) ), 
                  _S2CUINT( VECTOR_LENGTH( m17849 ) ) ) )  goto L21175;
        scdebug_error( c13402, 
                       c13410, CONS( a17850, EMPTYLIST ) );
L21175:
        X1 = VECTOR_ELEMENT( m17849, a17850 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, b17851, c17852 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d4d_v );
DEFCSTRING( t21177, "REF-4D" );

TSCP  toollib_2dmisc_ref_2d4d( m17864, 
                               a17865, b17866, c17867, d17868 )
        TSCP  m17864, a17865, b17866, c17867, d17868;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21177 );
        X1 = qobischeme_matrix_2dref( m17864, a17865, b17866 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, c17867, d17868 ) );
}

DEFTSCP( toollib_2dmisc_ref_2d5d_v );
DEFCSTRING( t21179, "REF-5D" );

TSCP  toollib_2dmisc_ref_2d5d( m17870, 
                               a17871, 
                               b17872, c17873, d17874, e17875 )
        TSCP  m17870, 
              a17871, b17872, c17873, d17874, e17875;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21179 );
        X1 = toollib_2dmisc_ref_2d3d( m17870, 
                                      a17871, b17872, c17873 );
        POPSTACKTRACE( qobischeme_matrix_2dref( X1, d17874, e17875 ) );
}

DEFTSCP( toollib_2dmisc_sum_2d2d_v );
DEFCSTRING( t21181, "SUM-2D" );
EXTERNTSCPP( qobischeme_sum, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_sum_v );

TSCP  toollib_2dmisc_l17882( b17883, c21185 )
        TSCP  b17883, c21185;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17882 [inside SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21185, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21185, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 2 ), 
                                          b17883, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 2 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17880( a17881, c21183 )
        TSCP  a17881, c21183;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17880 [inside SUM-2D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21183, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21183, 1 );
        DISPLAY( 2 ) = a17881;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17882, 
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

TSCP  toollib_2dmisc_sum_2d2d( f17877, m17878, n17879 )
        TSCP  f17877, m17878, n17879;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21181 );
        DISPLAY( 0 ) = f17877;
        DISPLAY( 1 ) = n17879;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17880, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = qobischeme_sum( X1, m17878 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2d3d_v );
DEFCSTRING( t21187, "SUM-3D" );

TSCP  toollib_2dmisc_l17892( c17893, c21191 )
        TSCP  c17893, c21191;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17892 [inside SUM-3D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21191, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21191, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21191, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 3 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 2 ), 
                                          DISPLAY( 3 ), 
                                          c17893, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17889( a17890, b17891, c21189 )
        TSCP  a17890, b17891, c21189;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17889 [inside SUM-3D]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21189, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21189, 1 );
        DISPLAY( 2 ) = a17890;
        DISPLAY( 3 ) = b17891;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17892, 
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

TSCP  toollib_2dmisc_sum_2d3d( f17885, m17886, n17887, p17888 )
        TSCP  f17885, m17886, n17887, p17888;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21187 );
        DISPLAY( 0 ) = f17885;
        DISPLAY( 1 ) = p17888;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17889, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_sum_2d2d( X1, m17886, n17887 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2d4d_v );
DEFCSTRING( t21193, "SUM-4D" );

TSCP  toollib_2dmisc_l17903( c17904, d17905, c21197 )
        TSCP  c17904, d17905, c21197;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17903 [inside SUM-4D]" );
        X1 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c21197, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21197, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21197, 2 );
        X5 = DISPLAY( 0 );
        X5 = UNKNOWNCALL( X5, 4 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 3 ), 
                                          DISPLAY( 4 ), 
                                          c17904, 
                                          d17905, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 4 ) = X1;
        DISPLAY( 3 ) = X2;
        DISPLAY( 0 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dmisc_l17900( a17901, b17902, c21195 )
        TSCP  a17901, b17902, c21195;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17900 [inside SUM-4D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21195, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21195, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21195, 2 );
        DISPLAY( 3 ) = a17901;
        DISPLAY( 4 ) = b17902;
        X5 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17903, 
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

TSCP  toollib_2dmisc_sum_2d4d( f17895, 
                               m17896, n17897, p17898, q17899 )
        TSCP  f17895, m17896, n17897, p17898, q17899;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21193 );
        DISPLAY( 0 ) = f17895;
        DISPLAY( 1 ) = p17898;
        DISPLAY( 2 ) = q17899;
        X1 = MAKEPROCEDURE( 2, 
                            0, 
                            toollib_2dmisc_l17900, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_sum_2d2d( X1, m17896, n17897 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_sum_2dpairs_v );
DEFCSTRING( t21199, "SUM-PAIRS" );

TSCP  toollib_2dmisc_l17911( b17912, c21203 )
        TSCP  b17912, c21203;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17911 [inside SUM-PAIRS]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21203, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21203, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 1 ), 
                                          b17912, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 1 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17909( a17910, c21201 )
        TSCP  a17910, c21201;
{
        TSCP  X3, X2, X1;
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17909 [inside SUM-PAIRS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21201, 0 );
        DISPLAY( 1 ) = a17910;
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17911, 
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

TSCP  toollib_2dmisc_sum_2dpairs( f17907, m17908 )
        TSCP  f17907, m17908;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21199 );
        DISPLAY( 0 ) = f17907;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17909, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = qobischeme_sum( X1, m17908 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_vector_2dsum_v );
DEFCSTRING( t21205, "VECTOR-SUM" );

TSCP  toollib_2dmisc_vector_2dsum( f17914, n17915, i17916 )
        TSCP  f17914, n17915, i17916;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21205 );
        X1 = qobischeme__2d_2dtwo( n17915, _TSCP( 4 ) );
        X2 = X1;
        X3 = i17916;
L21209:
        if  ( TRUE( qobischeme_negative_3f( X2 ) ) )  goto L21210;
        X4 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        X6 = f17914;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X2, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = qobischeme_v_2b( X3, X5 );
        X2 = X4;
        GOBACK( L21209 );
L21210:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_2dsum_2d2d_3d2af86d_v );
DEFCSTRING( t21212, "VECTOR-SUM-2D" );

TSCP  toollib_2dmisc_l17938( b17939, c21216 )
        TSCP  b17939, c21216;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17938 [inside VECTOR-SUM-2D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21216, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21216, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17939, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17936( a17937, c21214 )
        TSCP  a17937, c21214;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17936 [inside VECTOR-SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21214, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21214, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21214, 2 );
        DISPLAY( 3 ) = a17937;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17938, 
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

TSCP  ib_2dmisc_2dsum_2d2d_3d2af86d( f17932, 
                                     m17933, n17934, i17935 )
        TSCP  f17932, m17933, n17934, i17935;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21212 );
        DISPLAY( 0 ) = f17932;
        DISPLAY( 1 ) = n17934;
        DISPLAY( 2 ) = i17935;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17936, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_vector_2dsum( X1, 
                                             m17933, 
                                             DISPLAY( 2 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_matrix_2dsum_v );
DEFCSTRING( t21218, "MATRIX-SUM" );

TSCP  toollib_2dmisc_matrix_2dsum( f17941, n17942, i17943 )
        TSCP  f17941, n17942, i17943;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21218 );
        X1 = qobischeme__2d_2dtwo( n17942, _TSCP( 4 ) );
        X2 = X1;
        X3 = i17943;
L21222:
        if  ( TRUE( qobischeme_negative_3f( X2 ) ) )  goto L21223;
        X4 = qobischeme__2d_2dtwo( X2, _TSCP( 4 ) );
        X6 = f17941;
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( X2, 
                                          PROCEDURE_CLOSURE( X6 ) );
        X3 = qobischeme_m_2b( X3, X5 );
        X2 = X4;
        GOBACK( L21222 );
L21223:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ib_2dmisc_2dsum_2d2d_26b3d5d2_v );
DEFCSTRING( t21225, "MATRIX-SUM-2D" );

TSCP  toollib_2dmisc_l17965( b17966, c21229 )
        TSCP  b17966, c21229;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l17965 [inside MATRIX-SUM-2D]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21229, 0 );
        X2 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21229, 1 );
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 3 ), 
                                          b17966, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 0 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  toollib_2dmisc_l17963( a17964, c21227 )
        TSCP  a17964, c21227;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dmisc_l17963 [inside MATRIX-SUM-2D]" );
        X1 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21227, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21227, 1 );
        X3 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21227, 2 );
        DISPLAY( 3 ) = a17964;
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17965, 
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

TSCP  ib_2dmisc_2dsum_2d2d_26b3d5d2( f17959, 
                                     m17960, n17961, i17962 )
        TSCP  f17959, m17960, n17961, i17962;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21225 );
        DISPLAY( 0 ) = f17959;
        DISPLAY( 1 ) = n17961;
        DISPLAY( 2 ) = i17962;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l17963, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 0 ) ) );
        SDVAL = toollib_2dmisc_matrix_2dsum( X1, 
                                             m17960, 
                                             DISPLAY( 2 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dmisc_v_2fk_v );
DEFCSTRING( t21231, "V/K" );

TSCP  toollib_2dmisc_v_2fk( v17968, k17969 )
        TSCP  v17968, k17969;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21231 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), k17969 );
        POPSTACKTRACE( qobischeme_k_2av( X1, v17968 ) );
}

DEFTSCP( toollib_2dmisc_m_2fk_v );
DEFCSTRING( t21233, "M/K" );

TSCP  toollib_2dmisc_m_2fk( m17974, k17975 )
        TSCP  m17974, k17975;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21233 );
        X1 = qobischeme__2f_2dtwo( _TSCP( 4 ), k17975 );
        POPSTACKTRACE( qobischeme_k_2am( X1, m17974 ) );
}

DEFTSCP( toollib_2dmisc_v_2am_2av_v );
DEFCSTRING( t21235, "V*M*V" );

TSCP  toollib_2dmisc_v_2am_2av( v17980, m17981 )
        TSCP  v17980, m17981;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21235 );
        X1 = qobischeme_m_2av( m17981, v17980 );
        POPSTACKTRACE( qobischeme_dot( v17980, X1 ) );
}

DEFTSCP( toollib_2dmisc_sum_2df_v );
DEFCSTRING( t21237, "SUM-F" );
EXTERNTSCPP( qobischeme_map_2dreduce, 
             XAL5( TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( qobischeme_map_2dreduce_v );

TSCP  toollib_2dmisc_sum_2df( f17983, l17984 )
        TSCP  f17983, l17984;
{
        PUSHSTACKTRACE( t21237 );
        POPSTACKTRACE( qobischeme_map_2dreduce( qobischeme__2b_v, 
                                                _TSCP( 0 ), 
                                                f17983, 
                                                l17984, EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_sum_2dvector_v );
DEFCSTRING( t21239, "SUM-VECTOR" );

TSCP  toollib_2dmisc_sum_2dvector( v17986 )
        TSCP  v17986;
{
        PUSHSTACKTRACE( t21239 );
        POPSTACKTRACE( qobischeme_reduce_2dvector( qobischeme__2b_v, 
                                                   v17986, _TSCP( 0 ) ) );
}

DEFTSCP( ib_2dmisc_vector_2df_f10f8b95_v );
DEFCSTRING( t21241, "SUM-VECTOR-F" );

TSCP  ib_2dmisc_vector_2df_f10f8b95( f17988, v17989 )
        TSCP  f17988, v17989;
{
        PUSHSTACKTRACE( t21241 );
        POPSTACKTRACE( obischeme_e_2dvector_6be5ec0a( qobischeme__2b_v, 
                                                      _TSCP( 0 ), 
                                                      f17988, 
                                                      v17989, 
                                                      EMPTYLIST ) );
}

DEFTSCP( toollib_2dmisc_float_2dmodulo_v );
DEFCSTRING( t21243, "FLOAT-MODULO" );

TSCP  toollib_2dmisc_float_2dmodulo( x17991, m17992 )
        TSCP  x17991, m17992;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t21243 );
        X3 = qobischeme__2f_2dtwo( x17991, m17992 );
        X2 = scrt2_inexact_2d_3eexact( X3 );
        X1 = qobischeme__2a_2dtwo( m17992, X2 );
        POPSTACKTRACE( qobischeme__2d_2dtwo( x17991, X1 ) );
}

DEFTSCP( ib_2dmisc_y_2dmatrix_28bb2f8c_v );
DEFCSTRING( t21245, "EXACT-IDENTITY-MATRIX" );
EXTERNTSCPP( obischeme_l_2dmatrix_a532a373, XAL1( TSCP ) );
EXTERNTSCP( obischeme_l_2dmatrix_a532a373_v );

TSCP  ib_2dmisc_y_2dmatrix_28bb2f8c( n18003 )
        TSCP  n18003;
{
        TSCP  X1;

        PUSHSTACKTRACE( t21245 );
        X1 = sc_make_2dvector( n18003, 
                               CONS( c18004, EMPTYLIST ) );
        POPSTACKTRACE( obischeme_l_2dmatrix_a532a373( X1 ) );
}

DEFTSCP( toollib_2dmisc_translate_2d3d_v );
DEFCSTRING( t21247, "TRANSLATE-3D" );

TSCP  toollib_2dmisc_translate_2d3d( x18006, y18007, z18008 )
        TSCP  x18006, y18007, z18008;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21247 );
        X4 = CONS( EMPTYLIST, EMPTYLIST );
        X4 = CONS( x18006, X4 );
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
        X5 = CONS( z18008, X5 );
        X5 = CONS( _TSCP( 4 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 0 ), X5 ) );
        X3 = CONS( scrt4_list_2d_3evector( X4 ), X3 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X5 = CONS( y18007, X5 );
        X5 = CONS( _TSCP( 0 ), X5 );
        X4 = scrt1_cons_2a( _TSCP( 0 ), 
                            CONS( _TSCP( 4 ), X5 ) );
        X1 = scrt1_cons_2a( X2, 
                            CONS( scrt4_list_2d_3evector( X4 ), 
                                  X3 ) );
        POPSTACKTRACE( scrt4_list_2d_3evector( X1 ) );
}

DEFTSCP( toollib_2dmisc_draw_2dcircle_v );
DEFCSTRING( t21249, "DRAW-CIRCLE" );
EXTERNTSCPP( xws6_xdrawarc, 
             XAL9( TSCP, 
                   TSCP, 
                   TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( xws6_xdrawarc_v );

TSCP  toollib_2dmisc_draw_2dcircle( p18010, r18011, g18012 )
        TSCP  p18010, r18011, g18012;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21249 );
        X2 = qobischeme_x( p18010 );
        X1 = qobischeme__2d_2dtwo( X2, r18011 );
        X3 = qobischeme_y( p18010 );
        X2 = qobischeme__2d_2dtwo( X3, r18011 );
        X4 = qobischeme__2a_2dtwo( _TSCP( 8 ), r18011 );
        X3 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        X5 = qobischeme__2a_2dtwo( _TSCP( 8 ), r18011 );
        X4 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        X5 = qobischeme__2a_2dtwo( _TSCP( 0 ), _TSCP( 1440 ) );
        X6 = qobischeme__2a_2dtwo( _TSCP( 256 ), _TSCP( 1440 ) );
        POPSTACKTRACE( xws6_xdrawarc( qobischeme__2adisplay_2a_v, 
                                      obischeme__2dpane_2a_b407de83_v, 
                                      g18012, 
                                      X1, 
                                      X2, X3, X4, X5, X6 ) );
}

DEFTSCP( ib_2dmisc_riangle_3f_ee3b420c_v );
DEFCSTRING( t21251, "DEGENERATE-TRIANGLE?" );
EXTERNTSCPP( qobischeme_v_3d, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_v_3d_v );
EXTERNTSCPP( qobischeme_third, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_third_v );

TSCP  ib_2dmisc_riangle_3f_ee3b420c( t18040 )
        TSCP  t18040;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21251 );
        X2 = qobischeme_first( t18040 );
        X3 = qobischeme_second( t18040 );
        X1 = qobischeme_v_3d( X2, X3 );
        if  ( TRUE( X1 ) )  goto L21254;
        X3 = qobischeme_second( t18040 );
        X4 = qobischeme_third( t18040 );
        X2 = qobischeme_v_3d( X3, X4 );
        if  ( TRUE( X2 ) )  goto L21257;
        X3 = qobischeme_third( t18040 );
        X4 = qobischeme_first( t18040 );
        POPSTACKTRACE( qobischeme_v_3d( X3, X4 ) );
L21257:
        POPSTACKTRACE( X2 );
L21254:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ib_2dmisc__2dpolygon_3a3a6277_v );
DEFCSTRING( t21259, "DRAW-FILLED-POLYGON" );
EXTERNTSCPP( qobischeme_triangulate, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_triangulate_v );
EXTERNTSCPP( qobischeme__3e, XAL1( TSCP ) );
EXTERNTSCP( qobischeme__3e_v );
EXTERNTSCPP( obischeme_riangle_3f_8da00d0d, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_riangle_3f_8da00d0d_v );

TSCP  toollib_2dmisc_l18074( t18075, c21275 )
        TSCP  t18075, c21275;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18074 [inside DRAW-FILLED-POLYGON]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21275, 0 );
        X3 = qobischeme_first( t18075 );
        X4 = qobischeme_second( t18075 );
        X5 = qobischeme_third( t18075 );
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

TSCP  ib_2dmisc__2dpolygon_3a3a6277( p18050, p18051 )
        TSCP  p18050, p18051;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21259 );
        X2 = qobischeme_triangulate( p18051 );
        X1 = qobischeme_remove_2dif( ib_2dmisc_riangle_3f_ee3b420c_v, 
                                     X2 );
        X7 = qobischeme_sort( p18051, 
                              qobischeme__3e_v, qobischeme_x_v );
        X6 = qobischeme_first( X7 );
        X5 = qobischeme_x( X6 );
        X4 = toollib_2dmisc_exact_2dround( X5 );
        X5 = CONS( EMPTYLIST, EMPTYLIST );
        X8 = qobischeme_sort( p18051, 
                              qobischeme__3e_v, qobischeme_y_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_y( X7 );
        X3 = scrt1_cons_2a( X4, 
                            CONS( toollib_2dmisc_exact_2dround( X6 ), 
                                  X5 ) );
        X2 = scrt4_list_2d_3evector( X3 );
        X8 = qobischeme_sort( p18051, 
                              qobischeme__3c_v, qobischeme_x_v );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_x( X7 );
        X5 = toollib_2dmisc_exact_2dround( X6 );
        X6 = CONS( EMPTYLIST, EMPTYLIST );
        X9 = qobischeme_sort( p18051, 
                              qobischeme__3c_v, qobischeme_y_v );
        X8 = qobischeme_first( X9 );
        X7 = qobischeme_y( X8 );
        X4 = scrt1_cons_2a( X5, 
                            CONS( toollib_2dmisc_exact_2dround( X7 ), 
                                  X6 ) );
        X3 = scrt4_list_2d_3evector( X4 );
        X4 = qobischeme_y( X3 );
L21263:
        X5 = qobischeme_y( X2 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X4, X5 ) ) )  goto L21264;
        X5 = qobischeme_x( X3 );
L21268:
        X6 = qobischeme_x( X2 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X5, X6 ) ) )  goto L21269;
        X6 = CONS( X4, EMPTYLIST );
        DISPLAY( 0 ) = scrt4_vector( CONS( X5, X6 ) );
        X6 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18074, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        if  ( FALSE( qobischeme_some( X6, X1, EMPTYLIST ) ) )  goto L21273;
        X6 = qobischeme_pbm_2dbitmap( p18050 );
        qobischeme_matrix_2dset_21( X6, X4, X5, TRUEVALUE );
L21273:
        X5 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L21268 );
L21269:
        X4 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L21263 );
L21264:
        SDVAL = p18050;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ib_2dmisc_cumference_8da04d9e_v );
DEFCSTRING( t21277, "ELLIPSE-CIRCUMFERENCE" );

TSCP  ib_2dmisc_cumference_8da04d9e( e18083 )
        TSCP  e18083;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21277 );
        X2 = qobischeme_ellipse_2da( e18083 );
        X3 = qobischeme_ellipse_2db( e18083 );
        X1 = qobischeme__2b_2dtwo( X2, X3 );
        X3 = qobischeme_ellipse_2da( e18083 );
        X4 = qobischeme_ellipse_2db( e18083 );
        X2 = qobischeme__2d_2dtwo( X3, X4 );
        X5 = qobischeme__2f_2dtwo( X2, X1 );
        X4 = qobischeme_sqr( X5 );
        X3 = qobischeme__2a_2dtwo( c18111, X4 );
        X9 = qobischeme__2d_2dtwo( _TSCP( 16 ), X3 );
        X8 = qobischeme_sqrt( X9 );
        X7 = qobischeme__2b_2dtwo( _TSCP( 40 ), X8 );
        X6 = qobischeme__2f_2dtwo( X3, X7 );
        X5 = qobischeme__2b_2dtwo( _TSCP( 4 ), X6 );
        X4 = qobischeme__2a_2dtwo( X1, X5 );
        POPSTACKTRACE( qobischeme__2a_2dtwo( qobischeme_pi_v, X4 ) );
}

DEFTSCP( ib_2dmisc_ellipse_3f_13b723b2_v );
DEFCSTRING( t21282, "POINT-INSIDE-OR-ON-ELLIPSE?" );

TSCP  ib_2dmisc_ellipse_3f_13b723b2( p18122, e18123 )
        TSCP  p18122, e18123;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21282 );
        X1 = qobischeme_ellipse_2dx0( e18123 );
        X2 = qobischeme_ellipse_2dy0( e18123 );
        X3 = qobischeme_ellipse_2da( e18123 );
        X4 = qobischeme_ellipse_2db( e18123 );
        X5 = qobischeme_ellipse_2dt0( e18123 );
        X8 = qobischeme__2d_2dtwo( _TSCP( 0 ), X5 );
        X7 = obischeme_atrix_2d2d_f732ed37( X8 );
        X11 = CONS( EMPTYLIST, EMPTYLIST );
        X10 = scrt1_cons_2a( X1, CONS( X2, X11 ) );
        X9 = scrt4_list_2d_3evector( X10 );
        X8 = qobischeme_v_2d( p18122, X9 );
        X6 = qobischeme_m_2av( X7, X8 );
        X10 = qobischeme_x( X6 );
        X9 = qobischeme__2f_2dtwo( X10, X3 );
        X8 = qobischeme_sqr( X9 );
        X11 = qobischeme_y( X6 );
        X10 = qobischeme__2f_2dtwo( X11, X4 );
        X9 = qobischeme_sqr( X10 );
        X7 = qobischeme__2b_2dtwo( X8, X9 );
        POPSTACKTRACE( qobischeme__3c_3d_2dtwo( X7, c18004 ) );
}

DEFTSCP( ib_2dmisc_ding_2dbox_bf69ab8f_v );
DEFCSTRING( t21290, "ELLIPSE-BOUNDING-BOX" );

TSCP  ib_2dmisc_ding_2dbox_bf69ab8f( e18152 )
        TSCP  e18152;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21290 );
        X1 = qobischeme_ellipse_2dx0( e18152 );
        X2 = qobischeme_ellipse_2dy0( e18152 );
        X3 = qobischeme_ellipse_2da( e18152 );
        X4 = qobischeme_ellipse_2db( e18152 );
        X5 = qobischeme_ellipse_2dt0( e18152 );
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
L21299:
        if  ( EQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L21300;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L21303;
        scrt1__24__car_2derror( X7 );
L21303:
        X12 = PAIR_CAR( X7 );
        X15 = CONS( EMPTYLIST, EMPTYLIST );
        X14 = scrt1_cons_2a( X1, CONS( X2, X15 ) );
        X13 = scrt4_list_2d_3evector( X14 );
        X15 = obischeme_atrix_2d2d_f732ed37( X5 );
        X14 = qobischeme_m_2av( X15, X12 );
        X11 = qobischeme_v_2b( X13, X14 );
        X10 = sc_cons( X11, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L21307;
        X11 = PAIR_CDR( X7 );
        X9 = X10;
        X8 = X10;
        X7 = X11;
        GOBACK( L21299 );
L21307:
        X11 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L21312;
        scdebug_error( c13505, 
                       c13506, CONS( X9, EMPTYLIST ) );
L21312:
        X9 = SETGEN( PAIR_CDR( X9 ), X10 );
        X7 = X11;
        GOBACK( L21299 );
L21300:
        POPSTACKTRACE( X8 );
}

DEFTSCP( ib_2dmisc__2dellipse_b19dc50f_v );
DEFCSTRING( t21314, "DRAW-FILLED-ELLIPSE" );

TSCP  ib_2dmisc__2dellipse_b19dc50f( p18220, e18221 )
        TSCP  p18220, e18221;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21314 );
        X1 = ib_2dmisc_ding_2dbox_bf69ab8f( e18221 );
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
L21320:
        X5 = qobischeme_y( X3 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X4, X5 ) ) )  goto L21321;
        X5 = qobischeme_x( X2 );
L21325:
        X6 = qobischeme_x( X3 );
        if  ( TRUE( qobischeme__3e_3d_2dtwo( X5, X6 ) ) )  goto L21326;
        X7 = CONS( X4, EMPTYLIST );
        X6 = scrt4_vector( CONS( X5, X7 ) );
        if  ( FALSE( ib_2dmisc_ellipse_3f_13b723b2( X6, e18221 ) )
            )  goto L21329;
        X6 = qobischeme_pbm_2dbitmap( p18220 );
        qobischeme_matrix_2dset_21( X6, X4, X5, TRUEVALUE );
L21329:
        X5 = qobischeme__2b_2dtwo( X5, _TSCP( 4 ) );
        GOBACK( L21325 );
L21326:
        X4 = qobischeme__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L21320 );
L21321:
        POPSTACKTRACE( p18220 );
}

DEFTSCP( toollib_2dmisc_precision_v );
DEFCSTRING( t21331, "PRECISION" );
EXTERNTSCPP( qobischeme_intersection, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_intersection_v );

TSCP  toollib_2dmisc_precision( r18253, r18254 )
        TSCP  r18253, r18254;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t21331 );
        X1 = scrt1_length( r18254 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L21333;
        X2 = qobischeme_intersection( r18253, r18254 );
        X1 = scrt1_length( X2 );
        X2 = scrt1_length( r18254 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L21333:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_recall_v );
DEFCSTRING( t21335, "RECALL" );

TSCP  toollib_2dmisc_recall( r18262, r18263 )
        TSCP  r18262, r18263;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t21335 );
        X1 = scrt1_length( r18262 );
        if  ( TRUE( qobischeme__3d_2dtwo( X1, _TSCP( 0 ) ) ) )  goto L21337;
        X2 = qobischeme_intersection( r18262, r18263 );
        X1 = scrt1_length( X2 );
        X2 = scrt1_length( r18262 );
        POPSTACKTRACE( qobischeme__2f_2dtwo( X1, X2 ) );
L21337:
        POPSTACKTRACE( _TSCP( 0 ) );
}

DEFTSCP( toollib_2dmisc_accuracy_v );
DEFCSTRING( t21339, "ACCURACY" );
EXTERNTSCPP( qobischeme_remove_2dif_2dnot, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_remove_2dif_2dnot_v );

TSCP  toollib_2dmisc_l18299( a18300, c21343 )
        TSCP  a18300, c21343;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18299 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21343, 0 );
        X4 = qobischeme_second( a18300 );
        X3 = qobischeme__3e_3d_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21346;
        if  ( FALSE( qobischeme_third( a18300 ) ) )  goto L21348;
        X2 = FALSEVALUE;
        goto L21347;
L21348:
        X2 = TRUEVALUE;
        goto L21347;
L21346:
        X2 = X3;
L21347:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_f18275(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( "FP [inside ACCURACY]" );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18299, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( X1, 
                                                     DISPLAY( 0 ) ) );
}

TSCP  toollib_2dmisc_l18309( a18310, c21351 )
        TSCP  a18310, c21351;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18309 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21351, 0 );
        X4 = qobischeme_second( a18310 );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21354;
        X2 = qobischeme_third( a18310 );
        goto L21355;
L21354:
        X2 = X3;
L21355:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_f18274(  )
{
        TSCP  X1;

        PUSHSTACKTRACE( "FN [inside ACCURACY]" );
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18309, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        POPSTACKTRACE( qobischeme_remove_2dif_2dnot( X1, 
                                                     DISPLAY( 0 ) ) );
}

TSCP  toollib_2dmisc_l18279( a18280, c21357 )
        TSCP  a18280, c21357;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18279 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21357, 0 );
        X4 = qobischeme_second( a18280 );
        X3 = qobischeme__3e_3d_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21360;
        X2 = qobischeme_third( a18280 );
        goto L21361;
L21360:
        X2 = X3;
L21361:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_l18289( a18290, c21363 )
        TSCP  a18290, c21363;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18289 [inside ACCURACY]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21363, 0 );
        X4 = qobischeme_second( a18290 );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 1 ) );
        if  ( FALSE( X3 ) )  goto L21366;
        if  ( FALSE( qobischeme_third( a18290 ) ) )  goto L21368;
        X2 = FALSEVALUE;
        goto L21367;
L21368:
        X2 = TRUEVALUE;
        goto L21367;
L21366:
        X2 = X3;
L21367:
        DISPLAY( 1 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  toollib_2dmisc_accuracy( a18271, t18272 )
        TSCP  a18271, t18272;
{
        TSCP  X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21339 );
        DISPLAY( 0 ) = a18271;
        DISPLAY( 1 ) = t18272;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18279, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 1 ) ) );
        X3 = qobischeme_remove_2dif_2dnot( X4, DISPLAY( 0 ) );
        X2 = scrt1_length( X3 );
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18289, 
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
DEFCSTRING( t21370, "PRF" );
EXTERNTSCPP( toollib_2dmisc_pr, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_pr_v );

TSCP  toollib_2dmisc_prf( f18325, t18326 )
        TSCP  f18325, t18326;
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

        PUSHSTACKTRACE( t21370 );
        X3 = f18325;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L21373:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21374;
        X2 = X4;
        goto L21415;
L21374:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L21377;
        scrt1__24__car_2derror( X3 );
L21377:
        X8 = PAIR_CAR( X3 );
        X10 = X8;
        X11 = EMPTYLIST;
        X12 = EMPTYLIST;
L21381:
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L21382;
        X9 = X11;
        goto L21407;
L21382:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L21385;
        scrt1__24__car_2derror( X10 );
L21385:
        X15 = PAIR_CAR( X10 );
        X17 = qobischeme_first( X15 );
        X21 = qobischeme_second( X15 );
        X20 = toollib_2dmisc_pr( X21, t18326 );
        X21 = X20;
        X22 = EMPTYLIST;
        X23 = EMPTYLIST;
L21390:
        if  ( NEQ( _S2CUINT( X21 ), _S2CUINT( EMPTYLIST ) ) )  goto L21391;
        X19 = X22;
        goto L21398;
L21391:
        if  ( EQ( TSCPTAG( X21 ), PAIRTAG ) )  goto L21394;
        scrt1__24__car_2derror( X21 );
L21394:
        X26 = PAIR_CAR( X21 );
        X25 = toollib_2dmisc_percentage( X26 );
        X24 = sc_cons( X25, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X22 ), _S2CUINT( EMPTYLIST ) ) )  goto L21397;
        X25 = PAIR_CDR( X21 );
        X23 = X24;
        X22 = X24;
        X21 = X25;
        GOBACK( L21390 );
L21397:
        X25 = PAIR_CDR( X21 );
        if  ( EQ( TSCPTAG( X23 ), PAIRTAG ) )  goto L21402;
        scdebug_error( c13505, 
                       c13506, CONS( X23, EMPTYLIST ) );
L21402:
        X23 = SETGEN( PAIR_CDR( X23 ), X24 );
        X21 = X25;
        GOBACK( L21390 );
L21398:
        X24 = qobischeme_second( X15 );
        X23 = toollib_2dmisc_pr( X24, t18326 );
        X22 = sc_apply_2dtwo( qobischeme__2a_v, X23 );
        X21 = toollib_2dmisc_percentage( X22 );
        X20 = sc_cons( X21, EMPTYLIST );
        X18 = sc_cons( X19, X20 );
        X16 = sc_cons( X17, X18 );
        X14 = X16;
        X13 = sc_cons( X14, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L21406;
        X14 = PAIR_CDR( X10 );
        X12 = X13;
        X11 = X13;
        X10 = X14;
        GOBACK( L21381 );
L21406:
        X14 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L21411;
        scdebug_error( c13505, 
                       c13506, CONS( X12, EMPTYLIST ) );
L21411:
        X12 = SETGEN( PAIR_CDR( X12 ), X13 );
        X10 = X14;
        GOBACK( L21381 );
L21407:
        X7 = toollib_2dmisc_maximump( X9, qobischeme_last_v );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L21414;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L21373 );
L21414:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L21419;
        scdebug_error( c13505, 
                       c13506, CONS( X5, EMPTYLIST ) );
L21419:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L21373 );
L21415:
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L21423:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21424;
        X1 = X4;
        goto L21431;
L21424:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L21427;
        scrt1__24__car_2derror( X3 );
L21427:
        X8 = PAIR_CAR( X3 );
        X7 = qobischeme_second( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L21430;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L21423 );
L21430:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L21435;
        scdebug_error( c13505, 
                       c13506, CONS( X5, EMPTYLIST ) );
L21435:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L21423 );
L21431:
        X6 = X1;
        X7 = EMPTYLIST;
        X8 = EMPTYLIST;
L21440:
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L21441;
        X5 = X7;
        goto L21448;
L21441:
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L21444;
        scrt1__24__car_2derror( X6 );
L21444:
        X11 = PAIR_CAR( X6 );
        X10 = qobischeme_first( X11 );
        X9 = sc_cons( X10, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L21447;
        X10 = PAIR_CDR( X6 );
        X8 = X9;
        X7 = X9;
        X6 = X10;
        GOBACK( L21440 );
L21447:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L21452;
        scdebug_error( c13505, 
                       c13506, CONS( X8, EMPTYLIST ) );
L21452:
        X8 = SETGEN( PAIR_CDR( X8 ), X9 );
        X6 = X10;
        GOBACK( L21440 );
L21448:
        X4 = qobischeme_reduce( qobischeme__2b_v, X5, _TSCP( 0 ) );
        X5 = scrt1_length( X1 );
        X3 = qobischeme__2f_2dtwo( X4, X5 );
        X8 = X1;
        X9 = EMPTYLIST;
        X10 = EMPTYLIST;
L21456:
        if  ( NEQ( _S2CUINT( X8 ), _S2CUINT( EMPTYLIST ) ) )  goto L21457;
        X7 = X9;
        goto L21464;
L21457:
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L21460;
        scrt1__24__car_2derror( X8 );
L21460:
        X13 = PAIR_CAR( X8 );
        X12 = qobischeme_second( X13 );
        X11 = sc_cons( X12, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L21463;
        X12 = PAIR_CDR( X8 );
        X10 = X11;
        X9 = X11;
        X8 = X12;
        GOBACK( L21456 );
L21463:
        X12 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L21468;
        scdebug_error( c13505, 
                       c13506, CONS( X10, EMPTYLIST ) );
L21468:
        X10 = SETGEN( PAIR_CDR( X10 ), X11 );
        X8 = X12;
        GOBACK( L21456 );
L21464:
        X6 = qobischeme_reduce( qobischeme__2b_v, X7, _TSCP( 0 ) );
        X7 = scrt1_length( X1 );
        X5 = qobischeme__2f_2dtwo( X6, X7 );
        X4 = sc_cons( X5, EMPTYLIST );
        X2 = sc_cons( X3, X4 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( toollib_2dmisc_accuracy_2dn_v );
DEFCSTRING( t21471, "ACCURACY-N" );

TSCP  toollib_2dmisc_l18600( v18601, c21473 )
        TSCP  v18601, c21473;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18600 [inside ACCURACY-N]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21473, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21473, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21473, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21473, 3 );
        X9 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2f_2dtwo( X9, DISPLAY( 3 ) );
        X7 = qobischeme__2a_2dtwo( v18601, X8 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X7 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X10 = qobischeme__2f_2dtwo( X11, DISPLAY( 3 ) );
        X9 = qobischeme__2a_2dtwo( v18601, X10 );
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

TSCP  toollib_2dmisc_accuracy_2dn( a18596, 
                                   a18597, b18598, n18599 )
        TSCP  a18596, a18597, b18598, n18599;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21471 );
        DISPLAY( 0 ) = a18596;
        DISPLAY( 1 ) = a18597;
        DISPLAY( 2 ) = b18598;
        DISPLAY( 3 ) = n18599;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18600, 
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
DEFCSTRING( t21475, "ACCURACY-A" );

TSCP  toollib_2dmisc_accuracy_2da( a18630, n18631 )
        TSCP  a18630, n18631;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t21475 );
        X2 = a18630;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L21479:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L21480;
        X1 = X3;
        goto L21487;
L21480:
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L21483;
        scrt1__24__car_2derror( X2 );
L21483:
        X7 = PAIR_CAR( X2 );
        X6 = qobischeme_second( X7 );
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L21486;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L21479 );
L21486:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L21491;
        scdebug_error( c13505, 
                       c13506, CONS( X4, EMPTYLIST ) );
L21491:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L21479 );
L21487:
        X2 = toollib_2dmisc_minimum( X1 );
        X3 = toollib_2dmisc_maximum( X1 );
        POPSTACKTRACE( toollib_2dmisc_accuracy_2dn( a18630, 
                                                    X2, X3, n18631 ) );
}

DEFTSCP( toollib_2dmisc_prf_2dn_v );
DEFCSTRING( t21494, "PRF-N" );

TSCP  toollib_2dmisc_l18681( v18682, c21496 )
        TSCP  v18682, c21496;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18681 [inside PRF-N]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21496, 0 );
        X2 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c21496, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c21496, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21496, 3 );
        X9 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                   DISPLAY( 1 ) );
        X8 = qobischeme__2f_2dtwo( X9, DISPLAY( 3 ) );
        X7 = qobischeme__2a_2dtwo( v18682, X8 );
        X6 = qobischeme__2b_2dtwo( DISPLAY( 1 ), X7 );
        X7 = CONS( EMPTYLIST, EMPTYLIST );
        X11 = qobischeme__2d_2dtwo( DISPLAY( 2 ), 
                                    DISPLAY( 1 ) );
        X10 = qobischeme__2f_2dtwo( X11, DISPLAY( 3 ) );
        X9 = qobischeme__2a_2dtwo( v18682, X10 );
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

TSCP  toollib_2dmisc_prf_2dn( a18677, a18678, b18679, n18680 )
        TSCP  a18677, a18678, b18679, n18680;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21494 );
        DISPLAY( 0 ) = a18677;
        DISPLAY( 1 ) = a18678;
        DISPLAY( 2 ) = b18679;
        DISPLAY( 3 ) = n18680;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18681, 
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
DEFCSTRING( t21498, "PRECISION-RECALL-THRESHOLD-P" );

TSCP  toollib_2dmisc_l18718( a18719, c21501 )
        TSCP  a18719, c21501;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18718 [inside PRECISION-RECALL-THRE\
SHOLD-P]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21501, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21501, 1 );
        X5 = DISPLAY( 1 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( a18719, 
                                          PROCEDURE_CLOSURE( X5 ) );
        X3 = qobischeme__3c_2dtwo( X4, DISPLAY( 0 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_eshold_2dp_45a07561( t18711, 
                                     a18712, p18713, g18714 )
        TSCP  t18711, a18712, p18713, g18714;
{
        TSCP  X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21498 );
        DISPLAY( 0 ) = t18711;
        DISPLAY( 1 ) = p18713;
        X1 = _TSCP( 0 );
        X2 = _TSCP( 0 );
        X2 = CONS( X2, EMPTYLIST );
        X1 = CONS( X1, EMPTYLIST );
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18718, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X3 = qobischeme_remove_2dif( X4, a18712 );
        SETGEN( PAIR_CAR( X1 ), X3 );
        X3 = qobischeme_remove_2dif_2dnot( g18714, a18712 );
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
DEFCSTRING( t21504, "PR" );

TSCP  toollib_2dmisc_pr( a18726, t18727 )
        TSCP  a18726, t18727;
{
        PUSHSTACKTRACE( t21504 );
        POPSTACKTRACE( ib_2dmisc_eshold_2dp_45a07561( t18727, 
                                                      a18726, 
                                                      qobischeme_second_v, 
                                                      qobischeme_third_v ) );
}

DEFTSCP( toollib_2dmisc_graph_2droc_v );
DEFCSTRING( t21506, "GRAPH-ROC" );

TSCP  toollib_2dmisc_graph_2droc( a18729, s18730 )
        TSCP  a18729, s18730;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21506 );
        X1 = CONS( s18730, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18731, X1 ) );
        X1 = a18729;
L21509:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21510;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21514;
        scrt1__24__car_2derror( X1 );
L21514:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_first( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18755, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21509 );
L21510:
        scrt6_format( TRUEVALUE, CONS( c18756, EMPTYLIST ) );
        X1 = CONS( s18730, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18757, X1 ) );
        X1 = a18729;
L21519:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21520;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21524;
        scrt1__24__car_2derror( X1 );
L21524:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_second( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18755, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21519 );
L21520:
        scrt6_format( TRUEVALUE, CONS( c18756, EMPTYLIST ) );
        X1 = CONS( s18730, EMPTYLIST );
        POPSTACKTRACE( scrt6_format( TRUEVALUE, 
                                     CONS( c18781, X1 ) ) );
}

DEFTSCP( ib_2dmisc_olor_2droc_28bc10e2_v );
DEFCSTRING( t21528, "GRAPH-COLOR-ROC" );

TSCP  ib_2dmisc_olor_2droc_28bc10e2( a18783, s18784 )
        TSCP  a18783, s18784;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t21528 );
        X1 = CONS( s18784, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18731, X1 ) );
        X1 = a18783;
L21531:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21532;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21536;
        scrt1__24__car_2derror( X1 );
L21536:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_first( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18755, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21531 );
L21532:
        scrt6_format( TRUEVALUE, CONS( c18756, EMPTYLIST ) );
        X1 = CONS( s18784, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18757, X1 ) );
        X1 = a18783;
L21541:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21542;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21546;
        scrt1__24__car_2derror( X1 );
L21546:
        X2 = PAIR_CAR( X1 );
        X4 = qobischeme_second( X2 );
        X3 = CONS( qobischeme_second( X4 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18755, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21541 );
L21542:
        scrt6_format( TRUEVALUE, CONS( c18756, EMPTYLIST ) );
        X1 = CONS( s18784, EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18831, X1 ) );
        X1 = a18783;
L21551:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L21552;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L21556;
        scrt1__24__car_2derror( X1 );
L21556:
        X2 = PAIR_CAR( X1 );
        X3 = CONS( qobischeme_first( X2 ), EMPTYLIST );
        scrt6_format( TRUEVALUE, CONS( c18755, X3 ) );
        X1 = PAIR_CDR( X1 );
        GOBACK( L21551 );
L21552:
        scrt6_format( TRUEVALUE, CONS( c18756, EMPTYLIST ) );
        X1 = CONS( s18784, EMPTYLIST );
        X1 = CONS( s18784, X1 );
        X1 = CONS( s18784, X1 );
        POPSTACKTRACE( scrt6_format( TRUEVALUE, 
                                     CONS( c18855, X1 ) ) );
}

DEFTSCP( ib_2dmisc_compressed_dc9714fc_v );
DEFCSTRING( t21560, "WITH-DECOMPRESSED" );
EXTERNTSCPP( qobischeme_strip_2ddirectory, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_strip_2ddirectory_v );

TSCP  toollib_2dmisc_l18859( t18860, c21562 )
        TSCP  t18860, c21562;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dmisc_l18859 [inside WITH-DECOMPRESSED]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c21562, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c21562, 1 );
        X7 = CONS( c18861, EMPTYLIST );
        X6 = scrt3_string_2dappend( CONS( DISPLAY( 0 ), X7 ) );
        if  ( FALSE( qobischeme_file_2dexists_3f( X6 ) ) )  goto L21564;
        X7 = CONS( t18860, EMPTYLIST );
        X8 = CONS( c18861, EMPTYLIST );
        X7 = CONS( scrt3_string_2dappend( CONS( DISPLAY( 0 ), X8 ) ), 
                   X7 );
        X6 = scrt6_format( FALSEVALUE, CONS( c18866, X7 ) );
        scrt4_system( X6 );
        X5 = t18860;
        goto L21568;
L21564:
        X7 = CONS( c18862, EMPTYLIST );
        X6 = scrt3_string_2dappend( CONS( DISPLAY( 0 ), X7 ) );
        if  ( FALSE( qobischeme_file_2dexists_3f( X6 ) ) )  goto L21567;
        X7 = CONS( t18860, EMPTYLIST );
        X8 = CONS( c18862, EMPTYLIST );
        X7 = CONS( scrt3_string_2dappend( CONS( DISPLAY( 0 ), X8 ) ), 
                   X7 );
        X6 = scrt6_format( FALSEVALUE, CONS( c18864, X7 ) );
        scrt4_system( X6 );
        X5 = t18860;
        goto L21568;
L21567:
        X5 = DISPLAY( 0 );
L21568:
        X4 = DISPLAY( 1 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  ib_2dmisc_compressed_dc9714fc( p18857, f18858 )
        TSCP  p18857, f18858;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t21560 );
        DISPLAY( 0 ) = p18857;
        DISPLAY( 1 ) = f18858;
        X1 = qobischeme_strip_2ddirectory( DISPLAY( 0 ) );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dmisc_l18859, 
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
DEFCSTRING( t21570, "READ-OBJECT-FROM-CFILE" );

TSCP  ib_2dmisc_om_2dcfile_df02fb06( p18868 )
        TSCP  p18868;
{
        PUSHSTACKTRACE( t21570 );
        POPSTACKTRACE( ib_2dmisc_compressed_dc9714fc( p18868, 
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
        INITIALIZEVAR( t19044, 
                       ADR( ib_2dmisc_sc_2d1_2d0_e920e698_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d1_2d0_e920e698, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19046, 
                       ADR( ib_2dmisc_sc_2d3_2d0_93e0b5f8_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d3_2d0_93e0b5f8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19048, 
                       ADR( ib_2dmisc_sc_2d5_2d0_1ca04058_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d5_2d0_1ca04058, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19050, 
                       ADR( ib_2dmisc_sc_2d7_2d0_66601338_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_sc_2d7_2d0_66601338, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19052, 
                       ADR( ib_2dmisc_ging_3f_2a_f4a9801b_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t19053, 
                       ADR( toollib_2dmisc__2aquiet_3f_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t19054, 
                       ADR( toollib_2dmisc_implies_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_implies, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19061, 
                       ADR( toollib_2dmisc_dtrace_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_dtrace, EMPTYLIST ) );
        INITIALIZEVAR( t19063, 
                       ADR( toollib_2dmisc_fixpointp_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_fixpointp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19068, 
                       ADR( toollib_2dmisc_exact_2dround_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_exact_2dround, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19070, 
                       ADR( toollib_2dmisc_exact_2dfloor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_exact_2dfloor, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19072, 
                       ADR( ib_2dmisc__2dceiling_3845082b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dceiling_3845082b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19074, 
                       ADR( toollib_2dmisc_sigmoid_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_sigmoid, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19076, 
                       ADR( ib_2dmisc_ct_2dangle_ed09f1a1_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_ct_2dangle_ed09f1a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19083, 
                       ADR( toollib_2dmisc_percentage_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_percentage, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19085, 
                       ADR( toollib_2dmisc_last_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_last_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19095, 
                       ADR( toollib_2dmisc__2asettings_2a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t19096, 
                       ADR( ib_2dmisc_ings_21_2a_77c5ebb_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ings_21_2a_77c5ebb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19098, 
                       ADR( ib_2dmisc_ettings_2a_9d4d158e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ettings_2a_9d4d158e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19100, 
                       ADR( ib_2dmisc_s_2dlookup_299fc00b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_s_2dlookup_299fc00b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19115, 
                       ADR( ib_2dmisc_s_2dupdate_41a64476_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_s_2dupdate_41a64476, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19165, 
                       ADR( ib_2dmisc_s_2dremove_b1036c3e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_s_2dremove_b1036c3e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19212, 
                       ADR( ib_2dmisc_dlookup_2a_5f54d161_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      ib_2dmisc_dlookup_2a_5f54d161, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19214, 
                       ADR( ib_2dmisc_date_21_2a_fe258695_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_date_21_2a_fe258695, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19216, 
                       ADR( ib_2dmisc_dremove_2a_86ffda08_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      ib_2dmisc_dremove_2a_86ffda08, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19218, 
                       ADR( toollib_2dmisc_list_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_list_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19225, 
                       ADR( ib_2dmisc_covariance_14dd252a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_covariance_14dd252a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19244, 
                       ADR( ib_2dmisc_2dvariance_82eaae76_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dvariance_82eaae76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19263, 
                       ADR( ib_2dmisc_2dskewness_4559bc2b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dskewness_4559bc2b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19282, 
                       ADR( ib_2dmisc_2dkurtosis_94af7ba9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dkurtosis_94af7ba9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19301, 
                       ADR( ib_2dmisc_orrelation_e415d63c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orrelation_e415d63c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19325, 
                       ADR( toollib_2dmisc_vector_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_vector_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19330, 
                       ADR( ib_2dmisc_2dvariance_3a32caa5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dvariance_3a32caa5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19338, 
                       ADR( ib_2dmisc_2dskewness_fd81d8f8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dskewness_fd81d8f8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19346, 
                       ADR( ib_2dmisc_2dkurtosis_2c771f7a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dkurtosis_2c771f7a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19354, 
                       ADR( ib_2dmisc_orrelation_e243a9a8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orrelation_e243a9a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19359, 
                       ADR( ib_2dmisc_bimodality_dba868a3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_bimodality_dba868a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19365, 
                       ADR( toollib_2dmisc_vectors_2dmean_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_vectors_2dmean, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19370, 
                       ADR( ib_2dmisc_2dvariance_54d102bf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2dvariance_54d102bf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19377, 
                       ADR( ib_2dmisc_2ddistance_971fca4c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2ddistance_971fca4c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19385, 
                       ADR( toollib_2dmisc_frequencies_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_frequencies, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19396, 
                       ADR( ib_2dmisc_sublist_3f_66fdafb3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_sublist_3f_66fdafb3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19416, 
                       ADR( toollib_2dmisc_p_2dleaf_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_p_2dleaf_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19418, 
                       ADR( toollib_2dmisc_ip_2dleaf_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ip_2dleaf_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19424, 
                       ADR( toollib_2dmisc_index_2dleaves_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_index_2dleaves, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19442, 
                       ADR( ib_2dmisc_d_3eleaves_f440aa79_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_3eleaves_f440aa79, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19460, 
                       ADR( toollib_2dmisc_make_2dzipper_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_make_2dzipper, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19480, 
                       ADR( toollib_2dmisc_zipper_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_zipper_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19493, 
                       ADR( ib_2dmisc__2dtree_21_edaf9ba0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dtree_21_edaf9ba0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19497, 
                       ADR( toollib_2dmisc_zipper_2dtree_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_zipper_2dtree, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19508, 
                       ADR( ib_2dmisc__2dtree_21_d6235974_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dtree_21_d6235974, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19519, 
                       ADR( ib_2dmisc_dthread_21_884870d1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dthread_21_884870d1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19523, 
                       ADR( ib_2dmisc_r_2dthread_bdbb94d4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_r_2dthread_bdbb94d4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19534, 
                       ADR( ib_2dmisc_dthread_21_1876e8da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dthread_21_1876e8da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19545, 
                       ADR( ib_2dmisc_initialize_b0401efa_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_initialize_b0401efa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19547, 
                       ADR( ib_2dmisc__3adescend_aaeaab15_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__3adescend_aaeaab15, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19556, 
                       ADR( ib_2dmisc_r_3aascend_83fa263_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_r_3aascend_83fa263, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19585, 
                       ADR( ib_2dmisc_cend_2dseq_c2837d94_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_cend_2dseq_c2837d94, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19595, 
                       ADR( ib_2dmisc_ascend_2dn_ba70bf1b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ascend_2dn_ba70bf1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19603, 
                       ADR( ib_2dmisc_dascend_3f_f58e1843_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dascend_3f_f58e1843, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19605, 
                       ADR( ib_2dmisc_descend_3f_ec35a266_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_descend_3f_ec35a266, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19607, 
                       ADR( ib_2dmisc_nd_2duntil_229b5165_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_nd_2duntil_229b5165, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19613, 
                       ADR( ib_2dmisc_d_2dheight_6e8bfcbb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_d_2dheight_6e8bfcbb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19615, 
                       ADR( toollib_2dmisc_my_2dfloor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dfloor, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19624, 
                       ADR( toollib_2dmisc_my_2dceiling_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dceiling, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19633, 
                       ADR( toollib_2dmisc_my_2dround_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dround, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19642, 
                       ADR( toollib_2dmisc_my_2dmax_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dmax, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19648, 
                       ADR( toollib_2dmisc_my_2dmin_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dmin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19650, 
                       ADR( toollib_2dmisc_my_2dabs_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_my_2dabs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19654, 
                       ADR( ib_2dmisc_2dchks_2d2_dfd44528_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2dchks_2d2_dfd44528, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19697, 
                       ADR( ib_2dmisc_2dchks_2d2_66f2de59_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2dchks_2d2_66f2de59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19699, 
                       ADR( toollib_2dmisc_my_2dadd_2dexp_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_my_2dadd_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19708, 
                       ADR( toollib_2dmisc_recip_2dexp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_recip_2dexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19713, 
                       ADR( toollib_2dmisc_window_2did_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_window_2did, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19717, 
                       ADR( ib_2dmisc_cording_21_5bb4940f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_cording_21_5bb4940f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19719, 
                       ADR( ib_2dmisc_ocation_21_cd203ece_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_ocation_21_cd203ece, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19721, 
                       ADR( ib_2dmisc_cording_21_1421a7f0_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_cording_21_1421a7f0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19723, 
                       ADR( ib_2dmisc_ation_2d3d_b4bc348b_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ation_2d3d_b4bc348b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19725, 
                       ADR( toollib_2dmisc_scaling_2d3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_scaling_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19727, 
                       ADR( ib_2dmisc_n_2d3d_2dx_13f7eadc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dx_13f7eadc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19729, 
                       ADR( ib_2dmisc_n_2d3d_2dy_64f0da4a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dy_64f0da4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19731, 
                       ADR( ib_2dmisc_n_2d3d_2dz_fdf98bf0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2d3d_2dz_fdf98bf0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19733, 
                       ADR( toollib_2dmisc_identity_2d3d_v ), 
                       ib_2dmisc_ation_2d3d_b4bc348b( _TSCP( 0 ), 
                                                      _TSCP( 0 ), 
                                                      _TSCP( 0 ) ) );
        INITIALIZEVAR( t19734, 
                       ADR( ib_2dmisc_sform_2d3d_e2268f0e_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      ib_2dmisc_sform_2d3d_e2268f0e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19736, 
                       ADR( ib_2dmisc_homogenous_22fd274e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_homogenous_22fd274e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19738, 
                       ADR( ib_2dmisc_2d_3epoint_9d37e6e9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2d_3epoint_9d37e6e9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19740, 
                       ADR( ib_2dmisc_point_2d3d_50aa6438_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_point_2d3d_50aa6438, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19742, 
                       ADR( ib_2dmisc_dline_2d3d_9b771eb6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d3d_9b771eb6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19744, 
                       ADR( ib_2dmisc_orm_2dline_4d8a20e7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_orm_2dline_4d8a20e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19746, 
                       ADR( ib_2dmisc_components_a776ca69_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_components_a776ca69, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19772, 
                       ADR( ib_2dmisc_components_9631de6f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_components_9631de6f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19777, 
                       ADR( toollib_2dmisc_project_2dline_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_project_2dline, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19779, 
                       ADR( toollib_2dmisc_safe_2dproject_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_safe_2dproject, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19783, 
                       ADR( ib_2dmisc_ect_2dline_92cf24d3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ect_2dline_92cf24d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19785, 
                       ADR( ib_2dmisc_point_2d2d_5a547106_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_point_2d2d_5a547106, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19787, 
                       ADR( ib_2dmisc_dline_2d2d_bd006ef_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d2d_bd006ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19789, 
                       ADR( ib_2dmisc_n_2dvector_fadaca1b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_n_2dvector_fadaca1b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19791, 
                       ADR( ib_2dmisc_dline_2d2d_396d1575_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_dline_2d2d_396d1575, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19797, 
                       ADR( toollib_2dmisc_filter_2dlines_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_filter_2dlines, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19825, 
                       ADR( ib_2dmisc_2ddistance_b82131e6_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2ddistance_b82131e6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19828, 
                       ADR( ib_2dmisc_ary_2dfile_c506fef2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ary_2dfile_c506fef2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19832, 
                       ADR( ib_2dmisc_m_2doutput_38ec6a1e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_m_2doutput_38ec6a1e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19836, 
                       ADR( ib_2dmisc_ure_2dpath_df819e9e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ure_2dpath_df819e9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19841, 
                       ADR( toollib_2dmisc_pwd_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      toollib_2dmisc_pwd, EMPTYLIST ) );
        INITIALIZEVAR( t19843, 
                       ADR( ib_2dmisc_ead_2dfile_58650293_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_ead_2dfile_58650293, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19852, 
                       ADR( toollib_2dmisc_lookup_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_lookup, EMPTYLIST ) );
        INITIALIZEVAR( t19854, 
                       ADR( toollib_2dmisc_lookup_2dvalue_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_lookup_2dvalue, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19859, 
                       ADR( ib_2dmisc_p_2dvalues_6c98ba51_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_p_2dvalues_6c98ba51, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19864, 
                       ADR( toollib_2dmisc_split_2dn_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_split_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19868, 
                       ADR( toollib_2dmisc_split_2dcomma_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_split_2dcomma, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19870, 
                       ADR( toollib_2dmisc_flatten_2a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_flatten_2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19885, 
                       ADR( toollib_2dmisc_snoc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_snoc, EMPTYLIST ) );
        INITIALIZEVAR( t19888, 
                       ADR( toollib_2dmisc_maximum_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_maximum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19910, 
                       ADR( toollib_2dmisc_minimum_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_minimum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19932, 
                       ADR( toollib_2dmisc_maximump_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_maximump, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19954, 
                       ADR( toollib_2dmisc_minimump_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_minimump, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19976, 
                       ADR( ib_2dmisc_2dposition_5ae68915_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dposition_5ae68915, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19987, 
                       ADR( ib_2dmisc_2dposition_6453419d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dposition_6453419d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19998, 
                       ADR( toollib_2dmisc_safe_2dsublist_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_safe_2dsublist, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20002, 
                       ADR( ib_2dmisc_d_2dvector_58ad8696_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dvector_58ad8696, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20029, 
                       ADR( ib_2dmisc_2dposition_3ed14c76_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_2dposition_3ed14c76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20045, 
                       ADR( toollib_2dmisc_rest_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_rest_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20050, 
                       ADR( ib_2dmisc_f_2dvector_8b75269e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_f_2dvector_8b75269e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20062, 
                       ADR( ib_2dmisc_t_2dvector_9580ea2a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_t_2dvector_9580ea2a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20074, 
                       ADR( toollib_2dmisc_o_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      toollib_2dmisc_o, EMPTYLIST ) );
        INITIALIZEVAR( t20081, 
                       ADR( ib_2dmisc_d_2dvector_e52d1f5a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dvector_e52d1f5a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20095, 
                       ADR( toollib_2dmisc_crop_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_crop, EMPTYLIST ) );
        INITIALIZEVAR( t20099, 
                       ADR( toollib_2dmisc_map_2dlinear_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_map_2dlinear, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20103, 
                       ADR( toollib_2dmisc_map_2dmedial_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_map_2dmedial, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20132, 
                       ADR( ib_2dmisc_2dref_2dnd_f10eab19_v ), 
                       MAKEPROCEDURE( 1, 
                                      1, 
                                      ib_2dmisc_2dref_2dnd_f10eab19, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20150, 
                       ADR( ib_2dmisc_2d3d_2dref_baeb01c_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2d3d_2dref_baeb01c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20152, 
                       ADR( ib_2dmisc_et_2dnd_21_214a58da_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      ib_2dmisc_et_2dnd_21_214a58da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20171, 
                       ADR( ib_2dmisc_d_2dset_21_2a950b3f_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_d_2dset_21_2a950b3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20173, 
                       ADR( ib_2dmisc_atrix_2dnd_96246a2e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_96246a2e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20179, 
                       ADR( ib_2dmisc_atrix_2dnd_243ca8eb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_243ca8eb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20185, 
                       ADR( toollib_2dmisc_map_2dmatrix_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_map_2dmatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20187, 
                       ADR( ib_2dmisc_h_2dmatrix_9b00ff76_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_h_2dmatrix_9b00ff76, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20189, 
                       ADR( ib_2dmisc_atrix_2d3d_99314937_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_99314937, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20191, 
                       ADR( ib_2dmisc_atrix_2d3d_2b298bf2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_2b298bf2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20193, 
                       ADR( ib_2dmisc_n_2dmatrix_7b48bbf5_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_n_2dmatrix_7b48bbf5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20199, 
                       ADR( ib_2dmisc_n_2dmatrix_de81564c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_n_2dmatrix_de81564c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20205, 
                       ADR( ib_2dmisc_d_2dmatrix_3f07691a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dmatrix_3f07691a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20211, 
                       ADR( ib_2dmisc_d_2dmatrix_67016ce_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_d_2dmatrix_67016ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20217, 
                       ADR( ib_2dmisc_atrix_2d3d_20e4c0ae_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_20e4c0ae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20223, 
                       ADR( ib_2dmisc_atrix_2d3d_30f75a92_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_30f75a92, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20229, 
                       ADR( ib_2dmisc_atrix_2dnd_835dc287_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_835dc287, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20235, 
                       ADR( ib_2dmisc_atrix_2dnd_17ba6b06_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_atrix_2dnd_17ba6b06, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20241, 
                       ADR( ib_2dmisc_e_2dmatrix_500e2fbc_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_500e2fbc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20243, 
                       ADR( ib_2dmisc_e_2dmatrix_3b2d0a7_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_3b2d0a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20245, 
                       ADR( ib_2dmisc_atrix_2d3d_8c48e19e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_8c48e19e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20247, 
                       ADR( ib_2dmisc_atrix_2d3d_18af481f_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_atrix_2d3d_18af481f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20249, 
                       ADR( ib_2dmisc_dimensions_4d85f46e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dimensions_4d85f46e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20262, 
                       ADR( toollib_2dmisc_matrix_2dtrace_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_matrix_2dtrace, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20272, 
                       ADR( toollib_2dmisc_map_2dm_2dn_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_map_2dm_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20278, 
                       ADR( ib_2dmisc_ch_2dm_2dn_8222982c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ch_2dm_2dn_8222982c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20285, 
                       ADR( ib_2dmisc__2dn_2ddec_6800fcab_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc__2dn_2ddec_6800fcab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20292, 
                       ADR( toollib_2dmisc_concat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_concat, EMPTYLIST ) );
        INITIALIZEVAR( t20294, 
                       ADR( ib_2dmisc_lat_2dlist_6a66ab96_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_lat_2dlist_6a66ab96, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20296, 
                       ADR( toollib_2dmisc_map_2dn_2d3_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_map_2dn_2d3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20304, 
                       ADR( ib_2dmisc_at_2dn_2d3_628f792d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_at_2dn_2d3_628f792d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20312, 
                       ADR( ib_2dmisc_ector_2d2d_c893abe0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_c893abe0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20314, 
                       ADR( ib_2dmisc_2d2_2dargs_aa33907c_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_2d2_2dargs_aa33907c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20320, 
                       ADR( ib_2dmisc_r_2d2d_2d2_b146b1cb_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_r_2d2d_2d2_b146b1cb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20326, 
                       ADR( ib_2dmisc_ector_2d2d_cf4cd6d4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_cf4cd6d4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20332, 
                       ADR( ib_2dmisc_ector_2d2d_d35ffcee_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_d35ffcee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20340, 
                       ADR( ib_2dmisc_ector_2d2d_ddea0349_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_ddea0349, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20342, 
                       ADR( toollib_2dmisc_shape_2dmatrix_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_shape_2dmatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20358, 
                       ADR( ib_2dmisc_e_2dmatrix_11b5d357_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_e_2dmatrix_11b5d357, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20364, 
                       ADR( ib_2dmisc_of_2dlists_d3b9f71d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_of_2dlists_d3b9f71d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20366, 
                       ADR( ib_2dmisc_d_3ematrix_c6388f1f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_d_3ematrix_c6388f1f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20384, 
                       ADR( ib_2dmisc_of_2dlists_4a915dec_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_of_2dlists_4a915dec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20386, 
                       ADR( toollib_2dmisc_zip_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      toollib_2dmisc_zip, EMPTYLIST ) );
        INITIALIZEVAR( t20443, 
                       ADR( toollib_2dmisc_take_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_take, EMPTYLIST ) );
        INITIALIZEVAR( t20445, 
                       ADR( toollib_2dmisc_take_2duntil_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_take_2duntil, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20463, 
                       ADR( toollib_2dmisc_drop_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_drop, EMPTYLIST ) );
        INITIALIZEVAR( t20465, 
                       ADR( toollib_2dmisc_drop_2duntil_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_drop_2duntil, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20477, 
                       ADR( toollib_2dmisc_fold_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_fold, EMPTYLIST ) );
        INITIALIZEVAR( t20479, 
                       ADR( toollib_2dmisc_foldl_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_foldl, EMPTYLIST ) );
        INITIALIZEVAR( t20485, 
                       ADR( toollib_2dmisc_foldr_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_foldr, EMPTYLIST ) );
        INITIALIZEVAR( t20494, 
                       ADR( toollib_2dmisc_join_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_join, EMPTYLIST ) );
        INITIALIZEVAR( t20496, 
                       ADR( toollib_2dmisc_map_2dconcat_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_map_2dconcat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20513, 
                       ADR( ib_2dmisc_concat_2dn_feb89efa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_concat_2dn_feb89efa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20515, 
                       ADR( toollib_2dmisc_ring_2dforward_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ring_2dforward, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20522, 
                       ADR( ib_2dmisc_2dbackward_b31d3193_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2dbackward_b31d3193, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20528, 
                       ADR( ib_2dmisc_rward_2dto_988e410e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_rward_2dto_988e410e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20535, 
                       ADR( ib_2dmisc__2dbetween_6d18396f_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc__2dbetween_6d18396f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20537, 
                       ADR( ib_2dmisc_d_2dvector_dc5a608e_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      ib_2dmisc_d_2dvector_dc5a608e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20582, 
                       ADR( ib_2dmisc_t_2dcenter_8103fadf_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_t_2dcenter_8103fadf, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20584, 
                       ADR( ib_2dmisc_trix_2dref_a6f30345_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_trix_2dref_a6f30345, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20586, 
                       ADR( toollib_2dmisc_matrix_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_matrix_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20599, 
                       ADR( toollib_2dmisc_submatrix_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_submatrix, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20611, 
                       ADR( toollib_2dmisc_string_2djoin_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_string_2djoin, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20621, 
                       ADR( ib_2dmisc__2a_2djoin_126dcf23_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2a_2djoin_126dcf23, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20631, 
                       ADR( toollib_2dmisc_string_2dfind_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_string_2dfind, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20654, 
                       ADR( ib_2dmisc_om_2dindex_546de6a3_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_om_2dindex_546de6a3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20677, 
                       ADR( toollib_2dmisc_unlines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_unlines, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20679, 
                       ADR( toollib_2dmisc_lines_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_lines, EMPTYLIST ) );
        INITIALIZEVAR( t20694, 
                       ADR( toollib_2dmisc_words_v ), 
                       qobischeme_fields_v );
        INITIALIZEVAR( t20695, 
                       ADR( toollib_2dmisc_unwords_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_unwords, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20697, 
                       ADR( ib_2dmisc_e_2dcenter_ed08db28_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_e_2dcenter_ed08db28, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20717, 
                       ADR( ib_2dmisc_dcenter_3f_8e2f98a8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_dcenter_3f_8e2f98a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20730, 
                       ADR( ib_2dmisc_ter_2dx_21_b89b2172_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dx_21_b89b2172, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20734, 
                       ADR( ib_2dmisc_center_2dx_b5a9f5f9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_center_2dx_b5a9f5f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20745, 
                       ADR( ib_2dmisc_ter_2dx_21_cc37d3ba_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dx_21_cc37d3ba, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20756, 
                       ADR( ib_2dmisc_ter_2dy_21_274617_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dy_21_274617, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20760, 
                       ADR( ib_2dmisc_center_2dy_c2aec56f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_center_2dy_c2aec56f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20771, 
                       ADR( ib_2dmisc_ter_2dy_21_748bb4df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ter_2dy_21_748bb4df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20782, 
                       ADR( ib_2dmisc_e_2dcenter_6f8fe7a1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_e_2dcenter_6f8fe7a1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20784, 
                       ADR( ib_2dmisc_ed_2dgc_2a_9062c7ce_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20785, 
                       ADR( ib_2dmisc_ue_2dgc_2a_51440329_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20786, 
                       ADR( ib_2dmisc_ge_2dgc_2a_cae315b6_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20787, 
                       ADR( ib_2dmisc_en_2dgc_2a_477bc7e_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20788, 
                       ADR( ib_2dmisc_ed_2dgc_2a_ac36d558_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20789, 
                       ADR( ib_2dmisc_ue_2dgc_2a_4814614a_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20790, 
                       ADR( ib_2dmisc_ge_2dgc_2a_278f34f6_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20791, 
                       ADR( ib_2dmisc_en_2dgc_2a_d0d5dcfe_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20792, 
                       ADR( ib_2dmisc__2dfont_2a_280b0bc8_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20793, 
                       ADR( ib_2dmisc_da_2dgc_2a_30479eb9_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20794, 
                       ADR( ib_2dmisc_aseline_2a_eb2c34b2_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t20795, 
                       ADR( ib_2dmisc_ed_2dgc_2a_cb09fb42_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ed_2dgc_2a_cb09fb42, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20797, 
                       ADR( ib_2dmisc_ue_2dgc_2a_b511a71e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ue_2dgc_2a_b511a71e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20799, 
                       ADR( ib_2dmisc_ge_2dgc_2a_8b5f3626_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ge_2dgc_2a_8b5f3626, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20801, 
                       ADR( ib_2dmisc_en_2dgc_2a_bc2e4cd5_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_en_2dgc_2a_bc2e4cd5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20803, 
                       ADR( ib_2dmisc_ed_2dgc_2a_4863716f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ed_2dgc_2a_4863716f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20805, 
                       ADR( ib_2dmisc_ue_2dgc_2a_f04d91e1_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ue_2dgc_2a_f04d91e1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20807, 
                       ADR( ib_2dmisc_ge_2dgc_2a_d7c11b91_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_ge_2dgc_2a_d7c11b91, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20809, 
                       ADR( ib_2dmisc_en_2dgc_2a_9169ff6e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_en_2dgc_2a_9169ff6e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20811, 
                       ADR( ib_2dmisc_da_2dgc_2a_71fbbd29_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_da_2dgc_2a_71fbbd29, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20813, 
                       ADR( ib_2dmisc__2dx_2dgcs_966031b0_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc__2dx_2dgcs_966031b0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20815, 
                       ADR( ib_2dmisc__2dx_2dgcs_425cb919_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc__2dx_2dgcs_425cb919, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20817, 
                       ADR( ib_2dmisc_e_2devents_5e33b1f4_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      ib_2dmisc_e_2devents_5e33b1f4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20827, 
                       ADR( ib_2dmisc__2dbuttons_da277968_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dbuttons_da277968, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20834, 
                       ADR( ib_2dmisc_roll_2dbar_94710cad_v ), 
                       MAKEPROCEDURE( 10, 
                                      0, 
                                      ib_2dmisc_roll_2dbar_94710cad, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20922, 
                       ADR( ib_2dmisc_2d_3elines_2a2b92ea_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_2d_3elines_2a2b92ea, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20944, 
                       ADR( toollib_2dmisc_acot_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_acot, EMPTYLIST ) );
        INITIALIZEVAR( t20946, 
                       ADR( ib_2dmisc__2dinverse_e1b53b4a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dinverse_e1b53b4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20951, 
                       ADR( ib_2dmisc__2dinverse_2d42fdb5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc__2dinverse_2d42fdb5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20956, 
                       ADR( toollib_2dmisc_ellipse_2dfit_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_ellipse_2dfit, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t20958, 
                       ADR( ib_2dmisc_t_2dscheme_6289f649_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_t_2dscheme_6289f649, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21103, 
                       ADR( toollib_2dmisc_every_2dn_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21109, 
                       ADR( toollib_2dmisc_every_2dn_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21115, 
                       ADR( toollib_2dmisc_every_2dn_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21121, 
                       ADR( toollib_2dmisc_every_2dn_2d5d_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dmisc_every_2dn_2d5d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21127, 
                       ADR( ib_2dmisc_ector_2d2d_b84c4399_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ib_2dmisc_ector_2d2d_b84c4399, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21133, 
                       ADR( ib_2dmisc_ector_2d3d_a15772d8_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_ector_2d3d_a15772d8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21139, 
                       ADR( ib_2dmisc_ector_2d4d_ee16e41f_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      ib_2dmisc_ector_2d4d_ee16e41f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21145, 
                       ADR( ib_2dmisc_ector_2d5d_f70dd55e_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      ib_2dmisc_ector_2d5d_f70dd55e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21151, 
                       ADR( toollib_2dmisc_product_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_product_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21157, 
                       ADR( toollib_2dmisc_ref_2d1d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_ref_2d1d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21166, 
                       ADR( toollib_2dmisc_ref_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_ref_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21168, 
                       ADR( toollib_2dmisc_ref_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_ref_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21177, 
                       ADR( toollib_2dmisc_ref_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_ref_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21179, 
                       ADR( toollib_2dmisc_ref_2d5d_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      toollib_2dmisc_ref_2d5d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21181, 
                       ADR( toollib_2dmisc_sum_2d2d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_sum_2d2d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21187, 
                       ADR( toollib_2dmisc_sum_2d3d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_sum_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21193, 
                       ADR( toollib_2dmisc_sum_2d4d_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      toollib_2dmisc_sum_2d4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21199, 
                       ADR( toollib_2dmisc_sum_2dpairs_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_sum_2dpairs, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21205, 
                       ADR( toollib_2dmisc_vector_2dsum_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_vector_2dsum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21212, 
                       ADR( ib_2dmisc_2dsum_2d2d_3d2af86d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2dsum_2d2d_3d2af86d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21218, 
                       ADR( toollib_2dmisc_matrix_2dsum_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_matrix_2dsum, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21225, 
                       ADR( ib_2dmisc_2dsum_2d2d_26b3d5d2_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_2dsum_2d2d_26b3d5d2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21231, 
                       ADR( toollib_2dmisc_v_2fk_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_v_2fk, EMPTYLIST ) );
        INITIALIZEVAR( t21233, 
                       ADR( toollib_2dmisc_m_2fk_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_m_2fk, EMPTYLIST ) );
        INITIALIZEVAR( t21235, 
                       ADR( toollib_2dmisc_v_2am_2av_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_v_2am_2av, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21237, 
                       ADR( toollib_2dmisc_sum_2df_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_sum_2df, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21239, 
                       ADR( toollib_2dmisc_sum_2dvector_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dmisc_sum_2dvector, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21241, 
                       ADR( ib_2dmisc_vector_2df_f10f8b95_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_vector_2df_f10f8b95, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21243, 
                       ADR( toollib_2dmisc_float_2dmodulo_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_float_2dmodulo, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21245, 
                       ADR( ib_2dmisc_y_2dmatrix_28bb2f8c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_y_2dmatrix_28bb2f8c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21247, 
                       ADR( toollib_2dmisc_translate_2d3d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_translate_2d3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21249, 
                       ADR( toollib_2dmisc_draw_2dcircle_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dmisc_draw_2dcircle, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21251, 
                       ADR( ib_2dmisc_riangle_3f_ee3b420c_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_riangle_3f_ee3b420c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21259, 
                       ADR( ib_2dmisc__2dpolygon_3a3a6277_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dpolygon_3a3a6277, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21277, 
                       ADR( ib_2dmisc_cumference_8da04d9e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_cumference_8da04d9e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21282, 
                       ADR( ib_2dmisc_ellipse_3f_13b723b2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_ellipse_3f_13b723b2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21290, 
                       ADR( ib_2dmisc_ding_2dbox_bf69ab8f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_ding_2dbox_bf69ab8f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21314, 
                       ADR( ib_2dmisc__2dellipse_b19dc50f_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc__2dellipse_b19dc50f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21331, 
                       ADR( toollib_2dmisc_precision_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_precision, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21335, 
                       ADR( toollib_2dmisc_recall_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_recall, EMPTYLIST ) );
        INITIALIZEVAR( t21339, 
                       ADR( toollib_2dmisc_accuracy_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_accuracy, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21370, 
                       ADR( toollib_2dmisc_prf_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_prf, EMPTYLIST ) );
        INITIALIZEVAR( t21471, 
                       ADR( toollib_2dmisc_accuracy_2dn_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_accuracy_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21475, 
                       ADR( toollib_2dmisc_accuracy_2da_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_accuracy_2da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21494, 
                       ADR( toollib_2dmisc_prf_2dn_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      toollib_2dmisc_prf_2dn, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21498, 
                       ADR( ib_2dmisc_eshold_2dp_45a07561_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      ib_2dmisc_eshold_2dp_45a07561, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21504, 
                       ADR( toollib_2dmisc_pr_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_pr, EMPTYLIST ) );
        INITIALIZEVAR( t21506, 
                       ADR( toollib_2dmisc_graph_2droc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      toollib_2dmisc_graph_2droc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21528, 
                       ADR( ib_2dmisc_olor_2droc_28bc10e2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_olor_2droc_28bc10e2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21560, 
                       ADR( ib_2dmisc_compressed_dc9714fc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ib_2dmisc_compressed_dc9714fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t21570, 
                       ADR( ib_2dmisc_om_2dcfile_df02fb06_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ib_2dmisc_om_2dcfile_df02fb06, 
                                      EMPTYLIST ) );
        return;
}
