#include "tc_rt.h"

void fn_80263230(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = param_2;
    r29 = (u32)param_3;
    while (r29 != 0u) {
        r31 = 4u;
        if ((s32)r29 < 4) {
            r31 = r29;
        }
        a.r[0] = param_1;
        a.r[1] = r28;
        a.r[2] = r31;
        a.r[3] = param_4;
        a.r[4] = 0u;
        r3 = tc_call(0x80262fb4u, &a);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x802633ccu, &a);
        if (r3 == 0u) {
            return;
        }
        r28 = r28 + r31;
        r29 = r29 - r31;
    }
    return;
}
