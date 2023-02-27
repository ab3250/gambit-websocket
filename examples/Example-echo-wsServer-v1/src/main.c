#ifdef ___LINKER_INFO
; File: "main.c", produced by Gambit v4.9.4
(
409004
(C)
"main"
("main")
()
(("main"))
( #|*/"*/"symbols|#
"closed"
"main"
"main#"
"main#0"
"main#1"
"opened"
) #|*/"*/"symbols|#
( #|*/"*/"keywords|#
) #|*/"*/"keywords|#
( #|*/"*/"globals-s-d|#
"gblFd"
"main#"
"main#0"
"main#1"
"ws_sendframe_txt"
"ws_start"
) #|*/"*/"globals-s-d|#
( #|*/"*/"globals-s-nd|#
"onclose"
"onmessage"
"onopen"
) #|*/"*/"globals-s-nd|#
( #|*/"*/"globals-ns|#
"display"
"list"
"newline"
) #|*/"*/"globals-ns|#
( #|*/"*/"meta-info|#
) #|*/"*/"meta-info|#
)
#else
#define ___VERSION 409004
#define ___MODULE_NAME "main"
#define ___LINKER_ID ___LNK_main
#define ___MH_PROC ___H_main
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 6
#define ___GLOCOUNT 12
#define ___SUPCOUNT 9
#define ___SUBCOUNT 3
#define ___LBLCOUNT 28
#define ___MODDESCR ___REF_SUB(0)
#include "gambit.h"

___NEED_SYM(___S_closed)
___NEED_SYM(___S_main)
___NEED_SYM(___S_main_23_)
___NEED_SYM(___S_main_23_0)
___NEED_SYM(___S_main_23_1)
___NEED_SYM(___S_opened)

___NEED_GLO(___G_display)
___NEED_GLO(___G_gblFd)
___NEED_GLO(___G_list)
___NEED_GLO(___G_main_23_)
___NEED_GLO(___G_main_23_0)
___NEED_GLO(___G_main_23_1)
___NEED_GLO(___G_newline)
___NEED_GLO(___G_onclose)
___NEED_GLO(___G_onmessage)
___NEED_GLO(___G_onopen)
___NEED_GLO(___G_ws__sendframe__txt)
___NEED_GLO(___G_ws__start)

___BEGIN_SYM
___DEF_SYM(0,___S_closed,"closed")
___DEF_SYM(1,___S_main,"main")
___DEF_SYM(2,___S_main_23_,"main#")
___DEF_SYM(3,___S_main_23_0,"main#0")
___DEF_SYM(4,___S_main_23_1,"main#1")
___DEF_SYM(5,___S_opened,"opened")
___END_SYM

#define ___SYM_closed ___SYM(0,___S_closed)
#define ___SYM_main ___SYM(1,___S_main)
#define ___SYM_main_23_ ___SYM(2,___S_main_23_)
#define ___SYM_main_23_0 ___SYM(3,___S_main_23_0)
#define ___SYM_main_23_1 ___SYM(4,___S_main_23_1)
#define ___SYM_opened ___SYM(5,___S_opened)

___BEGIN_GLO
___DEF_GLO(0,"gblFd")
___DEF_GLO(1,"main#")
___DEF_GLO(2,"main#0")
___DEF_GLO(3,"main#1")
___DEF_GLO(4,"onclose")
___DEF_GLO(5,"onmessage")
___DEF_GLO(6,"onopen")
___DEF_GLO(7,"ws_sendframe_txt")
___DEF_GLO(8,"ws_start")
___DEF_GLO(9,"display")
___DEF_GLO(10,"list")
___DEF_GLO(11,"newline")
___END_GLO

