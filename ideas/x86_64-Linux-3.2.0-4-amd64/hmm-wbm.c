
/* SCHEME->C */

#include <objects.h>

void hmm_2dwbm__init();
DEFCSTRING( t13694, "Argument not a PAIR: ~s" );
DEFSTATICTSCP( c13144 );
DEFSTATICTSCP( c13143 );
DEFCSTRING( t13695, "SET-PSI-B! error" );
DEFSTATICTSCP( c12621 );
DEFCSTRING( t13696, "PSI-B error" );
DEFSTATICTSCP( c12606 );
DEFCSTRING( t13697, "LOCAL-SET-PSI-B! error" );
DEFSTATICTSCP( c12602 );
DEFCSTRING( t13698, "SET-PSI-A! error" );
DEFSTATICTSCP( c12586 );
DEFCSTRING( t13699, "PSI-A error" );
DEFSTATICTSCP( c12571 );
DEFCSTRING( t13700, "LOCAL-SET-PSI-A! error" );
DEFSTATICTSCP( c12567 );
DEFCSTRING( t13701, "SET-PSI-PARAMETERS! error" );
DEFSTATICTSCP( c12551 );
DEFCSTRING( t13702, "PSI-PARAMETERS error" );
DEFSTATICTSCP( c12536 );
DEFCSTRING( t13703, "LOCAL-SET-PSI-PARAMETERS! error" );
DEFSTATICTSCP( c12532 );
DEFCSTRING( t13704, "SET-PSI-N-ROLES! error" );
DEFSTATICTSCP( c12516 );
DEFCSTRING( t13705, "PSI-N-ROLES error" );
DEFSTATICTSCP( c12501 );
DEFCSTRING( t13706, "LOCAL-SET-PSI-N-ROLES! error" );
DEFSTATICTSCP( c12497 );
DEFCSTRING( t13707, "SET-PSI-FEATURES! error" );
DEFSTATICTSCP( c12481 );
DEFCSTRING( t13708, "PSI-FEATURES error" );
DEFSTATICTSCP( c12466 );
DEFCSTRING( t13709, "LOCAL-SET-PSI-FEATURES! error" );
DEFSTATICTSCP( c12462 );
DEFCSTRING( t13710, "SET-PSI-PART-OF-SPEECH! error" );
DEFSTATICTSCP( c12446 );
DEFCSTRING( t13711, "PSI-PART-OF-SPEECH error" );
DEFSTATICTSCP( c12431 );
DEFCSTRING( t13712, "LOCAL-SET-PSI-PART-OF-SPEECH! error" );
DEFSTATICTSCP( c12427 );
DEFCSTRING( t13713, "SET-PSI-NAME! error" );
DEFSTATICTSCP( c12411 );
DEFCSTRING( t13714, "PSI-NAME error" );
DEFSTATICTSCP( c12396 );
DEFCSTRING( t13715, "LOCAL-SET-PSI-NAME! error" );
DEFSTATICTSCP( c12392 );
DEFSTATICTSCP( c12382 );
DEFSTATICTSCP( c12372 );
DEFSTATICTSCP( c12261 );
DEFCSTRING( t13716, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12259 );
DEFCSTRING( t13717, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12255 );
DEFCSTRING( t13718, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12252 );
DEFSTATICTSCP( c12251 );

static void  init_constants()
{
        c13144 = CSTRING_TSCP( t13694 );
        CONSTANTEXP( ADR( c13144 ) );
        c13143 = STRINGTOSYMBOL( CSTRING_TSCP( "SET-CDR!" ) );
        CONSTANTEXP( ADR( c13143 ) );
        c12621 = CSTRING_TSCP( t13695 );
        CONSTANTEXP( ADR( c12621 ) );
        c12606 = CSTRING_TSCP( t13696 );
        CONSTANTEXP( ADR( c12606 ) );
        c12602 = CSTRING_TSCP( t13697 );
        CONSTANTEXP( ADR( c12602 ) );
        c12586 = CSTRING_TSCP( t13698 );
        CONSTANTEXP( ADR( c12586 ) );
        c12571 = CSTRING_TSCP( t13699 );
        CONSTANTEXP( ADR( c12571 ) );
        c12567 = CSTRING_TSCP( t13700 );
        CONSTANTEXP( ADR( c12567 ) );
        c12551 = CSTRING_TSCP( t13701 );
        CONSTANTEXP( ADR( c12551 ) );
        c12536 = CSTRING_TSCP( t13702 );
        CONSTANTEXP( ADR( c12536 ) );
        c12532 = CSTRING_TSCP( t13703 );
        CONSTANTEXP( ADR( c12532 ) );
        c12516 = CSTRING_TSCP( t13704 );
        CONSTANTEXP( ADR( c12516 ) );
        c12501 = CSTRING_TSCP( t13705 );
        CONSTANTEXP( ADR( c12501 ) );
        c12497 = CSTRING_TSCP( t13706 );
        CONSTANTEXP( ADR( c12497 ) );
        c12481 = CSTRING_TSCP( t13707 );
        CONSTANTEXP( ADR( c12481 ) );
        c12466 = CSTRING_TSCP( t13708 );
        CONSTANTEXP( ADR( c12466 ) );
        c12462 = CSTRING_TSCP( t13709 );
        CONSTANTEXP( ADR( c12462 ) );
        c12446 = CSTRING_TSCP( t13710 );
        CONSTANTEXP( ADR( c12446 ) );
        c12431 = CSTRING_TSCP( t13711 );
        CONSTANTEXP( ADR( c12431 ) );
        c12427 = CSTRING_TSCP( t13712 );
        CONSTANTEXP( ADR( c12427 ) );
        c12411 = CSTRING_TSCP( t13713 );
        CONSTANTEXP( ADR( c12411 ) );
        c12396 = CSTRING_TSCP( t13714 );
        CONSTANTEXP( ADR( c12396 ) );
        c12392 = CSTRING_TSCP( t13715 );
        CONSTANTEXP( ADR( c12392 ) );
        c12382 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12382 ) );
        c12372 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12372 ) );
        c12261 = STRINGTOSYMBOL( CSTRING_TSCP( "PSI" ) );
        CONSTANTEXP( ADR( c12261 ) );
        c12259 = CSTRING_TSCP( t13716 );
        CONSTANTEXP( ADR( c12259 ) );
        c12255 = CSTRING_TSCP( t13717 );
        CONSTANTEXP( ADR( c12255 ) );
        c12252 = CSTRING_TSCP( t13718 );
        CONSTANTEXP( ADR( c12252 ) );
        c12251 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-SET!" ) );
        CONSTANTEXP( ADR( c12251 ) );
}

DEFTSCP( hmm_2dwbm_bm_2d1_2d0_a86574ef_v );
DEFCSTRING( t13719, "gensym-hmm_2dwbm-1-0" );

TSCP  hmm_2dwbm_bm_2d1_2d0_a86574ef(  )
{
        PUSHSTACKTRACE( t13719 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_hmm_2dwbm_2_0(){ return 1;gensym_hmm_2dwbm_2_0( );
}

DEFTSCP( hmm_2dwbm_bm_2d3_2d0_d2a5278f_v );
DEFCSTRING( t13721, "gensym-hmm_2dwbm-3-0" );

TSCP  hmm_2dwbm_bm_2d3_2d0_d2a5278f(  )
{
        PUSHSTACKTRACE( t13721 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_hmm_2dwbm_4_0(){ return 1;gensym_hmm_2dwbm_4_0( );
}

DEFTSCP( hmm_2dwbm_bm_2d5_2d0_5de5d22f_v );
DEFCSTRING( t13723, "gensym-hmm_2dwbm-5-0" );

TSCP  hmm_2dwbm_bm_2d5_2d0_5de5d22f(  )
{
        PUSHSTACKTRACE( t13723 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_hmm_2dwbm_6_0(){ return 1;gensym_hmm_2dwbm_6_0( );
}

DEFTSCP( hmm_2dwbm_bm_2d7_2d0_2725814f_v );
DEFCSTRING( t13725, "gensym-hmm_2dwbm-7-0" );

TSCP  hmm_2dwbm_bm_2d7_2d0_2725814f(  )
{
        PUSHSTACKTRACE( t13725 );
        POPSTACKTRACE( 0 );}
  #include<hmm-def.h>
int gensym_hmm_2dwbm_8_0(){ return 1;gensym_hmm_2dwbm_8_0( );
}

DEFTSCP( hmm_2dwbm_bm_2d9_2d0_98153f2e_v );
DEFCSTRING( t13727, "gensym-hmm_2dwbm-9-0" );

TSCP  hmm_2dwbm_bm_2d9_2d0_98153f2e(  )
{
        PUSHSTACKTRACE( t13727 );
        POPSTACKTRACE( 0 );}
  #include<hmm.h>
int gensym_hmm_2dwbm_10_0(){ return 1;gensym_hmm_2dwbm_10_0( );
}

DEFTSCP( hmm_2dwbm_m_2d11_2d0_4f6c8691_v );
DEFCSTRING( t13729, "gensym-hmm_2dwbm-11-0" );

TSCP  hmm_2dwbm_m_2d11_2d0_4f6c8691(  )
{
        PUSHSTACKTRACE( t13729 );
        POPSTACKTRACE( 0 );}
  #include<hmm-data.h>
int gensym_hmm_2dwbm_12_0(){ return 1;gensym_hmm_2dwbm_12_0( );
}

DEFTSCP( hmm_2dwbm_m_2d13_2d0_35acd5f1_v );
DEFCSTRING( t13731, "gensym-hmm_2dwbm-13-0" );

TSCP  hmm_2dwbm_m_2d13_2d0_35acd5f1(  )
{
        PUSHSTACKTRACE( t13731 );
        POPSTACKTRACE( 0 );}
  #include<hmm-control.h>
int gensym_hmm_2dwbm_14_0(){ return 1;gensym_hmm_2dwbm_14_0( );
}

DEFTSCP( hmm_2dwbm_m_2d15_2d0_baec2051_v );
DEFCSTRING( t13733, "gensym-hmm_2dwbm-15-0" );

TSCP  hmm_2dwbm_m_2d15_2d0_baec2051(  )
{
        PUSHSTACKTRACE( t13733 );
        POPSTACKTRACE( 0 );}
  #include<hmm-features.h>
int gensym_hmm_2dwbm_16_0(){ return 1;gensym_hmm_2dwbm_16_0( );
}

DEFTSCP( hmm_2dwbm_m_2d17_2d0_c02c7331_v );
DEFCSTRING( t13735, "gensym-hmm_2dwbm-17-0" );

TSCP  hmm_2dwbm_m_2d17_2d0_c02c7331(  )
{
        PUSHSTACKTRACE( t13735 );
        POPSTACKTRACE( 0 );}
  #include<idealib-c.h>
int gensym_hmm_2dwbm_18_0(){ return 1;gensym_hmm_2dwbm_18_0( );
}

DEFTSCP( hmm_2dwbm_make_2dpsi_v );
DEFCSTRING( t13737, "MAKE-PSI" );
EXTERNTSCPP( sc_make_2dvector, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_make_2dvector_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  hmm_2dwbm_make_2dpsi( n12236, 
                            p12237, 
                            f12238, 
                            n12239, p12240, a12241, b12242 )
        TSCP  n12236, 
              p12237, 
              f12238, n12239, p12240, a12241, b12242;
{
        TSCP  X1;

        PUSHSTACKTRACE( t13737 );
        X1 = sc_make_2dvector( _TSCP( 32 ), EMPTYLIST );
        if  ( AND( EQ( TSCPTAG( X1 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X1 ), VECTORTAG ) ) )  goto L13741;
        scdebug_error( c12251, 
                       c12252, CONS( X1, EMPTYLIST ) );
L13741:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L13743;
        scdebug_error( c12251, 
                       c12255, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13743:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13745;
        scdebug_error( c12251, 
                       c12259, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13745:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 0 ) ), c12261 );
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13748;
        scdebug_error( c12251, 
                       c12255, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13748:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13750;
        scdebug_error( c12251, 
                       c12259, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13750:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 4 ) ), n12236 );
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13753;
        scdebug_error( c12251, 
                       c12255, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13753:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13755;
        scdebug_error( c12251, 
                       c12259, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13755:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 8 ) ), p12237 );
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13758;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13758:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13760;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13760:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 12 ) ), f12238 );
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13763;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13763:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13765;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13765:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 16 ) ), n12239 );
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13768;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13768:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13770;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13770:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 20 ) ), p12240 );
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L13773;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13773:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13775;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13775:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 24 ) ), a12241 );
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L13778;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13778:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X1 ) ) ) )  goto L13780;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13780:
        SETGEN( VECTOR_ELEMENT( X1, _TSCP( 28 ) ), b12242 );
        POPSTACKTRACE( X1 );
}

DEFTSCP( hmm_2dwbm_psi_3f_v );
DEFCSTRING( t13782, "PSI?" );
EXTERNTSCPP( scrt2__3d_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__3d_2dtwo_v );

TSCP  hmm_2dwbm_psi_3f( o12349 )
        TSCP  o12349;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t13782 );
        if  ( NOT( AND( EQ( TSCPTAG( o12349 ), EXTENDEDTAG ), 
                        EQ( TSCP_EXTENDEDTAG( o12349 ), 
                            VECTORTAG ) ) ) )  goto L13784;
        X2 = C_FIXED( VECTOR_LENGTH( o12349 ) );
        if  ( BITAND( BITOR( _S2CINT( X2 ), 
                             _S2CINT( _TSCP( 32 ) ) ), 
                      3 ) )  goto L13788;
        X1 = BOOLEAN( EQ( _S2CUINT( X2 ), 
                          _S2CUINT( _TSCP( 32 ) ) ) );
        goto L13789;
L13788:
        X1 = scrt2__3d_2dtwo( X2, _TSCP( 32 ) );
L13789:
        if  ( FALSE( X1 ) )  goto L13791;
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L13794;
        scdebug_error( c12382, 
                       c12255, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13794:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( o12349 ) ) ) )  goto L13796;
        scdebug_error( c12382, 
                       c12259, CONS( _TSCP( 0 ), EMPTYLIST ) );
L13796:
        X2 = VECTOR_ELEMENT( o12349, _TSCP( 0 ) );
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X2 ), 
                                    _S2CUINT( c12261 ) ) ) );
L13791:
        POPSTACKTRACE( X1 );
L13784:
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm__2dname_21_e1f48be_v );
DEFCSTRING( t13798, "LOCAL-SET-PSI-NAME!" );
EXTERNTSCPP( qobischeme_panic, XAL2( TSCP, TSCP ) );
EXTERNTSCP( qobischeme_panic_v );
EXTERNTSCPP( obischeme_r_2dset_21_3e0bb247, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( obischeme_r_2dset_21_3e0bb247_v );

TSCP  hmm_2dwbm__2dname_21_e1f48be( t12390, o12391 )
        TSCP  t12390, o12391;
{
        PUSHSTACKTRACE( t13798 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12390 ) ) )  goto L13800;
        qobischeme_panic( c12392, EMPTYLIST );
L13800:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12390, 
                                                      _TSCP( 4 ), 
                                                      o12391 ) );
}

DEFTSCP( hmm_2dwbm_psi_2dname_v );
DEFCSTRING( t13802, "PSI-NAME" );

