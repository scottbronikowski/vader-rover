
/* SCHEME->C */

#include <objects.h>

void toollib_2dnlopt__init();
DEFSTATICTSCP( c12513 );
DEFCSTRING( t12779, "Index is not in bounds: ~s" );
DEFSTATICTSCP( c12472 );
DEFCSTRING( t12780, "Argument is not an INTEGER: ~s" );
DEFSTATICTSCP( c12468 );
DEFCSTRING( t12781, "Argument is not a VECTOR: ~s" );
DEFSTATICTSCP( c12465 );
DEFSTATICTSCP( c12464 );

static void  init_constants()
{
        c12513 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-LENGTH" ) );
        CONSTANTEXP( ADR( c12513 ) );
        c12472 = CSTRING_TSCP( t12779 );
        CONSTANTEXP( ADR( c12472 ) );
        c12468 = CSTRING_TSCP( t12780 );
        CONSTANTEXP( ADR( c12468 ) );
        c12465 = CSTRING_TSCP( t12781 );
        CONSTANTEXP( ADR( c12465 ) );
        c12464 = STRINGTOSYMBOL( CSTRING_TSCP( "VECTOR-REF" ) );
        CONSTANTEXP( ADR( c12464 ) );
}

DEFTSCP( b_2dnlopt_pt_2d1_2d0_de994582_v );
DEFCSTRING( t12782, "gensym-toollib_2dnlopt-1-0" );

TSCP  b_2dnlopt_pt_2d1_2d0_de994582(  )
{
        PUSHSTACKTRACE( t12782 );
        POPSTACKTRACE( 0 );}
  #include<stddef.h>
int gensym_toollib_2dnlopt_2_0(){ return 1;gensym_toollib_2dnlopt_2_0( );
}

DEFTSCP( b_2dnlopt_pt_2d3_2d0_a45916e2_v );
DEFCSTRING( t12784, "gensym-toollib_2dnlopt-3-0" );

TSCP  b_2dnlopt_pt_2d3_2d0_a45916e2(  )
{
        PUSHSTACKTRACE( t12784 );
        POPSTACKTRACE( 0 );}
  #include<stdlib.h>
int gensym_toollib_2dnlopt_4_0(){ return 1;gensym_toollib_2dnlopt_4_0( );
}

DEFTSCP( b_2dnlopt_pt_2d5_2d0_2b19e342_v );
DEFCSTRING( t12786, "gensym-toollib_2dnlopt-5-0" );

TSCP  b_2dnlopt_pt_2d5_2d0_2b19e342(  )
{
        PUSHSTACKTRACE( t12786 );
        POPSTACKTRACE( 0 );}
  #include<string.h>
int gensym_toollib_2dnlopt_6_0(){ return 1;gensym_toollib_2dnlopt_6_0( );
}

DEFTSCP( b_2dnlopt_pt_2d7_2d0_51d9b022_v );
DEFCSTRING( t12788, "gensym-toollib_2dnlopt-7-0" );

TSCP  b_2dnlopt_pt_2d7_2d0_51d9b022(  )
{
        PUSHSTACKTRACE( t12788 );
        POPSTACKTRACE( 0 );}
  #include<toollib-c.h>
int gensym_toollib_2dnlopt_8_0(){ return 1;gensym_toollib_2dnlopt_8_0( );
}

DEFTSCP( b_2dnlopt_pt_2d9_2d0_eee90e43_v );
DEFCSTRING( t12790, "gensym-toollib_2dnlopt-9-0" );

TSCP  b_2dnlopt_pt_2d9_2d0_eee90e43(  )
{
        PUSHSTACKTRACE( t12790 );
        POPSTACKTRACE( 0 );}
  #include<idealib-c.h>
int gensym_toollib_2dnlopt_10_0(){ return 1;gensym_toollib_2dnlopt_10_0( );
}

DEFTSCP( b_2dnlopt_t_2d11_2d0_7c196745_v );
DEFCSTRING( t12792, "gensym-toollib_2dnlopt-11-0" );

TSCP  b_2dnlopt_t_2d11_2d0_7c196745(  )
{
        PUSHSTACKTRACE( t12792 );
        POPSTACKTRACE( 0 );}
  #include<nlopt.h>
int gensym_toollib_2dnlopt_12_0(){ return 1;gensym_toollib_2dnlopt_12_0( );
}

DEFTSCP( b_2dnlopt_n_2ddirect_64c8ae96_v );
DEFCSTRING( t12794, "NLOPT:GN-DIRECT" );
DEFTSCP( b_2dnlopt_direct_2dl_f3259bcf_v );
DEFCSTRING( t12795, "NLOPT:GN-DIRECT-L" );
DEFTSCP( b_2dnlopt_2dl_2drand_1919d4c2_v );
DEFCSTRING( t12796, "NLOPT:GN-DIRECT-L-RAND" );
DEFTSCP( b_2dnlopt_t_2dnoscal_5d4063d3_v );
DEFCSTRING( t12797, "NLOPT:GN-DIRECT-NOSCAL" );
DEFTSCP( b_2dnlopt_l_2dnoscal_2c8828cb_v );
DEFCSTRING( t12798, "NLOPT:GN-DIRECT-L-NOSCAL" );
DEFTSCP( b_2dnlopt_d_2dnoscal_f566e81f_v );
DEFCSTRING( t12799, "NLOPT:GN-DIRECT-L-RAND-NOSCAL" );
DEFTSCP( b_2dnlopt_g_2ddirect_1895b182_v );
DEFCSTRING( t12800, "NLOPT:GN-ORIG-DIRECT" );
DEFTSCP( b_2dnlopt_direct_2dl_6d82a144_v );
DEFCSTRING( t12801, "NLOPT:GN-ORIG-DIRECT-L" );
DEFTSCP( b_2dnlopt_gd_2dstogo_69e506a9_v );
DEFCSTRING( t12802, "NLOPT:GD-STOGO" );
DEFTSCP( b_2dnlopt_ogo_2drand_6b6f419b_v );
DEFCSTRING( t12803, "NLOPT:GD-STOGO-RAND" );
DEFTSCP( b_2dnlopt__2dnocedal_f7dc9914_v );
DEFCSTRING( t12804, "NLOPT:LD-LBFGS-NOCEDAL" );
DEFTSCP( b_2dnlopt_ld_2dlbfgs_1d17928e_v );
DEFCSTRING( t12805, "NLOPT:LD-LBFGS" );
DEFTSCP( b_2dnlopt_n_2dpraxis_fa477ab7_v );
DEFCSTRING( t12806, "NLOPT:LN-PRAXIS" );
DEFTSCP( b_2dnlopt_ald_2dvar1_31c6c055_v );
DEFCSTRING( t12807, "NLOPT:LD-VAR1" );
DEFTSCP( b_2dnlopt_ald_2dvar2_a8cf91ef_v );
DEFCSTRING( t12808, "NLOPT:LD-VAR2" );
DEFTSCP( b_2dnlopt__2dtnewton_c26b4895_v );
DEFCSTRING( t12809, "NLOPT:LD-TNEWTON" );
DEFTSCP( b_2dnlopt__2drestart_f227b654_v );
DEFCSTRING( t12810, "NLOPT:LD-TNEWTON-RESTART" );
DEFTSCP( b_2dnlopt__2dprecond_a85bf869_v );
DEFCSTRING( t12811, "NLOPT:LD-TNEWTON-PRECOND" );
DEFTSCP( b_2dnlopt__2drestart_1a385a08_v );
DEFCSTRING( t12812, "NLOPT:LD-TNEWTON-PRECOND-RESTART" );
DEFTSCP( b_2dnlopt_dcrs2_2dlm_c1d26458_v );
DEFCSTRING( t12813, "NLOPT:GN-CRS2-LM" );
DEFTSCP( b_2dnlopt_agn_2dmlsl_a1521d85_v );
DEFCSTRING( t12814, "NLOPT:GN-MLSL" );
DEFTSCP( b_2dnlopt_agd_2dmlsl_3092014d_v );
DEFCSTRING( t12815, "NLOPT:GD-MLSL" );
DEFTSCP( b_2dnlopt_mlsl_2dlds_749eabd7_v );
DEFCSTRING( t12816, "NLOPT:GN-MLSL-LDS" );
DEFTSCP( b_2dnlopt_mlsl_2dlds_a6a9714c_v );
DEFCSTRING( t12817, "NLOPT:GD-MLSL-LDS" );
DEFTSCP( b_2dnlopt_3ald_2dmma_9036f8dc_v );
DEFCSTRING( t12818, "NLOPT:LD-MMA" );
DEFTSCP( b_2dnlopt_n_2dcobyla_7acc1965_v );
DEFCSTRING( t12819, "NLOPT:LN-COBYLA" );
DEFTSCP( b_2dnlopt_n_2dnewuoa_c9121f10_v );
DEFCSTRING( t12820, "NLOPT:LN-NEWUOA" );
DEFTSCP( b_2dnlopt_uoa__bound_cf52e039_v );
DEFCSTRING( t12821, "NLOPT:LN-NEWUOA_BOUND" );
DEFTSCP( b_2dnlopt_neldermead_ae51494_v );
DEFCSTRING( t12822, "NLOPT:LN-NELDERMEAD" );
DEFTSCP( b_2dnlopt_ln_2dsbplx_604c7c2_v );
DEFCSTRING( t12823, "NLOPT:LN-SBPLX" );
DEFTSCP( b_2dnlopt_n_2dauglag_6caa7d9c_v );
DEFCSTRING( t12824, "NLOPT:LN-AUGLAG" );
DEFTSCP( b_2dnlopt_d_2dauglag_7b88ed55_v );
DEFCSTRING( t12825, "NLOPT:LD-AUGLAG" );
DEFTSCP( b_2dnlopt_uglag_2deq_339bc9_v );
DEFCSTRING( t12826, "NLOPT:LN-AUGLAG-EQ" );
DEFTSCP( b_2dnlopt_uglag_2deq_673ce6df_v );
DEFCSTRING( t12827, "NLOPT:LD-AUGLAG-EQ" );
DEFTSCP( b_2dnlopt_n_2dbobyqa_4efca6dc_v );
DEFCSTRING( t12828, "NLOPT:LN-BOBYQA" );
DEFTSCP( b_2dnlopt_gn_2disres_79853543_v );
DEFCSTRING( t12829, "NLOPT:GN-ISRES" );
DEFTSCP( b_2dnlopt_t_3aauglag_1967edb7_v );
DEFCSTRING( t12830, "NLOPT:AUGLAG" );
DEFTSCP( b_2dnlopt_uglag_2deq_c05decd8_v );
DEFCSTRING( t12831, "NLOPT:AUGLAG-EQ" );
DEFTSCP( b_2dnlopt_3ag_2dmlsl_b23b5512_v );
DEFCSTRING( t12832, "NLOPT:G-MLSL" );
DEFTSCP( b_2dnlopt_mlsl_2dlds_44303b04_v );
DEFCSTRING( t12833, "NLOPT:G-MLSL-LDS" );
DEFTSCP( b_2dnlopt_ld_2dslsqp_80046018_v );
DEFCSTRING( t12834, "NLOPT:LD-SLSQP" );
DEFTSCP( b_2dnlopt_thm_2dname_f51c8afc_v );
DEFCSTRING( t12835, "NLOPT:ALGORITHM-NAME" );