#define ___GLO_gblFd ___GLO(0,___G_gblFd)
#define ___PRM_gblFd ___PRM(0,___G_gblFd)
#define ___GLO_main_23_ ___GLO(1,___G_main_23_)
#define ___PRM_main_23_ ___PRM(1,___G_main_23_)
#define ___GLO_main_23_0 ___GLO(2,___G_main_23_0)
#define ___PRM_main_23_0 ___PRM(2,___G_main_23_0)
#define ___GLO_main_23_1 ___GLO(3,___G_main_23_1)
#define ___PRM_main_23_1 ___PRM(3,___G_main_23_1)
#define ___GLO_onclose ___GLO(4,___G_onclose)
#define ___PRM_onclose ___PRM(4,___G_onclose)
#define ___GLO_onmessage ___GLO(5,___G_onmessage)
#define ___PRM_onmessage ___PRM(5,___G_onmessage)
#define ___GLO_onopen ___GLO(6,___G_onopen)
#define ___PRM_onopen ___PRM(6,___G_onopen)
#define ___GLO_ws__sendframe__txt ___GLO(7,___G_ws__sendframe__txt)
#define ___PRM_ws__sendframe__txt ___PRM(7,___G_ws__sendframe__txt)
#define ___GLO_ws__start ___GLO(8,___G_ws__start)
#define ___PRM_ws__start ___PRM(8,___G_ws__start)
#define ___GLO_display ___GLO(9,___G_display)
#define ___PRM_display ___PRM(9,___G_display)
#define ___GLO_list ___GLO(10,___G_list)
#define ___PRM_list ___PRM(10,___G_list)
#define ___GLO_newline ___GLO(11,___G_newline)
#define ___PRM_newline ___PRM(11,___G_newline)

___DEF_SUB_VEC(___X0,6UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_NUL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_PRC(1))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X1,1UL)
               ___VEC1(___REF_SYM(1,___S_main))
               ___VEC0
___DEF_SUB_VEC(___X2,0UL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
___END_SUB


#define ___C_LBL_onopen 10
#define ___C_LBL_onclose 18
#define ___C_LBL_onmessage 26

  #include "ws.h"
  void ws_start(void);
extern void onopen ___P((int ___arg1),(___arg1)
int ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_onopen))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void onclose ___P((int ___arg1),(___arg1)
int ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_onclose))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

extern void onmessage ___P((int ___arg1,char* ___arg2,___U64 ___arg3,int ___arg4),(___arg1,___arg2,___arg3,___arg4)
int ___arg1;
char* ___arg2;
___U64 ___arg3;
int ___arg4;)
{
#define ___NARGS 4
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_onmessage))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_ARG(2,___ARG2)
___BEGIN_SFUN_CHARSTRING_TO_SCMOBJ(___arg2,___ARG2,2)
___BEGIN_SFUN_ARG(3,___ARG3)
___BEGIN_SFUN_U64_TO_SCMOBJ(___arg3,___ARG3,3)
___BEGIN_SFUN_ARG(4,___ARG4)
___BEGIN_SFUN_INT_TO_SCMOBJ(___arg4,___ARG4,4)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_ARG(2,___ARG2)
___SFUN_ARG(3,___ARG3)
___SFUN_ARG(4,___ARG4)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_INT_TO_SCMOBJ(___arg4,___ARG4,4)
___END_SFUN_ARG(4)
___END_SFUN_U64_TO_SCMOBJ(___arg3,___ARG3,3)
___END_SFUN_ARG(3)
___END_SFUN_CHARSTRING_TO_SCMOBJ(___arg2,___ARG2,2)
___END_SFUN_ARG(2)
___END_SFUN_INT_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

#define ___CFUN_SELECT(inl,ool)ool
#define ___NARGS 3
___BEGIN_CFUN(___main_23_0,int ___result)
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,char* ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,___BOOL ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_BOOL(___ARG3,___arg3,3)
___BEGIN_CFUN_BODY_CLEANUP
#undef ___AT_END
___CFUN_ASSIGN(___result,ws_sendframe_txt(___arg1,___arg2,___arg3))
#ifndef ___AT_END
#define ___AT_END
#endif
___BEGIN_CFUN_INT_TO_SCMOBJ(___result,___CFUN_RESULT)
___CFUN_SET_RESULT
___END_CFUN_INT_TO_SCMOBJ(___result,___CFUN_RESULT)
___END_CFUN_BODY_CLEANUP
___END_CFUN_SCMOBJ_TO_BOOL(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_CHARSTRING(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_CLEANUP
___END_CFUN
#undef ___NARGS
#undef ___CFUN_SELECT

#define ___CFUN_SELECT(inl,ool)ool
#define ___NARGS 0
___BEGIN_CFUN_VOID(___main_23_1)
___BEGIN_CFUN_BODY
#undef ___AT_END
ws_start();
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
#undef ___CFUN_SELECT


#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_main_23_)
___DEF_M_HLBL(___L1_main_23_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_main_23_0)
___DEF_M_HLBL(___L1_main_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_main_23_1)
___DEF_M_HLBL(___L1_main_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_onopen)
___DEF_M_HLBL(___L1_onopen)
___DEF_M_HLBL(___L2_onopen)
___DEF_M_HLBL(___L3_onopen)
___DEF_M_HLBL(___L4_onopen)
___DEF_M_HLBL(___L5_onopen)
___DEF_M_HLBL(___L6_onopen)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_onclose)
___DEF_M_HLBL(___L1_onclose)
___DEF_M_HLBL(___L2_onclose)
___DEF_M_HLBL(___L3_onclose)
___DEF_M_HLBL(___L4_onclose)
___DEF_M_HLBL(___L5_onclose)
___DEF_M_HLBL(___L6_onclose)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_onmessage)
___DEF_M_HLBL(___L1_onmessage)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_main_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_main_23_)
___DEF_P_HLBL(___L1_main_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_main_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_main_23_)
   ___SET_GLO(7,___G_ws__sendframe__txt,___PRC(4))
   ___SET_GLO(8,___G_ws__start,___PRC(7))
   ___SET_GLO(6,___G_onopen,___PRC(10))
   ___SET_GLO(4,___G_onclose,___PRC(18))
   ___SET_GLO(5,___G_onmessage,___PRC(26))
   ___SET_GLO(0,___G_gblFd,___FIX(1L))
   ___POLL(1)
