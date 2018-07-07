/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Xilinx/workspace/CPU_50/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static int ng10[] = {32, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static int ng15[] = {1, 0};
static int ng16[] = {0, 0};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static int ng21[] = {24, 0};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t47[16];
    char t48[16];
    char t49[8];
    char t50[16];
    char t54[8];
    char t55[8];
    char t56[8];
    char t63[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2428);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB43;

LAB9:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB44;

LAB45:
LAB46:    t39 = (t0 + 1380);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB43;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB47;

LAB48:
LAB49:    t39 = (t0 + 1380);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB43;

LAB15:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB50;

LAB51:
LAB52:    t21 = (t0 + 1380);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB43;

LAB17:    xsi_set_current_line(43, ng0);

LAB53:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1060U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 6);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB19:    xsi_set_current_line(46, ng0);

LAB54:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1060U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 6);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB21:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t40) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t40 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB55;

LAB56:
LAB57:    memset(t10, 0, 8);
    t39 = (t10 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t10) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB59;

LAB58:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1380);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB43;

LAB23:    xsi_set_current_line(50, ng0);

LAB60:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t40) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    xsi_vlog_mul_concat(t10, 32, 1, t3, 1U, t40, 1);
    xsi_vlogtype_concat(t48, 64, 64, 2U, t10, 32, t4, 32);
    t21 = (t0 + 1060U);
    t22 = *((char **)t21);
    memset(t49, 0, 8);
    t21 = (t49 + 4);
    t39 = (t22 + 4);
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 6);
    *((unsigned int *)t49) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 6);
    *((unsigned int *)t21) = t20;
    t23 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t23 & 31U);
    t24 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t24 & 31U);
    xsi_vlog_unsigned_rshift(t50, 64, t48, 64, t49, 5);
    xsi_vlogtype_concat(t47, 64, 64, 1U, t50, 64);
    t41 = (t0 + 1380);
    xsi_vlogvar_assign_value(t41, t47, 0, 0, 32);
    goto LAB43;

LAB25:    xsi_set_current_line(54, ng0);

LAB61:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t40) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    xsi_vlog_mul_concat(t10, 32, 1, t3, 1U, t40, 1);
    xsi_vlogtype_concat(t48, 64, 64, 2U, t10, 32, t4, 32);
    t21 = (t0 + 600U);
    t22 = *((char **)t21);
    memset(t49, 0, 8);
    t21 = (t49 + 4);
    t39 = (t22 + 4);
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t49) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 0);
    *((unsigned int *)t21) = t20;
    t23 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t23 & 31U);
    t24 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t24 & 31U);
    xsi_vlog_unsigned_rshift(t50, 64, t48, 64, t49, 5);
    xsi_vlogtype_concat(t47, 64, 64, 1U, t50, 64);
    t41 = (t0 + 1380);
    xsi_vlogvar_assign_value(t41, t47, 0, 0, 32);
    goto LAB43;

LAB27:    xsi_set_current_line(58, ng0);

LAB62:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB29:    xsi_set_current_line(61, ng0);

LAB63:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB31:    xsi_set_current_line(64, ng0);

LAB64:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 692U);
    t9 = *((char **)t8);
    memset(t40, 0, 8);
    t8 = (t40 + 4);
    t21 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t21);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t8) = t24;
    memset(t49, 0, 8);
    t22 = (t10 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB66;

LAB65:    t39 = (t40 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t10) > *((unsigned int *)t40))
        goto LAB67;

LAB68:    t46 = (t49 + 4);
    t25 = *((unsigned int *)t46);
    t26 = (~(t25));
    t27 = *((unsigned int *)t49);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    memset(t40, 0, 8);
    t7 = (t40 + 4);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t40) = t19;
    t20 = *((unsigned int *)t9);
    t23 = (t20 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t7) = t24;
    memset(t49, 0, 8);
    t21 = (t10 + 4);
    t22 = (t40 + 4);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t22);
    t30 = (t28 ^ t29);
    t33 = (t27 | t30);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t22);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB76;

LAB73:    if (t36 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t49) = 1;

LAB76:    t41 = (t49 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t49);
    t45 = (t44 & t43);
    t53 = (t45 != 0);
    if (t53 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB79:
LAB72:    goto LAB43;

LAB33:    xsi_set_current_line(69, ng0);

LAB98:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t49, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB100;

LAB99:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB101;

LAB102:    memset(t40, 0, 8);
    t21 = (t49 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t49);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t21) != 0)
        goto LAB106;

