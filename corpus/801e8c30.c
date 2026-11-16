#include "tc_rt.h"

s32 fn_801e8c30(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x1bcu;
        a.r[1] = 0x801e8bd8u;
        a.r[2] = 0x94u;
        a.r[3] = 3u;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x128u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        r3 = (u32)param_1 + 0x94u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        if ((u32)param_1 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x80079f14u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
