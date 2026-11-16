#include "tc_rt.h"

s32 fn_801ab578(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x1e8u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8006f3ecu, &a);
        }
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0x80066970u;
        a.r[2] = 0xe4u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
