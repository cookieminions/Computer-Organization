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
static const char *ng0 = "E:/Xilinx/workspace/CPU_50/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {0, 0};



static void Always_29_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t11[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t10, 16);
    t9 = ((char*)((ng2)));
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    xsi_vlog_mul_concat(t11, 16, 1, t9, 1U, t14, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t11, 16, t8, 16);
    t22 = (t0 + 1012);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 600U);
    t9 = *((char **)t4);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t9, 16);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t4, 16);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t3, 16, t8, 16);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB15;

}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 1884);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000377251981_1785967555_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_38_1};
	xsi_register_didat("work_m_00000000000377251981_1785967555", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000377251981_1785967555.didat");
	xsi_register_executes(pe);
}
