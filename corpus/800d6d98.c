#include "tc_rt.h"

u32 fn_800d6d98(void)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t9 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    for (;;) {
        wr32(r1 - 0x100u, r1);
        r1 = r1 - 0x100u;
        wr32(r1 + 0x104u, lr);
        t0 = r1 + 0xe8u;
        wr32(t0, r26);
        wr32(t0 + 4u, r27);
        wr32(t0 + 8u, r28);
        wr32(t0 + 0xcu, r29);
        wr32(t0 + 0x10u, r30);
        wr32(t0 + 0x14u, r31);
        r31 = r1;
        r3 = tc_call(0x800d74f0u, &a);
        f1 = tc_lastf();
        r6 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = 0xfefa0u;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xfefa0u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            }
            r28 = r3;
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = 0xfefa0u;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r28 = r3;
        }
        r3 = tc_call(0x800d74f0u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x3cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x3cu;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r30 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x3cu;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r30 = r3;
        }
        if (r3 == 0u) {
            fl_ = 1u;
            break;
        }
        wr32(r1 + 0xdcu, r1);
        wr32(r3, 0x80356578u);
        if ((r28 & 0x1fu) != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80356704u;
            a.r[1] = 0x10bu;
            a.r[2] = 0x803566b4u;
            a.r[3] = r28;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        wr32(r30 + 4u, 0x140u);
        wr32(r30 + 0xcu, 0x320u);
        r3 = r28 + 0xfefa0u;
        r0 = (r28 + 0x1fu) & 0xffffffe0u;
        wr32(r30 + 0x14u, 0x320u);
        r6 = 0u;
        wr32(r30 + 0x1cu, 0x9c4u);
        wr32(r30 + 8u, 0u);
        wr32(r30 + 0x10u, 0u);
        wr32(r30 + 0x18u, 0u);
        wr32(r30 + 0x20u, 0u);
        wr32(r30 + 0x2cu, 0u);
        wr32(r30 + 0x30u, 0u);
        wr32(r30 + 0x34u, 0u);
        wr32(r30 + 0x38u, 0u);
        wr32(r30 + 0x28u, r3);
        wr32(r30 + 0x24u, r0);
        if (r0 < r3) {
            r0 = r3 - r0;
            if (r0 > 0x20u) {
                r6 = 1u;
            }
        }
        if (r6 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803566a0u;
            a.r[1] = 0x123u;
            a.r[2] = 0x80356610u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r3 = rd32(r30 + 0x24u);
        r5 = 0u;
        r29 = 0u;
        wr32(r30 + 0x30u, r3);
        wr32(r3, 0u);
        wr32(rd32(r30 + 0x30u) + 4u, 0u);
        wr32(rd32(r30 + 0x30u) + 8u, 0u);
        wr32(rd32(r30 + 0x30u) + 0xcu, 0u);
        wr8(rd32(r30 + 0x30u) + 0x14u, 0u);
        r4 = rd32(r30 + 0x24u);
        r4 = rd32(r30 + 0x28u) - r4;
        wr32(rd32(r30 + 0x30u) + 0x10u, r4 - 0x20u);
        wr32(r30 + 0x38u, rd32(r30 + 0x30u));
        wr32(r30 + 0x2cu, 0u);
        r26 = rd32(r30 + 4u);
        if ((s32)r26 > 0) {
            r12 = rd32(r30);
            r12 = rd32(r12 + 0x60u);
            r4 = (r26 * 0xa0u) + 0x20u;
            lr = 0x800d6fe0u;
            if (r12 == 0x800d6d98u) continue;
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r29 = r3;
            if (r3 != 0u) {
                wr32(r1 + 0x1cu, r1);
                a.r[0] = r3;
                a.r[1] = 0x803107b4u;
                a.r[2] = 0x80310818u;
                a.r[3] = 0xa0u;
                a.r[4] = r26;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r29 = r3;
            }
        }
        r12 = rd32(r30);
        r12 = rd32(r12 + 0x60u);
        lr = 0x800d703cu;
        if (r12 != 0x800d6d98u) {
            a.r[0] = r30;
            a.r[1] = 0x24u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r28 = r3;
            if (r3 != 0u) {
                r26 = rd32(r30 + 4u);
                wr32(r1 + 0x34u, r1);
                wr32(r3 + 0x20u, 0x80356604u);
                r3 = r3 + 4u;
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x802de7dcu, &a);
                f1 = tc_lastf();
                a.r[0] = r28 + 0x10u;
                a.r[1] = 0u;
                f1 = tc_callf(0x802de7dcu, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r27 = 0u;
                wr32(r28 + 0x1cu, 0xa0u);
                wr32(r28, r29);
                while (r27 < r26) {
                    wr32(r29 + 8u, r27);
                    a.r[0] = r28 + 4u;
                    a.r[1] = r29;
                    f1 = tc_callf(0x802de7f4u, &a);
                    r3 = tc_lastr();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r29 = r29 + 0xa0u;
                    r27 = r27 + 1u;
                }
            }
            wr32(r30 + 8u, r28);
            r26 = 0u;
            r27 = rd32(r30 + 0xcu);
            if ((s32)r27 > 0) {
                r12 = rd32(r30);
                r12 = rd32(r12 + 0x60u);
                r4 = (r27 * 0x154u) + 0x20u;
                lr = 0x800d70ecu;
                if (r12 == 0x800d6d98u) continue;
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r26 = r3;
                if (r3 != 0u) {
                    wr32(r31 + 0x4cu, r1);
                    a.r[0] = r3;
                    a.r[1] = 0x80311d24u;
                    a.r[2] = 0x80311d7cu;
                    a.r[3] = 0x154u;
                    a.r[4] = r27;
                    r3 = tc_call(0x80255464u, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r26 = r3;
                }
            }
            r12 = rd32(r30);
            r12 = rd32(r12 + 0x60u);
            lr = 0x800d7148u;
            if (r12 != 0x800d6d98u) {
                a.r[0] = r30;
                a.r[1] = 0x24u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r29 = r3;
                if (r3 != 0u) {
                    r28 = rd32(r30 + 0xcu);
                    wr32(r31 + 0x64u, r1);
                    wr32(r3 + 0x20u, 0x803565f8u);
                    r3 = r3 + 4u;
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x802de7dcu, &a);
                    f1 = tc_lastf();
                    a.r[0] = r29 + 0x10u;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x802de7dcu, &a);
                    r3 = tc_lastr();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r27 = 0u;
                    wr32(r29 + 0x1cu, 0x154u);
                    wr32(r29, r26);
                    while (r27 < r28) {
                        wr32(r26 + 8u, r27);
                        a.r[0] = r29 + 4u;
                        a.r[1] = r26;
                        f1 = tc_callf(0x802de7f4u, &a);
                        r3 = tc_lastr();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r26 = r26 + 0x154u;
                        r27 = r27 + 1u;
                    }
                }
                wr32(r30 + 0x10u, r29);
                r26 = 0u;
                r27 = rd32(r30 + 0x14u);
                if ((s32)r27 > 0) {
                    r12 = rd32(r30);
                    r12 = rd32(r12 + 0x60u);
                    r4 = (r27 * 0xbcu) + 0x20u;
                    lr = 0x800d71f8u;
                    if (r12 == 0x800d6d98u) continue;
                    a.r[0] = r30;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r26 = r3;
                    if (r3 != 0u) {
                        wr32(r31 + 0x7cu, r1);
                        a.r[0] = r3;
                        a.r[1] = 0x8031d344u;
                        a.r[2] = 0x8031d648u;
                        a.r[3] = 0xbcu;
                        a.r[4] = r27;
                        r3 = tc_call(0x80255464u, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r26 = r3;
                    }
                }
                r12 = rd32(r30);
                r12 = rd32(r12 + 0x60u);
                lr = 0x800d7254u;
                if (r12 != 0x800d6d98u) {
                    a.r[0] = r30;
                    a.r[1] = 0x24u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r29 = r3;
                    if (r3 != 0u) {
                        r28 = rd32(r30 + 0x14u);
                        wr32(r31 + 0x94u, r1);
                        wr32(r3 + 0x20u, 0x803565ecu);
                        r3 = r3 + 4u;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        r3 = tc_call(0x802de7dcu, &a);
                        f1 = tc_lastf();
                        a.r[0] = r29 + 0x10u;
                        a.r[1] = 0u;
                        f1 = tc_callf(0x802de7dcu, &a);
                        r3 = tc_lastr();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r27 = 0u;
                        wr32(r29 + 0x1cu, 0xbcu);
                        wr32(r29, r26);
                        while (r27 < r28) {
                            wr32(r26 + 8u, r27);
                            a.r[0] = r29 + 4u;
                            a.r[1] = r26;
                            f1 = tc_callf(0x802de7f4u, &a);
                            r3 = tc_lastr();
                            r5 = tc_junkr(5u);
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                            r26 = r26 + 0xbcu;
                            r27 = r27 + 1u;
                        }
                    }
                    wr32(r30 + 0x18u, r29);
                    r26 = 0u;
                    r27 = rd32(r30 + 0x1cu);
                    if ((s32)r27 > 0) {
                        r12 = rd32(r30);
                        r12 = rd32(r12 + 0x60u);
                        r4 = (r27 * 0xe4u) + 0x20u;
                        lr = 0x800d7304u;
                        if (r12 == 0x800d6d98u) continue;
                        a.r[0] = r30;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        r3 = tc_call(r12, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r26 = r3;
                        if (r3 != 0u) {
                            wr32(r31 + 0xacu, r1);
                            a.r[0] = r3;
                            a.r[1] = 0x8031c524u;
                            a.r[2] = 0x8031c534u;
                            a.r[3] = 0xe4u;
                            a.r[4] = r27;
                            r3 = tc_call(0x80255464u, &a);
                            f1 = tc_lastf();
                            r5 = tc_junkr(5u);
                            r6 = tc_junkr(6u);
                            r7 = tc_junkr(7u);
                            r8 = tc_junkr(8u);
                            r9 = tc_junkr(9u);
                            r10 = tc_junkr(0xau);
                            r26 = r3;
                        }
                    }
                    r12 = rd32(r30);
                    r12 = rd32(r12 + 0x60u);
                    lr = 0x800d7360u;
                    if (r12 != 0x800d6d98u) {
                        fl_ = 2u;
                        break;
                    }
                }
            }
        }
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        a.r[0] = r30;
        a.r[1] = 0x24u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 != 0u) {
            r27 = rd32(r30 + 0x1cu);
            wr32(r31 + 0xc4u, r1);
            wr32(r3 + 0x20u, 0x803565e0u);
            r3 = r3 + 4u;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x802de7dcu, &a);
            f1 = tc_lastf();
            a.r[0] = r29 + 0x10u;
            a.r[1] = 0u;
            r3 = tc_call(0x802de7dcu, &a);
            f1 = tc_lastf();
            r28 = 0u;
            wr32(r29 + 0x1cu, 0xe4u);
            wr32(r29, r26);
            while (r28 < r27) {
                wr32(r26 + 8u, r28);
                a.r[0] = r29 + 4u;
                a.r[1] = r26;
                r3 = tc_call(0x802de7f4u, &a);
                f1 = tc_lastf();
                r26 = r26 + 0xe4u;
                r28 = r28 + 1u;
            }
        }
        wr32(r30 + 0x20u, r29);
    } while (0);
    r3 = tc_call(0x80311554u, &a);
    f1 = tc_lastf();
    wr32(r3, r30);
    if (r30 == 0u) {
        r3 = r3 + 0x10000u;
        wr32(r3 - 0x3fecu, 0u);
        wr32(r3 - 0x3fe8u, 0u);
    } else {
        a.r[0] = r3;
        a.r[1] = 2u;
        r3 = tc_call(0x80311560u, &a);
        f1 = tc_lastf();
    }
    r3 = tc_call(0x800d76c0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x38fu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    r26 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    f1 = tc_lastf();
    r30 = r3;
    a.r[0] = 0x804b15d0u;
    a.r[1] = 0u;
    a.r[2] = 0x818u;
    r3 = tc_call(0x8000443cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0x804b15d0u;
    a.r[1] = r26;
    a.r[2] = (r30 << 3u) & 0xfffffff8u;
    r3 = tc_call(0x80004338u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r26;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r26;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r26;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
    }
    t9 = r31 + 0xe8u;
    r26 = rd32(t9);
    r27 = rd32(t9 + 4u);
    r28 = rd32(t9 + 8u);
    r29 = rd32(t9 + 0xcu);
    r30 = rd32(t9 + 0x10u);
    r31 = rd32(t9 + 0x14u);
    r10 = rd32(r1);
    r0 = rd32(r10 + 4u);
    return 1u;
}
