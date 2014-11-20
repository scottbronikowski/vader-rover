
/* SCHEME->C */

#include <objects.h>

void learning_2dmess__init();
DEFSTATICTSCP( c12781 );
DEFCSTRING( t12813, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c12685 );
DEFSTATICTSCP( c12684 );
DEFCSTRING( t12814, "prep-phrase function:" );
DEFSTATICTSCP( c12584 );
DEFCSTRING( t12815, "adj noun" );
DEFSTATICTSCP( c12554 );
DEFCSTRING( t12816, "we have a unmodified object:" );
DEFSTATICTSCP( c12553 );
DEFCSTRING( t12817, "object branch 2" );
DEFSTATICTSCP( c12518 );
DEFCSTRING( t12818, "object-phrase function returned:" );
DEFSTATICTSCP( c12488 );
DEFCSTRING( t12819, "object-phrase function:" );
DEFSTATICTSCP( c12485 );
DEFSTATICTSCP( c12478 );
DEFCSTRING( t12820, "-" );
DEFSTATICTSCP( c12470 );
DEFSTATICTSCP( c12426 );
DEFCSTRING( t12821, "in the midst of parsing predicate" );
DEFSTATICTSCP( c12404 );
DEFCSTRING( t12822, "parse-predicate-returned:" );
DEFSTATICTSCP( c12391 );
DEFCSTRING( t12823, "parse-predicate" );
DEFSTATICTSCP( c12390 );
DEFCSTRING( t12824, "more-prepositional-phrases:" );
DEFSTATICTSCP( c12387 );
DEFCSTRING( t12825, "another prep phrase?" );
DEFSTATICTSCP( c12366 );
DEFCSTRING( t12826, 
            "in the midst of parsing single-object prepositional phrase" );
DEFSTATICTSCP( c12365 );
DEFSTATICTSCP( c12338 );
DEFCSTRING( t12827, "prepositional-phrase-parse returned:" );
DEFSTATICTSCP( c12307 );
DEFCSTRING( t12828, "parse-prepositional-phrase" );
DEFSTATICTSCP( c12306 );
DEFSTATICTSCP( c12291 );
DEFCSTRING( t12829, "parse-object-phrase-returned:" );
DEFSTATICTSCP( c12269 );
DEFCSTRING( t12830, "parse-object-phrase" );
DEFSTATICTSCP( c12268 );
DEFSTATICTSCP( c12195 );
DEFSTATICTSCP( c12189 );
DEFCSTRING( t12831, "parse-adjective-phrase" );
DEFSTATICTSCP( c12147 );
DEFSTATICTSCP( c12144 );
DEFSTATICTSCP( c12120 );
DEFSTATICTSCP( c12117 );
DEFSTATICTSCP( c12114 );
DEFSTATICTSCP( c12111 );
DEFSTATICTSCP( c12108 );
DEFSTATICTSCP( c12105 );
DEFSTATICTSCP( c12102 );
DEFSTATICTSCP( c12099 );
DEFCSTRING( t12832, "word-parse returned:" );
DEFSTATICTSCP( c12090 );
DEFCSTRING( t12833, "parse word" );
DEFSTATICTSCP( c12087 );
DEFSTATICTSCP( c12071 );
DEFCSTRING( t12834, "parse-sentence" );
DEFSTATICTSCP( c12061 );
DEFCSTRING( t12835, "parse-sentence returned:" );
DEFSTATICTSCP( c12058 );
DEFSTATICTSCP( c12055 );
DEFSTATICTSCP( c12052 );
DEFSTATICTSCP( t12836 );
DEFSTATICTSCP( c12051 );
DEFSTATICTSCP( c12050 );
DEFSTATICTSCP( t12837 );
DEFSTATICTSCP( t12838 );
DEFSTATICTSCP( t12839 );
DEFSTATICTSCP( t12840 );
DEFSTATICTSCP( t12841 );
DEFSTATICTSCP( t12842 );
DEFSTATICTSCP( t12843 );
DEFSTATICTSCP( c12049 );
DEFSTATICTSCP( t12844 );
DEFSTATICTSCP( c12048 );
DEFSTATICTSCP( t12845 );
DEFSTATICTSCP( t12846 );
DEFSTATICTSCP( t12847 );
DEFSTATICTSCP( t12848 );
DEFSTATICTSCP( c12047 );
DEFSTATICTSCP( t12849 );
DEFSTATICTSCP( t12850 );
DEFSTATICTSCP( t12851 );
DEFSTATICTSCP( t12852 );
DEFSTATICTSCP( c12046 );
DEFSTATICTSCP( t12853 );
DEFSTATICTSCP( c12045 );
DEFSTATICTSCP( t12854 );

