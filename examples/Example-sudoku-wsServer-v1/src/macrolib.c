#ifdef ___LINKER_INFO
; File: "macrolib.c", produced by Gambit v4.9.4
(
409004
(C)
"macrolib"
("macrolib")
()
(("macrolib"))
( #|*/"*/"symbols|#
"for"
"macrolib"
"macrolib#"
) #|*/"*/"symbols|#
( #|*/"*/"keywords|#
) #|*/"*/"keywords|#
( #|*/"*/"globals-s-d|#
"macrolib#"
) #|*/"*/"globals-s-d|#
( #|*/"*/"globals-s-nd|#
"for"
) #|*/"*/"globals-s-nd|#
( #|*/"*/"globals-ns|#
"+"
">"
) #|*/"*/"globals-ns|#
( #|*/"*/"meta-info|#
) #|*/"*/"meta-info|#
)
#else
#define ___VERSION 409004
#define ___MODULE_NAME "macrolib"
#define ___LINKER_ID ___LNK_macrolib
#define ___MH_PROC ___H_macrolib
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 3
#define ___GLOCOUNT 4
#define ___SUPCOUNT 2
#define ___SUBCOUNT 3
#define ___LBLCOUNT 14
#define ___MODDESCR ___REF_SUB(0)
#include "gambit.h"

___NEED_SYM(___S_for)
___NEED_SYM(___S_macrolib)
___NEED_SYM(___S_macrolib_23_)

___NEED_GLO(___G__2b_)
___NEED_GLO(___G__3e_)
___NEED_GLO(___G_for)
___NEED_GLO(___G_macrolib_23_)

___BEGIN_SYM
___DEF_SYM(0,___S_for,"for")
___DEF_SYM(1,___S_macrolib,"macrolib")
___DEF_SYM(2,___S_macrolib_23_,"macrolib#")
___END_SYM

#define ___SYM_for ___SYM(0,___S_for)
#define ___SYM_macrolib ___SYM(1,___S_macrolib)
#define ___SYM_macrolib_23_ ___SYM(2,___S_macrolib_23_)

___BEGIN_GLO
___DEF_GLO(0,"for")
___DEF_GLO(1,"macrolib#")
___DEF_GLO(2,"+")
___DEF_GLO(3,">")
___END_GLO

#define ___GLO_for ___GLO(0,___G_for)
#define ___PRM_for ___PRM(0,___G_for)
#define ___GLO_macrolib_23_ ___GLO(1,___G_macrolib_23_)
#define ___PRM_macrolib_23_ ___PRM(1,___G_macrolib_23_)
#define ___GLO__2b_ ___GLO(2,___G__2b_)
#define ___PRM__2b_ ___PRM(2,___G__2b_)
#define ___GLO__3e_ ___GLO(3,___G__3e_)
#define ___PRM__3e_ ___PRM(3,___G__3e_)

___DEF_SUB_VEC(___X0,6UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_NUL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_PRC(1))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X1,1UL)
               ___VEC1(___REF_SYM(1,___S_macrolib))
               ___VEC0
___DEF_SUB_VEC(___X2,0UL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64(___F64V2) \

#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_macrolib_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_for)
___DEF_M_HLBL(___L1_for)
___DEF_M_HLBL(___L2_for)
___DEF_M_HLBL(___L3_for)
___DEF_M_HLBL(___L4_for)
___DEF_M_HLBL(___L5_for)
___DEF_M_HLBL(___L6_for)
___DEF_M_HLBL(___L7_for)
___DEF_M_HLBL(___L8_for)
___DEF_M_HLBL(___L9_for)
___DEF_M_HLBL(___L10_for)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_macrolib_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_macrolib_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_macrolib_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_macrolib_23_)
   ___SET_R1(___VOID)
   ___JUMPRET(___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_for
#undef ___PH_LBL0
#define ___PH_LBL0 3
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64(___F64V2) \

#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_for)
___DEF_P_HLBL(___L1_for)
___DEF_P_HLBL(___L2_for)
___DEF_P_HLBL(___L3_for)
___DEF_P_HLBL(___L4_for)
___DEF_P_HLBL(___L5_for)
___DEF_P_HLBL(___L6_for)
___DEF_P_HLBL(___L7_for)
___DEF_P_HLBL(___L8_for)
___DEF_P_HLBL(___L9_for)
___DEF_P_HLBL(___L10_for)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_for)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_for)
   ___SET_STK(1,___R3)
   ___SET_R3(___R1)
   ___SET_STK(2,___R2)
   ___SET_R2(___STK(1))
   ___SET_R1(___STK(2))
   ___POLL(1)
___DEF_SLBL(1,___L1_for)
   ___GOTO(___L12_for)
___DEF_SLBL(2,___L2_for)
___DEF_GLBL(___L11_for)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_for)
___DEF_GLBL(___L12_for)
   ___IF(___NOT(___EQP(___GLO__3e_,___PRM__3e_)))
   ___GOTO(___L24_for)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L23_for)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L23_for)
   ___END_IF
   ___IF(___FIXGT(___R3,___R1))
   ___GOTO(___L21_for)
   ___END_IF
