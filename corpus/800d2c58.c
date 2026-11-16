#include "tc_rt.h"

u32 fn_800d2c58(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
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
    a.r[1] = param_2;
    r3 = tc_call(0x800d2a0cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = rd32(0x804890d4u);
        f31 = (f64)rdf32((u32)param_1 + 0x18u);
        r3 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdfc0u, r4);
        wr32(0x817fdfc4u, r3);
        wr32(0x817fdfc8u, r0);
        wr32(0x817fdfa8u, r4);
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        a.f[0] = f31;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f4 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fdfb0u);
        r4 = rd32(param_2 + 4u);
        f3 = (f64)rdf32(0x817fdfa8u);
        r0 = rd32(param_2 + 8u);
        wr32(0x817fdfb4u, rd32(param_2));
        wr32(0x817fdfb8u, r4);
        wr32(0x817fdfbcu, r0);
        wrf32d(0x817fdfc0u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
        wrf32d(0x817fdfc8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
        a.r[0] = 0x817fdfb4u;
        a.r[1] = (u32)param_1 + 8u;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x802343a4u, &a);
        f2 = (f64)rdf32(0x817fdfc8u);
        f1 = (f64)rdf32(0x817fdfc0u);
        wrf32d(0x817fdfb8u, (f64)rdf32(0x80573108u));
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805730f8u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfc0u);
            a.f[1] = (f64)rdf32(0x817fdfc8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc0u);
            a.f[1] = (f64)rdf32(0x817fdfc8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573100u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfc0u);
                a.f[1] = (f64)rdf32(0x817fdfc8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)((f64)rdf32(0x805730fcu) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfc0u);
                a.f[1] = (f64)rdf32(0x817fdfc8u);
                f1 = tc_callf(0x80262c68u, &a);
                f31 = (f64)(f32)f1;
            }
        }
        a.f[0] = (f64)rdf32(0x817fdfb4u);
        a.f[1] = (f64)rdf32(0x817fdfbcu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805730f8u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfb4u);
            a.f[1] = (f64)rdf32(0x817fdfbcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfb4u);
            a.f[1] = (f64)rdf32(0x817fdfbcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573100u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)((f64)rdf32(0x805730fcu) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfb4u);
                a.f[1] = (f64)rdf32(0x817fdfbcu);
                f1 = tc_callf(0x80262c68u, &a);
                f3 = (f64)(f32)f1;
            }
        }
        if ((f64)rdf32(0x805730f8u) < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730fcu));
        } else {
            f0 = (f64)rdf32(0x80573100u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x805730fcu) + f31);
            } else {
                f0 = f31;
            }
        }
        f1 = (f64)(f32)(f0 - f3);
        if (f1 > (f64)rdf32(0x805730f8u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
        } else {
            if (f1 < (f64)rdf32(0x80573100u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730fcu));
            }
        }
        f0 = (f64)rdf32(0x805730f8u);
        if (f0 < f1) {
            if (f0 < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730fcu));
            } else {
                f0 = (f64)rdf32(0x80573100u);
                if ((f0 > f31) || (f0 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805730fcu) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x805730f8u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
            } else {
                if (f1 < (f64)rdf32(0x80573100u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730fcu));
                }
            }
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
        } else {
            if (f0 < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730fcu));
            } else {
                f0 = (f64)rdf32(0x80573100u);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x805730fcu) + f31);
                } else {
                    f0 = f31;
                }
            }
            f2 = (f64)(f32)(f0 - f3);
            if (f2 > (f64)rdf32(0x805730f8u)) {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805730fcu));
            } else {
                if (f2 < (f64)rdf32(0x80573100u)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x805730fcu));
                }
            }
            f1 = (f64)rdf32(0x80573100u);
            if ((f1 > f2) || (f1 == f2)) {
                if ((f64)rdf32(0x805730f8u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730fcu));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805730fcu) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805730f8u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
                } else {
                    if (f1 < (f64)rdf32(0x80573100u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730fcu));
                    }
                }
                f1 = (f64)(f32)((f64)rdf32(0x805730fcu) + f1);
            } else {
                if ((f64)rdf32(0x805730f8u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730fcu));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805730fcu) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805730f8u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730fcu));
                } else {
                    if (f1 < (f64)rdf32(0x80573100u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730fcu));
                    }
                }
            }
        }
        f1 = ppc_fabs(f1);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32((u32)param_1 + 0x1cu) < f1) {
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