LAB107:    t39 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t39);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB108;

LAB109:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t39);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t39) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t40) > 0)
        goto LAB114;

LAB115:    memcpy(t10, t46, 8);

LAB116:    t51 = (t0 + 1380);
    xsi_vlogvar_assign_value(t51, t10, 0, 0, 32);
    goto LAB43;

LAB35:    xsi_set_current_line(72, ng0);

LAB117:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB43;

LAB37:    xsi_set_current_line(75, ng0);

LAB118:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB43;

LAB39:    xsi_set_current_line(78, ng0);

LAB119:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t40 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t8 = ((char*)((ng21)));
    t9 = (t0 + 692U);
    t21 = *((char **)t9);
    memset(t54, 0, 8);
    t9 = (t54 + 4);
    t22 = (t21 + 4);
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t54) = t19;
    t20 = *((unsigned int *)t22);
    t23 = (t20 >> 7);
    t24 = (t23 & 1);
    *((unsigned int *)t9) = t24;
    xsi_vlog_mul_concat(t49, 24, 1, t8, 1U, t54, 1);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t49, 24, t40, 8);
    t39 = (t0 + 1380);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB43;

LAB44:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB46;

LAB47:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB49;

LAB50:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB52;

LAB55:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB57;

LAB59:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB58;

LAB66:    t41 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t49) = 1;
    goto LAB68;

LAB70:    xsi_set_current_line(65, ng0);
    t51 = ((char*)((ng15)));
    t52 = (t0 + 1380);
    xsi_vlogvar_assign_value(t52, t51, 0, 0, 32);
    goto LAB72;

LAB75:    t39 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(66, ng0);
    t46 = (t0 + 600U);
    t51 = *((char **)t46);
    memset(t56, 0, 8);
    t46 = (t56 + 4);
    t52 = (t51 + 4);
    t57 = *((unsigned int *)t51);
    t58 = (t57 >> 0);
    *((unsigned int *)t56) = t58;
    t59 = *((unsigned int *)t52);
    t60 = (t59 >> 0);
    *((unsigned int *)t46) = t60;
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & 2147483647U);
    t62 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t62 & 2147483647U);
    t64 = (t0 + 692U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 0);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 0);
    *((unsigned int *)t64) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 2147483647U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 2147483647U);
    memset(t73, 0, 8);
    t74 = (t56 + 4);
    if (*((unsigned int *)t74) != 0)
        goto LAB81;

LAB80:    t75 = (t63 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t56) < *((unsigned int *)t63))
        goto LAB82;

LAB83:    memset(t55, 0, 8);
    t77 = (t73 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t77) != 0)
        goto LAB87;

LAB88:    t84 = (t55 + 4);
    t85 = *((unsigned int *)t55);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB89;

LAB90:    t89 = *((unsigned int *)t55);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t84) > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t55) > 0)
        goto LAB95;

LAB96:    memcpy(t54, t93, 8);

LAB97:    t94 = (t0 + 1380);
    xsi_vlogvar_assign_value(t94, t54, 0, 0, 32);
    goto LAB79;

LAB81:    t76 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB83;

LAB82:    *((unsigned int *)t73) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t55) = 1;
    goto LAB88;

LAB87:    t83 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB88;

LAB89:    t88 = ((char*)((ng15)));
    goto LAB90;

LAB91:    t93 = ((char*)((ng16)));
    goto LAB92;

LAB93:    xsi_vlog_unsigned_bit_combine(t54, 32, t88, 32, t93, 32);
    goto LAB97;

LAB95:    memcpy(t54, t88, 8);
    goto LAB97;

LAB100:    t9 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t49) = 1;
    goto LAB102;

LAB104:    *((unsigned int *)t40) = 1;
    goto LAB107;

LAB106:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB107;

LAB108:    t41 = ((char*)((ng15)));
    goto LAB109;

LAB110:    t46 = ((char*)((ng16)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t46, 32);
    goto LAB116;

LAB114:    memcpy(t10, t41, 8);
    goto LAB116;

}

static void Cont_85_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2480);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2436);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002858640672_0886308060_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_85_1};
	xsi_register_didat("work_m_00000000002858640672_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002858640672_0886308060.didat");
	xsi_register_executes(pe);
}
