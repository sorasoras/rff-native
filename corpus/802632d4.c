#include "tc_rt.h"

void fn_802632d4(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = ((param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if ((rd32(r31 + 0xcu) & 3u) != 0u || (rd32(r31 + 0xcu) & 4u) == 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr32(r31 + 4u, (u32)param_5);
        if ((u32)param_5 != 0u) {
            r3 = (param_1 * 0x14u) - 0x33000000u;
            wr32(r3 + 0x6800u, (rd32(r3 + 0x6800u) & 0x7f5u) | 8u);
            r0 = ((param_1 << 2u) & 0xfffffffcu) - param_1;
            a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x200000u >> (r0 & 0x1fu));
            (void)tc_call(0x8022c6c0u, &a);
        }
        wr32(r31 + 0xcu, rd32(r31 + 0xcu) | 1u);
        r3 = (param_1 * 0x14u) - 0x33000000u;
        wr32(r3 + 0x6804u, param_2 & 0xffffffe0u);
        wr32(r3 + 0x6808u, param_3);
        wr32(r3 + 0x680cu, (((u32)param_4 << 2u) & 0xfffffffcu) | 3u);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
