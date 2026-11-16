#include "tc_rt.h"

void fn_802aaff8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    r6 = 1u;
    r7 = 1u;
    r8 = 1u;
    if ((u32)rd8(param_2 + 2u) != 0u) {
        r0 = (u32)rd16(param_2 + 4u);
        if (r0 < 0x30u) {
            r6 = 0u;
            wr16(param_2 + 4u, 0x30u);
        } else {
            wr16((u32)param_1 + 0x3au, (u16)r0);
            if (r0 > 0x69bu) {
                wr16(param_2 + 4u, 0x69bu);
                wr16((u32)param_1 + 0x3au, 0x69bu);
            }
        }
    }
    if ((u32)rd8(param_2 + 0x20u) != 0u && (u32)rd16(param_2 + 0x22u) == 0u) {
        r8 = 0u;
        wr16(param_2 + 0x22u, 0xffffu);
    }
    if ((u32)rd8(param_2 + 6u) != 0u) {
        if ((u32)rd8(param_2 + 9u) > 2u) {
            r7 = 0u;
            wr8(param_2 + 9u, 1u);
        } else {
            r0 = rd32(param_2 + 0xcu);
            wr32((u32)param_1 + 0x40u, rd32(param_2 + 8u));
            wr32((u32)param_1 + 0x44u, r0);
            r0 = rd32(param_2 + 0x14u);
            wr32((u32)param_1 + 0x48u, rd32(param_2 + 0x10u));
            wr32((u32)param_1 + 0x4cu, r0);
            r0 = rd32(param_2 + 0x1cu);
            wr32((u32)param_1 + 0x50u, rd32(param_2 + 0x18u));
            wr32((u32)param_1 + 0x54u, r0);
        }
    }
    r3 = 0u;
    r0 = 0u;
    if (r6 != 0u && r8 != 0u && r7 != 0u) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        return;
    }
    wr16(param_2, 1u);
    if (r6 != 0u) {
        wr8(param_2 + 2u, 0u);
    }
    if (r8 != 0u) {
        wr8(param_2 + 0x20u, 0u);
    }
    if (r7 != 0u) {
        wr8(param_2 + 6u, 0u);
    }
    wr8(param_2 + 0x24u, 0u);
    return;
}