static void  init_constants()
{
        c12781 = STRINGTOSYMBOL( CSTRING_TSCP( "ROBOT" ) );
        CONSTANTEXP( ADR( c12781 ) );
        c12685 = CSTRING_TSCP( t12813 );
        CONSTANTEXP( ADR( c12685 ) );
        c12684 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c12684 ) );
        c12584 = CSTRING_TSCP( t12814 );
        CONSTANTEXP( ADR( c12584 ) );
        c12554 = CSTRING_TSCP( t12815 );
        CONSTANTEXP( ADR( c12554 ) );
        c12553 = CSTRING_TSCP( t12816 );
        CONSTANTEXP( ADR( c12553 ) );
        c12518 = CSTRING_TSCP( t12817 );
        CONSTANTEXP( ADR( c12518 ) );
        c12488 = CSTRING_TSCP( t12818 );
        CONSTANTEXP( ADR( c12488 ) );
        c12485 = CSTRING_TSCP( t12819 );
        CONSTANTEXP( ADR( c12485 ) );
        c12478 = STRINGTOSYMBOL( CSTRING_TSCP( "BAD" ) );
        CONSTANTEXP( ADR( c12478 ) );
        c12470 = CSTRING_TSCP( t12820 );
        CONSTANTEXP( ADR( c12470 ) );
        c12426 = STRINGTOSYMBOL( CSTRING_TSCP( "PREDICATE" ) );
        CONSTANTEXP( ADR( c12426 ) );
        c12404 = CSTRING_TSCP( t12821 );
        CONSTANTEXP( ADR( c12404 ) );
        c12391 = CSTRING_TSCP( t12822 );
        CONSTANTEXP( ADR( c12391 ) );
        c12390 = CSTRING_TSCP( t12823 );
        CONSTANTEXP( ADR( c12390 ) );
        c12387 = CSTRING_TSCP( t12824 );
        CONSTANTEXP( ADR( c12387 ) );
        c12366 = CSTRING_TSCP( t12825 );
        CONSTANTEXP( ADR( c12366 ) );
        c12365 = CSTRING_TSCP( t12826 );
        CONSTANTEXP( ADR( c12365 ) );
        c12338 = STRINGTOSYMBOL( CSTRING_TSCP( "PREPOSITIONAL-PHRASE" ) );
        CONSTANTEXP( ADR( c12338 ) );
        c12307 = CSTRING_TSCP( t12827 );
        CONSTANTEXP( ADR( c12307 ) );
        c12306 = CSTRING_TSCP( t12828 );
        CONSTANTEXP( ADR( c12306 ) );
        c12291 = STRINGTOSYMBOL( CSTRING_TSCP( "OBJECT-PHRASE" ) );
        CONSTANTEXP( ADR( c12291 ) );
        c12269 = CSTRING_TSCP( t12829 );
        CONSTANTEXP( ADR( c12269 ) );
        c12268 = CSTRING_TSCP( t12830 );
        CONSTANTEXP( ADR( c12268 ) );
        c12195 = STRINGTOSYMBOL( CSTRING_TSCP( "ADJECTIVE-PHRASE" ) );
        CONSTANTEXP( ADR( c12195 ) );
        c12189 = STRINGTOSYMBOL( CSTRING_TSCP( "AND" ) );
        CONSTANTEXP( ADR( c12189 ) );
        c12147 = CSTRING_TSCP( t12831 );
        CONSTANTEXP( ADR( c12147 ) );
        c12144 = STRINGTOSYMBOL( CSTRING_TSCP( "CONJUNCTION" ) );
        CONSTANTEXP( ADR( c12144 ) );
        c12120 = STRINGTOSYMBOL( CSTRING_TSCP( "TWO-OBJECT-ADJECTIVE-PREPOSI\
TION" ) );
        CONSTANTEXP( ADR( c12120 ) );
        c12117 = STRINGTOSYMBOL( CSTRING_TSCP( "ONE-OBJECT-ADJECTIVE-PREPOSI\
TION" ) );
        CONSTANTEXP( ADR( c12117 ) );
        c12114 = STRINGTOSYMBOL( CSTRING_TSCP( "TWO-OBJECT-ADVERB-PREPOSITIO\
N" ) );
        CONSTANTEXP( ADR( c12114 ) );
        c12111 = STRINGTOSYMBOL( CSTRING_TSCP( "ONE-OBJECT-ADVERB-PREPOSITIO\
N" ) );
        CONSTANTEXP( ADR( c12111 ) );
        c12108 = STRINGTOSYMBOL( CSTRING_TSCP( "TEMPORAL-CONJUNCTION" ) );
        CONSTANTEXP( ADR( c12108 ) );
        c12105 = STRINGTOSYMBOL( CSTRING_TSCP( "NOUN" ) );
        CONSTANTEXP( ADR( c12105 ) );
        c12102 = STRINGTOSYMBOL( CSTRING_TSCP( "VERB" ) );
        CONSTANTEXP( ADR( c12102 ) );
        c12099 = STRINGTOSYMBOL( CSTRING_TSCP( "SUBJECT" ) );
        CONSTANTEXP( ADR( c12099 ) );
        c12090 = CSTRING_TSCP( t12832 );
        CONSTANTEXP( ADR( c12090 ) );
        c12087 = CSTRING_TSCP( t12833 );
        CONSTANTEXP( ADR( c12087 ) );
        c12071 = STRINGTOSYMBOL( CSTRING_TSCP( "SENTENCE" ) );
        CONSTANTEXP( ADR( c12071 ) );
        c12061 = CSTRING_TSCP( t12834 );
        CONSTANTEXP( ADR( c12061 ) );
        c12058 = CSTRING_TSCP( t12835 );
        CONSTANTEXP( ADR( c12058 ) );
        c12055 = STRINGTOSYMBOL( CSTRING_TSCP( "WHICH-IS" ) );
        CONSTANTEXP( ADR( c12055 ) );
        c12052 = EMPTYLIST;
        t12836 = STRINGTOSYMBOL( CSTRING_TSCP( "THEN" ) );
        c12052 = CONS( t12836, c12052 );
        CONSTANTEXP( ADR( c12052 ) );
        c12051 = EMPTYLIST;
        c12051 = CONS( c12189, c12051 );
        CONSTANTEXP( ADR( c12051 ) );
        c12050 = EMPTYLIST;
        t12837 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-BAG" ) );
        c12050 = CONS( t12837, c12050 );
        t12838 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-STOOL" ) );
        c12050 = CONS( t12838, c12050 );
        t12839 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-CONE" ) );
        c12050 = CONS( t12839, c12050 );
        t12840 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-BUCKET" ) );
        c12050 = CONS( t12840, c12050 );
        t12841 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-BOX" ) );
        c12050 = CONS( t12841, c12050 );
        t12842 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-CHAIR" ) );
        c12050 = CONS( t12842, c12050 );
        t12843 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-TABLE" ) );
        c12050 = CONS( t12843, c12050 );
        CONSTANTEXP( ADR( c12050 ) );
        c12049 = EMPTYLIST;
        t12844 = STRINGTOSYMBOL( CSTRING_TSCP( "BETWEEN" ) );
        c12049 = CONS( t12844, c12049 );
        CONSTANTEXP( ADR( c12049 ) );
        c12048 = EMPTYLIST;
        t12845 = STRINGTOSYMBOL( CSTRING_TSCP( "IN-FRONT-OF" ) );
        c12048 = CONS( t12845, c12048 );
        t12846 = STRINGTOSYMBOL( CSTRING_TSCP( "BEHIND" ) );
        c12048 = CONS( t12846, c12048 );
        t12847 = STRINGTOSYMBOL( CSTRING_TSCP( "RIGHT-OF" ) );
        c12048 = CONS( t12847, c12048 );
        t12848 = STRINGTOSYMBOL( CSTRING_TSCP( "LEFT-OF" ) );
        c12048 = CONS( t12848, c12048 );
        CONSTANTEXP( ADR( c12048 ) );
        c12047 = EMPTYLIST;
        t12849 = STRINGTOSYMBOL( CSTRING_TSCP( "PAST" ) );
        c12047 = CONS( t12849, c12047 );
        t12850 = STRINGTOSYMBOL( CSTRING_TSCP( "AWAY-FROM" ) );
        c12047 = CONS( t12850, c12047 );
        t12851 = STRINGTOSYMBOL( CSTRING_TSCP( "TOWARDS" ) );
        c12047 = CONS( t12851, c12047 );
        t12852 = STRINGTOSYMBOL( CSTRING_TSCP( "AROUND" ) );
        c12047 = CONS( t12852, c12047 );
        c12047 = CONS( t12845, c12047 );
        c12047 = CONS( t12846, c12047 );
        c12047 = CONS( t12847, c12047 );
        c12047 = CONS( t12848, c12047 );
        CONSTANTEXP( ADR( c12047 ) );
        c12046 = EMPTYLIST;
        t12853 = STRINGTOSYMBOL( CSTRING_TSCP( "WENT" ) );
        c12046 = CONS( t12853, c12046 );
        CONSTANTEXP( ADR( c12046 ) );
        c12045 = EMPTYLIST;
        t12854 = STRINGTOSYMBOL( CSTRING_TSCP( "THE-ROBOT" ) );
        c12045 = CONS( t12854, c12045 );
        CONSTANTEXP( ADR( c12045 ) );
}

DEFTSCP( ng_2dmess_rser_3f_2a_d476e89f_v );
DEFCSTRING( t12855, "*LOUD-PARSER?*" );
DEFTSCP( ng_2dmess_r_2ddtrace_4f4f1b91_v );
DEFCSTRING( t12856, "PARSER-DTRACE" );
EXTERNTSCPP( toollib_2dmisc_dtrace, XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_dtrace_v );

TSCP  ng_2dmess_r_2ddtrace_4f4f1b91( s12043, x12044 )
        TSCP  s12043, x12044;
{
        PUSHSTACKTRACE( t12856 );
        if  ( FALSE( ng_2dmess_rser_3f_2a_d476e89f_v ) )  goto L12858;
        POPSTACKTRACE( toollib_2dmisc_dtrace( s12043, x12044 ) );
L12858:
        POPSTACKTRACE( x12044 );
}

DEFTSCP( ng_2dmess_ubjects_2a_cbd10769_v );
DEFCSTRING( t12860, "*SUBJECTS*" );
DEFTSCP( ng_2dmess_2dverbs_2a_62f300aa_v );
DEFCSTRING( t12861, "*DAN-VERBS*" );
DEFTSCP( ng_2dmess_sitions_2a_290ab50c_v );
DEFCSTRING( t12862, "*ONE-OBJECT-ADVERB-PREPOSITIONS*" );
DEFTSCP( ng_2dmess_sitions_2a_67092856_v );
DEFCSTRING( t12863, "*ONE-OBJECT-ADJECTIVE-PREPOSITIONS*" );
DEFTSCP( ng_2dmess_sitions_2a_59902072_v );
DEFCSTRING( t12864, "*TWO-OBJECT-ADVERB-PREPOSITIONS*" );
DEFTSCP( ng_2dmess_sitions_2a_258a6979_v );
DEFCSTRING( t12865, "*TWO-OBJECT-ADJECTIVE-PREPOSITIONS*" );
DEFTSCP( ng_2dmess_phrases_2a_2c74134c_v );
DEFCSTRING( t12866, "*OBJECT-PHRASES*" );
DEFTSCP( ng_2dmess_nctions_2a_14999723_v );
DEFCSTRING( t12867, "*CONJUNCTIONS*" );
DEFTSCP( ng_2dmess_nctions_2a_934ccbc7_v );
DEFCSTRING( t12868, "*TEMPORAL-CONJUNCTIONS*" );
DEFTSCP( ng_2dmess_nectors_2a_ec5fc44e_v );
DEFCSTRING( t12869, "*CONNECTORS*" );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
DEFTSCP( ng_2dmess_2dwords_2a_aadd3a56_v );
DEFCSTRING( t12871, "*ALL-WORDS*" );
EXTERNTSCPP( scrt1_append_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_append_2dtwo_v );
DEFTSCP( ng_2dmess_2dsentence_fe2248ab_v );
DEFCSTRING( t12872, "PARSE-SENTENCE" );
EXTERNTSCPP( learning_2dmess_parse_2dwords, XAL1( TSCP ) );
EXTERNTSCP( learning_2dmess_parse_2dwords_v );
EXTERNTSCPP( ng_2dmess_2d_3ewords_d97696f9, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ng_2dmess_2d_3ewords_d97696f9_v );

