#include "tc_rt.h"

void fn_80155d40(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_3;
    a.r[1] = 0u;
    a.r[2] = 0x4cu;
    (void)tc_call(0x8000443cu, &a);
    r31 = 0u;
    if (rd32(0x805706e8u) == 0u) {
        a.r[0] = 0x80471ed0u;
        a.r[1] = 0u;
        r3 = tc_call(0x80091b10u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    r30 = 0u;
    do {
        r29 = 0u;
        do {
            if (r31 == 0u) {
                r6 = rd32(param_2);
                r4 = rd32(param_2 + 4u);
                a.r[0] = param_1;
                a.r[1] = r30 + (((r6 << 2u) & 0xfffffffcu) - r6);
                a.r[2] = r29 + (((r4 << 2u) & 0xfffffffcu) - r4);
                r3 = tc_call(0x80155608u, &a);
                wr32(param_3 + ((rd32(param_3) << 2u) & 0xfffffffcu) + 0x28u, r3);
            } else {
                r6 = rd32(param_2);
                r4 = rd32(param_2 + 4u);
                a.r[0] = param_1;
                a.r[1] = r30 + (((r6 << 2u) & 0xfffffffcu) - r6);
                a.r[2] = r29 + (((r4 << 2u) & 0xfffffffcu) - r4);
                r3 = tc_call(0x801556d4u, &a);
                wr32(param_3 + ((rd32(param_3) << 2u) & 0xfffffffcu) + 4u, r3);
                r4 = param_3 + ((rd32(param_3) << 2u) & 0xfffffffcu);
                r3 = rd32(r4 + 4u);
                if (r3 != 0u) {
                    wr32(r4 + 0x28u, rd32(r3));
                }
            }
            r4 = rd32(param_3);
            if (rd32(param_3 + ((r4 << 2u) & 0xfffffffcu) + 0x28u) != 0u) {
                wr32(param_3, r4 + 1u);
            }
            r29 = r29 + 1u;
        } while ((s32)r29 < 3);
        r30 = r30 + 1u;
    } while ((s32)r30 < 3);
    return;
}
