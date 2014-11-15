
/* SCHEME->C */

#include <objects.h>

void idealib_2dpregexp__init();
DEFSTATICTSCP( c15992 );
DEFSTATICTSCP( c15653 );
DEFSTATICTSCP( c15652 );
DEFSTATICTSCP( c15130 );
DEFSTATICTSCP( c15040 );
DEFSTATICTSCP( t16688 );
DEFSTATICTSCP( t16689 );
DEFSTATICTSCP( c14937 );
DEFSTATICTSCP( c14860 );
DEFSTATICTSCP( t16690 );
DEFSTATICTSCP( t16691 );
DEFSTATICTSCP( c14859 );
DEFSTATICTSCP( c14855 );
DEFSTATICTSCP( c14851 );
DEFSTATICTSCP( c14847 );
DEFSTATICTSCP( c14843 );
DEFSTATICTSCP( c14816 );
DEFSTATICTSCP( c14712 );
DEFSTATICTSCP( c14417 );
DEFSTATICTSCP( c14416 );
DEFSTATICTSCP( c14409 );
DEFSTATICTSCP( c14402 );
DEFSTATICTSCP( c14398 );
DEFSTATICTSCP( c14394 );
DEFSTATICTSCP( c14390 );
DEFSTATICTSCP( c14383 );
DEFSTATICTSCP( c14379 );
DEFSTATICTSCP( c14375 );
DEFSTATICTSCP( c14371 );
DEFSTATICTSCP( c14367 );
DEFSTATICTSCP( c14227 );
DEFSTATICTSCP( c14189 );
DEFSTATICTSCP( c14167 );
DEFSTATICTSCP( c14113 );
DEFSTATICTSCP( c13936 );
DEFSTATICTSCP( c13801 );
DEFSTATICTSCP( c13733 );
DEFSTATICTSCP( c13732 );
DEFSTATICTSCP( c13731 );
DEFSTATICTSCP( c13730 );
DEFSTATICTSCP( c13727 );
DEFSTATICTSCP( c13501 );
DEFSTATICTSCP( c13495 );
DEFSTATICTSCP( c13494 );
DEFSTATICTSCP( c13470 );
DEFSTATICTSCP( c13382 );
DEFSTATICTSCP( c13253 );
DEFSTATICTSCP( c13244 );
DEFSTATICTSCP( c13235 );
DEFSTATICTSCP( c13195 );
DEFSTATICTSCP( c13194 );
DEFSTATICTSCP( c13152 );
DEFSTATICTSCP( c13151 );
DEFSTATICTSCP( c13129 );
DEFSTATICTSCP( c13076 );
DEFSTATICTSCP( c12950 );
DEFSTATICTSCP( c12876 );
DEFSTATICTSCP( c12867 );
DEFSTATICTSCP( c12858 );
DEFSTATICTSCP( c12849 );
DEFSTATICTSCP( t16692 );
DEFSTATICTSCP( c12824 );
DEFSTATICTSCP( c12815 );
DEFSTATICTSCP( c12798 );
DEFSTATICTSCP( c12789 );
DEFSTATICTSCP( c12562 );
DEFSTATICTSCP( c12553 );
DEFSTATICTSCP( c12544 );
DEFSTATICTSCP( c12479 );
DEFSTATICTSCP( c12442 );
DEFSTATICTSCP( c12416 );
DEFSTATICTSCP( c12415 );
DEFSTATICTSCP( c12349 );
DEFSTATICTSCP( c12194 );
DEFSTATICTSCP( c12187 );
DEFCSTRING( t16693, "Argument is out of range: ~s" );
DEFSTATICTSCP( c12127 );
DEFCSTRING( t16694, "Argument is not a STRING: ~s" );
DEFSTATICTSCP( c12126 );
DEFSTATICTSCP( c12125 );
DEFCSTRING( t16695, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12104 );
DEFSTATICTSCP( c12103 );
DEFCSTRING( t16696, "Argument(s) not CHAR: ~s ~s" );
DEFSTATICTSCP( c12097 );
DEFSTATICTSCP( c12096 );
DEFCSTRING( t16697, "pregexp-error" );
DEFSTATICTSCP( c12060 );
DEFCSTRING( t16698, "Error:" );
DEFSTATICTSCP( c12035 );
DEFCSTRING( t16699, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c12027 );
DEFSTATICTSCP( c12026 );
DEFCSTRING( t16700, "Argument not an unsigned 8-bit INTEGER: ~s" );
DEFSTATICTSCP( c11962 );
DEFSTATICTSCP( c11961 );
DEFCSTRING( t16701, "Argument not a CHAR: ~s" );
DEFSTATICTSCP( c11931 );
DEFSTATICTSCP( c11930 );

static void  init_constants()
{
        c15992 = EMPTYLIST;
        c15992 = CONS( _TSCP( 10514 ), c15992 );
        c15992 = CONS( _TSCP( 10258 ), c15992 );
        c15992 = CONS( _TSCP( 32018 ), c15992 );
        c15992 = CONS( _TSCP( 31506 ), c15992 );
        c15992 = CONS( _TSCP( 23826 ), c15992 );
        c15992 = CONS( _TSCP( 23314 ), c15992 );
        c15992 = CONS( _TSCP( 9234 ), c15992 );
        c15992 = CONS( _TSCP( 24082 ), c15992 );
        c15992 = CONS( _TSCP( 31762 ), c15992 );
        c15992 = CONS( _TSCP( 11026 ), c15992 );
        c15992 = CONS( _TSCP( 10770 ), c15992 );
        c15992 = CONS( _TSCP( 16146 ), c15992 );
        c15992 = CONS( _TSCP( 11794 ), c15992 );
        c15992 = CONS( _TSCP( 23570 ), c15992 );
        CONSTANTEXP( ADR( c15992 ) );
        c15653 = STRINGTOSYMBOL( CSTRING_TSCP( "PATTERN-MUST-BE-COMPILED-OR-\
STRING-REGEXP" ) );
        CONSTANTEXP( ADR( c15653 ) );
        c15652 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-MATCH-POSITIONS" ) );
        CONSTANTEXP( ADR( c15652 ) );
        c15130 = STRINGTOSYMBOL( CSTRING_TSCP( "NON-EXISTENT-BACKREF" ) );
        CONSTANTEXP( ADR( c15130 ) );
        c15040 = EMPTYLIST;
        t16688 = STRINGTOSYMBOL( CSTRING_TSCP( ":ANY" ) );
        c15040 = CONS( t16688, c15040 );
        c15040 = CONS( FALSEVALUE, c15040 );
        c15040 = CONS( _TSCP( 0 ), c15040 );
        c15040 = CONS( FALSEVALUE, c15040 );
        t16689 = STRINGTOSYMBOL( CSTRING_TSCP( ":BETWEEN" ) );
        c15040 = CONS( t16689, c15040 );
        CONSTANTEXP( ADR( c15040 ) );
        c14937 = STRINGTOSYMBOL( CSTRING_TSCP( "GREEDY-QUANTIFIER-OPERAND-CO\
ULD-BE-EMPTY" ) );
        CONSTANTEXP( ADR( c14937 ) );
        c14860 = EMPTYLIST;
        t16690 = STRINGTOSYMBOL( CSTRING_TSCP( ":CASE-INSENSITIVE" ) );
        c14860 = CONS( t16690, c14860 );
        t16691 = STRINGTOSYMBOL( CSTRING_TSCP( ":CASE-SENSITIVE" ) );
        c14860 = CONS( t16691, c14860 );
        CONSTANTEXP( ADR( c14860 ) );
        c14859 = STRINGTOSYMBOL( CSTRING_TSCP( ":NO-BACKTRACK" ) );
        CONSTANTEXP( ADR( c14859 ) );
        c14855 = STRINGTOSYMBOL( CSTRING_TSCP( ":NEG-LOOKBEHIND" ) );
        CONSTANTEXP( ADR( c14855 ) );
        c14851 = STRINGTOSYMBOL( CSTRING_TSCP( ":LOOKBEHIND" ) );
        CONSTANTEXP( ADR( c14851 ) );
        c14847 = STRINGTOSYMBOL( CSTRING_TSCP( ":NEG-LOOKAHEAD" ) );
        CONSTANTEXP( ADR( c14847 ) );
        c14843 = STRINGTOSYMBOL( CSTRING_TSCP( ":LOOKAHEAD" ) );
        CONSTANTEXP( ADR( c14843 ) );
        c14816 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-MATCH-POSITIONS-AUX" ) );
        CONSTANTEXP( ADR( c14816 ) );
        c14712 = STRINGTOSYMBOL( CSTRING_TSCP( ":SUB" ) );
        CONSTANTEXP( ADR( c14712 ) );
        c14417 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-CHECK-IF-IN-CHAR-CLA\
SS?" ) );
        CONSTANTEXP( ADR( c14417 ) );
        c14416 = STRINGTOSYMBOL( CSTRING_TSCP( ":XDIGIT" ) );
        CONSTANTEXP( ADR( c14416 ) );
        c14409 = STRINGTOSYMBOL( CSTRING_TSCP( ":UPPER" ) );
        CONSTANTEXP( ADR( c14409 ) );
        c14402 = STRINGTOSYMBOL( CSTRING_TSCP( ":PUNCT" ) );
        CONSTANTEXP( ADR( c14402 ) );
        c14398 = STRINGTOSYMBOL( CSTRING_TSCP( ":PRINT" ) );
        CONSTANTEXP( ADR( c14398 ) );
        c14394 = STRINGTOSYMBOL( CSTRING_TSCP( ":LOWER" ) );
        CONSTANTEXP( ADR( c14394 ) );
        c14390 = STRINGTOSYMBOL( CSTRING_TSCP( ":GRAPH" ) );
        CONSTANTEXP( ADR( c14390 ) );
        c14383 = STRINGTOSYMBOL( CSTRING_TSCP( ":CNTRL" ) );
        CONSTANTEXP( ADR( c14383 ) );
        c14379 = STRINGTOSYMBOL( CSTRING_TSCP( ":BLANK" ) );
        CONSTANTEXP( ADR( c14379 ) );
        c14375 = STRINGTOSYMBOL( CSTRING_TSCP( ":ASCII" ) );
        CONSTANTEXP( ADR( c14375 ) );
        c14371 = STRINGTOSYMBOL( CSTRING_TSCP( ":ALPHA" ) );
        CONSTANTEXP( ADR( c14371 ) );
        c14367 = STRINGTOSYMBOL( CSTRING_TSCP( ":ALNUM" ) );
        CONSTANTEXP( ADR( c14367 ) );
        c14227 = STRINGTOSYMBOL( CSTRING_TSCP( "CHARACTER-CLASS-ENDED-TOO-SO\
ON" ) );
        CONSTANTEXP( ADR( c14227 ) );
        c14189 = STRINGTOSYMBOL( CSTRING_TSCP( ":ONE-OF-CHARS" ) );
        CONSTANTEXP( ADR( c14189 ) );
        c14167 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-CHAR-LIST" ) );
        CONSTANTEXP( ADR( c14167 ) );
        c14113 = STRINGTOSYMBOL( CSTRING_TSCP( ":CHAR-RANGE" ) );
        CONSTANTEXP( ADR( c14113 ) );
        c13936 = STRINGTOSYMBOL( CSTRING_TSCP( ":NONE-OF-CHARS" ) );
        CONSTANTEXP( ADR( c13936 ) );
        c13801 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-NUMS" ) );
        CONSTANTEXP( ADR( c13801 ) );
        c13733 = STRINGTOSYMBOL( CSTRING_TSCP( "AT-MOST" ) );
        CONSTANTEXP( ADR( c13733 ) );
        c13732 = STRINGTOSYMBOL( CSTRING_TSCP( "AT-LEAST" ) );
        CONSTANTEXP( ADR( c13732 ) );
        c13731 = STRINGTOSYMBOL( CSTRING_TSCP( "MINIMAL?" ) );
        CONSTANTEXP( ADR( c13731 ) );
        c13730 = STRINGTOSYMBOL( CSTRING_TSCP( ":BETWEEN" ) );
        CONSTANTEXP( ADR( c13730 ) );
        c13727 = STRINGTOSYMBOL( CSTRING_TSCP( "NEXT-I" ) );
        CONSTANTEXP( ADR( c13727 ) );
        c13501 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CAR!" ) );
        CONSTANTEXP( ADR( c13501 ) );
        c13495 = STRINGTOSYMBOL( CSTRING_TSCP( "LEFT-BRACE-MUST-BE-FOLLOWED-\
BY-NUMBER" ) );
        CONSTANTEXP( ADR( c13495 ) );
        c13494 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-WRAP-QUANTIFIER-IF-A\
NY" ) );
        CONSTANTEXP( ADR( c13494 ) );
        c13470 = EMPTYLIST;
        c13470 = CONS( _TSCP( 31506 ), c13470 );
        c13470 = CONS( _TSCP( 16146 ), c13470 );
        c13470 = CONS( _TSCP( 11026 ), c13470 );
        c13470 = CONS( _TSCP( 10770 ), c13470 );
        CONSTANTEXP( ADR( c13470 ) );
        c13382 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-SUBPATTERN" ) );
        CONSTANTEXP( ADR( c13382 ) );
        c13253 = EMPTYLIST;
        c13253 = CONS( c14843, c13253 );
        CONSTANTEXP( ADR( c13253 ) );
        c13244 = EMPTYLIST;
        c13244 = CONS( c14847, c13244 );
        CONSTANTEXP( ADR( c13244 ) );
        c13235 = EMPTYLIST;
        c13235 = CONS( c14859, c13235 );
        CONSTANTEXP( ADR( c13235 ) );
        c13195 = EMPTYLIST;
        c13195 = CONS( c14851, c13195 );
        CONSTANTEXP( ADR( c13195 ) );
        c13194 = EMPTYLIST;
        c13194 = CONS( c14855, c13194 );
        CONSTANTEXP( ADR( c13194 ) );
        c13152 = STRINGTOSYMBOL( CSTRING_TSCP( ":CASE-SENSITIVE" ) );
        CONSTANTEXP( ADR( c13152 ) );
        c13151 = STRINGTOSYMBOL( CSTRING_TSCP( ":CASE-INSENSITIVE" ) );
        CONSTANTEXP( ADR( c13151 ) );
        c13129 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-CLUSTER-TYPE" ) );
        CONSTANTEXP( ADR( c13129 ) );
        c13076 = EMPTYLIST;
        c13076 = CONS( c14712, c13076 );
        CONSTANTEXP( ADR( c13076 ) );
        c12950 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-POSIX-CHAR-CLAS\
S" ) );
        CONSTANTEXP( ADR( c12950 ) );
        c12876 = STRINGTOSYMBOL( CSTRING_TSCP( ":WBDRY" ) );
        CONSTANTEXP( ADR( c12876 ) );
        c12867 = STRINGTOSYMBOL( CSTRING_TSCP( ":NOT-WBDRY" ) );
        CONSTANTEXP( ADR( c12867 ) );
        c12858 = STRINGTOSYMBOL( CSTRING_TSCP( ":DIGIT" ) );
        CONSTANTEXP( ADR( c12858 ) );
        c12849 = EMPTYLIST;
        c12849 = CONS( c12858, c12849 );
        t16692 = STRINGTOSYMBOL( CSTRING_TSCP( ":NEG-CHAR" ) );
        c12849 = CONS( t16692, c12849 );
        CONSTANTEXP( ADR( c12849 ) );
        c12824 = STRINGTOSYMBOL( CSTRING_TSCP( ":SPACE" ) );
        CONSTANTEXP( ADR( c12824 ) );
        c12815 = EMPTYLIST;
        c12815 = CONS( c12824, c12815 );
        c12815 = CONS( t16692, c12815 );
        CONSTANTEXP( ADR( c12815 ) );
        c12798 = STRINGTOSYMBOL( CSTRING_TSCP( ":WORD" ) );
        CONSTANTEXP( ADR( c12798 ) );
        c12789 = EMPTYLIST;
        c12789 = CONS( c12798, c12789 );
        c12789 = CONS( t16692, c12789 );
        CONSTANTEXP( ADR( c12789 ) );
        c12562 = STRINGTOSYMBOL( CSTRING_TSCP( ":BOS" ) );
        CONSTANTEXP( ADR( c12562 ) );
        c12553 = STRINGTOSYMBOL( CSTRING_TSCP( ":EOS" ) );
        CONSTANTEXP( ADR( c12553 ) );
        c12544 = STRINGTOSYMBOL( CSTRING_TSCP( ":ANY" ) );
        CONSTANTEXP( ADR( c12544 ) );
        c12479 = STRINGTOSYMBOL( CSTRING_TSCP( ":NEG-CHAR" ) );
        CONSTANTEXP( ADR( c12479 ) );
        c12442 = STRINGTOSYMBOL( CSTRING_TSCP( ":BACKREF" ) );
        CONSTANTEXP( ADR( c12442 ) );
        c12416 = STRINGTOSYMBOL( CSTRING_TSCP( "BACKSLASH" ) );
        CONSTANTEXP( ADR( c12416 ) );
        c12415 = STRINGTOSYMBOL( CSTRING_TSCP( "PREGEXP-READ-PIECE" ) );
        CONSTANTEXP( ADR( c12415 ) );
        c12349 = STRINGTOSYMBOL( CSTRING_TSCP( ":EMPTY" ) );
        CONSTANTEXP( ADR( c12349 ) );
        c12194 = STRINGTOSYMBOL( CSTRING_TSCP( ":SEQ" ) );
        CONSTANTEXP( ADR( c12194 ) );
        c12187 = STRINGTOSYMBOL( CSTRING_TSCP( ":OR" ) );
        CONSTANTEXP( ADR( c12187 ) );
        c12127 = CSTRING_TSCP( t16693 );
        CONSTANTEXP( ADR( c12127 ) );
        c12126 = CSTRING_TSCP( t16694 );
        CONSTANTEXP( ADR( c12126 ) );
        c12125 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-LENGTH" ) );
        CONSTANTEXP( ADR( c12125 ) );
        c12104 = CSTRING_TSCP( t16695 );
        CONSTANTEXP( ADR( c12104 ) );
        c12103 = STRINGTOSYMBOL( CSTRING_TSCP( "STRING-REF" ) );
        CONSTANTEXP( ADR( c12103 ) );
        c12097 = CSTRING_TSCP( t16696 );
        CONSTANTEXP( ADR( c12097 ) );
        c12096 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR=?" ) );
        CONSTANTEXP( ADR( c12096 ) );
        c12060 = CSTRING_TSCP( t16697 );
        CONSTANTEXP( ADR( c12060 ) );
        c12035 = CSTRING_TSCP( t16698 );
        CONSTANTEXP( ADR( c12035 ) );
        c12027 = CSTRING_TSCP( t16699 );
        CONSTANTEXP( ADR( c12027 ) );
        c12026 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c12026 ) );
        c11962 = CSTRING_TSCP( t16700 );
        CONSTANTEXP( ADR( c11962 ) );
        c11961 = STRINGTOSYMBOL( CSTRING_TSCP( "INTEGER->CHAR" ) );
        CONSTANTEXP( ADR( c11961 ) );
        c11931 = CSTRING_TSCP( t16701 );
        CONSTANTEXP( ADR( c11931 ) );
        c11930 = STRINGTOSYMBOL( CSTRING_TSCP( "CHAR->INTEGER" ) );
        CONSTANTEXP( ADR( c11930 ) );
}

DEFTSCP( _dpregexp_version_2a_22ecbc26_v );
DEFCSTRING( t16702, "*PREGEXP-VERSION*" );
DEFTSCP( _dpregexp__2dchar_2a_2eb8e08_v );
DEFCSTRING( t16703, "*PREGEXP-COMMENT-CHAR*" );
DEFTSCP( _dpregexp_r_2dint_2a_7188da5a_v );
DEFCSTRING( t16704, "*PREGEXP-NUL-CHAR-INT*" );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );
EXTERNTSCPP( scrt2__2d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2d_2dtwo_v );
DEFTSCP( _dpregexp__2dchar_2a_8c9d929c_v );
DEFCSTRING( t16711, "*PREGEXP-RETURN-CHAR*" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( scrt2__3c_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_2dtwo_v );
EXTERNTSCPP( scrt2__3e_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_2dtwo_v );
DEFTSCP( _dpregexp__2dchar_2a_1d3e6846_v );
DEFCSTRING( t16737, "*PREGEXP-TAB-CHAR*" );
DEFTSCP( _dpregexp_tive_3f_2a_a563f6ed_v );
DEFCSTRING( t16763, "*PREGEXP-SPACE-SENSITIVE?*" );
DEFTSCP( _dpregexp_reverse_21_27718c8a_v );
DEFCSTRING( t16764, "PREGEXP-REVERSE!" );
EXTERNTSCPP( scrt1__24__cdr_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__cdr_2derror_v );

TSCP  _dpregexp_reverse_21_27718c8a( s12005 )
        TSCP  s12005;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t16764 );
        X1 = s12005;
        X2 = EMPTYLIST;
L16767:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L16768;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L16771;
        scrt1__24__cdr_2derror( X1 );
L16771:
        X3 = PAIR_CDR( X1 );
        SETGEN( PAIR_CDR( X1 ), X2 );
        X2 = X1;
        X1 = X3;
        GOBACK( L16767 );
L16768:
        POPSTACKTRACE( X2 );
}

DEFTSCP( _dpregexp_xp_2derror_eae6b00b_v );
DEFCSTRING( t16775, "PREGEXP-ERROR" );
EXTERNTSCPP( scrt6_display, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_display_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt6_write, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt6_write_v );
EXTERNTSCPP( scrt6_newline, XAL1( TSCP ) );
EXTERNTSCP( scrt6_newline_v );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );

TSCP  _dpregexp_xp_2derror_eae6b00b( w12034 )
        TSCP  w12034;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t16775 );
        scrt6_display( c12035, EMPTYLIST );
        X1 = w12034;
L16778:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L16779;
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L16783;
        scrt1__24__car_2derror( X1 );
L16783:
        X2 = PAIR_CAR( X1 );
        scrt6_display( _TSCP( 8210 ), EMPTYLIST );
        scrt6_write( X2, EMPTYLIST );
        X1 = PAIR_CDR( X1 );
        GOBACK( L16778 );
L16779:
        scrt6_newline( EMPTYLIST );
        POPSTACKTRACE( qobischeme_panic( c12060, EMPTYLIST ) );
}

DEFTSCP( _dpregexp__2dpattern_c1b58050_v );
DEFCSTRING( t16787, "PREGEXP-READ-PATTERN" );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( _dpregexp_d_2dbranch_608d6a65, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_d_2dbranch_608d6a65_v );

TSCP  _dpregexp__2dpattern_c1b58050( s12063, i12064, n12065 )
        TSCP  s12063, i12064, n12065;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16787 );
        if  ( BITAND( BITOR( _S2CINT( i12064 ), 
                             _S2CINT( n12065 ) ), 
                      3 ) )  goto L16790;
        if  ( GTE( _S2CINT( i12064 ), _S2CINT( n12065 ) ) )  goto L16794;
        goto L16795;
L16790:
        if  ( FALSE( scrt2__3e_3d_2dtwo( i12064, n12065 ) ) )  goto L16795;
L16794:
        X8 = sc_cons( c12194, EMPTYLIST );
        X7 = X8;
        X6 = sc_cons( X7, EMPTYLIST );
        X5 = sc_cons( c12187, X6 );
        X4 = X5;
        X5 = sc_cons( i12064, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        POPSTACKTRACE( X3 );
L16795:
        X2 = EMPTYLIST;
        X1 = i12064;
L16802:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( n12065 ) ), 
                      3 ) )  goto L16803;
        X3 = BOOLEAN( GTE( _S2CINT( X1 ), 
                           _S2CINT( n12065 ) ) );
        goto L16804;
L16803:
        X3 = scrt2__3e_3d_2dtwo( X1, n12065 );
L16804:
        if  ( TRUE( X3 ) )  goto L16809;
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L16811;
        scdebug_error( c12103, 
                       c12104, CONS( X1, EMPTYLIST ) );
L16811:
        X5 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L16817;
        if  ( AND( EQ( TSCPTAG( s12063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12063 ), STRINGTAG ) )
            )  goto L16819;
        scdebug_error( c12125, 
                       c12126, CONS( s12063, EMPTYLIST ) );
L16819:
        X6 = C_FIXED( STRING_LENGTH( s12063 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L16823;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X6 ) ) )  goto L16817;
        goto L16830;
L16823:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X6 ) ) )  goto L16830;
L16817:
        scdebug_error( c12103, 
                       c12127, CONS( X1, EMPTYLIST ) );
