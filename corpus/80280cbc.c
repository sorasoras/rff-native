#include "tc_rt.h"

void fn_80280cbc(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = 0u;
    r31 = rd32(((param_1 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r3 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r3 + r7, 0u);
        r6 = r3 + r7;
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r3 + r7;
        wr8(r3 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r3 + r7;
        wr8(r3 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r3 + r7;
        wr8(r3 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r3 + r7;
        wr8(r3 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r3 + r7;
        wr8(r3 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr16(r3, (u16)((((u32)rd8((u32)param_2 + 1u) & 0xffff00ffu) | (((u32)rd8((u32)param_2 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    if (rd32(r31 + 0x8b8u) <= 1u) {
        wr8(r3 + 0x29u, 0u);
    } else {
        wr8(r3 + 0x29u, 0xfcu);
    }
    wr8(r3 + 0x28u, rd8(r31 + 0x8c1u));
    wr32(r31 + 0x848u, ((u32)rd8((u32)param_2 + 1u) >> 7u) & 1u);
    wr16(r3 + 2u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 3u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 1u) >> 5u) & 3u)) - (u32)(s16)rd16(r31 + 0x874u)));
    wr16(r3 + 4u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 4u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)(s16)(((u32)rd8((u32)param_2 + 2u) >> 4u) & 2u)) - (u32)(s16)rd16(r31 + 0x876u)));
    wr16(r3 + 6u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 5u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)(s16)(((u32)rd8((u32)param_2 + 2u) >> 5u) & 2u)) - (u32)(s16)rd16(r31 + 0x878u)));
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(r31 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
