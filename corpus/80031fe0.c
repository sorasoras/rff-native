#include "tc_rt.h"

void fn_80031fe0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r0 = rd32((u32)param_1 + 0xcu);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r0;
        }
        r5 = rd32((u32)param_1 + 0x10u);
        wr32((u32)param_1 + 0xcu, r0);
        if (r5 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r5;
        }
        wr32((u32)param_1 + 0x10u, r0);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80034a78u, &a);
        wr32((u32)param_1 + 0x14u, r3);
    }
    return;
}