L16830:
        X4 = C_CHAR( STRING_CHAR( s12063, X1 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10514 ) ), 
                       CHARACTERTAG ) ) )  goto L16832;
        X5 = CONS( _TSCP( 10514 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X4, X5 ) );
L16832:
        if  ( EQ( _S2CINT( X4 ), _S2CINT( _TSCP( 10514 ) ) ) )  goto L16809;
        X8 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X8 ) )  goto L16841;
        if  ( AND( EQ( TSCPTAG( s12063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12063 ), STRINGTAG ) )
            )  goto L16843;
        scdebug_error( c12125, 
                       c12126, CONS( s12063, EMPTYLIST ) );
L16843:
        X9 = C_FIXED( STRING_LENGTH( s12063 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L16847;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X9 ) ) )  goto L16841;
        goto L16854;
L16847:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X9 ) ) )  goto L16854;
L16841:
        scdebug_error( c12103, 
                       c12127, CONS( X1, EMPTYLIST ) );
L16854:
        X7 = C_CHAR( STRING_CHAR( s12063, X1 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 31762 ) ), 
                       CHARACTERTAG ) ) )  goto L16856;
        X8 = CONS( _TSCP( 31762 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X7, X8 ) );
L16856:
        if  ( NEQ( _S2CINT( X7 ), 
                   _S2CINT( _TSCP( 31762 ) ) ) )  goto L16858;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L16860;
        X6 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L16859;
L16860:
        X6 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
        goto L16859;
L16858:
        X6 = X1;
L16859:
        X5 = _dpregexp_d_2dbranch_608d6a65( s12063, X6, n12065 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L16864;
        scrt1__24__car_2derror( X5 );
L16864:
        X7 = PAIR_CAR( X5 );
        X6 = sc_cons( X7, X2 );
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L16868;
        scrt1__24__car_2derror( X7 );
L16868:
        X1 = PAIR_CAR( X7 );
        X2 = X6;
        GOBACK( L16802 );
L16809:
        X5 = _dpregexp_reverse_21_27718c8a( X2 );
        X4 = sc_cons( c12187, X5 );
        X5 = sc_cons( X1, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        POPSTACKTRACE( X3 );
}

DEFTSCP( _dpregexp_d_2dbranch_608d6a65_v );
DEFCSTRING( t16871, "PREGEXP-READ-BRANCH" );
EXTERNTSCPP( _dpregexp_ad_2dpiece_fb18d72f, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_ad_2dpiece_fb18d72f_v );

TSCP  _dpregexp_d_2dbranch_608d6a65( s12196, i12197, n12198 )
        TSCP  s12196, i12197, n12198;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16871 );
        X1 = EMPTYLIST;
        X2 = i12197;
L16874:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n12198 ) ), 
                      3 ) )  goto L16876;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( n12198 ) ) )  goto L16880;
        goto L16881;
L16876:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, n12198 ) ) )  goto L16880;
L16881:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L16885;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L16885:
        X4 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L16891;
        if  ( AND( EQ( TSCPTAG( s12196 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12196 ), STRINGTAG ) )
            )  goto L16893;
        scdebug_error( c12125, 
                       c12126, CONS( s12196, EMPTYLIST ) );
L16893:
        X5 = C_FIXED( STRING_LENGTH( s12196 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L16897;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X5 ) ) )  goto L16891;
        goto L16904;
L16897:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X5 ) ) )  goto L16904;
L16891:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L16904:
        X3 = C_CHAR( STRING_CHAR( s12196, X2 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X3 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 31762 ) ), 
                       CHARACTERTAG ) ) )  goto L16907;
        X5 = CONS( _TSCP( 31762 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X3, X5 ) );
L16907:
        X4 = BOOLEAN( EQ( _S2CINT( X3 ), 
                          _S2CINT( _TSCP( 31762 ) ) ) );
        if  ( TRUE( X4 ) )  goto L16913;
        if  ( AND( EQ( TSCPIMMEDIATETAG( X3 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10514 ) ), 
                       CHARACTERTAG ) ) )  goto L16915;
        X5 = CONS( _TSCP( 10514 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X3, X5 ) );
L16915:
        if  ( EQ( _S2CINT( X3 ), _S2CINT( _TSCP( 10514 ) ) ) )  goto L16913;
        X5 = _dpregexp_ad_2dpiece_fb18d72f( s12196, X2, n12198 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L16921;
        scrt1__24__car_2derror( X5 );
L16921:
        X7 = PAIR_CAR( X5 );
        X6 = sc_cons( X7, X1 );
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L16925;
        scrt1__24__car_2derror( X7 );
L16925:
        X2 = PAIR_CAR( X7 );
        X1 = X6;
        GOBACK( L16874 );
L16913:
        X5 = _dpregexp_reverse_21_27718c8a( X1 );
        X4 = sc_cons( c12194, X5 );
        X5 = sc_cons( X2, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        POPSTACKTRACE( X3 );
L16880:
        X5 = _dpregexp_reverse_21_27718c8a( X1 );
        X4 = sc_cons( c12194, X5 );
        X5 = sc_cons( X2, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        POPSTACKTRACE( X3 );
}

DEFTSCP( _dpregexp_ad_2dpiece_fb18d72f_v );
DEFCSTRING( t16929, "PREGEXP-READ-PIECE" );
EXTERNTSCPP( _dpregexp_2dif_2dany_b11badc7, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_2dif_2dany_b11badc7_v );
EXTERNTSCPP( _dpregexp_har_2dlist_98a7f495, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_har_2dlist_98a7f495_v );
EXTERNTSCPP( _dpregexp_subpattern_6ade1b55, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_subpattern_6ade1b55_v );
EXTERNTSCPP( _dpregexp_d_2dnumber_65a1f042, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_d_2dnumber_65a1f042_v );
EXTERNTSCPP( _dpregexp_ped_2dchar_7f19c128, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_ped_2dchar_7f19c128_v );
EXTERNTSCPP( scrt3_char_2dwhitespace_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dwhitespace_3f_v );

TSCP  _dpregexp_ad_2dpiece_fb18d72f( s12280, i12281, n12282 )
        TSCP  s12280, i12281, n12282;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t16929 );
        if  ( EQ( TSCPTAG( i12281 ), FIXNUMTAG ) )  goto L16932;
        scdebug_error( c12103, 
                       c12104, CONS( i12281, EMPTYLIST ) );
L16932:
        X2 = BOOLEAN( LT( _S2CINT( i12281 ), 0 ) );
        if  ( TRUE( X2 ) )  goto L16938;
        if  ( AND( EQ( TSCPTAG( s12280 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12280 ), STRINGTAG ) )
            )  goto L16940;
        scdebug_error( c12125, 
                       c12126, CONS( s12280, EMPTYLIST ) );
L16940:
        X3 = C_FIXED( STRING_LENGTH( s12280 ) );
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L16944;
        if  ( GTE( _S2CINT( i12281 ), _S2CINT( X3 ) ) )  goto L16938;
        goto L16951;
L16944:
        if  ( FALSE( scrt2__3e_3d_2dtwo( i12281, X3 ) ) )  goto L16951;
L16938:
        scdebug_error( c12103, 
                       c12127, CONS( i12281, EMPTYLIST ) );
L16951:
        X1 = C_CHAR( STRING_CHAR( s12280, i12281 ) );
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 24082 ) ) ) )  goto L16953;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L16955;
        X4 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L16956;
L16955:
        X4 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L16956:
        X3 = sc_cons( X4, EMPTYLIST );
        X2 = sc_cons( c12562, X3 );
        POPSTACKTRACE( X2 );
L16953:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 9234 ) ) ) )  goto L16958;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L16960;
        X4 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L16961;
L16960:
        X4 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L16961:
        X3 = sc_cons( X4, EMPTYLIST );
        X2 = sc_cons( c12553, X3 );
        POPSTACKTRACE( X2 );
L16958:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 11794 ) ) ) )  goto L16963;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L16965;
        X5 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L16966;
L16965:
        X5 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L16966:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12544, X4 );
        X2 = X3;
        POPSTACKTRACE( _dpregexp_2dif_2dany_b11badc7( X2, 
                                                      s12280, n12282 ) );
L16963:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 23314 ) ) ) )  goto L16968;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L16970;
        X2 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L16971;
L16970:
        X2 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L16971:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n12282 ) ), 
                      3 ) )  goto L16975;
        X5 = BOOLEAN( LT( _S2CINT( X2 ), _S2CINT( n12282 ) ) );
        goto L16976;
L16975:
        X5 = scrt2__3c_2dtwo( X2, n12282 );
L16976:
        if  ( FALSE( X5 ) )  goto L16978;
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L16981;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L16981:
        X6 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L16987;
        if  ( AND( EQ( TSCPTAG( s12280 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12280 ), STRINGTAG ) )
            )  goto L16989;
        scdebug_error( c12125, 
                       c12126, CONS( s12280, EMPTYLIST ) );
L16989:
        X7 = C_FIXED( STRING_LENGTH( s12280 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L16993;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X7 ) ) )  goto L16987;
        goto L17000;
L16993:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X7 ) ) )  goto L17000;
L16987:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L17000:
        X4 = C_CHAR( STRING_CHAR( s12280, X2 ) );
        goto L16979;
L16978:
        X4 = X5;
L16979:
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 24082 ) ) ) )  goto L16973;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17001;
        X5 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17002;
L17001:
        X5 = scrt2__2b_2dtwo( i12281, _TSCP( 8 ) );
L17002:
        X4 = _dpregexp_har_2dlist_98a7f495( s12280, X5, n12282 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L17005;
        scrt1__24__car_2derror( X4 );
L17005:
        X9 = PAIR_CAR( X4 );
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( c12479, X8 );
        X6 = X7;
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L17010;
        scrt1__24__car_2derror( X9 );
L17010:
        X8 = PAIR_CAR( X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        X5 = sc_cons( X6, X7 );
        X3 = X5;
        goto L16974;
L16973:
        X3 = _dpregexp_har_2dlist_98a7f495( s12280, X2, n12282 );
L16974:
        POPSTACKTRACE( _dpregexp_2dif_2dany_b11badc7( X3, 
                                                      s12280, n12282 ) );
L16968:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 10258 ) ) ) )  goto L17013;
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17015;
        X3 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17016;
L17015:
        X3 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L17016:
        X2 = _dpregexp_subpattern_6ade1b55( s12280, X3, n12282 );
        POPSTACKTRACE( _dpregexp_2dif_2dany_b11badc7( X2, 
                                                      s12280, n12282 ) );
L17013:
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 23570 ) ) ) )  goto L17017;
        X3 = _dpregexp_d_2dnumber_65a1f042( s12280, i12281, n12282 );
        if  ( FALSE( X3 ) )  goto L17020;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L17023;
        scrt1__24__car_2derror( X3 );
L17023:
        X8 = PAIR_CAR( X3 );
        X7 = sc_cons( X8, EMPTYLIST );
        X6 = sc_cons( c12442, X7 );
        X5 = X6;
        X8 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L17028;
        scrt1__24__car_2derror( X8 );
L17028:
        X7 = PAIR_CAR( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        X4 = sc_cons( X5, X6 );
        X2 = X4;
        goto L17033;
L17020:
        X4 = _dpregexp_ped_2dchar_7f19c128( s12280, i12281, n12282 );
        if  ( FALSE( X4 ) )  goto L17032;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L17035;
        scrt1__24__car_2derror( X4 );
L17035:
        X6 = PAIR_CAR( X4 );
        X9 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L17039;
        scrt1__24__car_2derror( X9 );
L17039:
        X8 = PAIR_CAR( X9 );
        X7 = sc_cons( X8, EMPTYLIST );
        X5 = sc_cons( X6, X7 );
        X2 = X5;
        goto L17033;
L17032:
        X5 = CONS( c12416, EMPTYLIST );
        X2 = _dpregexp_xp_2derror_eae6b00b( CONS( c12415, X5 ) );
L17033:
        POPSTACKTRACE( _dpregexp_2dif_2dany_b11badc7( X2, 
                                                      s12280, n12282 ) );
L17017:
        X2 = _dpregexp_tive_3f_2a_a563f6ed_v;
        if  ( TRUE( X2 ) )  goto L17046;
        if  ( FALSE( scrt3_char_2dwhitespace_3f( X1 ) ) )  goto L17047;
        X3 = FALSEVALUE;
        goto L17048;
L17047:
        X3 = TRUEVALUE;
L17048:
        if  ( FALSE( X3 ) )  goto L17058;
        X4 = _dpregexp__2dchar_2a_2eb8e08_v;
        if  ( AND( EQ( TSCPIMMEDIATETAG( X1 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ) )
            )  goto L17054;
        X5 = CONS( X4, EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X1, X5 ) );
L17054:
        if  ( EQ( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L17058;
L17046:
        if  ( BITAND( BITOR( _S2CINT( i12281 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17059;
        X5 = _TSCP( IPLUS( _S2CINT( i12281 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17060;
L17059:
        X5 = scrt2__2b_2dtwo( i12281, _TSCP( 4 ) );
L17060:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( X1, X4 );
        X2 = X3;
        POPSTACKTRACE( _dpregexp_2dif_2dany_b11badc7( X2, 
                                                      s12280, n12282 ) );
L17058:
        X2 = i12281;
        X3 = FALSEVALUE;
L17063:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n12282 ) ), 
                      3 ) )  goto L17065;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( n12282 ) ) )  goto L17069;
        goto L17070;
L17065:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, n12282 ) ) )  goto L17069;
L17070:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L17074;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L17074:
        X5 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L17080;
        if  ( AND( EQ( TSCPTAG( s12280 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12280 ), STRINGTAG ) )
            )  goto L17082;
        scdebug_error( c12125, 
                       c12126, CONS( s12280, EMPTYLIST ) );
L17082:
        X6 = C_FIXED( STRING_LENGTH( s12280 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L17086;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X6 ) ) )  goto L17080;
        goto L17093;
L17086:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X6 ) ) )  goto L17093;
L17080:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L17093:
        X4 = C_CHAR( STRING_CHAR( s12280, X2 ) );
        if  ( FALSE( X3 ) )  goto L17095;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17097;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17098;
L17097:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L17098:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 2578 ) ), 
                       CHARACTERTAG ) ) )  goto L17100;
        X6 = CONS( _TSCP( 2578 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X4, X6 ) );
L17100:
        X3 = BOOLEAN( NEQ( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 2578 ) ) ) );
        X2 = X5;
        GOBACK( L17063 );
L17095:
        if  ( FALSE( scrt3_char_2dwhitespace_3f( X4 ) ) )  goto L17102;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17104;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17105;
L17104:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L17105:
        X3 = FALSEVALUE;
        X2 = X5;
        GOBACK( L17063 );
L17102:
        X5 = _dpregexp__2dchar_2a_2eb8e08_v;
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ) )
            )  goto L17107;
        X6 = CONS( X5, EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X4, X6 ) );
L17107:
        if  ( NEQ( _S2CINT( X4 ), _S2CINT( X5 ) ) )  goto L17109;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17111;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17112;
L17111:
        X6 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L17112:
        X3 = TRUEVALUE;
        X2 = X6;
        GOBACK( L17063 );
L17109:
        X7 = sc_cons( X2, EMPTYLIST );
        X6 = sc_cons( c12349, X7 );
        POPSTACKTRACE( X6 );
L17069:
        X5 = sc_cons( X2, EMPTYLIST );
        X4 = sc_cons( c12349, X5 );
        POPSTACKTRACE( X4 );
}

DEFTSCP( _dpregexp_d_2dnumber_65a1f042_v );
DEFCSTRING( t17115, "PREGEXP-READ-ESCAPED-NUMBER" );
EXTERNTSCPP( scrt3_char_2dnumeric_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dnumeric_3f_v );
EXTERNTSCPP( scrt2_string_2d_3enumber, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2_string_2d_3enumber_v );
EXTERNTSCPP( scrt3_list_2d_3estring, XAL1( TSCP ) );
EXTERNTSCP( scrt3_list_2d_3estring_v );

TSCP  _dpregexp_d_2dnumber_65a1f042( s12595, i12596, n12597 )
        TSCP  s12595, i12596, n12597;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17115 );
        if  ( BITAND( BITOR( _S2CINT( i12596 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17117;
        X2 = _TSCP( IPLUS( _S2CINT( i12596 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17118;
L17117:
        X2 = scrt2__2b_2dtwo( i12596, _TSCP( 4 ) );
L17118:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n12597 ) ), 
                      3 ) )  goto L17120;
        X1 = BOOLEAN( LT( _S2CINT( X2 ), _S2CINT( n12597 ) ) );
        goto L17121;
L17120:
        X1 = scrt2__3c_2dtwo( X2, n12597 );
L17121:
        if  ( FALSE( X1 ) )  goto L17123;
        if  ( BITAND( BITOR( _S2CINT( i12596 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17125;
        X3 = _TSCP( IPLUS( _S2CINT( i12596 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17126;
L17125:
        X3 = scrt2__2b_2dtwo( i12596, _TSCP( 4 ) );
L17126:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L17128;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L17128:
        X4 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L17134;
        if  ( AND( EQ( TSCPTAG( s12595 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12595 ), STRINGTAG ) )
            )  goto L17136;
        scdebug_error( c12125, 
                       c12126, CONS( s12595, EMPTYLIST ) );
L17136:
        X5 = C_FIXED( STRING_LENGTH( s12595 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L17140;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X5 ) ) )  goto L17134;
        goto L17147;
L17140:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X5 ) ) )  goto L17147;
L17134:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L17147:
        X2 = C_CHAR( STRING_CHAR( s12595, X3 ) );
        X3 = scrt3_char_2dnumeric_3f( X2 );
        if  ( FALSE( X3 ) )  goto L17150;
        X5 = sc_cons( X2, EMPTYLIST );
        X4 = X5;
        if  ( BITAND( BITOR( _S2CINT( i12596 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17153;
        X5 = _TSCP( IPLUS( _S2CINT( i12596 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17154;
L17153:
        X5 = scrt2__2b_2dtwo( i12596, _TSCP( 8 ) );
L17154:
        X6 = X5;
        X7 = X4;
L17157:
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( n12597 ) ), 
                      3 ) )  goto L17159;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( n12597 ) ) )  goto L17163;
        goto L17164;
L17159:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, n12597 ) ) )  goto L17164;
L17163:
        X11 = _dpregexp_reverse_21_27718c8a( X7 );
        X10 = scrt3_list_2d_3estring( X11 );
        X9 = scrt2_string_2d_3enumber( X10, EMPTYLIST );
        X10 = sc_cons( X6, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        POPSTACKTRACE( X8 );
L17164:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L17169;
        scdebug_error( c12103, 
                       c12104, CONS( X6, EMPTYLIST ) );
L17169:
        X9 = BOOLEAN( LT( _S2CINT( X6 ), 0 ) );
        if  ( TRUE( X9 ) )  goto L17175;
        if  ( AND( EQ( TSCPTAG( s12595 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12595 ), STRINGTAG ) )
            )  goto L17177;
        scdebug_error( c12125, 
                       c12126, CONS( s12595, EMPTYLIST ) );
L17177:
        X10 = C_FIXED( STRING_LENGTH( s12595 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X10 ) ), 
                      3 ) )  goto L17181;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( X10 ) ) )  goto L17175;
        goto L17188;
L17181:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, X10 ) ) )  goto L17188;
L17175:
        scdebug_error( c12103, 
                       c12127, CONS( X6, EMPTYLIST ) );
L17188:
        X8 = C_CHAR( STRING_CHAR( s12595, X6 ) );
        if  ( FALSE( scrt3_char_2dnumeric_3f( X8 ) ) )  goto L17190;
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17192;
        X9 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17193;
L17192:
        X9 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L17193:
        X7 = sc_cons( X8, X7 );
        X6 = X9;
        GOBACK( L17157 );
L17190:
        X12 = _dpregexp_reverse_21_27718c8a( X7 );
        X11 = scrt3_list_2d_3estring( X12 );
        X10 = scrt2_string_2d_3enumber( X11, EMPTYLIST );
        X11 = sc_cons( X6, EMPTYLIST );
        X9 = sc_cons( X10, X11 );
        POPSTACKTRACE( X9 );
L17150:
        POPSTACKTRACE( X3 );
L17123:
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_ped_2dchar_7f19c128_v );
DEFCSTRING( t17195, "PREGEXP-READ-ESCAPED-CHAR" );

TSCP  _dpregexp_ped_2dchar_7f19c128( s12712, i12713, n12714 )
        TSCP  s12712, i12713, n12714;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17195 );
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17197;
        X2 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17198;
L17197:
        X2 = scrt2__2b_2dtwo( i12713, _TSCP( 4 ) );
L17198:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n12714 ) ), 
                      3 ) )  goto L17200;
        X1 = BOOLEAN( LT( _S2CINT( X2 ), _S2CINT( n12714 ) ) );
        goto L17201;
L17200:
        X1 = scrt2__3c_2dtwo( X2, n12714 );
L17201:
        if  ( FALSE( X1 ) )  goto L17203;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17205;
        X3 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17206;
L17205:
        X3 = scrt2__2b_2dtwo( i12713, _TSCP( 4 ) );
L17206:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L17208;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L17208:
        X4 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L17214;
        if  ( AND( EQ( TSCPTAG( s12712 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12712 ), STRINGTAG ) )
            )  goto L17216;
        scdebug_error( c12125, 
                       c12126, CONS( s12712, EMPTYLIST ) );
L17216:
        X5 = C_FIXED( STRING_LENGTH( s12712 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L17220;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X5 ) ) )  goto L17214;
        goto L17227;
L17220:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X5 ) ) )  goto L17227;
L17214:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L17227:
        X2 = C_CHAR( STRING_CHAR( s12712, X3 ) );
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 25106 ) ) ) )  goto L17229;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17231;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17232;
L17231:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17232:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12876, X4 );
        POPSTACKTRACE( X3 );
L17229:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 16914 ) ) ) )  goto L17234;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17236;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17237;
L17236:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17237:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12867, X4 );
        POPSTACKTRACE( X3 );
L17234:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 25618 ) ) ) )  goto L17239;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17241;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17242;
L17241:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17242:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12858, X4 );
        POPSTACKTRACE( X3 );
L17239:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 17426 ) ) ) )  goto L17244;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17246;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17247;
L17246:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17247:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12849, X4 );
        POPSTACKTRACE( X3 );
L17244:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 28178 ) ) ) )  goto L17249;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17251;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17252;
L17251:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17252:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( _TSCP( 2578 ), X4 );
        POPSTACKTRACE( X3 );
L17249:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 29202 ) ) ) )  goto L17254;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17256;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17257;
L17256:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17257:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( _dpregexp__2dchar_2a_8c9d929c_v, X4 );
        POPSTACKTRACE( X3 );
L17254:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 29458 ) ) ) )  goto L17259;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17261;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17262;
L17261:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17262:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12824, X4 );
        POPSTACKTRACE( X3 );
L17259:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 21266 ) ) ) )  goto L17264;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17266;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17267;
L17266:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17267:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12815, X4 );
        POPSTACKTRACE( X3 );
L17264:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 29714 ) ) ) )  goto L17269;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17271;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17272;
L17271:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17272:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( _dpregexp__2dchar_2a_1d3e6846_v, X4 );
        POPSTACKTRACE( X3 );
L17269:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 30482 ) ) ) )  goto L17274;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17276;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17277;
L17276:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17277:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12798, X4 );
        POPSTACKTRACE( X3 );
L17274:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 22290 ) ) ) )  goto L17279;
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17281;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17282;
L17281:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17282:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c12789, X4 );
        POPSTACKTRACE( X3 );
L17279:
        if  ( BITAND( BITOR( _S2CINT( i12713 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17284;
        X5 = _TSCP( IPLUS( _S2CINT( i12713 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17285;
L17284:
        X5 = scrt2__2b_2dtwo( i12713, _TSCP( 8 ) );
L17285:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( X2, X4 );
        POPSTACKTRACE( X3 );
L17203:
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_ar_2dclass_a61fa838_v );
DEFCSTRING( t17287, "PREGEXP-READ-POSIX-CHAR-CLASS" );
EXTERNTSCPP( scrt3_char_2dalphabetic_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dalphabetic_3f_v );
EXTERNTSCPP( sc_string_2d_3esymbol, XAL1( TSCP ) );
EXTERNTSCP( sc_string_2d_3esymbol_v );
EXTERNTSCPP( qobischeme_string_2dupcase, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_string_2dupcase_v );

TSCP  _dpregexp_ar_2dclass_a61fa838( s12916, i12917, n12918 )
        TSCP  s12916, i12917, n12918;
{
        TSCP  X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17287 );
        X1 = FALSEVALUE;
        X1 = CONS( X1, EMPTYLIST );
        X3 = sc_cons( _TSCP( 14866 ), EMPTYLIST );
        X2 = X3;
        X3 = i12917;
        X4 = X2;
L17293:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( n12918 ) ), 
                      3 ) )  goto L17295;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( n12918 ) ) )  goto L17299;
        goto L17300;
L17295:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X3, n12918 ) ) )  goto L17299;
L17300:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L17304;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L17304:
        X6 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L17310;
        if  ( AND( EQ( TSCPTAG( s12916 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12916 ), STRINGTAG ) )
            )  goto L17312;
        scdebug_error( c12125, 
                       c12126, CONS( s12916, EMPTYLIST ) );
