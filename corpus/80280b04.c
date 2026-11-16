#include "tc_rt.h"

void fn_80280b04(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = rd32(((param_1 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r8 = 0u;
    r7 = r6 + ((u32)rd8(r6 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r7 + r8, 0u);
        r5 = r7 + r8;
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        r5 = r7 + r8;
        wr8(r7 + r8, 0u);
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        r5 = r7 + r8;
        wr8(r7 + r8, 0u);
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        r5 = r7 + r8;
        wr8(r7 + r8, 0u);
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        r5 = r7 + r8;
        wr8(r7 + r8, 0u);
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        r5 = r7 + r8;
        wr8(r7 + r8, 0u);
        r8 = r8 + 8u;
        wr8(r5 + 1u, 0u);
        wr8(r5 + 2u, 0u);
        wr8(r5 + 3u, 0u);
        wr8(r5 + 4u, 0u);
        wr8(r5 + 5u, 0u);
        wr8(r5 + 6u, 0u);
        wr8(r5 + 7u, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr16(r7, (u16)((((u32)rd8((u32)param_2 + 1u) & 0xffff00ffu) | (((u32)rd8((u32)param_2 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    if (rd32(r6 + 0x8b8u) == 0u) {
        wr8(r7 + 0x29u, 0u);
    } else {
        wr8(r7 + 0x29u, 0xfcu);
    }
    wr8(r7 + 0x28u, rd8(r6 + 0x8c1u));
    wr32(r6 + 0x848u, ((u32)rd8((u32)param_2 + 1u) >> 7u) & 1u);
    wr8(r6 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r6 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
