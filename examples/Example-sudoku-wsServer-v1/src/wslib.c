#ifdef ___LINKER_INFO
; File: "wslib.c", produced by Gambit v4.9.4
(
409004
(C)
"wslib"
("wslib")
()
(("wslib"))
( #|*/"*/"symbols|#
"wslib"
"wslib#"
) #|*/"*/"symbols|#
( #|*/"*/"keywords|#
) #|*/"*/"keywords|#
( #|*/"*/"globals-s-d|#
"wslib#"
) #|*/"*/"globals-s-d|#
( #|*/"*/"globals-s-nd|#
"wslib#grid1"
"wslib#grid2"
"wslib#grid3"
) #|*/"*/"globals-s-nd|#
( #|*/"*/"globals-ns|#
"append"
"list->vector"
) #|*/"*/"globals-ns|#
( #|*/"*/"meta-info|#
) #|*/"*/"meta-info|#
)
#else
#define ___VERSION 409004
#define ___MODULE_NAME "wslib"
#define ___LINKER_ID ___LNK_wslib
#define ___MH_PROC ___H_wslib
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 2
#define ___GLOCOUNT 6
#define ___SUPCOUNT 4
#define ___CNSCOUNT 243
#define ___SUBCOUNT 3
#define ___LBLCOUNT 9
#define ___OFDCOUNT 1
#define ___MODDESCR ___REF_SUB(0)
#include "gambit.h"

___NEED_SYM(___S_wslib)
___NEED_SYM(___S_wslib_23_)

___NEED_GLO(___G_append)
___NEED_GLO(___G_list_2d__3e_vector)
___NEED_GLO(___G_wslib_23_)
___NEED_GLO(___G_wslib_23_grid1)
___NEED_GLO(___G_wslib_23_grid2)
___NEED_GLO(___G_wslib_23_grid3)

___BEGIN_SYM
___DEF_SYM(0,___S_wslib,"wslib")
___DEF_SYM(1,___S_wslib_23_,"wslib#")
___END_SYM

#define ___SYM_wslib ___SYM(0,___S_wslib)
#define ___SYM_wslib_23_ ___SYM(1,___S_wslib_23_)

___BEGIN_GLO
___DEF_GLO(0,"wslib#")
___DEF_GLO(1,"wslib#grid1")
___DEF_GLO(2,"wslib#grid2")
___DEF_GLO(3,"wslib#grid3")
___DEF_GLO(4,"append")
___DEF_GLO(5,"list->vector")
___END_GLO

#define ___GLO_wslib_23_ ___GLO(0,___G_wslib_23_)
#define ___PRM_wslib_23_ ___PRM(0,___G_wslib_23_)
#define ___GLO_wslib_23_grid1 ___GLO(1,___G_wslib_23_grid1)
#define ___PRM_wslib_23_grid1 ___PRM(1,___G_wslib_23_grid1)
#define ___GLO_wslib_23_grid2 ___GLO(2,___G_wslib_23_grid2)
#define ___PRM_wslib_23_grid2 ___PRM(2,___G_wslib_23_grid2)
#define ___GLO_wslib_23_grid3 ___GLO(3,___G_wslib_23_grid3)
#define ___PRM_wslib_23_grid3 ___PRM(3,___G_wslib_23_grid3)
#define ___GLO_append ___GLO(4,___G_append)
#define ___PRM_append ___PRM(4,___G_append)
#define ___GLO_list_2d__3e_vector ___GLO(5,___G_list_2d__3e_vector)
#define ___PRM_list_2d__3e_vector ___PRM(5,___G_list_2d__3e_vector)

___BEGIN_CNS
 ___DEF_CNS(___REF_FIX(5),___REF_CNS(1))
