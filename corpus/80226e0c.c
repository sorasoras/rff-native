#include "tc_rt.h"

u32 fn_80226e0c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r31 = rd32(0x80571490u);
        if (r31 == 0u) {
            r30 = 0u;
        } else {
            r30 = rd32(r31 + 0x14u);
        }
        while (r31 != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x80239a78u, &a);
            if (r3 == 0u) {
                a.r[0] = r31;
                (void)tc_call(0x80226a70u, &a);
            }
            r31 = r30;
            if (r30 == 0u) {
                r30 = 0u;
            } else {
                r30 = rd32(r30 + 0x14u);
            }
        }
    }
    return 1u;
}