TSCP  hmm_2dwbm_psi_2dname( t12395 )
        TSCP  t12395;
{
        PUSHSTACKTRACE( t13802 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12395 ) ) )  goto L13804;
        qobischeme_panic( c12396, EMPTYLIST );
L13804:
        if  ( AND( EQ( TSCPTAG( t12395 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12395 ), VECTORTAG ) )
            )  goto L13807;
        scdebug_error( c12382, 
                       c12252, CONS( t12395, EMPTYLIST ) );
L13807:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13809;
        scdebug_error( c12382, 
                       c12255, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13809:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12395 ) ) ) )  goto L13811;
        scdebug_error( c12382, 
                       c12259, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13811:
        POPSTACKTRACE( VECTOR_ELEMENT( t12395, _TSCP( 4 ) ) );
}

DEFTSCP( hmm_2dwbm_set_2dpsi_2dname_21_v );
DEFCSTRING( t13813, "SET-PSI-NAME!" );

TSCP  hmm_2dwbm_set_2dpsi_2dname_21( t12409, o12410 )
        TSCP  t12409, o12410;
{
        PUSHSTACKTRACE( t13813 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12409 ) ) )  goto L13815;
        qobischeme_panic( c12411, EMPTYLIST );
L13815:
        if  ( AND( EQ( TSCPTAG( t12409 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12409 ), VECTORTAG ) )
            )  goto L13818;
        scdebug_error( c12251, 
                       c12252, CONS( t12409, EMPTYLIST ) );
L13818:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L13820;
        scdebug_error( c12251, 
                       c12255, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13820:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12409 ) ) ) )  goto L13822;
        scdebug_error( c12251, 
                       c12259, CONS( _TSCP( 4 ), EMPTYLIST ) );
L13822:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12409, _TSCP( 4 ) ), 
                               o12410 ) );
}

DEFTSCP( hmm_2dwbm_dspeech_21_116e3729_v );
DEFCSTRING( t13824, "LOCAL-SET-PSI-PART-OF-SPEECH!" );

TSCP  hmm_2dwbm_dspeech_21_116e3729( t12425, o12426 )
        TSCP  t12425, o12426;
{
        PUSHSTACKTRACE( t13824 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12425 ) ) )  goto L13826;
        qobischeme_panic( c12427, EMPTYLIST );
L13826:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12425, 
                                                      _TSCP( 8 ), 
                                                      o12426 ) );
}

DEFTSCP( hmm_2dwbm_f_2dspeech_b703e518_v );
DEFCSTRING( t13828, "PSI-PART-OF-SPEECH" );

TSCP  hmm_2dwbm_f_2dspeech_b703e518( t12430 )
        TSCP  t12430;
{
        PUSHSTACKTRACE( t13828 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12430 ) ) )  goto L13830;
        qobischeme_panic( c12431, EMPTYLIST );
L13830:
        if  ( AND( EQ( TSCPTAG( t12430 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12430 ), VECTORTAG ) )
            )  goto L13833;
        scdebug_error( c12382, 
                       c12252, CONS( t12430, EMPTYLIST ) );
L13833:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13835;
        scdebug_error( c12382, 
                       c12255, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13835:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12430 ) ) ) )  goto L13837;
        scdebug_error( c12382, 
                       c12259, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13837:
        POPSTACKTRACE( VECTOR_ELEMENT( t12430, _TSCP( 8 ) ) );
}

DEFTSCP( hmm_2dwbm_dspeech_21_be3d2cc4_v );
DEFCSTRING( t13839, "SET-PSI-PART-OF-SPEECH!" );

TSCP  hmm_2dwbm_dspeech_21_be3d2cc4( t12444, o12445 )
        TSCP  t12444, o12445;
{
        PUSHSTACKTRACE( t13839 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12444 ) ) )  goto L13841;
        qobischeme_panic( c12446, EMPTYLIST );
L13841:
        if  ( AND( EQ( TSCPTAG( t12444 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12444 ), VECTORTAG ) )
            )  goto L13844;
        scdebug_error( c12251, 
                       c12252, CONS( t12444, EMPTYLIST ) );
L13844:
        if  ( EQ( TSCPTAG( _TSCP( 8 ) ), FIXNUMTAG ) )  goto L13846;
        scdebug_error( c12251, 
                       c12255, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13846:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 8 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12444 ) ) ) )  goto L13848;
        scdebug_error( c12251, 
                       c12259, CONS( _TSCP( 8 ), EMPTYLIST ) );
L13848:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12444, _TSCP( 8 ) ), 
                               o12445 ) );
}

DEFTSCP( hmm_2dwbm_eatures_21_470972d7_v );
DEFCSTRING( t13850, "LOCAL-SET-PSI-FEATURES!" );

TSCP  hmm_2dwbm_eatures_21_470972d7( t12460, o12461 )
        TSCP  t12460, o12461;
{
        PUSHSTACKTRACE( t13850 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12460 ) ) )  goto L13852;
        qobischeme_panic( c12462, EMPTYLIST );
L13852:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12460, 
                                                      _TSCP( 12 ), 
                                                      o12461 ) );
}

DEFTSCP( hmm_2dwbm_psi_2dfeatures_v );
DEFCSTRING( t13854, "PSI-FEATURES" );

TSCP  hmm_2dwbm_psi_2dfeatures( t12465 )
        TSCP  t12465;
{
        PUSHSTACKTRACE( t13854 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12465 ) ) )  goto L13856;
        qobischeme_panic( c12466, EMPTYLIST );
L13856:
        if  ( AND( EQ( TSCPTAG( t12465 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12465 ), VECTORTAG ) )
            )  goto L13859;
        scdebug_error( c12382, 
                       c12252, CONS( t12465, EMPTYLIST ) );
L13859:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13861;
        scdebug_error( c12382, 
                       c12255, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13861:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12465 ) ) ) )  goto L13863;
        scdebug_error( c12382, 
                       c12259, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13863:
        POPSTACKTRACE( VECTOR_ELEMENT( t12465, _TSCP( 12 ) ) );
}

DEFTSCP( hmm_2dwbm_eatures_21_6cdd7491_v );
DEFCSTRING( t13865, "SET-PSI-FEATURES!" );

TSCP  hmm_2dwbm_eatures_21_6cdd7491( t12479, o12480 )
        TSCP  t12479, o12480;
{
        PUSHSTACKTRACE( t13865 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12479 ) ) )  goto L13867;
        qobischeme_panic( c12481, EMPTYLIST );
L13867:
        if  ( AND( EQ( TSCPTAG( t12479 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12479 ), VECTORTAG ) )
            )  goto L13870;
        scdebug_error( c12251, 
                       c12252, CONS( t12479, EMPTYLIST ) );
L13870:
        if  ( EQ( TSCPTAG( _TSCP( 12 ) ), FIXNUMTAG ) )  goto L13872;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13872:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 12 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12479 ) ) ) )  goto L13874;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 12 ), EMPTYLIST ) );
L13874:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12479, _TSCP( 12 ) ), 
                               o12480 ) );
}

DEFTSCP( hmm_2dwbm_2droles_21_3ea188a8_v );
DEFCSTRING( t13876, "LOCAL-SET-PSI-N-ROLES!" );

TSCP  hmm_2dwbm_2droles_21_3ea188a8( t12495, o12496 )
        TSCP  t12495, o12496;
{
        PUSHSTACKTRACE( t13876 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12495 ) ) )  goto L13878;
        qobischeme_panic( c12497, EMPTYLIST );
L13878:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12495, 
                                                      _TSCP( 16 ), 
                                                      o12496 ) );
}

DEFTSCP( hmm_2dwbm_psi_2dn_2droles_v );
DEFCSTRING( t13880, "PSI-N-ROLES" );

TSCP  hmm_2dwbm_psi_2dn_2droles( t12500 )
        TSCP  t12500;
{
        PUSHSTACKTRACE( t13880 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12500 ) ) )  goto L13882;
        qobischeme_panic( c12501, EMPTYLIST );
L13882:
        if  ( AND( EQ( TSCPTAG( t12500 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12500 ), VECTORTAG ) )
            )  goto L13885;
        scdebug_error( c12382, 
                       c12252, CONS( t12500, EMPTYLIST ) );
L13885:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13887;
        scdebug_error( c12382, 
                       c12255, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13887:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12500 ) ) ) )  goto L13889;
        scdebug_error( c12382, 
                       c12259, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13889:
        POPSTACKTRACE( VECTOR_ELEMENT( t12500, _TSCP( 16 ) ) );
}

DEFTSCP( hmm_2dwbm_2droles_21_a135b80b_v );
DEFCSTRING( t13891, "SET-PSI-N-ROLES!" );

TSCP  hmm_2dwbm_2droles_21_a135b80b( t12514, o12515 )
        TSCP  t12514, o12515;
{
        PUSHSTACKTRACE( t13891 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12514 ) ) )  goto L13893;
        qobischeme_panic( c12516, EMPTYLIST );
L13893:
        if  ( AND( EQ( TSCPTAG( t12514 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12514 ), VECTORTAG ) )
            )  goto L13896;
        scdebug_error( c12251, 
                       c12252, CONS( t12514, EMPTYLIST ) );
L13896:
        if  ( EQ( TSCPTAG( _TSCP( 16 ) ), FIXNUMTAG ) )  goto L13898;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13898:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 16 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12514 ) ) ) )  goto L13900;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 16 ), EMPTYLIST ) );
L13900:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12514, _TSCP( 16 ) ), 
                               o12515 ) );
}

DEFTSCP( hmm_2dwbm_ameters_21_5b66f4_v );
DEFCSTRING( t13902, "LOCAL-SET-PSI-PARAMETERS!" );

TSCP  hmm_2dwbm_ameters_21_5b66f4( t12530, o12531 )
        TSCP  t12530, o12531;
{
        PUSHSTACKTRACE( t13902 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12530 ) ) )  goto L13904;
        qobischeme_panic( c12532, EMPTYLIST );
L13904:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12530, 
                                                      _TSCP( 20 ), 
                                                      o12531 ) );
}

DEFTSCP( hmm_2dwbm_psi_2dparameters_v );
DEFCSTRING( t13906, "PSI-PARAMETERS" );

TSCP  hmm_2dwbm_psi_2dparameters( t12535 )
        TSCP  t12535;
{
        PUSHSTACKTRACE( t13906 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12535 ) ) )  goto L13908;
        qobischeme_panic( c12536, EMPTYLIST );
L13908:
        if  ( AND( EQ( TSCPTAG( t12535 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12535 ), VECTORTAG ) )
            )  goto L13911;
        scdebug_error( c12382, 
                       c12252, CONS( t12535, EMPTYLIST ) );
L13911:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13913;
        scdebug_error( c12382, 
                       c12255, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13913:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12535 ) ) ) )  goto L13915;
        scdebug_error( c12382, 
                       c12259, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13915:
        POPSTACKTRACE( VECTOR_ELEMENT( t12535, _TSCP( 20 ) ) );
}

DEFTSCP( hmm_2dwbm_ameters_21_4f1b0096_v );
DEFCSTRING( t13917, "SET-PSI-PARAMETERS!" );

TSCP  hmm_2dwbm_ameters_21_4f1b0096( t12549, o12550 )
        TSCP  t12549, o12550;
{
        PUSHSTACKTRACE( t13917 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12549 ) ) )  goto L13919;
        qobischeme_panic( c12551, EMPTYLIST );
L13919:
        if  ( AND( EQ( TSCPTAG( t12549 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12549 ), VECTORTAG ) )
            )  goto L13922;
        scdebug_error( c12251, 
                       c12252, CONS( t12549, EMPTYLIST ) );
L13922:
        if  ( EQ( TSCPTAG( _TSCP( 20 ) ), FIXNUMTAG ) )  goto L13924;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13924:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 20 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12549 ) ) ) )  goto L13926;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 20 ), EMPTYLIST ) );
L13926:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12549, _TSCP( 20 ) ), 
                               o12550 ) );
}

DEFTSCP( hmm_2dwbm_psi_2da_21_30a1b944_v );
DEFCSTRING( t13928, "LOCAL-SET-PSI-A!" );

TSCP  hmm_2dwbm_psi_2da_21_30a1b944( t12565, o12566 )
        TSCP  t12565, o12566;
{
        PUSHSTACKTRACE( t13928 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12565 ) ) )  goto L13930;
        qobischeme_panic( c12567, EMPTYLIST );
L13930:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12565, 
                                                      _TSCP( 24 ), 
                                                      o12566 ) );
}

DEFTSCP( hmm_2dwbm_psi_2da_v );
DEFCSTRING( t13932, "PSI-A" );

TSCP  hmm_2dwbm_psi_2da( t12570 )
        TSCP  t12570;
{
        PUSHSTACKTRACE( t13932 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12570 ) ) )  goto L13934;
        qobischeme_panic( c12571, EMPTYLIST );
L13934:
        if  ( AND( EQ( TSCPTAG( t12570 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12570 ), VECTORTAG ) )
            )  goto L13937;
        scdebug_error( c12382, 
                       c12252, CONS( t12570, EMPTYLIST ) );
L13937:
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L13939;
        scdebug_error( c12382, 
                       c12255, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13939:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12570 ) ) ) )  goto L13941;
        scdebug_error( c12382, 
                       c12259, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13941:
        POPSTACKTRACE( VECTOR_ELEMENT( t12570, _TSCP( 24 ) ) );
}

DEFTSCP( hmm_2dwbm_set_2dpsi_2da_21_v );
DEFCSTRING( t13943, "SET-PSI-A!" );

TSCP  hmm_2dwbm_set_2dpsi_2da_21( t12584, o12585 )
        TSCP  t12584, o12585;
{
        PUSHSTACKTRACE( t13943 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12584 ) ) )  goto L13945;
        qobischeme_panic( c12586, EMPTYLIST );
L13945:
        if  ( AND( EQ( TSCPTAG( t12584 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12584 ), VECTORTAG ) )
            )  goto L13948;
        scdebug_error( c12251, 
                       c12252, CONS( t12584, EMPTYLIST ) );
L13948:
        if  ( EQ( TSCPTAG( _TSCP( 24 ) ), FIXNUMTAG ) )  goto L13950;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13950:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 24 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12584 ) ) ) )  goto L13952;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 24 ), EMPTYLIST ) );
L13952:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12584, _TSCP( 24 ) ), 
                               o12585 ) );
}

DEFTSCP( hmm_2dwbm_psi_2db_21_221416aa_v );
DEFCSTRING( t13954, "LOCAL-SET-PSI-B!" );

TSCP  hmm_2dwbm_psi_2db_21_221416aa( t12600, o12601 )
        TSCP  t12600, o12601;
{
        PUSHSTACKTRACE( t13954 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12600 ) ) )  goto L13956;
        qobischeme_panic( c12602, EMPTYLIST );
L13956:
        POPSTACKTRACE( obischeme_r_2dset_21_3e0bb247( t12600, 
                                                      _TSCP( 28 ), 
                                                      o12601 ) );
}

DEFTSCP( hmm_2dwbm_psi_2db_v );
DEFCSTRING( t13958, "PSI-B" );

TSCP  hmm_2dwbm_psi_2db( t12605 )
        TSCP  t12605;
{
        PUSHSTACKTRACE( t13958 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12605 ) ) )  goto L13960;
        qobischeme_panic( c12606, EMPTYLIST );
L13960:
        if  ( AND( EQ( TSCPTAG( t12605 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12605 ), VECTORTAG ) )
            )  goto L13963;
        scdebug_error( c12382, 
                       c12252, CONS( t12605, EMPTYLIST ) );