___DEF_SLBL(1,___L1_main_23_)
   ___JUMPGLOSAFE(___SET_NARGS(0),8,___G_ws__start)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_main_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 4
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_main_23_0)
___DEF_P_HLBL(___L1_main_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_main_23_0)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_main_23_0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(8)
   ___CFUN_OOL(___main_23_0)
   ___JUMPRET(___R0)
___DEF_SLBL(1,___L1_main_23_0)
   ___ADJFP(-8)
   ___JUMPRET(___STK(4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_main_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 7
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_main_23_1)
___DEF_P_HLBL(___L1_main_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_main_23_1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_main_23_1)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
   ___CFUN_OOL(___main_23_1)
   ___JUMPRET(___R0)
___DEF_SLBL(1,___L1_main_23_1)
   ___ADJFP(-4)
   ___JUMPRET(___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_onopen
#undef ___PH_LBL0
#define ___PH_LBL0 10
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_onopen)
___DEF_P_HLBL(___L1_onopen)
___DEF_P_HLBL(___L2_onopen)
___DEF_P_HLBL(___L3_onopen)
___DEF_P_HLBL(___L4_onopen)
___DEF_P_HLBL(___L5_onopen)
___DEF_P_HLBL(___L6_onopen)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_onopen)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_onopen)
   ___SET_GLO(0,___G_gblFd,___R1)
   ___SET_STK(1,___R0)
   ___ADJFP(1)
   ___IF(___EQP(___GLO_list,___PRM_list))
   ___GOTO(___L7_onopen)
   ___END_IF
   ___GOTO(___L8_onopen)
___DEF_SLBL(1,___L1_onopen)
   ___SET_R0(___STK(-3))
   ___POLL(2)
___DEF_SLBL(2,___L2_onopen)
   ___GOTO(___L11_onopen)
___DEF_GLBL(___L7_onopen)
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_opened)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_onopen)
   ___GOTO(___L10_onopen)
___DEF_GLBL(___L8_onopen)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_opened)
   ___ADJFP(3)
   ___POLL(4)
___DEF_SLBL(4,___L4_onopen)
   ___GOTO(___L9_onopen)
___DEF_SLBL(5,___L5_onopen)
   ___ADJFP(-3)
   ___GOTO(___L10_onopen)
___DEF_GLBL(___L9_onopen)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),10,___G_list)
___DEF_GLBL(___L10_onopen)
   ___ADJFP(3)
   ___POLL(6)
___DEF_SLBL(6,___L6_onopen)
   ___SET_R0(___LBL(1))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_display)
___DEF_GLBL(___L11_onopen)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(0),11,___G_newline)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_onclose
#undef ___PH_LBL0
#define ___PH_LBL0 18
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_onclose)
___DEF_P_HLBL(___L1_onclose)
___DEF_P_HLBL(___L2_onclose)
___DEF_P_HLBL(___L3_onclose)
___DEF_P_HLBL(___L4_onclose)
___DEF_P_HLBL(___L5_onclose)
___DEF_P_HLBL(___L6_onclose)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_onclose)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_onclose)
   ___SET_GLO(0,___G_gblFd,___FIX(1L))
   ___SET_STK(1,___R0)
   ___ADJFP(1)
   ___IF(___EQP(___GLO_list,___PRM_list))
   ___GOTO(___L7_onclose)
   ___END_IF
   ___GOTO(___L8_onclose)
