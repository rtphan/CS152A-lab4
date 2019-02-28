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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CS152A-lab4/clock_divider.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};



static void Always_67_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t19[8];
    char t20[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7616);
    *((int *)t2) = 1;
    t3 = (t0 + 6088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 4984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = (t0 + 2984U);
    t18 = *((char **)t17);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t18, 1, t8, 1);
    t17 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t17, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t9 = (t0 + 2664U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t10, 1, t8, 1);
    t9 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    t9 = (t0 + 608);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t10, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t8, 32, t9, 32);
    memset(t20, 0, 8);
    t17 = (t5 + 4);
    t18 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB9;

LAB6:    if (t24 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t20) = 1;

LAB9:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(75, ng0);

LAB20:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 31, t6, 32);
    t7 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 31, 0LL);

LAB12:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    t9 = (t0 + 744);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t10, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t8, 32, t9, 32);
    memset(t20, 0, 8);
    t17 = (t5 + 4);
    t18 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB24;

LAB21:    if (t24 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t20) = 1;

LAB24:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(83, ng0);

LAB35:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 31, t6, 32);
    t7 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 31, 0LL);

LAB27:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    t9 = (t0 + 880);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t10, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t8, 32, t9, 32);
    memset(t20, 0, 8);
    t17 = (t5 + 4);
    t18 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB39;

LAB36:    if (t24 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t20) = 1;

LAB39:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(91, ng0);

LAB50:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 31, t6, 32);
    t7 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 31, 0LL);

LAB42:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    t9 = (t0 + 1016);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t10, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t8, 32, t9, 32);
    memset(t20, 0, 8);
    t17 = (t5 + 4);
    t18 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB54;

LAB51:    if (t24 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t20) = 1;

LAB54:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(99, ng0);

LAB65:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 31, t6, 32);
    t7 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 31, 0LL);

LAB57:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    t9 = (t0 + 1152);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t10, 32);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 32, t4, 32);
    t9 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t8, 32, t9, 32);
    memset(t20, 0, 8);
    t17 = (t5 + 4);
    t18 = (t19 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t19);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB69;

LAB66:    if (t24 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t20) = 1;

LAB69:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(107, ng0);

LAB80:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 31, t6, 32);
    t7 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 31, 0LL);

LAB72:    goto LAB2;

LAB8:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t35 = (t0 + 3384);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t38) == 0)
        goto LAB14;

LAB16:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB17:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB19;

LAB18:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t55 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t55, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t34) = 1;
    goto LAB17;

LAB19:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB18;

LAB23:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(79, ng0);

LAB28:    xsi_set_current_line(80, ng0);
    t35 = (t0 + 3544);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t38) == 0)
        goto LAB29;

LAB31:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB32:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB34;

LAB33:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t55 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t55, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB27;

LAB29:    *((unsigned int *)t34) = 1;
    goto LAB32;

LAB34:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB33;

LAB38:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(87, ng0);

LAB43:    xsi_set_current_line(88, ng0);
    t35 = (t0 + 3704);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t38) == 0)
        goto LAB44;

LAB46:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB47:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB49;

LAB48:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t55 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t55, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB42;

LAB44:    *((unsigned int *)t34) = 1;
    goto LAB47;

LAB49:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB48;

LAB53:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(95, ng0);

LAB58:    xsi_set_current_line(96, ng0);
    t35 = (t0 + 3864);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t38) == 0)
        goto LAB59;

LAB61:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB62:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB64;

LAB63:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t55 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t55, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB57;

LAB59:    *((unsigned int *)t34) = 1;
    goto LAB62;

LAB64:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB63;

LAB68:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(103, ng0);

LAB73:    xsi_set_current_line(104, ng0);
    t35 = (t0 + 4024);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB77;

LAB75:    if (*((unsigned int *)t38) == 0)
        goto LAB74;

LAB76:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;

LAB77:    t45 = (t34 + 4);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t37);
    t48 = (~(t47));
    *((unsigned int *)t34) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB79;

LAB78:    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t55 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t55, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 31, 0LL);
    goto LAB72;

LAB74:    *((unsigned int *)t34) = 1;
    goto LAB77;

LAB79:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t34) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB78;

}

static void Cont_112_1(char *t0)
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

LAB0:    t1 = (t0 + 6304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 7632);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_113_2(char *t0)
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

LAB0:    t1 = (t0 + 6552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 7648);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_114_3(char *t0)
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

LAB0:    t1 = (t0 + 6800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7904);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 7664);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_115_4(char *t0)
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

LAB0:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7968);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 7680);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_116_5(char *t0)
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

LAB0:    t1 = (t0 + 7296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 7696);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_10849284138665537701_0968957248_init()
{
	static char *pe[] = {(void *)Always_67_0,(void *)Cont_112_1,(void *)Cont_113_2,(void *)Cont_114_3,(void *)Cont_115_4,(void *)Cont_116_5};
	xsi_register_didat("work_m_10849284138665537701_0968957248", "isim/clock_divider_tb_isim_beh.exe.sim/work/m_10849284138665537701_0968957248.didat");
	xsi_register_executes(pe);
}
