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
static const char *ng0 = "E:/Xilinx/workspace/CPU_50/Load_Ext.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {24, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {16, 0};
static unsigned int ng7[] = {4U, 0U};



static void Cont_29_0(char *t0)
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

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2020);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 1968);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t9[8];
    char t17[8];
    char t18[8];
    char t28[8];
    char t32[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1976);
    *((int *)t2) = 1;
    t3 = (t0 + 1800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB18:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(36, ng0);

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB20:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t9, 2, t8, 2);
    if (t16 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t2, 2);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t2, 2);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t2, 2);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB11:    xsi_set_current_line(52, ng0);

LAB34:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB35:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 2, t8, 2);
    if (t16 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB17;

LAB13:    xsi_set_current_line(68, ng0);

LAB49:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB50:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t18, 2, t8, 2);
    if (t16 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t6 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB17;

LAB15:    xsi_set_current_line(78, ng0);

LAB58:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB59:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t28, 2, t8, 2);
    if (t16 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t28, 2, t2, 2);
    if (t6 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB17;

LAB21:    xsi_set_current_line(38, ng0);

LAB30:    xsi_set_current_line(39, ng0);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 255U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 600U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 7);
    t36 = (t35 & 1);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 7);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    xsi_vlog_mul_concat(t28, 24, 1, t29, 1U, t32, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 24, t18, 8);
    t40 = (t0 + 1104);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(41, ng0);

LAB31:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t19 = (t32 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t32) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 15);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t28, 24, 1, t8, 1U, t32, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 24, t18, 8);
    t29 = (t0 + 1104);
    xsi_vlogvar_assign_value(t29, t17, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(44, ng0);

LAB32:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t19 = (t32 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 23);
    t24 = (t23 & 1);
    *((unsigned int *)t32) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 23);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t28, 24, 1, t8, 1U, t32, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 24, t18, 8);
    t29 = (t0 + 1104);
    xsi_vlogvar_assign_value(t29, t17, 0, 0, 32);
    goto LAB29;

LAB27:    xsi_set_current_line(47, ng0);

LAB33:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng3)));
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t19 = (t32 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t32) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t28, 24, 1, t8, 1U, t32, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 24, t18, 8);
    t29 = (t0 + 1104);
    xsi_vlogvar_assign_value(t29, t17, 0, 0, 32);
    goto LAB29;

LAB36:    xsi_set_current_line(54, ng0);

LAB45:    xsi_set_current_line(55, ng0);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t28, 0, 8);
    t19 = (t28 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t28) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t26 & 255U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t29 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 32, 32, 2U, t29, 24, t28, 8);
    t30 = (t0 + 1104);
    xsi_vlogvar_assign_value(t30, t18, 0, 0, 32);
    goto LAB44;

LAB38:    xsi_set_current_line(57, ng0);

LAB46:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 32, 32, 2U, t8, 24, t28, 8);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    goto LAB44;

LAB40:    xsi_set_current_line(60, ng0);

LAB47:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 32, 32, 2U, t8, 24, t28, 8);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    goto LAB44;

LAB42:    xsi_set_current_line(63, ng0);

LAB48:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t18, 32, 32, 2U, t8, 24, t28, 8);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    goto LAB44;

LAB51:    xsi_set_current_line(70, ng0);

LAB56:    xsi_set_current_line(71, ng0);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t19 = (t32 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t32) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t26 & 65535U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t29 = ((char*)((ng6)));
    t30 = (t0 + 600U);
    t31 = *((char **)t30);
    memset(t42, 0, 8);
    t30 = (t42 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 15);
    t36 = (t35 & 1);
    *((unsigned int *)t42) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t30) = t39;
    xsi_vlog_mul_concat(t41, 16, 1, t29, 1U, t42, 1);
    xsi_vlogtype_concat(t28, 32, 32, 2U, t41, 16, t32, 16);
    t40 = (t0 + 1104);
    xsi_vlogvar_assign_value(t40, t28, 0, 0, 32);
    goto LAB55;

LAB53:    xsi_set_current_line(73, ng0);

LAB57:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t32 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = ((char*)((ng6)));
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t42, 0, 8);
    t19 = (t42 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t42) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t19) = t27;
    xsi_vlog_mul_concat(t41, 16, 1, t8, 1U, t42, 1);
    xsi_vlogtype_concat(t28, 32, 32, 2U, t41, 16, t32, 16);
    t29 = (t0 + 1104);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB55;

LAB60:    xsi_set_current_line(80, ng0);

LAB65:    xsi_set_current_line(81, ng0);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t41, 0, 8);
    t19 = (t41 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t41) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t26 & 65535U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t29 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t29, 16, t41, 16);
    t30 = (t0 + 1104);
    xsi_vlogvar_assign_value(t30, t32, 0, 0, 32);
    goto LAB64;

LAB62:    xsi_set_current_line(83, ng0);

LAB66:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t41) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t8, 16, t41, 16);
    t19 = (t0 + 1104);
    xsi_vlogvar_assign_value(t19, t32, 0, 0, 32);
    goto LAB64;

}


extern void work_m_00000000002757191325_0713223021_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000002757191325_0713223021", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002757191325_0713223021.didat");
	xsi_register_executes(pe);
}
