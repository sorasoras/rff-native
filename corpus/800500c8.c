#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800500c8(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    f6 = (f64)rdf32(param_4 + 4u);
    f9 = (f64)(f32)(param_1 * param_1);
    f5 = (f64)rdf32(param_3 + 4u);
    f3 = (f64)rdf32(param_5 + 8u);
    f11 = (f64)(f32)(f6 - f5);
    f8 = (f64)rdf32(param_4);
    f13 = (f64)(f32)(f3 - f5);
    f7 = (f64)rdf32(param_3);
    f4 = (f64)rdf32(param_5);
    f30 = (f64)(f32)(f3 - f6);
    f10 = (f64)(f32)(f8 - f7);
    f12 = (f64)(f32)(f4 - f7);
    f0 = (f64)rdf32(0x80572250u);
    wrf32d(param_2 + 4u, (f64)rdf32(param_5 + 4u));
    f31 = (f64)(f32)(f4 - f8);
    f2 = ppc_fmadds(f10, f12, (f64)(f32)(f11 * f13));
    f1 = ppc_fmadds(f10, f31, (f64)(f32)(f11 * f30));
    if ((f2 < f0) || (f2 == f0)) {
        wrf32d(param_2, f7);
        wrf32d(param_2 + 8u, f5);
        f0 = ppc_fmadds(f12, f12, (f64)(f32)(f13 * f13));
        c0lt = f0 < f9;
        r3 = (((c0lt << 0x1fu) | ((f0 > f9) << 0x1eu) | ((c0lt || (f0 == f9)) << 0x1du) | (((f0 != f0) || (f9 != f9)) << 0x1cu)) >> 0x1du) & 1u;
    } else {
        if ((f1 > f0) || (f1 == f0)) {
            wrf32d(param_2, f8);
            wrf32d(param_2 + 8u, f6);
            f0 = ppc_fmadds(f31, f31, (f64)(f32)(f30 * f30));
            c0lt = f0 < f9;
            r3 = (((c0lt << 0x1fu) | ((f0 > f9) << 0x1eu) | ((c0lt || (f0 == f9)) << 0x1du) | (((f0 != f0) || (f9 != f9)) << 0x1cu)) >> 0x1du) & 1u;
        } else {
            f1 = (f64)(f32)px_fdiv(f2, ppc_fmadds(f10, f10, (f64)(f32)(f11 * f11)));
            f0 = ppc_fmadds(f1, f11, f5);
            f1 = ppc_fmadds(f1, f10, f7);
            f3 = (f64)(f32)(f3 - f0);
            wrf32d(param_2 + 8u, f0);
            f2 = (f64)(f32)(f4 - f1);
            wrf32d(param_2, f1);
            f0 = ppc_fmadds(f2, f2, (f64)(f32)(f3 * f3));
            c0lt = f0 < f9;
            r3 = (((c0lt << 0x1fu) | ((f0 > f9) << 0x1eu) | ((c0lt || (f0 == f9)) << 0x1du) | (((f0 != f0) || (f9 != f9)) << 0x1cu)) >> 0x1du) & 1u;
        }
    }
    return r3;
}