TSCP  b_2dnlopt_thm_2dname_f51c8afc( g12412 )
        TSCP  g12412;
{
        PUSHSTACKTRACE( t12835 );
        POPSTACKTRACE( CSTRING_TSCP( nlopt_algorithm_name( sc_tscp_int( g12412 ) ) ) );
}

DEFTSCP( b_2dnlopt__3afailure_a68ef9cf_v );
DEFCSTRING( t12837, "NLOPT:FAILURE" );
DEFTSCP( b_2dnlopt_lid_2dargs_54a4d80b_v );
DEFCSTRING( t12838, "NLOPT:INVALID-ARGS" );
DEFTSCP( b_2dnlopt_f_2dmemory_be88ff22_v );
DEFCSTRING( t12839, "NLOPT:OUT-OF-MEMORY" );
DEFTSCP( b_2dnlopt__2dlimited_fcde2c0_v );
DEFCSTRING( t12840, "NLOPT:ROUNDOFF-LIMITED" );
DEFTSCP( b_2dnlopt_ced_2dstop_47118bcb_v );
DEFCSTRING( t12841, "NLOPT:FORCED-STOP" );
DEFTSCP( b_2dnlopt__3asuccess_e81525bc_v );
DEFCSTRING( t12842, "NLOPT:SUCCESS" );
DEFTSCP( b_2dnlopt__2dreached_dbf1b1cc_v );
DEFCSTRING( t12843, "NLOPT:STOPVAL-REACHED" );
DEFTSCP( b_2dnlopt__2dreached_d8d236f0_v );
DEFCSTRING( t12844, "NLOPT:FTOL-REACHED" );
DEFTSCP( b_2dnlopt__2dreached_75fb5f1c_v );
DEFCSTRING( t12845, "NLOPT:XTOL-REACHED" );
DEFTSCP( b_2dnlopt__2dreached_2c88f1fb_v );
DEFCSTRING( t12846, "NLOPT:MAXEVAL-REACHED" );
DEFTSCP( b_2dnlopt__2dreached_3a052c0a_v );
DEFCSTRING( t12847, "NLOPT:MAXTIME-REACHED" );
DEFTSCP( toollib_2dnlopt_nlopt_3asrand_v );
DEFCSTRING( t12848, "NLOPT:SRAND" );