L13963:
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L13965;
        scdebug_error( c12382, 
                       c12255, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13965:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12605 ) ) ) )  goto L13967;
        scdebug_error( c12382, 
                       c12259, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13967:
        POPSTACKTRACE( VECTOR_ELEMENT( t12605, _TSCP( 28 ) ) );
}

DEFTSCP( hmm_2dwbm_set_2dpsi_2db_21_v );
DEFCSTRING( t13969, "SET-PSI-B!" );

TSCP  hmm_2dwbm_set_2dpsi_2db_21( t12619, o12620 )
        TSCP  t12619, o12620;
{
        PUSHSTACKTRACE( t13969 );
        if  ( TRUE( hmm_2dwbm_psi_3f( t12619 ) ) )  goto L13971;
        qobischeme_panic( c12621, EMPTYLIST );
L13971:
        if  ( AND( EQ( TSCPTAG( t12619 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( t12619 ), VECTORTAG ) )
            )  goto L13974;
        scdebug_error( c12251, 
                       c12252, CONS( t12619, EMPTYLIST ) );
L13974:
        if  ( EQ( TSCPTAG( _TSCP( 28 ) ), FIXNUMTAG ) )  goto L13976;
        scdebug_error( c12251, 
                       c12255, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13976:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 28 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( t12619 ) ) ) )  goto L13978;
        scdebug_error( c12251, 
                       c12259, 
                       CONS( _TSCP( 28 ), EMPTYLIST ) );
L13978:
        POPSTACKTRACE( SETGEN( VECTOR_ELEMENT( t12619, _TSCP( 28 ) ), 
                               o12620 ) );
}

DEFTSCP( hmm_2dwbm_pos_2dc_3anoun_v );
DEFCSTRING( t13980, "POS-C:NOUN" );
DEFTSCP( hmm_2dwbm_pos_2dc_3averb_v );
DEFCSTRING( t13981, "POS-C:VERB" );
DEFTSCP( hmm_2dwbm_pos_2dc_3aadverb_v );
DEFCSTRING( t13982, "POS-C:ADVERB" );
DEFTSCP( hmm_2dwbm_pos_2dc_3aadjective_v );
DEFCSTRING( t13983, "POS-C:ADJECTIVE" );
DEFTSCP( hmm_2dwbm_reposition_9a732ab2_v );
DEFCSTRING( t13984, "POS-C:PREPOSITION" );
DEFTSCP( hmm_2dwbm_reposition_f7689b37_v );
DEFCSTRING( t13985, "POS-C:MOTION-PREPOSITION" );
DEFTSCP( hmm_2dwbm_pos_2dc_3averb0_v );
DEFCSTRING( t13986, "POS-C:VERB0" );
DEFTSCP( hmm_2dwbm_pos_2dc_3averb1_v );
DEFCSTRING( t13987, "POS-C:VERB1" );
DEFTSCP( hmm_2dwbm_pos_2dc_3aother_v );
DEFCSTRING( t13988, "POS-C:OTHER" );
DEFTSCP( hmm_2dwbm_e_2dc_3aml_c29fe29b_v );
DEFCSTRING( t13989, "TRAINING-MODE-C:ML" );
DEFTSCP( hmm_2dwbm_e_2dc_3adt_31c184_v );
DEFCSTRING( t13990, "TRAINING-MODE-C:DT" );
DEFTSCP( hmm_2dwbm_dc_3amixed_c2d7bb11_v );
DEFCSTRING( t13991, "TRAINING-MODE-C:MIXED" );
DEFTSCP( hmm_2dwbm_int_3anone_6f2a6be5_v );
DEFCSTRING( t13992, "MODEL-CONSTRAINT:NONE" );
DEFTSCP( hmm_2dwbm_duplicates_618301cb_v );
DEFCSTRING( t13993, "MODEL-CONSTRAINT:NO-DUPLICATES" );
DEFTSCP( hmm_2dwbm_int_3anone_1a4db61f_v );
DEFCSTRING( t13994, "STATE-CONSTRAINT:NONE" );
DEFTSCP( hmm_2dwbm_aint_3atie_475b3ad9_v );
DEFCSTRING( t13995, "STATE-CONSTRAINT:TIE" );
DEFTSCP( hmm_2dwbm_allocate_2divec_v );
DEFCSTRING( t13996, "ALLOCATE-IVEC" );

TSCP  hmm_2dwbm_allocate_2divec( g12634 )
        TSCP  g12634;
{
        PUSHSTACKTRACE( t13996 );
        POPSTACKTRACE( POINTER_TSCP( allocIVec( sc_tscp_int( g12634 ) ) ) );
}

DEFTSCP( hmm_2dwbm_set_2divec_21_v );
DEFCSTRING( t13998, "SET-IVEC!" );

