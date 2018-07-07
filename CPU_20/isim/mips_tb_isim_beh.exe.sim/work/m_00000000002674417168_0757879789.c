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
static const char *ng0 = "E:/Xilinx/workspace/CPU_20/NPC.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {14, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3028);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2952);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 3064);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 15);
    t25 = (t0 + 2960);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_38_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 67108863U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 67108863U);
    t12 = (t0 + 3100);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 67108863U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 25);
    t25 = (t0 + 2968);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_39_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3136);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2976);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_41_4(char *t0)
{
    char t6[8];
    char t37[8];
    char t38[8];
    char t41[8];
    char t44[8];
    char t52[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;

LAB0:    t1 = (t0 + 2756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2984);
    *((int *)t2) = 1;
    t3 = (t0 + 2784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB22:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    memset(t37, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t8) != 0)
        goto LAB55;

LAB56:    t22 = (t37 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (!(t30));
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB57;

LAB58:    memcpy(t44, t37, 8);

LAB59:    t89 = (t44 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t44);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB71;

LAB72:
LAB73:
LAB42:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t28 = (t0 + 968U);
    t29 = *((char **)t28);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(43, ng0);

LAB17:    xsi_set_current_line(44, ng0);
    t35 = (t0 + 600U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    t39 = (t0 + 1244U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t38, 16, 16, 1U, t40, 16);
    t39 = ((char*)((ng4)));
    t42 = (t0 + 1244U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t42 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t42) = t51;
    xsi_vlog_mul_concat(t41, 14, 1, t39, 1U, t44, 1);
    xsi_vlogtype_concat(t37, 32, 32, 3U, t41, 14, t38, 16, t35, 2);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t36, 32, t37, 32);
    t53 = (t0 + 1656);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 32);
    goto LAB16;

LAB21:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(50, ng0);

LAB26:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 968U);
    t22 = *((char **)t21);
    memset(t37, 0, 8);
    t21 = (t22 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t21) == 0)
        goto LAB27;

LAB29:    t28 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t28) = 1;

LAB30:    t29 = (t37 + 4);
    t46 = *((unsigned int *)t29);
    t47 = (~(t46));
    t48 = *((unsigned int *)t37);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(54, ng0);

LAB35:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB33:    goto LAB25;

LAB27:    *((unsigned int *)t37) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(51, ng0);

LAB34:    xsi_set_current_line(52, ng0);
    t35 = (t0 + 600U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    t39 = (t0 + 1244U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t41, 16, 16, 1U, t40, 16);
    t39 = ((char*)((ng4)));
    t42 = (t0 + 1244U);
    t43 = *((char **)t42);
    memset(t52, 0, 8);
    t42 = (t52 + 4);
    t45 = (t43 + 4);
    t51 = *((unsigned int *)t43);
    t54 = (t51 >> 15);
    t55 = (t54 & 1);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t45);
    t57 = (t56 >> 15);
    t58 = (t57 & 1);
    *((unsigned int *)t42) = t58;
    xsi_vlog_mul_concat(t44, 14, 1, t39, 1U, t52, 1);
    xsi_vlogtype_concat(t38, 32, 32, 3U, t44, 14, t41, 16, t35, 2);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t36, 32, t38, 32);
    t53 = (t0 + 1656);
    xsi_vlogvar_assign_value(t53, t59, 0, 0, 32);
    goto LAB33;

LAB38:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t21 = (t0 + 1060U);
    t22 = *((char **)t21);
    t21 = (t22 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(62, ng0);

LAB48:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB46:    goto LAB42;

LAB44:    xsi_set_current_line(59, ng0);

LAB47:    xsi_set_current_line(60, ng0);
    t28 = (t0 + 600U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    t35 = (t0 + 1244U);
    t36 = *((char **)t35);
    xsi_vlogtype_concat(t38, 16, 16, 1U, t36, 16);
    t35 = ((char*)((ng4)));
    t39 = (t0 + 1244U);
    t40 = *((char **)t39);
    memset(t44, 0, 8);
    t39 = (t44 + 4);
    t42 = (t40 + 4);
    t46 = *((unsigned int *)t40);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t42);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t39) = t51;
    xsi_vlog_mul_concat(t41, 14, 1, t35, 1U, t44, 1);
    xsi_vlogtype_concat(t37, 32, 32, 3U, t41, 14, t38, 16, t28, 2);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t29, 32, t37, 32);
    t43 = (t0 + 1656);
    xsi_vlogvar_assign_value(t43, t52, 0, 0, 32);
    goto LAB46;

LAB51:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t37) = 1;
    goto LAB56;

LAB55:    t21 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t46 = *((unsigned int *)t28);
    t47 = (t34 ^ t46);
    t48 = *((unsigned int *)t35);
    t49 = *((unsigned int *)t36);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t54 = *((unsigned int *)t35);
    t55 = *((unsigned int *)t36);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t51 & t57);
    if (t58 != 0)
        goto LAB63;

LAB60:    if (t56 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t38) = 1;

LAB63:    memset(t41, 0, 8);
    t40 = (t38 + 4);
    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t38);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t40) != 0)
        goto LAB66;

LAB67:    t65 = *((unsigned int *)t37);
    t66 = *((unsigned int *)t41);
    t67 = (t65 | t66);
    *((unsigned int *)t44) = t67;
    t43 = (t37 + 4);
    t45 = (t41 + 4);
    t53 = (t44 + 4);
    t68 = *((unsigned int *)t43);
    t69 = *((unsigned int *)t45);
    t70 = (t68 | t69);
    *((unsigned int *)t53) = t70;
    t71 = *((unsigned int *)t53);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB62:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t41) = 1;
    goto LAB67;

LAB66:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB67;

LAB68:    t73 = *((unsigned int *)t44);
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t44) = (t73 | t74);
    t75 = (t37 + 4);
    t76 = (t41 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t37);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t41);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t87 & t85);
    t88 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t88 & t86);
    goto LAB70;

LAB71:    xsi_set_current_line(66, ng0);
    t95 = ((char*)((ng3)));
    t96 = (t0 + 1336U);
    t97 = *((char **)t96);
    t96 = (t0 + 1428U);
    t98 = *((char **)t96);
    memset(t59, 0, 8);
    t96 = (t59 + 4);
    t99 = (t98 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (t100 >> 28);
    *((unsigned int *)t59) = t101;
    t102 = *((unsigned int *)t99);
    t103 = (t102 >> 28);
    *((unsigned int *)t96) = t103;
    t104 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t104 & 15U);
    t105 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t105 & 15U);
    xsi_vlogtype_concat(t52, 32, 32, 3U, t59, 4, t97, 26, t95, 2);
    t106 = (t0 + 1656);
    xsi_vlogvar_assign_value(t106, t52, 0, 0, 32);
    goto LAB73;

}


extern void work_m_00000000002674417168_0757879789_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Cont_38_2,(void *)Cont_39_3,(void *)Always_41_4};
	xsi_register_didat("work_m_00000000002674417168_0757879789", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002674417168_0757879789.didat");
	xsi_register_executes(pe);
}
