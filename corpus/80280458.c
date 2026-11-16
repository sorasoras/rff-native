#include "tc_rt.h"

void fn_80280458(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    (void)tc_call(0x80284b24u, &a);
    r30 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r5 = 0u;
    r28 = r30 + ((u32)rd8(r30 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r28 + r5, 0u);
        r4 = r28 + r5;
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r28 + r5;
        wr8(r28 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r28 + r5;
        wr8(r28 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r28 + r5;
        wr8(r28 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r28 + r5;
        wr8(r28 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r28 + r5;
        wr8(r28 + r5, 0u);
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
    wr16(r28, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    r25 = (u32)rd8(param_r4 + 3u);
    r27 = (u32)rd8(param_r4 + 4u);
    f1 = tc_callf(0x80284b24u, &a);
    wr8(r28 + 0x29u, 0xfeu);
    wr8(r28 + 0x28u, rd8(r30 + 0x8c1u));
    r28 = ~(0u - ((ppc_cntlzw(r27) >> 5u) & 1u)) & 0xfffffffdu;
    if (r27 != 0u) {
        f1 = tc_callf(0x80284b24u, &a);
    }
    if ((u32)rd8(r30 + 0x987u) == r25) {
        r12 = rd32(r30 + 0x89cu);
        if (r12 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = r28;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            wr32(r30 + 0x89cu, 0u);
        }
        wr32(r30 + 0x8bcu, 0u);
    } else {
        (void)tc_call(0x80284b24u, &a);
    }
    wr8(r30 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r30 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