L17312:
        X7 = C_FIXED( STRING_LENGTH( s12916 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L17316;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X7 ) ) )  goto L17310;
        goto L17323;
L17316:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X7 ) ) )  goto L17323;
L17310:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L17323:
        X5 = C_CHAR( STRING_CHAR( s12916, X3 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24082 ) ), 
                       CHARACTERTAG ) ) )  goto L17326;
        X6 = CONS( _TSCP( 24082 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X5, X6 ) );
L17326:
        if  ( NEQ( _S2CINT( X5 ), 
                   _S2CINT( _TSCP( 24082 ) ) ) )  goto L17328;
        X6 = TRUEVALUE;
        SETGEN( PAIR_CAR( X1 ), X6 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17331;
        X6 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17332;
L17331:
        X6 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17332:
        X3 = X6;
        GOBACK( L17293 );
L17328:
        if  ( FALSE( scrt3_char_2dalphabetic_3f( X5 ) ) )  goto L17333;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17335;
        X6 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17336;
L17335:
        X6 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17336:
        X4 = sc_cons( X5, X4 );
        X3 = X6;
        GOBACK( L17293 );
L17333:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 14866 ) ), 
                       CHARACTERTAG ) ) )  goto L17338;
        X6 = CONS( _TSCP( 14866 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X5, X6 ) );
L17338:
        if  ( NEQ( _S2CINT( X5 ), 
                   _S2CINT( _TSCP( 14866 ) ) ) )  goto L17340;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17342;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17343;
L17342:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17343:
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( n12918 ) ), 
                      3 ) )  goto L17345;
        X6 = BOOLEAN( GTE( _S2CINT( X7 ), 
                           _S2CINT( n12918 ) ) );
        goto L17346;
L17345:
        X6 = scrt2__3e_3d_2dtwo( X7, n12918 );
L17346:
        if  ( TRUE( X6 ) )  goto L17351;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17352;
        X8 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17353;
L17352:
        X8 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17353:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L17355;
        scdebug_error( c12103, 
                       c12104, CONS( X8, EMPTYLIST ) );
L17355:
        X9 = BOOLEAN( LT( _S2CINT( X8 ), 0 ) );
        if  ( TRUE( X9 ) )  goto L17361;
        if  ( AND( EQ( TSCPTAG( s12916 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s12916 ), STRINGTAG ) )
            )  goto L17363;
        scdebug_error( c12125, 
                       c12126, CONS( s12916, EMPTYLIST ) );
L17363:
        X10 = C_FIXED( STRING_LENGTH( s12916 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X10 ) ), 
                      3 ) )  goto L17367;
        if  ( GTE( _S2CINT( X8 ), _S2CINT( X10 ) ) )  goto L17361;
        goto L17374;
L17367:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X8, X10 ) ) )  goto L17374;
L17361:
        scdebug_error( c12103, 
                       c12127, CONS( X8, EMPTYLIST ) );
L17374:
        X7 = C_CHAR( STRING_CHAR( s12916, X8 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23826 ) ), 
                       CHARACTERTAG ) ) )  goto L17376;
        X8 = CONS( _TSCP( 23826 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X7, X8 ) );
L17376:
        if  ( NEQ( _S2CINT( X7 ), 
                   _S2CINT( _TSCP( 23826 ) ) ) )  goto L17351;
        X11 = _dpregexp_reverse_21_27718c8a( X4 );
        X10 = scrt3_list_2d_3estring( X11 );
        X9 = qobischeme_string_2dupcase( X10 );
        X8 = sc_string_2d_3esymbol( X9 );
        if  ( FALSE( PAIR_CAR( X1 ) ) )  goto L17381;
        X12 = sc_cons( X8, EMPTYLIST );
        X11 = sc_cons( c12479, X12 );
        X10 = X11;
        goto L17382;
L17381:
        X10 = X8;
L17382:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17384;
        X12 = _TSCP( IPLUS( _S2CINT( X3 ), 
                            _S2CINT( _TSCP( 8 ) ) ) );
        goto L17385;
L17384:
        X12 = scrt2__2b_2dtwo( X3, _TSCP( 8 ) );
L17385:
        X11 = sc_cons( X12, EMPTYLIST );
        X9 = sc_cons( X10, X11 );
        POPSTACKTRACE( X9 );
L17340:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c12950, 
                                                            EMPTYLIST ) ) );
L17351:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c12950, 
                                                            EMPTYLIST ) ) );
L17299:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c12950, 
                                                            EMPTYLIST ) ) );
}

DEFTSCP( _dpregexp_ter_2dtype_b20c5407_v );
DEFCSTRING( t17387, "PREGEXP-READ-CLUSTER-TYPE" );

TSCP  _dpregexp_ter_2dtype_b20c5407( s13063, i13064, n13065 )
        TSCP  s13063, i13064, n13065;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17387 );
        if  ( EQ( TSCPTAG( i13064 ), FIXNUMTAG ) )  goto L17392;
        scdebug_error( c12103, 
                       c12104, CONS( i13064, EMPTYLIST ) );
L17392:
        X2 = BOOLEAN( LT( _S2CINT( i13064 ), 0 ) );
        if  ( TRUE( X2 ) )  goto L17398;
        if  ( AND( EQ( TSCPTAG( s13063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13063 ), STRINGTAG ) )
            )  goto L17400;
        scdebug_error( c12125, 
                       c12126, CONS( s13063, EMPTYLIST ) );
L17400:
        X3 = C_FIXED( STRING_LENGTH( s13063 ) );
        if  ( BITAND( BITOR( _S2CINT( i13064 ), 
                             _S2CINT( X3 ) ), 
                      3 ) )  goto L17404;
        if  ( GTE( _S2CINT( i13064 ), _S2CINT( X3 ) ) )  goto L17398;
        goto L17411;
L17404:
        if  ( FALSE( scrt2__3e_3d_2dtwo( i13064, X3 ) ) )  goto L17411;
L17398:
        scdebug_error( c12103, 
                       c12127, CONS( i13064, EMPTYLIST ) );
L17411:
        X1 = C_CHAR( STRING_CHAR( s13063, i13064 ) );
        if  ( NEQ( _S2CUINT( X1 ), 
                   _S2CUINT( _TSCP( 16146 ) ) ) )  goto L17389;
        if  ( BITAND( BITOR( _S2CINT( i13064 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17412;
        X1 = _TSCP( IPLUS( _S2CINT( i13064 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17413;
L17412:
        X1 = scrt2__2b_2dtwo( i13064, _TSCP( 4 ) );
L17413:
        if  ( EQ( TSCPTAG( X1 ), FIXNUMTAG ) )  goto L17416;
        scdebug_error( c12103, 
                       c12104, CONS( X1, EMPTYLIST ) );
L17416:
        X3 = BOOLEAN( LT( _S2CINT( X1 ), 0 ) );
        if  ( TRUE( X3 ) )  goto L17422;
        if  ( AND( EQ( TSCPTAG( s13063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13063 ), STRINGTAG ) )
            )  goto L17424;
        scdebug_error( c12125, 
                       c12126, CONS( s13063, EMPTYLIST ) );
L17424:
        X4 = C_FIXED( STRING_LENGTH( s13063 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X4 ) ), 
                      3 ) )  goto L17428;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X4 ) ) )  goto L17422;
        goto L17435;
L17428:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X1, X4 ) ) )  goto L17435;
L17422:
        scdebug_error( c12103, 
                       c12127, CONS( X1, EMPTYLIST ) );
L17435:
        X2 = C_CHAR( STRING_CHAR( s13063, X1 ) );
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 14866 ) ) ) )  goto L17437;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17439;
        X5 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17440;
L17439:
        X5 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L17440:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( EMPTYLIST, X4 );
        POPSTACKTRACE( X3 );
L17437:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 15634 ) ) ) )  goto L17442;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17444;
        X5 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17445;
L17444:
        X5 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L17445:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c13253, X4 );
        POPSTACKTRACE( X3 );
L17442:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 8466 ) ) ) )  goto L17447;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17449;
        X5 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17450;
L17449:
        X5 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L17450:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c13244, X4 );
        POPSTACKTRACE( X3 );
L17447:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 15890 ) ) ) )  goto L17452;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17454;
        X5 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17455;
L17454:
        X5 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L17455:
        X4 = sc_cons( X5, EMPTYLIST );
        X3 = sc_cons( c13235, X4 );
        POPSTACKTRACE( X3 );
L17452:
        if  ( NEQ( _S2CUINT( X2 ), 
                   _S2CUINT( _TSCP( 15378 ) ) ) )  goto L17457;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17459;
        X6 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17460;
L17459:
        X6 = scrt2__2b_2dtwo( X1, _TSCP( 4 ) );
L17460:
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L17462;
        scdebug_error( c12103, 
                       c12104, CONS( X6, EMPTYLIST ) );
L17462:
        X7 = BOOLEAN( LT( _S2CINT( X6 ), 0 ) );
        if  ( TRUE( X7 ) )  goto L17468;
        if  ( AND( EQ( TSCPTAG( s13063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13063 ), STRINGTAG ) )
            )  goto L17470;
        scdebug_error( c12125, 
                       c12126, CONS( s13063, EMPTYLIST ) );
L17470:
        X8 = C_FIXED( STRING_LENGTH( s13063 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L17474;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( X8 ) ) )  goto L17468;
        goto L17481;
L17474:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, X8 ) ) )  goto L17481;
L17468:
        scdebug_error( c12103, 
                       c12127, CONS( X6, EMPTYLIST ) );
L17481:
        X5 = C_CHAR( STRING_CHAR( s13063, X6 ) );
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( _TSCP( 15634 ) ) ) )  goto L17483;
        X4 = c13195;
        goto L17486;
L17483:
        if  ( NEQ( _S2CUINT( X5 ), 
                   _S2CUINT( _TSCP( 8466 ) ) ) )  goto L17485;
        X4 = c13194;
        goto L17486;
L17485:
        X4 = _dpregexp_xp_2derror_eae6b00b( CONS( c13129, EMPTYLIST ) );
L17486:
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L17487;
        X6 = _TSCP( IPLUS( _S2CINT( X1 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L17488;
L17487:
        X6 = scrt2__2b_2dtwo( X1, _TSCP( 8 ) );
L17488:
        X5 = sc_cons( X6, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        POPSTACKTRACE( X3 );
L17457:
        X3 = X1;
        X4 = EMPTYLIST;
        X5 = FALSEVALUE;
L17491:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L17493;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L17493:
        X7 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X7 ) )  goto L17499;
        if  ( AND( EQ( TSCPTAG( s13063 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13063 ), STRINGTAG ) )
            )  goto L17501;
        scdebug_error( c12125, 
                       c12126, CONS( s13063, EMPTYLIST ) );
L17501:
        X8 = C_FIXED( STRING_LENGTH( s13063 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X8 ) ), 
                      3 ) )  goto L17505;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X8 ) ) )  goto L17499;
        goto L17512;
L17505:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X8 ) ) )  goto L17512;
L17499:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L17512:
        X6 = C_CHAR( STRING_CHAR( s13063, X3 ) );
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 11538 ) ) ) )  goto L17514;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17516;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17517;
L17516:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17517:
        X5 = TRUEVALUE;
        X3 = X7;
        GOBACK( L17491 );
L17514:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 26898 ) ) ) )  goto L17518;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17520;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17521;
L17520:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17521:
        if  ( FALSE( X5 ) )  goto L17522;
        X9 = c13152;
        goto L17523;
L17522:
        X9 = c13151;
L17523:
        X8 = sc_cons( X9, X4 );
        X5 = FALSEVALUE;
        X4 = X8;
        X3 = X7;
        GOBACK( L17491 );
L17518:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 30738 ) ) ) )  goto L17524;
        _dpregexp_tive_3f_2a_a563f6ed_v = X5;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17527;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17528;
L17527:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17528:
        X5 = FALSEVALUE;
        X3 = X7;
        GOBACK( L17491 );
L17524:
        if  ( NEQ( _S2CUINT( X6 ), 
                   _S2CUINT( _TSCP( 14866 ) ) ) )  goto L17529;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17531;
        X9 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17532;
L17531:
        X9 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17532:
        X8 = sc_cons( X9, EMPTYLIST );
        X7 = sc_cons( X4, X8 );
        POPSTACKTRACE( X7 );
L17529:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c13129, 
                                                            EMPTYLIST ) ) );
L17389:
        X2 = sc_cons( i13064, EMPTYLIST );
        X1 = sc_cons( c13076, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_subpattern_6ade1b55_v );
DEFCSTRING( t17535, "PREGEXP-READ-SUBPATTERN" );

TSCP  _dpregexp_subpattern_6ade1b55( s13325, i13326, n13327 )
        TSCP  s13325, i13326, n13327;
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

        PUSHSTACKTRACE( t17535 );
        X1 = _dpregexp_tive_3f_2a_a563f6ed_v;
        X2 = _dpregexp_ter_2dtype_b20c5407( s13325, i13326, n13327 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L17540;
        scrt1__24__car_2derror( X2 );
L17540:
        X3 = PAIR_CAR( X2 );
        X5 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17545;
        scrt1__24__car_2derror( X5 );
L17545:
        X4 = PAIR_CAR( X5 );
        X5 = _dpregexp__2dpattern_c1b58050( s13325, X4, n13327 );
        _dpregexp_tive_3f_2a_a563f6ed_v = X1;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17550;
        scrt1__24__cdr_2derror( X5 );
L17550:
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17553;
        scrt1__24__car_2derror( X7 );
L17553:
        X6 = PAIR_CAR( X7 );
        X7 = PAIR_CAR( X5 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( n13327 ) ), 
                      3 ) )  goto L17557;
        X8 = BOOLEAN( LT( _S2CINT( X6 ), _S2CINT( n13327 ) ) );
        goto L17558;
L17557:
        X8 = scrt2__3c_2dtwo( X6, n13327 );
L17558:
        if  ( FALSE( X8 ) )  goto L17601;
        if  ( EQ( TSCPTAG( X6 ), FIXNUMTAG ) )  goto L17564;
        scdebug_error( c12103, 
                       c12104, CONS( X6, EMPTYLIST ) );
L17564:
        X10 = BOOLEAN( LT( _S2CINT( X6 ), 0 ) );
        if  ( TRUE( X10 ) )  goto L17570;
        if  ( AND( EQ( TSCPTAG( s13325 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13325 ), STRINGTAG ) )
            )  goto L17572;
        scdebug_error( c12125, 
                       c12126, CONS( s13325, EMPTYLIST ) );
L17572:
        X11 = C_FIXED( STRING_LENGTH( s13325 ) );
        if  ( BITAND( BITOR( _S2CINT( X6 ), _S2CINT( X11 ) ), 
                      3 ) )  goto L17576;
        if  ( GTE( _S2CINT( X6 ), _S2CINT( X11 ) ) )  goto L17570;
        goto L17583;
L17576:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X6, X11 ) ) )  goto L17583;
L17570:
        scdebug_error( c12103, 
                       c12127, CONS( X6, EMPTYLIST ) );
L17583:
        X9 = C_CHAR( STRING_CHAR( s13325, X6 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X9 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 10514 ) ), 
                       CHARACTERTAG ) ) )  goto L17585;
        X10 = CONS( _TSCP( 10514 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X9, X10 ) );
L17585:
        if  ( NEQ( _S2CINT( X9 ), 
                   _S2CINT( _TSCP( 10514 ) ) ) )  goto L17601;
        X12 = X3;
        X13 = X7;
L17590:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L17591;
        X11 = X13;
        goto L17592;
L17591:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L17594;
        scrt1__24__cdr_2derror( X12 );
L17594:
        X14 = PAIR_CDR( X12 );
        X16 = PAIR_CAR( X12 );
        X17 = sc_cons( X13, EMPTYLIST );
        X15 = sc_cons( X16, X17 );
        X13 = X15;
        X12 = X14;
        GOBACK( L17590 );
L17592:
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17598;
        X13 = _TSCP( IPLUS( _S2CINT( X6 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L17599;
L17598:
        X13 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L17599:
        X12 = sc_cons( X13, EMPTYLIST );
        X10 = sc_cons( X11, X12 );
        POPSTACKTRACE( X10 );
L17601:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c13382, 
                                                            EMPTYLIST ) ) );
}

DEFTSCP( _dpregexp_2dif_2dany_b11badc7_v );
DEFCSTRING( t17602, "PREGEXP-WRAP-QUANTIFIER-IF-ANY" );
EXTERNTSCPP( scrt1_memv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_memv_v );
EXTERNTSCPP( scrt1_cdddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdddr_v );
EXTERNTSCPP( _dpregexp_ead_2dnums_bc0faaee, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( _dpregexp_ead_2dnums_bc0faaee_v );
EXTERNTSCPP( scrt1_caddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_caddr_v );

TSCP  _dpregexp_2dif_2dany_b11badc7( v13445, s13446, n13447 )
        TSCP  v13445, s13446, n13447;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17602 );
        if  ( EQ( TSCPTAG( v13445 ), PAIRTAG ) )  goto L17605;
        scrt1__24__car_2derror( v13445 );
L17605:
        X1 = PAIR_CAR( v13445 );
        X3 = PAIR_CDR( v13445 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L17610;
        scrt1__24__car_2derror( X3 );
L17610:
        X2 = PAIR_CAR( X3 );
        X3 = X2;
L17614:
        X3 = CONS( X3, EMPTYLIST );
        X5 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( n13447 ) ), 
                      3 ) )  goto L17617;
        if  ( LT( _S2CINT( X5 ), _S2CINT( n13447 ) ) )  goto L17621;
        POPSTACKTRACE( v13445 );
L17617:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, n13447 ) ) )  goto L17621;
        POPSTACKTRACE( v13445 );
L17621:
        X5 = PAIR_CAR( X3 );
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L17625;
        scdebug_error( c12103, 
                       c12104, CONS( X5, EMPTYLIST ) );
L17625:
        X6 = BOOLEAN( LT( _S2CINT( X5 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L17631;
        if  ( AND( EQ( TSCPTAG( s13446 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13446 ), STRINGTAG ) )
            )  goto L17633;
        scdebug_error( c12125, 
                       c12126, CONS( s13446, EMPTYLIST ) );
L17633:
        X7 = C_FIXED( STRING_LENGTH( s13446 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L17637;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X7 ) ) )  goto L17631;
        goto L17644;
L17637:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, X7 ) ) )  goto L17644;
L17631:
        scdebug_error( c12103, 
                       c12127, CONS( X5, EMPTYLIST ) );
L17644:
        X4 = C_CHAR( STRING_CHAR( s13446, X5 ) );
        X5 = scrt3_char_2dwhitespace_3f( X4 );
        if  ( FALSE( X5 ) )  goto L17652;
        if  ( TRUE( _dpregexp_tive_3f_2a_a563f6ed_v ) )  goto L17652;
        X6 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17654;
        X7 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17655;
L17654:
        X7 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L17655:
        X3 = X7;
        GOBACK( L17614 );
L17652:
        if  ( FALSE( scrt1_memv( X4, c13470 ) ) )  goto L17656;
        X10 = sc_cons( X1, EMPTYLIST );
        X9 = sc_cons( c13733, X10 );
        X8 = sc_cons( c13732, X9 );
        X7 = sc_cons( c13731, X8 );
        X6 = sc_cons( c13730, X7 );
        X5 = X6;
        X8 = sc_cons( c13727, EMPTYLIST );
        X7 = sc_cons( X5, X8 );
        X6 = X7;
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 10770 ) ) ) )  goto L17662;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17666;
        scrt1__24__cdr_2derror( X5 );
L17666:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L17669;
        scrt1__24__cdr_2derror( X8 );
L17669:
        X7 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17672;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17672:
        SETGEN( PAIR_CAR( X7 ), _TSCP( 0 ) );
        X7 = scrt1_cdddr( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17675;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17675:
        SETGEN( PAIR_CAR( X7 ), FALSEVALUE );
        goto L17707;
L17662:
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 11026 ) ) ) )  goto L17677;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17681;
        scrt1__24__cdr_2derror( X5 );
L17681:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L17684;
        scrt1__24__cdr_2derror( X8 );
L17684:
        X7 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17687;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17687:
        SETGEN( PAIR_CAR( X7 ), _TSCP( 4 ) );
        X7 = scrt1_cdddr( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17690;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17690:
        SETGEN( PAIR_CAR( X7 ), FALSEVALUE );
        goto L17707;
L17677:
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 16146 ) ) ) )  goto L17692;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17696;
        scrt1__24__cdr_2derror( X5 );
L17696:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L17699;
        scrt1__24__cdr_2derror( X8 );
L17699:
        X7 = PAIR_CDR( X8 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17702;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17702:
        SETGEN( PAIR_CAR( X7 ), _TSCP( 0 ) );
        X7 = scrt1_cdddr( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17705;
        scdebug_error( c13501, 
                       c12027, CONS( X7, EMPTYLIST ) );
L17705:
        SETGEN( PAIR_CAR( X7 ), _TSCP( 4 ) );
        goto L17707;
L17692:
        if  ( NEQ( _S2CUINT( X4 ), 
                   _S2CUINT( _TSCP( 31506 ) ) ) )  goto L17707;
        X9 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X9 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17710;
        X8 = _TSCP( IPLUS( _S2CINT( X9 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17711;
L17710:
        X8 = scrt2__2b_2dtwo( X9, _TSCP( 4 ) );
L17711:
        X7 = _dpregexp_ead_2dnums_bc0faaee( s13446, X8, n13447 );
        if  ( TRUE( X7 ) )  goto L17713;
        X8 = CONS( c13495, EMPTYLIST );
        _dpregexp_xp_2derror_eae6b00b( CONS( c13494, X8 ) );
L17713:
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L17716;
        scrt1__24__car_2derror( X7 );
L17716:
        X8 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17719;
        scrt1__24__cdr_2derror( X5 );
L17719:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17722;
        scrt1__24__cdr_2derror( X10 );
L17722:
        X9 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L17725;
        scdebug_error( c13501, 
                       c12027, CONS( X9, EMPTYLIST ) );
L17725:
        SETGEN( PAIR_CAR( X9 ), X8 );
        X9 = PAIR_CDR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L17729;
        scrt1__24__car_2derror( X9 );
L17729:
        X8 = PAIR_CAR( X9 );
        X9 = scrt1_cdddr( X5 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L17732;
        scdebug_error( c13501, 
                       c12027, CONS( X9, EMPTYLIST ) );
L17732:
        SETGEN( PAIR_CAR( X9 ), X8 );
        X8 = scrt1_caddr( X7 );
        SETGEN( PAIR_CAR( X3 ), X8 );
L17707:
        X8 = PAIR_CAR( X3 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17735;
        X7 = _TSCP( IPLUS( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17736;
L17735:
        X7 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
L17736:
        X8 = X7;
L17739:
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( n13447 ) ), 
                      3 ) )  goto L17741;
        if  ( GTE( _S2CINT( X8 ), _S2CINT( n13447 ) ) )  goto L17745;
        goto L17746;
L17741:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X8, n13447 ) ) )  goto L17745;
L17746:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L17751;
        scdebug_error( c12103, 
                       c12104, CONS( X8, EMPTYLIST ) );
L17751:
        X10 = BOOLEAN( LT( _S2CINT( X8 ), 0 ) );
        if  ( TRUE( X10 ) )  goto L17757;
        if  ( AND( EQ( TSCPTAG( s13446 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13446 ), STRINGTAG ) )
            )  goto L17759;
        scdebug_error( c12125, 
                       c12126, CONS( s13446, EMPTYLIST ) );
L17759:
        X11 = C_FIXED( STRING_LENGTH( s13446 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X11 ) ), 
                      3 ) )  goto L17763;
        if  ( GTE( _S2CINT( X8 ), _S2CINT( X11 ) ) )  goto L17757;
        goto L17770;
L17763:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X8, X11 ) ) )  goto L17770;
L17757:
        scdebug_error( c12103, 
                       c12127, CONS( X8, EMPTYLIST ) );
