#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800501e0(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    TcArgs a = {0};
    f5 = (f64)rdf32(param_3 + 4u);
    f1 = (f64)rdf32(param_5);
    f7 = (f64)(f32)((f64)rdf32(param_4 + 4u) - f5);
    f3 = (f64)rdf32(param_3);
    f8 = (f64)(f32)(f1 - (f64)rdf32(param_6));
    f10 = (f64)(f32)(f1 - f3);
    f2 = (f64)rdf32(param_5 + 8u);
    f6 = (f64)(f32)((f64)rdf32(param_4) - f3);
    f9 = (f64)(f32)(f2 - (f64)rdf32(param_6 + 8u));
    f2 = (f64)(f32)(f2 - f5);
    f3 = (f64)(f32)((f64)rdf32(param_5 + 4u) - (f64)rdf32(param_6 + 4u));
    f4 = ppc_fmsubs(f9, f6, (f64)(f32)(f8 * f7));
    if ((f64)(f32)ppc_fabs(f4) > (f64)rdf32(0x80572254u)) {
        f0 = (f64)rdf32(0x80572250u);
        f4 = (f64)(f32)px_fdiv(ppc_fmsubs(f2, f6, (f64)(f32)(f7 * f10)), f4);
        if ((f4 > f0) || (f4 == f0)) {
            f0 = (f64)rdf32(0x80572258u);
            if ((f4 < f0) || (f4 == f0)) {
                if ((f64)(f32)ppc_fabs(f7) > (f64)(f32)ppc_fabs(f6)) {
                    f1 = (f64)(f32)px_fdiv(ppc_fnmsubs(f4, f9, f2), f7);
                } else {
                    f1 = (f64)(f32)px_fdiv(ppc_fnmsubs(f4, f8, f10), f6);
                }
                f0 = (f64)rdf32(0x80572250u);
                if ((f1 > f0) || (f1 == f0)) {
                    f0 = (f64)rdf32(0x80572258u);
                    if ((f1 < f0) || (f1 == f0)) {
                        f4 = (f64)(f32)(f0 - f4);
                        f1 = ppc_fmadds(f9, f4, (f64)rdf32(param_6 + 8u));
                        f0 = ppc_fmadds(f3, f4, (f64)rdf32(param_6 + 4u));
                        wrf32d(param_2, ppc_fmadds(f8, f4, (f64)rdf32(param_6)));
                        wrf32d(param_2 + 8u, f1);
                        wrf32d(param_2 + 4u, f0);
                        r3 = 1u;
                        return r3;
                    }
                }
            }
        }
    }
    a.f[0] = param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    r3 = tc_call(0x800500c8u, &a);
    if (r3 != 0u) {
        r3 = 1u;
    } else {
        a.f[0] = param_1;
        a.r[0] = param_2;
        a.r[1] = param_3;
        a.r[2] = param_4;
        a.r[3] = param_6;
        r3 = tc_call(0x800500c8u, &a);
    }
    return r3;
}