___DEF_GLBL(___L13_for)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R1(___R3)
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_for)
   ___SET_R0(___LBL(5))
   ___JUMPGENSAFE(___SET_NARGS(1),___R2)
___DEF_SLBL(5,___L5_for)
   ___IF(___NOT(___EQP(___GLO__2b_,___PRM__2b_)))
   ___GOTO(___L20_for)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___STK(-4))))
   ___GOTO(___L20_for)
   ___END_IF
   ___IF(___NOT(___FIXADDP_NOTFALSEP(___R1,___STK(-4),___FIX(1L))))
   ___SET_R1(___FAL)
   ___GOTO(___L20_for)
   ___END_IF
   ___IF(___EQP(___GLO__3e_,___PRM__3e_))
   ___GOTO(___L14_for)
   ___END_IF
   ___GOTO(___L19_for)
___DEF_SLBL(6,___L6_for)
   ___IF(___NOT(___EQP(___GLO__3e_,___PRM__3e_)))
   ___GOTO(___L19_for)
   ___END_IF
___DEF_GLBL(___L14_for)
   ___IF(___NOT(___FIXNUMP(___STK(-6))))
   ___GOTO(___L17_for)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L17_for)
   ___END_IF
   ___IF(___FIXGT(___R1,___STK(-6)))
   ___GOTO(___L18_for)
   ___END_IF
___DEF_GLBL(___L15_for)
   ___SET_STK(-4,___R1)
   ___SET_R0(___LBL(7))
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(7,___L7_for)
   ___IF(___NOT(___EQP(___GLO__2b_,___PRM__2b_)))
   ___GOTO(___L16_for)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___STK(-4))))
   ___GOTO(___L16_for)
   ___END_IF
   ___IF(___FIXADDP_NOTFALSEP(___R1,___STK(-4),___FIX(1L)))
   ___GOTO(___L11_for)
   ___END_IF
   ___SET_R1(___FAL)
___DEF_GLBL(___L16_for)
   ___SET_R1(___STK(-4))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(2),2,___G__2b_)
___DEF_GLBL(___L17_for)
   ___IF(___NOT(___FLONUMP(___STK(-6))))
   ___GOTO(___L19_for)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L19_for)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64UNBOX(___STK(-6)))
   ___IF(___NOT(___F64GT(___F64V1,___F64V2)))
   ___GOTO(___L15_for)
   ___END_IF
___DEF_GLBL(___L18_for)
   ___SET_R1(___TRU)
   ___ADJFP(-8)
   ___JUMPRET(___STK(1))
___DEF_GLBL(___L19_for)
   ___SET_STK(-4,___R1)
   ___SET_R2(___STK(-6))
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G__3e_)
___DEF_SLBL(8,___L8_for)
   ___IF(___NOTFALSEP(___R1))
   ___GOTO(___L18_for)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___GOTO(___L15_for)
___DEF_GLBL(___L20_for)
   ___SET_R1(___STK(-4))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),2,___G__2b_)
___DEF_SLBL(9,___L9_for)
   ___IF(___NOT(___NOTFALSEP(___R1)))
   ___GOTO(___L22_for)
   ___END_IF
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L21_for)
   ___SET_R1(___TRU)
   ___JUMPRET(___R0)
___DEF_GLBL(___L22_for)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L13_for)
___DEF_GLBL(___L23_for)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L24_for)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___R3)))
   ___GOTO(___L24_for)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___R3))
   ___SET_F64(___F64V2,___F64UNBOX(___R1))
   ___IF(___F64GT(___F64V1,___F64V2))
   ___GOTO(___L21_for)
   ___END_IF
   ___GOTO(___L13_for)
___DEF_GLBL(___L24_for)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___R1)
   ___SET_R1(___R3)
   ___ADJFP(8)
   ___POLL(10)
___DEF_SLBL(10,___L10_for)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G__3e_)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_macrolib_23_,___REF_SYM(2,___S_macrolib_23_),___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_macrolib_23_,0,-1)
,___DEF_LBL_INTRO(___H_for,___REF_SYM(0,___S_for),___REF_FAL,11,0)
,___DEF_LBL_PROC(___H_for,3,-1)
,___DEF_LBL_RET(___H_for,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_for,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_for,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_for,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_for,___IFD(___RETI,8,0,0x3f0fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(1,___G_macrolib_23_,1)
___DEF_MOD_PRM(0,___G_for,3)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(1,___G_macrolib_23_,1)
___DEF_MOD_GLO(0,___G_for,3)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_for,"for")
___DEF_MOD_SYM(1,___S_macrolib,"macrolib")
___DEF_MOD_SYM(2,___S_macrolib_23_,"macrolib#")
___END_MOD_SYM_KEY

#endif
