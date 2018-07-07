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
static const char *ng0 = "E:/Xilinx/workspace/CPU_50/Mult_Div.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static int ng8[] = {5, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Cont_48_1(char *t0)
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

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3412);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_49_2(char *t0)
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

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3516);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3420);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_50_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3552);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3428);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_52_4(char *t0)
{
    char t14[16];
    char t15[16];
    char t16[16];
    char t17[8];
    char t32[8];
    char t35[8];
    char t37[8];
    char t38[16];
    char t39[16];
    char t40[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t36;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3436);
    *((int *)t2) = 1;
    t3 = (t0 + 3244);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(83, ng0);

LAB45:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);

LAB46:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB49;

LAB50:
LAB51:
LAB12:
LAB8:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2116);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t25 = (t11 + 4);
    t26 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t25);
    t10 = *((unsigned int *)t26);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t25);
    t21 = *((unsigned int *)t26);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB55;

LAB52:    if (t22 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t17) = 1;

LAB55:    t34 = (t17 + 4);
    t27 = *((unsigned int *)t34);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);

LAB13:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t14, 64, t5, 32);
    t4 = (t0 + 692U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t15, 64, t11, 32);
    xsi_vlog_signed_multiply(t16, 64, t14, 64, t15, 64);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t16, 32, 0, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t11 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t14, 64, t5, 32, t11, 32);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t14, 32, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(66, ng0);

LAB26:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB28;

LAB27:    if (t22 != 0)
        goto LAB29;

LAB30:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB25;

LAB21:    xsi_set_current_line(72, ng0);

LAB35:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB37;

LAB36:    if (t22 != 0)
        goto LAB38;

LAB39:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB25;

LAB23:    xsi_set_current_line(78, ng0);

LAB44:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1840);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1748);
    t25 = (t12 + 36U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t15, 64, 64, 2U, t26, 32, t11, 32);
    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    xsi_vlogtype_sign_extend(t16, 64, t34, 32);
    t33 = (t0 + 692U);
    t36 = *((char **)t33);
    xsi_vlogtype_sign_extend(t38, 64, t36, 32);
    xsi_vlog_signed_multiply(t39, 64, t16, 64, t38, 64);
    xsi_vlog_signed_add(t40, 64, t15, 64, t39, 64);
    t33 = (t0 + 2024);
    xsi_vlogvar_assign_value(t33, t40, 0, 0, 32);
    t41 = (t0 + 1932);
    xsi_vlogvar_assign_value(t41, t40, 32, 0, 32);
    goto LAB25;

LAB28:    *((unsigned int *)t17) = 1;
    goto LAB30;

LAB29:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);

LAB34:    xsi_set_current_line(68, ng0);
    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    t33 = (t0 + 692U);
    t36 = *((char **)t33);
    memset(t37, 0, 8);
    xsi_vlog_signed_mod(t37, 32, t34, 32, t36, 32);
    t33 = (t0 + 1932);
    xsi_vlogvar_assign_value(t33, t37, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    memset(t35, 0, 8);
    xsi_vlog_signed_divide(t35, 32, t4, 32, t5, 32);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t35, 0, 0, 32);
    goto LAB33;

LAB37:    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB38:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(73, ng0);

LAB43:    xsi_set_current_line(74, ng0);
    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    t33 = (t0 + 692U);
    t36 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_mod(t32, 32, t34, 32, t36, 32);
    t33 = (t0 + 1932);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t4, 32, t5, 32);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 32);
    goto LAB42;

LAB47:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 600U);
    t11 = *((char **)t5);
    t5 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 32, 0LL);
    goto LAB51;

LAB49:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 600U);
    t11 = *((char **)t5);
    t5 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 32, 0LL);
    goto LAB51;

LAB54:    t33 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(89, ng0);

LAB59:    xsi_set_current_line(90, ng0);
    t36 = (t0 + 1656);
    t41 = (t36 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t42, 4, t43, 32);
    t44 = (t0 + 1656);
    xsi_vlogvar_assign_value(t44, t32, 0, 0, 4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1656);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    memset(t17, 0, 8);
    t25 = (t11 + 4);
    t26 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t25);
    t10 = *((unsigned int *)t26);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t25);
    t21 = *((unsigned int *)t26);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB63;

LAB60:    if (t22 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t17) = 1;

LAB63:    t34 = (t17 + 4);
    t27 = *((unsigned int *)t34);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB64;

LAB65:
LAB66:    goto LAB58;

LAB62:    t33 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(91, ng0);

LAB67:    xsi_set_current_line(92, ng0);
    t36 = ((char*)((ng1)));
    t41 = (t0 + 2116);
    xsi_vlogvar_assign_value(t41, t36, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1656);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1932);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2024);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB66;

}


extern void work_m_00000000003395144423_1173193764_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Cont_48_1,(void *)Cont_49_2,(void *)Cont_50_3,(void *)Always_52_4};
	xsi_register_didat("work_m_00000000003395144423_1173193764", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003395144423_1173193764.didat");
	xsi_register_executes(pe);
}