TSCP  hmm_2dwbm_set_2divec_21( g12638, g12639, g12640 )
        TSCP  g12638, g12639, g12640;
{
        PUSHSTACKTRACE( t13998 );
        setIVec( TSCP_POINTER( g12638 ), 
                 sc_tscp_int( g12639 ), 
                 sc_tscp_int( g12640 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_free_2divec_v );
DEFCSTRING( t14001, "FREE-IVEC" );

TSCP  hmm_2dwbm_free_2divec( g12647 )
        TSCP  g12647;
{
        PUSHSTACKTRACE( t14001 );
        freeIVec( TSCP_POINTER( g12647 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_allocate_2drmat_v );
DEFCSTRING( t14004, "ALLOCATE-RMAT" );

TSCP  hmm_2dwbm_allocate_2drmat( g12652, g12653 )
        TSCP  g12652, g12653;
{
        PUSHSTACKTRACE( t14004 );
        POPSTACKTRACE( POINTER_TSCP( allocRMat( sc_tscp_int( g12652 ), 
                                                sc_tscp_int( g12653 ) ) ) );
}

DEFTSCP( hmm_2dwbm_rmat_2dget_v );
DEFCSTRING( t14006, "RMAT-GET" );

TSCP  hmm_2dwbm_rmat_2dget( g12658, g12659, g12660 )
        TSCP  g12658, g12659, g12660;
{
        PUSHSTACKTRACE( t14006 );
        POPSTACKTRACE( DOUBLE_TSCP( rmat_get( TSCP_POINTER( g12658 ), 
                                              sc_tscp_int( g12659 ), 
                                              sc_tscp_int( g12660 ) ) ) );
}

DEFTSCP( hmm_2dwbm_rmat_2dset_21_v );
DEFCSTRING( t14008, "RMAT-SET!" );

TSCP  hmm_2dwbm_rmat_2dset_21( g12666, g12667, g12668, g12669 )
        TSCP  g12666, g12667, g12668, g12669;
{
        PUSHSTACKTRACE( t14008 );
        rmat_set( TSCP_POINTER( g12666 ), 
                  sc_tscp_int( g12667 ), 
                  sc_tscp_int( g12668 ), 
                  TSCP_DOUBLE( g12669 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_free_2drmat_v );
DEFCSTRING( t14011, "FREE-RMAT" );

TSCP  hmm_2dwbm_free_2drmat( g12677 )
        TSCP  g12677;
{
        PUSHSTACKTRACE( t14011 );
        freeRMat( TSCP_POINTER( g12677 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_t_2dvector_8defbe83_v );
DEFCSTRING( t14014, "ALLOCATE-RMAT-VECTOR" );

TSCP  hmm_2dwbm_t_2dvector_8defbe83( g12682 )
        TSCP  g12682;
{
        PUSHSTACKTRACE( t14014 );
        POPSTACKTRACE( POINTER_TSCP( allocate_rmat_vector( sc_tscp_int( g12682 ) ) ) );
}

DEFTSCP( hmm_2dwbm_r_2dset_21_a0833740_v );
DEFCSTRING( t14016, "RMAT-VECTOR-SET!" );

TSCP  hmm_2dwbm_r_2dset_21_a0833740( g12686, g12687, g12688 )
        TSCP  g12686, g12687, g12688;
{
        PUSHSTACKTRACE( t14016 );
        rmat_vector_set( TSCP_POINTER( g12686 ), 
                         sc_tscp_int( g12687 ), 
                         TSCP_POINTER( g12688 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_t_2dvector_581667e8_v );
DEFCSTRING( t14019, "FREE-RMAT-VECTOR" );

TSCP  hmm_2dwbm_t_2dvector_581667e8( g12695 )
        TSCP  g12695;
{
        PUSHSTACKTRACE( t14019 );
        free_rmat_vector( TSCP_POINTER( g12695 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_allocate_2dmodel_v );
DEFCSTRING( t14022, "ALLOCATE-MODEL" );

TSCP  hmm_2dwbm_allocate_2dmodel( g12700, g12701 )
        TSCP  g12700, g12701;
{
        PUSHSTACKTRACE( t14022 );
        POPSTACKTRACE( POINTER_TSCP( allocModel( sc_tscp_int( g12700 ), 
                                                 sc_tscp_int( g12701 ) ) ) );
}

DEFTSCP( hmm_2dwbm_copy_2dmodel_21_v );
DEFCSTRING( t14024, "COPY-MODEL!" );

TSCP  hmm_2dwbm_copy_2dmodel_21( g12706, g12707 )
        TSCP  g12706, g12707;
{
        PUSHSTACKTRACE( t14024 );
        copyModel( TSCP_POINTER( g12706 ), 
                   TSCP_POINTER( g12707 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_clone_2dmodel_v );
DEFCSTRING( t14027, "CLONE-MODEL" );
EXTERNTSCPP( b_2dstuff_mm_2dmodel_6c8d36c8, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_mm_2dmodel_6c8d36c8_v );
EXTERNTSCPP( hmm_2dwbm_model_2dii, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_model_2dii_v );
EXTERNTSCPP( hmm_2dwbm_model_2duu, XAL1( TSCP ) );
EXTERNTSCP( hmm_2dwbm_model_2duu_v );
EXTERNTSCPP( b_2dstuff_ined_2dhmm_f0925257, 
             XAL8( TSCP, 
                   TSCP, 
                   TSCP, TSCP, TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( b_2dstuff_ined_2dhmm_f0925257_v );
EXTERNTSCPP( b_2dstuff_hmm_2dname_424a1c95, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_hmm_2dname_424a1c95_v );
EXTERNTSCPP( b_2dstuff_m_2dvideos_91a3b309, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_m_2dvideos_91a3b309_v );
EXTERNTSCPP( b_2dstuff_m_2dstates_89cba076, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_m_2dstates_89cba076_v );
EXTERNTSCPP( b_2dstuff_likelihood_25126926, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_likelihood_25126926_v );
EXTERNTSCPP( b_2dstuff_rticipants_23866534, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_rticipants_23866534_v );
EXTERNTSCPP( b_2dstuff_ure_2dtype_94140787, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_ure_2dtype_94140787_v );
EXTERNTSCPP( b_2dstuff_ing_2dtype_2f0078bd, XAL1( TSCP ) );
EXTERNTSCP( b_2dstuff_ing_2dtype_2f0078bd_v );

TSCP  hmm_2dwbm_clone_2dmodel( m12713 )
        TSCP  m12713;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( t14027 );
        X1 = b_2dstuff_mm_2dmodel_6c8d36c8( m12713 );
        X3 = hmm_2dwbm_model_2dii( X1 );
        X4 = hmm_2dwbm_model_2duu( X1 );
        X2 = hmm_2dwbm_allocate_2dmodel( X3, X4 );
        hmm_2dwbm_copy_2dmodel_21( X2, X1 );
        X3 = b_2dstuff_hmm_2dname_424a1c95( m12713 );
        X4 = b_2dstuff_m_2dvideos_91a3b309( m12713 );
        X5 = b_2dstuff_m_2dstates_89cba076( m12713 );
        X6 = b_2dstuff_likelihood_25126926( m12713 );
        X7 = b_2dstuff_rticipants_23866534( m12713 );
        X8 = b_2dstuff_ure_2dtype_94140787( m12713 );
        X9 = b_2dstuff_ing_2dtype_2f0078bd( m12713 );
        POPSTACKTRACE( b_2dstuff_ined_2dhmm_f0925257( X3, 
                                                      X4, 
                                                      X5, 
                                                      X6, 
                                                      X2, 
                                                      X7, X8, X9 ) );
}

DEFTSCP( hmm_2dwbm_clone_2dc_2dmodel_v );
DEFCSTRING( t14031, "CLONE-C-MODEL" );

TSCP  hmm_2dwbm_clone_2dc_2dmodel( g12719 )
        TSCP  g12719;
{
        PUSHSTACKTRACE( t14031 );
        POPSTACKTRACE( POINTER_TSCP( cloneModel( TSCP_POINTER( g12719 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dii_v );
DEFCSTRING( t14033, "MODEL-II" );

TSCP  hmm_2dwbm_model_2dii( g12723 )
        TSCP  g12723;
{
        PUSHSTACKTRACE( t14033 );
        POPSTACKTRACE( sc_int_tscp( model_ii( TSCP_POINTER( g12723 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dnn_v );
DEFCSTRING( t14035, "MODEL-NN" );

TSCP  hmm_2dwbm_model_2dnn( g12727, g12728 )
        TSCP  g12727, g12728;
{
        PUSHSTACKTRACE( t14035 );
        POPSTACKTRACE( sc_int_tscp( model_nn( TSCP_POINTER( g12727 ), 
                                              sc_tscp_int( g12728 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2duu_v );
DEFCSTRING( t14037, "MODEL-UU" );

TSCP  hmm_2dwbm_model_2duu( g12733 )
        TSCP  g12733;
{
        PUSHSTACKTRACE( t14037 );
        POPSTACKTRACE( sc_int_tscp( model_uu( TSCP_POINTER( g12733 ) ) ) );
}

DEFTSCP( hmm_2dwbm_ure_2dtype_9bf469a7_v );
DEFCSTRING( t14039, "MODEL-FEATURE-TYPE" );

TSCP  hmm_2dwbm_ure_2dtype_9bf469a7( g12737, g12738 )
        TSCP  g12737, g12738;
{
        PUSHSTACKTRACE( t14039 );
        POPSTACKTRACE( sc_int_tscp( model_feature_type( TSCP_POINTER( g12737 ), 
                                                        sc_tscp_int( g12738 ) ) ) );
}

DEFTSCP( hmm_2dwbm_tinuous_21_658cfeed_v );
DEFCSTRING( t14041, "SET-MODEL-FEATURE-TYPE-CONTINUOUS!" );

TSCP  hmm_2dwbm_tinuous_21_658cfeed( g12743, g12744, g12745 )
        TSCP  g12743, g12744, g12745;
{
        PUSHSTACKTRACE( t14041 );
        defineContFeat( TSCP_POINTER( g12743 ), 
                        sc_tscp_int( g12744 ), 
                        TSCP_DOUBLE( g12745 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_dradial_21_ce95ee5e_v );
DEFCSTRING( t14044, "SET-MODEL-FEATURE-TYPE-RADIAL!" );

TSCP  hmm_2dwbm_dradial_21_ce95ee5e( g12752, g12753 )
        TSCP  g12752, g12753;
{
        PUSHSTACKTRACE( t14044 );
        defineRadialFeat( TSCP_POINTER( g12752 ), 
                          sc_tscp_int( g12753 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_iscrete_21_6a40c8_v );
DEFCSTRING( t14047, "SET-MODEL-FEATURE-TYPE-DISCRETE!" );

TSCP  hmm_2dwbm_iscrete_21_6a40c8( g12759, g12760 )
        TSCP  g12759, g12760;
{
        PUSHSTACKTRACE( t14047 );
        defineDiscreteFeat( TSCP_POINTER( g12759 ), 
                            sc_tscp_int( g12760 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_model_2dparameter_v );
DEFCSTRING( t14050, "MODEL-PARAMETER" );

TSCP  hmm_2dwbm_model_2dparameter( g12766, 
                                   g12767, g12768, g12769 )
        TSCP  g12766, g12767, g12768, g12769;
{
        PUSHSTACKTRACE( t14050 );
        POPSTACKTRACE( DOUBLE_TSCP( model_parameter( TSCP_POINTER( g12766 ), 
                                                     sc_tscp_int( g12767 ), 
                                                     sc_tscp_int( g12768 ), 
                                                     sc_tscp_int( g12769 ) ) ) );
}

DEFTSCP( hmm_2dwbm_rameter_21_56e16bae_v );
DEFCSTRING( t14052, "SET-MODEL-PARAMETER!" );

TSCP  hmm_2dwbm_rameter_21_56e16bae( g12776, 
                                     g12777, 
                                     g12778, g12779, g12780 )
        TSCP  g12776, g12777, g12778, g12779, g12780;
{
        PUSHSTACKTRACE( t14052 );
        set_model_parameter( TSCP_POINTER( g12776 ), 
                             sc_tscp_int( g12777 ), 
                             sc_tscp_int( g12778 ), 
                             sc_tscp_int( g12779 ), 
                             TSCP_DOUBLE( g12780 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_model_2da_v );
DEFCSTRING( t14055, "MODEL-A" );

TSCP  hmm_2dwbm_model_2da( g12789, g12790, g12791 )
        TSCP  g12789, g12790, g12791;
{
        PUSHSTACKTRACE( t14055 );
        POPSTACKTRACE( DOUBLE_TSCP( model_a( TSCP_POINTER( g12789 ), 
                                             sc_tscp_int( g12790 ), 
                                             sc_tscp_int( g12791 ) ) ) );
}

DEFTSCP( hmm_2dwbm_set_2dmodel_2da_21_v );
DEFCSTRING( t14057, "SET-MODEL-A!" );

TSCP  hmm_2dwbm_set_2dmodel_2da_21( g12797, 
                                    g12798, g12799, g12800 )
        TSCP  g12797, g12798, g12799, g12800;
{
        PUSHSTACKTRACE( t14057 );
        set_model_a( TSCP_POINTER( g12797 ), 
                     sc_tscp_int( g12798 ), 
                     sc_tscp_int( g12799 ), 
                     TSCP_DOUBLE( g12800 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_model_2db_v );
DEFCSTRING( t14060, "MODEL-B" );

TSCP  hmm_2dwbm_model_2db( g12808, g12809 )
        TSCP  g12808, g12809;
{
        PUSHSTACKTRACE( t14060 );
        POPSTACKTRACE( DOUBLE_TSCP( model_b( TSCP_POINTER( g12808 ), 
                                             sc_tscp_int( g12809 ) ) ) );
}

DEFTSCP( hmm_2dwbm_set_2dmodel_2db_21_v );
DEFCSTRING( t14062, "SET-MODEL-B!" );

TSCP  hmm_2dwbm_set_2dmodel_2db_21( g12814, g12815, g12816 )
        TSCP  g12814, g12815, g12816;
{
        PUSHSTACKTRACE( t14062 );
        set_model_b( TSCP_POINTER( g12814 ), 
                     sc_tscp_int( g12815 ), 
                     TSCP_DOUBLE( g12816 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_model_2dname_v );
DEFCSTRING( t14065, "MODEL-NAME" );

TSCP  hmm_2dwbm_model_2dname( g12823 )
        TSCP  g12823;
{
        PUSHSTACKTRACE( t14065 );
        POPSTACKTRACE( CSTRING_TSCP( model_name( TSCP_POINTER( g12823 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dn_2droles_v );
DEFCSTRING( t14067, "MODEL-N-ROLES" );

TSCP  hmm_2dwbm_model_2dn_2droles( g12827 )
        TSCP  g12827;
{
        PUSHSTACKTRACE( t14067 );
        POPSTACKTRACE( sc_int_tscp( model_n_roles( TSCP_POINTER( g12827 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dpos_v );
DEFCSTRING( t14069, "MODEL-POS" );

TSCP  hmm_2dwbm_model_2dpos( g12831 )
        TSCP  g12831;
{
        PUSHSTACKTRACE( t14069 );
        POPSTACKTRACE( sc_int_tscp( model_pos( TSCP_POINTER( g12831 ) ) ) );
}

DEFTSCP( hmm_2dwbm__2dname_21_1cfad0f1_v );
DEFCSTRING( t14071, "SET-MODEL-NAME!" );

TSCP  hmm_2dwbm__2dname_21_1cfad0f1( g12835, g12836 )
        TSCP  g12835, g12836;
{
        PUSHSTACKTRACE( t14071 );
        set_model_name( TSCP_POINTER( g12835 ), 
                        TSCP_POINTER( g12836 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2droles_21_4b2bece3_v );
DEFCSTRING( t14074, "SET-MODEL-N-ROLES!" );

TSCP  hmm_2dwbm_2droles_21_4b2bece3( g12842, g12843 )
        TSCP  g12842, g12843;
{
        PUSHSTACKTRACE( t14074 );
        set_model_n_roles( TSCP_POINTER( g12842 ), 
                           sc_tscp_int( g12843 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_l_2dpos_21_c03d4a50_v );
DEFCSTRING( t14077, "SET-MODEL-POS!" );

TSCP  hmm_2dwbm_l_2dpos_21_c03d4a50( g12849, g12850 )
        TSCP  g12849, g12850;
{
        PUSHSTACKTRACE( t14077 );
        set_model_pos( TSCP_POINTER( g12849 ), 
                       sc_tscp_int( g12850 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_uniform_2dmodel_21_v );
DEFCSTRING( t14080, "UNIFORM-MODEL!" );

TSCP  hmm_2dwbm_uniform_2dmodel_21( m12856, u12857 )
        TSCP  m12856, u12857;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14080 );
        if  ( FALSE( u12857 ) )  goto L14082;
        X1 = _TSCP( 4 );
        goto L14083;
L14082:
        X1 = _TSCP( 0 );
L14083:
        uniformModel( TSCP_POINTER( m12856 ), 
                      sc_tscp_int( X1 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dmodel_21_72494ae0_v );
DEFCSTRING( t14086, "RANDOMISE-MODEL!" );

TSCP  hmm_2dwbm_2dmodel_21_72494ae0( m12866, u12867 )
        TSCP  m12866, u12867;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14086 );
        if  ( FALSE( u12867 ) )  goto L14088;
        X1 = _TSCP( 4 );
        goto L14089;
L14088:
        X1 = _TSCP( 0 );
L14089:
        randomiseModel( TSCP_POINTER( m12866 ), 
                        sc_tscp_int( X1 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_noise_2dmodel_21_v );
DEFCSTRING( t14092, "NOISE-MODEL!" );

TSCP  hmm_2dwbm_noise_2dmodel_21( m12876, u12877, d12878 )
        TSCP  m12876, u12877, d12878;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14092 );
        if  ( FALSE( u12877 ) )  goto L14094;
        X1 = _TSCP( 4 );
        goto L14095;
L14094:
        X1 = _TSCP( 0 );
L14095:
        noiseModel( TSCP_POINTER( m12876 ), 
                    sc_tscp_int( X1 ), 
                    TSCP_DOUBLE( d12878 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_smooth_2dmodel_21_v );
DEFCSTRING( t14098, "SMOOTH-MODEL!" );

TSCP  hmm_2dwbm_smooth_2dmodel_21( m12889, u12890, e12891 )
        TSCP  m12889, u12890, e12891;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14098 );
        if  ( FALSE( u12890 ) )  goto L14100;
        X1 = _TSCP( 4 );
        goto L14101;
L14100:
        X1 = _TSCP( 0 );
L14101:
        smoothModel( TSCP_POINTER( m12889 ), 
                     sc_tscp_int( X1 ), 
                     TSCP_DOUBLE( e12891 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_print_2dmodel_v );
DEFCSTRING( t14104, "PRINT-MODEL" );

TSCP  hmm_2dwbm_print_2dmodel( g12902 )
        TSCP  g12902;
{
        PUSHSTACKTRACE( t14104 );
        print_model( TSCP_POINTER( g12902 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_free_2dmodel_v );
DEFCSTRING( t14107, "FREE-MODEL" );

TSCP  hmm_2dwbm_free_2dmodel( g12907 )
        TSCP  g12907;
{
        PUSHSTACKTRACE( t14107 );
        freeModel( TSCP_POINTER( g12907 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dmodel_21_98c44cdc_v );
DEFCSTRING( t14110, "NORMALIZE-MODEL!" );

TSCP  hmm_2dwbm_2dmodel_21_98c44cdc( g12912, g12913 )
        TSCP  g12912, g12913;
{
        PUSHSTACKTRACE( t14110 );
        POPSTACKTRACE( sc_int_tscp( normalizeModel( TSCP_POINTER( g12912 ), 
                                                    sc_tscp_int( g12913 ) ) ) );
}

DEFTSCP( hmm_2dwbm_zero_2dmodel_21_v );
DEFCSTRING( t14112, "ZERO-MODEL!" );

TSCP  hmm_2dwbm_zero_2dmodel_21( g12918 )
        TSCP  g12918;
{
        PUSHSTACKTRACE( t14112 );
        zeroModel( TSCP_POINTER( g12918 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_zero_2dmodel_3f_v );
DEFCSTRING( t14115, "ZERO-MODEL?" );

TSCP  hmm_2dwbm_zero_2dmodel_3f( m12923 )
        TSCP  m12923;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14115 );
        X1 = sc_int_tscp( isZeroModel( TSCP_POINTER( m12923 ) ) );
        if  ( BITAND( BITOR( _S2CINT( X1 ), 
                             _S2CINT( _TSCP( 4 ) ) ), 
                      3 ) )  goto L14118;
        POPSTACKTRACE( BOOLEAN( EQ( _S2CUINT( X1 ), 
                                    _S2CUINT( _TSCP( 4 ) ) ) ) );
L14118:
        if  ( TRUE( scrt2__3d_2dtwo( X1, _TSCP( 4 ) ) ) )  goto L14120;
        POPSTACKTRACE( FALSEVALUE );
L14120:
        POPSTACKTRACE( TRUEVALUE );
}

DEFTSCP( hmm_2dwbm_2dmodel_21_aeca4ec2_v );
DEFCSTRING( t14122, "LINEAR->LOG-MODEL!" );

TSCP  hmm_2dwbm_2dmodel_21_aeca4ec2( g12938 )
        TSCP  g12938;
{
        PUSHSTACKTRACE( t14122 );
        linear2logModel( TSCP_POINTER( g12938 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dmodel_21_ef54c91a_v );
DEFCSTRING( t14125, "LOG->LINEAR-MODEL!" );

TSCP  hmm_2dwbm_2dmodel_21_ef54c91a( g12943 )
        TSCP  g12943;
{
        PUSHSTACKTRACE( t14125 );
        log2linearModel( TSCP_POINTER( g12943 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_likelihood_1a9c0e3b_v );
DEFCSTRING( t14128, "MODEL-LOG-LIKELIHOOD" );

TSCP  hmm_2dwbm_likelihood_1a9c0e3b( g12948, g12949 )
        TSCP  g12948, g12949;
{
        PUSHSTACKTRACE( t14128 );
        POPSTACKTRACE( DOUBLE_TSCP( logLike( TSCP_POINTER( g12948 ), 
                                             TSCP_POINTER( g12949 ) ) ) );
}

DEFTSCP( hmm_2dwbm_2dsequence_1d9f2c00_v );
DEFCSTRING( t14130, "BEST-STATE-SEQUENCE" );

TSCP  hmm_2dwbm_2dsequence_1d9f2c00( g12954, g12955 )
        TSCP  g12954, g12955;
{
        PUSHSTACKTRACE( t14130 );
        POPSTACKTRACE( POINTER_TSCP( best_state_sequence( TSCP_POINTER( g12954 ), 
                                                          TSCP_POINTER( g12955 ) ) ) );
}

DEFTSCP( hmm_2dwbm_globals_21_b83a1f59_v );
DEFCSTRING( t14132, "FORCE-INIT-GLOBALS!" );

TSCP  hmm_2dwbm_globals_21_b83a1f59(  )
{
        PUSHSTACKTRACE( t14132 );
        force_init_globals(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_allocate_2dbox_v );
DEFCSTRING( t14135, "ALLOCATE-BOX" );

TSCP  hmm_2dwbm_allocate_2dbox(  )
{
        PUSHSTACKTRACE( t14135 );
        POPSTACKTRACE( POINTER_TSCP( allocBox(  ) ) );
}

DEFTSCP( hmm_2dwbm_box_2dcoordinates_v );
DEFCSTRING( t14137, "BOX-COORDINATES" );

TSCP  hmm_2dwbm_box_2dcoordinates( g12967, g12968 )
        TSCP  g12967, g12968;
{
        PUSHSTACKTRACE( t14137 );
        POPSTACKTRACE( DOUBLE_TSCP( box_coordinates( TSCP_POINTER( g12967 ), 
                                                     sc_tscp_int( g12968 ) ) ) );
}

DEFTSCP( hmm_2dwbm_box_2dfilter_v );
DEFCSTRING( t14139, "BOX-FILTER" );

TSCP  hmm_2dwbm_box_2dfilter( g12973 )
        TSCP  g12973;
{
        PUSHSTACKTRACE( t14139 );
        POPSTACKTRACE( sc_int_tscp( box_filter( TSCP_POINTER( g12973 ) ) ) );
}

DEFTSCP( hmm_2dwbm_box_2dstrength_v );
DEFCSTRING( t14141, "BOX-STRENGTH" );

TSCP  hmm_2dwbm_box_2dstrength( g12977 )
        TSCP  g12977;
{
        PUSHSTACKTRACE( t14141 );
        POPSTACKTRACE( DOUBLE_TSCP( box_strength( TSCP_POINTER( g12977 ) ) ) );
}

DEFTSCP( hmm_2dwbm_box_2ddelta_v );
DEFCSTRING( t14143, "BOX-DELTA" );

TSCP  hmm_2dwbm_box_2ddelta( g12981 )
        TSCP  g12981;
{
        PUSHSTACKTRACE( t14143 );
        POPSTACKTRACE( sc_int_tscp( box_delta( TSCP_POINTER( g12981 ) ) ) );
}

DEFTSCP( hmm_2dwbm_box_2dcolor_v );
DEFCSTRING( t14145, "BOX-COLOR" );

TSCP  hmm_2dwbm_box_2dcolor( g12985 )
        TSCP  g12985;
{
        PUSHSTACKTRACE( t14145 );
        POPSTACKTRACE( sc_int_tscp( box_color( TSCP_POINTER( g12985 ) ) ) );
}

DEFTSCP( hmm_2dwbm_box_2dmodel_v );
DEFCSTRING( t14147, "BOX-MODEL" );

TSCP  hmm_2dwbm_box_2dmodel( g12989 )
        TSCP  g12989;
{
        PUSHSTACKTRACE( t14147 );
        POPSTACKTRACE( CSTRING_TSCP( box_model( TSCP_POINTER( g12989 ) ) ) );
}

DEFTSCP( hmm_2dwbm_dinates_21_ae33218e_v );
DEFCSTRING( t14149, "SET-BOX-COORDINATES!" );

TSCP  hmm_2dwbm_dinates_21_ae33218e( g12993, g12994, g12995 )
        TSCP  g12993, g12994, g12995;
{
        PUSHSTACKTRACE( t14149 );
        set_box_coordinates( TSCP_POINTER( g12993 ), 
                             sc_tscp_int( g12994 ), 
                             TSCP_DOUBLE( g12995 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_dfilter_21_af8bfe88_v );
DEFCSTRING( t14152, "SET-BOX-FILTER!" );

TSCP  hmm_2dwbm_dfilter_21_af8bfe88( g13002, g13003 )
        TSCP  g13002, g13003;
{
        PUSHSTACKTRACE( t14152 );
        set_box_filter( TSCP_POINTER( g13002 ), 
                        sc_tscp_int( g13003 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_trength_21_cde72c34_v );
DEFCSTRING( t14155, "SET-BOX-STRENGTH!" );

TSCP  hmm_2dwbm_trength_21_cde72c34( g13009, g13010 )
        TSCP  g13009, g13010;
{
        PUSHSTACKTRACE( t14155 );
        set_box_strength( TSCP_POINTER( g13009 ), 
                          TSCP_DOUBLE( g13010 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2ddelta_21_f2cdaf25_v );
DEFCSTRING( t14158, "SET-BOX-DELTA!" );

TSCP  hmm_2dwbm_2ddelta_21_f2cdaf25( g13016, g13017 )
        TSCP  g13016, g13017;
{
        PUSHSTACKTRACE( t14158 );
        set_box_delta( TSCP_POINTER( g13016 ), 
                       sc_tscp_int( g13017 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dcolor_21_9e4a790_v );
DEFCSTRING( t14161, "SET-BOX-COLOR!" );

TSCP  hmm_2dwbm_2dcolor_21_9e4a790( g13023, g13024 )
        TSCP  g13023, g13024;
{
        PUSHSTACKTRACE( t14161 );
        set_box_color( TSCP_POINTER( g13023 ), 
                       sc_tscp_int( g13024 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dmodel_21_a4b0fc2_v );
DEFCSTRING( t14164, "SET-BOX-MODEL!" );

TSCP  hmm_2dwbm_2dmodel_21_a4b0fc2( g13030, g13031 )
        TSCP  g13030, g13031;
{
        PUSHSTACKTRACE( t14164 );
        set_box_model( TSCP_POINTER( g13030 ), 
                       TSCP_POINTER( g13031 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_free_2dbox_v );
DEFCSTRING( t14167, "FREE-BOX" );

TSCP  hmm_2dwbm_free_2dbox( g13037 )
        TSCP  g13037;
{
        PUSHSTACKTRACE( t14167 );
        freeBox( TSCP_POINTER( g13037 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_update_21_v );
DEFCSTRING( t14170, "UPDATE!" );

TSCP  hmm_2dwbm_update_21( g13042, 
                           g13043, 
                           g13044, 
                           g13045, 
                           g13046, 
                           g13047, 
                           g13048, g13049, g13050, g13051 )
        TSCP  g13042, 
              g13043, 
              g13044, 
              g13045, 
              g13046, 
              g13047, g13048, g13049, g13050, g13051;
{
        PUSHSTACKTRACE( t14170 );
        POPSTACKTRACE( sc_int_tscp( update( TSCP_POINTER( g13042 ), 
                                            TSCP_POINTER( g13043 ), 
                                            TSCP_POINTER( g13044 ), 
                                            TSCP_POINTER( g13045 ), 
                                            TSCP_DOUBLE( g13046 ), 
                                            TSCP_POINTER( g13047 ), 
                                            sc_tscp_int( g13048 ), 
                                            sc_tscp_int( g13049 ), 
                                            sc_tscp_int( g13050 ), 
                                            sc_tscp_int( g13051 ) ) ) );
}

DEFTSCP( hmm_2dwbm_allocate_2dhmm_v );
DEFCSTRING( t14172, "ALLOCATE-HMM" );

TSCP  hmm_2dwbm_allocate_2dhmm( g13064 )
        TSCP  g13064;
{
        PUSHSTACKTRACE( t14172 );
        POPSTACKTRACE( POINTER_TSCP( allocHMM( sc_tscp_int( g13064 ) ) ) );
}

DEFTSCP( hmm_2dwbm_free_2dhmm_v );
DEFCSTRING( t14174, "FREE-HMM" );

TSCP  hmm_2dwbm_free_2dhmm( g13068 )
        TSCP  g13068;
{
        PUSHSTACKTRACE( t14174 );
        freeHMM( TSCP_POINTER( g13068 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dsentence_3cb7f924_v );
DEFCSTRING( t14177, "INITIALIZE-SENTENCE" );

TSCP  hmm_2dwbm_2dsentence_3cb7f924( g13073, g13074 )
        TSCP  g13073, g13074;
{
        PUSHSTACKTRACE( t14177 );
        POPSTACKTRACE( POINTER_TSCP( initializeSentence( sc_tscp_int( g13073 ), 
                                                         TSCP_POINTER( g13074 ) ) ) );
}

DEFTSCP( hmm_2dwbm_free_2dsentence_v );
DEFCSTRING( t14179, "FREE-SENTENCE" );

TSCP  hmm_2dwbm_free_2dsentence( g13079 )
        TSCP  g13079;
{
        PUSHSTACKTRACE( t14179 );
        freeSentence( TSCP_POINTER( g13079 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dinternal_a6ef8bc1_v );
DEFCSTRING( t14182, "STATE-PROBABILITIES-INTERNAL" );

TSCP  hmm_2dwbm_2dinternal_a6ef8bc1( g13084, g13085 )
        TSCP  g13084, g13085;
{
        PUSHSTACKTRACE( t14182 );
        POPSTACKTRACE( POINTER_TSCP( state_probabilities( TSCP_POINTER( g13084 ), 
                                                          TSCP_POINTER( g13085 ) ) ) );
}

DEFTSCP( hmm_2dwbm_babilities_57309eab_v );
DEFCSTRING( t14184, "DEBUG-STATE-PROBABILITIES" );
EXTERNTSCPP( _2dtracks__2d_3ermat_8c3f3c72, XAL1( TSCP ) );
EXTERNTSCP( _2dtracks__2d_3ermat_8c3f3c72_v );

TSCP  hmm_2dwbm_babilities_57309eab( m13090, f13091, n13092 )
        TSCP  m13090, f13091, n13092;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t14184 );
        X1 = _2dtracks__2d_3ermat_8c3f3c72( f13091 );
        X2 = hmm_2dwbm_2dinternal_a6ef8bc1( m13090, X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( hmm_2dwbm_babilities_ecded547_v );
DEFCSTRING( t14188, "STATE-PROBABILITIES" );
EXTERNTSCPP( dbindings__2d_3elist_28c4290c, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings__2d_3elist_28c4290c_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dlong_v );
EXTERNTSCPP( scrt1_length, XAL1( TSCP ) );
EXTERNTSCP( scrt1_length_v );
EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );
EXTERNTSCPP( scrt1__24__car_2derror, XAL1( TSCP ) );
EXTERNTSCP( scrt1__24__car_2derror_v );
EXTERNTSCPP( scrt2_exp, XAL1( TSCP ) );
EXTERNTSCP( scrt2_exp_v );
EXTERNTSCPP( dbindings__2d_3elist_7b0c30a4, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings__2d_3elist_7b0c30a4_v );
EXTERNTSCP( scrt4_c_2dsizeof_2ddouble_v );
EXTERNTSCP( toollib_2dc_2dbindings_free_v );

TSCP  hmm_2dwbm_babilities_ecded547( m13098, f13099, n13100 )
        TSCP  m13098, f13099, n13100;
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

        PUSHSTACKTRACE( t14188 );
        X1 = _2dtracks__2d_3ermat_8c3f3c72( f13099 );
        X2 = hmm_2dwbm_2dinternal_a6ef8bc1( m13098, X1 );
        X4 = scrt1_length( f13099 );
        X3 = dbindings__2d_3elist_28c4290c( X2, 
                                            scrt4_c_2dsizeof_2dlong_v, 
                                            X4, FALSEVALUE );
        X5 = X3;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L14194:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14195;
        X4 = X6;
        goto L14219;
L14195:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L14198;
        scrt1__24__car_2derror( X5 );
L14198:
        X10 = PAIR_CAR( X5 );
        X11 = dbindings__2d_3elist_7b0c30a4( X10, 
                                             scrt4_c_2dsizeof_2ddouble_v, 
                                             n13100, TRUEVALUE );
        X12 = X11;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L14203:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L14204;
        X9 = X13;
        goto L14211;
L14204:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L14207;
        scrt1__24__car_2derror( X12 );
L14207:
        X17 = PAIR_CAR( X12 );
        X16 = scrt2_exp( X17 );
        X15 = sc_cons( X16, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L14210;
        X16 = PAIR_CDR( X12 );
        X14 = X15;
        X13 = X15;
        X12 = X16;
        GOBACK( L14203 );
L14210:
        X16 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L14215;
        scdebug_error( c13143, 
                       c13144, CONS( X14, EMPTYLIST ) );
L14215:
        X14 = SETGEN( PAIR_CDR( X14 ), X15 );
        X12 = X16;
        GOBACK( L14203 );
L14211:
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L14218;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L14194 );
L14218:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L14223;
        scdebug_error( c13143, 
                       c13144, CONS( X7, EMPTYLIST ) );
L14223:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L14194 );
L14219:
        X5 = X3;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L14227:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14235;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L14231;
        scrt1__24__car_2derror( X5 );
L14231:
        X11 = PAIR_CAR( X5 );
        X10 = toollib_2dc_2dbindings_free_v;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X11, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L14234;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L14227 );
L14234:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L14239;
        scdebug_error( c13143, 
                       c13144, CONS( X7, EMPTYLIST ) );
L14239:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L14227 );
L14235:
        X5 = toollib_2dc_2dbindings_free_v;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X2, PROCEDURE_CLOSURE( X5 ) );
        hmm_2dwbm_free_2drmat( X1 );
        POPSTACKTRACE( X4 );
}

DEFTSCP( hmm_2dwbm_2dinternal_3a6d4b26_v );
DEFCSTRING( t14241, "STATE-PROBABILITIES-WITH-BOX-SCORES-INTERNAL" );

TSCP  hmm_2dwbm_2dinternal_3a6d4b26( g13242, 
                                     g13243, g13244, g13245 )
        TSCP  g13242, g13243, g13244, g13245;
{
        PUSHSTACKTRACE( t14241 );
        POPSTACKTRACE( POINTER_TSCP( state_probabilities_with_box_scores( TSCP_POINTER( g13242 ), 
                                                                          TSCP_POINTER( g13243 ), 
                                                                          TSCP_POINTER( g13244 ), 
                                                                          sc_tscp_int( g13245 ) ) ) );
}

DEFTSCP( hmm_2dwbm_x_2dscores_90c531c7_v );
DEFCSTRING( t14243, "STATE-PROBABILITIES-WITH-BOX-SCORES" );

TSCP  hmm_2dwbm_x_2dscores_90c531c7( m13252, 
                                     f13253, 
                                     n13254, s13255, e13256 )
        TSCP  m13252, f13253, n13254, s13255, e13256;
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

        PUSHSTACKTRACE( t14243 );
        X1 = _2dtracks__2d_3ermat_8c3f3c72( f13253 );
        if  ( FALSE( e13256 ) )  goto L14246;
        X3 = _TSCP( 4 );
        goto L14247;
L14246:
        X3 = _TSCP( 0 );
L14247:
        X2 = hmm_2dwbm_2dinternal_3a6d4b26( m13252, 
                                            X1, s13255, X3 );
        X4 = scrt1_length( f13253 );
        X3 = dbindings__2d_3elist_28c4290c( X2, 
                                            scrt4_c_2dsizeof_2dlong_v, 
                                            X4, FALSEVALUE );
        X5 = X3;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L14251:
        if  ( NEQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14252;
        X4 = X6;
        goto L14276;
L14252:
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L14255;
        scrt1__24__car_2derror( X5 );
L14255:
        X10 = PAIR_CAR( X5 );
        X11 = dbindings__2d_3elist_7b0c30a4( X10, 
                                             scrt4_c_2dsizeof_2ddouble_v, 
                                             n13254, TRUEVALUE );
        X12 = X11;
        X13 = EMPTYLIST;
        X14 = EMPTYLIST;
L14260:
        if  ( NEQ( _S2CUINT( X12 ), _S2CUINT( EMPTYLIST ) ) )  goto L14261;
        X9 = X13;
        goto L14268;
L14261:
        if  ( EQ( TSCPTAG( X12 ), PAIRTAG ) )  goto L14264;
        scrt1__24__car_2derror( X12 );
L14264:
        X17 = PAIR_CAR( X12 );
        X16 = scrt2_exp( X17 );
        X15 = sc_cons( X16, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X13 ), _S2CUINT( EMPTYLIST ) ) )  goto L14267;
        X16 = PAIR_CDR( X12 );
        X14 = X15;
        X13 = X15;
        X12 = X16;
        GOBACK( L14260 );
L14267:
        X16 = PAIR_CDR( X12 );
        if  ( EQ( TSCPTAG( X14 ), PAIRTAG ) )  goto L14272;
        scdebug_error( c13143, 
                       c13144, CONS( X14, EMPTYLIST ) );
L14272:
        X14 = SETGEN( PAIR_CDR( X14 ), X15 );
        X12 = X16;
        GOBACK( L14260 );
L14268:
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L14275;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L14251 );
L14275:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L14280;
        scdebug_error( c13143, 
                       c13144, CONS( X7, EMPTYLIST ) );
L14280:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L14251 );
L14276:
        X5 = X3;
        X6 = EMPTYLIST;
        X7 = EMPTYLIST;
L14284:
        if  ( EQ( _S2CUINT( X5 ), _S2CUINT( EMPTYLIST ) ) )  goto L14292;
        if  ( EQ( TSCPTAG( X5 ), PAIRTAG ) )  goto L14288;
        scrt1__24__car_2derror( X5 );
L14288:
        X11 = PAIR_CAR( X5 );
        X10 = toollib_2dc_2dbindings_free_v;
        X10 = UNKNOWNCALL( X10, 1 );
        X9 = VIA( PROCEDURE_CODE( X10 ) )( X11, 
                                           PROCEDURE_CLOSURE( X10 ) );
        X8 = sc_cons( X9, EMPTYLIST );
        if  ( NEQ( _S2CUINT( X6 ), _S2CUINT( EMPTYLIST ) ) )  goto L14291;
        X9 = PAIR_CDR( X5 );
        X7 = X8;
        X6 = X8;
        X5 = X9;
        GOBACK( L14284 );
L14291:
        X9 = PAIR_CDR( X5 );
        if  ( EQ( TSCPTAG( X7 ), PAIRTAG ) )  goto L14296;
        scdebug_error( c13143, 
                       c13144, CONS( X7, EMPTYLIST ) );
L14296:
        X7 = SETGEN( PAIR_CDR( X7 ), X8 );
        X5 = X9;
        GOBACK( L14284 );
L14292:
        X5 = toollib_2dc_2dbindings_free_v;
        X5 = UNKNOWNCALL( X5, 1 );
        VIA( PROCEDURE_CODE( X5 ) )( X2, PROCEDURE_CLOSURE( X5 ) );
        hmm_2dwbm_free_2drmat( X1 );
        POPSTACKTRACE( X4 );
}

DEFTSCP( hmm_2dwbm_dscores_21_35c11955_v );
DEFCSTRING( t14298, "UPDATE-WITH-BOX-SCORES!" );

TSCP  hmm_2dwbm_dscores_21_35c11955( g13396, 
                                     g13397, 
                                     g13398, 
                                     g13399, 
                                     g13400, 
                                     g13401, 
                                     g13402, 
                                     g13403, 
                                     g13404, 
                                     g13405, g13406, g13407 )
        TSCP  g13396, 
              g13397, 
              g13398, 
              g13399, 
              g13400, 
              g13401, 
              g13402, 
              g13403, g13404, g13405, g13406, g13407;
{
        PUSHSTACKTRACE( t14298 );
        POPSTACKTRACE( sc_int_tscp( update_with_box_scores( TSCP_POINTER( g13396 ), 
                                                            TSCP_POINTER( g13397 ), 
                                                            TSCP_POINTER( g13398 ), 
                                                            TSCP_POINTER( g13399 ), 
                                                            TSCP_DOUBLE( g13400 ), 
                                                            TSCP_POINTER( g13401 ), 
                                                            sc_tscp_int( g13402 ), 
                                                            sc_tscp_int( g13403 ), 
                                                            sc_tscp_int( g13404 ), 
                                                            sc_tscp_int( g13405 ), 
                                                            TSCP_POINTER( g13406 ), 
                                                            sc_tscp_int( g13407 ) ) ) );
}

DEFTSCP( hmm_2dwbm_dscores_21_ed104c4_v );
DEFCSTRING( t14300, "UPDATE-MODEL-ML-WITH-BOX-SCORES!" );
EXTERNTSCPP( dbindings_2dpointers_a3114ab5, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( dbindings_2dpointers_a3114ab5_v );
EXTERNTSCPP( dbindings_th_2darray_e5b6f976, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_th_2darray_e5b6f976_v );
EXTERNTSCP( scrt4_c_2dsizeof_2dint_v );
EXTERNTSCPP( dbindings_ct_2darray_88cb3000, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_ct_2darray_88cb3000_v );
EXTERNTSCP( b_2dstuff_raining_2a_bde0a0d6_v );

TSCP  hmm_2dwbm_l13433( c13434, c14306 )
        TSCP  c13434, c14306;
{
        TSCP  X11, 
              X10, 
              X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "hmm_2dwbm_l13433 [inside UPDATE-MODEL-ML-WITH-BOX-S\
CORES!]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14306, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14306, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14306, 2 );
        X4 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14306, 3 );
        X5 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14306, 4 );
        X6 = DISPLAY( 7 );
        DISPLAY( 7 ) = CLOSURE_VAR( c14306, 5 );
        X7 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c14306, 6 );
        X10 = sc_make_2dvector( DISPLAY( 2 ), 
                                CONS( _TSCP( 0 ), EMPTYLIST ) );
        X9 = dbindings_ct_2darray_88cb3000( c13434, 
                                            X10, 
                                            scrt4_c_2dsizeof_2dint_v, 
                                            TRUEVALUE );
        if  ( FALSE( DISPLAY( 3 ) ) )  goto L14308;
        X10 = _TSCP( 4 );
        goto L14309;
L14308:
        X10 = _TSCP( 0 );
L14309:
        if  ( FALSE( DISPLAY( 5 ) ) )  goto L14310;
        X11 = _TSCP( 4 );
        goto L14311;
L14310:
        X11 = _TSCP( 0 );
L14311:
        X8 = hmm_2dwbm_dscores_21_35c11955( DISPLAY( 6 ), 
                                            DISPLAY( 7 ), 
                                            DISPLAY( 1 ), 
                                            _TSCP( 0 ), 
                                            _TSCP( 0 ), 
                                            X9, 
                                            DISPLAY( 2 ), 
                                            _TSCP( 4 ), 
                                            b_2dstuff_raining_2a_bde0a0d6_v, 
                                            X10, 
                                            DISPLAY( 4 ), X11 );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 2 ) = X4;
        DISPLAY( 1 ) = X5;
        DISPLAY( 7 ) = X6;
        DISPLAY( 6 ) = X7;
        POPSTACKTRACE( X8 );
}

TSCP  hmm_2dwbm_l13431( s13432, c14304 )
        TSCP  s13432, c14304;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD7 = DISPLAY( 7 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "hmm_2dwbm_l13431 [inside UPDATE-MODEL-ML-WITH-BOX-S\
CORES!]" );
        X1 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14304, 0 );
        X2 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14304, 1 );
        X3 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14304, 2 );
        X4 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14304, 3 );
        X5 = DISPLAY( 6 );
        DISPLAY( 6 ) = CLOSURE_VAR( c14304, 4 );
        X6 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14304, 5 );
        DISPLAY( 7 ) = s13432;
        X8 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dwbm_l13433, 
                            MAKECLOSURE( EMPTYLIST, 
                                         7, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 2 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 7 ), 
                                         DISPLAY( 6 ) ) );
        X7 = dbindings_th_2darray_e5b6f976( DISPLAY( 2 ), 
                                            scrt4_c_2dsizeof_2dint_v, 
                                            X8 );
        DISPLAY( 5 ) = X1;
        DISPLAY( 4 ) = X2;
        DISPLAY( 3 ) = X3;
        DISPLAY( 1 ) = X4;
        DISPLAY( 6 ) = X5;
        DISPLAY( 2 ) = X6;
        SDVAL = X7;
        DISPLAY( 7 ) = SD7;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( scrt4_vector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_v );

TSCP  hmm_2dwbm_l13429( m13430, c14302 )
        TSCP  m13430, c14302;
{
        TSCP  X9, 
              X8, X7, X6, X5, X4, X3, X2, X1;
        TSCP  SD6 = DISPLAY( 6 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "hmm_2dwbm_l13429 [inside UPDATE-MODEL-ML-WITH-BOX-S\
CORES!]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c14302, 0 );
        X2 = DISPLAY( 5 );
        DISPLAY( 5 ) = CLOSURE_VAR( c14302, 1 );
        X3 = DISPLAY( 4 );
        DISPLAY( 4 ) = CLOSURE_VAR( c14302, 2 );
        X4 = DISPLAY( 3 );
        DISPLAY( 3 ) = CLOSURE_VAR( c14302, 3 );
        X5 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c14302, 4 );
        X6 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c14302, 5 );
        DISPLAY( 6 ) = m13430;
        X8 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dwbm_l13431, 
                            MAKECLOSURE( EMPTYLIST, 
                                         6, 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 6 ), 
                                         DISPLAY( 2 ) ) );
        X9 = scrt4_vector( CONS( DISPLAY( 0 ), EMPTYLIST ) );
        X7 = dbindings_2dpointers_a3114ab5( X8, X9 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 5 ) = X2;
        DISPLAY( 4 ) = X3;
        DISPLAY( 3 ) = X4;
        DISPLAY( 1 ) = X5;
        DISPLAY( 2 ) = X6;
        SDVAL = X7;
        DISPLAY( 6 ) = SD6;
        POPSTACKTRACE( SDVAL );
}

TSCP  hmm_2dwbm_dscores_21_ed104c4( m13422, 
                                    s13423, 
                                    d13424, 
                                    d13425, 
                                    u13426, s13427, e13428 )
        TSCP  m13422, 
              s13423, 
              d13424, d13425, u13426, s13427, e13428;
{
        TSCP  X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SD3 = DISPLAY( 3 );
        TSCP  SD4 = DISPLAY( 4 );
        TSCP  SD5 = DISPLAY( 5 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t14300 );
        DISPLAY( 0 ) = s13423;
        DISPLAY( 1 ) = d13424;
        DISPLAY( 2 ) = d13425;
        DISPLAY( 3 ) = u13426;
        DISPLAY( 4 ) = s13427;
        DISPLAY( 5 ) = e13428;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            hmm_2dwbm_l13429, 
                            MAKECLOSURE( EMPTYLIST, 
                                         6, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 5 ), 
                                         DISPLAY( 4 ), 
                                         DISPLAY( 3 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ) ) );
        X2 = scrt4_vector( CONS( m13422, EMPTYLIST ) );
        SDVAL = dbindings_2dpointers_a3114ab5( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        DISPLAY( 2 ) = SD2;
        DISPLAY( 3 ) = SD3;
        DISPLAY( 4 ) = SD4;
        DISPLAY( 5 ) = SD5;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( hmm_2dwbm_x_2dscores_cd6e9246_v );
DEFCSTRING( t14312, "MODEL-LOG-LIKELIHOOD-WITH-BOX-SCORES" );
EXTERNTSCPP( hmm_2dwbm_2dinternal_66bfea8d, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( hmm_2dwbm_2dinternal_66bfea8d_v );

TSCP  hmm_2dwbm_x_2dscores_cd6e9246( m13436, 
                                     r13437, s13438, e13439 )
        TSCP  m13436, r13437, s13438, e13439;
{
        TSCP  X1;

        PUSHSTACKTRACE( t14312 );
        if  ( FALSE( e13439 ) )  goto L14314;
        X1 = _TSCP( 4 );
        goto L14315;
L14314:
        X1 = _TSCP( 0 );
L14315:
        POPSTACKTRACE( hmm_2dwbm_2dinternal_66bfea8d( m13436, 
                                                      r13437, 
                                                      s13438, X1 ) );
}

DEFTSCP( hmm_2dwbm_2dinternal_66bfea8d_v );
DEFCSTRING( t14316, "MODEL-LOG-LIKELIHOOD-WITH-BOX-SCORES-INTERNAL" );

TSCP  hmm_2dwbm_2dinternal_66bfea8d( g13441, 
                                     g13442, g13443, g13444 )
        TSCP  g13441, g13442, g13443, g13444;
{
        PUSHSTACKTRACE( t14316 );
        POPSTACKTRACE( DOUBLE_TSCP( logLike_with_box_scores( TSCP_POINTER( g13441 ), 
                                                             TSCP_POINTER( g13442 ), 
                                                             TSCP_POINTER( g13443 ), 
                                                             sc_tscp_int( g13444 ) ) ) );
}

DEFTSCP( hmm_2dwbm_update_2dx_21_v );
DEFCSTRING( t14318, "UPDATE-X!" );

TSCP  hmm_2dwbm_update_2dx_21( g13451, 
                               g13452, 
                               g13453, 
                               g13454, 
                               g13455, 
                               g13456, 
                               g13457, 
                               g13458, 
                               g13459, 
                               g13460, g13461, g13462, g13463 )
        TSCP  g13451, 
              g13452, 
              g13453, 
              g13454, 
              g13455, 
              g13456, 
              g13457, 
              g13458, 
              g13459, g13460, g13461, g13462, g13463;
{
        PUSHSTACKTRACE( t14318 );
        POPSTACKTRACE( DOUBLE_TSCP( updateX( TSCP_POINTER( g13451 ), 
                                             TSCP_POINTER( g13452 ), 
                                             sc_tscp_int( g13453 ), 
                                             TSCP_POINTER( g13454 ), 
                                             sc_tscp_int( g13455 ), 
                                             TSCP_POINTER( g13456 ), 
                                             TSCP_POINTER( g13457 ), 
                                             TSCP_POINTER( g13458 ), 
                                             TSCP_POINTER( g13459 ), 
                                             TSCP_POINTER( g13460 ), 
                                             sc_tscp_int( g13461 ), 
                                             sc_tscp_int( g13462 ), 
                                             sc_tscp_int( g13463 ) ) ) );
}

DEFTSCP( hmm_2dwbm_erivatives_9f45b654_v );
DEFCSTRING( t14320, "UPDATE-OBJECTIVE-DERIVATIVES" );

TSCP  hmm_2dwbm_erivatives_9f45b654( g13479, 
                                     g13480, 
                                     g13481, g13482, g13483 )
        TSCP  g13479, g13480, g13481, g13482, g13483;
{
        PUSHSTACKTRACE( t14320 );
        update_objective_derivatives( sc_tscp_int( g13479 ), 
                                      TSCP_DOUBLE( g13480 ), 
                                      TSCP_POINTER( g13481 ), 
                                      TSCP_POINTER( g13482 ), 
                                      TSCP_POINTER( g13483 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_ne_2dvideo_4a3315c3_v );
DEFCSTRING( t14323, "SENTENCE-DERIVATIVES-ONE-VIDEO" );

TSCP  hmm_2dwbm_ne_2dvideo_4a3315c3( g13492, 
                                     g13493, 
                                     g13494, 
                                     g13495, 
                                     g13496, 
                                     g13497, 
                                     g13498, 
                                     g13499, 
                                     g13500, 
                                     g13501, 
                                     g13502, 
                                     g13503, g13504, g13505 )
        TSCP  g13492, 
              g13493, 
              g13494, 
              g13495, 
              g13496, 
              g13497, 
              g13498, 
              g13499, 
              g13500, 
              g13501, g13502, g13503, g13504, g13505;
{
        PUSHSTACKTRACE( t14323 );
        POPSTACKTRACE( POINTER_TSCP( sentence_derivatives_one_video( TSCP_POINTER( g13492 ), 
                                                                     TSCP_POINTER( g13493 ), 
                                                                     sc_tscp_int( g13494 ), 
                                                                     TSCP_POINTER( g13495 ), 
                                                                     TSCP_POINTER( g13496 ), 
                                                                     TSCP_POINTER( g13497 ), 
                                                                     TSCP_POINTER( g13498 ), 
                                                                     TSCP_POINTER( g13499 ), 
                                                                     TSCP_POINTER( g13500 ), 
                                                                     TSCP_POINTER( g13501 ), 
                                                                     sc_tscp_int( g13502 ), 
                                                                     sc_tscp_int( g13503 ), 
                                                                     sc_tscp_int( g13504 ), 
                                                                     sc_tscp_int( g13505 ) ) ) );
}

DEFTSCP( hmm_2dwbm_rse_2dmode_c1ae4351_v );
DEFCSTRING( t14325, "SENTENCE-DERIVATIVES-REVERSE-MODE" );

TSCP  hmm_2dwbm_rse_2dmode_c1ae4351( g13522, 
                                     g13523, 
                                     g13524, 
                                     g13525, 
                                     g13526, 
                                     g13527, 
                                     g13528, 
                                     g13529, 
                                     g13530, 
                                     g13531, 
                                     g13532, g13533, g13534 )
        TSCP  g13522, 
              g13523, 
              g13524, 
              g13525, 
              g13526, 
              g13527, 
              g13528, 
              g13529, 
              g13530, g13531, g13532, g13533, g13534;
{
        PUSHSTACKTRACE( t14325 );
        POPSTACKTRACE( DOUBLE_TSCP( sentence_derivatives_reverse_mode( TSCP_POINTER( g13522 ), 
                                                                       TSCP_POINTER( g13523 ), 
                                                                       sc_tscp_int( g13524 ), 
                                                                       TSCP_POINTER( g13525 ), 
                                                                       TSCP_POINTER( g13526 ), 
                                                                       TSCP_POINTER( g13527 ), 
                                                                       TSCP_POINTER( g13528 ), 
                                                                       TSCP_POINTER( g13529 ), 
                                                                       TSCP_POINTER( g13530 ), 
                                                                       sc_tscp_int( g13531 ), 
                                                                       sc_tscp_int( g13532 ), 
                                                                       sc_tscp_int( g13533 ), 
                                                                       sc_tscp_int( g13534 ) ) ) );
}

DEFTSCP( hmm_2dwbm_ne_2dvideo_901869a7_v );
DEFCSTRING( t14327, "SENTENCE-LIKELIHOODS-ONE-VIDEO" );

TSCP  hmm_2dwbm_ne_2dvideo_901869a7( g13550, 
                                     g13551, 
                                     g13552, 
                                     g13553, 
                                     g13554, 
                                     g13555, 
                                     g13556, 
                                     g13557, 
                                     g13558, 
                                     g13559, 
                                     g13560, g13561, g13562 )
        TSCP  g13550, 
              g13551, 
              g13552, 
              g13553, 
              g13554, 
              g13555, 
              g13556, 
              g13557, 
              g13558, g13559, g13560, g13561, g13562;
{
        PUSHSTACKTRACE( t14327 );
        POPSTACKTRACE( POINTER_TSCP( sentence_likelihoods_one_video( TSCP_POINTER( g13550 ), 
                                                                     sc_tscp_int( g13551 ), 
                                                                     TSCP_POINTER( g13552 ), 
                                                                     TSCP_POINTER( g13553 ), 
                                                                     TSCP_POINTER( g13554 ), 
                                                                     TSCP_POINTER( g13555 ), 
                                                                     TSCP_POINTER( g13556 ), 
                                                                     TSCP_POINTER( g13557 ), 
                                                                     TSCP_POINTER( g13558 ), 
                                                                     sc_tscp_int( g13559 ), 
                                                                     sc_tscp_int( g13560 ), 
                                                                     sc_tscp_int( g13561 ), 
                                                                     sc_tscp_int( g13562 ) ) ) );
}

DEFTSCP( hmm_2dwbm_imum_2done_1971865d_v );
DEFCSTRING( t14329, "SENTENCE-MAXIMUM-ONE" );

TSCP  hmm_2dwbm_imum_2done_1971865d( g13578, 
                                     g13579, 
                                     g13580, 
                                     g13581, 
                                     g13582, 
                                     g13583, 
                                     g13584, 
                                     g13585, 
                                     g13586, 
                                     g13587, 
                                     g13588, g13589, g13590 )
        TSCP  g13578, 
              g13579, 
              g13580, 
              g13581, 
              g13582, 
              g13583, 
              g13584, 
              g13585, 
              g13586, g13587, g13588, g13589, g13590;
{
        PUSHSTACKTRACE( t14329 );
        POPSTACKTRACE( DOUBLE_TSCP( sentence_maximum_one( TSCP_POINTER( g13578 ), 
                                                          sc_tscp_int( g13579 ), 
                                                          TSCP_POINTER( g13580 ), 
                                                          TSCP_POINTER( g13581 ), 
                                                          TSCP_POINTER( g13582 ), 
                                                          TSCP_POINTER( g13583 ), 
                                                          TSCP_POINTER( g13584 ), 
                                                          TSCP_POINTER( g13585 ), 
                                                          sc_tscp_int( g13586 ), 
                                                          sc_tscp_int( g13587 ), 
                                                          sc_tscp_int( g13588 ), 
                                                          sc_tscp_int( g13589 ), 
                                                          TSCP_POINTER( g13590 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dhmm_v );
DEFCSTRING( t14331, "MODEL-HMM" );

TSCP  hmm_2dwbm_model_2dhmm( g13606 )
        TSCP  g13606;
{
        PUSHSTACKTRACE( t14331 );
        POPSTACKTRACE( POINTER_TSCP( model_hmm( TSCP_POINTER( g13606 ) ) ) );
}

DEFTSCP( hmm_2dwbm_model_2dffm_v );
DEFCSTRING( t14333, "MODEL-FFM" );

TSCP  hmm_2dwbm_model_2dffm( g13610, g13611 )
        TSCP  g13610, g13611;
{
        PUSHSTACKTRACE( t14333 );
        POPSTACKTRACE( POINTER_TSCP( model_ffm( TSCP_POINTER( g13610 ), 
                                                sc_tscp_int( g13611 ) ) ) );
}

DEFTSCP( hmm_2dwbm_2dwidth_21_a7c21e0_v );
DEFCSTRING( t14335, "SET-SIGMOID-WIDTH!" );

TSCP  hmm_2dwbm_2dwidth_21_a7c21e0( g13616 )
        TSCP  g13616;
{
        PUSHSTACKTRACE( t14335 );
        set_sigmoid_width( TSCP_DOUBLE( g13616 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_set_2ddataset_21_v );
DEFCSTRING( t14338, "SET-DATASET!" );

TSCP  hmm_2dwbm_set_2ddataset_21( g13621 )
        TSCP  g13621;
{
        PUSHSTACKTRACE( t14338 );
        set_dataset( TSCP_POINTER( g13621 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_get_2ddataset_v );
DEFCSTRING( t14341, "GET-DATASET" );

TSCP  hmm_2dwbm_get_2ddataset(  )
{
        PUSHSTACKTRACE( t14341 );
        POPSTACKTRACE( CSTRING_TSCP( get_dataset(  ) ) );
}

DEFTSCP( hmm_2dwbm_uration_21_95664153_v );
DEFCSTRING( t14343, "SWITCH-DURATION!" );

TSCP  hmm_2dwbm_uration_21_95664153( g13629 )
        TSCP  g13629;
{
        PUSHSTACKTRACE( t14343 );
        switch_duration( sc_tscp_int( g13629 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_uration_21_19d6d28b_v );
DEFCSTRING( t14346, "SET-MIN-DURATION!" );

TSCP  hmm_2dwbm_uration_21_19d6d28b( g13634 )
        TSCP  g13634;
{
        PUSHSTACKTRACE( t14346 );
        set_min_duration( sc_tscp_int( g13634 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_2dduration_c507a4a_v );
DEFCSTRING( t14349, "GET-MIN-DURATION" );

TSCP  hmm_2dwbm_2dduration_c507a4a(  )
{
        PUSHSTACKTRACE( t14349 );
        POPSTACKTRACE( sc_int_tscp( get_min_duration(  ) ) );
}

DEFTSCP( hmm_2dwbm_2dprior_21_25897cd4_v );
DEFCSTRING( t14351, "SWITCH-SENTENCE-PRIOR!" );

TSCP  hmm_2dwbm_2dprior_21_25897cd4( g13642 )
        TSCP  g13642;
{
        PUSHSTACKTRACE( t14351 );
        switch_sentence_prior( sc_tscp_int( g13642 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_get_2ddisplacement_v );
DEFCSTRING( t14354, "GET-DISPLACEMENT" );

TSCP  hmm_2dwbm_get_2ddisplacement(  )
{
        PUSHSTACKTRACE( t14354 );
        POPSTACKTRACE( sc_int_tscp( get_displacement(  ) ) );
}

DEFTSCP( hmm_2dwbm_acement_21_ad56d1d_v );
DEFCSTRING( t14356, "SWITCH-DISPLACEMENT!" );

TSCP  hmm_2dwbm_acement_21_ad56d1d( g13650 )
        TSCP  g13650;
{
        PUSHSTACKTRACE( t14356 );
        switch_displacement( sc_tscp_int( g13650 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_straint_21_8a95976b_v );
DEFCSTRING( t14359, "SET-MODEL-CONSTRAINT!" );

TSCP  hmm_2dwbm_straint_21_8a95976b( g13655 )
        TSCP  g13655;
{
        PUSHSTACKTRACE( t14359 );
        set_model_constraint( sc_tscp_int( g13655 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_straint_21_5ec75af4_v );
DEFCSTRING( t14362, "SET-STATE-CONSTRAINT!" );

TSCP  hmm_2dwbm_straint_21_5ec75af4( g13660 )
        TSCP  g13660;
{
        PUSHSTACKTRACE( t14362 );
        set_state_constraint( sc_tscp_int( g13660 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( hmm_2dwbm_get_2dpad_2dall_v );
DEFCSTRING( t14365, "GET-PAD-ALL" );

TSCP  hmm_2dwbm_get_2dpad_2dall(  )
{
        PUSHSTACKTRACE( t14365 );
        POPSTACKTRACE( sc_int_tscp( get_pad_all(  ) ) );
}

DEFTSCP( hmm_2dwbm_get_2dduration_v );
DEFCSTRING( t14367, "GET-DURATION" );

TSCP  hmm_2dwbm_get_2dduration(  )
{
        PUSHSTACKTRACE( t14367 );
        POPSTACKTRACE( sc_int_tscp( get_duration(  ) ) );
}

DEFTSCP( hmm_2dwbm_single_2dhmm_2drun_v );
DEFCSTRING( t14369, "SINGLE-HMM-RUN" );

TSCP  hmm_2dwbm_single_2dhmm_2drun( g13671, 
                                    g13672, 
                                    g13673, g13674, g13675 )
        TSCP  g13671, g13672, g13673, g13674, g13675;
{
        PUSHSTACKTRACE( t14369 );
        POPSTACKTRACE( DOUBLE_TSCP( single_hmm_run( TSCP_POINTER( g13671 ), 
                                                    sc_tscp_int( g13672 ), 
                                                    TSCP_POINTER( g13673 ), 
                                                    TSCP_POINTER( g13674 ), 
                                                    sc_tscp_int( g13675 ) ) ) );
}

DEFTSCP( hmm_2dwbm_tives_2dml_ba581b2_v );
DEFCSTRING( t14371, "GT-WITH-DERIVATIVES-ML" );

TSCP  hmm_2dwbm_tives_2dml_ba581b2( g13683, g13684 )
        TSCP  g13683, g13684;
{
        PUSHSTACKTRACE( t14371 );
        gt_with_derivatives_ml( TSCP_POINTER( g13683 ), 
                                TSCP_POINTER( g13684 ) );
        POPSTACKTRACE( FALSEVALUE );
}

void scrt1__init();
void scrt4__init();
void toollib_2dc_2dbindings__init();
void idealib_2dtracks__init();
void idealib_2dstuff__init();
void qobischeme__init();
void scrt2__init();
void scdebug__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scrt1__init();
        scrt4__init();
        toollib_2dc_2dbindings__init();
        idealib_2dtracks__init();
        idealib_2dstuff__init();
        qobischeme__init();
        scrt2__init();
        scdebug__init();
        MAXDISPLAY( 8 );
}

void  hmm_2dwbm__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(hmm_2dwbm SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t13719, 
                       ADR( hmm_2dwbm_bm_2d1_2d0_a86574ef_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_bm_2d1_2d0_a86574ef, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13721, 
                       ADR( hmm_2dwbm_bm_2d3_2d0_d2a5278f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_bm_2d3_2d0_d2a5278f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13723, 
                       ADR( hmm_2dwbm_bm_2d5_2d0_5de5d22f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_bm_2d5_2d0_5de5d22f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13725, 
                       ADR( hmm_2dwbm_bm_2d7_2d0_2725814f_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_bm_2d7_2d0_2725814f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13727, 
                       ADR( hmm_2dwbm_bm_2d9_2d0_98153f2e_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_bm_2d9_2d0_98153f2e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13729, 
                       ADR( hmm_2dwbm_m_2d11_2d0_4f6c8691_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_m_2d11_2d0_4f6c8691, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13731, 
                       ADR( hmm_2dwbm_m_2d13_2d0_35acd5f1_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_m_2d13_2d0_35acd5f1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13733, 
                       ADR( hmm_2dwbm_m_2d15_2d0_baec2051_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_m_2d15_2d0_baec2051, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13735, 
                       ADR( hmm_2dwbm_m_2d17_2d0_c02c7331_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_m_2d17_2d0_c02c7331, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13737, 
                       ADR( hmm_2dwbm_make_2dpsi_v ), 
                       MAKEPROCEDURE( 7, 
                                      0, 
                                      hmm_2dwbm_make_2dpsi, EMPTYLIST ) );
        INITIALIZEVAR( t13782, 
                       ADR( hmm_2dwbm_psi_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_3f, EMPTYLIST ) );
        INITIALIZEVAR( t13798, 
                       ADR( hmm_2dwbm__2dname_21_e1f48be_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm__2dname_21_e1f48be, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13802, 
                       ADR( hmm_2dwbm_psi_2dname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2dname, EMPTYLIST ) );
        INITIALIZEVAR( t13813, 
                       ADR( hmm_2dwbm_set_2dpsi_2dname_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_set_2dpsi_2dname_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13824, 
                       ADR( hmm_2dwbm_dspeech_21_116e3729_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_dspeech_21_116e3729, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13828, 
                       ADR( hmm_2dwbm_f_2dspeech_b703e518_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_f_2dspeech_b703e518, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13839, 
                       ADR( hmm_2dwbm_dspeech_21_be3d2cc4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_dspeech_21_be3d2cc4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13850, 
                       ADR( hmm_2dwbm_eatures_21_470972d7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_eatures_21_470972d7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13854, 
                       ADR( hmm_2dwbm_psi_2dfeatures_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2dfeatures, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13865, 
                       ADR( hmm_2dwbm_eatures_21_6cdd7491_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_eatures_21_6cdd7491, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13876, 
                       ADR( hmm_2dwbm_2droles_21_3ea188a8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2droles_21_3ea188a8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13880, 
                       ADR( hmm_2dwbm_psi_2dn_2droles_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2dn_2droles, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13891, 
                       ADR( hmm_2dwbm_2droles_21_a135b80b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2droles_21_a135b80b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13902, 
                       ADR( hmm_2dwbm_ameters_21_5b66f4_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_ameters_21_5b66f4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13906, 
                       ADR( hmm_2dwbm_psi_2dparameters_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2dparameters, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13917, 
                       ADR( hmm_2dwbm_ameters_21_4f1b0096_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_ameters_21_4f1b0096, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13928, 
                       ADR( hmm_2dwbm_psi_2da_21_30a1b944_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_psi_2da_21_30a1b944, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13932, 
                       ADR( hmm_2dwbm_psi_2da_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2da, EMPTYLIST ) );
        INITIALIZEVAR( t13943, 
                       ADR( hmm_2dwbm_set_2dpsi_2da_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_set_2dpsi_2da_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13954, 
                       ADR( hmm_2dwbm_psi_2db_21_221416aa_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_psi_2db_21_221416aa, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13958, 
                       ADR( hmm_2dwbm_psi_2db_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_psi_2db, EMPTYLIST ) );
        INITIALIZEVAR( t13969, 
                       ADR( hmm_2dwbm_set_2dpsi_2db_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_set_2dpsi_2db_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13980, 
                       ADR( hmm_2dwbm_pos_2dc_3anoun_v ), 
                       sc_int_tscp( NOUN ) );
        INITIALIZEVAR( t13981, 
                       ADR( hmm_2dwbm_pos_2dc_3averb_v ), 
                       sc_int_tscp( VERB ) );
        INITIALIZEVAR( t13982, 
                       ADR( hmm_2dwbm_pos_2dc_3aadverb_v ), 
                       sc_int_tscp( ADVERB ) );
        INITIALIZEVAR( t13983, 
                       ADR( hmm_2dwbm_pos_2dc_3aadjective_v ), 
                       sc_int_tscp( ADJECTIVE ) );
        INITIALIZEVAR( t13984, 
                       ADR( hmm_2dwbm_reposition_9a732ab2_v ), 
                       sc_int_tscp( PREPOSITION ) );
        INITIALIZEVAR( t13985, 
                       ADR( hmm_2dwbm_reposition_f7689b37_v ), 
                       sc_int_tscp( MOTION_PREPOSITION ) );
        INITIALIZEVAR( t13986, 
                       ADR( hmm_2dwbm_pos_2dc_3averb0_v ), 
                       sc_int_tscp( VERB0 ) );
        INITIALIZEVAR( t13987, 
                       ADR( hmm_2dwbm_pos_2dc_3averb1_v ), 
                       sc_int_tscp( VERB1 ) );
        INITIALIZEVAR( t13988, 
                       ADR( hmm_2dwbm_pos_2dc_3aother_v ), 
                       sc_int_tscp( OTHER ) );
        INITIALIZEVAR( t13989, 
                       ADR( hmm_2dwbm_e_2dc_3aml_c29fe29b_v ), 
                       sc_int_tscp( HMM_ML ) );
        INITIALIZEVAR( t13990, 
                       ADR( hmm_2dwbm_e_2dc_3adt_31c184_v ), 
                       sc_int_tscp( HMM_DT ) );
        INITIALIZEVAR( t13991, 
                       ADR( hmm_2dwbm_dc_3amixed_c2d7bb11_v ), 
                       sc_int_tscp( HMM_MIXED ) );
        INITIALIZEVAR( t13992, 
                       ADR( hmm_2dwbm_int_3anone_6f2a6be5_v ), 
                       sc_int_tscp( NO_MODEL_CONSTRAINT ) );
        INITIALIZEVAR( t13993, 
                       ADR( hmm_2dwbm_duplicates_618301cb_v ), 
                       sc_int_tscp( NO_DUPLICATE_MODELS ) );
        INITIALIZEVAR( t13994, 
                       ADR( hmm_2dwbm_int_3anone_1a4db61f_v ), 
                       sc_int_tscp( NO_STATE_CONSTRAINT ) );
        INITIALIZEVAR( t13995, 
                       ADR( hmm_2dwbm_aint_3atie_475b3ad9_v ), 
                       sc_int_tscp( TIE_STATES ) );
        INITIALIZEVAR( t13996, 
                       ADR( hmm_2dwbm_allocate_2divec_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_allocate_2divec, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13998, 
                       ADR( hmm_2dwbm_set_2divec_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_set_2divec_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14001, 
                       ADR( hmm_2dwbm_free_2divec_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2divec, EMPTYLIST ) );
        INITIALIZEVAR( t14004, 
                       ADR( hmm_2dwbm_allocate_2drmat_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_allocate_2drmat, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14006, 
                       ADR( hmm_2dwbm_rmat_2dget_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_rmat_2dget, EMPTYLIST ) );
        INITIALIZEVAR( t14008, 
                       ADR( hmm_2dwbm_rmat_2dset_21_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_rmat_2dset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14011, 
                       ADR( hmm_2dwbm_free_2drmat_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2drmat, EMPTYLIST ) );
        INITIALIZEVAR( t14014, 
                       ADR( hmm_2dwbm_t_2dvector_8defbe83_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_t_2dvector_8defbe83, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14016, 
                       ADR( hmm_2dwbm_r_2dset_21_a0833740_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_r_2dset_21_a0833740, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14019, 
                       ADR( hmm_2dwbm_t_2dvector_581667e8_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_t_2dvector_581667e8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14022, 
                       ADR( hmm_2dwbm_allocate_2dmodel_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_allocate_2dmodel, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14024, 
                       ADR( hmm_2dwbm_copy_2dmodel_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_copy_2dmodel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14027, 
                       ADR( hmm_2dwbm_clone_2dmodel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_clone_2dmodel, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14031, 
                       ADR( hmm_2dwbm_clone_2dc_2dmodel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_clone_2dc_2dmodel, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14033, 
                       ADR( hmm_2dwbm_model_2dii_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2dii, EMPTYLIST ) );
        INITIALIZEVAR( t14035, 
                       ADR( hmm_2dwbm_model_2dnn_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_model_2dnn, EMPTYLIST ) );
        INITIALIZEVAR( t14037, 
                       ADR( hmm_2dwbm_model_2duu_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2duu, EMPTYLIST ) );
        INITIALIZEVAR( t14039, 
                       ADR( hmm_2dwbm_ure_2dtype_9bf469a7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_ure_2dtype_9bf469a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14041, 
                       ADR( hmm_2dwbm_tinuous_21_658cfeed_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_tinuous_21_658cfeed, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14044, 
                       ADR( hmm_2dwbm_dradial_21_ce95ee5e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_dradial_21_ce95ee5e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14047, 
                       ADR( hmm_2dwbm_iscrete_21_6a40c8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_iscrete_21_6a40c8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14050, 
                       ADR( hmm_2dwbm_model_2dparameter_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_model_2dparameter, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14052, 
                       ADR( hmm_2dwbm_rameter_21_56e16bae_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      hmm_2dwbm_rameter_21_56e16bae, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14055, 
                       ADR( hmm_2dwbm_model_2da_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_model_2da, EMPTYLIST ) );
        INITIALIZEVAR( t14057, 
                       ADR( hmm_2dwbm_set_2dmodel_2da_21_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_set_2dmodel_2da_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14060, 
                       ADR( hmm_2dwbm_model_2db_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_model_2db, EMPTYLIST ) );
        INITIALIZEVAR( t14062, 
                       ADR( hmm_2dwbm_set_2dmodel_2db_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_set_2dmodel_2db_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14065, 
                       ADR( hmm_2dwbm_model_2dname_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2dname, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14067, 
                       ADR( hmm_2dwbm_model_2dn_2droles_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2dn_2droles, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14069, 
                       ADR( hmm_2dwbm_model_2dpos_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2dpos, EMPTYLIST ) );
        INITIALIZEVAR( t14071, 
                       ADR( hmm_2dwbm__2dname_21_1cfad0f1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm__2dname_21_1cfad0f1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14074, 
                       ADR( hmm_2dwbm_2droles_21_4b2bece3_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2droles_21_4b2bece3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14077, 
                       ADR( hmm_2dwbm_l_2dpos_21_c03d4a50_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_l_2dpos_21_c03d4a50, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14080, 
                       ADR( hmm_2dwbm_uniform_2dmodel_21_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_uniform_2dmodel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14086, 
                       ADR( hmm_2dwbm_2dmodel_21_72494ae0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dmodel_21_72494ae0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14092, 
                       ADR( hmm_2dwbm_noise_2dmodel_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_noise_2dmodel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14098, 
                       ADR( hmm_2dwbm_smooth_2dmodel_21_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_smooth_2dmodel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14104, 
                       ADR( hmm_2dwbm_print_2dmodel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_print_2dmodel, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14107, 
                       ADR( hmm_2dwbm_free_2dmodel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2dmodel, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14110, 
                       ADR( hmm_2dwbm_2dmodel_21_98c44cdc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dmodel_21_98c44cdc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14112, 
                       ADR( hmm_2dwbm_zero_2dmodel_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_zero_2dmodel_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14115, 
                       ADR( hmm_2dwbm_zero_2dmodel_3f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_zero_2dmodel_3f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14122, 
                       ADR( hmm_2dwbm_2dmodel_21_aeca4ec2_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_2dmodel_21_aeca4ec2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14125, 
                       ADR( hmm_2dwbm_2dmodel_21_ef54c91a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_2dmodel_21_ef54c91a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14128, 
                       ADR( hmm_2dwbm_likelihood_1a9c0e3b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_likelihood_1a9c0e3b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14130, 
                       ADR( hmm_2dwbm_2dsequence_1d9f2c00_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dsequence_1d9f2c00, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14132, 
                       ADR( hmm_2dwbm_globals_21_b83a1f59_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_globals_21_b83a1f59, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14135, 
                       ADR( hmm_2dwbm_allocate_2dbox_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_allocate_2dbox, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14137, 
                       ADR( hmm_2dwbm_box_2dcoordinates_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_box_2dcoordinates, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14139, 
                       ADR( hmm_2dwbm_box_2dfilter_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_box_2dfilter, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14141, 
                       ADR( hmm_2dwbm_box_2dstrength_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_box_2dstrength, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14143, 
                       ADR( hmm_2dwbm_box_2ddelta_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_box_2ddelta, EMPTYLIST ) );
        INITIALIZEVAR( t14145, 
                       ADR( hmm_2dwbm_box_2dcolor_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_box_2dcolor, EMPTYLIST ) );
        INITIALIZEVAR( t14147, 
                       ADR( hmm_2dwbm_box_2dmodel_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_box_2dmodel, EMPTYLIST ) );
        INITIALIZEVAR( t14149, 
                       ADR( hmm_2dwbm_dinates_21_ae33218e_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_dinates_21_ae33218e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14152, 
                       ADR( hmm_2dwbm_dfilter_21_af8bfe88_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_dfilter_21_af8bfe88, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14155, 
                       ADR( hmm_2dwbm_trength_21_cde72c34_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_trength_21_cde72c34, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14158, 
                       ADR( hmm_2dwbm_2ddelta_21_f2cdaf25_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2ddelta_21_f2cdaf25, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14161, 
                       ADR( hmm_2dwbm_2dcolor_21_9e4a790_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dcolor_21_9e4a790, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14164, 
                       ADR( hmm_2dwbm_2dmodel_21_a4b0fc2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dmodel_21_a4b0fc2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14167, 
                       ADR( hmm_2dwbm_free_2dbox_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2dbox, EMPTYLIST ) );
        INITIALIZEVAR( t14170, 
                       ADR( hmm_2dwbm_update_21_v ), 
                       MAKEPROCEDURE( 10, 
                                      0, 
                                      hmm_2dwbm_update_21, EMPTYLIST ) );
        INITIALIZEVAR( t14172, 
                       ADR( hmm_2dwbm_allocate_2dhmm_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_allocate_2dhmm, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14174, 
                       ADR( hmm_2dwbm_free_2dhmm_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2dhmm, EMPTYLIST ) );
        INITIALIZEVAR( t14177, 
                       ADR( hmm_2dwbm_2dsentence_3cb7f924_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dsentence_3cb7f924, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14179, 
                       ADR( hmm_2dwbm_free_2dsentence_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_free_2dsentence, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14182, 
                       ADR( hmm_2dwbm_2dinternal_a6ef8bc1_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_2dinternal_a6ef8bc1, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14184, 
                       ADR( hmm_2dwbm_babilities_57309eab_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_babilities_57309eab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14188, 
                       ADR( hmm_2dwbm_babilities_ecded547_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      hmm_2dwbm_babilities_ecded547, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14241, 
                       ADR( hmm_2dwbm_2dinternal_3a6d4b26_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_2dinternal_3a6d4b26, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14243, 
                       ADR( hmm_2dwbm_x_2dscores_90c531c7_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      hmm_2dwbm_x_2dscores_90c531c7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14298, 
                       ADR( hmm_2dwbm_dscores_21_35c11955_v ), 
                       MAKEPROCEDURE( 12, 
                                      0, 
                                      hmm_2dwbm_dscores_21_35c11955, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14300, 
                       ADR( hmm_2dwbm_dscores_21_ed104c4_v ), 
                       MAKEPROCEDURE( 7, 
                                      0, 
                                      hmm_2dwbm_dscores_21_ed104c4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14312, 
                       ADR( hmm_2dwbm_x_2dscores_cd6e9246_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_x_2dscores_cd6e9246, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14316, 
                       ADR( hmm_2dwbm_2dinternal_66bfea8d_v ), 
                       MAKEPROCEDURE( 4, 
                                      0, 
                                      hmm_2dwbm_2dinternal_66bfea8d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14318, 
                       ADR( hmm_2dwbm_update_2dx_21_v ), 
                       MAKEPROCEDURE( 13, 
                                      0, 
                                      hmm_2dwbm_update_2dx_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14320, 
                       ADR( hmm_2dwbm_erivatives_9f45b654_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      hmm_2dwbm_erivatives_9f45b654, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14323, 
                       ADR( hmm_2dwbm_ne_2dvideo_4a3315c3_v ), 
                       MAKEPROCEDURE( 14, 
                                      0, 
                                      hmm_2dwbm_ne_2dvideo_4a3315c3, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14325, 
                       ADR( hmm_2dwbm_rse_2dmode_c1ae4351_v ), 
                       MAKEPROCEDURE( 13, 
                                      0, 
                                      hmm_2dwbm_rse_2dmode_c1ae4351, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14327, 
                       ADR( hmm_2dwbm_ne_2dvideo_901869a7_v ), 
                       MAKEPROCEDURE( 13, 
                                      0, 
                                      hmm_2dwbm_ne_2dvideo_901869a7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14329, 
                       ADR( hmm_2dwbm_imum_2done_1971865d_v ), 
                       MAKEPROCEDURE( 13, 
                                      0, 
                                      hmm_2dwbm_imum_2done_1971865d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14331, 
                       ADR( hmm_2dwbm_model_2dhmm_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_model_2dhmm, EMPTYLIST ) );
        INITIALIZEVAR( t14333, 
                       ADR( hmm_2dwbm_model_2dffm_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_model_2dffm, EMPTYLIST ) );
        INITIALIZEVAR( t14335, 
                       ADR( hmm_2dwbm_2dwidth_21_a7c21e0_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_2dwidth_21_a7c21e0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14338, 
                       ADR( hmm_2dwbm_set_2ddataset_21_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_set_2ddataset_21, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14341, 
                       ADR( hmm_2dwbm_get_2ddataset_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_get_2ddataset, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14343, 
                       ADR( hmm_2dwbm_uration_21_95664153_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_uration_21_95664153, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14346, 
                       ADR( hmm_2dwbm_uration_21_19d6d28b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_uration_21_19d6d28b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14349, 
                       ADR( hmm_2dwbm_2dduration_c507a4a_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_2dduration_c507a4a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14351, 
                       ADR( hmm_2dwbm_2dprior_21_25897cd4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_2dprior_21_25897cd4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14354, 
                       ADR( hmm_2dwbm_get_2ddisplacement_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_get_2ddisplacement, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14356, 
                       ADR( hmm_2dwbm_acement_21_ad56d1d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_acement_21_ad56d1d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14359, 
                       ADR( hmm_2dwbm_straint_21_8a95976b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_straint_21_8a95976b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14362, 
                       ADR( hmm_2dwbm_straint_21_5ec75af4_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      hmm_2dwbm_straint_21_5ec75af4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14365, 
                       ADR( hmm_2dwbm_get_2dpad_2dall_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_get_2dpad_2dall, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14367, 
                       ADR( hmm_2dwbm_get_2dduration_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      hmm_2dwbm_get_2dduration, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14369, 
                       ADR( hmm_2dwbm_single_2dhmm_2drun_v ), 
                       MAKEPROCEDURE( 5, 
                                      0, 
                                      hmm_2dwbm_single_2dhmm_2drun, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t14371, 
                       ADR( hmm_2dwbm_tives_2dml_ba581b2_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      hmm_2dwbm_tives_2dml_ba581b2, 
                                      EMPTYLIST ) );
        return;
}
