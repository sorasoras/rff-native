#include "tc_rt.h"

u32 fn_800cf3ec(void)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f31 = (f64)rdf32(0x80573060u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r30 = 0u;
    wr32(0x817fdfe4u, 0u);
    wr32(0x805711e8u, 0u);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    r5 = rd32(r3);
    r4 = 0x804b0000u;
    r0 = rd32(r3 + 4u);
    r31 = rd32(0x804b14fcu);
    wr32(0x817fdfccu, r5);
    wr32(0x817fdfd0u, r0);
    wr32(0x817fdfd4u, rd32(r3 + 8u));
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r29 = rd32(r3 + 8u);
        if (rd32(r29 + 0xcu) != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29) + 0x10u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            if (r3 != 0u) {
                r3 = rd32(0x805711e8u);
                if (r3 == 0u) {
                    wr32(0x805711e8u, r29);
                    a.r[0] = r29;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r29) + 0x18u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfc0u, rd32(r3));
                    wr32(0x817fdfc4u, r0);
                    wr32(0x817fdfc8u, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfc0u;
                    a.r[1] = 0x817fdfccu;
                    a.r[2] = 0x817fdfc0u;
                    (void)tc_call(0x802343a4u, &a);
                    a.r[0] = 0x817fdfc0u;
                    f1 = tc_callf(0x80234428u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    f31 = f1;
                } else {
                    r0 = (u32)rd8(r3 + 0x1cu);
                    r3 = (u32)rd8(r29 + 0x1cu);
                    c0eq = r0 == r3;
                    if (r0 < r3) {
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r29) + 0x18u), &a);
                        r0 = rd32(r3 + 4u);
                        wr32(0x817fdfb4u, rd32(r3));
                        wr32(0x817fdfb8u, r0);
                        wr32(0x817fdfbcu, rd32(r3 + 8u));
                        a.r[0] = 0x817fdfb4u;
                        a.r[1] = 0x817fdfccu;
                        a.r[2] = 0x817fdfb4u;
                        (void)tc_call(0x802343a4u, &a);
                        a.r[0] = 0x817fdfb4u;
                        f1 = tc_callf(0x80234428u, &a);
                        r4 = tc_lastr4();
                        r5 = 0u;
                        f31 = f1;
                        wr32(0x805711e8u, r29);
                    } else {
                        if (c0eq) {
                            a.r[0] = r29;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r29) + 0x18u), &a);
                            r0 = rd32(r3 + 4u);
                            wr32(0x817fdfa8u, rd32(r3));
                            wr32(0x817fdfacu, r0);
                            wr32(0x817fdfb0u, rd32(r3 + 8u));
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = 0x817fdfccu;
                            a.r[2] = 0x817fdfa8u;
                            (void)tc_call(0x802343a4u, &a);
                            a.r[0] = 0x817fdfa8u;
                            f1 = tc_callf(0x80234428u, &a);
                            r4 = tc_lastr4();
                            r5 = 0u;
                            if (f1 < f31) {
                                wr32(0x805711e8u, r29);
                            }
                        }
                    }
                }
                r30 = 1u;
            }
        }
    }
    r3 = rd32(0x805711e8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x3cu), &a);
    }
    return r30;
}
