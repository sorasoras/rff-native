#include "tc_rt.h"

u32 fn_800d2770(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x20u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 1u;
        a.r[2] = rd32((u32)param_1 + 0x2cu);
        (void)tc_call(0x800ca250u, &a);
    } else {
        r4 = rd32((u32)param_1 + 0x24u);
        if (r4 != 0u) {
            r3 = rd32((u32)param_1 + 0x2cu);
            if (rd32(r4 + 0x130u) == 0u && rd32(r4 + 0x134u) == 0u) {
                wr32(r4 + 0x138u, 1u);
                wr32(r4 + 0x13cu, r3);
                if (r3 == 2u) {
                    wr32(r4 + 0x138u, 0u);
                }
                r0 = rd32(r4 + 0x124u);
                if (r0 == 1u) {
                    if (rd32(r4 + 0x13cu) == 0u) {
                        return 1u;
                    }
                    wr32(r4 + 0x138u, 0u);
                } else {
                    if (r0 == 2u && rd32(r4 + 0x13cu) != 1u) {
                        wr32(r4 + 0x138u, 0u);
                    }
                }
            }
        }
    }
    return 1u;
}
