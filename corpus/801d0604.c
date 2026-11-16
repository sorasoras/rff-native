#include "tc_rt.h"

void fn_801d0604(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x334u);
    if (r0 == 1u) {
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(param_1 + 0xa4u);
        r3 = tc_call(0x800586c8u, &a);
        r4 = tc_lastr4();
        if (r3 == 0u) {
            return;
        }
        r3 = rd32(r3 + 0xcu);
        if (r3 == 0u) {
            return;
        }
        f2 = (f64)rdf32(r3 + 0x14u);
        f0 = (f64)rdf32(param_1 + 0x32cu);
        if (!((f0 < f2) || (f0 == f2))) {
            return;
        }
        f1 = (f64)rdf32(param_1 + 0x330u);
        f0 = (f64)(f32)(f0 + f1);
        wrf32d(param_1 + 0x32cu, f0);
        if (f0 > f2) {
            f0 = (f64)rdf32(0x80575ed4u);
            wrf32d(param_1 + 0x32cu, f2);
            f0 = (f64)(f32)(f1 * f0);
            wrf32d(param_1 + 0x330u, f0);
            return;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(rd32(rd32(param_1) + 0x194u), &a);
        r4 = tc_lastr4();
        if (!((f64)rdf32(param_1 + 0x32cu) < f1)) {
            return;
        }
        f1 = (f64)rdf32(param_1 + 0x330u);
        wrf32d(param_1 + 0x330u, (f64)(f32)(f1 * (f64)rdf32(0x80575ed4u)));
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x194u), &a);
        wrf32d(param_1 + 0x32cu, f1);
    } else {
        if (r0 == 2u) {
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(param_1 + 0xa4u);
            r3 = tc_call(0x800586c8u, &a);
            if (r3 == 0u) {
                return;
            }
            r3 = rd32(r3 + 0xcu);
            if (r3 == 0u) {
                return;
            }
            f1 = (f64)rdf32(r3 + 0x14u);
            f0 = (f64)rdf32(param_1 + 0x32cu);
            if (!((f0 < f1) || (f0 == f1))) {
                return;
            }
            f2 = (f64)rdf32(param_1 + 0x330u);
            f0 = (f64)(f32)(f0 + f2);
            wrf32d(param_1 + 0x32cu, f0);
            if (f0 > f1) {
                f0 = (f64)rdf32(0x80575ed4u);
                wrf32d(param_1 + 0x32cu, f1);
                f0 = (f64)(f32)(f2 * f0);
                wrf32d(param_1 + 0x330u, f0);
                return;
            }
            f1 = (f64)rdf32(0x80575ea8u);
            if (!((f0 < f1) || (f0 == f1))) {
                return;
            }
            wrf32d(param_1 + 0x32cu, f1);
            wrf32d(param_1 + 0x330u, (f64)(f32)(f2 * f1));
            wr32(param_1 + 0x334u, 0u);
        } else {
            wrf32d(param_1 + 0x32cu, (f64)rdf32(0x80575ea8u));
        }
    }
    return;
}
