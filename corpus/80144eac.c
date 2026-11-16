#include "tc_rt.h"

s32 fn_80144eac(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x3f4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        a.r[0] = (u32)param_1 + 0x94u;
        a.r[1] = 0x80142ef8u;
        a.r[2] = 0x90u;
        a.r[3] = 6u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
