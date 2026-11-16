#include "tc_rt.h"

u32 fn_802e5194(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xb4u);
    if (r5 != 0u) {
        r30 = r5 + 0xcu;
    } else {
        r30 = 0u;
    }
    if (r30 == 0u) {
        r3 = 0u;
    } else {
        r29 = 0u;
        r31 = (u32)rd16(rd32((u32)param_1 + 0xb4u) + 8u);
        while ((s32)r29 < (s32)r31) {
            r0 = rd32(r30);
            if (r0 != 0u) {
                r4 = r30 + r0;
            } else {
                r4 = 0u;
            }
            a.r[0] = param_2;
            a.r[1] = r4;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 == 0u) {
                r3 = r30;
                return r3;
            }
            r29 = r29 + 1u;
            r30 = r30 + 0xcu;
        }
        r3 = 0u;
    }
    return r3;
}
