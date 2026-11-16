#include "tc_rt.h"

void fn_80057c80(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + ((u32)param_2 * 0xcu);
    if ((rd32(r31 + 0x1cu) + 0x10000u) != 0xffffu) {
        r3 = rd32(r31 + 0x20u) - 1u;
        r0 = r3 & ~(u32)((s32)r3 >> 31);
        wr32(r31 + 0x20u, r0);
        if (r0 == 0u) {
            if (rd32(r31 + 0x24u) == 1u) {
                a.r[0] = rd32(r31 + 0x1cu);
                (void)tc_call(0x8004bc54u, &a);
                wr32(r31 + 0x1cu, 0xffffffffu);
                wr32(r31 + 0x20u, 0u);
                wr32(r31 + 0x24u, 1u);
                return;
            }
            if ((u32)param_3 == 0u) {
                return;
            }
            a.r[0] = rd32(r31 + 0x1cu);
            (void)tc_call(0x8004bc54u, &a);
            wr32(r31 + 0x1cu, 0xffffffffu);
            wr32(r31 + 0x20u, 0u);
            wr32(r31 + 0x24u, 1u);
        } else {
            if ((u32)param_3 != 0u) {
                a.r[0] = rd32(r31 + 0x1cu);
                (void)tc_call(0x8004bc54u, &a);
                wr32(r31 + 0x1cu, 0xffffffffu);
                wr32(r31 + 0x20u, 0u);
                wr32(r31 + 0x24u, 1u);
            }
        }
    }
    return;
}