TSCP  toollib_2dnlopt_nlopt_3asrand( g12416 )
        TSCP  g12416;
{
        PUSHSTACKTRACE( t12848 );
        nlopt_srand( sc_tscp_int( g12416 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt_and_2dtime_30c19ce4_v );
DEFCSTRING( t12851, "NLOPT:SRAND-TIME" );

TSCP  b_2dnlopt_and_2dtime_30c19ce4(  )
{
        PUSHSTACKTRACE( t12851 );
        nlopt_srand_time(  );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt_t_3acreate_9de54c4c_v );
DEFCSTRING( t12854, "NLOPT:CREATE" );

TSCP  b_2dnlopt_t_3acreate_9de54c4c( g12425, g12426 )
        TSCP  g12425, g12426;
{
        PUSHSTACKTRACE( t12854 );
        POPSTACKTRACE( POINTER_TSCP( nlopt_create( sc_tscp_int( g12425 ), 
                                                   TSCP_S2CUINT( g12426 ) ) ) );
}

DEFTSCP( b_2dnlopt__3adestroy_fb5f7c75_v );
DEFCSTRING( t12856, "NLOPT:DESTROY" );

TSCP  b_2dnlopt__3adestroy_fb5f7c75( g12431 )
        TSCP  g12431;
{
        PUSHSTACKTRACE( t12856 );
        nlopt_destroy( TSCP_POINTER( g12431 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( toollib_2dnlopt_nlopt_3acopy_v );
DEFCSTRING( t12859, "NLOPT:COPY" );

TSCP  toollib_2dnlopt_nlopt_3acopy( g12436 )
        TSCP  g12436;
{
        PUSHSTACKTRACE( t12859 );
        POPSTACKTRACE( POINTER_TSCP( nlopt_copy( TSCP_POINTER( g12436 ) ) ) );
}

DEFTSCP( toollib_2dnlopt__2awrapped_2a_v );
DEFCSTRING( t12861, "*WRAPPED*" );
DEFTSCP( b_2dnlopt_p_2dsingle_3fff939_v );
DEFCSTRING( t12862, "NLOPT:WRAP-SINGLE" );
EXTERNTSCPP( dbindings_d_3evector_8778ce56, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_d_3evector_8778ce56_v );
EXTERNTSCP( scrt4_c_2dsizeof_2ddouble_v );
EXTERNTSCPP( scrt2_zero_3f, XAL1( TSCP ) );
EXTERNTSCP( scrt2_zero_3f_v );
EXTERNTSCPP( dbindings_ct_2darray_631a01b4, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_ct_2darray_631a01b4_v );
EXTERNTSCPP( scdebug_error, XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scdebug_error_v );

TSCP  toollib_2dnlopt_r12442( n12444, x12445, g12446, c12864 )
        TSCP  n12444, x12445, g12446, c12864;
{
        TSCP  X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "R [inside NLOPT:WRAP-SINGLE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12864, 0 );
        X5 = dbindings_d_3evector_8778ce56( x12445, 
                                            scrt4_c_2dsizeof_2ddouble_v, 
                                            n12444, TRUEVALUE );
        if  ( NEQ( TSCPTAG( g12446 ), FIXNUMTAG ) )  goto L12866;
        X6 = BOOLEAN( NEQ( _S2CUINT( g12446 ), 
                           _S2CUINT( _TSCP( 0 ) ) ) );
        goto L12869;
L12866:
        if  ( FALSE( scrt2_zero_3f( g12446 ) ) )  goto L12868;
        X6 = FALSEVALUE;
        goto L12869;
L12868:
        X6 = TRUEVALUE;
L12869:
        X4 = DISPLAY( 0 );
        X4 = UNKNOWNCALL( X4, 2 );
        X3 = VIA( PROCEDURE_CODE( X4 ) )( X5, 
                                          X6, 
                                          PROCEDURE_CLOSURE( X4 ) );
        if  ( NEQ( TSCPTAG( g12446 ), FIXNUMTAG ) )  goto L12872;
        if  ( NEQ( _S2CUINT( g12446 ), 
                   _S2CUINT( _TSCP( 0 ) ) ) )  goto L12876;
        goto L12879;
L12872:
        if  ( TRUE( scrt2_zero_3f( g12446 ) ) )  goto L12879;
L12876:
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L12881;
        scdebug_error( c12464, 
                       c12465, CONS( X3, EMPTYLIST ) );
L12881:
        if  ( EQ( TSCPTAG( _TSCP( 4 ) ), FIXNUMTAG ) )  goto L12883;
        scdebug_error( c12464, 
                       c12468, CONS( _TSCP( 4 ), EMPTYLIST ) );
L12883:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 4 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L12885;
        scdebug_error( c12464, 
                       c12472, CONS( _TSCP( 4 ), EMPTYLIST ) );
L12885:
        X4 = VECTOR_ELEMENT( X3, _TSCP( 4 ) );
        dbindings_ct_2darray_631a01b4( g12446, 
                                       X4, 
                                       scrt4_c_2dsizeof_2ddouble_v, 
                                       TRUEVALUE );
L12879:
        if  ( AND( EQ( TSCPTAG( X3 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X3 ), VECTORTAG ) ) )  goto L12888;
        scdebug_error( c12464, 
                       c12465, CONS( X3, EMPTYLIST ) );
L12888:
        if  ( EQ( TSCPTAG( _TSCP( 0 ) ), FIXNUMTAG ) )  goto L12890;
        scdebug_error( c12464, 
                       c12468, CONS( _TSCP( 0 ), EMPTYLIST ) );
L12890:
        if  ( LT( _S2CUINT( FIXED_C( _TSCP( 0 ) ) ), 
                  _S2CUINT( VECTOR_LENGTH( X3 ) ) ) )  goto L12892;
        scdebug_error( c12464, 
                       c12472, CONS( _TSCP( 0 ), EMPTYLIST ) );
L12892:
        X2 = VECTOR_ELEMENT( X3, _TSCP( 0 ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

EXTERNTSCPP( sc_cons, XAL2( TSCP, TSCP ) );
EXTERNTSCP( sc_cons_v );

TSCP  b_2dnlopt_p_2dsingle_3fff939( f12440 )
        TSCP  f12440;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12862 );
        DISPLAY( 0 ) = f12440;
        X1 = MAKEPROCEDURE( 3, 
                            0, 
                            toollib_2dnlopt_r12442, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        toollib_2dnlopt__2awrapped_2a_v = sc_cons( X1, 
                                                   toollib_2dnlopt__2awrapped_2a_v );
        SDVAL = X1;
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( toollib_2dnlopt_with_2dnlopt_v );
DEFCSTRING( t12895, "WITH-NLOPT" );

TSCP  toollib_2dnlopt_with_2dnlopt( k12494, a12495, f12496 )
        TSCP  k12494, a12495, f12496;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( t12895 );
        X1 = b_2dnlopt_t_3acreate_9de54c4c( k12494, a12495 );
        X3 = f12496;
        X3 = UNKNOWNCALL( X3, 1 );
        X2 = VIA( PROCEDURE_CODE( X3 ) )( X1, 
                                          PROCEDURE_CLOSURE( X3 ) );
        b_2dnlopt__3adestroy_fb5f7c75( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( b_2dnlopt_th_2dnlopt_c4e5c58a_v );
DEFCSTRING( t12899, "OPTIMIZE-WITH-NLOPT" );
EXTERNTSCPP( b_2dnlopt_3aoptimize_d76feb14, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( b_2dnlopt_3aoptimize_d76feb14_v );

TSCP  b_2dnlopt_th_2dnlopt_c4e5c58a( k12502, i12503, f12504 )
        TSCP  k12502, i12503, f12504;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( t12899 );
        if  ( AND( EQ( TSCPTAG( i12503 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( i12503 ), VECTORTAG ) )
            )  goto L12902;
        scdebug_error( c12513, 
                       c12465, CONS( i12503, EMPTYLIST ) );
L12902:
        X2 = C_FIXED( VECTOR_LENGTH( i12503 ) );
        X1 = b_2dnlopt_t_3acreate_9de54c4c( k12502, X2 );
        X2 = f12504;
        X2 = UNKNOWNCALL( X2, 1 );
        VIA( PROCEDURE_CODE( X2 ) )( X1, PROCEDURE_CLOSURE( X2 ) );
        X2 = b_2dnlopt_3aoptimize_d76feb14( X1, i12503 );
        b_2dnlopt__3adestroy_fb5f7c75( X1 );
        POPSTACKTRACE( X2 );
}

DEFTSCP( b_2dnlopt_3aoptimize_d76feb14_v );
DEFCSTRING( t12906, "NLOPT:OPTIMIZE" );
EXTERNTSCPP( dbindings_ec_2darray_a0416023, 
             XAL4( TSCP, TSCP, TSCP, TSCP ) );
EXTERNTSCP( dbindings_ec_2darray_a0416023_v );
EXTERNTSCPP( dbindings_th_2dalloc_20298354, 
             XAL2( TSCP, TSCP ) );
EXTERNTSCP( dbindings_th_2dalloc_20298354_v );
EXTERNTSCPP( scrt4_vector, XAL1( TSCP ) );
EXTERNTSCP( scrt4_vector_v );

TSCP  toollib_2dnlopt_l12519( o12520, c12910 )
        TSCP  o12520, c12910;
{
        TSCP  X8, X7, X6, X5, X4, X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12519 [inside NLOPT:OPTIMIZE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12910, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12910, 1 );
        X3 = DISPLAY( 2 );
        DISPLAY( 2 ) = CLOSURE_VAR( c12910, 2 );
        X5 = sc_int_tscp( nlopt_optimize( TSCP_POINTER( DISPLAY( 0 ) ), 
                                          TSCP_POINTER( DISPLAY( 2 ) ), 
                                          TSCP_POINTER( o12520 ) ) );
        X6 = CONS( X5, EMPTYLIST );
        X6 = CONS( dbindings_d_3evector_8778ce56( o12520, 
                                                  scrt4_c_2dsizeof_2ddouble_v, 
                                                  _TSCP( 4 ), 
                                                  TRUEVALUE ), 
                   X6 );
        X8 = DISPLAY( 1 );
        if  ( AND( EQ( TSCPTAG( X8 ), EXTENDEDTAG ), 
                   EQ( TSCP_EXTENDEDTAG( X8 ), VECTORTAG ) ) )  goto L12914;
        scdebug_error( c12513, 
                       c12465, CONS( X8, EMPTYLIST ) );
L12914:
        X7 = C_FIXED( VECTOR_LENGTH( X8 ) );
        X4 = scrt4_vector( CONS( dbindings_d_3evector_8778ce56( DISPLAY( 2 ), 
                                                                scrt4_c_2dsizeof_2ddouble_v, 
                                                                X7, 
                                                                TRUEVALUE ), 
                                 X6 ) );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        DISPLAY( 2 ) = X3;
        POPSTACKTRACE( X4 );
}

TSCP  toollib_2dnlopt_l12517( i12518, c12908 )
        TSCP  i12518, c12908;
{
        TSCP  X4, X3, X2, X1;
        TSCP  SD2 = DISPLAY( 2 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12517 [inside NLOPT:OPTIMIZE]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12908, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12908, 1 );
        DISPLAY( 2 ) = i12518;
        X4 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12519, 
                            MAKECLOSURE( EMPTYLIST, 
                                         3, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ), 
                                         DISPLAY( 2 ) ) );
        X3 = dbindings_th_2dalloc_20298354( scrt4_c_2dsizeof_2ddouble_v, 
                                            X4 );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        SDVAL = X3;
        DISPLAY( 2 ) = SD2;
        POPSTACKTRACE( SDVAL );
}

EXTERNTSCPP( scrt4_c_2ddouble_2dset_21, 
             XAL3( TSCP, TSCP, TSCP ) );
EXTERNTSCP( scrt4_c_2ddouble_2dset_21_v );

TSCP  b_2dnlopt_3aoptimize_d76feb14( n12515, i12516 )
        TSCP  n12515, i12516;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12906 );
        DISPLAY( 0 ) = n12515;
        DISPLAY( 1 ) = i12516;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12517, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = dbindings_ec_2darray_a0416023( X1, 
                                               scrt4_c_2ddouble_2dset_21_v, 
                                               scrt4_c_2dsizeof_2ddouble_v, 
                                               DISPLAY( 1 ) );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( b_2dnlopt_dobjective_c4448d44_v );
DEFCSTRING( t12916, "NLOPT:SET-MIN-OBJECTIVE" );

TSCP  b_2dnlopt_dobjective_c4448d44( n12536, f12537 )
        TSCP  n12536, f12537;
{
        TSCP  X1;

        PUSHSTACKTRACE( t12916 );
        X1 = b_2dnlopt_p_2dsingle_3fff939( f12537 );
        nlopt_set_min_objective( TSCP_POINTER( n12536 ), 
                                 nlopt_func_call_gate, X1 );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt_dobjective_e3ffea75_v );
DEFCSTRING( t12918, "NLOPT:SET-MAX-OBJECTIVE" );

TSCP  b_2dnlopt_dobjective_e3ffea75( n12539, f12540 )
        TSCP  n12539, f12540;
{
        TSCP  X1;

        PUSHSTACKTRACE( t12918 );
        X1 = b_2dnlopt_p_2dsingle_3fff939( f12540 );
        nlopt_set_max_objective( TSCP_POINTER( n12539 ), 
                                 nlopt_func_call_gate, X1 );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt_dalgorithm_94da293_v );
DEFCSTRING( t12920, "NLOPT:GET-ALGORITHM" );

TSCP  b_2dnlopt_dalgorithm_94da293( g12542 )
        TSCP  g12542;
{
        PUSHSTACKTRACE( t12920 );
        POPSTACKTRACE( sc_int_tscp( nlopt_get_algorithm( TSCP_POINTER( g12542 ) ) ) );
}

DEFTSCP( b_2dnlopt_ddimension_56d3afb6_v );
DEFCSTRING( t12922, "NLOPT:GET-DIMENSION" );

TSCP  b_2dnlopt_ddimension_56d3afb6( g12546 )
        TSCP  g12546;
{
        PUSHSTACKTRACE( t12922 );
        POPSTACKTRACE( S2CUINT_TSCP( nlopt_get_dimension( TSCP_POINTER( g12546 ) ) ) );
}

DEFTSCP( b_2dnlopt_r_2dbounds_db90b2ab_v );
DEFCSTRING( t12924, "NLOPT:SET-LOWER-BOUNDS" );

TSCP  toollib_2dnlopt_l12552( b12553, c12926 )
        TSCP  b12553, c12926;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12552 [inside NLOPT:SET-LOWER-BOUN\
DS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12926, 0 );
        X2 = sc_int_tscp( nlopt_set_lower_bounds( TSCP_POINTER( DISPLAY( 0 ) ), 
                                                  TSCP_POINTER( b12553 ) ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  b_2dnlopt_r_2dbounds_db90b2ab( n12550, b12551 )
        TSCP  n12550, b12551;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12924 );
        DISPLAY( 0 ) = n12550;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12552, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = dbindings_ec_2darray_a0416023( X1, 
                                               scrt4_c_2ddouble_2dset_21_v, 
                                               scrt4_c_2dsizeof_2ddouble_v, 
                                               b12551 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( b_2dnlopt__2dbounds1_1001eae8_v );
DEFCSTRING( t12928, "NLOPT:SET-LOWER-BOUNDS1" );

TSCP  b_2dnlopt__2dbounds1_1001eae8( g12561, g12562 )
        TSCP  g12561, g12562;
{
        PUSHSTACKTRACE( t12928 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_lower_bounds1( TSCP_POINTER( g12561 ), 
                                                             TSCP_DOUBLE( g12562 ) ) ) );
}

DEFTSCP( b_2dnlopt_r_2dbounds_75bbf2d7_v );
DEFCSTRING( t12930, "NLOPT:GET-LOWER-BOUNDS" );
EXTERNTSCPP( scrt2__2a_2dtwo, XAL2( TSCP, TSCP ) );
EXTERNTSCP( scrt2__2a_2dtwo_v );

TSCP  toollib_2dnlopt_l12576( a12577, c12936 )
        TSCP  a12577, c12936;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12576 [inside NLOPT:GET-LOWER-BOUN\
DS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12936, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12936, 1 );
        sc_int_tscp( nlopt_get_lower_bounds( TSCP_POINTER( DISPLAY( 0 ) ), 
                                             TSCP_POINTER( a12577 ) ) );
        X3 = dbindings_d_3evector_8778ce56( a12577, 
                                            scrt4_c_2dsizeof_2ddouble_v, 
                                            DISPLAY( 1 ), 
                                            TRUEVALUE );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  b_2dnlopt_r_2dbounds_75bbf2d7( n12567 )
        TSCP  n12567;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12930 );
        DISPLAY( 0 ) = n12567;
        DISPLAY( 1 ) = b_2dnlopt_ddimension_56d3afb6( DISPLAY( 0 ) );
        X2 = b_2dnlopt_ddimension_56d3afb6( DISPLAY( 0 ) );
        X3 = scrt4_c_2dsizeof_2ddouble_v;
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L12934;
        X1 = _TSCP( ITIMES( FIXED_C( X3 ), _S2CINT( X2 ) ) );
        goto L12935;
L12934:
        X1 = scrt2__2a_2dtwo( X3, X2 );
L12935:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12576, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( b_2dnlopt_r_2dbounds_f49bebe7_v );
DEFCSTRING( t12938, "NLOPT:SET-UPPER-BOUNDS" );

TSCP  toollib_2dnlopt_l12587( b12588, c12940 )
        TSCP  b12588, c12940;
{
        TSCP  X2, X1;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12587 [inside NLOPT:SET-UPPER-BOUN\
DS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12940, 0 );
        X2 = sc_int_tscp( nlopt_set_upper_bounds( TSCP_POINTER( DISPLAY( 0 ) ), 
                                                  TSCP_POINTER( b12588 ) ) );
        DISPLAY( 0 ) = X1;
        POPSTACKTRACE( X2 );
}

TSCP  b_2dnlopt_r_2dbounds_f49bebe7( n12585, b12586 )
        TSCP  n12585, b12586;
{
        TSCP  X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12938 );
        DISPLAY( 0 ) = n12585;
        X1 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12587, 
                            MAKECLOSURE( EMPTYLIST, 
                                         1, DISPLAY( 0 ) ) );
        SDVAL = dbindings_ec_2darray_a0416023( X1, 
                                               scrt4_c_2ddouble_2dset_21_v, 
                                               scrt4_c_2dsizeof_2ddouble_v, 
                                               b12586 );
        DISPLAY( 0 ) = SD0;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( b_2dnlopt__2dbounds1_6f44ec0a_v );
DEFCSTRING( t12942, "NLOPT:SET-UPPER-BOUNDS1" );

TSCP  b_2dnlopt__2dbounds1_6f44ec0a( g12596, g12597 )
        TSCP  g12596, g12597;
{
        PUSHSTACKTRACE( t12942 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_upper_bounds1( TSCP_POINTER( g12596 ), 
                                                             TSCP_DOUBLE( g12597 ) ) ) );
}

DEFTSCP( b_2dnlopt_r_2dbounds_5ab0ab9b_v );
DEFCSTRING( t12944, "NLOPT:GET-UPPER-BOUNDS" );

TSCP  toollib_2dnlopt_l12611( a12612, c12950 )
        TSCP  a12612, c12950;
{
        TSCP  X3, X2, X1;

        PUSHSTACKTRACE( "toollib_2dnlopt_l12611 [inside NLOPT:GET-UPPER-BOUN\
DS]" );
        X1 = DISPLAY( 0 );
        DISPLAY( 0 ) = CLOSURE_VAR( c12950, 0 );
        X2 = DISPLAY( 1 );
        DISPLAY( 1 ) = CLOSURE_VAR( c12950, 1 );
        sc_int_tscp( nlopt_get_upper_bounds( TSCP_POINTER( DISPLAY( 0 ) ), 
                                             TSCP_POINTER( a12612 ) ) );
        X3 = dbindings_d_3evector_8778ce56( a12612, 
                                            scrt4_c_2dsizeof_2ddouble_v, 
                                            DISPLAY( 1 ), 
                                            TRUEVALUE );
        DISPLAY( 0 ) = X1;
        DISPLAY( 1 ) = X2;
        POPSTACKTRACE( X3 );
}

TSCP  b_2dnlopt_r_2dbounds_5ab0ab9b( n12602 )
        TSCP  n12602;
{
        TSCP  X3, X2, X1;
        TSCP  SD0 = DISPLAY( 0 );
        TSCP  SD1 = DISPLAY( 1 );
        TSCP  SDVAL;

        PUSHSTACKTRACE( t12944 );
        DISPLAY( 0 ) = n12602;
        DISPLAY( 1 ) = b_2dnlopt_ddimension_56d3afb6( DISPLAY( 0 ) );
        X2 = b_2dnlopt_ddimension_56d3afb6( DISPLAY( 0 ) );
        X3 = scrt4_c_2dsizeof_2ddouble_v;
        if  ( BITAND( BITOR( _S2CINT( X3 ), _S2CINT( X2 ) ), 
                      3 ) )  goto L12948;
        X1 = _TSCP( ITIMES( FIXED_C( X3 ), _S2CINT( X2 ) ) );
        goto L12949;
L12948:
        X1 = scrt2__2a_2dtwo( X3, X2 );
L12949:
        X2 = MAKEPROCEDURE( 1, 
                            0, 
                            toollib_2dnlopt_l12611, 
                            MAKECLOSURE( EMPTYLIST, 
                                         2, 
                                         DISPLAY( 0 ), 
                                         DISPLAY( 1 ) ) );
        SDVAL = dbindings_th_2dalloc_20298354( X1, X2 );
        DISPLAY( 0 ) = SD0;
        DISPLAY( 1 ) = SD1;
        POPSTACKTRACE( SDVAL );
}

DEFTSCP( b_2dnlopt_onstraints_2704891a_v );
DEFCSTRING( t12952, "NLOPT:REMOVE-INEQUALITY-CONSTRAINTS" );

TSCP  b_2dnlopt_onstraints_2704891a( g12620 )
        TSCP  g12620;
{
        PUSHSTACKTRACE( t12952 );
        POPSTACKTRACE( sc_int_tscp( nlopt_remove_inequality_constraints( TSCP_POINTER( g12620 ) ) ) );
}

DEFTSCP( b_2dnlopt_constraint_5a90a7de_v );
DEFCSTRING( t12954, "NLOPT:ADD-INEQUALITY-CONSTRAINT" );

TSCP  b_2dnlopt_constraint_5a90a7de( n12624, f12625, t12626 )
        TSCP  n12624, f12625, t12626;
{
        TSCP  X1;

        PUSHSTACKTRACE( t12954 );
        X1 = b_2dnlopt_p_2dsingle_3fff939( f12625 );
        nlopt_add_inequality_constraint( TSCP_POINTER( n12624 ), 
                                         nlopt_func_call_gate, 
                                         X1, 
                                         TSCP_DOUBLE( t12626 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt_onstraints_1880ca8f_v );
DEFCSTRING( t12956, "NLOPT:REMOVE-EQUALITY-CONSTRAINTS" );

TSCP  b_2dnlopt_onstraints_1880ca8f( g12628 )
        TSCP  g12628;
{
        PUSHSTACKTRACE( t12956 );
        POPSTACKTRACE( sc_int_tscp( nlopt_remove_equality_constraints( TSCP_POINTER( g12628 ) ) ) );
}

DEFTSCP( b_2dnlopt_constraint_44637c61_v );
DEFCSTRING( t12958, "NLOPT:ADD-EQUALITY-CONSTRAINT" );

TSCP  b_2dnlopt_constraint_44637c61( n12632, f12633, t12634 )
        TSCP  n12632, f12633, t12634;
{
        TSCP  X1;

        PUSHSTACKTRACE( t12958 );
        X1 = b_2dnlopt_p_2dsingle_3fff939( f12633 );
        nlopt_add_equality_constraint( TSCP_POINTER( n12632 ), 
                                       nlopt_func_call_gate, 
                                       X1, TSCP_DOUBLE( t12634 ) );
        POPSTACKTRACE( FALSEVALUE );
}

DEFTSCP( b_2dnlopt__2dstopval_b53873e0_v );
DEFCSTRING( t12960, "NLOPT:SET-STOPVAL" );

TSCP  b_2dnlopt__2dstopval_b53873e0( g12636, g12637 )
        TSCP  g12636, g12637;
{
        PUSHSTACKTRACE( t12960 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_stopval( TSCP_POINTER( g12636 ), 
                                                       TSCP_DOUBLE( g12637 ) ) ) );
}

DEFTSCP( b_2dnlopt__2dstopval_c186bfac_v );
DEFCSTRING( t12962, "NLOPT:GET-STOPVAL" );

TSCP  b_2dnlopt__2dstopval_c186bfac( g12642 )
        TSCP  g12642;
{
        PUSHSTACKTRACE( t12962 );
        POPSTACKTRACE( DOUBLE_TSCP( nlopt_get_stopval( TSCP_POINTER( g12642 ) ) ) );
}

DEFTSCP( b_2dnlopt_ftol_2drel_7554390d_v );
DEFCSTRING( t12964, "NLOPT:SET-FTOL-REL" );

TSCP  b_2dnlopt_ftol_2drel_7554390d( g12646, g12647 )
        TSCP  g12646, g12647;
{
        PUSHSTACKTRACE( t12964 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_ftol_rel( TSCP_POINTER( g12646 ), 
                                                        TSCP_DOUBLE( g12647 ) ) ) );
}

DEFTSCP( b_2dnlopt_ftol_2drel_47424b14_v );
DEFCSTRING( t12966, "NLOPT:GET-FTOL-REL" );

TSCP  b_2dnlopt_ftol_2drel_47424b14( g12652 )
        TSCP  g12652;
{
        PUSHSTACKTRACE( t12966 );
        POPSTACKTRACE( DOUBLE_TSCP( nlopt_get_ftol_rel( TSCP_POINTER( g12652 ) ) ) );
}

DEFTSCP( b_2dnlopt_ftol_2dabs_a97dbf16_v );
DEFCSTRING( t12968, "NLOPT:SET-FTOL-ABS" );

TSCP  b_2dnlopt_ftol_2dabs_a97dbf16( g12656, g12657 )
        TSCP  g12656, g12657;
{
        PUSHSTACKTRACE( t12968 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_ftol_abs( TSCP_POINTER( g12656 ), 
                                                        TSCP_DOUBLE( g12657 ) ) ) );
}

DEFTSCP( b_2dnlopt_ftol_2dabs_9b6bcd0f_v );
DEFCSTRING( t12970, "NLOPT:GET-FTOL-ABS" );

TSCP  b_2dnlopt_ftol_2dabs_9b6bcd0f( g12662 )
        TSCP  g12662;
{
        PUSHSTACKTRACE( t12970 );
        POPSTACKTRACE( DOUBLE_TSCP( nlopt_get_ftol_abs( TSCP_POINTER( g12662 ) ) ) );
}

DEFTSCP( b_2dnlopt_xtol_2drel_4c338856_v );
DEFCSTRING( t12972, "NLOPT:SET-XTOL-REL" );

TSCP  b_2dnlopt_xtol_2drel_4c338856( g12666, g12667 )
        TSCP  g12666, g12667;
{
        PUSHSTACKTRACE( t12972 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_xtol_rel( TSCP_POINTER( g12666 ), 
                                                        TSCP_DOUBLE( g12667 ) ) ) );
}

DEFTSCP( b_2dnlopt_xtol_2drel_7e25fa4f_v );
DEFCSTRING( t12974, "NLOPT:GET-XTOL-REL" );

TSCP  b_2dnlopt_xtol_2drel_7e25fa4f( g12672 )
        TSCP  g12672;
{
        PUSHSTACKTRACE( t12974 );
        POPSTACKTRACE( DOUBLE_TSCP( nlopt_get_xtol_rel( TSCP_POINTER( g12672 ) ) ) );
}

DEFTSCP( b_2dnlopt_tol_2dabs1_59232719_v );
DEFCSTRING( t12976, "NLOPT:SET-XTOL-ABS1" );

TSCP  b_2dnlopt_tol_2dabs1_59232719( g12676, g12677 )
        TSCP  g12676, g12677;
{
        PUSHSTACKTRACE( t12976 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_xtol_abs1( TSCP_POINTER( g12676 ), 
                                                         TSCP_DOUBLE( g12677 ) ) ) );
}

DEFTSCP( b_2dnlopt_xtol_2dabs_901a0e4d_v );
DEFCSTRING( t12978, "NLOPT:SET-XTOL-ABS" );

TSCP  b_2dnlopt_xtol_2dabs_901a0e4d( g12682, g12683 )
        TSCP  g12682, g12683;
{
        PUSHSTACKTRACE( t12978 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_xtol_abs( TSCP_POINTER( g12682 ), 
                                                        TSCP_POINTER( g12683 ) ) ) );
}

DEFTSCP( b_2dnlopt_xtol_2dabs_a20c7c54_v );
DEFCSTRING( t12980, "NLOPT:GET-XTOL-ABS" );

TSCP  b_2dnlopt_xtol_2dabs_a20c7c54( g12688, g12689 )
        TSCP  g12688, g12689;
{
        PUSHSTACKTRACE( t12980 );
        POPSTACKTRACE( sc_int_tscp( nlopt_get_xtol_abs( TSCP_POINTER( g12688 ), 
                                                        TSCP_POINTER( g12689 ) ) ) );
}

DEFTSCP( b_2dnlopt__2dmaxeval_64c5eb64_v );
DEFCSTRING( t12982, "NLOPT:SET-MAXEVAL" );

TSCP  b_2dnlopt__2dmaxeval_64c5eb64( g12694, g12695 )
        TSCP  g12694, g12695;
{
        PUSHSTACKTRACE( t12982 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_maxeval( TSCP_POINTER( g12694 ), 
                                                       sc_tscp_int( g12695 ) ) ) );
}

