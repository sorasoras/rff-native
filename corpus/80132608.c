#include "tc_rt.h"

void fn_80132608(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r16 = 0, r17 = 0;
    u32 r18 = 0, r19 = 0, r20 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fde10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = rd32((u32)param_1 + 0x8f0u);
    a.r[0] = (r29 * 0x30u) + 0x10u;
    r3 = tc_call(0x80132f28u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x80132f98u;
        a.r[2] = 0x80132fb4u;
        a.r[3] = 0x30u;
        a.r[4] = r29;
        r3 = tc_call(0x80255464u, &a);
        f1 = tc_lastf();
        r31 = r3;
    }
    a.r[0] = 0x817fde88u;
    a.r[1] = 0x80132944u;
    a.r[2] = 0x801329a4u;
    a.r[3] = 0xcu;
    a.r[4] = 0x19u;
    f1 = tc_callf(0x80255624u, &a);
    r3 = tc_lastr();
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    r5 = 0x817fde20u;
    r4 = 0x8033a1b8u;
    ctr = 0xcu;
    do {
        r3 = rd32(r4 + 4u);
        r4 = r4 + 8u;
        r0 = rd32(r4);
        wr32(r5 + 4u, r3);
        wr32(r5 + 8u, r0);
        r5 = r5 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r30 = r31;
    r28 = 0u;
    wr32(r5 + 4u, rd32(r4 + 4u));
    r18 = 0u;
    while ((s32)r28 < (s32)r29) {
        r0 = rd32((u32)param_1 + 0x8ecu);
        r16 = r0 + r18;
        r17 = rd32(r18 + r0);
        r27 = rd32(r16 + 8u);
        a.r[0] = r17;
        a.r[1] = 1u;
        r3 = tc_call(0x800cd6b4u, &a);
        f1 = tc_lastf();
        r26 = r3 & 0xffffu;
        a.r[0] = r30;
        a.r[1] = r16;
        r3 = tc_call(0x80132ff4u, &a);
        f1 = tc_lastf();
        a.r[0] = r17;
        r3 = tc_call(0x800cd6e4u, &a);
        f1 = tc_lastf();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r17 = (rd32(((r3 << 2u) & 0x3fcu) - 0x7e8021dcu) * 0xcu) - 0x7e802178u;
        r24 = rd32(r17 + 4u);
        r16 = r17 + 4u;
        while (r24 != r16) {
            if (r24 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80363aacu;
                a.r[1] = 0x23du;
                a.r[2] = 0x80363a88u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = r24 - 0x28u;
            r3 = tc_call(0x80133054u, &a);
            f1 = tc_lastf();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            if ((s32)r3 > (s32)r27) {
                if (r30 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80363a7cu;
                    a.r[1] = 0x233u;
                    a.r[2] = 0x80363a58u;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    r3 = tc_call(0x802e41c0u, &a);
                    f1 = tc_lastf();
                }
                wr32(0x817fde20u, r24);
                a.r[0] = r17;
                a.r[1] = 0x817fde20u;
                a.r[2] = r30 + 0x28u;
                f1 = tc_callf(0x802deba4u, &a);
                r3 = tc_lastr();
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                break;
            }
            if (r24 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80363aacu;
                a.r[1] = 0x23du;
                a.r[2] = 0x80363a88u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = r24 - 0x28u;
            r3 = tc_call(0x80133054u, &a);
            f1 = tc_lastf();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            if (r27 == r3) {
                if (r24 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80363aacu;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x80363a88u;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    r3 = tc_call(0x802e41c0u, &a);
                    f1 = tc_lastf();
                }
                a.r[0] = r24 - 0x28u;
                r3 = tc_call(0x8013305cu, &a);
                f1 = tc_lastf();
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if ((s32)r3 > (s32)r26) {
                    if (r30 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80363a7cu;
                        a.r[1] = 0x233u;
                        a.r[2] = 0x80363a58u;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        r3 = tc_call(0x802e41c0u, &a);
                        f1 = tc_lastf();
                    }
                    wr32(0x817fde1cu, r24);
                    a.r[0] = r17;
                    a.r[1] = 0x817fde1cu;
                    a.r[2] = r30 + 0x28u;
                    f1 = tc_callf(0x802deba4u, &a);
                    r3 = tc_lastr();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    break;
                }
            }
            r24 = rd32(r24);
        }
        if (r24 == r16) {
            if (r30 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80363a7cu;
                a.r[1] = 0x233u;
                a.r[2] = 0x80363a58u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            wr32(0x817fde18u, r16);
            a.r[0] = r17;
            a.r[1] = 0x817fde18u;
            a.r[2] = r30 + 0x28u;
            f1 = tc_callf(0x802deba4u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        }
        r18 = r18 + 0x24u;
        r30 = r30 + 0x30u;
        r28 = r28 + 1u;
    }
    r19 = 0x817fde88u;
    r16 = 0u;
    r20 = 0u;
    do {
        r24 = rd32(r19 + 4u);
        r26 = r19 + 4u;
        while (r24 != r26) {
            if (r24 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80363aacu;
                a.r[1] = 0x23du;
                a.r[2] = 0x80363a88u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = r24 - 0x28u;
            a.r[1] = rd32((u32)param_1 + 0x8ecu) + r20;
            f1 = tc_callf(0x80132ff4u, &a);
            r3 = tc_lastr();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r24 = rd32(r24);
            r20 = r20 + 0x24u;
        }
        r16 = r16 + 1u;
        r19 = r19 + 0xcu;
    } while ((s32)r16 < 25);
    r19 = 0x817fde88u;
    r16 = 0u;
    do {
        a.r[0] = r19;
        r3 = tc_call(0x802deaf8u, &a);
        f1 = tc_lastf();
        r16 = r16 + 1u;
        r19 = r19 + 0xcu;
    } while ((s32)r16 < 25);
    a.r[0] = r31;
    a.r[1] = 0x80132fb4u;
    a.r[2] = 0x80132f60u;
    a.r[3] = 0u;
    r3 = tc_call(0x80255794u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fde88u;
    a.r[1] = 0x801329a4u;
    a.r[2] = 0xcu;
    a.r[3] = 0x19u;
    r3 = tc_call(0x8025571cu, &a);
    f1 = tc_lastf();
    return;
}
