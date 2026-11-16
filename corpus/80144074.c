#include "tc_rt.h"

void fn_80144074(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1 + 0xcu);
    wr32(param_1 + 0x4d4u, 0u);
    wr32(param_1 + 0x564u, 0u);
    wr32(param_1 + 0x5f4u, 0u);
    wr32(param_1 + 8u, 3u);
    if ((s32)r5 <= 100) {
        r6 = rd32(param_1);
        if ((s32)r5 >= (s32)(0x64u - rd32(r6 + 0x5cu))) {
            r0 = rd32(r6 + 0x2cu);
            r4 = rd32(r6 + 0x30u);
            if ((s32)r0 >= (s32)r4) {
                r4 = r0;
            }
            r0 = r4 + 2u;
            r4 = 0xau;
            if ((s32)r0 <= 10) {
                r4 = r0;
            }
            wr32(r6 + 0x2cu, r4);
            wr32(rd32(param_1) + 0x48u, 4u);
            a.r[0] = param_1 + 0x10u;
            (void)tc_call(0x801455ccu, &a);
            return;
        }
    }
    r6 = rd32(param_1);
    if ((s32)r5 < (s32)(0x64u - rd32(r6 + 0x5cu) - rd32(r6 + 0x58u)) || rd32(r6 + 0x40u) != 0u) {
        wr32(r6 + 0x48u, 6u);
    } else {
        wr32(r6 + 0x48u, 5u);
    }
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x801455ccu, &a);
    return;
}
