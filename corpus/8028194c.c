#include "tc_rt.h"

void fn_8028194c(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r31 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r5 = 0u;
    r30 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r30 + r5, 0u);
        r4 = r30 + r5;
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr16(r30, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    wr8(r30 + 0x29u, 0xfcu);
    wr8(r30 + 0x28u, rd8(r31 + 0x8c1u));
    wr32(r31 + 0x848u, ((u32)rd8(param_r4 + 1u) >> 7u) & 1u);
    a.r[0] = 0x8050f098u;
    a.r[1] = param_r4 + 3u;
    a.r[2] = 0x13u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_r3;
    a.r[1] = param_r4 + 3u;
    a.r[2] = 0x13u;
    a.r[3] = 0u;
    (void)tc_call(0x80284864u, &a);
    if (rd32(r31 + 0x840u) != 0u) {
        a.r[0] = 0x8050f098u;
        a.r[1] = 0x8038fe08u;
        a.r[2] = 0x13u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u && (u32)(s8)rd8(r30 + 0x29u) == 0u) {
            wr8(r30 + 0x29u, 0xf9u);
        }
    }
    wr8(r31 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