,___DEF_CNS(___REF_FIX(3),___REF_CNS(2))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(3))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(4))
,___DEF_CNS(___REF_FIX(7),___REF_CNS(5))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(6))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(7))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(8))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(6),___REF_CNS(10))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(11))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(12))
,___DEF_CNS(___REF_FIX(1),___REF_CNS(13))
,___DEF_CNS(___REF_FIX(9),___REF_CNS(14))
,___DEF_CNS(___REF_FIX(5),___REF_CNS(15))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(16))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(17))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(19))
,___DEF_CNS(___REF_FIX(9),___REF_CNS(20))
,___DEF_CNS(___REF_FIX(8),___REF_CNS(21))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(22))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(23))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(24))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(25))
,___DEF_CNS(___REF_FIX(6),___REF_CNS(26))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(8),___REF_CNS(28))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(29))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(30))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(31))
,___DEF_CNS(___REF_FIX(6),___REF_CNS(32))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(33))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(34))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(35))
,___DEF_CNS(___REF_FIX(3),___REF_NUL)
,___DEF_CNS(___REF_FIX(4),___REF_CNS(37))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(38))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(39))
,___DEF_CNS(___REF_FIX(8),___REF_CNS(40))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(41))
,___DEF_CNS(___REF_FIX(3),___REF_CNS(42))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(43))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(44))
,___DEF_CNS(___REF_FIX(1),___REF_NUL)
,___DEF_CNS(___REF_FIX(7),___REF_CNS(46))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(47))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(48))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(49))
,___DEF_CNS(___REF_FIX(2),___REF_CNS(50))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(51))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(52))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(53))
,___DEF_CNS(___REF_FIX(6),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(55))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(56))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(57))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(58))
,___DEF_CNS(___REF_FIX(8),___REF_CNS(59))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(60))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(61))
,___DEF_CNS(___REF_FIX(7),___REF_CNS(62))
,___DEF_CNS(___REF_FIX(9),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(64))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(65))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(66))
,___DEF_CNS(___REF_FIX(4),___REF_CNS(67))
,___DEF_CNS(___REF_FIX(1),___REF_CNS(68))
,___DEF_CNS(___REF_FIX(9),___REF_CNS(69))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(70))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(71))
,___DEF_CNS(___REF_FIX(5),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(73))
,___DEF_CNS(___REF_FIX(6),___REF_CNS(74))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(75))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(76))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(77))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(78))
,___DEF_CNS(___REF_FIX(2),___REF_CNS(79))
,___DEF_CNS(___REF_FIX(8),___REF_CNS(80))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(82))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(83))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(84))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(85))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(86))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(87))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(88))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(89))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(91))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(92))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(93))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(94))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(95))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(96))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(97))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(98))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(100))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(101))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(102))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(103))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(104))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(105))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(106))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(107))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(109))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(110))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(111))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(112))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(113))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(114))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(115))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(116))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(118))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(119))
,___DEF_CNS(___REF_FIX(1),___REF_CNS(120))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(121))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(122))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(123))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(124))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(125))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(127))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(128))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(129))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(130))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(131))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(132))
,___DEF_CNS(___REF_FIX(2),___REF_CNS(133))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(134))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(136))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(137))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(138))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(139))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(140))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(141))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(142))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(143))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(145))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(146))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(147))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(148))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(149))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(150))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(151))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(152))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(154))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(155))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(156))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(157))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(158))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(159))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(160))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(161))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(163))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(164))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(165))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(166))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(167))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(168))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(169))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(170))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(172))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(173))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(174))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(175))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(176))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(177))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(178))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(179))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(181))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(182))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(183))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(184))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(185))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(186))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(187))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(188))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(190))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(191))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(192))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(193))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(194))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(195))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(196))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(197))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(199))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(200))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(201))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(202))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(203))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(204))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(205))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(206))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(208))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(209))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(210))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(211))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(212))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(213))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(214))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(215))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(217))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(218))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(219))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(220))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(221))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(222))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(223))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(224))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(226))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(227))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(228))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(229))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(230))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(231))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(232))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(233))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
,___DEF_CNS(___REF_FIX(0),___REF_CNS(235))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(236))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(237))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(238))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(239))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(240))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(241))
,___DEF_CNS(___REF_FIX(0),___REF_CNS(242))
,___DEF_CNS(___REF_FIX(0),___REF_NUL)
___END_CNS

___DEF_SUB_VEC(___X0,6UL)
               ___VEC1(___REF_SUB(1))
               ___VEC1(___REF_SUB(2))
               ___VEC1(___REF_NUL)
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_PRC(1))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_VEC(___X1,1UL)
               ___VEC1(___REF_SYM(0,___S_wslib))
               ___VEC0
