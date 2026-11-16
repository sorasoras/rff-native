#include "tc_rt.h"

s32 fn_8010ac30(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 8u;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8030571cu, &a);
        }
        r3 = (u32)param_1 + 4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8030571cu, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
