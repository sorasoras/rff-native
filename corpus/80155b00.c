#include "tc_rt.h"

u32 fn_80155b00(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = 0u;
    if (rd32(0x805706e8u) == 0u) {
        a.r[0] = 0x80471ed0u;
        a.r[1] = 0u;
        r3 = tc_call(0x80091b10u, &a);
        if (r3 != 0u) {
            r29 = 1u;
        }
    }
    r28 = 0u;
    do {
        r27 = 0u;
        do {
            if (r29 == 0u) {
                r6 = rd32(param_2);
                r4 = rd32(param_2 + 4u);
                a.r[0] = param_1;
                a.r[1] = r28 + (((r6 << 2u) & 0xfffffffcu) - r6);
                a.r[2] = r27 + (((r4 << 2u) & 0xfffffffcu) - r4);
                r3 = tc_call(0x80155608u, &a);
                if (r3 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            } else {
                r6 = rd32(param_2);
                r4 = rd32(param_2 + 4u);
                a.r[0] = param_1;
                a.r[1] = r28 + (((r6 << 2u) & 0xfffffffcu) - r6);
                a.r[2] = r27 + (((r4 << 2u) & 0xfffffffcu) - r4);
                r3 = tc_call(0x801556d4u, &a);
                if (r3 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
            r27 = r27 + 1u;
        } while ((s32)r27 < 3);
        r28 = r28 + 1u;
    } while ((s32)r28 < 3);
    r3 = 0u;
    return r3;
}