TSCP  ng_2dmess_2dsentence_fe2248ab( s12057 )
        TSCP  s12057;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t12872 );
        X2 = ng_2dmess_2d_3ewords_d97696f9( s12057, 
                                            ng_2dmess_2dwords_2a_aadd3a56_v );
        X1 = learning_2dmess_parse_2dwords( X2 );
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12058, X1 ) );
}

DEFTSCP( learning_2dmess_parse_2dwords_v );
DEFCSTRING( t12874, "PARSE-WORDS" );
EXTERNTSCP( qobischeme_fail_v );
EXTERNTSCPP( qobischeme_set_2dfail_21, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_set_2dfail_21_v );

TSCP  learning_2dmess_l12068( c12880 )
        TSCP  c12880;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( "learning_2dmess_l12068 [inside PARSE-WORDS]" );
        X1 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c12880, 0 );
        X2 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12880, 1 );
        qobischeme_set_2dfail_21( DISPLAY( 3 ) );
        X4 = DISPLAY( 2 );
        X4 = UNKNOWNCALL( X4, 1 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( FALSEVALUE, 
                                          PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 3 ) = X1;
        DISPLAY( 2 ) = X2;
        POPSTACKTRACE( X3 );
}

EXTERNTSCPP( ng_2dmess__2dsubject_8d09c1ed, XAL1( TSCP ) );
EXTERNTSCP( ng_2dmess__2dsubject_8d09c1ed_v );
EXTERNTSCPP( ng_2dmess_dpredicate_55c75dcb, XAL1( TSCP ) );
EXTERNTSCP( ng_2dmess_dpredicate_55c75dcb_v );
EXTERNTSCPP( qobischeme_second, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_second_v );
EXTERNTSCPP( qobischeme_first, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_first_v );

TSCP  learning_2dmess_l12064( r12065, c12877 )
        TSCP  r12065, c12877;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "learning_2dmess_l12064 [inside PARSE-WORDS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12877, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12877, 1 );
        DISPLAY( 2 ) = r12065;
        DISPLAY( 3 ) = qobischeme_fail_v;
        X4 = MAKEPROCEDURE( 0, 
                            0, 
                            learning_2dmess_l12068, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ) ) );
        qobischeme_set_2dfail_21( X4 );
        X9 = ng_2dmess__2dsubject_8d09c1ed( DISPLAY( 0 ) );
        X11 = qobischeme_second( X9 );
        X10 = ng_2dmess_dpredicate_55c75dcb( X11 );
        X11 = qobischeme_second( X10 );
        if  ( EQ( _S2CUINT( X11 ), _S2CUINT( EMPTYLIST ) ) )  goto L12884;
        X11 = qobischeme_fail_v;
        X11 = UNKNOWNCALL( X11, 0 );
        VIA( PROCEDURE_CODE( X11 ) )( PROCEDURE_CLOSURE( X11 ) );
L12884:
        X12 = qobischeme_first( X9 );
        X14 = qobischeme_first( X10 );
        X13 = sc_cons( X14, EMPTYLIST );
        X11 = sc_cons( X12, X13 );
        X8 = X11;
        X7 = sc_cons( X8, EMPTYLIST );
        X6 = sc_cons( c12071, X7 );
        X5 = X6;
        X4 = sc_cons( X5, PAIR_CAR( DISPLAY( 1 ) ) );
        SETGEN( PAIR_CAR( DISPLAY( 1 ) ), X4 );
        X4 = qobischeme_fail_v;
        X4 = UNKNOWNCALL( X4, 0 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( PROCEDURE_CLOSURE( X4 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCP( sc_ntinuation_1af38b9f_v );
EXTERNTSCPP( scrt1_reverse, XAL1( TSCP ) );
EXTERNTSCP( scrt1_reverse_v );

TSCP  learning_2dmess_parse_2dwords( w12060 )
        TSCP  w12060;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12874 );
        DISPLAY( 0 ) = w12060;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12061, DISPLAY( 0 ) );
        DISPLAY( 1 ) = EMPTYLIST;
        DISPLAY( 1 ) = CONS( DISPLAY( 1 ), EMPTYLIST );
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            learning_2dmess_l12064, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        X1 = sc_ntinuation_1af38b9f_v;
        X1 = UNKNOWNCALL( X1, 1 );
        VIA( PROCEDURE_CODE( X1 ) )( X2, PROCEDURE_CLOSURE( X1 ) );
        SDVAL = scrt1_reverse( PAIR_CAR( DISPLAY( 1 ) ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ng_2dmess_2da_2dword_80f3d4a_v );
DEFCSTRING( t12888, "PARSE-A-WORD" );
EXTERNTSCPP( scrt1_member, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_member_v );
EXTERNTSCPP( qobischeme_rest, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_rest_v );

TSCP  ng_2dmess_2da_2dword_80f3d4a( w12084, c12085, l12086 )
        TSCP  w12084, c12085, l12086;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t12888 );
        X4 = sc_cons( l12086, EMPTYLIST );
        X3 = sc_cons( w12084, X4 );
        X2 = sc_cons( c12085, X3 );
        X1 = X2;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12087, X1 );
        X2 = qobischeme_first( w12084 );
        if  ( FALSE( scrt1_member( X2, l12086 ) ) )  goto L12892;
        X6 = sc_cons( X2, EMPTYLIST );
        X5 = sc_cons( c12085, X6 );
        X4 = X5;
        X6 = qobischeme_rest( w12084 );
        X5 = sc_cons( X6, EMPTYLIST );
        X3 = sc_cons( X4, X5 );
        X1 = X3;
        goto L12893;
L12892:
        X3 = qobischeme_fail_v;
        X3 = UNKNOWNCALL( X3, 0 );
        X1 = VIA( PROCEDURE_CODE( X3 ) )( PROCEDURE_CLOSURE( X3 ) );
L12893:
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12090, X1 ) );
}

DEFTSCP( ng_2dmess__2dsubject_8d09c1ed_v );
DEFCSTRING( t12896, "DAN-PARSE-SUBJECT" );

TSCP  ng_2dmess__2dsubject_8d09c1ed( w12098 )
        TSCP  w12098;
{
        PUSHSTACKTRACE( t12896 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12098, 
                                                     c12099, 
                                                     ng_2dmess_ubjects_2a_cbd10769_v ) );
}

DEFTSCP( ng_2dmess_rse_2dverb_b132a8da_v );
DEFCSTRING( t12898, "DAN-PARSE-VERB" );

TSCP  ng_2dmess_rse_2dverb_b132a8da( w12101 )
        TSCP  w12101;
{
        PUSHSTACKTRACE( t12898 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12101, 
                                                     c12102, 
                                                     ng_2dmess_2dverbs_2a_62f300aa_v ) );
}

DEFTSCP( learning_2dmess_parse_2dnoun_v );
DEFCSTRING( t12900, "PARSE-NOUN" );

TSCP  learning_2dmess_parse_2dnoun( w12104 )
        TSCP  w12104;
{
        PUSHSTACKTRACE( t12900 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12104, 
                                                     c12105, 
                                                     ng_2dmess_phrases_2a_2c74134c_v ) );
}

DEFTSCP( ng_2dmess_onjunction_4b0be78b_v );
DEFCSTRING( t12902, "DAN-PARSE-TEMPORAL-CONJUNCTION" );

TSCP  ng_2dmess_onjunction_4b0be78b( w12107 )
        TSCP  w12107;
{
        PUSHSTACKTRACE( t12902 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12107, 
                                                     c12108, 
                                                     ng_2dmess_nctions_2a_934ccbc7_v ) );
}

DEFTSCP( ng_2dmess_reposition_e36fe7ce_v );
DEFCSTRING( t12904, "PARSE-ONE-OBJECT-ADVERB-PREPOSITION" );

TSCP  ng_2dmess_reposition_e36fe7ce( w12110 )
        TSCP  w12110;
{
        PUSHSTACKTRACE( t12904 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12110, 
                                                     c12111, 
                                                     ng_2dmess_sitions_2a_290ab50c_v ) );
}

DEFTSCP( ng_2dmess_reposition_12545bc2_v );
DEFCSTRING( t12906, "PARSE-TWO-OBJECT-ADVERB-PREPOSITION" );