DEFTSCP( b_2dnlopt__2dmaxeval_107b2728_v );
DEFCSTRING( t12984, "NLOPT:GET-MAXEVAL" );

TSCP  b_2dnlopt__2dmaxeval_107b2728( g12700 )
        TSCP  g12700;
{
        PUSHSTACKTRACE( t12984 );
        POPSTACKTRACE( sc_int_tscp( nlopt_get_maxeval( TSCP_POINTER( g12700 ) ) ) );
}

DEFTSCP( b_2dnlopt__2dmaxtime_4e73c87b_v );
DEFCSTRING( t12986, "NLOPT:SET-MAXTIME" );

TSCP  b_2dnlopt__2dmaxtime_4e73c87b( g12704, g12705 )
        TSCP  g12704, g12705;
{
        PUSHSTACKTRACE( t12986 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_maxtime( TSCP_POINTER( g12704 ), 
                                                       TSCP_DOUBLE( g12705 ) ) ) );
}

DEFTSCP( b_2dnlopt__2dmaxtime_3acd0437_v );
DEFCSTRING( t12988, "NLOPT:GET-MAXTIME" );

TSCP  b_2dnlopt__2dmaxtime_3acd0437( g12710 )
        TSCP  g12710;
{
        PUSHSTACKTRACE( t12988 );
        POPSTACKTRACE( DOUBLE_TSCP( nlopt_get_maxtime( TSCP_POINTER( g12710 ) ) ) );
}

