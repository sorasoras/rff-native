#include "tc_rt.h"

void fn_80277f88(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = ((u32)param_1 << 2u) & 0xfffffffcu;
    r28 = 0xffffffffu;
    r29 = rd32(r30 - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(r29 + 0x8b8u);
    r4 = r29 + (((ppc_cntlzw((u32)rd8(r29 + 0x8c8u)) >> 5u) & 0xffu) * 0x60u);
    if ((r5 - 3u) <= 2u && (u32)rd16(r4 + 0xa0u) == 0x1c10u) {
        r28 = 1u;
    }
    if ((r5 - 6u) <= 2u) {
        if ((u32)rd16(r4 + 0xa0u) == 0x1c10u) {
            r28 = 1u;
        }
        if ((u32)(s8)rd8(r4 + 0xc9u) != 0u) {
            r28 = 0u;
        } else {
            if ((u32)rd16(r4 + 0xcau) == 0x1450u) {
                r28 = 1u;
            }
        }
    }
    if ((s32)r28 < 0) {
        wr16(r29 + 0x912u, 0u);
    } else {
        wr16(r29 + 0x912u, (u16)((u32)rd16(r29 + 0x912u) + r28));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if ((u32)rd16(r29 + 0x912u) > 0x258u) {
        r28 = rd32(r30 - 0x7faf46b0u);
        r3 = tc_call(0x8022c2b0u, &a);
        wr8(r28 + 0x911u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