TSCP  ng_2dmess_reposition_12545bc2( w12113 )
        TSCP  w12113;
{
        PUSHSTACKTRACE( t12906 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12113, 
                                                     c12114, 
                                                     ng_2dmess_sitions_2a_59902072_v ) );
}

DEFTSCP( ng_2dmess_reposition_b95ef1fc_v );
DEFCSTRING( t12908, "PARSE-ONE-OBJECT-ADJECTIVE-PREPOSITION" );

TSCP  ng_2dmess_reposition_b95ef1fc( w12116 )
        TSCP  w12116;
{
        PUSHSTACKTRACE( t12908 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12116, 
                                                     c12117, 
                                                     ng_2dmess_sitions_2a_67092856_v ) );
}

DEFTSCP( ng_2dmess_reposition_493f00f9_v );
DEFCSTRING( t12910, "PARSE-TWO-OBJECT-ADJECTIVE-PREPOSITION" );

TSCP  ng_2dmess_reposition_493f00f9( w12119 )
        TSCP  w12119;
{
        PUSHSTACKTRACE( t12910 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12119, 
                                                     c12120, 
                                                     ng_2dmess_sitions_2a_258a6979_v ) );
}

DEFTSCP( ng_2dmess_dphrase_3f_2052e4e3_v );
DEFCSTRING( t12912, "ANOTHER-PREPOSITIONAL-PHRASE?" );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( scrt2__3e_3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3e_3d_2dtwo_v );

TSCP  ng_2dmess_dphrase_3f_2052e4e3( w12122 )
        TSCP  w12122;
{
        TSCP  X4, X3, X2, X1;

        PUSHSTACKTRACE( t12912 );
        X2 = scrt1_length( w12122 );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L12915;
        X1 = BOOLEAN( GTE( _S2CINT( X2 ), 
                           _S2CINT( _TSCP( 8 ) ) ) );
        goto L12916;
L12915:
        X1 = scrt2__3e_3d_2dtwo( X2, _TSCP( 8 ) );
L12916:
        if  ( FALSE( X1 ) )  goto L12918;
        X3 = qobischeme_first( w12122 );
        X2 = scrt1_member( X3, ng_2dmess_nctions_2a_14999723_v );
        if  ( FALSE( X2 ) )  goto L12921;
        X4 = qobischeme_second( w12122 );
        X3 = scrt1_member( X4, ng_2dmess_sitions_2a_290ab50c_v );
        if  ( TRUE( X3 ) )  goto L12924;
        X4 = qobischeme_second( w12122 );
        POPSTACKTRACE( scrt1_member( X4, 
                                     ng_2dmess_sitions_2a_59902072_v ) );
L12924:
        POPSTACKTRACE( X3 );
L12921:
        POPSTACKTRACE( X2 );
L12918:
        POPSTACKTRACE( X1 );
}

DEFTSCP( ng_2dmess_onjunction_681a2621_v );
DEFCSTRING( t12926, "PARSE-CONJUNCTION" );

TSCP  ng_2dmess_onjunction_681a2621( w12143 )
        TSCP  w12143;
{
        PUSHSTACKTRACE( t12926 );
        POPSTACKTRACE( ng_2dmess_2da_2dword_80f3d4a( w12143, 
                                                     c12144, 
                                                     ng_2dmess_nctions_2a_14999723_v ) );
}

DEFTSCP( ng_2dmess_e_2dphrase_a49d7b45_v );
DEFCSTRING( t12928, "PARSE-ADJECTIVE-PHRASE" );
EXTERNTSCPP( qobischeme_a_2dboolean, XAL0(  ) );
EXTERNTSCP( qobischeme_a_2dboolean_v );
EXTERNTSCPP( scrt1_equal_3f, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt1_equal_3f_v );
EXTERNTSCPP( ng_2dmess_t_2dphrase_6bee7829, XAL1( TSCP ) );
EXTERNTSCP( ng_2dmess_t_2dphrase_6bee7829_v );
EXTERNTSCPP( ng_2dmess_e_2dphrase_a49d7b45, XAL1( TSCP ) );
EXTERNTSCP( ng_2dmess_e_2dphrase_a49d7b45_v );

