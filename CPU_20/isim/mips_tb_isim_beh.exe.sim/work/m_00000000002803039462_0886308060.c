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
static const char *ng0 = "E:/Xilinx/workspace/CPU_20/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static int ng12[] = {32, 0};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 2540);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t52 = (t0 + 2480);
    *((int *)t52) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Always_37_1(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t45[8];
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
    char *t43;
    char *t46;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2488);
    *((int *)t2) = 1;
    t3 = (t0 + 2168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(41, ng0);
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
        goto LAB28;

LAB29:
LAB30:    t39 = (t0 + 1288);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(42, ng0);
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
        goto LAB31;

LAB32:
LAB33:    t39 = (t0 + 1288);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(43, ng0);
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
        goto LAB34;

LAB35:
LAB36:    t21 = (t0 + 1288);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(44, ng0);

LAB37:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 876U);
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
    t9 = (t0 + 1288);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(47, ng0);

LAB38:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 876U);
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
    t9 = (t0 + 1288);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(50, ng0);

LAB39:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB43;

LAB40:    if (t20 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t10) = 1;

LAB43:    t21 = (t10 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB46:    goto LAB27;

LAB23:    xsi_set_current_line(54, ng0);

LAB47:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 876U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 6);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_minus(t40, 32, t3, 32, t10, 32);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 32, t4, 32, t40, 32);
    t21 = (t0 + 692U);
    t22 = *((char **)t21);
    t21 = (t0 + 876U);
    t39 = *((char **)t21);
    memset(t42, 0, 8);
    t21 = (t42 + 4);
    t43 = (t39 + 4);
    t17 = *((unsigned int *)t39);
    t18 = (t17 >> 6);
    *((unsigned int *)t42) = t18;
    t19 = *((unsigned int *)t43);
    t20 = (t19 >> 6);
    *((unsigned int *)t21) = t20;
    t23 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t23 & 31U);
    t24 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t24 & 31U);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_rshift(t44, 32, t22, 32, t42, 5);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_add(t45, 32, t41, 32, t44, 32);
    t46 = (t0 + 1288);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 32);
    goto LAB27;

LAB28:    t19 = *((unsigned int *)t10);
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
    goto LAB30;

LAB31:    t19 = *((unsigned int *)t10);
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
    goto LAB33;

LAB34:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB36;

LAB42:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(51, ng0);
    t22 = (t0 + 600U);
    t39 = *((char **)t22);
    t22 = (t0 + 1288);
    xsi_vlogvar_assign_value(t22, t39, 0, 0, 32);
    goto LAB46;

}

static void Cont_61_2(char *t0)
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

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2576);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2496);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002803039462_0886308060_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_37_1,(void *)Cont_61_2};
	xsi_register_didat("work_m_00000000002803039462_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002803039462_0886308060.didat");
	xsi_register_executes(pe);
}