L17770:
        X9 = C_CHAR( STRING_CHAR( s13446, X8 ) );
        X10 = scrt3_char_2dwhitespace_3f( X9 );
        if  ( FALSE( X10 ) )  goto L17778;
        if  ( TRUE( _dpregexp_tive_3f_2a_a563f6ed_v ) )  goto L17778;
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17779;
        X8 = _TSCP( IPLUS( _S2CINT( X8 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L17739 );
L17779:
        X8 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
        GOBACK( L17739 );
L17778:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X9 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 16146 ) ), 
                       CHARACTERTAG ) ) )  goto L17782;
        X10 = CONS( _TSCP( 16146 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X9, X10 ) );
L17782:
        if  ( NEQ( _S2CINT( X9 ), 
                   _S2CINT( _TSCP( 16146 ) ) ) )  goto L17784;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17788;
        scrt1__24__cdr_2derror( X5 );
L17788:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17791;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17791:
        SETGEN( PAIR_CAR( X10 ), TRUEVALUE );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L17794;
        scrt1__24__cdr_2derror( X6 );
L17794:
        X10 = PAIR_CDR( X6 );
        if  ( BITAND( BITOR( _S2CINT( X8 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17796;
        X11 = _TSCP( IPLUS( _S2CINT( X8 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L17797;
L17796:
        X11 = scrt2__2b_2dtwo( X8, _TSCP( 4 ) );
L17797:
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17799;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17799:
        SETGEN( PAIR_CAR( X10 ), X11 );
        goto L17749;
L17784:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17803;
        scrt1__24__cdr_2derror( X5 );
L17803:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17806;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17806:
        SETGEN( PAIR_CAR( X10 ), FALSEVALUE );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L17809;
        scrt1__24__cdr_2derror( X6 );
L17809:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17812;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17812:
        SETGEN( PAIR_CAR( X10 ), X8 );
        goto L17749;
L17745:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L17816;
        scrt1__24__cdr_2derror( X5 );
L17816:
        X10 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17819;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17819:
        SETGEN( PAIR_CAR( X10 ), FALSEVALUE );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L17822;
        scrt1__24__cdr_2derror( X6 );
L17822:
        X10 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L17825;
        scdebug_error( c13501, 
                       c12027, CONS( X10, EMPTYLIST ) );
L17825:
        SETGEN( PAIR_CAR( X10 ), X8 );
L17749:
        POPSTACKTRACE( X6 );
L17656:
        POPSTACKTRACE( v13445 );
}

DEFTSCP( _dpregexp_ead_2dnums_bc0faaee_v );
DEFCSTRING( t17827, "PREGEXP-READ-NUMS" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  _dpregexp_ead_2dnums_bc0faaee( s13780, i13781, n13782 )
        TSCP  s13780, i13781, n13782;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17827 );
        X1 = EMPTYLIST;
        X2 = EMPTYLIST;
        X3 = i13781;
        X4 = _TSCP( 4 );
L17830:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( n13782 ) ), 
                      3 ) )  goto L17832;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( n13782 ) ) )  goto L17836;
        goto L17839;
L17832:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, n13782 ) ) )  goto L17839;
L17836:
        _dpregexp_xp_2derror_eae6b00b( CONS( c13801, EMPTYLIST ) );
L17839:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L17841;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L17841:
        X8 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X8 ) )  goto L17847;
        if  ( AND( EQ( TSCPTAG( s13780 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13780 ), STRINGTAG ) )
            )  goto L17849;
        scdebug_error( c12125, 
                       c12126, CONS( s13780, EMPTYLIST ) );
L17849:
        X9 = C_FIXED( STRING_LENGTH( s13780 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L17853;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X9 ) ) )  goto L17847;
        goto L17860;
L17853:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X9 ) ) )  goto L17860;
L17847:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L17860:
        X5 = C_CHAR( STRING_CHAR( s13780, X3 ) );
        if  ( FALSE( scrt3_char_2dnumeric_3f( X5 ) ) )  goto L17862;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17865;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L17869;
        goto L17870;
L17865:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 4 ) ) ) )  goto L17869;
        goto L17870;
L17862:
        X8 = scrt3_char_2dwhitespace_3f( X5 );
        if  ( FALSE( X8 ) )  goto L17879;
        if  ( TRUE( _dpregexp_tive_3f_2a_a563f6ed_v ) )  goto L17879;
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17880;
        X9 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17881;
L17880:
        X9 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17881:
        X3 = X9;
        GOBACK( L17830 );
L17870:
        X8 = sc_cons( X5, X2 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17882;
        X9 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17883;
L17882:
        X9 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17883:
        X4 = _TSCP( 8 );
        X3 = X9;
        X2 = X8;
        GOBACK( L17830 );
L17869:
        X8 = sc_cons( X5, X1 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17884;
        X9 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17885;
L17884:
        X9 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17885:
        X4 = _TSCP( 4 );
        X3 = X9;
        X1 = X8;
        GOBACK( L17830 );
L17879:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 11282 ) ), 
                       CHARACTERTAG ) ) )  goto L17887;
        X9 = CONS( _TSCP( 11282 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X5, X9 ) );
L17887:
        X8 = BOOLEAN( EQ( _S2CINT( X5 ), 
                          _S2CINT( _TSCP( 11282 ) ) ) );
        if  ( FALSE( X8 ) )  goto L17902;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17894;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L17898;
        goto L17902;
L17894:
        if  ( FALSE( scrt2__3d_2dtwo( X4, _TSCP( 4 ) ) ) )  goto L17902;
L17898:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17903;
        X8 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17904;
L17903:
        X8 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L17904:
        X4 = _TSCP( 8 );
        X3 = X8;
        GOBACK( L17830 );
L17902:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 32018 ) ), 
                       CHARACTERTAG ) ) )  goto L17906;
        X8 = CONS( _TSCP( 32018 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X5, X8 ) );
L17906:
        if  ( NEQ( _S2CINT( X5 ), 
                   _S2CINT( _TSCP( 32018 ) ) ) )  goto L17908;
        X9 = _dpregexp_reverse_21_27718c8a( X2 );
        X8 = scrt3_list_2d_3estring( X9 );
        X6 = scrt2_string_2d_3enumber( X8, EMPTYLIST );
        X9 = _dpregexp_reverse_21_27718c8a( X1 );
        X8 = scrt3_list_2d_3estring( X9 );
        X7 = scrt2_string_2d_3enumber( X8, EMPTYLIST );
        if  ( FALSE( X7 ) )  goto L17911;
        X8 = FALSEVALUE;
        goto L17912;
L17911:
        X8 = TRUEVALUE;
L17912:
        if  ( FALSE( X8 ) )  goto L17926;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17918;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L17922;
        goto L17926;
L17918:
        if  ( TRUE( scrt2__3d_2dtwo( X4, _TSCP( 4 ) ) ) )  goto L17922;
        goto L17926;
L17908:
        POPSTACKTRACE( FALSEVALUE );
L17922:
        X10 = sc_cons( X3, EMPTYLIST );
        X9 = sc_cons( FALSEVALUE, X10 );
        X8 = sc_cons( _TSCP( 0 ), X9 );
        POPSTACKTRACE( X8 );
L17926:
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17929;
        if  ( EQ( _S2CUINT( X4 ), _S2CUINT( _TSCP( 4 ) ) ) )  goto L17933;
        goto L17934;
L17929:
        if  ( FALSE( scrt2__3d_2dtwo( X4, _TSCP( 4 ) ) ) )  goto L17934;
L17933:
        X10 = sc_cons( X3, EMPTYLIST );
        X9 = sc_cons( X7, X10 );
        X8 = sc_cons( X7, X9 );
        POPSTACKTRACE( X8 );
L17934:
        X10 = sc_cons( X3, EMPTYLIST );
        X9 = sc_cons( X6, X10 );
        X8 = sc_cons( X7, X9 );
        POPSTACKTRACE( X8 );
}

DEFTSCP( _dpregexp_har_2dlist_c902691d_v );
DEFCSTRING( t17939, "PREGEXP-INVERT-CHAR-LIST" );

TSCP  _dpregexp_har_2dlist_c902691d( v13926 )
        TSCP  v13926;
{
        TSCP  X1;

        PUSHSTACKTRACE( t17939 );
        if  ( EQ( TSCPTAG( v13926 ), PAIRTAG ) )  goto L17942;
        scrt1__24__car_2derror( v13926 );
L17942:
        X1 = PAIR_CAR( v13926 );
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L17945;
        scdebug_error( c13501, 
                       c12027, CONS( X1, EMPTYLIST ) );
L17945:
        SETGEN( PAIR_CAR( X1 ), c13936 );
        POPSTACKTRACE( v13926 );
}

DEFTSCP( _dpregexp_har_2dlist_98a7f495_v );
DEFCSTRING( t17947, "PREGEXP-READ-CHAR-LIST" );

TSCP  _dpregexp_har_2dlist_98a7f495( s13939, i13940, n13941 )
        TSCP  s13939, i13940, n13941;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t17947 );
        X1 = EMPTYLIST;
        X2 = i13940;
L17950:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n13941 ) ), 
                      3 ) )  goto L17952;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( n13941 ) ) )  goto L17956;
        goto L17957;
L17952:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, n13941 ) ) )  goto L17956;
L17957:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L17961;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L17961:
        X4 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L17967;
        if  ( AND( EQ( TSCPTAG( s13939 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13939 ), STRINGTAG ) )
            )  goto L17969;
        scdebug_error( c12125, 
                       c12126, CONS( s13939, EMPTYLIST ) );
L17969:
        X5 = C_FIXED( STRING_LENGTH( s13939 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L17973;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X5 ) ) )  goto L17967;
        goto L17980;
L17973:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X5 ) ) )  goto L17980;
L17967:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L17980:
        X3 = C_CHAR( STRING_CHAR( s13939, X2 ) );
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( _TSCP( 23826 ) ) ) )  goto L17982;
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L17984;
        X4 = sc_cons( X3, X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17986;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17987;
L17986:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L17987:
        X1 = X4;
        GOBACK( L17950 );
L17984:
        X6 = _dpregexp_reverse_21_27718c8a( X1 );
        X5 = sc_cons( c14189, X6 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L17988;
        X7 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L17989;
L17988:
        X7 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L17989:
        X6 = sc_cons( X7, EMPTYLIST );
        X4 = sc_cons( X5, X6 );
        POPSTACKTRACE( X4 );
L17982:
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( _TSCP( 23570 ) ) ) )  goto L17991;
        X4 = _dpregexp_ped_2dchar_7f19c128( s13939, X2, n13941 );
        if  ( FALSE( X4 ) )  goto L17994;
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L17997;
        scrt1__24__car_2derror( X4 );
L17997:
        X6 = PAIR_CAR( X4 );
        X5 = sc_cons( X6, X1 );
        X6 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L18001;
        scrt1__24__car_2derror( X6 );
L18001:
        X2 = PAIR_CAR( X6 );
        X1 = X5;
        GOBACK( L17950 );
L17994:
        X5 = CONS( c12416, EMPTYLIST );
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c14167, X5 ) ) );
L17991:
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( _TSCP( 11538 ) ) ) )  goto L18003;
        X4 = BOOLEAN( EQ( _S2CUINT( X1 ), 
                          _S2CUINT( EMPTYLIST ) ) );
        if  ( TRUE( X4 ) )  goto L18009;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18010;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18011;
L18010:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18011:
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( n13941 ) ), 
                      3 ) )  goto L18013;
        X6 = BOOLEAN( LT( _S2CINT( X5 ), _S2CINT( n13941 ) ) );
        goto L18014;
L18013:
        X6 = scrt2__3c_2dtwo( X5, n13941 );
L18014:
        if  ( FALSE( X6 ) )  goto L18045;
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L18020;
        scdebug_error( c12103, 
                       c12104, CONS( X5, EMPTYLIST ) );
L18020:
        X8 = BOOLEAN( LT( _S2CINT( X5 ), 0 ) );
        if  ( TRUE( X8 ) )  goto L18026;
        if  ( AND( EQ( TSCPTAG( s13939 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13939 ), STRINGTAG ) )
            )  goto L18028;
        scdebug_error( c12125, 
                       c12126, CONS( s13939, EMPTYLIST ) );
L18028:
        X9 = C_FIXED( STRING_LENGTH( s13939 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X9 ) ), 
                      3 ) )  goto L18032;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X9 ) ) )  goto L18026;
        goto L18039;
L18032:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, X9 ) ) )  goto L18039;
L18026:
        scdebug_error( c12103, 
                       c12127, CONS( X5, EMPTYLIST ) );
L18039:
        X7 = C_CHAR( STRING_CHAR( s13939, X5 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23826 ) ), 
                       CHARACTERTAG ) ) )  goto L18041;
        X8 = CONS( _TSCP( 23826 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X7, X8 ) );
L18041:
        if  ( EQ( _S2CINT( X7 ), _S2CINT( _TSCP( 23826 ) ) ) )  goto L18009;
        goto L18045;
L18003:
        if  ( NEQ( _S2CUINT( X3 ), 
                   _S2CUINT( _TSCP( 23314 ) ) ) )  goto L18046;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18048;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18049;
L18048:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18049:
        if  ( EQ( TSCPTAG( X5 ), FIXNUMTAG ) )  goto L18051;
        scdebug_error( c12103, 
                       c12104, CONS( X5, EMPTYLIST ) );
L18051:
        X6 = BOOLEAN( LT( _S2CINT( X5 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L18057;
        if  ( AND( EQ( TSCPTAG( s13939 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13939 ), STRINGTAG ) )
            )  goto L18059;
        scdebug_error( c12125, 
                       c12126, CONS( s13939, EMPTYLIST ) );
L18059:
        X7 = C_FIXED( STRING_LENGTH( s13939 ) );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L18063;
        if  ( GTE( _S2CINT( X5 ), _S2CINT( X7 ) ) )  goto L18057;
        goto L18070;
L18063:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, X7 ) ) )  goto L18070;
L18057:
        scdebug_error( c12103, 
                       c12127, CONS( X5, EMPTYLIST ) );
L18070:
        X4 = C_CHAR( STRING_CHAR( s13939, X5 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 14866 ) ), 
                       CHARACTERTAG ) ) )  goto L18072;
        X5 = CONS( _TSCP( 14866 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X4, X5 ) );
L18072:
        if  ( NEQ( _S2CINT( X4 ), 
                   _S2CINT( _TSCP( 14866 ) ) ) )  goto L18074;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L18076;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L18077;
L18076:
        X6 = scrt2__2b_2dtwo( X2, _TSCP( 8 ) );
L18077:
        X5 = _dpregexp_ar_2dclass_a61fa838( s13939, X6, n13941 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L18080;
        scrt1__24__car_2derror( X5 );
L18080:
        X7 = PAIR_CAR( X5 );
        X6 = sc_cons( X7, X1 );
        X7 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L18084;
        scrt1__24__car_2derror( X7 );
L18084:
        X2 = PAIR_CAR( X7 );
        X1 = X6;
        GOBACK( L17950 );
L18074:
        X5 = sc_cons( X3, X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18086;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18087;
L18086:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18087:
        X1 = X5;
        GOBACK( L17950 );
L18046:
        X4 = sc_cons( X3, X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18088;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18089;
L18088:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18089:
        X1 = X4;
        GOBACK( L17950 );
L18009:
        X4 = sc_cons( X3, X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18090;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18091;
L18090:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18091:
        X1 = X4;
        GOBACK( L17950 );
L18045:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L18093;
        scrt1__24__car_2derror( X1 );
L18093:
        X4 = PAIR_CAR( X1 );
        if  ( NEQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ) )  goto L18096;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18098;
        X11 = _TSCP( IPLUS( _S2CINT( X2 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L18099;
L18098:
        X11 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18099:
        if  ( EQ( TSCPTAG( X11 ), FIXNUMTAG ) )  goto L18101;
        scdebug_error( c12103, 
                       c12104, CONS( X11, EMPTYLIST ) );
L18101:
        X12 = BOOLEAN( LT( _S2CINT( X11 ), 0 ) );
        if  ( TRUE( X12 ) )  goto L18107;
        if  ( AND( EQ( TSCPTAG( s13939 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s13939 ), STRINGTAG ) )
            )  goto L18109;
        scdebug_error( c12125, 
                       c12126, CONS( s13939, EMPTYLIST ) );
L18109:
        X13 = C_FIXED( STRING_LENGTH( s13939 ) );
        if  ( BITAND( BITOR( _S2CINT( X11 ), 
                             _S2CINT( X13 ) ), 
                      3 ) )  goto L18113;
        if  ( GTE( _S2CINT( X11 ), _S2CINT( X13 ) ) )  goto L18107;
        goto L18120;
L18113:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X11, X13 ) ) )  goto L18120;
L18107:
        scdebug_error( c12103, 
                       c12127, CONS( X11, EMPTYLIST ) );
L18120:
        X10 = C_CHAR( STRING_CHAR( s13939, X11 ) );
        X9 = sc_cons( X10, EMPTYLIST );
        X8 = sc_cons( X4, X9 );
        X7 = sc_cons( c14113, X8 );
        X6 = X7;
        X7 = PAIR_CDR( X1 );
        X5 = sc_cons( X6, X7 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L18123;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L18124;
L18123:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 8 ) );
L18124:
        X1 = X5;
        GOBACK( L17950 );
L18096:
        X5 = sc_cons( X3, X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18125;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18126;
L18125:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18126:
        X1 = X5;
        GOBACK( L17950 );
L17956:
        X4 = CONS( c14227, EMPTYLIST );
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c14167, X4 ) ) );
}

DEFTSCP( _dpregexp_ng_2dmatch_cc5a26b9_v );
DEFCSTRING( t18127, "PREGEXP-STRING-MATCH" );

TSCP  _dpregexp_ng_2dmatch_cc5a26b9( s14230, 
                                     s14231, 
                                     i14232, 
                                     n14233, s14234, f14235 )
        TSCP  s14230, 
              s14231, i14232, n14233, s14234, f14235;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18127 );
        if  ( AND( EQ( TSCPTAG( s14230 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s14230 ), STRINGTAG ) )
            )  goto L18130;
        scdebug_error( c12125, 
                       c12126, CONS( s14230, EMPTYLIST ) );
L18130:
        X1 = C_FIXED( STRING_LENGTH( s14230 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( n14233 ) ), 
                      3 ) )  goto L18134;
        if  ( GT( _S2CINT( X1 ), _S2CINT( n14233 ) ) )  goto L18138;
        goto L18139;
L18134:
        if  ( FALSE( scrt2__3e_2dtwo( X1, n14233 ) ) )  goto L18139;
L18138:
        X2 = f14235;
        X2 = UNKNOWNCALL( X2, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) ) );
L18139:
        X2 = _TSCP( 0 );
        X3 = i14232;
L18143:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L18145;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X1 ) ) )  goto L18149;
        goto L18150;
L18145:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X1 ) ) )  goto L18150;
L18149:
        X4 = s14234;
        X4 = UNKNOWNCALL( X4, 1 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( X3, 
                                                    PROCEDURE_CLOSURE( X4 ) ) );
L18150:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( n14233 ) ), 
                      3 ) )  goto L18154;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( n14233 ) ) )  goto L18158;
        goto L18159;
L18154:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X3, n14233 ) ) )  goto L18158;
L18159:
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L18163;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L18163:
        X5 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L18169;
        if  ( AND( EQ( TSCPTAG( s14231 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s14231 ), STRINGTAG ) )
            )  goto L18171;
        scdebug_error( c12125, 
                       c12126, CONS( s14231, EMPTYLIST ) );
L18171:
        X6 = C_FIXED( STRING_LENGTH( s14231 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L18175;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X6 ) ) )  goto L18169;
        goto L18182;
L18175:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X6 ) ) )  goto L18182;
L18169:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L18182:
        X4 = C_CHAR( STRING_CHAR( s14231, X3 ) );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L18184;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L18184:
        X6 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L18190;
        X7 = C_FIXED( STRING_LENGTH( s14230 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L18194;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X7 ) ) )  goto L18190;
        goto L18201;
L18194:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X7 ) ) )  goto L18201;
L18190:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L18201:
        X5 = C_CHAR( STRING_CHAR( s14230, X2 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X5 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ) )
            )  goto L18203;
        X6 = CONS( X4, EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X5, X6 ) );
L18203:
        if  ( NEQ( _S2CINT( X5 ), _S2CINT( X4 ) ) )  goto L18205;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18207;
        X6 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18208;
L18207:
        X6 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18208:
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18209;
        X3 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18210;
L18209:
        X3 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L18210:
        X2 = X6;
        GOBACK( L18143 );
L18205:
        X6 = f14235;
        X6 = UNKNOWNCALL( X6, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X6 ) )( PROCEDURE_CLOSURE( X6 ) ) );
L18158:
        X4 = f14235;
        X4 = UNKNOWNCALL( X4, 0 );
        POPSTACKTRACE( VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) ) );
}

DEFTSCP( _dpregexp__2dword_3f_d5d6584d_v );
DEFCSTRING( t18211, "PREGEXP-CHAR-WORD?" );

TSCP  _dpregexp__2dword_3f_d5d6584d( c14338 )
        TSCP  c14338;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18211 );
        X1 = scrt3_char_2dalphabetic_3f( c14338 );
        if  ( TRUE( X1 ) )  goto L18214;
        X2 = scrt3_char_2dnumeric_3f( c14338 );
        if  ( TRUE( X2 ) )  goto L18217;
        if  ( AND( EQ( TSCPIMMEDIATETAG( c14338 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24338 ) ), 
                       CHARACTERTAG ) ) )  goto L18220;
        X3 = CONS( _TSCP( 24338 ), EMPTYLIST );
        scdebug_error( c12096, 
                       c12097, CONS( c14338, X3 ) );
L18220:
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( c14338 ), 
                                    _S2CINT( _TSCP( 24338 ) ) ) ) );
L18217:
        POPSTACKTRACE( X2 );
L18214:
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_2dclass_3f_a6bca49b_v );
DEFCSTRING( t18222, "PREGEXP-CHECK-IF-IN-CHAR-CLASS?" );
EXTERNTSCPP( scrt3_char_2dlower_2dcase_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dlower_2dcase_3f_v );
EXTERNTSCPP( scrt3_char_2dupper_2dcase_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt3_char_2dupper_2dcase_3f_v );
EXTERNTSCPP( scrt3_char_2dci_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_char_2dci_3d_3f_v );

TSCP  _dpregexp_2dclass_3f_a6bca49b( c14357, c14358 )
        TSCP  c14357, c14358;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18222 );
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c12544 ) ) )  goto L18224;
        if  ( AND( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 2578 ) ), 
                       CHARACTERTAG ) ) )  goto L18227;
        X1 = CONS( _TSCP( 2578 ), EMPTYLIST );
        scdebug_error( c12096, 
                       c12097, CONS( c14357, X1 ) );
L18227:
        POPSTACKTRACE( BOOLEAN( NEQ( _S2CINT( c14357 ), 
                                     _S2CINT( _TSCP( 2578 ) ) ) ) );
L18224:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14367 ) ) )  goto L18229;
        X1 = scrt3_char_2dalphabetic_3f( c14357 );
        if  ( TRUE( X1 ) )  goto L18232;
        POPSTACKTRACE( scrt3_char_2dnumeric_3f( c14357 ) );
L18232:
        POPSTACKTRACE( X1 );
L18229:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14371 ) ) )  goto L18234;
        POPSTACKTRACE( scrt3_char_2dalphabetic_3f( c14357 ) );
L18234:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14375 ) ) )  goto L18236;
        if  ( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ) )  goto L18239;
        scdebug_error( c11930, 
                       c11931, CONS( c14357, EMPTYLIST ) );
L18239:
        X1 = CHAR_FIX( c14357 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 512 ) ) ), 
                      3 ) )  goto L18242;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X1 ), 
                                    _S2CINT( _TSCP( 512 ) ) ) ) );
L18242:
        POPSTACKTRACE( scrt2__3c_2dtwo( X1, _TSCP( 512 ) ) );
L18236:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14379 ) ) )  goto L18244;
        if  ( AND( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 8210 ) ), 
                       CHARACTERTAG ) ) )  goto L18247;
        X2 = CONS( _TSCP( 8210 ), EMPTYLIST );
        scdebug_error( c12096, 
                       c12097, CONS( c14357, X2 ) );
L18247:
        X1 = BOOLEAN( EQ( _S2CINT( c14357 ), 
                          _S2CINT( _TSCP( 8210 ) ) ) );
        if  ( TRUE( X1 ) )  goto L18250;
        X2 = _dpregexp__2dchar_2a_1d3e6846_v;
        if  ( AND( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( X2 ), CHARACTERTAG ) )
            )  goto L18253;
        X3 = CONS( X2, EMPTYLIST );
        scdebug_error( c12096, 
                       c12097, CONS( c14357, X3 ) );
L18253:
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( c14357 ), 
                                    _S2CINT( X2 ) ) ) );