___DEF_SLBL(1,___L1_onclose)
   ___SET_R0(___STK(-3))
   ___POLL(2)
___DEF_SLBL(2,___L2_onclose)
   ___GOTO(___L11_onclose)
___DEF_GLBL(___L7_onclose)
   ___BEGIN_ALLOC_LIST(2UL,___R1)
   ___ADD_LIST_ELEM(1,___SYM_closed)
   ___END_ALLOC_LIST(2)
   ___SET_R1(___GET_LIST(2))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_onclose)
   ___GOTO(___L10_onclose)
___DEF_GLBL(___L8_onclose)
   ___SET_R2(___R1)
   ___SET_R1(___SYM_closed)
   ___ADJFP(3)
   ___POLL(4)
___DEF_SLBL(4,___L4_onclose)
   ___GOTO(___L9_onclose)
___DEF_SLBL(5,___L5_onclose)
   ___ADJFP(-3)
   ___GOTO(___L10_onclose)
___DEF_GLBL(___L9_onclose)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),10,___G_list)
___DEF_GLBL(___L10_onclose)
   ___ADJFP(3)
   ___POLL(6)
___DEF_SLBL(6,___L6_onclose)
   ___SET_R0(___LBL(1))
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_display)
___DEF_GLBL(___L11_onclose)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(0),11,___G_newline)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_onmessage
#undef ___PH_LBL0
#define ___PH_LBL0 26
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_onmessage)
___DEF_P_HLBL(___L1_onmessage)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_onmessage)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_onmessage)
   ___SET_R2(___R1)
   ___SET_R3(___FAL)
   ___SET_R1(___GLO_gblFd)
   ___POLL(1)
___DEF_SLBL(1,___L1_onmessage)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(3),7,___G_ws__sendframe__txt)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_main_23_,___REF_SYM(2,___S_main_23_),___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_main_23_,0,-1)
,___DEF_LBL_RET(___H_main_23_,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_main_23_0,___REF_SYM(3,___S_main_23_0),___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_main_23_0,3,-1)
,___DEF_LBL_RET(___H_main_23_0,___IFD(___RETN,4,3,0xfL))
,___DEF_LBL_INTRO(___H_main_23_1,___REF_SYM(4,___S_main_23_1),___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_main_23_1,0,-1)
,___DEF_LBL_RET(___H_main_23_1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_onopen,___REF_FAL,___REF_FAL,7,onopen)
,___DEF_LBL_PROC(___H_onopen,1,-1)
,___DEF_LBL_RET(___H_onopen,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_onopen,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_onopen,___IFD(___RETI,1,0,0x3f1L))
,___DEF_LBL_RET(___H_onopen,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_onopen,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_onopen,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_onclose,___REF_FAL,___REF_FAL,7,onclose)
,___DEF_LBL_PROC(___H_onclose,1,-1)
,___DEF_LBL_RET(___H_onclose,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_onclose,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_onclose,___IFD(___RETI,1,0,0x3f1L))
,___DEF_LBL_RET(___H_onclose,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_onclose,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_onclose,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_onmessage,___REF_FAL,___REF_FAL,2,onmessage)
,___DEF_LBL_PROC(___H_onmessage,4,-1)
,___DEF_LBL_RET(___H_onmessage,___IFD(___RETI,1,4,0x3f0L))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(1,___G_main_23_,1)
___DEF_MOD_PRM(2,___G_main_23_0,4)
___DEF_MOD_PRM(3,___G_main_23_1,7)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(1,___G_main_23_,1)
___DEF_MOD_GLO(2,___G_main_23_0,4)
___DEF_MOD_GLO(3,___G_main_23_1,7)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_closed,"closed")
___DEF_MOD_SYM(1,___S_main,"main")
___DEF_MOD_SYM(2,___S_main_23_,"main#")
___DEF_MOD_SYM(3,___S_main_23_0,"main#0")
___DEF_MOD_SYM(4,___S_main_23_1,"main#1")
___DEF_MOD_SYM(5,___S_opened,"opened")
___END_MOD_SYM_KEY

#endif
