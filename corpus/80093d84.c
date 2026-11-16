#include "tc_rt.h"

f64 fn_80093d84(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
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
    r30 = rd32(0x804863d8u);
    a.r[0] = param_1;
    a.r[1] = 0x80480000u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = r30;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfc8u, rd32(r3));
    wr32(0x817fdfccu, r0);
    wr32(0x817fdfd0u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfc8u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x802343a4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfc8u);
    a.f[1] = (f64)rdf32(0x817fdfd0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572a00u) < f1) {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
    } else {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572a08u);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x80572a04u) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        }
    }
    a.f[0] = (f64)rdf32(param_1 + 0x78u);
    a.f[1] = (f64)rdf32(param_1 + 0x80u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572a00u) < f1) {
        a.f[0] = (f64)rdf32(param_1 + 0x78u);
        a.f[1] = (f64)rdf32(param_1 + 0x80u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
    } else {
        a.f[0] = (f64)rdf32(param_1 + 0x78u);
        a.f[1] = (f64)rdf32(param_1 + 0x80u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572a08u);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(param_1 + 0x78u);
            a.f[1] = (f64)rdf32(param_1 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x80572a04u) + f1);
        } else {
            a.f[0] = (f64)rdf32(param_1 + 0x78u);
            a.f[1] = (f64)rdf32(param_1 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        }
    }
    if ((f64)rdf32(0x80572a00u) < f31) {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572a04u));
    } else {
        f0 = (f64)rdf32(0x80572a08u);
        if ((f0 > f31) || (f0 == f31)) {
            f0 = (f64)(f32)((f64)rdf32(0x80572a04u) + f31);
        } else {
            f0 = f31;
        }
    }
    f1 = (f64)(f32)(f0 - f3);
    if (f1 > (f64)rdf32(0x80572a00u)) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
    } else {
        if (f1 < (f64)rdf32(0x80572a08u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572a04u));
        }
    }
    f0 = (f64)rdf32(0x80572a00u);
    if (f0 < f1) {
        if (f0 < f31) {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572a04u));
        } else {
            f0 = (f64)rdf32(0x80572a08u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x80572a04u) + f31);
            }
        }
        f1 = (f64)(f32)(f31 - f3);
        if (f1 > (f64)rdf32(0x80572a00u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
        } else {
            if (f1 < (f64)rdf32(0x80572a08u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572a04u));
            }
        }
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
    } else {
        if (f0 < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572a04u));
        } else {
            f0 = (f64)rdf32(0x80572a08u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x80572a04u) + f31);
            } else {
                f0 = f31;
            }
        }
        f2 = (f64)(f32)(f0 - f3);
        if (f2 > (f64)rdf32(0x80572a00u)) {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572a04u));
        } else {
            if (f2 < (f64)rdf32(0x80572a08u)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572a04u));
            }
        }
        f1 = (f64)rdf32(0x80572a08u);
        if ((f1 > f2) || (f1 == f2)) {
            if ((f64)rdf32(0x80572a00u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572a04u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572a04u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80572a00u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
            } else {
                if (f1 < (f64)rdf32(0x80572a08u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572a04u));
                }
            }
            f1 = (f64)(f32)((f64)rdf32(0x80572a04u) + f1);
        } else {
            if ((f64)rdf32(0x80572a00u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572a04u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572a04u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80572a00u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
            } else {
                if (f1 < (f64)rdf32(0x80572a08u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572a04u));
                }
            }
        }
    }
    return f1;
}