L18250:
        POPSTACKTRACE( X1 );
L18244:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14383 ) ) )  goto L18255;
        if  ( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ) )  goto L18258;
        scdebug_error( c11930, 
                       c11931, CONS( c14357, EMPTYLIST ) );
L18258:
        X1 = CHAR_FIX( c14357 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L18261;
        POPSTACKTRACE( BOOLEAN( LT( _S2CINT( X1 ), 
                                    _S2CINT( _TSCP( 128 ) ) ) ) );
L18261:
        POPSTACKTRACE( scrt2__3c_2dtwo( X1, _TSCP( 128 ) ) );
L18255:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c12858 ) ) )  goto L18263;
        POPSTACKTRACE( scrt3_char_2dnumeric_3f( c14357 ) );
L18263:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14390 ) ) )  goto L18265;
        if  ( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ) )  goto L18268;
        scdebug_error( c11930, 
                       c11931, CONS( c14357, EMPTYLIST ) );
L18268:
        X2 = CHAR_FIX( c14357 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L18271;
        X1 = BOOLEAN( GTE( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 128 ) ) ) );
        goto L18272;
L18271:
        X1 = scrt2__3e_3d_2dtwo( X2, _TSCP( 128 ) );
L18272:
        if  ( FALSE( X1 ) )  goto L18274;
        if  ( TRUE( scrt3_char_2dwhitespace_3f( c14357 ) ) )  goto L18276;
        POPSTACKTRACE( TRUEVALUE );
L18276:
        POPSTACKTRACE( FALSEVALUE );
L18274:
        POPSTACKTRACE( X1 );
L18265:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14394 ) ) )  goto L18278;
        POPSTACKTRACE( scrt3_char_2dlower_2dcase_3f( c14357 ) );
L18278:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14398 ) ) )  goto L18280;
        if  ( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ) )  goto L18283;
        scdebug_error( c11930, 
                       c11931, CONS( c14357, EMPTYLIST ) );
L18283:
        X1 = CHAR_FIX( c14357 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L18286;
        POPSTACKTRACE( BOOLEAN( GTE( _S2CINT( X1 ), 
                                     _S2CINT( _TSCP( 128 ) ) ) ) );
L18286:
        POPSTACKTRACE( scrt2__3e_3d_2dtwo( X1, _TSCP( 128 ) ) );
L18280:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14402 ) ) )  goto L18288;
        if  ( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ) )  goto L18291;
        scdebug_error( c11930, 
                       c11931, CONS( c14357, EMPTYLIST ) );
L18291:
        X2 = CHAR_FIX( c14357 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 128 ) ) ), 
                      3 ) )  goto L18294;
        X1 = BOOLEAN( GTE( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 128 ) ) ) );
        goto L18295;
L18294:
        X1 = scrt2__3e_3d_2dtwo( X2, _TSCP( 128 ) );
L18295:
        if  ( FALSE( X1 ) )  goto L18297;
        if  ( FALSE( scrt3_char_2dwhitespace_3f( c14357 ) ) )  goto L18299;
        X2 = FALSEVALUE;
        goto L18300;
L18299:
        X2 = TRUEVALUE;
L18300:
        if  ( FALSE( X2 ) )  goto L18302;
        if  ( FALSE( scrt3_char_2dalphabetic_3f( c14357 ) ) )  goto L18304;
        X3 = FALSEVALUE;
        goto L18305;
L18304:
        X3 = TRUEVALUE;
L18305:
        if  ( FALSE( X3 ) )  goto L18307;
        if  ( TRUE( scrt3_char_2dnumeric_3f( c14357 ) ) )  goto L18309;
        POPSTACKTRACE( TRUEVALUE );
L18309:
        POPSTACKTRACE( FALSEVALUE );
L18307:
        POPSTACKTRACE( X3 );
L18302:
        POPSTACKTRACE( X2 );
L18297:
        POPSTACKTRACE( X1 );
L18288:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c12824 ) ) )  goto L18311;
        POPSTACKTRACE( scrt3_char_2dwhitespace_3f( c14357 ) );
L18311:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14409 ) ) )  goto L18313;
        POPSTACKTRACE( scrt3_char_2dupper_2dcase_3f( c14357 ) );
L18313:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c12798 ) ) )  goto L18315;
        X1 = scrt3_char_2dalphabetic_3f( c14357 );
        if  ( TRUE( X1 ) )  goto L18318;
        X2 = scrt3_char_2dnumeric_3f( c14357 );
        if  ( TRUE( X2 ) )  goto L18321;
        if  ( AND( EQ( TSCPIMMEDIATETAG( c14357 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 24338 ) ), 
                       CHARACTERTAG ) ) )  goto L18324;
        X3 = CONS( _TSCP( 24338 ), EMPTYLIST );
        scdebug_error( c12096, 
                       c12097, CONS( c14357, X3 ) );
L18324:
        POPSTACKTRACE( BOOLEAN( EQ( _S2CINT( c14357 ), 
                                    _S2CINT( _TSCP( 24338 ) ) ) ) );
L18321:
        POPSTACKTRACE( X2 );
L18318:
        POPSTACKTRACE( X1 );
L18315:
        if  ( NEQ( _S2CUINT( c14358 ), _S2CUINT( c14416 ) ) )  goto L18326;
        X1 = scrt3_char_2dnumeric_3f( c14357 );
        if  ( TRUE( X1 ) )  goto L18329;
        X2 = scrt3_char_2dci_3d_3f( c14357, _TSCP( 24850 ) );
        if  ( TRUE( X2 ) )  goto L18332;
        X3 = scrt3_char_2dci_3d_3f( c14357, _TSCP( 25106 ) );
        if  ( TRUE( X3 ) )  goto L18335;
        X4 = scrt3_char_2dci_3d_3f( c14357, _TSCP( 25362 ) );
        if  ( TRUE( X4 ) )  goto L18338;
        X5 = scrt3_char_2dci_3d_3f( c14357, _TSCP( 25618 ) );
        if  ( TRUE( X5 ) )  goto L18341;
        X6 = scrt3_char_2dci_3d_3f( c14357, _TSCP( 25874 ) );
        if  ( TRUE( X6 ) )  goto L18344;
        POPSTACKTRACE( scrt3_char_2dci_3d_3f( c14357, _TSCP( 26130 ) ) );
L18344:
        POPSTACKTRACE( X6 );
L18341:
        POPSTACKTRACE( X5 );
L18338:
        POPSTACKTRACE( X4 );
L18335:
        POPSTACKTRACE( X3 );
L18332:
        POPSTACKTRACE( X2 );
L18329:
        POPSTACKTRACE( X1 );
L18326:
        POPSTACKTRACE( _dpregexp_xp_2derror_eae6b00b( CONS( c14417, 
                                                            EMPTYLIST ) ) );
}

DEFTSCP( _dpregexp_oundary_3f_fa13e7c5_v );
DEFCSTRING( t18346, "PREGEXP-AT-WORD-BOUNDARY?" );

TSCP  _dpregexp_oundary_3f_fa13e7c5( s14555, i14556, n14557 )
        TSCP  s14555, i14556, n14557;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t18346 );
        if  ( BITAND( BITOR( _S2CINT( i14556 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L18348;
        X1 = BOOLEAN( EQ( _S2CUINT( i14556 ), 
                          _S2CUINT( _TSCP( 0 ) ) ) );
        goto L18349;
L18348:
        X1 = scrt2__3d_2dtwo( i14556, _TSCP( 0 ) );
L18349:
        if  ( TRUE( X1 ) )  goto L18351;
        if  ( BITAND( BITOR( _S2CINT( i14556 ), 
                             _S2CINT( n14557 ) ), 
                      3 ) )  goto L18353;
        X2 = BOOLEAN( GTE( _S2CINT( i14556 ), 
                           _S2CINT( n14557 ) ) );
        goto L18354;
L18353:
        X2 = scrt2__3e_3d_2dtwo( i14556, n14557 );
L18354:
        if  ( TRUE( X2 ) )  goto L18356;
        if  ( BITAND( BITOR( _S2CINT( i14556 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18358;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( i14556 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L18359;
L18358:
        X4 = scrt2__2d_2dtwo( i14556, _TSCP( 4 ) );
L18359:
        if  ( EQ( TSCPTAG( X4 ), FIXNUMTAG ) )  goto L18361;
        scdebug_error( c12103, 
                       c12104, CONS( X4, EMPTYLIST ) );
L18361:
        X5 = BOOLEAN( LT( _S2CINT( X4 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L18367;
        if  ( AND( EQ( TSCPTAG( s14555 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s14555 ), STRINGTAG ) )
            )  goto L18369;
        scdebug_error( c12125, 
                       c12126, CONS( s14555, EMPTYLIST ) );
L18369:
        X6 = C_FIXED( STRING_LENGTH( s14555 ) );
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L18373;
        if  ( GTE( _S2CINT( X4 ), _S2CINT( X6 ) ) )  goto L18367;
        goto L18380;
L18373:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X4, X6 ) ) )  goto L18380;
L18367:
        scdebug_error( c12103, 
                       c12127, CONS( X4, EMPTYLIST ) );
L18380:
        X3 = C_CHAR( STRING_CHAR( s14555, X4 ) );
        if  ( EQ( TSCPTAG( i14556 ), FIXNUMTAG ) )  goto L18382;
        scdebug_error( c12103, 
                       c12104, CONS( i14556, EMPTYLIST ) );
L18382:
        X5 = BOOLEAN( LT( _S2CINT( i14556 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L18388;
        if  ( AND( EQ( TSCPTAG( s14555 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s14555 ), STRINGTAG ) )
            )  goto L18390;
        scdebug_error( c12125, 
                       c12126, CONS( s14555, EMPTYLIST ) );
L18390:
        X6 = C_FIXED( STRING_LENGTH( s14555 ) );
        if  ( BITAND( BITOR( _S2CINT( i14556 ), 
                             _S2CINT( X6 ) ), 
                      3 ) )  goto L18394;
        if  ( GTE( _S2CINT( i14556 ), _S2CINT( X6 ) ) )  goto L18388;
        goto L18401;
L18394:
        if  ( FALSE( scrt2__3e_3d_2dtwo( i14556, X6 ) ) )  goto L18401;
L18388:
        scdebug_error( c12103, 
                       c12127, CONS( i14556, EMPTYLIST ) );
L18401:
        X4 = C_CHAR( STRING_CHAR( s14555, i14556 ) );
        X5 = _dpregexp_2dclass_3f_a6bca49b( X3, c12798 );
        X6 = _dpregexp_2dclass_3f_a6bca49b( X4, c12798 );
        if  ( FALSE( X6 ) )  goto L18404;
        if  ( FALSE( X5 ) )  goto L18406;
        X7 = FALSEVALUE;
        goto L18405;
L18406:
        X7 = TRUEVALUE;
        goto L18405;
L18404:
        X7 = X6;
L18405:
        if  ( TRUE( X7 ) )  goto L18409;
        if  ( FALSE( X6 ) )  goto L18411;
        X8 = FALSEVALUE;
        goto L18412;
L18411:
        X8 = TRUEVALUE;
L18412:
        if  ( TRUE( X8 ) )  goto L18414;
        POPSTACKTRACE( X8 );
L18414:
        POPSTACKTRACE( X5 );
L18409:
        POPSTACKTRACE( X7 );
L18356:
        POPSTACKTRACE( X2 );
L18351:
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_list_2dref_27168dd8_v );
DEFCSTRING( t18416, "PREGEXP-LIST-REF" );

TSCP  _dpregexp_list_2dref_27168dd8( s14657, i14658 )
        TSCP  s14657, i14658;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t18416 );
        X1 = s14657;
        X2 = _TSCP( 0 );
L18419:
        if  ( EQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L18420;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( i14658 ) ), 
                      3 ) )  goto L18423;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( i14658 ) ) )  goto L18427;
        goto L18428;
L18423:
        if  ( TRUE( scrt2__3d_2dtwo( X2, i14658 ) ) )  goto L18427;
        goto L18428;
L18420:
        POPSTACKTRACE( FALSEVALUE );
L18428:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L18432;
        scrt1__24__cdr_2derror( X1 );
L18432:
        X3 = PAIR_CDR( X1 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18434;
        X2 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18435;
L18434:
        X2 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L18435:
        X1 = X3;
        GOBACK( L18419 );
L18427:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L18437;
        scrt1__24__car_2derror( X1 );
L18437:
        POPSTACKTRACE( PAIR_CAR( X1 ) );
}

DEFTSCP( _dpregexp_ref_2dlist_799d8334_v );
DEFCSTRING( t18439, "PREGEXP-MAKE-BACKREF-LIST" );
EXTERNTSCPP( idealib_2dpregexp_s14701, XAL1( TSCP ) );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );

TSCP  idealib_2dpregexp_s14701( r14703 )
        TSCP  r14703;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "SUB [inside PREGEXP-MAKE-BACKREF-LIST]" );
        if  ( NEQ( TSCPTAG( r14703 ), PAIRTAG ) )  goto L18443;
        X2 = PAIR_CDR( r14703 );
        X1 = idealib_2dpregexp_s14701( X2 );
        X2 = PAIR_CAR( r14703 );
        if  ( NOT( OR( EQ( _S2CUINT( X2 ), 
                           _S2CUINT( c14712 ) ), 
                       AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( X2 ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c14712 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c14712 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( X2 ), 
                                               FLOAT_VALUE( c14712 ) ) ) ) ) ) ) )
            )  goto L18448;
        X3 = sc_cons( r14703, FALSEVALUE );
        POPSTACKTRACE( sc_cons( X3, X1 ) );
L18448:
        X3 = idealib_2dpregexp_s14701( X2 );
        POPSTACKTRACE( scrt1_append_2dtwo( X3, X1 ) );
L18443:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  _dpregexp_ref_2dlist_799d8334( r14697 )
        TSCP  r14697;
{
        PUSHSTACKTRACE( t18439 );
        POPSTACKTRACE( idealib_2dpregexp_s14701( r14697 ) );
}

DEFTSCP( _dpregexp_ions_2daux_dbab67e7_v );
DEFCSTRING( t18450, "PREGEXP-MATCH-POSITIONS-AUX" );

TSCP  idealib_2dpregexp_i14731( x15451, c18452 )
        TSCP  x15451, c18452;
{
        PUSHSTACKTRACE( "IDENTITY [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        POPSTACKTRACE( x15451 );
}

TSCP  idealib_2dpregexp__2414738( c18455 )
        TSCP  c18455;
{
        PUSHSTACKTRACE( "$_3 [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

EXTERNTSCPP( scrt3_char_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_char_3d_3f_v );
EXTERNTSCPP( scrt3_char_3c_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_char_3c_3d_3f_v );
EXTERNTSCPP( scrt3_char_2dci_3c_3d_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt3_char_2dci_3c_3d_3f_v );
EXTERNTSCPP( idealib_2dpregexp_s14740, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCPP( idealib_2dpregexp_l15183, XAL2( TSCP, TSCP ) );

TSCP  idealib_2dpregexp_l15196( i15197, c18697 )
        TSCP  i15197, c18697;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15196 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18697, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18697, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18697, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18697, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18697, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18697, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18697, 6 );
        X8 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18697, 7 );
        X9 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18697, 8 );
        X10 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18697, 9 );
        X13 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X13 ), PAIRTAG ) )  goto L18700;
        scrt1__24__cdr_2derror( X13 );
L18700:
        X12 = PAIR_CDR( X13 );
        X11 = idealib_2dpregexp_l15183( X12, i15197 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 10 ) = X8;
        DISPLAY( 9 ) = X9;
        DISPLAY( 11 ) = X10;
        POPSTACKTRACE( X11 );
}

TSCP  idealib_2dpregexp_l15183( r15185, i15186 )
        TSCP  r15185, i15186;
{
        TSCP  X2, X1;
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOUP-SEQ [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        DISPLAY( 11 ) = r15185;
        if  ( NEQ( _S2CUINT( DISPLAY( 11 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L18692;
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( i15186, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
L18692:
        X2 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18695;
        scrt1__24__car_2derror( X2 );
L18695:
        X1 = PAIR_CAR( X2 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15196, 
                            MAKECLOSURE( EMPTYLIST, 
                                         10, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 11 ) ) );
        SDVAL = idealib_2dpregexp_s14740( X1, 
                                          i15186, 
                                          X2, DISPLAY( 10 ) );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( idealib_2dpregexp_l15148, XAL1( TSCP ) );

TSCP  idealib_2dpregexp_l15160( i15161, c18715 )
        TSCP  i15161, c18715;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15160 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18715, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18715, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18715, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18715, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18715, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18715, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18715, 6 );
        X8 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c18715, 7 );
        X9 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18715, 8 );
        X10 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18715, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18715, 10 );
        X14 = DISPLAY( 9 );
        X14 = UNKNOWNCALL( X14, 1 );
        X13 = VIA( PROCEDURE_CODE( X14 ) )( i15161, 
                                            PROCEDURE_CLOSURE( X14 ) );
        if  ( FALSE( X13 ) )  goto L18718;
        X12 = X13;
        goto L18719;
L18718:
        X15 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X15 ), PAIRTAG ) )  goto L18721;
        scrt1__24__cdr_2derror( X15 );
L18721:
        X14 = PAIR_CDR( X15 );
        X12 = idealib_2dpregexp_l15148( X14 );
L18719:
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 8 ) = X8;
        DISPLAY( 10 ) = X9;
        DISPLAY( 9 ) = X10;
        DISPLAY( 11 ) = X11;
        POPSTACKTRACE( X12 );
}

TSCP  idealib_2dpregexp_l15170( c18723 )
        TSCP  c18723;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15170 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18723, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18723, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18723, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18723, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18723, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18723, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18723, 6 );
        X8 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18723, 7 );
        X9 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c18723, 8 );
        X10 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18723, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18723, 10 );
        X14 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L18726;
        scrt1__24__cdr_2derror( X14 );
L18726:
        X13 = PAIR_CDR( X14 );
        X12 = idealib_2dpregexp_l15148( X13 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 9 ) = X8;
        DISPLAY( 8 ) = X9;
        DISPLAY( 10 ) = X10;
        DISPLAY( 11 ) = X11;
        POPSTACKTRACE( X12 );
}

TSCP  idealib_2dpregexp_l15148( r15150 )
        TSCP  r15150;
{
        TSCP  X3, X2, X1;
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOUP-OR [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        DISPLAY( 11 ) = r15150;
        if  ( NEQ( _S2CUINT( DISPLAY( 11 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L18710;
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
L18710:
        X2 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18713;
        scrt1__24__car_2derror( X2 );
L18713:
        X1 = PAIR_CAR( X2 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15160, 
                            MAKECLOSURE( EMPTYLIST, 
                                         11, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 11 ) ) );
        X3 = MAKEPROCEDURE( 0, 
                            0, 
                            idealib_2dpregexp_l15170, 
                            MAKECLOSURE( EMPTYLIST, 
                                         11, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 11 ) ) );
        SDVAL = idealib_2dpregexp_s14740( X1, 
                                          DISPLAY( 8 ), 
                                          X2, X3 );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( scrt3_substring, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt3_substring_v );

TSCP  idealib_2dpregexp_l15125( i15126, c18751 )
        TSCP  i15126, c18751;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15125 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18751, 0 );
        X3 = DISPLAY( 9 );
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( i15126, 
                                          PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 9 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( scrt1_assv, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_assv_v );

TSCP  idealib_2dpregexp_l15106( i15107, c18762 )
        TSCP  i15107, c18762;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15106 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18762, 0 );
        X2 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c18762, 1 );
        X3 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c18762, 2 );
        X4 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18762, 3 );
        X6 = sc_cons( DISPLAY( 8 ), i15107 );
        X7 = scrt1_assv( DISPLAY( 7 ), DISPLAY( 5 ) );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L18765;
        scdebug_error( c12026, 
                       c12027, CONS( X7, EMPTYLIST ) );
L18765:
        SETGEN( PAIR_CDR( X7 ), X6 );
        X6 = DISPLAY( 9 );
        X6 = UNKNOWNCALL( X6, 1 );
        X5 = VIA( PROCEDURE_CODE( X6 ) )( i15107, 
                                          PROCEDURE_CLOSURE( X6 ) );
        DISPLAY( 5 ) = X1;
        DISPLAY( 7 ) = X2;
        DISPLAY( 8 ) = X3;
        DISPLAY( 9 ) = X4;
        POPSTACKTRACE( X5 );
}

