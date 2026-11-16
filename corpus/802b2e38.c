#include "tc_rt.h"

void fn_802b2e38(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 c0gt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r23 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r7 = (u32)param_5;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = 0x80541620u;
    r9 = (u32)rd16(0x80542842u);
    r27 = (u32)param_4;
    r30 = 0x80542844u;
    r5 = 0u;
    for (;;) {
        if ((r5 & 0xffffu) >= r9) {
            return;
        }
        if (rd32(r30) == param_1) break;
        r5 = r5 + 1u;
        r30 = r30 + 0x298u;
    }
    r3 = (u32)rd16(r30 + 8u);
    r29 = r30 + 0xcu;
    r31 = 0u;
    while ((r31 & 0xffffu) < r3) {
        r0 = (u32)rd16(r29 + 8u);
        c0gt = r0 > param_2;
        if (r0 == param_2) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[4] = (u32)param_5;
            a.r[5] = 0x80541620u;
            a.r[6] = r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x802b3424u, &a);
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            break;
        }
        if (c0gt) break;
        r31 = r31 + 1u;
        r29 = r29 + 0xcu;
    }
    r5 = (u32)rd16(r30 + 8u);
    if (r5 != 0x19u) {
        r0 = r31 & 0xffffu;
        if (r0 != r5) {
            c1lt = r5 < r0;
            if (r5 > r0) {
                r3 = r31 + 8u;
                if (((r5 - r31) & 0xffffu) > 8u && !c1lt) {
                    r3 = r3 & 0xffffu;
                    ctr = ((r5 + 7u - r3) >> 3u) & 0x1fffffffu;
                    if (r5 > r3) {
                        do {
                            r3 = r5 + 0x10000u;
                            r4 = ((r5 & 0xffffu) * 0xcu) + r30;
                            r7 = rd32(r4 + 4u);
                            r8 = ((r3 - 1u) & 0xffffu) * 0xcu;
                            r5 = r5 - 8u;
                            wr32(r4 + 0xcu, rd32(r4));
                            wr32(r4 + 0x10u, r7);
                            r23 = r30 + r8;
                            wr32(r4 + 0x14u, rd32(r4 + 8u));
                            r11 = rd32(r23 + 4u);
                            r7 = (r3 - 5u) & 0xffffu;
                            wr32(r4, rd32(r30 + r8));
                            r12 = r30 + (((r3 - 2u) & 0xffffu) * 0xcu);
                            r10 = r30 + (((r3 - 3u) & 0xffffu) * 0xcu);
                            r8 = ((r3 - 4u) & 0xffffu) * 0xcu;
                            wr32(r4 + 4u, r11);
                            r0 = r3 - 7u;
                            r3 = ((r3 - 6u) & 0xffffu) * 0xcu;
                            r0 = r0 & 0xffffu;
                            wr32(r4 + 8u, rd32(r23 + 8u));
                            r9 = r30 + r8;
                            r7 = r7 * 0xcu;
                            r8 = r30 + r7;
                            r7 = r30 + r3;
                            r3 = rd32(r12 + 4u);
                            r0 = r0 * 0xcu;
                            wr32(r4 - 0xcu, rd32(r12));
                            wr32(r4 - 8u, r3);
                            r6 = r30 + r0;
                            wr32(r4 - 4u, rd32(r12 + 8u));
                            r0 = rd32(r10 + 4u);
                            wr32(r4 - 0x18u, rd32(r10));
                            wr32(r4 - 0x14u, r0);
                            wr32(r4 - 0x10u, rd32(r10 + 8u));
                            r0 = rd32(r9 + 4u);
                            wr32(r4 - 0x24u, rd32(r9));
                            wr32(r4 - 0x20u, r0);
                            wr32(r4 - 0x1cu, rd32(r9 + 8u));
                            r0 = rd32(r8 + 4u);
                            wr32(r4 - 0x30u, rd32(r8));
                            wr32(r4 - 0x2cu, r0);
                            wr32(r4 - 0x28u, rd32(r8 + 8u));
                            r0 = rd32(r7 + 4u);
                            wr32(r4 - 0x3cu, rd32(r7));
                            wr32(r4 - 0x38u, r0);
                            wr32(r4 - 0x34u, rd32(r7 + 8u));
                            r0 = rd32(r6 + 4u);
                            wr32(r4 - 0x48u, rd32(r6));
                            wr32(r4 - 0x44u, r0);
                            wr32(r4 - 0x40u, rd32(r6 + 8u));
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r3 = r31 & 0xffffu;
                r4 = r5 & 0xffffu;
                ctr = r4 - r3;
                if (r4 > r3) {
                    do {
                        r0 = r5 & 0xffffu;
                        r5 = r5 - 1u;
                        r0 = r0 * 0xcu;
                        r4 = r30 + r0;
                        r3 = rd32(r30 + r0);
                        r0 = rd32(r4 + 4u);
                        wr32(r4 + 0xcu, r3);
                        wr32(r4 + 0x10u, r0);
                        wr32(r4 + 0x14u, rd32(r4 + 8u));
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        } else {
            r29 = r30 + (r5 * 0xcu) + 0xcu;
        }
        wr16(r30 + 8u, (u16)((u32)rd16(r30 + 8u) + 1u));
        wr16(r29 + 8u, (u16)param_2);
        wr32(r29, (u32)param_4);
        wr8(r29 + 0xau, (u8)param_3);
        r6 = rd32(r30 + 4u);
        if ((r6 + (u32)param_4) >= 0x15eu) {
            if ((u32)rd8(0x80545c50u) >= 2u) {
                r6 = 0x15eu - r6;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xa0001u;
                a.r[1] = 0x80397920u;
                a.r[2] = (u32)param_4;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc84u, &a);
            }
            r27 = 0x15eu - rd32(r30 + 4u);
            wr8((u32)param_5 + r27, 0u);
            wr8((u32)param_5 + (0x15fu - rd32(r30 + 4u)), 0u);
        }
        if (r27 != 0u && (u32)param_5 != 0u) {
            a.r[0] = r30 + rd32(r30 + 4u) + 0x138u;
            a.r[1] = (u32)param_5;
            a.r[2] = r27;
            (void)tc_call(0x80004338u, &a);
            wr32(r29 + 4u, r30 + rd32(r30 + 4u) + 0x138u);
            wr32(r30 + 4u, rd32(r30 + 4u) + r27);
        }
        if (param_1 == rd32(0x8054283cu) && param_2 == 0x8001u) {
            wr8(0x80542840u, 1u);
        }
    }
    return;
}
