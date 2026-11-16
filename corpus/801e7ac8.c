#include "tc_rt.h"

void fn_801e7ac8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r24 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r8 = rd32(0x8033c17cu);
    r31 = 0x804beaa0u;
    r7 = rd32(0x8033c180u);
    r30 = 0x817fdfa8u;
    r6 = rd32(0x8033c184u);
    r29 = 0u;
    r5 = rd32(0x8033c188u);
    r4 = rd32(0x8033c18cu);
    r3 = rd32(0x8033c190u);
    r0 = rd32(0x8033c194u);
    f31 = (f64)rdf32(0x80576328u);
    wr32(0x817fdfa8u, rd32(0x8033c178u));
    wr32(0x817fdfacu, r8);
    wr32(0x817fdfb0u, r7);
    wr32(0x817fdfb4u, r6);
    wr32(0x817fdfb8u, r5);
    wr32(0x817fdfbcu, r4);
    wr32(0x817fdfc0u, r3);
    wr32(0x817fdfc4u, r0);
    do {
        r24 = rd32(r31);
        if ((s32)r24 >= 0) {
            a.r[0] = rd32(param_r3 + 0x70u);
            a.r[1] = rd32(r30);
            r3 = tc_call(0x80031be0u, &a);
            if (r3 != 0u) {
                wrf32d(0x817fdfa4u, f31);
                wrf32d(0x817fdfa0u, f31);
                wrf32d(0x817fdf9cu, f31);
                r5 = rd32(r3 + 0x50u);
                wrf32d(0x817fdf9cu, (f64)rdf32(r5 + 0xcu));
                wrf32d(0x817fdfa0u, (f64)rdf32(r5 + 0x1cu));
                wrf32d(0x817fdfa4u, (f64)rdf32(r5 + 0x2cu));
                wr16(0x817fdf98u, 0x2e8u);
                wr8(0x817fdf9au, 1u);
                wr8(0x817fdf9bu, 1u);
                a.r[0] = r24;
                a.r[1] = 0x817fdf98u;
                (void)tc_call(0x80183794u, &a);
                if ((u32)rd16(0x817fdf98u) != 0x2e8u) {
                    r3 = tc_call(0x8006bb94u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xe0u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r24 = r3;
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0xe0u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                        } else {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0xe0u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                        }
                        r24 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        f1 = tc_callf(0x801a66e4u, &a);
                    }
                    if (r24 == 0u) {
                        return;
                    }
                    a.r[0] = r24;
                    a.r[1] = (u32)rd16(0x817fdf98u);
                    a.r[2] = 0x817fdf9cu;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = (u32)rd8(0x817fdf9bu);
                    a.r[5] = (u32)rd8(0x817fdf9au);
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r24) + 0x48u), &a);
                    wr32(r24 + 0x7cu, 1u);
                    a.r[0] = r24;
                    a.r[1] = 0x817fdf9cu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r24) + 0x50u), &a);
                    a.r[0] = r24;
                    (void)tc_call(0x801a6adcu, &a);
                }
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 8);
    return;
}