TSCP  idealib_2dpregexp_l15095( c18778 )
        TSCP  c18778;
{
        PUSHSTACKTRACE( "idealib_2dpregexp_l15095 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  idealib_2dpregexp_l15082( c18791 )
        TSCP  c18791;
{
        PUSHSTACKTRACE( "idealib_2dpregexp_l15082 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  idealib_2dpregexp_l15069( c18804 )
        TSCP  c18804;
{
        PUSHSTACKTRACE( "idealib_2dpregexp_l15069 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  idealib_2dpregexp_l15051( c18820 )
        TSCP  c18820;
{
        PUSHSTACKTRACE( "idealib_2dpregexp_l15051 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  idealib_2dpregexp_l15032( c18834 )
        TSCP  c18834;
{
        PUSHSTACKTRACE( "idealib_2dpregexp_l15032 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        POPSTACKTRACE( FALSEVALUE );
}

TSCP  idealib_2dpregexp_l15017( i15018, c18852 )
        TSCP  i15018, c18852;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15017 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18852, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18852, 1 );
        X3 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18852, 2 );
        X5 = DISPLAY( 11 );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X5 );
        X5 = DISPLAY( 9 );
        X5 = UNKNOWNCALL( X5, 1 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( i15018, 
                                          PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 11 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 9 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  idealib_2dpregexp_l15019( c18854 )
        TSCP  c18854;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15019 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18854, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18854, 1 );
        X3 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18854, 2 );
        X5 = DISPLAY( 11 );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X5 );
        X5 = DISPLAY( 10 );
        X5 = UNKNOWNCALL( X5, 0 );
        X4 = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 11 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 10 ) = X3;
        POPSTACKTRACE( X4 );
}

EXTERNTSCPP( scrt1_cadddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cadddr_v );
EXTERNTSCPP( scrt1_cddddr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cddddr_v );
EXTERNTSCPP( idealib_2dpregexp_l14878, XAL2( TSCP, TSCP ) );

TSCP  idealib_2dpregexp_l14959( i14960, c18893 )
        TSCP  i14960, c18893;
{
        TSCP  X19, 
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

        PUSHSTACKTRACE( "idealib_2dpregexp_l14959 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18893, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18893, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18893, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18893, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18893, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18893, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18893, 6 );
        X8 = DISPLAY( 13 );
        DISPLAY( 13 ) = CLOSURE_VAR( c18893, 7 );
        X9 = DISPLAY( 12 );
        DISPLAY( 12 ) = CLOSURE_VAR( c18893, 8 );
        X10 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18893, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18893, 10 );
        X12 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18893, 11 );
        X13 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c18893, 12 );
        X14 = DISPLAY( 17 );
        DISPLAY( 17 ) = CLOSURE_VAR( c18893, 13 );
        X15 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c18893, 14 );
        X16 = DISPLAY( 16 );
        DISPLAY( 16 ) = CLOSURE_VAR( c18893, 15 );
        if  ( FALSE( DISPLAY( 14 ) ) )  goto L18906;
        X18 = DISPLAY( 17 );
        if  ( BITAND( BITOR( _S2CINT( i14960 ), 
                             _S2CINT( X18 ) ), 
                      3 ) )  goto L18899;
        if  ( EQ( _S2CUINT( i14960 ), _S2CUINT( X18 ) ) )  goto L18903;
        goto L18906;
L18899:
        if  ( FALSE( scrt2__3d_2dtwo( i14960, X18 ) ) )  goto L18906;
L18903:
        X19 = CONS( c14937, EMPTYLIST );
        _dpregexp_xp_2derror_eae6b00b( CONS( c14816, X19 ) );
L18906:
        X19 = DISPLAY( 16 );
        if  ( BITAND( BITOR( _S2CINT( X19 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18908;
        X18 = _TSCP( IPLUS( _S2CINT( X19 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L18909;
L18908:
        X18 = scrt2__2b_2dtwo( X19, _TSCP( 4 ) );
L18909:
        X17 = idealib_2dpregexp_l14878( X18, i14960 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 13 ) = X8;
        DISPLAY( 12 ) = X9;
        DISPLAY( 9 ) = X10;
        DISPLAY( 11 ) = X11;
        DISPLAY( 10 ) = X12;
        DISPLAY( 15 ) = X13;
        DISPLAY( 17 ) = X14;
        DISPLAY( 14 ) = X15;
        DISPLAY( 16 ) = X16;
        POPSTACKTRACE( X17 );
}

TSCP  idealib_2dpregexp_f14899( c18920 )
        TSCP  c18920;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "FK [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        X1 = DISPLAY( 20 );
        DISPLAY( 20 ) = CLOSURE_VAR( c18920, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18920, 1 );
        X4 = DISPLAY( 9 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 20 ), 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 20 ) = X1;
        DISPLAY( 9 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( idealib_2dpregexp_l14894, XAL2( TSCP, TSCP ) );

TSCP  idealib_2dpregexp_l14922( i14923, c18940 )
        TSCP  i14923, c18940;
{
        TSCP  X19, 
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

        PUSHSTACKTRACE( "idealib_2dpregexp_l14922 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18940, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18940, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18940, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18940, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18940, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18940, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18940, 6 );
        X8 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18940, 7 );
        X9 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c18940, 8 );
        X10 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18940, 9 );
        X11 = DISPLAY( 18 );
        DISPLAY( 18 ) = CLOSURE_VAR( c18940, 10 );
        X12 = DISPLAY( 20 );
        DISPLAY( 20 ) = CLOSURE_VAR( c18940, 11 );
        X13 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c18940, 12 );
        X14 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c18940, 13 );
        X15 = DISPLAY( 21 );
        DISPLAY( 21 ) = CLOSURE_VAR( c18940, 14 );
        if  ( FALSE( DISPLAY( 14 ) ) )  goto L18953;
        X17 = DISPLAY( 20 );
        if  ( BITAND( BITOR( _S2CINT( i14923 ), 
                             _S2CINT( X17 ) ), 
                      3 ) )  goto L18946;
        if  ( EQ( _S2CUINT( i14923 ), _S2CUINT( X17 ) ) )  goto L18950;
        goto L18953;
L18946:
        if  ( FALSE( scrt2__3d_2dtwo( i14923, X17 ) ) )  goto L18953;
L18950:
        X18 = CONS( c14937, EMPTYLIST );
        _dpregexp_xp_2derror_eae6b00b( CONS( c14816, X18 ) );
L18953:
        X19 = DISPLAY( 19 );
        if  ( BITAND( BITOR( _S2CINT( X19 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18955;
        X18 = _TSCP( IPLUS( _S2CINT( X19 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L18956;
L18955:
        X18 = scrt2__2b_2dtwo( X19, _TSCP( 4 ) );
L18956:
        X17 = idealib_2dpregexp_l14894( X18, i14923 );
        if  ( FALSE( X17 ) )  goto L18958;
        X16 = X17;
        goto L18959;
L18958:
        X16 = idealib_2dpregexp_f14899( PROCEDURE_CLOSURE( DISPLAY( 21 ) ) );
L18959:
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 9 ) = X8;
        DISPLAY( 15 ) = X9;
        DISPLAY( 11 ) = X10;
        DISPLAY( 18 ) = X11;
        DISPLAY( 20 ) = X12;
        DISPLAY( 14 ) = X13;
        DISPLAY( 19 ) = X14;
        DISPLAY( 21 ) = X15;
        POPSTACKTRACE( X16 );
}

TSCP  idealib_2dpregexp_l14914( i14915, c18963 )
        TSCP  i14915, c18963;
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

        PUSHSTACKTRACE( "idealib_2dpregexp_l14914 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18963, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18963, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18963, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18963, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18963, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18963, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18963, 6 );
        X8 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18963, 7 );
        X9 = DISPLAY( 14 );
        DISPLAY( 14 ) = CLOSURE_VAR( c18963, 8 );
        X10 = DISPLAY( 15 );
        DISPLAY( 15 ) = CLOSURE_VAR( c18963, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18963, 10 );
        X12 = DISPLAY( 18 );
        DISPLAY( 18 ) = CLOSURE_VAR( c18963, 11 );
        X13 = DISPLAY( 19 );
        DISPLAY( 19 ) = CLOSURE_VAR( c18963, 12 );
        X16 = DISPLAY( 19 );
        if  ( BITAND( BITOR( _S2CINT( X16 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18966;
        X15 = _TSCP( IPLUS( _S2CINT( X16 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L18967;
L18966:
        X15 = scrt2__2b_2dtwo( X16, _TSCP( 4 ) );
L18967:
        X14 = idealib_2dpregexp_l14894( X15, i14915 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 9 ) = X8;
        DISPLAY( 14 ) = X9;
        DISPLAY( 15 ) = X10;
        DISPLAY( 11 ) = X11;
        DISPLAY( 18 ) = X12;
        DISPLAY( 19 ) = X13;
        POPSTACKTRACE( X14 );
}

TSCP  idealib_2dpregexp_l14894( k14896, i14897 )
        TSCP  k14896, i14897;
{
        TSCP  X3, X2, X1;
        TSCP  SD19 = DISPLAY( 19 );
        TSCP  SD20 = DISPLAY( 20 );
        TSCP  SD21 = DISPLAY( 21 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOUP-Q [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        DISPLAY( 19 ) = k14896;
        DISPLAY( 20 ) = i14897;
        DISPLAY( 21 ) = MAKEPROCEDURE( 0, 
                                       0, 
                                       idealib_2dpregexp_f14899, 
                                       MAKECLOSURE( EMPTYLIST, 
                                                    2, 
                                                    DISPLAY( 20 ), 
                                                    DISPLAY( 9 ) ) );
        X1 = DISPLAY( 18 );
        if  ( FALSE( X1 ) )  goto L18937;
        X2 = DISPLAY( 19 );
        X3 = DISPLAY( 18 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18929;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L18933;
        goto L18937;
L18929:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X3 ) ) )  goto L18937;
L18933:
        SDVAL = idealib_2dpregexp_f14899( PROCEDURE_CLOSURE( DISPLAY( 21 ) ) );
        DISPLAY( 19 ) = SD19;
        DISPLAY( 20 ) = SD20;
        DISPLAY( 21 ) = SD21;
        POPSTACKTRACE( SDVAL );
L18937:
        if  ( FALSE( DISPLAY( 11 ) ) )  goto L18938;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l14922, 
                            MAKECLOSURE( EMPTYLIST, 
                                         15, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 15 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 18 ), 
                                         DISPLAY( 20 ), 
                                         DISPLAY( 14 ), 
                                         DISPLAY( 19 ), 
                                         DISPLAY( 21 ) ) );
        SDVAL = idealib_2dpregexp_s14740( DISPLAY( 15 ), 
                                          DISPLAY( 20 ), 
                                          X1, DISPLAY( 21 ) );
        DISPLAY( 19 ) = SD19;
        DISPLAY( 20 ) = SD20;
        DISPLAY( 21 ) = SD21;
        POPSTACKTRACE( SDVAL );
L18938:
        X1 = idealib_2dpregexp_f14899( PROCEDURE_CLOSURE( DISPLAY( 21 ) ) );
        if  ( TRUE( X1 ) )  goto L18961;
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l14914, 
                            MAKECLOSURE( EMPTYLIST, 
                                         13, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 14 ), 
                                         DISPLAY( 15 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 18 ), 
                                         DISPLAY( 19 ) ) );
        SDVAL = idealib_2dpregexp_s14740( DISPLAY( 15 ), 
                                          DISPLAY( 20 ), 
                                          X2, DISPLAY( 21 ) );
        DISPLAY( 19 ) = SD19;
        DISPLAY( 20 ) = SD20;
        DISPLAY( 21 ) = SD21;
        POPSTACKTRACE( SDVAL );
L18961:
        SDVAL = X1;
        DISPLAY( 19 ) = SD19;
        DISPLAY( 20 ) = SD20;
        DISPLAY( 21 ) = SD21;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dpregexp_l14878( k14880, i14881 )
        TSCP  k14880, i14881;
{
        TSCP  X3, X2, X1;
        TSCP  SD16 = DISPLAY( 16 );
        TSCP  SD17 = DISPLAY( 17 );
        TSCP  SD18 = DISPLAY( 18 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOUP-P [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        DISPLAY( 16 ) = k14880;
        DISPLAY( 17 ) = i14881;
        X1 = DISPLAY( 16 );
        X2 = DISPLAY( 12 );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18885;
        if  ( LT( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L18889;
        goto L18890;
L18885:
        if  ( FALSE( scrt2__3c_2dtwo( X1, X2 ) ) )  goto L18890;
L18889:
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l14959, 
                            MAKECLOSURE( EMPTYLIST, 
                                         16, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 13 ), 
                                         DISPLAY( 12 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 15 ), 
                                         DISPLAY( 17 ), 
                                         DISPLAY( 14 ), 
                                         DISPLAY( 16 ) ) );
        SDVAL = idealib_2dpregexp_s14740( DISPLAY( 15 ), 
                                          DISPLAY( 17 ), 
                                          X1, DISPLAY( 10 ) );
        DISPLAY( 16 ) = SD16;
        DISPLAY( 17 ) = SD17;
        DISPLAY( 18 ) = SD18;
        POPSTACKTRACE( SDVAL );
L18890:
        X1 = DISPLAY( 13 );
        if  ( FALSE( X1 ) )  goto L18911;
        X2 = DISPLAY( 12 );
        X3 = DISPLAY( 13 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18914;
        DISPLAY( 18 ) = _TSCP( IDIFFERENCE( _S2CINT( X3 ), 
                                            _S2CINT( X2 ) ) );
        goto L18912;
L18914:
        DISPLAY( 18 ) = scrt2__2d_2dtwo( X3, X2 );
        goto L18912;
L18911:
        DISPLAY( 18 ) = X1;
L18912:
        X1 = DISPLAY( 17 );
        SDVAL = idealib_2dpregexp_l14894( _TSCP( 0 ), X1 );
        DISPLAY( 16 ) = SD16;
        DISPLAY( 17 ) = SD17;
        DISPLAY( 18 ) = SD18;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( idealib_2dpregexp_l15240, XAL1( TSCP ) );

TSCP  idealib_2dpregexp_l15252( c18989 )
        TSCP  c18989;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15252 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c18989, 0 );
        X2 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c18989, 1 );
        X3 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c18989, 2 );
        X4 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c18989, 3 );
        X5 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c18989, 4 );
        X6 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c18989, 5 );
        X7 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c18989, 6 );
        X8 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c18989, 7 );
        X9 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c18989, 8 );
        X10 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c18989, 9 );
        X11 = DISPLAY( 11 );
        DISPLAY( 11 ) = CLOSURE_VAR( c18989, 10 );
        X14 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L18992;
        scrt1__24__cdr_2derror( X14 );
L18992:
        X13 = PAIR_CDR( X14 );
        X12 = idealib_2dpregexp_l15240( X13 );
        DISPLAY( 1 ) = X1;
        DISPLAY( 6 ) = X2;
        DISPLAY( 5 ) = X3;
        DISPLAY( 4 ) = X4;
        DISPLAY( 0 ) = X5;
        DISPLAY( 3 ) = X6;
        DISPLAY( 2 ) = X7;
        DISPLAY( 9 ) = X8;
        DISPLAY( 8 ) = X9;
        DISPLAY( 10 ) = X10;
        DISPLAY( 11 ) = X11;
        POPSTACKTRACE( X12 );
}

TSCP  idealib_2dpregexp_l15240( c15242 )
        TSCP  c15242;
{
        TSCP  X2, X1;
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "LOUP-ONE-OF-CHARS [inside PREGEXP-MATCH-POSITIONS-A\
UX]" );
        DISPLAY( 11 ) = c15242;
        if  ( NEQ( _S2CUINT( DISPLAY( 11 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L18984;
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
L18984:
        X2 = DISPLAY( 11 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18987;
        scrt1__24__car_2derror( X2 );
L18987:
        X1 = PAIR_CAR( X2 );
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            idealib_2dpregexp_l15252, 
                            MAKECLOSURE( EMPTYLIST, 
                                         11, 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 9 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 10 ), 
                                         DISPLAY( 11 ) ) );
        SDVAL = idealib_2dpregexp_s14740( X1, 
                                          DISPLAY( 8 ), 
                                          DISPLAY( 9 ), X2 );
        DISPLAY( 11 ) = SD11;
        POPSTACKTRACE( SDVAL );
}

TSCP  idealib_2dpregexp_l15222( i15223, c19001 )
        TSCP  i15223, c19001;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15222 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 10 );
        DISPLAY( 10 ) = CLOSURE_VAR( c19001, 0 );
        X3 = DISPLAY( 10 );
        X3 = UNKNOWNCALL( X3, 0 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 10 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  idealib_2dpregexp_l15224( c19003 )
        TSCP  c19003;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "idealib_2dpregexp_l15224 [inside PREGEXP-MATCH-POSI\
TIONS-AUX]" );
        X1 = DISPLAY( 8 );
        DISPLAY( 8 ) = CLOSURE_VAR( c19003, 0 );
        X2 = DISPLAY( 9 );
        DISPLAY( 9 ) = CLOSURE_VAR( c19003, 1 );
        X6 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19006;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19007;
L19006:
        X5 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L19007:
        X4 = DISPLAY( 9 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 8 ) = X1;
        DISPLAY( 9 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  idealib_2dpregexp_s14740( r14742, i14743, s14744, f14745 )
        TSCP  r14742, i14743, s14744, f14745;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SD8 = DISPLAY( 8 );
        TSCP  SD9 = DISPLAY( 9 );
        TSCP  SD10 = DISPLAY( 10 );
        TSCP  SD11 = DISPLAY( 11 );
        TSCP  SD12 = DISPLAY( 12 );
        TSCP  SD13 = DISPLAY( 13 );
        TSCP  SD14 = DISPLAY( 14 );
        TSCP  SD15 = DISPLAY( 15 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "SUB [inside PREGEXP-MATCH-POSITIONS-AUX]" );
        DISPLAY( 7 ) = r14742;
        DISPLAY( 8 ) = i14743;
        DISPLAY( 9 ) = s14744;
        DISPLAY( 10 ) = f14745;
L18459:
        if  ( NOT( OR( EQ( _S2CUINT( DISPLAY( 7 ) ), 
                           _S2CUINT( c12562 ) ), 
                       AND( EQ( TSCPTAG( DISPLAY( 7 ) ), 
                                EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( DISPLAY( 7 ) ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c12562 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c12562 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( DISPLAY( 7 ) ), 
                                               FLOAT_VALUE( c12562 ) ) ) ) ) ) ) )
            )  goto L18460;
        X1 = DISPLAY( 2 );
        X2 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L18464;
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( X1 ) ) )  goto L18468;
        goto L18469;
L18464:
        if  ( TRUE( scrt2__3d_2dtwo( X2, X1 ) ) )  goto L18468;
        goto L18469;
L18460:
        if  ( NOT( OR( EQ( _S2CUINT( DISPLAY( 7 ) ), 
                           _S2CUINT( c12553 ) ), 
                       AND( EQ( TSCPTAG( DISPLAY( 7 ) ), 
                                EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( DISPLAY( 7 ) ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c12553 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c12553 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( DISPLAY( 7 ) ), 
                                               FLOAT_VALUE( c12553 ) ) ) ) ) ) ) )
            )  goto L18472;
        X1 = DISPLAY( 8 );
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18476;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L18480;
        goto L18481;
L18476:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X1, X2 ) ) )  goto L18480;
        goto L18481;
L18472:
        if  ( NOT( OR( EQ( _S2CUINT( DISPLAY( 7 ) ), 
                           _S2CUINT( c12349 ) ), 
                       AND( EQ( TSCPTAG( DISPLAY( 7 ) ), 
                                EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( DISPLAY( 7 ) ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c12349 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c12349 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( DISPLAY( 7 ) ), 
                                               FLOAT_VALUE( c12349 ) ) ) ) ) ) ) )
            )  goto L18484;
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18484:
        if  ( NOT( OR( EQ( _S2CUINT( DISPLAY( 7 ) ), 
                           _S2CUINT( c12876 ) ), 
                       AND( EQ( TSCPTAG( DISPLAY( 7 ) ), 
                                EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( DISPLAY( 7 ) ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c12876 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c12876 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( DISPLAY( 7 ) ), 
                                               FLOAT_VALUE( c12876 ) ) ) ) ) ) ) )
            )  goto L18486;
        if  ( FALSE( _dpregexp_oundary_3f_fa13e7c5( DISPLAY( 0 ), 
                                                    DISPLAY( 8 ), 
                                                    PAIR_CAR( DISPLAY( 3 ) ) ) )
            )  goto L18488;
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18488:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18486:
        if  ( NOT( OR( EQ( _S2CUINT( DISPLAY( 7 ) ), 
                           _S2CUINT( c12867 ) ), 
                       AND( EQ( TSCPTAG( DISPLAY( 7 ) ), 
                                EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( DISPLAY( 7 ) ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c12867 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c12867 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( DISPLAY( 7 ) ), 
                                               FLOAT_VALUE( c12867 ) ) ) ) ) ) ) )
            )  goto L18490;
        if  ( FALSE( _dpregexp_oundary_3f_fa13e7c5( DISPLAY( 0 ), 
                                                    DISPLAY( 8 ), 
                                                    PAIR_CAR( DISPLAY( 3 ) ) ) )
            )  goto L18492;
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18492:
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18490:
        X1 = BOOLEAN( EQ( TSCPIMMEDIATETAG( DISPLAY( 7 ) ), 
                          CHARACTERTAG ) );
        if  ( FALSE( X1 ) )  goto L18508;
        X2 = DISPLAY( 8 );
        X3 = PAIR_CAR( DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18500;
        if  ( LT( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L18504;
        goto L18508;
L18500:
        if  ( TRUE( scrt2__3c_2dtwo( X2, X3 ) ) )  goto L18504;
        goto L18508;
L18469:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18468:
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18480:
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18481:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18504:
        X3 = DISPLAY( 8 );
        X4 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L18512;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L18512:
        X5 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L18518;
        if  ( AND( EQ( TSCPTAG( X4 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X4 ), STRINGTAG ) ) )  goto L18520;
        scdebug_error( c12125, 
                       c12126, CONS( X4, EMPTYLIST ) );
L18520:
        X6 = C_FIXED( STRING_LENGTH( X4 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L18524;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X6 ) ) )  goto L18518;
        goto L18531;
L18524:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X6 ) ) )  goto L18531;
L18518:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L18531:
        X2 = C_CHAR( STRING_CHAR( X4, X3 ) );
        if  ( FALSE( PAIR_CAR( DISPLAY( 4 ) ) ) )  goto L18532;
        X1 = scrt3_char_3d_3f_v;
        goto L18533;
L18532:
        X1 = scrt3_char_2dci_3d_3f_v;
L18533:
        X1 = UNKNOWNCALL( X1, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                                  DISPLAY( 7 ), 
                                                  PROCEDURE_CLOSURE( X1 ) ) )
            )  goto L18509;
        X3 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18535;
        X2 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18536;
L18535:
        X2 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L18536:
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18509:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18508:
        X1 = BOOLEAN( NEQ( TSCPTAG( DISPLAY( 7 ) ), 
                           PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L18551;
        X2 = DISPLAY( 8 );
        X3 = PAIR_CAR( DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18543;
        if  ( LT( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L18547;
        goto L18551;
L18543:
        if  ( FALSE( scrt2__3c_2dtwo( X2, X3 ) ) )  goto L18551;
L18547:
        X2 = DISPLAY( 8 );
        X3 = DISPLAY( 0 );
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L18555;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L18555:
        X4 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L18561;
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), STRINGTAG ) ) )  goto L18563;
        scdebug_error( c12125, 
                       c12126, CONS( X3, EMPTYLIST ) );
L18563:
        X5 = C_FIXED( STRING_LENGTH( X3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L18567;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X5 ) ) )  goto L18561;
        goto L18574;
L18567:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X5 ) ) )  goto L18574;
L18561:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L18574:
        X1 = C_CHAR( STRING_CHAR( X3, X2 ) );
        if  ( FALSE( _dpregexp_2dclass_3f_a6bca49b( X1, 
                                                    DISPLAY( 7 ) ) )
            )  goto L18552;
        X3 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18576;
        X2 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18577;
L18576:
        X2 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L18577:
        X1 = DISPLAY( 9 );
        X1 = UNKNOWNCALL( X1, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( X2, 
                                             PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18552:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18551:
        X1 = BOOLEAN( EQ( TSCPTAG( DISPLAY( 7 ) ), PAIRTAG ) );
        if  ( FALSE( X1 ) )  goto L18599;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18586;
        scrt1__24__car_2derror( X3 );
L18586:
        X2 = PAIR_CAR( X3 );
        if  ( NOT( OR( EQ( _S2CUINT( X2 ), 
                           _S2CUINT( c14113 ) ), 
                       AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                            AND( EQ( TSCP_EXTENDEDTAG( X2 ), 
                                     DOUBLEFLOATTAG ), 
                                 AND( EQ( TSCPTAG( c14113 ), 
                                          EXTENDEDTAG ), 
                                      AND( EQ( TSCP_EXTENDEDTAG( c14113 ), 
                                               DOUBLEFLOATTAG ), 
                                           EQ( FLOAT_VALUE( X2 ), 
                                               FLOAT_VALUE( c14113 ) ) ) ) ) ) ) )
            )  goto L18599;
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        X3 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18590;
        if  ( LT( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L18594;
        goto L18599;
L18590:
        if  ( FALSE( scrt2__3c_2dtwo( X3, X2 ) ) )  goto L18599;
L18594:
        X2 = DISPLAY( 0 );
        X3 = DISPLAY( 8 );
        if  ( EQ( TSCPTAG( X3 ), FIXNUMTAG ) )  goto L18601;
        scdebug_error( c12103, 
                       c12104, CONS( X3, EMPTYLIST ) );
L18601:
        X4 = BOOLEAN( LT( _S2CINT( X3 ), 0 ) );
        if  ( TRUE( X4 ) )  goto L18607;
        if  ( AND( EQ( TSCPTAG( X2 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X2 ), STRINGTAG ) ) )  goto L18609;
        scdebug_error( c12125, 
                       c12126, CONS( X2, EMPTYLIST ) );
L18609:
        X5 = C_FIXED( STRING_LENGTH( X2 ) );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X5 ) ), 
                      3 ) )  goto L18613;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X5 ) ) )  goto L18607;
        goto L18620;
L18613:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X3, X5 ) ) )  goto L18620;
L18607:
        scdebug_error( c12103, 
                       c12127, CONS( X3, EMPTYLIST ) );
L18620:
        X1 = C_CHAR( STRING_CHAR( X2, X3 ) );
        if  ( FALSE( PAIR_CAR( DISPLAY( 4 ) ) ) )  goto L18622;
        X2 = scrt3_char_3c_3d_3f_v;
        goto L18623;
L18622:
        X2 = scrt3_char_2dci_3c_3d_3f_v;
L18623:
        X6 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X6 ), PAIRTAG ) )  goto L18627;
        scrt1__24__cdr_2derror( X6 );
L18627:
        X7 = PAIR_CDR( X6 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L18630;
        scrt1__24__car_2derror( X7 );
L18630:
        X5 = PAIR_CAR( X7 );
        X4 = X2;
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          X1, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( FALSE( X3 ) )  goto L18641;
        X5 = scrt1_caddr( DISPLAY( 7 ) );
        X4 = X2;
        X4 = UNKNOWNCALL( X4, 2 );
        if  ( FALSE( VIA( PROCEDURE_CODE( X4 ) )( X1, 
                                                  X5, 
                                                  PROCEDURE_CLOSURE( X4 ) ) )
            )  goto L18641;
        X6 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L18639;
        X5 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L18640;
L18639:
        X5 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L18640:
        X4 = DISPLAY( 9 );
        X4 = UNKNOWNCALL( X4, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                             PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18641:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18599:
        if  ( NEQ( TSCPTAG( DISPLAY( 7 ) ), PAIRTAG ) )  goto L18642;
        X2 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18645;
        scrt1__24__car_2derror( X2 );
L18645:
        X1 = PAIR_CAR( X2 );
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14113 ) ) )  goto L18648;
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        X3 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18652;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L18656;
        goto L18657;
L18652:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X3, X2 ) ) )  goto L18656;
        goto L18657;
L18648:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14189 ) ) )  goto L18660;
        X2 = DISPLAY( 8 );
        X3 = PAIR_CAR( DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L18664;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X3 ) ) )  goto L18668;
        goto L18669;
L18664:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, X3 ) ) )  goto L18668;
        goto L18669;
L18660:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12479 ) ) )  goto L18672;
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        X3 = DISPLAY( 8 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18676;
        if  ( GTE( _S2CINT( X3 ), _S2CINT( X2 ) ) )  goto L18680;
        goto L18681;
L18676:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X3, X2 ) ) )  goto L18680;
        goto L18681;
L18672:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12194 ) ) )  goto L18684;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18687;
        scrt1__24__cdr_2derror( X3 );