TSCP  ng_2dmess_e_2dphrase_a49d7b45( w12146 )
        TSCP  w12146;
{
        TSCP  X31, 
              X30, 
              X29, 
              X28, 
              X27, 
              X26, 
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

        PUSHSTACKTRACE( t12928 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12147, w12146 );
        if  ( FALSE( qobischeme_a_2dboolean(  ) ) )  goto L12930;
        X9 = qobischeme_first( w12146 );
        if  ( FALSE( scrt1_equal_3f( X9, c12055 ) ) )  goto L12932;
        X11 = qobischeme_rest( w12146 );
        X10 = sc_cons( X11, EMPTYLIST );
        X9 = sc_cons( c12055, X10 );
        X8 = X9;
        goto L12933;
L12932:
        X9 = qobischeme_fail_v;
        X9 = UNKNOWNCALL( X9, 0 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L12933:
        X9 = qobischeme_second( X8 );
        X10 = ng_2dmess_reposition_b95ef1fc( X9 );
        X3 = qobischeme_first( X10 );
        X11 = qobischeme_second( X10 );
        X12 = ng_2dmess_t_2dphrase_6bee7829( X11 );
        X2 = qobischeme_first( X12 );
        X1 = qobischeme_second( X12 );
        X14 = scrt1_length( X1 );
        if  ( BITAND( BITOR( _S2CINT( X14 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L12944;
        X13 = BOOLEAN( GTE( _S2CINT( X14 ), 
                            _S2CINT( _TSCP( 8 ) ) ) );
        goto L12945;
L12944:
        X13 = scrt2__3e_3d_2dtwo( X14, _TSCP( 8 ) );
L12945:
        if  ( FALSE( X13 ) )  goto L12963;
        X15 = qobischeme_first( X1 );
        X14 = scrt1_equal_3f( X15, c12189 );
        if  ( FALSE( X14 ) )  goto L12963;
        X15 = qobischeme_second( X1 );
        if  ( FALSE( scrt1_equal_3f( X15, c12055 ) ) )  goto L12963;
        X16 = qobischeme_rest( X1 );
        X15 = ng_2dmess_e_2dphrase_a49d7b45( X16 );
        X16 = qobischeme_first( X15 );
        X17 = qobischeme_second( X15 );
        X25 = sc_cons( X2, EMPTYLIST );
        X24 = sc_cons( X3, X25 );
        X23 = X24;
        X24 = qobischeme_second( X16 );
        X22 = sc_cons( X23, X24 );
        X21 = sc_cons( X22, EMPTYLIST );
        X20 = sc_cons( c12195, X21 );
        X19 = X20;
        X20 = sc_cons( X17, EMPTYLIST );
        X18 = sc_cons( X19, X20 );
        POPSTACKTRACE( X18 );
L12930:
        X9 = qobischeme_first( w12146 );
        if  ( FALSE( scrt1_equal_3f( X9, c12055 ) ) )  goto L12964;
        X11 = qobischeme_rest( w12146 );
        X10 = sc_cons( X11, EMPTYLIST );
        X9 = sc_cons( c12055, X10 );
        X8 = X9;
        goto L12965;
L12964:
        X9 = qobischeme_fail_v;
        X9 = UNKNOWNCALL( X9, 0 );
        X8 = VIA( PROCEDURE_CODE( X9 ) )( PROCEDURE_CLOSURE( X9 ) );
L12965:
        X9 = qobischeme_second( X8 );
        X10 = ng_2dmess_reposition_493f00f9( X9 );
        X7 = qobischeme_first( X10 );
        X11 = qobischeme_second( X10 );
        X12 = ng_2dmess_t_2dphrase_6bee7829( X11 );
        X6 = qobischeme_first( X12 );
        X13 = qobischeme_second( X12 );
        X14 = ng_2dmess_onjunction_681a2621( X13 );
        X15 = qobischeme_first( X14 );
        X16 = qobischeme_second( X14 );
        X17 = ng_2dmess_t_2dphrase_6bee7829( X16 );
        X5 = qobischeme_first( X17 );
        X4 = qobischeme_second( X17 );
        X19 = scrt1_length( X4 );
        if  ( BITAND( BITOR( _S2CINT( X19 ), 
                             _S2CINT( _TSCP( 8 ) ) ), 
                      3 ) )  goto L12982;
        X18 = BOOLEAN( GTE( _S2CINT( X19 ), 
                            _S2CINT( _TSCP( 8 ) ) ) );
        goto L12983;
L12982:
        X18 = scrt2__3e_3d_2dtwo( X19, _TSCP( 8 ) );
L12983:
        if  ( FALSE( X18 ) )  goto L13001;
        X20 = qobischeme_first( X4 );
        X19 = scrt1_equal_3f( X20, c12189 );
        if  ( FALSE( X19 ) )  goto L13001;
        X20 = qobischeme_second( X4 );
        if  ( FALSE( scrt1_equal_3f( X20, c12055 ) ) )  goto L13001;
        X21 = qobischeme_rest( X4 );
        X20 = ng_2dmess_e_2dphrase_a49d7b45( X21 );
        X21 = qobischeme_first( X20 );
        X22 = qobischeme_second( X20 );
        X31 = sc_cons( X5, EMPTYLIST );
        X30 = sc_cons( X6, X31 );
        X29 = sc_cons( X7, X30 );
        X28 = X29;
        X29 = qobischeme_second( X21 );
        X27 = sc_cons( X28, X29 );
        X26 = sc_cons( X27, EMPTYLIST );
        X25 = sc_cons( c12195, X26 );
        X24 = X25;
        X25 = sc_cons( X22, EMPTYLIST );
        X23 = sc_cons( X24, X25 );
        POPSTACKTRACE( X23 );
L13001:
        X17 = sc_cons( X5, EMPTYLIST );
        X16 = sc_cons( X6, X17 );
        X15 = sc_cons( X7, X16 );
        X14 = X15;
        X13 = sc_cons( X14, EMPTYLIST );
        X12 = X13;
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = sc_cons( c12195, X11 );
        X9 = X10;
        X10 = sc_cons( X4, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        POPSTACKTRACE( X8 );
L12963:
        X16 = sc_cons( X2, EMPTYLIST );
        X15 = sc_cons( X3, X16 );
        X14 = X15;
        X13 = sc_cons( X14, EMPTYLIST );
        X12 = X13;
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = sc_cons( c12195, X11 );
        X9 = X10;
        X10 = sc_cons( X1, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        POPSTACKTRACE( X8 );
}

DEFTSCP( ng_2dmess_t_2dphrase_6bee7829_v );
DEFCSTRING( t13010, "PARSE-OBJECT-PHRASE" );

TSCP  ng_2dmess_t_2dphrase_6bee7829( w12267 )
        TSCP  w12267;
{
        TSCP  X15, 
              X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13010 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12268, w12267 );
        X2 = learning_2dmess_parse_2dnoun( w12267 );
        X4 = qobischeme_first( X2 );
        X3 = qobischeme_second( X2 );
        X6 = scrt1_length( X3 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13016;
        X5 = BOOLEAN( GTE( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L13017;
L13016:
        X5 = scrt2__3e_3d_2dtwo( X6, _TSCP( 4 ) );
L13017:
        if  ( FALSE( X5 ) )  goto L13030;
        X6 = qobischeme_first( X3 );
        if  ( FALSE( scrt1_equal_3f( X6, c12055 ) ) )  goto L13030;
        X6 = ng_2dmess_e_2dphrase_a49d7b45( X3 );
        X7 = qobischeme_first( X6 );
        X8 = qobischeme_second( X6 );
        X15 = sc_cons( X7, EMPTYLIST );
        X14 = sc_cons( X4, X15 );
        X13 = X14;
        X12 = sc_cons( X13, EMPTYLIST );
        X11 = sc_cons( c12291, X12 );
        X10 = X11;
        X11 = sc_cons( X8, EMPTYLIST );
        X9 = sc_cons( X10, X11 );
        X1 = X9;
        goto L13031;
L13030:
        X8 = sc_cons( X4, EMPTYLIST );
        X7 = sc_cons( c12291, X8 );
        X6 = X7;
        X7 = sc_cons( X3, EMPTYLIST );
        X5 = sc_cons( X6, X7 );
        X1 = X5;
L13031:
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12269, X1 ) );
}

DEFTSCP( ng_2dmess_l_2dphrase_81a6d1f5_v );
DEFCSTRING( t13034, "PARSE-PREPOSITIONAL-PHRASE" );
EXTERNTSCPP( ng_2dmess_l_2dphrase_81a6d1f5, XAL1( TSCP ) );
EXTERNTSCP( ng_2dmess_l_2dphrase_81a6d1f5_v );

TSCP  ng_2dmess_l_2dphrase_81a6d1f5( w12305 )
        TSCP  w12305;
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

        PUSHSTACKTRACE( t13034 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12306, w12305 );
        if  ( FALSE( qobischeme_a_2dboolean(  ) ) )  goto L13036;
        X2 = ng_2dmess_reposition_e36fe7ce( w12305 );
        X3 = qobischeme_first( X2 );
        X4 = qobischeme_second( X2 );
        X5 = ng_2dmess_t_2dphrase_6bee7829( X4 );
        X6 = qobischeme_first( X5 );
        X7 = qobischeme_second( X5 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12365, TRUEVALUE );
        X8 = ng_2dmess_dphrase_3f_2052e4e3( X7 );
        if  ( FALSE( ng_2dmess_r_2ddtrace_4f4f1b91( c12366, X8 ) )
            )  goto L13044;
        X9 = qobischeme_rest( X7 );
        X8 = ng_2dmess_l_2dphrase_81a6d1f5( X9 );
        X10 = qobischeme_first( X8 );
        X9 = ng_2dmess_r_2ddtrace_4f4f1b91( c12387, X10 );
        X10 = qobischeme_second( X8 );
        X18 = sc_cons( X6, EMPTYLIST );
        X17 = sc_cons( X3, X18 );
        X16 = X17;
        X15 = sc_cons( X16, EMPTYLIST );
        X14 = sc_cons( c12338, X15 );
        X13 = X14;
        X12 = sc_cons( X13, X9 );
        X13 = sc_cons( X10, EMPTYLIST );
        X11 = sc_cons( X12, X13 );
        X1 = X11;
        goto L13069;
L13044:
        X16 = sc_cons( X6, EMPTYLIST );
        X15 = sc_cons( X3, X16 );
        X14 = X15;
        X13 = sc_cons( X14, EMPTYLIST );
        X12 = sc_cons( c12338, X13 );
        X11 = X12;
        X10 = sc_cons( X11, EMPTYLIST );
        X9 = X10;
        X10 = sc_cons( X7, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X1 = X8;
        goto L13069;
L13036:
        X2 = ng_2dmess_reposition_12545bc2( w12305 );
        X3 = qobischeme_first( X2 );
        X4 = qobischeme_second( X2 );
        X5 = ng_2dmess_t_2dphrase_6bee7829( X4 );
        X6 = qobischeme_first( X5 );
        X7 = qobischeme_second( X5 );
        X8 = ng_2dmess_onjunction_681a2621( X7 );
        X9 = qobischeme_first( X8 );
        X10 = qobischeme_second( X8 );
        X11 = ng_2dmess_t_2dphrase_6bee7829( X10 );
        X12 = qobischeme_first( X11 );
        X13 = qobischeme_second( X11 );
        if  ( FALSE( ng_2dmess_dphrase_3f_2052e4e3( X13 ) ) )  goto L13068;
        X15 = qobischeme_rest( X13 );
        X14 = ng_2dmess_l_2dphrase_81a6d1f5( X15 );
        X15 = qobischeme_first( X14 );
        X16 = qobischeme_second( X14 );
        X26 = sc_cons( X12, EMPTYLIST );
        X25 = sc_cons( X9, X26 );
        X24 = sc_cons( X6, X25 );
        X23 = sc_cons( X3, X24 );
        X22 = X23;
        X21 = sc_cons( X22, EMPTYLIST );
        X20 = sc_cons( c12338, X21 );
        X19 = X20;
        X18 = sc_cons( X19, X15 );
        X19 = sc_cons( X16, EMPTYLIST );
        X17 = sc_cons( X18, X19 );
        X1 = X17;
        goto L13069;
L13068:
        X24 = sc_cons( X12, EMPTYLIST );
        X23 = sc_cons( X9, X24 );
        X22 = sc_cons( X6, X23 );
        X21 = sc_cons( X3, X22 );
        X20 = X21;
        X19 = sc_cons( X20, EMPTYLIST );
        X18 = sc_cons( c12338, X19 );
        X17 = X18;
        X16 = sc_cons( X17, EMPTYLIST );
        X15 = X16;
        X16 = sc_cons( X13, EMPTYLIST );
        X14 = sc_cons( X15, X16 );
        X1 = X14;
L13069:
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12307, X1 ) );
}

DEFTSCP( ng_2dmess_dpredicate_55c75dcb_v );
DEFCSTRING( t13080, "PARSE-PREDICATE" );

TSCP  ng_2dmess_dpredicate_55c75dcb( w12389 )
        TSCP  w12389;
{
        TSCP  X21, 
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

        PUSHSTACKTRACE( t13080 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12390, w12389 );
        X2 = ng_2dmess_rse_2dverb_b132a8da( w12389 );
        X3 = qobischeme_first( X2 );
        X4 = qobischeme_second( X2 );
        X5 = ng_2dmess_l_2dphrase_81a6d1f5( X4 );
        X6 = qobischeme_first( X5 );
        X7 = qobischeme_second( X5 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12404, X7 );
        if  ( NEQ( _S2CUINT( X7 ), _S2CUINT( EMPTYLIST ) ) )  goto L13088;
        X16 = sc_cons( X6, EMPTYLIST );
        X15 = sc_cons( X3, X16 );
        X14 = X15;
        X13 = sc_cons( X14, EMPTYLIST );
        X12 = X13;
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = sc_cons( c12426, X11 );
        X9 = X10;
        X10 = sc_cons( X7, EMPTYLIST );
        X8 = sc_cons( X9, X10 );
        X1 = X8;
        goto L13089;
L13088:
        X8 = ng_2dmess_onjunction_4b0be78b( X7 );
        X9 = qobischeme_first( X8 );
        X10 = qobischeme_second( X8 );
        X11 = ng_2dmess_dpredicate_55c75dcb( X10 );
        X12 = qobischeme_first( X11 );
        X13 = qobischeme_second( X11 );
        X21 = sc_cons( X6, EMPTYLIST );
        X20 = sc_cons( X3, X21 );
        X19 = X20;
        X20 = qobischeme_second( X12 );
        X18 = sc_cons( X19, X20 );
        X17 = sc_cons( X18, EMPTYLIST );
        X16 = sc_cons( c12426, X17 );
        X15 = X16;
        X16 = sc_cons( X13, EMPTYLIST );
        X14 = sc_cons( X15, X16 );
        X1 = X14;
L13089:
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12391, X1 ) );
}

DEFTSCP( ng_2dmess_2d_3ewords_d97696f9_v );
DEFCSTRING( t13103, "STRING->WORDS" );
EXTERNTSCPP( qobischeme_fields, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_fields_v );
EXTERNTSCPP( sc_string_2d_3esymbol, XAL1( TSCP ) );
EXTERNTSCP( sc_string_2d_3esymbol_v );
EXTERNTSCPP( qobischeme_string_2dupcase, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_string_2dupcase_v );
EXTERNTSCPP( toollib_2dmisc_string_2djoin, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( toollib_2dmisc_string_2djoin_v );
EXTERNTSCPP( learning_2dmess_l12445, XAL1( TSCP ) );

TSCP  learning_2dmess_l12445( s12447 )
        TSCP  s12447;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "LOOP [inside STRING->WORDS]" );
        if  ( EQ( _S2CUINT( s12447 ), 
                  _S2CUINT( EMPTYLIST ) ) )  goto L13108;
        X2 = EMPTYLIST;
        X3 = s12447;
L13111:
        X7 = scrt1_reverse( X2 );
        X6 = toollib_2dmisc_string_2djoin( c12470, X7 );
        X5 = qobischeme_string_2dupcase( X6 );
        X4 = sc_string_2d_3esymbol( X5 );
        if  ( FALSE( scrt1_member( X4, DISPLAY( 0 ) ) ) )  goto L13112;
        X8 = scrt1_reverse( X2 );
        X7 = toollib_2dmisc_string_2djoin( c12470, X8 );
        X6 = qobischeme_string_2dupcase( X7 );
        X5 = sc_string_2d_3esymbol( X6 );
        X6 = sc_cons( X3, EMPTYLIST );
        X4 = sc_cons( X5, X6 );
        X1 = X4;
        goto L13116;
L13112:
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13115;
        X5 = sc_cons( EMPTYLIST, EMPTYLIST );
        X4 = sc_cons( c12478, X5 );
        X1 = X4;
        goto L13116;
L13115:
        X5 = qobischeme_first( X3 );
        X4 = sc_cons( X5, X2 );
        X3 = qobischeme_rest( X3 );
        X2 = X4;
        GOBACK( L13111 );
L13116:
        X2 = qobischeme_second( X1 );
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13119;
        X3 = qobischeme_first( X1 );
        X2 = sc_cons( X3, EMPTYLIST );
        POPSTACKTRACE( X2 );
L13119:
        X2 = qobischeme_first( X1 );
        X4 = qobischeme_second( X1 );
        X3 = learning_2dmess_l12445( X4 );
        POPSTACKTRACE( sc_cons( X2, X3 ) );
L13108:
        POPSTACKTRACE( EMPTYLIST );
}

TSCP  ng_2dmess_2d_3ewords_d97696f9( s12438, s12439 )
        TSCP  s12438, s12439;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t13103 );
        DISPLAY( 0 ) = s12439;
        X1 = qobischeme_fields( s12438 );
        SDVAL = learning_2dmess_l12445( X1 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( ng_2dmess_references_37ba4c3d_v );
DEFCSTRING( t13122, "PARSED-OBJECT-PHRASE->LINKED-REFERENCES" );
EXTERNTSCPP( scrt2__2b_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2b_2dtwo_v );
EXTERNTSCPP( ng_2dmess_references_37ba4c3d, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( ng_2dmess_references_37ba4c3d_v );
EXTERNTSCPP( qobischeme_third, XAL1( TSCP ) );
EXTERNTSCP( qobischeme_third_v );

TSCP  ng_2dmess_references_37ba4c3d( t12483, m12484 )
        TSCP  t12483, m12484;
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

        PUSHSTACKTRACE( t13122 );
        X3 = sc_cons( m12484, EMPTYLIST );
        X2 = sc_cons( t12483, X3 );
        X1 = X2;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12485, X1 );
        X2 = t12483;
        X3 = EMPTYLIST;
        X4 = m12484;
        X5 = EMPTYLIST;
L13126:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13127;
        X8 = sc_cons( X4, EMPTYLIST );
        X7 = sc_cons( X5, X8 );
        X6 = sc_cons( X3, X7 );
        X1 = X6;
        goto L13131;
L13127:
        X9 = qobischeme_first( X2 );
        X8 = qobischeme_second( X9 );
        X7 = qobischeme_second( X8 );
        X6 = qobischeme_first( X7 );
        if  ( FALSE( scrt1_equal_3f( X6, c12105 ) ) )  goto L13130;
        X8 = qobischeme_first( X2 );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_second( X7 );
        X10 = qobischeme_first( X2 );
        X9 = qobischeme_second( X10 );
        X8 = qobischeme_second( X9 );
        X7 = qobischeme_second( X8 );
        X8 = qobischeme_first( X2 );
        ng_2dmess_r_2ddtrace_4f4f1b91( c12553, X8 );
        X10 = sc_cons( X7, EMPTYLIST );
        X9 = sc_cons( X6, X10 );
        X8 = X9;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12554, X8 );
        X8 = qobischeme_rest( X2 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13135;
        X13 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13136;
L13135:
        X13 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13136:
        X12 = sc_cons( X13, EMPTYLIST );
        X11 = sc_cons( X7, X12 );
        X10 = X11;
        X9 = sc_cons( X10, X3 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13138;
        X10 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13139;
L13138:
        X10 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13139:
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13140;
        X15 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13141;
L13140:
        X15 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13141:
        X14 = sc_cons( X15, EMPTYLIST );
        X13 = sc_cons( m12484, X14 );
        X12 = sc_cons( X6, X13 );
        X11 = X12;
        X5 = sc_cons( X11, X5 );
        X4 = X10;
        X3 = X9;
        X2 = X8;
        GOBACK( L13126 );
L13130:
        X8 = qobischeme_first( X2 );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_second( X7 );
        X11 = qobischeme_first( X2 );
        X10 = qobischeme_second( X11 );
        X9 = qobischeme_second( X10 );
        X8 = qobischeme_first( X9 );
        X7 = qobischeme_second( X8 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13145;
        X12 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13146;
L13145:
        X12 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13146:
        X11 = sc_cons( X12, EMPTYLIST );
        X10 = sc_cons( X7, X11 );
        X9 = X10;
        X8 = sc_cons( X9, X3 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13149;
        X14 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13150;
L13149:
        X14 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13150:
        X13 = sc_cons( X14, EMPTYLIST );
        X12 = sc_cons( m12484, X13 );
        X11 = sc_cons( X6, X12 );
        X10 = X11;
        X9 = sc_cons( X10, X5 );
        if  ( BITAND( BITOR( _S2CINT( X4 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13153;
        X10 = _TSCP( IPLUS( _S2CINT( X4 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13154;
L13153:
        X10 = scrt2__2b_2dtwo( X4, _TSCP( 4 ) );
L13154:
        X16 = qobischeme_first( X2 );
        X15 = qobischeme_second( X16 );
        X14 = qobischeme_second( X15 );
        X13 = qobischeme_second( X14 );
        X12 = qobischeme_second( X13 );
        X11 = ng_2dmess_references_37ba4c3d( X12, X10 );
        X14 = sc_cons( X7, EMPTYLIST );
        X13 = sc_cons( X6, X14 );
        X12 = X13;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12518, X12 );
        X12 = qobischeme_rest( X2 );
        X14 = qobischeme_first( X11 );
        X13 = scrt1_append_2dtwo( X8, X14 );
        X15 = qobischeme_third( X11 );
        if  ( BITAND( BITOR( _S2CINT( X15 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13159;
        X14 = _TSCP( IPLUS( _S2CINT( X15 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13160;
L13159:
        X14 = scrt2__2b_2dtwo( X15, _TSCP( 4 ) );
L13160:
        X15 = qobischeme_second( X11 );
        X5 = scrt1_append_2dtwo( X9, X15 );
        X4 = X14;
        X3 = X13;
        X2 = X12;
        GOBACK( L13126 );
L13131:
        POPSTACKTRACE( ng_2dmess_r_2ddtrace_4f4f1b91( c12488, X1 ) );
}

DEFTSCP( ng_2dmess_references_ec14fedd_v );
DEFCSTRING( t13161, "PARSED-PREPOSITIONAL-PHRASE->LINKED-REFERENCES" );

TSCP  ng_2dmess_references_ec14fedd( t12582, r12583 )
        TSCP  t12582, r12583;
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

        PUSHSTACKTRACE( t13161 );
        X3 = sc_cons( r12583, EMPTYLIST );
        X2 = sc_cons( t12582, X3 );
        X1 = X2;
        ng_2dmess_r_2ddtrace_4f4f1b91( c12584, X1 );
        X1 = t12582;
        X2 = EMPTYLIST;
        X3 = r12583;
        X4 = EMPTYLIST;
L13165:
        if  ( NEQ( _S2CUINT( X1 ), _S2CUINT( EMPTYLIST ) ) )  goto L13166;
        X7 = sc_cons( X3, EMPTYLIST );
        X6 = sc_cons( X4, X7 );
        X5 = sc_cons( X2, X6 );
        POPSTACKTRACE( X5 );
L13166:
        X9 = qobischeme_first( X1 );
        X8 = qobischeme_second( X9 );
        X7 = qobischeme_second( X8 );
        X6 = qobischeme_second( X7 );
        X5 = qobischeme_first( X6 );
        if  ( FALSE( scrt1_equal_3f( X5, c12105 ) ) )  goto L13169;
        X8 = qobischeme_first( X1 );
        X7 = qobischeme_second( X8 );
        X6 = qobischeme_first( X7 );
        X5 = qobischeme_second( X6 );
        X10 = qobischeme_first( X1 );
        X9 = qobischeme_second( X10 );
        X8 = qobischeme_second( X9 );
        X7 = qobischeme_second( X8 );
        X6 = qobischeme_second( X7 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13173;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L13174;
L13173:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L13174:
        X11 = sc_cons( X7, EMPTYLIST );
        X10 = sc_cons( X6, X11 );
        X9 = X10;
        X8 = sc_cons( X9, X2 );
        X13 = sc_cons( X7, EMPTYLIST );
        X12 = sc_cons( r12583, X13 );
        X11 = sc_cons( X5, X12 );
        X10 = X11;
        X9 = sc_cons( X10, X4 );
        X10 = qobischeme_rest( X1 );
        X4 = X9;
        X3 = X7;
        X2 = X8;
        X1 = X10;
        GOBACK( L13165 );
L13169:
        X8 = qobischeme_first( X1 );
        X7 = qobischeme_second( X8 );
        X6 = qobischeme_first( X7 );
        X5 = qobischeme_second( X6 );
        X11 = qobischeme_first( X1 );
        X10 = qobischeme_second( X11 );
        X9 = qobischeme_second( X10 );
        X8 = qobischeme_second( X9 );
        X7 = qobischeme_first( X8 );
        X6 = qobischeme_second( X7 );
        if  ( BITAND( BITOR( _S2CINT( X3 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13182;
        X7 = _TSCP( IPLUS( _S2CINT( X3 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L13183;
L13182:
        X7 = scrt2__2b_2dtwo( X3, _TSCP( 4 ) );
L13183:
        X11 = sc_cons( X7, EMPTYLIST );
        X10 = sc_cons( X6, X11 );
        X9 = X10;
        X8 = sc_cons( X9, X2 );
        X13 = sc_cons( X7, EMPTYLIST );
        X12 = sc_cons( r12583, X13 );
        X11 = sc_cons( X5, X12 );
        X10 = X11;
        X9 = sc_cons( X10, X4 );
        X16 = qobischeme_first( X1 );
        X15 = qobischeme_second( X16 );
        X14 = qobischeme_second( X15 );
        X13 = qobischeme_second( X14 );
        X12 = qobischeme_second( X13 );
        X11 = qobischeme_second( X12 );
        X10 = ng_2dmess_references_37ba4c3d( X11, X7 );
        X11 = qobischeme_rest( X1 );
        X13 = qobischeme_first( X10 );
        X12 = scrt1_append_2dtwo( X8, X13 );
        X13 = qobischeme_third( X10 );
        X14 = qobischeme_second( X10 );
        X4 = scrt1_append_2dtwo( X9, X14 );
        X3 = X13;
        X2 = X12;
        X1 = X11;
        GOBACK( L13165 );
}

DEFTSCP( ng_2dmess_rse_2dtree_988a2bff_v );
DEFCSTRING( t13190, "SIMPLIFY-PARSE-TREE" );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  ng_2dmess_rse_2dtree_988a2bff( p12649 )
        TSCP  p12649;
{
        TSCP  X14, 
              X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13190 );
        X4 = qobischeme_first( p12649 );
        X3 = qobischeme_second( X4 );
        X2 = qobischeme_second( X3 );
        X1 = qobischeme_second( X2 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = EMPTYLIST;
L13194:
        if  ( EQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13195;
        if  ( EQ( TSCPTAG( X2 ), PAIRTAG ) )  goto L13198;
        scrt1__24__car_2derror( X2 );
L13198:
        X7 = PAIR_CAR( X2 );
        X8 = qobischeme_second( X7 );
        X9 = X8;
        X10 = EMPTYLIST;
        X11 = EMPTYLIST;
L13203:
        if  ( NEQ( _S2CUINT( X9 ), _S2CUINT( EMPTYLIST ) ) )  goto L13204;
        X6 = X10;
        goto L13212;
L13204:
        if  ( EQ( TSCPTAG( X9 ), PAIRTAG ) )  goto L13207;
        scrt1__24__car_2derror( X9 );
L13207:
        X14 = PAIR_CAR( X9 );
        X13 = X14;
        X12 = sc_cons( X13, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X10 ), _S2CUINT( EMPTYLIST ) ) )  goto L13211;
        X13 = PAIR_CDR( X9 );
        X11 = X12;
        X10 = X12;
        X9 = X13;
        GOBACK( L13203 );
L13211:
        X13 = PAIR_CDR( X9 );
        if  ( EQ( TSCPTAG( X11 ), PAIRTAG ) )  goto L13216;
        scdebug_error( c12684, 
                       c12685, CONS( X11, EMPTYLIST ) );
L13216:
        X11 = SETGEN( PAIR_CDR( X11 ), X12 );
        X9 = X13;
        GOBACK( L13203 );
L13212:
        X5 = sc_cons( X6, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X3 ), _S2CUINT( EMPTYLIST ) ) )  goto L13219;
        X6 = PAIR_CDR( X2 );
        X4 = X5;
        X3 = X5;
        X2 = X6;
        GOBACK( L13194 );
L13219:
        X6 = PAIR_CDR( X2 );
        if  ( EQ( TSCPTAG( X4 ), PAIRTAG ) )  goto L13224;
        scdebug_error( c12684, 
                       c12685, CONS( X4, EMPTYLIST ) );
L13224:
        X4 = SETGEN( PAIR_CDR( X4 ), X5 );
        X2 = X6;
        GOBACK( L13194 );
L13195:
        POPSTACKTRACE( X3 );
}

DEFTSCP( ng_2dmess_references_dfcb79f2_v );
DEFCSTRING( t13226, "PARSED-SENTENCE->LINKED-REFERENCES" );

TSCP  ng_2dmess_references_dfcb79f2( p12741 )
        TSCP  p12741;
{
        TSCP  X13, 
              X12, 
              X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t13226 );
        X1 = ng_2dmess_rse_2dtree_988a2bff( p12741 );
        X2 = X1;
        X3 = EMPTYLIST;
        X4 = _TSCP( 0 );
        X5 = EMPTYLIST;
        X6 = _TSCP( 0 );
L13230:
        if  ( NEQ( _S2CUINT( X2 ), _S2CUINT( EMPTYLIST ) ) )  goto L13231;
        X8 = sc_cons( X5, EMPTYLIST );
        X7 = sc_cons( X3, X8 );
        POPSTACKTRACE( X7 );
L13231:
        X11 = sc_cons( X6, EMPTYLIST );
        X10 = sc_cons( X4, X11 );
        X9 = sc_cons( c12781, X10 );
        X8 = X9;
        X7 = sc_cons( X8, X3 );
        X9 = qobischeme_first( X2 );
        X8 = ng_2dmess_references_ec14fedd( X9, X4 );
        X9 = qobischeme_rest( X2 );
        X11 = qobischeme_first( X8 );
        X10 = scrt1_append_2dtwo( X7, X11 );
        X12 = qobischeme_third( X8 );
        if  ( BITAND( BITOR( _S2CINT( X12 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13238;
        X11 = _TSCP( IPLUS( _S2CINT( X12 ), 
                            _S2CINT( _TSCP( 4 ) ) ) );
        goto L13239;
L13238:
        X11 = scrt2__2b_2dtwo( X12, _TSCP( 4 ) );
L13239:
        X13 = qobischeme_second( X8 );
        X12 = scrt1_append_2dtwo( X5, X13 );
        if  ( BITAND( BITOR( _S2CINT( X6 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L13240;
        X6 = _TSCP( IPLUS( _S2CINT( X6 ), 
                           _S2CINT( _TSCP( 4 ) ) ) );
        goto L13241;
L13240:
        X6 = scrt2__2b_2dtwo( X6, _TSCP( 4 ) );
L13241:
        X5 = X12;
        X4 = X11;
        X3 = X10;
        X2 = X9;
        GOBACK( L13230 );
}

void scdebug__init();
void scrt2__init();
void qobischeme__init();
void scrt1__init();
void toollib_2dmisc__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt2__init();
        qobischeme__init();
        scrt1__init();
        toollib_2dmisc__init();
        MAXDISPLAY( 4 );
}

void  learning_2dmess__init()
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(learning_2dmess SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t12855, 
                       ADR( ng_2dmess_rser_3f_2a_d476e89f_v ), 
                       FALSEVALUE );
        INITIALIZEVAR( t12856, 
                       ADR( ng_2dmess_r_2ddtrace_4f4f1b91_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ng_2dmess_r_2ddtrace_4f4f1b91, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12860, 
                       ADR( ng_2dmess_ubjects_2a_cbd10769_v ), 
                       c12045 );
        INITIALIZEVAR( t12861, 
                       ADR( ng_2dmess_2dverbs_2a_62f300aa_v ), 
                       c12046 );
        INITIALIZEVAR( t12862, 
                       ADR( ng_2dmess_sitions_2a_290ab50c_v ), 
                       c12047 );
        INITIALIZEVAR( t12863, 
                       ADR( ng_2dmess_sitions_2a_67092856_v ), 
                       c12048 );
        INITIALIZEVAR( t12864, 
                       ADR( ng_2dmess_sitions_2a_59902072_v ), 
                       c12049 );
        INITIALIZEVAR( t12865, 
                       ADR( ng_2dmess_sitions_2a_258a6979_v ), 
                       c12049 );
        INITIALIZEVAR( t12866, 
                       ADR( ng_2dmess_phrases_2a_2c74134c_v ), 
                       c12050 );
        INITIALIZEVAR( t12867, 
                       ADR( ng_2dmess_nctions_2a_14999723_v ), 
                       c12051 );
        INITIALIZEVAR( t12868, 
                       ADR( ng_2dmess_nctions_2a_934ccbc7_v ), 
                       c12052 );
        X1 = sc_cons( c12055, EMPTYLIST );
        INITIALIZEVAR( t12869, 
                       ADR( ng_2dmess_nectors_2a_ec5fc44e_v ), 
                       X1 );
        X8 = scrt1_append_2dtwo( ng_2dmess_nctions_2a_934ccbc7_v, 
                                 ng_2dmess_nectors_2a_ec5fc44e_v );
        X7 = scrt1_append_2dtwo( ng_2dmess_nctions_2a_14999723_v, X8 );
        X6 = scrt1_append_2dtwo( ng_2dmess_phrases_2a_2c74134c_v, X7 );
        X5 = scrt1_append_2dtwo( ng_2dmess_sitions_2a_258a6979_v, X6 );
        X4 = scrt1_append_2dtwo( ng_2dmess_sitions_2a_59902072_v, X5 );
        X3 = scrt1_append_2dtwo( ng_2dmess_sitions_2a_67092856_v, X4 );
        X2 = scrt1_append_2dtwo( ng_2dmess_sitions_2a_290ab50c_v, X3 );
        X1 = scrt1_append_2dtwo( ng_2dmess_2dverbs_2a_62f300aa_v, X2 );
        INITIALIZEVAR( t12871, 
                       ADR( ng_2dmess_2dwords_2a_aadd3a56_v ), 
                       scrt1_append_2dtwo( ng_2dmess_ubjects_2a_cbd10769_v, 
                                           X1 ) );
        INITIALIZEVAR( t12872, 
                       ADR( ng_2dmess_2dsentence_fe2248ab_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_2dsentence_fe2248ab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12874, 
                       ADR( learning_2dmess_parse_2dwords_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      learning_2dmess_parse_2dwords, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12888, 
                       ADR( ng_2dmess_2da_2dword_80f3d4a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      ng_2dmess_2da_2dword_80f3d4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12896, 
                       ADR( ng_2dmess__2dsubject_8d09c1ed_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess__2dsubject_8d09c1ed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12898, 
                       ADR( ng_2dmess_rse_2dverb_b132a8da_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_rse_2dverb_b132a8da, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12900, 
                       ADR( learning_2dmess_parse_2dnoun_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      learning_2dmess_parse_2dnoun, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12902, 
                       ADR( ng_2dmess_onjunction_4b0be78b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_onjunction_4b0be78b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12904, 
                       ADR( ng_2dmess_reposition_e36fe7ce_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_reposition_e36fe7ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12906, 
                       ADR( ng_2dmess_reposition_12545bc2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_reposition_12545bc2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12908, 
                       ADR( ng_2dmess_reposition_b95ef1fc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_reposition_b95ef1fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12910, 
                       ADR( ng_2dmess_reposition_493f00f9_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_reposition_493f00f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12912, 
                       ADR( ng_2dmess_dphrase_3f_2052e4e3_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_dphrase_3f_2052e4e3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12926, 
                       ADR( ng_2dmess_onjunction_681a2621_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_onjunction_681a2621, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12928, 
                       ADR( ng_2dmess_e_2dphrase_a49d7b45_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_e_2dphrase_a49d7b45, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13010, 
                       ADR( ng_2dmess_t_2dphrase_6bee7829_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_t_2dphrase_6bee7829, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13034, 
                       ADR( ng_2dmess_l_2dphrase_81a6d1f5_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_l_2dphrase_81a6d1f5, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13080, 
                       ADR( ng_2dmess_dpredicate_55c75dcb_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_dpredicate_55c75dcb, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13103, 
                       ADR( ng_2dmess_2d_3ewords_d97696f9_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ng_2dmess_2d_3ewords_d97696f9, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13122, 
                       ADR( ng_2dmess_references_37ba4c3d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ng_2dmess_references_37ba4c3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13161, 
                       ADR( ng_2dmess_references_ec14fedd_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      ng_2dmess_references_ec14fedd, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13190, 
                       ADR( ng_2dmess_rse_2dtree_988a2bff_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_rse_2dtree_988a2bff, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13226, 
                       ADR( ng_2dmess_references_dfcb79f2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      ng_2dmess_references_dfcb79f2, 
                                      EMPTYLIST ) );
        return;
}
