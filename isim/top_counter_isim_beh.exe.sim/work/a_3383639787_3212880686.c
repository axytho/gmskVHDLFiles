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
static const char *ng0 = "/users/students/r0666113/Documents/gmsk100-digital/xilinx/vhdlGroup4FirstRun/difference_and_invert.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2423793367844140314_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_3383639787_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char t6[16];
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 6832U);
    t5 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t2, t4, t3, 10);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 6800U);
    t9 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t6, t8, t7, 10);
    t10 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t1, t5, t2, t9, t6);
    t11 = (t1 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (10U != t13);
    if (t14 == 1)
        goto LAB2;

LAB3:    t15 = (t0 + 3864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 10U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 6848U);
    t5 = (t0 + 6952);
    t8 = (t2 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 9;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t20 = (9 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t12;
    t9 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t1, t4, t3, t5, t2);
    t10 = (t1 + 12U);
    t12 = *((unsigned int *)t10);
    t13 = (1U * t12);
    t14 = (10U != t13);
    if (t14 == 1)
        goto LAB4;

LAB5:    t11 = (t0 + 3928);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 10U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 6848U);
    t5 = (t0 + 6962);
    t8 = (t2 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 9;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t20 = (9 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t12;
    t9 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t1, t4, t3, t5, t2);
    t10 = (t1 + 12U);
    t12 = *((unsigned int *)t10);
    t13 = (1U * t12);
    t14 = (10U != t13);
    if (t14 == 1)
        goto LAB6;

LAB7:    t11 = (t0 + 3992);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 10U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(53, ng0);
    t3 = (t0 + 992U);
    t21 = xsi_signal_has_event(t3);
    if (t21 == 1)
        goto LAB11;

LAB12:    t14 = (unsigned char)0;

LAB13:    if (t14 != 0)
        goto LAB8;

LAB10:
LAB9:    t3 = (t0 + 3784);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(10U, t13, 0);
    goto LAB3;

LAB4:    xsi_size_not_matching(10U, t13, 0);
    goto LAB5;

LAB6:    xsi_size_not_matching(10U, t13, 0);
    goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1352U);
    t7 = *((char **)t4);
    t24 = *((unsigned char *)t7);
    t25 = (t24 == (unsigned char)3);
    if (t25 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB9;

LAB11:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t22 = *((unsigned char *)t5);
    t23 = (t22 == (unsigned char)3);
    t14 = t23;
    goto LAB13;

LAB14:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4056);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 4120);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t20 = (9 - 9);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t26 = (0 + t13);
    t3 = (t4 + t26);
    t14 = *((unsigned char *)t3);
    t21 = (t14 == (unsigned char)2);
    if (t21 != 0)
        goto LAB17;

LAB19:    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t20 = (9 - 9);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t26 = (0 + t13);
    t3 = (t4 + t26);
    t14 = *((unsigned char *)t3);
    t21 = (t14 == (unsigned char)3);
    if (t21 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 6848U);
    t5 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t1, t4, t3, 8);
    t7 = (t1 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t14 = (8U != t12);
    if (t14 == 1)
        goto LAB26;

LAB27:    t8 = (t0 + 4184);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t8);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 1992U);
    t7 = *((char **)t5);
    t5 = (t0 + 6848U);
    t8 = (t0 + 6972);
    t10 = (t6 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 9;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t27 = (9 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t28;
    t11 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t2, t7, t5, t8, t6);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t1, t11, t2, 8);
    t16 = (t1 + 12U);
    t28 = *((unsigned int *)t16);
    t28 = (t28 * 1U);
    t22 = (8U != t28);
    if (t22 == 1)
        goto LAB20;

LAB21:    t17 = (t0 + 4184);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t29 = (t19 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t15, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB18;

LAB20:    xsi_size_not_matching(8U, t28, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 1992U);
    t7 = *((char **)t5);
    t5 = (t0 + 6848U);
    t8 = (t0 + 6982);
    t10 = (t6 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 9;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t27 = (9 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t28;
    t11 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t2, t7, t5, t8, t6);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(IEEE_P_1242562249, t1, t11, t2, 8);
    t16 = (t1 + 12U);
    t28 = *((unsigned int *)t16);
    t28 = (t28 * 1U);
    t22 = (8U != t28);
    if (t22 == 1)
        goto LAB24;

LAB25:    t17 = (t0 + 4184);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t29 = (t19 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t15, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB18;

LAB24:    xsi_size_not_matching(8U, t28, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t12, 0);
    goto LAB27;

}


extern void work_a_3383639787_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3383639787_3212880686_p_0};
	xsi_register_didat("work_a_3383639787_3212880686", "isim/top_counter_isim_beh.exe.sim/work/a_3383639787_3212880686.didat");
	xsi_register_executes(pe);
}