L18687:
        X2 = PAIR_CDR( X3 );
        X3 = DISPLAY( 8 );
        SDVAL = idealib_2dpregexp_l15183( X2, X3 );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18684:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12187 ) ) )  goto L18702;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18705;
        scrt1__24__cdr_2derror( X3 );
L18705:
        X2 = PAIR_CDR( X3 );
        SDVAL = idealib_2dpregexp_l15148( X2 );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18702:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c12442 ) ) )  goto L18728;
        X4 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18732;
        scrt1__24__cdr_2derror( X4 );
L18732:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L18735;
        scrt1__24__car_2derror( X5 );
L18735:
        X3 = PAIR_CAR( X5 );
        X2 = _dpregexp_list_2dref_27168dd8( DISPLAY( 5 ), X3 );
        if  ( FALSE( X2 ) )  goto L18738;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18741;
        scrt1__24__cdr_2derror( X2 );
L18741:
        X3 = PAIR_CDR( X2 );
        goto L18739;
L18738:
        X4 = CONS( DISPLAY( 7 ), EMPTYLIST );
        X4 = CONS( c15130, X4 );
        _dpregexp_xp_2derror_eae6b00b( CONS( c14816, X4 ) );
        X3 = FALSEVALUE;
L18739:
        if  ( FALSE( X3 ) )  goto L18745;
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18748;
        scrt1__24__car_2derror( X3 );
L18748:
        X5 = PAIR_CAR( X3 );
        X6 = PAIR_CDR( X3 );
        X4 = scrt3_substring( DISPLAY( 0 ), X5, X6 );
        X5 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15125, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 9 ) ) );
        SDVAL = _dpregexp_ng_2dmatch_cc5a26b9( X4, 
                                               DISPLAY( 0 ), 
                                               DISPLAY( 8 ), 
                                               PAIR_CAR( DISPLAY( 3 ) ), 
                                               X5, DISPLAY( 10 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18745:
        X4 = DISPLAY( 9 );
        X4 = UNKNOWNCALL( X4, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X4 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18728:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14712 ) ) )  goto L18753;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18757;
        scrt1__24__cdr_2derror( X3 );
L18757:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18760;
        scrt1__24__car_2derror( X4 );
L18760:
        X2 = PAIR_CAR( X4 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15106, 
                            MAKECLOSURE( EMPTYLIST, 
                                         4, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 8 ), 
                                         DISPLAY( 9 ) ) );
        DISPLAY( 9 ) = X3;
        DISPLAY( 7 ) = X2;
        GOBACK( L18459 );
L18753:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14843 ) ) )  goto L18767;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18773;
        scrt1__24__cdr_2derror( X3 );
L18773:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18776;
        scrt1__24__car_2derror( X4 );
L18776:
        X2 = PAIR_CAR( X4 );
        X3 = MAKEPROCEDURE( 0, 
                            0, idealib_2dpregexp_l15095, EMPTYLIST );
        if  ( FALSE( idealib_2dpregexp_s14740( X2, 
                                               DISPLAY( 8 ), 
                                               DISPLAY( 6 ), X3 ) )
            )  goto L18769;
        X2 = DISPLAY( 9 );
        X2 = UNKNOWNCALL( X2, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X2 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18769:
        X2 = DISPLAY( 10 );
        X2 = UNKNOWNCALL( X2, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18767:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14847 ) ) )  goto L18780;
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18786;
        scrt1__24__cdr_2derror( X3 );
L18786:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18789;
        scrt1__24__car_2derror( X4 );
L18789:
        X2 = PAIR_CAR( X4 );
        X3 = MAKEPROCEDURE( 0, 
                            0, idealib_2dpregexp_l15082, EMPTYLIST );
        if  ( FALSE( idealib_2dpregexp_s14740( X2, 
                                               DISPLAY( 8 ), 
                                               DISPLAY( 6 ), X3 ) )
            )  goto L18782;
        X2 = DISPLAY( 10 );
        X2 = UNKNOWNCALL( X2, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X2 ) )( PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18782:
        X2 = DISPLAY( 9 );
        X2 = UNKNOWNCALL( X2, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X2 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X2 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18780:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14851 ) ) )  goto L18793;
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        X3 = PAIR_CAR( DISPLAY( 1 ) );
        X4 = DISPLAY( 8 );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X4 );
        X4 = DISPLAY( 8 );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X4 );
        X10 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L18798;
        scrt1__24__cdr_2derror( X10 );
L18798:
        X11 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L18801;
        scrt1__24__car_2derror( X11 );
L18801:
        X9 = PAIR_CAR( X11 );
        X10 = sc_cons( c12553, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X7 = sc_cons( c15040, X8 );
        X6 = sc_cons( c12194, X7 );
        X5 = X6;
        X6 = MAKEPROCEDURE( 0, 
                            0, idealib_2dpregexp_l15069, EMPTYLIST );
        X4 = idealib_2dpregexp_s14740( X5, 
                                       _TSCP( 0 ), 
                                       DISPLAY( 6 ), X6 );
        X5 = X2;
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X5 );
        X5 = X3;
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X5 );
        if  ( FALSE( X4 ) )  goto L18807;
        X5 = DISPLAY( 9 );
        X5 = UNKNOWNCALL( X5, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18807:
        X5 = DISPLAY( 10 );
        X5 = UNKNOWNCALL( X5, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18793:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14855 ) ) )  goto L18809;
        X2 = PAIR_CAR( DISPLAY( 1 ) );
        X3 = PAIR_CAR( DISPLAY( 3 ) );
        X4 = DISPLAY( 8 );
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X4 );
        X4 = DISPLAY( 8 );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X4 );
        X10 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X10 ), PAIRTAG ) )  goto L18814;
        scrt1__24__cdr_2derror( X10 );
L18814:
        X11 = PAIR_CDR( X10 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L18817;
        scrt1__24__car_2derror( X11 );
L18817:
        X9 = PAIR_CAR( X11 );
        X10 = sc_cons( c12553, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X7 = sc_cons( c15040, X8 );
        X6 = sc_cons( c12194, X7 );
        X5 = X6;
        X6 = MAKEPROCEDURE( 0, 
                            0, idealib_2dpregexp_l15051, EMPTYLIST );
        X4 = idealib_2dpregexp_s14740( X5, 
                                       _TSCP( 0 ), 
                                       DISPLAY( 6 ), X6 );
        X5 = X3;
        SETGEN( PAIR_CAR( DISPLAY( 3 ) ), X5 );
        X5 = X2;
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X5 );
        if  ( FALSE( X4 ) )  goto L18823;
        X5 = DISPLAY( 10 );
        X5 = UNKNOWNCALL( X5, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X5 ) )( PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18823:
        X5 = DISPLAY( 9 );
        X5 = UNKNOWNCALL( X5, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X5 ) )( DISPLAY( 8 ), 
                                             PROCEDURE_CLOSURE( X5 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18809:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c14859 ) ) )  goto L18825;
        X4 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18829;
        scrt1__24__cdr_2derror( X4 );
L18829:
        X5 = PAIR_CDR( X4 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L18832;
        scrt1__24__car_2derror( X5 );
L18832:
        X3 = PAIR_CAR( X5 );
        X4 = MAKEPROCEDURE( 0, 
                            0, idealib_2dpregexp_l15032, EMPTYLIST );
        X2 = idealib_2dpregexp_s14740( X3, 
                                       DISPLAY( 8 ), 
                                       DISPLAY( 6 ), X4 );
        if  ( FALSE( X2 ) )  goto L18837;
        X3 = DISPLAY( 9 );
        X3 = UNKNOWNCALL( X3, 1 );
        SDVAL = VIA( PROCEDURE_CODE( X3 ) )( X2, 
                                             PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18837:
        X3 = DISPLAY( 10 );
        X3 = UNKNOWNCALL( X3, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18825:
        if  ( FALSE( scrt1_memv( X1, c14860 ) ) )  goto L18839;
        DISPLAY( 11 ) = PAIR_CAR( DISPLAY( 4 ) );
        X4 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18843;
        scrt1__24__car_2derror( X4 );
L18843:
        X3 = PAIR_CAR( X4 );
        X2 = BOOLEAN( OR( EQ( _S2CUINT( X3 ), 
                              _S2CUINT( c13152 ) ), 
                          AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                               AND( EQ( TSCP_EXTENDEDTAG( X3 ), 
                                        DOUBLEFLOATTAG ), 
                                    AND( EQ( TSCPTAG( c13152 ), 
                                             EXTENDEDTAG ), 
                                         AND( EQ( TSCP_EXTENDEDTAG( c13152 ), 
                                                  DOUBLEFLOATTAG ), 
                                              EQ( FLOAT_VALUE( X3 ), 
                                                  FLOAT_VALUE( c13152 ) ) ) ) ) ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 4 ) ), X2 );
        X3 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18847;
        scrt1__24__cdr_2derror( X3 );
L18847:
        X4 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L18850;
        scrt1__24__car_2derror( X4 );
L18850:
        X2 = PAIR_CAR( X4 );
        X3 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15017, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 11 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 9 ) ) );
        DISPLAY( 10 ) = MAKEPROCEDURE( 0, 
                                       0, 
                                       idealib_2dpregexp_l15019, 
                                       MAKECLOSURE( EMPTYLIST, 
                                                    3, 
                                                    DISPLAY( 11 ), 
                                                    DISPLAY( 4 ), 
                                                    DISPLAY( 10 ) ) );
        DISPLAY( 9 ) = X3;
        DISPLAY( 7 ) = X2;
        GOBACK( L18459 );
L18839:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( c13730 ) ) )  goto L18856;
        X2 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18860;
        scrt1__24__cdr_2derror( X2 );
L18860:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18863;
        scrt1__24__car_2derror( X3 );
L18863:
        if  ( FALSE( PAIR_CAR( X3 ) ) )  goto L18865;
        DISPLAY( 11 ) = FALSEVALUE;
        goto L18866;
L18865:
        DISPLAY( 11 ) = TRUEVALUE;
L18866:
        DISPLAY( 12 ) = scrt1_caddr( DISPLAY( 7 ) );
        DISPLAY( 13 ) = scrt1_cadddr( DISPLAY( 7 ) );
        X2 = DISPLAY( 11 );
        if  ( FALSE( X2 ) )  goto L18871;
        if  ( FALSE( DISPLAY( 13 ) ) )  goto L18873;
        DISPLAY( 14 ) = FALSEVALUE;
        goto L18872;
L18873:
        DISPLAY( 14 ) = TRUEVALUE;
        goto L18872;
L18871:
        DISPLAY( 14 ) = X2;
L18872:
        X2 = scrt1_cddddr( DISPLAY( 7 ) );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18877;
        scrt1__24__car_2derror( X2 );
L18877:
        DISPLAY( 15 ) = PAIR_CAR( X2 );
        X2 = DISPLAY( 8 );
        SDVAL = idealib_2dpregexp_l14878( _TSCP( 0 ), X2 );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18856:
        SDVAL = _dpregexp_xp_2derror_eae6b00b( CONS( c14816, EMPTYLIST ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18642:
        X1 = DISPLAY( 8 );
        X2 = PAIR_CAR( DISPLAY( 3 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L18970;
        if  ( GTE( _S2CINT( X1 ), _S2CINT( X2 ) ) )  goto L18974;
        goto L18975;
L18970:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X1, X2 ) ) )  goto L18974;
        goto L18975;
L18657:
        SDVAL = _dpregexp_xp_2derror_eae6b00b( CONS( c14816, EMPTYLIST ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18656:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18668:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18669:
        X2 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18979;
        scrt1__24__cdr_2derror( X2 );
L18979:
        X1 = PAIR_CDR( X2 );
        SDVAL = idealib_2dpregexp_l15240( X1 );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18681:
        X2 = DISPLAY( 7 );
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L18996;
        scrt1__24__cdr_2derror( X2 );
L18996:
        X3 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L18999;
        scrt1__24__car_2derror( X3 );
L18999:
        X1 = PAIR_CAR( X3 );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            idealib_2dpregexp_l15222, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 10 ) ) );
        DISPLAY( 10 ) = MAKEPROCEDURE( 0, 
                                       0, 
                                       idealib_2dpregexp_l15224, 
                                       MAKECLOSURE( EMPTYLIST, 
                                                    2, 
                                                    DISPLAY( 8 ), 
                                                    DISPLAY( 9 ) ) );
        DISPLAY( 9 ) = X2;
        DISPLAY( 7 ) = X1;
        GOBACK( L18459 );
L18680:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18974:
        X1 = DISPLAY( 10 );
        X1 = UNKNOWNCALL( X1, 0 );
        SDVAL = VIA( PROCEDURE_CODE( X1 ) )( PROCEDURE_CLOSURE( X1 ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
L18975:
        SDVAL = _dpregexp_xp_2derror_eae6b00b( CONS( c14816, EMPTYLIST ) );
        DISPLAY( 7 ) = SD7;
        DISPLAY( 8 ) = SD8;
        DISPLAY( 9 ) = SD9;
        DISPLAY( 10 ) = SD10;
        DISPLAY( 11 ) = SD11;
        DISPLAY( 12 ) = SD12;
        DISPLAY( 13 ) = SD13;
        DISPLAY( 14 ) = SD14;
        DISPLAY( 15 ) = SD15;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( scrt1_cdr, XAL1( TSCP ) );
EXTERNTSCP( scrt1_cdr_v );

TSCP  _dpregexp_ions_2daux_dbab67e7( r14724, 
                                     s14725, 
                                     s14726, 
                                     s14727, n14728, i14729 )
        TSCP  r14724, 
              s14725, s14726, s14727, n14728, i14729;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t18450 );
        DISPLAY( 0 ) = s14725;
        DISPLAY( 1 ) = s14726;
        DISPLAY( 2 ) = s14727;
        DISPLAY( 3 ) = n14728;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        DISPLAY( 3 ) = CONS( DISPLAY( 3 ), EMPTYLIST );
        DISPLAY( 4 ) = TRUEVALUE;
        DISPLAY( 5 ) = _dpregexp_ref_2dlist_799d8334( r14724 );
        DISPLAY( 6 ) = MAKEPROCEDURE( 1, 
                                      0, 
                                      idealib_2dpregexp_i14731, 
                                      EMPTYLIST );
        DISPLAY( 4 ) = CONS( DISPLAY( 4 ), EMPTYLIST );
        X1 = DISPLAY( 6 );
        X2 = MAKEPROCEDURE( 0, 
                            0, 
                            idealib_2dpregexp__2414738, EMPTYLIST );
        idealib_2dpregexp_s14740( r14724, i14729, X1, X2 );
        X2 = DISPLAY( 5 );
        X3 = X2;
        X4 = EMPTYLIST;
        X5 = EMPTYLIST;
L19010:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L19011;
        X1 = X4;
        goto L19018;
L19011:
        if  ( EQ( TSCPTAG( X3 ), PAIRTAG ) )  goto L19014;
        scrt1__24__car_2derror( X3 );
L19014:
        X8 = PAIR_CAR( X3 );
        X7 = scrt1_cdr( X8 );
        X6 = sc_cons( X7, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X4 ), _S2CUINT( EMPTYLIST ) ) )  goto L19017;
        X7 = PAIR_CDR( X3 );
        X5 = X6;
        X4 = X6;
        X3 = X7;
        GOBACK( L19010 );
L19017:
        X7 = PAIR_CDR( X3 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19022;
        scdebug_error( c12026, 
                       c12027, CONS( X5, EMPTYLIST ) );
L19022:
        X5 = SETGEN( PAIR_CDR( X5 ), X6 );
        X3 = X7;
        GOBACK( L19010 );
L19018:
        if  ( EQ( TSCPTAG( X1 ), PAIRTAG ) )  goto L19026;
        scrt1__24__car_2derror( X1 );
L19026:
        X2 = PAIR_CAR( X1 );
        if  ( TRUE( X2 ) )  goto L19029;
        SDVAL = X2;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
L19029:
        SDVAL = X1;
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( _dpregexp_lace_2daux_18908cb0_v );
DEFCSTRING( t19031, "PREGEXP-REPLACE-AUX" );
EXTERNTSCP( sc_emptystring );
EXTERNTSCPP( scrt3_string_2dappend, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_2dappend_v );
EXTERNTSCPP( scrt3_string, XAL1( TSCP ) );
EXTERNTSCP( scrt3_string_v );

TSCP  _dpregexp_lace_2daux_18908cb0( s15454, 
                                     i15455, n15456, b15457 )
        TSCP  s15454, i15455, n15456, b15457;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19031 );
        X1 = sc_emptystring;
        X2 = _TSCP( 0 );
        X3 = X1;
L19035:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( n15456 ) ), 
                      3 ) )  goto L19037;
        if  ( LT( _S2CINT( X2 ), _S2CINT( n15456 ) ) )  goto L19041;
        POPSTACKTRACE( X3 );
L19037:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, n15456 ) ) )  goto L19041;
        POPSTACKTRACE( X3 );
L19041:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L19045;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L19045:
        X5 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X5 ) )  goto L19051;
        if  ( AND( EQ( TSCPTAG( i15455 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i15455 ), STRINGTAG ) )
            )  goto L19053;
        scdebug_error( c12125, 
                       c12126, CONS( i15455, EMPTYLIST ) );
L19053:
        X6 = C_FIXED( STRING_LENGTH( i15455 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L19057;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X6 ) ) )  goto L19051;
        goto L19064;
L19057:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X6 ) ) )  goto L19064;
L19051:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L19064:
        X4 = C_CHAR( STRING_CHAR( i15455, X2 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X4 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 23570 ) ), 
                       CHARACTERTAG ) ) )  goto L19067;
        X5 = CONS( _TSCP( 23570 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X4, X5 ) );
L19067:
        if  ( NEQ( _S2CINT( X4 ), 
                   _S2CINT( _TSCP( 23570 ) ) ) )  goto L19069;
        X5 = _dpregexp_d_2dnumber_65a1f042( i15455, X2, n15456 );
        if  ( FALSE( X5 ) )  goto L19072;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19075;
        scrt1__24__car_2derror( X5 );
L19075:
        X6 = PAIR_CAR( X5 );
        goto L19104;
L19072:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19077;
        X8 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19078;
L19077:
        X8 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L19078:
        if  ( EQ( TSCPTAG( X8 ), FIXNUMTAG ) )  goto L19080;
        scdebug_error( c12103, 
                       c12104, CONS( X8, EMPTYLIST ) );
L19080:
        X9 = BOOLEAN( LT( _S2CINT( X8 ), 0 ) );
        if  ( TRUE( X9 ) )  goto L19086;
        if  ( AND( EQ( TSCPTAG( i15455 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i15455 ), STRINGTAG ) )
            )  goto L19088;
        scdebug_error( c12125, 
                       c12126, CONS( i15455, EMPTYLIST ) );
L19088:
        X10 = C_FIXED( STRING_LENGTH( i15455 ) );
        if  ( BITAND( BITOR( _S2CINT( X8 ), _S2CINT( X10 ) ), 
                      3 ) )  goto L19092;
        if  ( GTE( _S2CINT( X8 ), _S2CINT( X10 ) ) )  goto L19086;
        goto L19099;
L19092:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X8, X10 ) ) )  goto L19099;
L19086:
        scdebug_error( c12103, 
                       c12127, CONS( X8, EMPTYLIST ) );
L19099:
        X7 = C_CHAR( STRING_CHAR( i15455, X8 ) );
        if  ( AND( EQ( TSCPIMMEDIATETAG( X7 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 9746 ) ), 
                       CHARACTERTAG ) ) )  goto L19101;
        X8 = CONS( _TSCP( 9746 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X7, X8 ) );
L19101:
        if  ( NEQ( _S2CINT( X7 ), _S2CINT( _TSCP( 9746 ) ) ) )  goto L19103;
        X6 = _TSCP( 0 );
        goto L19104;
L19103:
        X6 = FALSEVALUE;
L19104:
        if  ( FALSE( X5 ) )  goto L19106;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19109;
        scrt1__24__cdr_2derror( X5 );
L19109:
        X8 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19112;
        scrt1__24__car_2derror( X8 );
L19112:
        X7 = PAIR_CAR( X8 );
        goto L19119;
L19106:
        if  ( FALSE( X6 ) )  goto L19114;
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L19116;
        X7 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L19119;
L19116:
        X7 = scrt2__2b_2dtwo( X2, _TSCP( 8 ) );
        goto L19119;
L19114:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19118;
        X7 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19119;
L19118:
        X7 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L19119:
        if  ( FALSE( X6 ) )  goto L19121;
        X8 = _dpregexp_list_2dref_27168dd8( b15457, X6 );
        if  ( FALSE( X8 ) )  goto L19124;
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19127;
        scrt1__24__car_2derror( X8 );
L19127:
        X10 = PAIR_CAR( X8 );
        X11 = PAIR_CDR( X8 );
        X9 = CONS( scrt3_substring( s15454, X10, X11 ), 
                   EMPTYLIST );
        X3 = scrt3_string_2dappend( CONS( X3, X9 ) );
        goto L19124;
L19124:
        X2 = X7;
        GOBACK( L19035 );
L19121:
        if  ( EQ( TSCPTAG( X7 ), FIXNUMTAG ) )  goto L19131;
        scdebug_error( c12103, 
                       c12104, CONS( X7, EMPTYLIST ) );
L19131:
        X9 = BOOLEAN( LT( _S2CINT( X7 ), 0 ) );
        if  ( TRUE( X9 ) )  goto L19137;
        if  ( AND( EQ( TSCPTAG( i15455 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i15455 ), STRINGTAG ) )
            )  goto L19139;
        scdebug_error( c12125, 
                       c12126, CONS( i15455, EMPTYLIST ) );
L19139:
        X10 = C_FIXED( STRING_LENGTH( i15455 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), _S2CINT( X10 ) ), 
                      3 ) )  goto L19143;
        if  ( GTE( _S2CINT( X7 ), _S2CINT( X10 ) ) )  goto L19137;
        goto L19150;
L19143:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X7, X10 ) ) )  goto L19150;
L19137:
        scdebug_error( c12103, 
                       c12127, CONS( X7, EMPTYLIST ) );