DEFTSCP( b_2dnlopt_rce_2dstop_e6a6dc15_v );
DEFCSTRING( t12990, "NLOPT:FORCE-STOP" );

TSCP  b_2dnlopt_rce_2dstop_e6a6dc15( g12714 )
        TSCP  g12714;
{
        PUSHSTACKTRACE( t12990 );
        POPSTACKTRACE( sc_int_tscp( nlopt_force_stop( TSCP_POINTER( g12714 ) ) ) );
}

DEFTSCP( b_2dnlopt_rce_2dstop_74a91290_v );
DEFCSTRING( t12992, "NLOPT:SET-FORCE-STOP" );

TSCP  b_2dnlopt_rce_2dstop_74a91290( g12718, g12719 )
        TSCP  g12718, g12719;
{
        PUSHSTACKTRACE( t12992 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_force_stop( TSCP_POINTER( g12718 ), 
                                                          sc_tscp_int( g12719 ) ) ) );
}

DEFTSCP( b_2dnlopt_rce_2dstop_51a2998e_v );
DEFCSTRING( t12994, "NLOPT:GET-FORCE-STOP" );

TSCP  b_2dnlopt_rce_2dstop_51a2998e( g12724 )
        TSCP  g12724;
{
        PUSHSTACKTRACE( t12994 );
        POPSTACKTRACE( sc_int_tscp( nlopt_get_force_stop( TSCP_POINTER( g12724 ) ) ) );
}

