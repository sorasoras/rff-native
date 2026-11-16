#include "tc_rt.h"

void fn_8031facc(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_4 != 0u) {
        a.r[0] = (u32)param_4;
        a.r[1] = param_3;
        r3 = tc_call(0x8031f7c0u, &a);
        if (r3 != 0u) {
            wr32(param_1, r3);
            return;
        }
    }
    a.r[0] = param_2;
    a.r[1] = 0u;
    r3 = tc_call(0x802dea10u, &a);
    r31 = r3;
    while (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = param_3;
        r3 = tc_call(0x8031f7c0u, &a);
        if (r3 != 0u) {
            wr32(param_1, r3);
            return;
        }
        a.r[0] = param_2;
        a.r[1] = r31;
        r3 = tc_call(0x802dea10u, &a);
        r31 = r3;
    }
    r3 = 0u;
    wr32(param_1, r3);
    return;
}
