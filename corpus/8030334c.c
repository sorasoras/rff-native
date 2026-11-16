#include "tc_rt.h"

s32 fn_8030334c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 8u, 0x8039d570u);
        wr32((u32)param_1 + 0xcu, 0x8039d584u);
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x802f86b4u, &a);
        if (((u32)param_1 + 0x90u) != 0u) {
            r3 = (u32)param_1 + 0x94u;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802dea2cu, &a);
            }
        }
        if (((u32)param_1 + 0x68u) != 0u) {
            r3 = (u32)param_1 + 0x6cu;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802dea2cu, &a);
            }
        }
        if (((u32)param_1 + 0x40u) != 0u) {
            r3 = (u32)param_1 + 0x44u;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802dea2cu, &a);
            }
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