L19150:
        X8 = C_CHAR( STRING_CHAR( i15455, X7 ) );
        if  ( BITAND( BITOR( _S2CINT( X7 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19152;
        X9 = _TSCP( IPLUS( _S2CINT( X7 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19153;
L19152:
        X9 = scrt2__2b_2dtwo( X7, _TSCP( 4 ) );
L19153:
        if  ( AND( EQ( TSCPIMMEDIATETAG( X8 ), CHARACTERTAG ), 
                   EQ( TSCPIMMEDIATETAG( _TSCP( 9234 ) ), 
                       CHARACTERTAG ) ) )  goto L19155;
        X10 = CONS( _TSCP( 9234 ), EMPTYLIST );
        scdebug_error( c12096, c12097, CONS( X8, X10 ) );
L19155:
        if  ( EQ( _S2CINT( X8 ), _S2CINT( _TSCP( 9234 ) ) ) )  goto L19158;
        X10 = CONS( scrt3_string( CONS( X8, EMPTYLIST ) ), 
                    EMPTYLIST );
        X3 = scrt3_string_2dappend( CONS( X3, X10 ) );
L19158:
        X2 = X9;
        GOBACK( L19035 );
L19069:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19159;
        X5 = _TSCP( IPLUS( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19160;
L19159:
        X5 = scrt2__2b_2dtwo( X2, _TSCP( 4 ) );
L19160:
        X6 = CONS( scrt3_string( CONS( X4, EMPTYLIST ) ), 
                   EMPTYLIST );
        X3 = scrt3_string_2dappend( CONS( X3, X6 ) );
        X2 = X5;
        GOBACK( L19035 );
}

DEFTSCP( idealib_2dpregexp_pregexp_v );
DEFCSTRING( t19161, "PREGEXP" );

TSCP  idealib_2dpregexp_pregexp( s15632 )
        TSCP  s15632;
{
        TSCP  X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19161 );
        _dpregexp_tive_3f_2a_a563f6ed_v = TRUEVALUE;
        if  ( AND( EQ( TSCPTAG( s15632 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15632 ), STRINGTAG ) )
            )  goto L19164;
        scdebug_error( c12125, 
                       c12126, CONS( s15632, EMPTYLIST ) );
L19164:
        X5 = C_FIXED( STRING_LENGTH( s15632 ) );
        X4 = _dpregexp__2dpattern_c1b58050( s15632, _TSCP( 0 ), X5 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19167;
        scrt1__24__car_2derror( X4 );
L19167:
        X3 = PAIR_CAR( X4 );
        X2 = sc_cons( X3, EMPTYLIST );
        X1 = sc_cons( c14712, X2 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_dpositions_c2268e67_v );
DEFCSTRING( t19170, "PREGEXP-MATCH-POSITIONS" );
EXTERNTSCPP( scrt2__3c_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3c_3d_2dtwo_v );

TSCP  _dpregexp_dpositions_c2268e67( p15645, s15646, o15647 )
        TSCP  p15645, s15646, o15647;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19170 );
        p15645 = CONS( p15645, EMPTYLIST );
        o15647 = CONS( o15647, EMPTYLIST );
        if  ( NOT( AND( EQ( TSCPTAG( PAIR_CAR( p15645 ) ), 
                            EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( PAIR_CAR( p15645 ) ), 
                            STRINGTAG ) ) ) )  goto L19172;
        X1 = idealib_2dpregexp_pregexp( PAIR_CAR( p15645 ) );
        SETGEN( PAIR_CAR( p15645 ), X1 );
        goto L19174;
L19172:
        if  ( EQ( TSCPTAG( PAIR_CAR( p15645 ) ), PAIRTAG ) )  goto L19174;
        X1 = CONS( PAIR_CAR( p15645 ), EMPTYLIST );
        X1 = CONS( c15653, X1 );
        _dpregexp_xp_2derror_eae6b00b( CONS( c15652, X1 ) );
L19174:
        if  ( AND( EQ( TSCPTAG( s15646 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15646 ), STRINGTAG ) )
            )  goto L19177;
        scdebug_error( c12125, 
                       c12126, CONS( s15646, EMPTYLIST ) );
L19177:
        X1 = C_FIXED( STRING_LENGTH( s15646 ) );
        if  ( NEQ( _S2CUINT( PAIR_CAR( o15647 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L19180;
        X2 = _TSCP( 0 );
        goto L19181;
L19180:
        X4 = PAIR_CAR( o15647 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19183;
        scrt1__24__car_2derror( X4 );
L19183:
        X3 = PAIR_CAR( X4 );
        X5 = PAIR_CAR( o15647 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19187;
        scrt1__24__cdr_2derror( X5 );
L19187:
        X4 = PAIR_CDR( X5 );
        SETGEN( PAIR_CAR( o15647 ), X4 );
        X2 = X3;
L19181:
        if  ( NEQ( _S2CUINT( PAIR_CAR( o15647 ) ), 
                   _S2CUINT( EMPTYLIST ) ) )  goto L19190;
        X3 = X1;
        goto L19191;
L19190:
        X4 = PAIR_CAR( o15647 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19193;
        scrt1__24__car_2derror( X4 );
L19193:
        X3 = PAIR_CAR( X4 );
L19191:
        X4 = X2;
L19197:
        if  ( BITAND( BITOR( _S2CINT( X4 ), _S2CINT( X3 ) ), 
                      3 ) )  goto L19198;
        X5 = BOOLEAN( LTE( _S2CINT( X4 ), _S2CINT( X3 ) ) );
        goto L19199;
L19198:
        X5 = scrt2__3c_3d_2dtwo( X4, X3 );
L19199:
        if  ( FALSE( X5 ) )  goto L19201;
        X6 = _dpregexp_ions_2daux_dbab67e7( PAIR_CAR( p15645 ), 
                                            s15646, 
                                            X1, X2, X3, X4 );
        if  ( TRUE( X6 ) )  goto L19204;
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19206;
        X4 = _TSCP( IPLUS( _S2CINT( X4 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        GOBACK( L19197 );
L19206:
        X4 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
        GOBACK( L19197 );
L19204:
        POPSTACKTRACE( X6 );
L19201:
        POPSTACKTRACE( X5 );
}

DEFTSCP( _dpregexp_xp_2dmatch_cd60c97f_v );
DEFCSTRING( t19208, "PREGEXP-MATCH" );
EXTERNTSCPP( sc_apply_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_apply_2dtwo_v );
EXTERNTSCPP( scrt1_cons_2a, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_cons_2a_v );

TSCP  _dpregexp_xp_2dmatch_cd60c97f( p15716, s15717, o15718 )
        TSCP  p15716, s15717, o15718;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19208 );
        X3 = CONS( o15718, EMPTYLIST );
        X2 = scrt1_cons_2a( p15716, CONS( s15717, X3 ) );
        X1 = sc_apply_2dtwo( _dpregexp_dpositions_c2268e67_v, X2 );
        if  ( FALSE( X1 ) )  goto L19211;
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L19214:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L19215;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19218;
        scrt1__24__car_2derror( X2 );
L19218:
        X7 = PAIR_CAR( X2 );
        if  ( FALSE( X7 ) )  goto L19221;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19224;
        scrt1__24__car_2derror( X7 );
L19224:
        X8 = PAIR_CAR( X7 );
        X9 = PAIR_CDR( X7 );
        X6 = scrt3_substring( s15717, X8, X9 );
        goto L19222;
L19221:
        X6 = X7;
L19222:
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L19228;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L19214 );
L19228:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19233;
        scdebug_error( c12026, 
                       c12027, CONS( X4, EMPTYLIST ) );
L19233:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L19214 );
L19215:
        POPSTACKTRACE( X3 );
L19211:
        POPSTACKTRACE( X1 );
}

DEFTSCP( _dpregexp_xp_2dsplit_6ce966b_v );
DEFCSTRING( t19235, "PREGEXP-SPLIT" );

TSCP  _dpregexp_xp_2dsplit_6ce966b( p15783, s15784 )
        TSCP  p15783, s15784;
{
        TSCP  X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19235 );
        if  ( AND( EQ( TSCPTAG( s15784 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15784 ), STRINGTAG ) )
            )  goto L19238;
        scdebug_error( c12125, 
                       c12126, CONS( s15784, EMPTYLIST ) );
L19238:
        X1 = C_FIXED( STRING_LENGTH( s15784 ) );
        X2 = _TSCP( 0 );
        X3 = EMPTYLIST;
        X4 = FALSEVALUE;
L19242:
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X1 ) ), 
                      3 ) )  goto L19244;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X1 ) ) )  goto L19248;
        goto L19249;
L19244:
        if  ( TRUE( scrt2__3e_3d_2dtwo( X2, X1 ) ) )  goto L19248;
L19249:
        X8 = CONS( X1, EMPTYLIST );
        X7 = _dpregexp_dpositions_c2268e67( p15783, 
                                            s15784, 
                                            CONS( X2, X8 ) );
        if  ( FALSE( X7 ) )  goto L19253;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19256;
        scrt1__24__car_2derror( X7 );
L19256:
        X8 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X8 ), PAIRTAG ) )  goto L19260;
        scrt1__24__car_2derror( X8 );
L19260:
        X5 = PAIR_CAR( X8 );
        X6 = PAIR_CDR( X8 );
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X6 ) ), 
                      3 ) )  goto L19265;
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( X6 ) ) )  goto L19269;
        goto L19270;
L19265:
        if  ( TRUE( scrt2__3d_2dtwo( X5, X6 ) ) )  goto L19269;
        goto L19270;
L19253:
        X9 = scrt3_substring( s15784, X2, X1 );
        X8 = sc_cons( X9, X3 );
        X4 = FALSEVALUE;
        X3 = X8;
        X2 = X1;
        GOBACK( L19242 );
L19270:
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L19273;
        X7 = BOOLEAN( EQ( _S2CUINT( X5 ), _S2CUINT( X2 ) ) );
        goto L19274;
L19273:
        X7 = scrt2__3d_2dtwo( X5, X2 );
L19274:
        if  ( FALSE( X7 ) )  goto L19281;
        if  ( FALSE( X4 ) )  goto L19281;
        X4 = FALSEVALUE;
        X2 = X6;
        GOBACK( L19242 );
L19281:
        X8 = scrt3_substring( s15784, X2, X5 );
        X7 = sc_cons( X8, X3 );
        X4 = FALSEVALUE;
        X3 = X7;
        X2 = X6;
        GOBACK( L19242 );
L19269:
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19282;
        X7 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L19283;
L19282:
        X7 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L19283:
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19284;
        X10 = _TSCP( IPLUS( _S2CINT( X5 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L19285;
L19284:
        X10 = scrt2__2b_2dtwo( X5, _TSCP( 4 ) );
L19285:
        X9 = scrt3_substring( s15784, X2, X10 );
        X8 = sc_cons( X9, X3 );
        X4 = TRUEVALUE;
        X3 = X8;
        X2 = X7;
        GOBACK( L19242 );
L19248:
        POPSTACKTRACE( _dpregexp_reverse_21_27718c8a( X3 ) );
}

DEFTSCP( _dpregexp__2dreplace_91225cd6_v );
DEFCSTRING( t19286, "PREGEXP-REPLACE" );

TSCP  _dpregexp__2dreplace_91225cd6( p15864, s15865, i15866 )
        TSCP  p15864, s15865, i15866;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19286 );
        if  ( AND( EQ( TSCPTAG( s15865 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15865 ), STRINGTAG ) )
            )  goto L19289;
        scdebug_error( c12125, 
                       c12126, CONS( s15865, EMPTYLIST ) );
L19289:
        X1 = C_FIXED( STRING_LENGTH( s15865 ) );
        X3 = CONS( X1, EMPTYLIST );
        X2 = _dpregexp_dpositions_c2268e67( p15864, 
                                            s15865, 
                                            CONS( _TSCP( 0 ), X3 ) );
        if  ( FALSE( X2 ) )  goto L19293;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L19296;
        scrt1__24__car_2derror( X2 );
L19296:
        X4 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L19299;
        scrt1__24__cdr_2derror( X4 );
L19299:
        X3 = PAIR_CDR( X4 );
        X5 = PAIR_CAR( X2 );
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L19303;
        scrt1__24__car_2derror( X5 );
L19303:
        X4 = PAIR_CAR( X5 );
        if  ( AND( EQ( TSCPTAG( i15866 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i15866 ), STRINGTAG ) )
            )  goto L19306;
        scdebug_error( c12125, 
                       c12126, CONS( i15866, EMPTYLIST ) );
L19306:
        X5 = C_FIXED( STRING_LENGTH( i15866 ) );
        X6 = CONS( scrt3_substring( s15865, X3, X1 ), 
                   EMPTYLIST );
        X6 = CONS( _dpregexp_lace_2daux_18908cb0( s15865, 
                                                  i15866, X5, X2 ), 
                   X6 );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( scrt3_substring( s15865, 
                                                                     _TSCP( 0 ), 
                                                                     X4 ), 
                                                    X6 ) ) );
L19293:
        POPSTACKTRACE( s15865 );
}

DEFTSCP( _dpregexp_replace_2a_fa4f769d_v );
DEFCSTRING( t19309, "PREGEXP-REPLACE*" );

TSCP  _dpregexp_replace_2a_fa4f769d( p15905, s15906, i15907 )
        TSCP  p15905, s15906, i15907;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19309 );
        if  ( AND( EQ( TSCPTAG( i15907 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i15907 ), STRINGTAG ) )
            )  goto L19312;
        scdebug_error( c12125, 
                       c12126, CONS( i15907, EMPTYLIST ) );
L19312:
        X1 = C_FIXED( STRING_LENGTH( i15907 ) );
        if  ( AND( EQ( TSCPTAG( s15906 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15906 ), STRINGTAG ) )
            )  goto L19315;
        scdebug_error( c12125, 
                       c12126, CONS( s15906, EMPTYLIST ) );
L19315:
        X2 = C_FIXED( STRING_LENGTH( s15906 ) );
        if  ( NOT( AND( EQ( TSCPTAG( p15905 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( p15905 ), 
                            STRINGTAG ) ) ) )  goto L19317;
        X3 = idealib_2dpregexp_pregexp( p15905 );
        goto L19318;
L19317:
        X3 = p15905;
L19318:
        X4 = sc_emptystring;
        X5 = _TSCP( 0 );
        X6 = X4;
L19322:
        if  ( BITAND( BITOR( _S2CINT( X5 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L19324;
        if  ( LT( _S2CINT( X5 ), _S2CINT( X2 ) ) )  goto L19328;
        POPSTACKTRACE( X6 );
L19324:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X5, X2 ) ) )  goto L19328;
        POPSTACKTRACE( X6 );
L19328:
        X8 = CONS( X2, EMPTYLIST );
        X7 = _dpregexp_dpositions_c2268e67( X3, 
                                            s15906, 
                                            CONS( X5, X8 ) );
        if  ( FALSE( X7 ) )  goto L19332;
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L19335;
        scrt1__24__car_2derror( X7 );
L19335:
        X9 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L19338;
        scrt1__24__cdr_2derror( X9 );
L19338:
        X8 = PAIR_CDR( X9 );
        X9 = CONS( _dpregexp_lace_2daux_18908cb0( s15906, 
                                                  i15907, X1, X7 ), 
                   EMPTYLIST );
        X11 = PAIR_CAR( X7 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L19342;
        scrt1__24__car_2derror( X11 );
L19342:
        X10 = PAIR_CAR( X11 );
        X9 = CONS( scrt3_substring( s15906, X5, X10 ), 
                   X9 );
        X6 = scrt3_string_2dappend( CONS( X6, X9 ) );
        X5 = X8;
        GOBACK( L19322 );
L19332:
        if  ( BITAND( BITOR( _S2CINT( X5 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L19345;
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( _TSCP( 0 ) ) ) )  goto L19349;
        POPSTACKTRACE( s15906 );
L19345:
        if  ( FALSE( scrt2__3d_2dtwo( X5, _TSCP( 0 ) ) ) )  goto L19349;
        POPSTACKTRACE( s15906 );
L19349:
        X7 = CONS( scrt3_substring( s15906, X5, X2 ), 
                   EMPTYLIST );
        POPSTACKTRACE( scrt3_string_2dappend( CONS( X6, X7 ) ) );
}

DEFTSCP( _dpregexp_xp_2dquote_dc4ac78e_v );
DEFCSTRING( t19352, "PREGEXP-QUOTE" );

TSCP  _dpregexp_xp_2dquote_dc4ac78e( s15969 )
        TSCP  s15969;
{
        TSCP  X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t19352 );
        if  ( AND( EQ( TSCPTAG( s15969 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( s15969 ), STRINGTAG ) )
            )  goto L19355;
        scdebug_error( c12125, 
                       c12126, CONS( s15969, EMPTYLIST ) );
L19355:
        X2 = C_FIXED( STRING_LENGTH( s15969 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19358;
        X1 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L19359;
L19358:
        X1 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L19359:
        X2 = X1;
        X3 = EMPTYLIST;
L19362:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L19364;
        if  ( LT( _S2CINT( X2 ), _S2CINT( _TSCP( 0 ) ) ) )  goto L19368;
        goto L19369;
L19364:
        if  ( TRUE( scrt2__3c_2dtwo( X2, _TSCP( 0 ) ) ) )  goto L19368;
L19369:
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L19372;
        X4 = _TSCP( IDIFFERENCE( _S2CINT( X2 ), 
                                 _S2CINT( _TSCP( 4 ) ) ) );
        goto L19373;
L19372:
        X4 = scrt2__2d_2dtwo( X2, _TSCP( 4 ) );
L19373:
        if  ( EQ( TSCPTAG( X2 ), FIXNUMTAG ) )  goto L19375;
        scdebug_error( c12103, 
                       c12104, CONS( X2, EMPTYLIST ) );
L19375:
        X6 = BOOLEAN( LT( _S2CINT( X2 ), 0 ) );
        if  ( TRUE( X6 ) )  goto L19381;
        X7 = C_FIXED( STRING_LENGTH( s15969 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), _S2CINT( X7 ) ), 
                      3 ) )  goto L19385;
        if  ( GTE( _S2CINT( X2 ), _S2CINT( X7 ) ) )  goto L19381;
        goto L19392;
L19385:
        if  ( FALSE( scrt2__3e_3d_2dtwo( X2, X7 ) ) )  goto L19392;
L19381:
        scdebug_error( c12103, 
                       c12127, CONS( X2, EMPTYLIST ) );
L19392:
        X5 = C_CHAR( STRING_CHAR( s15969, X2 ) );
        if  ( FALSE( scrt1_memv( X5, c15992 ) ) )  goto L19394;
        X6 = sc_cons( X5, X3 );
        X3 = sc_cons( _TSCP( 23570 ), X6 );
        goto L19395;
L19394:
        X3 = sc_cons( X5, X3 );
L19395:
        X2 = X4;
        GOBACK( L19362 );
L19368:
        POPSTACKTRACE( scrt3_list_2d_3estring( X3 ) );
}

void scrt3__init();
void qobischeme__init();
void scrt6__init();
void scrt1__init();
void scrt2__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt3__init();
        qobischeme__init();
        scrt6__init();
        scrt1__init();
        scrt2__init();
        scdebug__init();
        MAXDISPLAY( 22 );
}

void  idealib_2dpregexp__init()
{
        TSCP  X3, X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(idealib_2dpregexp SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t16702, 
                       ADR( _dpregexp_version_2a_22ecbc26_v ), 
                       _TSCP( 80202008 ) );
        INITIALIZEVAR( t16703, 
                       ADR( _dpregexp__2dchar_2a_2eb8e08_v ), 
                       _TSCP( 15122 ) );
        if  ( EQ( TSCPIMMEDIATETAG( _TSCP( 24850 ) ), 
                  CHARACTERTAG ) )  goto L16706;
        scdebug_error( c11930, 
                       c11931, 
                       CONS( _TSCP( 24850 ), EMPTYLIST ) );
L16706:
        X1 = CHAR_FIX( _TSCP( 24850 ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 388 ) ) ), 
                      3 ) )  goto L16709;
        X2 = _TSCP( IDIFFERENCE( _S2CINT( X1 ), 
                                 _S2CINT( _TSCP( 388 ) ) ) );
        goto L16710;
L16709:
        X2 = scrt2__2d_2dtwo( X1, _TSCP( 388 ) );
L16710:
        INITIALIZEVAR( t16704, 
                       ADR( _dpregexp_r_2dint_2a_7188da5a_v ), 
                       X2 );
        X2 = _dpregexp_r_2dint_2a_7188da5a_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 52 ) ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L16713;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 52 ) ), 
                           _S2CINT( X2 ) ) );
        goto L16714;
L16713:
        X1 = scrt2__2b_2dtwo( _TSCP( 52 ), X2 );
L16714:
        X2 = BOOLEAN( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L16720;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L16721;
        X3 = BOOLEAN( LT( _S2CINT( X1 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L16722;
L16721:
        X3 = scrt2__3c_2dtwo( X1, _TSCP( 0 ) );
L16722:
        if  ( TRUE( X3 ) )  goto L16720;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L16729;
        if  ( GT( _S2CINT( X1 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L16720;
        goto L16736;
L16729:
        if  ( FALSE( scrt2__3e_2dtwo( X1, _TSCP( 1020 ) ) ) )  goto L16736;
L16720:
        scdebug_error( c11961, 
                       c11962, CONS( X1, EMPTYLIST ) );
L16736:
        INITIALIZEVAR( t16711, 
                       ADR( _dpregexp__2dchar_2a_8c9d929c_v ), 
                       FIX_CHAR( X1 ) );
        X2 = _dpregexp_r_2dint_2a_7188da5a_v;
        if  ( BITAND( BITOR( _S2CINT( _TSCP( 36 ) ), 
                             _S2CINT( X2 ) ), 
                      3 ) )  goto L16739;
        X1 = _TSCP( IPLUS( _S2CINT( _TSCP( 36 ) ), 
                           _S2CINT( X2 ) ) );
        goto L16740;
L16739:
        X1 = scrt2__2b_2dtwo( _TSCP( 36 ), X2 );
L16740:
        X2 = BOOLEAN( NEQ( TSCPTAG( X1 ), FIXNUMTAG ) );
        if  ( TRUE( X2 ) )  goto L16746;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 0 ) ) ), 
                      3 ) )  goto L16747;
        X3 = BOOLEAN( LT( _S2CINT( X1 ), 
                          _S2CINT( _TSCP( 0 ) ) ) );
        goto L16748;
L16747:
        X3 = scrt2__3c_2dtwo( X1, _TSCP( 0 ) );
L16748:
        if  ( TRUE( X3 ) )  goto L16746;
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 1020 ) ) ), 
                      3 ) )  goto L16755;
        if  ( GT( _S2CINT( X1 ), _S2CINT( _TSCP( 1020 ) ) ) )  goto L16746;
        goto L16762;
L16755:
        if  ( FALSE( scrt2__3e_2dtwo( X1, _TSCP( 1020 ) ) ) )  goto L16762;
L16746:
        scdebug_error( c11961, 
                       c11962, CONS( X1, EMPTYLIST ) );
L16762:
        INITIALIZEVAR( t16737, 
                       ADR( _dpregexp__2dchar_2a_1d3e6846_v ), 
                       FIX_CHAR( X1 ) );
        INITIALIZEVAR( t16763, 
                       ADR( _dpregexp_tive_3f_2a_a563f6ed_v ), 
                       TRUEVALUE );
        INITIALIZEVAR( t16764, 
                       ADR( _dpregexp_reverse_21_27718c8a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dpregexp_reverse_21_27718c8a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16775, 
                       ADR( _dpregexp_xp_2derror_eae6b00b_v ), 
                       MAKEPROCEDURE( 0, 
                                      1, 
                                      _dpregexp_xp_2derror_eae6b00b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16787, 
                       ADR( _dpregexp__2dpattern_c1b58050_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp__2dpattern_c1b58050, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16871, 
                       ADR( _dpregexp_d_2dbranch_608d6a65_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_d_2dbranch_608d6a65, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t16929, 
                       ADR( _dpregexp_ad_2dpiece_fb18d72f_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_ad_2dpiece_fb18d72f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17115, 
                       ADR( _dpregexp_d_2dnumber_65a1f042_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_d_2dnumber_65a1f042, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17195, 
                       ADR( _dpregexp_ped_2dchar_7f19c128_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_ped_2dchar_7f19c128, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17287, 
                       ADR( _dpregexp_ar_2dclass_a61fa838_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_ar_2dclass_a61fa838, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17387, 
                       ADR( _dpregexp_ter_2dtype_b20c5407_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_ter_2dtype_b20c5407, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17535, 
                       ADR( _dpregexp_subpattern_6ade1b55_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_subpattern_6ade1b55, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17602, 
                       ADR( _dpregexp_2dif_2dany_b11badc7_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_2dif_2dany_b11badc7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17827, 
                       ADR( _dpregexp_ead_2dnums_bc0faaee_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_ead_2dnums_bc0faaee, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17939, 
                       ADR( _dpregexp_har_2dlist_c902691d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dpregexp_har_2dlist_c902691d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t17947, 
                       ADR( _dpregexp_har_2dlist_98a7f495_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_har_2dlist_98a7f495, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18127, 
                       ADR( _dpregexp_ng_2dmatch_cc5a26b9_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      _dpregexp_ng_2dmatch_cc5a26b9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18211, 
                       ADR( _dpregexp__2dword_3f_d5d6584d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dpregexp__2dword_3f_d5d6584d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18222, 
                       ADR( _dpregexp_2dclass_3f_a6bca49b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _dpregexp_2dclass_3f_a6bca49b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18346, 
                       ADR( _dpregexp_oundary_3f_fa13e7c5_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_oundary_3f_fa13e7c5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18416, 
                       ADR( _dpregexp_list_2dref_27168dd8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _dpregexp_list_2dref_27168dd8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18439, 
                       ADR( _dpregexp_ref_2dlist_799d8334_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dpregexp_ref_2dlist_799d8334, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t18450, 
                       ADR( _dpregexp_ions_2daux_dbab67e7_v ), 
                       MAKEPROCEDURE( 6, 
                                      0, 
                                      _dpregexp_ions_2daux_dbab67e7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19031, 
                       ADR( _dpregexp_lace_2daux_18908cb0_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      _dpregexp_lace_2daux_18908cb0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19161, 
                       ADR( idealib_2dpregexp_pregexp_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      idealib_2dpregexp_pregexp, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19170, 
                       ADR( _dpregexp_dpositions_c2268e67_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      _dpregexp_dpositions_c2268e67, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19208, 
                       ADR( _dpregexp_xp_2dmatch_cd60c97f_v ), 
                       MAKEPROCEDURE( 2, 
                                      1, 
                                      _dpregexp_xp_2dmatch_cd60c97f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19235, 
                       ADR( _dpregexp_xp_2dsplit_6ce966b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      _dpregexp_xp_2dsplit_6ce966b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19286, 
                       ADR( _dpregexp__2dreplace_91225cd6_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp__2dreplace_91225cd6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19309, 
                       ADR( _dpregexp_replace_2a_fa4f769d_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      _dpregexp_replace_2a_fa4f769d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t19352, 
                       ADR( _dpregexp_xp_2dquote_dc4ac78e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      _dpregexp_xp_2dquote_dc4ac78e, 
                                      EMPTYLIST ) );
        return;
}
