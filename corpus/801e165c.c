#include "tc_rt.h"

void fn_801e165c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.r[0] = 0x239fu;
    a.r[1] = r3;
    f1 = tc_callf(0x801dc4b4u, &a);
    f0 = (f64)rdf32(0x805761f0u);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfd4u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd4u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1 + 0x24u) + 0x34u), &a);
    r4 = rd32(param_1);
    f2 = (f64)rdf32(0x817fdfd4u);
    wrf32d(r4 + 0x84u, f2);
    f1 = (f64)rdf32(0x817fdfd8u);
    wrf32d(r4 + 0x88u, f1);
    f0 = (f64)rdf32(0x817fdfdcu);
    wrf32d(r4 + 0x8cu, f0);
    wrf32d(r4 + 4u, f2);
    wrf32d(r4 + 8u, f1);
    wrf32d(r4 + 0xcu, f0);
    r3 = tc_call(0x801ddb34u, &a);
    f1 = tc_lastf();
    r30 = rd32(param_1);
    r31 = r3;
    a.r[0] = r30;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
    r0 = rd32(r31 + 4u);
    wr32(0x817fdfc8u, rd32(r31));
    wr32(0x817fdfccu, r0);
    wr32(0x817fdfd0u, rd32(r31 + 8u));
    a.r[0] = 0x817fdfc8u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x802343a4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfc8u);
    a.f[1] = (f64)rdf32(0x817fdfd0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x805761f4u) < f1) {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
    } else {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805761fcu);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x805761f8u) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        }
    }
    a.f[0] = (f64)rdf32(r30 + 0x78u);
    a.f[1] = (f64)rdf32(r30 + 0x80u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x805761f4u) < f1) {
        a.f[0] = (f64)rdf32(r30 + 0x78u);
        a.f[1] = (f64)rdf32(r30 + 0x80u);
        f1 = tc_callf(0x80262c68u, &a);
        r4 = tc_lastr4();
        f2 = 0.0;
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
    } else {
        a.f[0] = (f64)rdf32(r30 + 0x78u);
        a.f[1] = (f64)rdf32(r30 + 0x80u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805761fcu);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(r30 + 0x78u);
            a.f[1] = (f64)rdf32(r30 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x805761f8u) + f1);
        } else {
            a.f[0] = (f64)rdf32(r30 + 0x78u);
            a.f[1] = (f64)rdf32(r30 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f3 = (f64)(f32)f1;
        }
    }
    if ((f64)rdf32(0x805761f4u) < f31) {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x805761f8u));
    } else {
        f0 = (f64)rdf32(0x805761fcu);
        if ((f0 > f31) || (f0 == f31)) {
            f0 = (f64)(f32)((f64)rdf32(0x805761f8u) + f31);
        } else {
            f0 = f31;
        }
    }
    f1 = (f64)(f32)(f0 - f3);
    if (f1 > (f64)rdf32(0x805761f4u)) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
    } else {
        if (f1 < (f64)rdf32(0x805761fcu)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805761f8u));
        }
    }
    f0 = (f64)rdf32(0x805761f4u);
    if (f0 < f1) {
        if (f0 < f31) {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x805761f8u));
        } else {
            f0 = (f64)rdf32(0x805761fcu);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x805761f8u) + f31);
            }
        }
        f1 = (f64)(f32)(f31 - f3);
        if (f1 > (f64)rdf32(0x805761f4u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
        } else {
            if (f1 < (f64)rdf32(0x805761fcu)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805761f8u));
            }
        }
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
    } else {
        if (f0 < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805761f8u));
        } else {
            f0 = (f64)rdf32(0x805761fcu);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x805761f8u) + f31);
            } else {
                f0 = f31;
            }
        }
        f2 = (f64)(f32)(f0 - f3);
        if (f2 > (f64)rdf32(0x805761f4u)) {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805761f8u));
        } else {
            if (f2 < (f64)rdf32(0x805761fcu)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x805761f8u));
            }
        }
        f1 = (f64)rdf32(0x805761fcu);
        if ((f1 > f2) || (f1 == f2)) {
            if ((f64)rdf32(0x805761f4u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805761f8u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805761f8u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x805761f4u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
            } else {
                if (f1 < (f64)rdf32(0x805761fcu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805761f8u));
                }
            }
            f1 = (f64)(f32)((f64)rdf32(0x805761f8u) + f1);
        } else {
            if ((f64)rdf32(0x805761f4u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805761f8u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805761f8u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x805761f4u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
            } else {
                if (f1 < (f64)rdf32(0x805761fcu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805761f8u));
                }
            }
        }
    }
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 0x1au;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80576208u);
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddaf4u, &a);
    a.f[0] = (f64)rdf32(0x805762d8u);
    a.f[1] = (f64)rdf32(0x80576220u);
    a.r[0] = param_1;
    a.r[1] = 0x52u;
    a.r[2] = r3;
    (void)tc_call(0x801dda7cu, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.f[0] = (f64)rdf32(0x80576278u);
    a.f[1] = (f64)rdf32(0x805762b8u);
    a.r[0] = param_1;
    a.r[1] = 0xaau;
    a.r[2] = r3;
    (void)tc_call(0x801dda7cu, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.f[0] = (f64)rdf32(0x80576280u);
    a.f[1] = (f64)rdf32(0x805762b8u);
    a.r[0] = param_1;
    a.r[1] = 0xcbu;
    a.r[2] = r3;
    (void)tc_call(0x801dda7cu, &a);
    a.f[0] = (f64)rdf32(0x80576218u);
    a.r[0] = param_1;
    (void)tc_call(0x801dd9dcu, &a);
    return;
}
