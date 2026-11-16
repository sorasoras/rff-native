#include "tc_rt.h"

void fn_80280050(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = r3;
    r28 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r5 = 0u;
    r26 = r28 + ((u32)rd8(r28 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r26 + r5, 0u);
        r4 = r26 + r5;
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r26 + r5;
        wr8(r26 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r26 + r5;
        wr8(r26 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r26 + r5;
        wr8(r26 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r26 + r5;
        wr8(r26 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r26 + r5;
        wr8(r26 + r5, 0u);
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
    wr16(r26, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    r4 = (u32)rd8(param_r4 + 3u);
    c0eq = (r4 & 0xfu) == 0u;
    r4 = (u32)((s32)r4 >> 4);
    r30 = ((u32)rd8(param_r4 + 5u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 4u) << 8u) & 0xff00u);
    r24 = (r4 + 1u) & 0xffu;
    if (!c0eq) {
        f1 = tc_callf(0x80284b24u, &a);
        wr32(r28 + 0x97cu, 0xffffffffu);
        r12 = rd32(r28 + 0x89cu);
        if (r12 != 0u) {
            r0 = rd32(r28 + 0x8a0u);
            if (r0 == 0u || r0 != r12) {
                a.r[0] = param_r3;
                a.r[1] = 0xfffffffdu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            wr32(r28 + 0x89cu, 0u);
        }
        wr32(r28 + 0x8bcu, 0u);
    }
    r0 = rd32(r28 + 0x978u);
    r3 = r30 & 0xffffu;
    r25 = r0 & 0xffffu;
    r31 = (r0 >> 0x10u) & 0xffffu;
    r6 = (u32)(s16)(r30 - r25);
    if (r3 < r25 || (s32)r3 > (s32)(r25 + (u32)rd16(r28 + 0x980u))) {
        (void)tc_call(0x80284b24u, &a);
    } else {
        a.r[0] = rd32(r28 + 0x974u) + r6;
        a.r[1] = param_r4 + 6u;
        a.r[2] = r24;
        (void)tc_call(0x80004338u, &a);
        if ((r25 + (u32)rd16(r28 + 0x980u)) == ((r30 & 0xffffu) + r24)) {
            (void)tc_call(0x80284b24u, &a);
            (void)tc_call(0x80284b24u, &a);
            r30 = (u32)((s32)rd32(r28 + 0x97cu) >> 31) & 0xfffffffdu;
            (void)tc_call(0x80284b24u, &a);
            f1 = tc_callf(0x80284b24u, &a);
            if (r31 == 0x4a4u) {
                f1 = tc_callf(0x80284b24u, &a);
                if ((((u32)rd8(r28 + 0x98du) + 0xfeu) & 0xffu) <= 1u) {
                    (void)tc_call(0x80284b24u, &a);
                    (void)tc_call(0x80284b24u, &a);
                    a.r[0] = param_r3;
                    a.r[1] = rd32(r28 + 0x974u);
                    a.r[2] = r24;
                    a.r[3] = r25;
                    f1 = tc_callf(0x80284864u, &a);
                }
            }
            r3 = rd32(r28 + 0x978u);
            if ((r3 == 0u && rd32(r28 + 0x8e0u) == 0u) || (r3 == 0x176cu && rd32(r28 + 0x8e0u) == 1u)) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                f1 = tc_callf(0x8027e72cu, &a);
            }
            if ((rd32(r28 + 0x978u) - 0x4a40000u) == 0x20u) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                f1 = tc_callf(0x8027f214u, &a);
            }
            if ((rd32(r28 + 0x978u) - 0x4a40000u) == 0xfau) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                f1 = tc_callf(0x8027f700u, &a);
            }
            if (rd32(r28 + 0x978u) == 0x2au) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                a.r[2] = 0u;
                f1 = tc_callf(0x8027f9f0u, &a);
            }
            if (rd32(r28 + 0x978u) == 0x62u) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                a.r[2] = 1u;
                f1 = tc_callf(0x8027f9f0u, &a);
            }
            r12 = rd32(r28 + 0x89cu);
            if (r12 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = r30;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                wr32(r28 + 0x89cu, 0u);
            }
            wr32(r28 + 0x8bcu, 0u);
        }
    }
    wr8(r26 + 0x29u, 0xfeu);
    wr8(r26 + 0x28u, rd8(r28 + 0x8c1u));
    wr8(r28 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r28 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
