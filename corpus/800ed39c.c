#include "tc_rt.h"

s32 fn_800ed39c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = param_3;
    if (rd32((u32)param_1 + 0xcu) != 0u) {
        if ((s32)param_3 < 0) {
            r30 = 0xd7u;
        }
        r31 = rd32((u32)param_1 + 0xcu);
        r28 = (u32)rd8((((((u32)param_2 << 2u) & 0xfffffffcu) - (u32)param_2) * 0xf4u) + (r30 + r31));
        do {
            if ((u32)param_2 == 7u || (u32)param_2 == 0x1eu || (u32)param_2 == 0x1fu) {
                r28 = (u32)rd8((((u32)rd8(((u32)param_2 * 0x38u) - 0x7fb64fcbu) + ((((u32)param_2 << 2u) & 0xfffffffcu) - (u32)param_2)) * 0xf4u) + (r30 + r31));
            } else if ((u32)param_2 == 9u || (u32)param_2 == 0xbu) {
                if ((u32)param_2 != 9u) {
                    r29 = 0x13d7u;
                } else {
                    r29 = 0x13d6u;
                }
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x800a7b68u, &a);
                if (r3 == 0u) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = r29;
                    r3 = tc_call(0x800a3168u, &a);
                    if ((s32)r3 <= 0) break;
                }
                if ((u32)param_2 != 9u) {
                    r4 = 0x80338c18u;
                } else {
                    r4 = 0x80338c00u;
                }
                if ((u32)param_2 != 9u) {
                    r0 = 6u;
                } else {
                    r0 = 5u;
                }
                r3 = 0u;
                ctr = r0;
                if ((s32)r0 > 0) {
                    do {
                        if (r30 == (u32)rd16(r4 + r3)) {
                            r3 = r4 + r3;
                            r30 = (u32)rd16(r3 + 2u);
                            break;
                        }
                        r3 = r3 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                r28 = (u32)rd8((((((u32)param_2 << 2u) & 0xfffffffcu) - (u32)param_2) * 0xf4u) + (r30 + r31));
            }
        } while (0);
        if (r28 == 0xffu) {
            r28 = 0u;
        }
        r3 = r28 & 0xffu;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