DEFTSCP( b_2dnlopt_doptimizer_48777a5b_v );
DEFCSTRING( t12996, "NLOPT:SET-LOCAL-OPTIMIZER" );

TSCP  b_2dnlopt_doptimizer_48777a5b( g12728, g12729 )
        TSCP  g12728, g12729;
{
        PUSHSTACKTRACE( t12996 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_local_optimizer( TSCP_POINTER( g12728 ), 
                                                               TSCP_POINTER( g12729 ) ) ) );
}

DEFTSCP( b_2dnlopt_population_8f7abc24_v );
DEFCSTRING( t12998, "NLOPT:SET-POPULATION" );

TSCP  b_2dnlopt_population_8f7abc24( g12734, g12735 )
        TSCP  g12734, g12735;
{
        PUSHSTACKTRACE( t12998 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_population( TSCP_POINTER( g12734 ), 
                                                          TSCP_S2CUINT( g12735 ) ) ) );
}

DEFTSCP( b_2dnlopt_population_bd6cce3d_v );
DEFCSTRING( t13000, "NLOPT:GET-POPULATION" );

TSCP  b_2dnlopt_population_bd6cce3d( g12740 )
        TSCP  g12740;
{
        PUSHSTACKTRACE( t13000 );
        POPSTACKTRACE( S2CUINT_TSCP( nlopt_get_population( TSCP_POINTER( g12740 ) ) ) );
}

DEFTSCP( b_2dnlopt_ial_2dstep_f387752e_v );
DEFCSTRING( t13002, "NLOPT:SET-DEFAULT-INITIAL-STEP" );

TSCP  b_2dnlopt_ial_2dstep_f387752e( g12744, g12745 )
        TSCP  g12744, g12745;
{
        PUSHSTACKTRACE( t13002 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_default_initial_step( TSCP_POINTER( g12744 ), 
                                                                    TSCP_POINTER( g12745 ) ) ) );
}

DEFTSCP( b_2dnlopt_ial_2dstep_141771ce_v );
DEFCSTRING( t13004, "NLOPT:SET-INITIAL-STEP" );

TSCP  b_2dnlopt_ial_2dstep_141771ce( g12750, g12751 )
        TSCP  g12750, g12751;
{
        PUSHSTACKTRACE( t13004 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_initial_step( TSCP_POINTER( g12750 ), 
                                                            TSCP_POINTER( g12751 ) ) ) );
}

DEFTSCP( b_2dnlopt_al_2dstep1_2d16f8fc_v );
DEFCSTRING( t13006, "NLOPT:SET-INITIAL-STEP1" );

TSCP  b_2dnlopt_al_2dstep1_2d16f8fc( g12756, g12757 )
        TSCP  g12756, g12757;
{
        PUSHSTACKTRACE( t13006 );
        POPSTACKTRACE( sc_int_tscp( nlopt_set_initial_step1( TSCP_POINTER( g12756 ), 
                                                             TSCP_DOUBLE( g12757 ) ) ) );
}

DEFTSCP( b_2dnlopt_ial_2dstep_ba3c31b2_v );
DEFCSTRING( t13008, "NLOPT:GET-INITIAL-STEP" );

TSCP  b_2dnlopt_ial_2dstep_ba3c31b2( g12762, g12763, g12764 )
        TSCP  g12762, g12763, g12764;
{
        PUSHSTACKTRACE( t13008 );
        POPSTACKTRACE( sc_int_tscp( nlopt_get_initial_step( TSCP_POINTER( g12762 ), 
                                                            TSCP_POINTER( g12763 ), 
                                                            TSCP_POINTER( g12764 ) ) ) );
}

void scdebug__init();
void scrt2__init();
void scrt4__init();
void toollib_2dc_2dbindings__init();

static void  init_modules( compiler_version )
        char *compiler_version;
{
        scdebug__init();
        scrt2__init();
        scrt4__init();
        toollib_2dc_2dbindings__init();
        MAXDISPLAY( 3 );
}

