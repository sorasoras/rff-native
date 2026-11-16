#include "tc_rt.h"

void fn_8019dec0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r20 = 0, r25 = 0, r26 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r9 = rd32(0x8033aee8u);
    r28 = 0u;
    r5 = 0x80492800u;
    r8 = rd32(0x8033aeecu);
    r7 = rd32(0x8033aef0u);
    r6 = rd32(0x8033aef4u);
    r4 = 0x817fdfb8u;
    r0 = (u32)rd8(0x80492821u);
    wr32(0x817fdfb8u, r9);
    r0 = (r0 << 2u) & 0xfffffffcu;
    r29 = (u32)rd8(param_r3 + 0x130u);
    wr32(0x817fdfbcu, r8);
    r26 = 0u;
    r25 = 0u;
    wr32(0x817fdfc0u, r7);
    wr32(0x817fdfc4u, r6);
    r30 = rd32(r0 - 0x7e802048u);
    while (r29 != 0u) {
        r3 = param_r3 + r25;
        if (rd32(r3 + 0x13cu) == 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(0x8006bb94u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xc4u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    r20 = r3;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0xc4u;
                    r3 = tc_call(0x80094e80u, &a);
                    r20 = r3;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xc4u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r20 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                (void)tc_call(0x80221b7cu, &a);
            }
            r4 = r26 - 0x7fcc5188u;
            wr32(param_r3 + r25 + 0x13cu, r20);
            f2 = (f64)rdf32(r4 + 8u);
            f1 = (f64)rdf32(r4 + 4u);
            f0 = (f64)rdf32(r26 - 0x7fcc5188u);
            wrf32d(0x817fdfacu, f1);
            wrf32d(0x817fdfa8u, f0);
            wrf32d(0x817fdfb0u, f2);
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            a.r[0] = 0x817fdfa8u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfa8u;
            f1 = tc_callf(0x80234380u, &a);
            r3 = rd32(param_r3 + r25 + 0x13cu);
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = 0x817fdfa8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 1u;
            a.r[5] = 1u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
            r3 = param_r3 + r25;
            wr32(rd32(r3 + 0x13cu) + 0x7cu, 1u);
            r3 = rd32(r3 + 0x13cu);
            r3 = rd32(r3 + 0xa4u);
            a.r[0] = r3;
            f1 = tc_callf(0x800cf688u, &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r29 = r29 - 1u;
            wr32(rd32(rd32(param_r3 + r25 + 0x13cu) + 0xa4u) + 0xcu, 0u);
            if (r29 == 0u) break;
        }
        r28 = r28 + 1u;
        r25 = r25 + 4u;
        r26 = r26 + 0xcu;
        if (r28 >= 9u) break;
    }
    if ((rd32(0x80492c58u) & 2u) != 0u && rd32(param_r3 + 0x160u) == 0u) {
        a.r[0] = param_r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x805757c8u);
        a.r[0] = 0xbcu;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_r3 + 0x160u, r3);
    }
    return;
}
