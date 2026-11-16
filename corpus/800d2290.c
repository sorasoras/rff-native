#include "tc_rt.h"

s32 fn_800d2290(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d1cf8u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 == 0u) {
        r3 = rd32((u32)param_1 + 0x20u);
        if (r3 == 0u) {
            r3 = rd32((u32)param_1 + 0x24u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
        } else {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
        }
        r4 = rd32(r3);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfccu, r4);
        wr32(0x817fdfd0u, r0);
        wr32(0x817fdfd4u, rd32(r3 + 8u));
        r3 = rd32((u32)param_1 + 0x20u);
        if (r3 == 0u) {
            r3 = rd32((u32)param_1 + 0x24u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            r4 = tc_lastr4();
            f31 = f1;
        } else {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            r4 = tc_lastr4();
            f31 = f1;
        }
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfc0u, rd32(r3));
        wr32(0x817fdfc4u, r0);
        wr32(0x817fdfc8u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfc0u;
        a.r[1] = 0x817fdfccu;
        a.r[2] = 0x817fdfc0u;
        (void)tc_call(0x802343a4u, &a);
        r4 = rd32(0x804890d4u);
        r3 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdfb4u, r4);
        wr32(0x817fdfb8u, r3);
        wr32(0x817fdfbcu, r0);
        wr32(0x817fdfa8u, r4);
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        a.f[0] = f31;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f2 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fdfb0u);
        f3 = (f64)rdf32(0x817fdfa8u);
        f0 = (f64)(f32)(f1 * f30);
        f1 = (f64)(f32)(f1 * f2);
        f2 = -f2;
        f1 = ppc_fmadds(f3, f30, f1);
        f2 = ppc_fmadds(f3, f2, f0);
        wrf32d(0x817fdfb4u, f1);
        wrf32d(0x817fdfbcu, f2);
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805730d0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfb4u);
            a.f[1] = (f64)rdf32(0x817fdfbcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfb4u);
            a.f[1] = (f64)rdf32(0x817fdfbcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805730e8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)((f64)rdf32(0x805730e4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f31 = (f64)(f32)f1;
            }
        }
        a.f[0] = (f64)rdf32(0x817fdfc0u);
        a.f[1] = (f64)rdf32(0x817fdfc8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805730d0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfc0u);
            a.f[1] = (f64)rdf32(0x817fdfc8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc0u);
            a.f[1] = (f64)rdf32(0x817fdfc8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805730e8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfc0u);
                a.f[1] = (f64)rdf32(0x817fdfc8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)((f64)rdf32(0x805730e4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfc0u);
                a.f[1] = (f64)rdf32(0x817fdfc8u);
                f1 = tc_callf(0x80262c68u, &a);
                f3 = (f64)(f32)f1;
            }
        }
        if ((f64)rdf32(0x805730d0u) < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730e4u));
        } else {
            f0 = (f64)rdf32(0x805730e8u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x805730e4u) + f31);
            } else {
                f0 = f31;
            }
        }
        f1 = (f64)(f32)(f0 - f3);
        if (f1 > (f64)rdf32(0x805730d0u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
        } else {
            if (f1 < (f64)rdf32(0x805730e8u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730e4u));
            }
        }
        f0 = (f64)rdf32(0x805730d0u);
        if (f0 < f1) {
            if (f0 < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730e4u));
            } else {
                f0 = (f64)rdf32(0x805730e8u);
                if ((f0 > f31) || (f0 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805730e4u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x805730d0u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
            } else {
                if (f1 < (f64)rdf32(0x805730e8u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730e4u));
                }
            }
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
        } else {
            if (f0 < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730e4u));
            } else {
                f0 = (f64)rdf32(0x805730e8u);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x805730e4u) + f31);
                } else {
                    f0 = f31;
                }
            }
            f2 = (f64)(f32)(f0 - f3);
            if (f2 > (f64)rdf32(0x805730d0u)) {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805730e4u));
            } else {
                if (f2 < (f64)rdf32(0x805730e8u)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x805730e4u));
                }
            }
            f1 = (f64)rdf32(0x805730e8u);
            if ((f1 > f2) || (f1 == f2)) {
                if ((f64)rdf32(0x805730d0u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730e4u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805730e4u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805730d0u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
                } else {
                    if (f1 < (f64)rdf32(0x805730e8u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730e4u));
                    }
                }
                f1 = (f64)(f32)((f64)rdf32(0x805730e4u) + f1);
            } else {
                if ((f64)rdf32(0x805730d0u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730e4u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805730e4u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805730d0u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730e4u));
                } else {
                    if (f1 < (f64)rdf32(0x805730e8u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730e4u));
                    }
                }
            }
        }
        f1 = ppc_fabs(f1);
        f1 = (f64)(f32)f1;
        if (f1 < (f64)rdf32(0x805730ecu)) {
            wr32((u32)param_1 + 0x2cu, 0u);
        } else {
            wr32((u32)param_1 + 0x2cu, 1u);
        }
        r3 = rd32((u32)param_1 + 0x20u);
        if (r3 != 0u) {
            wr32(r3 + 0x138u, rd32((u32)param_1 + 0x2cu));
        }
    }
    return (s32)r31;
}