___DEF_SUB_VEC(___X2,0UL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_wslib_23_)
___DEF_M_HLBL(___L1_wslib_23_)
___DEF_M_HLBL(___L2_wslib_23_)
___DEF_M_HLBL(___L3_wslib_23_)
___DEF_M_HLBL(___L4_wslib_23_)
___DEF_M_HLBL(___L5_wslib_23_)
___DEF_M_HLBL(___L6_wslib_23_)
___DEF_M_HLBL(___L7_wslib_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_wslib_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_wslib_23_)
___DEF_P_HLBL(___L1_wslib_23_)
___DEF_P_HLBL(___L2_wslib_23_)
___DEF_P_HLBL(___L3_wslib_23_)
___DEF_P_HLBL(___L4_wslib_23_)
___DEF_P_HLBL(___L5_wslib_23_)
___DEF_P_HLBL(___L6_wslib_23_)
___DEF_P_HLBL(___L7_wslib_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_wslib_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_wslib_23_)
   ___SET_STK(1,___R0)
   ___SET_STK(5,___CNS(0))
   ___SET_STK(6,___CNS(9))
   ___SET_STK(7,___CNS(18))
   ___SET_STK(8,___CNS(27))
   ___SET_STK(9,___CNS(36))
   ___SET_STK(10,___CNS(45))
   ___SET_R3(___CNS(54))
   ___SET_R2(___CNS(63))
   ___SET_R1(___CNS(72))
   ___ADJFP(10)
   ___POLL(1)
___DEF_SLBL(1,___L1_wslib_23_)
   ___SET_R0(___LBL(2))
   ___JUMPGLOSAFE(___SET_NARGS(9),4,___G_append)
___DEF_SLBL(2,___L2_wslib_23_)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_list_2d__3e_vector)
___DEF_SLBL(3,___L3_wslib_23_)
   ___SET_GLO(1,___G_wslib_23_grid1,___R1)
   ___SET_STK(1,___CNS(81))
   ___SET_STK(2,___CNS(90))
   ___SET_STK(3,___CNS(99))
   ___SET_STK(4,___CNS(108))
   ___SET_STK(5,___CNS(117))
   ___SET_STK(6,___CNS(126))
   ___SET_R3(___CNS(135))
   ___SET_R2(___CNS(144))
   ___SET_R1(___CNS(153))
   ___SET_R0(___LBL(4))
   ___ADJFP(6)
   ___JUMPGLOSAFE(___SET_NARGS(9),4,___G_append)
___DEF_SLBL(4,___L4_wslib_23_)
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_list_2d__3e_vector)
___DEF_SLBL(5,___L5_wslib_23_)
   ___SET_GLO(2,___G_wslib_23_grid2,___R1)
   ___SET_STK(1,___CNS(162))
   ___SET_STK(2,___CNS(171))
   ___SET_STK(3,___CNS(180))
   ___SET_STK(4,___CNS(189))
   ___SET_STK(5,___CNS(198))
   ___SET_STK(6,___CNS(207))
   ___SET_R3(___CNS(216))
   ___SET_R2(___CNS(225))
   ___SET_R1(___CNS(234))
   ___SET_R0(___LBL(6))
   ___ADJFP(6)
   ___JUMPGLOSAFE(___SET_NARGS(9),4,___G_append)
___DEF_SLBL(6,___L6_wslib_23_)
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(1),5,___G_list_2d__3e_vector)
___DEF_SLBL(7,___L7_wslib_23_)
   ___SET_GLO(3,___G_wslib_23_grid3,___R1)
   ___SET_R1(___VOID)
   ___ADJFP(-4)
   ___JUMPRET(___STK(1))
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_wslib_23_,___REF_SYM(1,___S_wslib_23_),___REF_FAL,8,0)
,___DEF_LBL_PROC(___H_wslib_23_,0,-1)
,___DEF_LBL_RET(___H_wslib_23_,___OFD(___RETI,10,0,0x3f3f1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_wslib_23_,___IFD(___RETN,1,0,0x1L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,10,0)
               ___GCMAP1(0x3f3f1L)
___END_OFD

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_wslib_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_wslib_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_wslib,"wslib")
___DEF_MOD_SYM(1,___S_wslib_23_,"wslib#")
___END_MOD_SYM_KEY

#endif