void  toollib_2dnlopt__init()
{
        static int  init = 0;
        if  (init)  return;
        init = 1;
        INITHEAP( 0, 0, 0, 0 );
        init_constants();
        init_modules( "(toollib_2dnlopt SCHEME->C COMPILER 15mar93jfb)" );
        sc_segv__handlers();
        INITIALIZEVAR( t12782, 
                       ADR( b_2dnlopt_pt_2d1_2d0_de994582_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_pt_2d1_2d0_de994582, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12784, 
                       ADR( b_2dnlopt_pt_2d3_2d0_a45916e2_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_pt_2d3_2d0_a45916e2, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12786, 
                       ADR( b_2dnlopt_pt_2d5_2d0_2b19e342_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_pt_2d5_2d0_2b19e342, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12788, 
                       ADR( b_2dnlopt_pt_2d7_2d0_51d9b022_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_pt_2d7_2d0_51d9b022, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12790, 
                       ADR( b_2dnlopt_pt_2d9_2d0_eee90e43_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_pt_2d9_2d0_eee90e43, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12792, 
                       ADR( b_2dnlopt_t_2d11_2d0_7c196745_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_t_2d11_2d0_7c196745, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12794, 
                       ADR( b_2dnlopt_n_2ddirect_64c8ae96_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT ) );
        INITIALIZEVAR( t12795, 
                       ADR( b_2dnlopt_direct_2dl_f3259bcf_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT_L ) );
        INITIALIZEVAR( t12796, 
                       ADR( b_2dnlopt_2dl_2drand_1919d4c2_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT_L_RAND ) );
        INITIALIZEVAR( t12797, 
                       ADR( b_2dnlopt_t_2dnoscal_5d4063d3_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT_NOSCAL ) );
        INITIALIZEVAR( t12798, 
                       ADR( b_2dnlopt_l_2dnoscal_2c8828cb_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT_L_NOSCAL ) );
        INITIALIZEVAR( t12799, 
                       ADR( b_2dnlopt_d_2dnoscal_f566e81f_v ), 
                       sc_int_tscp( NLOPT_GN_DIRECT_L_RAND_NOSCAL ) );
        INITIALIZEVAR( t12800, 
                       ADR( b_2dnlopt_g_2ddirect_1895b182_v ), 
                       sc_int_tscp( NLOPT_GN_ORIG_DIRECT ) );
        INITIALIZEVAR( t12801, 
                       ADR( b_2dnlopt_direct_2dl_6d82a144_v ), 
                       sc_int_tscp( NLOPT_GN_ORIG_DIRECT_L ) );
        INITIALIZEVAR( t12802, 
                       ADR( b_2dnlopt_gd_2dstogo_69e506a9_v ), 
                       sc_int_tscp( NLOPT_GD_STOGO ) );
        INITIALIZEVAR( t12803, 
                       ADR( b_2dnlopt_ogo_2drand_6b6f419b_v ), 
                       sc_int_tscp( NLOPT_GD_STOGO_RAND ) );
        INITIALIZEVAR( t12804, 
                       ADR( b_2dnlopt__2dnocedal_f7dc9914_v ), 
                       sc_int_tscp( NLOPT_LD_LBFGS_NOCEDAL ) );
        INITIALIZEVAR( t12805, 
                       ADR( b_2dnlopt_ld_2dlbfgs_1d17928e_v ), 
                       sc_int_tscp( NLOPT_LD_LBFGS ) );
        INITIALIZEVAR( t12806, 
                       ADR( b_2dnlopt_n_2dpraxis_fa477ab7_v ), 
                       sc_int_tscp( NLOPT_LN_PRAXIS ) );
        INITIALIZEVAR( t12807, 
                       ADR( b_2dnlopt_ald_2dvar1_31c6c055_v ), 
                       sc_int_tscp( NLOPT_LD_VAR1 ) );
        INITIALIZEVAR( t12808, 
                       ADR( b_2dnlopt_ald_2dvar2_a8cf91ef_v ), 
                       sc_int_tscp( NLOPT_LD_VAR2 ) );
        INITIALIZEVAR( t12809, 
                       ADR( b_2dnlopt__2dtnewton_c26b4895_v ), 
                       sc_int_tscp( NLOPT_LD_TNEWTON ) );
        INITIALIZEVAR( t12810, 
                       ADR( b_2dnlopt__2drestart_f227b654_v ), 
                       sc_int_tscp( NLOPT_LD_TNEWTON_RESTART ) );
        INITIALIZEVAR( t12811, 
                       ADR( b_2dnlopt__2dprecond_a85bf869_v ), 
                       sc_int_tscp( NLOPT_LD_TNEWTON_PRECOND ) );
        INITIALIZEVAR( t12812, 
                       ADR( b_2dnlopt__2drestart_1a385a08_v ), 
                       sc_int_tscp( NLOPT_LD_TNEWTON_PRECOND_RESTART ) );
        INITIALIZEVAR( t12813, 
                       ADR( b_2dnlopt_dcrs2_2dlm_c1d26458_v ), 
                       sc_int_tscp( NLOPT_GN_CRS2_LM ) );
        INITIALIZEVAR( t12814, 
                       ADR( b_2dnlopt_agn_2dmlsl_a1521d85_v ), 
                       sc_int_tscp( NLOPT_GN_MLSL ) );
        INITIALIZEVAR( t12815, 
                       ADR( b_2dnlopt_agd_2dmlsl_3092014d_v ), 
                       sc_int_tscp( NLOPT_GD_MLSL ) );
        INITIALIZEVAR( t12816, 
                       ADR( b_2dnlopt_mlsl_2dlds_749eabd7_v ), 
                       sc_int_tscp( NLOPT_GN_MLSL_LDS ) );
        INITIALIZEVAR( t12817, 
                       ADR( b_2dnlopt_mlsl_2dlds_a6a9714c_v ), 
                       sc_int_tscp( NLOPT_GD_MLSL_LDS ) );
        INITIALIZEVAR( t12818, 
                       ADR( b_2dnlopt_3ald_2dmma_9036f8dc_v ), 
                       sc_int_tscp( NLOPT_LD_MMA ) );
        INITIALIZEVAR( t12819, 
                       ADR( b_2dnlopt_n_2dcobyla_7acc1965_v ), 
                       sc_int_tscp( NLOPT_LN_COBYLA ) );
        INITIALIZEVAR( t12820, 
                       ADR( b_2dnlopt_n_2dnewuoa_c9121f10_v ), 
                       sc_int_tscp( NLOPT_LN_NEWUOA ) );
        INITIALIZEVAR( t12821, 
                       ADR( b_2dnlopt_uoa__bound_cf52e039_v ), 
                       sc_int_tscp( NLOPT_LN_NEWUOA_BOUND ) );
        INITIALIZEVAR( t12822, 
                       ADR( b_2dnlopt_neldermead_ae51494_v ), 
                       sc_int_tscp( NLOPT_LN_NELDERMEAD ) );
        INITIALIZEVAR( t12823, 
                       ADR( b_2dnlopt_ln_2dsbplx_604c7c2_v ), 
                       sc_int_tscp( NLOPT_LN_SBPLX ) );
        INITIALIZEVAR( t12824, 
                       ADR( b_2dnlopt_n_2dauglag_6caa7d9c_v ), 
                       sc_int_tscp( NLOPT_LN_AUGLAG ) );
        INITIALIZEVAR( t12825, 
                       ADR( b_2dnlopt_d_2dauglag_7b88ed55_v ), 
                       sc_int_tscp( NLOPT_LD_AUGLAG ) );
        INITIALIZEVAR( t12826, 
                       ADR( b_2dnlopt_uglag_2deq_339bc9_v ), 
                       sc_int_tscp( NLOPT_LN_AUGLAG_EQ ) );
        INITIALIZEVAR( t12827, 
                       ADR( b_2dnlopt_uglag_2deq_673ce6df_v ), 
                       sc_int_tscp( NLOPT_LD_AUGLAG_EQ ) );
        INITIALIZEVAR( t12828, 
                       ADR( b_2dnlopt_n_2dbobyqa_4efca6dc_v ), 
                       sc_int_tscp( NLOPT_LN_BOBYQA ) );
        INITIALIZEVAR( t12829, 
                       ADR( b_2dnlopt_gn_2disres_79853543_v ), 
                       sc_int_tscp( NLOPT_GN_ISRES ) );
        INITIALIZEVAR( t12830, 
                       ADR( b_2dnlopt_t_3aauglag_1967edb7_v ), 
                       sc_int_tscp( NLOPT_AUGLAG ) );
        INITIALIZEVAR( t12831, 
                       ADR( b_2dnlopt_uglag_2deq_c05decd8_v ), 
                       sc_int_tscp( NLOPT_AUGLAG_EQ ) );
        INITIALIZEVAR( t12832, 
                       ADR( b_2dnlopt_3ag_2dmlsl_b23b5512_v ), 
                       sc_int_tscp( NLOPT_G_MLSL ) );
        INITIALIZEVAR( t12833, 
                       ADR( b_2dnlopt_mlsl_2dlds_44303b04_v ), 
                       sc_int_tscp( NLOPT_G_MLSL_LDS ) );
        INITIALIZEVAR( t12834, 
                       ADR( b_2dnlopt_ld_2dslsqp_80046018_v ), 
                       sc_int_tscp( NLOPT_LD_SLSQP ) );
        INITIALIZEVAR( t12835, 
                       ADR( b_2dnlopt_thm_2dname_f51c8afc_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_thm_2dname_f51c8afc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12837, 
                       ADR( b_2dnlopt__3afailure_a68ef9cf_v ), 
                       sc_int_tscp( NLOPT_FAILURE ) );
        INITIALIZEVAR( t12838, 
                       ADR( b_2dnlopt_lid_2dargs_54a4d80b_v ), 
                       sc_int_tscp( NLOPT_INVALID_ARGS ) );
        INITIALIZEVAR( t12839, 
                       ADR( b_2dnlopt_f_2dmemory_be88ff22_v ), 
                       sc_int_tscp( NLOPT_OUT_OF_MEMORY ) );
        INITIALIZEVAR( t12840, 
                       ADR( b_2dnlopt__2dlimited_fcde2c0_v ), 
                       sc_int_tscp( NLOPT_ROUNDOFF_LIMITED ) );
        INITIALIZEVAR( t12841, 
                       ADR( b_2dnlopt_ced_2dstop_47118bcb_v ), 
                       sc_int_tscp( NLOPT_FORCED_STOP ) );
        INITIALIZEVAR( t12842, 
                       ADR( b_2dnlopt__3asuccess_e81525bc_v ), 
                       sc_int_tscp( NLOPT_SUCCESS ) );
        INITIALIZEVAR( t12843, 
                       ADR( b_2dnlopt__2dreached_dbf1b1cc_v ), 
                       sc_int_tscp( NLOPT_STOPVAL_REACHED ) );
        INITIALIZEVAR( t12844, 
                       ADR( b_2dnlopt__2dreached_d8d236f0_v ), 
                       sc_int_tscp( NLOPT_FTOL_REACHED ) );
        INITIALIZEVAR( t12845, 
                       ADR( b_2dnlopt__2dreached_75fb5f1c_v ), 
                       sc_int_tscp( NLOPT_XTOL_REACHED ) );
        INITIALIZEVAR( t12846, 
                       ADR( b_2dnlopt__2dreached_2c88f1fb_v ), 
                       sc_int_tscp( NLOPT_MAXEVAL_REACHED ) );
        INITIALIZEVAR( t12847, 
                       ADR( b_2dnlopt__2dreached_3a052c0a_v ), 
                       sc_int_tscp( NLOPT_MAXTIME_REACHED ) );
        INITIALIZEVAR( t12848, 
                       ADR( toollib_2dnlopt_nlopt_3asrand_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dnlopt_nlopt_3asrand, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12851, 
                       ADR( b_2dnlopt_and_2dtime_30c19ce4_v ), 
                       MAKEPROCEDURE( 0, 
                                      0, 
                                      b_2dnlopt_and_2dtime_30c19ce4, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12854, 
                       ADR( b_2dnlopt_t_3acreate_9de54c4c_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_t_3acreate_9de54c4c, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12856, 
                       ADR( b_2dnlopt__3adestroy_fb5f7c75_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt__3adestroy_fb5f7c75, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12859, 
                       ADR( toollib_2dnlopt_nlopt_3acopy_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      toollib_2dnlopt_nlopt_3acopy, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12861, 
                       ADR( toollib_2dnlopt__2awrapped_2a_v ), 
                       EMPTYLIST );
        INITIALIZEVAR( t12862, 
                       ADR( b_2dnlopt_p_2dsingle_3fff939_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_p_2dsingle_3fff939, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12895, 
                       ADR( toollib_2dnlopt_with_2dnlopt_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      toollib_2dnlopt_with_2dnlopt, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12899, 
                       ADR( b_2dnlopt_th_2dnlopt_c4e5c58a_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      b_2dnlopt_th_2dnlopt_c4e5c58a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12906, 
                       ADR( b_2dnlopt_3aoptimize_d76feb14_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_3aoptimize_d76feb14, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12916, 
                       ADR( b_2dnlopt_dobjective_c4448d44_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_dobjective_c4448d44, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12918, 
                       ADR( b_2dnlopt_dobjective_e3ffea75_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_dobjective_e3ffea75, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12920, 
                       ADR( b_2dnlopt_dalgorithm_94da293_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_dalgorithm_94da293, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12922, 
                       ADR( b_2dnlopt_ddimension_56d3afb6_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_ddimension_56d3afb6, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12924, 
                       ADR( b_2dnlopt_r_2dbounds_db90b2ab_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_r_2dbounds_db90b2ab, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12928, 
                       ADR( b_2dnlopt__2dbounds1_1001eae8_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt__2dbounds1_1001eae8, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12930, 
                       ADR( b_2dnlopt_r_2dbounds_75bbf2d7_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_r_2dbounds_75bbf2d7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12938, 
                       ADR( b_2dnlopt_r_2dbounds_f49bebe7_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_r_2dbounds_f49bebe7, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12942, 
                       ADR( b_2dnlopt__2dbounds1_6f44ec0a_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt__2dbounds1_6f44ec0a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12944, 
                       ADR( b_2dnlopt_r_2dbounds_5ab0ab9b_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_r_2dbounds_5ab0ab9b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12952, 
                       ADR( b_2dnlopt_onstraints_2704891a_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_onstraints_2704891a, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12954, 
                       ADR( b_2dnlopt_constraint_5a90a7de_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      b_2dnlopt_constraint_5a90a7de, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12956, 
                       ADR( b_2dnlopt_onstraints_1880ca8f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_onstraints_1880ca8f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12958, 
                       ADR( b_2dnlopt_constraint_44637c61_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      b_2dnlopt_constraint_44637c61, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12960, 
                       ADR( b_2dnlopt__2dstopval_b53873e0_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt__2dstopval_b53873e0, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12962, 
                       ADR( b_2dnlopt__2dstopval_c186bfac_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt__2dstopval_c186bfac, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12964, 
                       ADR( b_2dnlopt_ftol_2drel_7554390d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_ftol_2drel_7554390d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12966, 
                       ADR( b_2dnlopt_ftol_2drel_47424b14_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_ftol_2drel_47424b14, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12968, 
                       ADR( b_2dnlopt_ftol_2dabs_a97dbf16_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_ftol_2dabs_a97dbf16, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12970, 
                       ADR( b_2dnlopt_ftol_2dabs_9b6bcd0f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_ftol_2dabs_9b6bcd0f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12972, 
                       ADR( b_2dnlopt_xtol_2drel_4c338856_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_xtol_2drel_4c338856, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12974, 
                       ADR( b_2dnlopt_xtol_2drel_7e25fa4f_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_xtol_2drel_7e25fa4f, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12976, 
                       ADR( b_2dnlopt_tol_2dabs1_59232719_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_tol_2dabs1_59232719, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12978, 
                       ADR( b_2dnlopt_xtol_2dabs_901a0e4d_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_xtol_2dabs_901a0e4d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12980, 
                       ADR( b_2dnlopt_xtol_2dabs_a20c7c54_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_xtol_2dabs_a20c7c54, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12982, 
                       ADR( b_2dnlopt__2dmaxeval_64c5eb64_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt__2dmaxeval_64c5eb64, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12984, 
                       ADR( b_2dnlopt__2dmaxeval_107b2728_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt__2dmaxeval_107b2728, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12986, 
                       ADR( b_2dnlopt__2dmaxtime_4e73c87b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt__2dmaxtime_4e73c87b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12988, 
                       ADR( b_2dnlopt__2dmaxtime_3acd0437_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt__2dmaxtime_3acd0437, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12990, 
                       ADR( b_2dnlopt_rce_2dstop_e6a6dc15_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_rce_2dstop_e6a6dc15, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12992, 
                       ADR( b_2dnlopt_rce_2dstop_74a91290_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_rce_2dstop_74a91290, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12994, 
                       ADR( b_2dnlopt_rce_2dstop_51a2998e_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_rce_2dstop_51a2998e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12996, 
                       ADR( b_2dnlopt_doptimizer_48777a5b_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_doptimizer_48777a5b, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t12998, 
                       ADR( b_2dnlopt_population_8f7abc24_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_population_8f7abc24, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13000, 
                       ADR( b_2dnlopt_population_bd6cce3d_v ), 
                       MAKEPROCEDURE( 1, 
                                      0, 
                                      b_2dnlopt_population_bd6cce3d, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13002, 
                       ADR( b_2dnlopt_ial_2dstep_f387752e_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_ial_2dstep_f387752e, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13004, 
                       ADR( b_2dnlopt_ial_2dstep_141771ce_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_ial_2dstep_141771ce, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13006, 
                       ADR( b_2dnlopt_al_2dstep1_2d16f8fc_v ), 
                       MAKEPROCEDURE( 2, 
                                      0, 
                                      b_2dnlopt_al_2dstep1_2d16f8fc, 
                                      EMPTYLIST ) );
        INITIALIZEVAR( t13008, 
                       ADR( b_2dnlopt_ial_2dstep_ba3c31b2_v ), 
                       MAKEPROCEDURE( 3, 
                                      0, 
                                      b_2dnlopt_ial_2dstep_ba3c31b2, 
                                      EMPTYLIST ) );
        return;
}
