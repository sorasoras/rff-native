#include "tc_rt.h"

u32 fn_8026538c(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r5 = 0u;
    r4 = 0x80500cb0u;
    ctr = 4u;
    do {
        if (rd32(r4) == (u32)param_1) {
            wr32(((r5 << 2u) & 0xfffffffcu) - 0x7faff350u, 0u);
            r4 = 0u;
            if (rd32(0x80500cb0u) == 0u) {
                r4 = 1u;
                if (rd32(0x80500cb4u) == 0u) {
                    r4 = 2u;
                    if (rd32(0x80500cb8u) == 0u) {
                        r4 = 3u;
                        if (rd32(0x80500cbcu) == 0u) {
                            r4 = 4u;
                        }
                    }
                }
            }
            if (r4 == 4u) {
                a.r[0] = 0u;
                (void)tc_call(0x80265314u, &a);
            }
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 1u;
            return r3;
        }
        r4 = r4 + 4u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = r3;
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 0u;
    return r3;
}
