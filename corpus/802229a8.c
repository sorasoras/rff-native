#include "tc_rt.h"

u32 fn_802229a8(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    r3 = tc_call(0x80093ad4u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)rd8((u32)param_1 + 0x204u) == 0u) {
            r3 = rd32((u32)param_1 + 0x268u);
            if (r3 != 0u) {
                wr32(r3 + 0xcu, 0u);
            }
        }
        r3 = 1u;
    }
    return r3;
}
