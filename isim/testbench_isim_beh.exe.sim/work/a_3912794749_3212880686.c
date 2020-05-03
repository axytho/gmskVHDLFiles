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
static const char *ng0 = "/users/students/r0666113/Documents/gmsk100-digital/xilinx/vhdlGroup4FirstRun/atan_cordic_full_circle.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_3912794749_3212880686_p_0(char *t0)
{
    char t9[16];
    char t12[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4824);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4888);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 4952);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8936U);
    t10 = (t0 + 2472U);
    t11 = *((char **)t10);
    t10 = (t0 + 8952U);
    t13 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t2, t1, t11, t10);
    t14 = (t9 + 12U);
    t4 = *((unsigned int *)t14);
    t5 = (1U * t4);
    t7 = (8U != t5);
    if (t7 == 1)
        goto LAB21;

LAB22:    t17 = (t0 + 5016);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5080);
    t2 = (t1 + 56U);
    t10 = *((char **)t2);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5144);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5208);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 5272);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB24:    t1 = (t0 + 4744);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 9100);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t0 + 1192U);
    t17 = *((char **)t14);
    t14 = (t0 + 8856U);
    t18 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t10, t12, t17, t14);
    t19 = (t9 + 12U);
    t16 = *((unsigned int *)t19);
    t20 = (1U * t16);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 4824);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 8U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 9108);
    t10 = (t12 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t4 = (t4 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t4;
    t11 = (t0 + 1352U);
    t13 = *((char **)t11);
    t11 = (t0 + 8872U);
    t14 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t1, t12, t13, t11);
    t17 = (t9 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    t7 = (8U != t5);
    if (t7 == 1)
        goto LAB7;

LAB8:    t18 = (t0 + 4888);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 8U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 9000U);
    t10 = (t0 + 9124);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t4 = (t4 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t4;
    t14 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t2, t1, t10, t12);
    t17 = (t9 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    t7 = (8U != t5);
    if (t7 == 1)
        goto LAB14;

LAB15:    t18 = (t0 + 4952);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 8U);
    xsi_driver_first_trans_fast_port(t18);

LAB10:    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t20, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(8U, t5, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(68, ng0);
    t10 = (t0 + 3272U);
    t11 = *((char **)t10);
    t10 = (t0 + 9000U);
    t13 = (t0 + 9116);
    t17 = (t12 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 7;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t16;
    t18 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t9, t11, t10, t13, t12);
    t19 = (t9 + 12U);
    t16 = *((unsigned int *)t19);
    t20 = (1U * t16);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    t22 = (t0 + 4952);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 8U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB10;

LAB12:    xsi_size_not_matching(8U, t20, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t5, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(80, ng0);
    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 8936U);
    t13 = (t0 + 2472U);
    t14 = *((char **)t13);
    t13 = (t0 + 8952U);
    t17 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t9, t11, t10, t14, t13);
    t18 = (t9 + 12U);
    t16 = *((unsigned int *)t18);
    t20 = (1U * t16);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB19;

LAB20:    t19 = (t0 + 5016);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t17, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5080);
    t2 = (t1 + 56U);
    t10 = *((char **)t2);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_size_not_matching(8U, t20, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t5, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(89, ng0);
    t10 = (t0 + 2952U);
    t11 = *((char **)t10);
    t21 = *((unsigned char *)t11);
    t27 = (t21 == (unsigned char)2);
    if (t27 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5144);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5208);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 9148);
    t10 = (t12 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t4 = (t4 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t4;
    t11 = (t0 + 3112U);
    t13 = *((char **)t11);
    t11 = (t0 + 8984U);
    t14 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t1, t12, t13, t11);
    t17 = (t9 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    t7 = (8U != t5);
    if (t7 == 1)
        goto LAB33;

LAB34:    t18 = (t0 + 5272);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 8U);
    xsi_driver_first_trans_fast(t18);

LAB27:    goto LAB24;

LAB26:    xsi_set_current_line(90, ng0);
    t10 = (t0 + 9132);
    t14 = (t12 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 0;
    t17 = (t14 + 4U);
    *((int *)t17) = 7;
    t17 = (t14 + 8U);
    *((int *)t17) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t16;
    t17 = (t0 + 2472U);
    t18 = *((char **)t17);
    t17 = (t0 + 8952U);
    t19 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t9, t10, t12, t18, t17);
    t22 = (t9 + 12U);
    t16 = *((unsigned int *)t22);
    t20 = (1U * t16);
    t28 = (8U != t20);
    if (t28 == 1)
        goto LAB29;

LAB30:    t23 = (t0 + 5144);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t29 = *((char **)t26);
    memcpy(t29, t19, 8U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5208);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8984U);
    t10 = (t0 + 9140);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t4 = (t4 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t4;
    t14 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t9, t2, t1, t10, t12);
    t17 = (t9 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    t7 = (8U != t5);
    if (t7 == 1)
        goto LAB31;

LAB32:    t18 = (t0 + 5272);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 8U);
    xsi_driver_first_trans_fast(t18);
    goto LAB27;

LAB29:    xsi_size_not_matching(8U, t20, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t5, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, t5, 0);
    goto LAB34;

}


extern void work_a_3912794749_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3912794749_3212880686_p_0};
	xsi_register_didat("work_a_3912794749_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3912794749_3212880686.didat");
	xsi_register_executes(pe);
}
