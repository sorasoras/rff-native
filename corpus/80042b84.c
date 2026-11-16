#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80042b84(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f2 = ppc_fmadds((f64)rdf32(param_3 + 0xcu), (f64)rdf32(param_4 + 0xcu), ppc_fmadds((f64)rdf32(param_3 + 8u), (f64)rdf32(param_4 + 8u), ppc_fmadds((f64)rdf32(param_3), (f64)rdf32(param_4), (f64)(f32)((f64)rdf32(param_3 + 4u) * (f64)rdf32(param_4 + 4u)))));
    f30 = (f64)rdf32(0x80572060u);
    if (f2 < (f64)rdf32(0x80572084u)) {
        f2 = -f2;
        f30 = -f30;
    }
    f0 = (f64)rdf32(0x8057208cu);
    if (!((f2 < f0) || (f2 == f0))) {
        f30 = (f64)(f32)(f30 * param_1);
        f0 = (f64)(f32)((f64)rdf32(0x80572060u) - param_1);
    } else {
        a.f[0] = f2;
        f1 = tc_callf(0x80262c60u, &a);
        f31 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f5 = (f64)rdf32(0x80572060u);
        f1 = (f64)(f32)px_fdiv(f5, f1);
        f2 = (f64)rdf32(0x80572050u);
        f7 = (f64)rdf32(0x80572058u);
        f6 = (f64)rdf32(0x8057205cu);
        f3 = ppc_fmadds((f64)rdf32(0x80572054u), (f64)(f32)((f64)rdf32(0x80572088u) * (f64)(f32)((f64)(f32)(f5 - param_1) * f31)), f2);
        if (!((f3 < f2) || (f3 == f2))) {
            f0 = (f64)rdf32(0x80572068u);
            if (!(f3 < f0)) {
                f3 = (f64)(f32)((f64)rdf32(0x80572064u) - (f64)(f32)(f3 - f0));
                f0 = (f64)(f32)(f3 * f3);
                f7 = ppc_fmsubs(f7, f0, f6);
                f7 = ppc_fmadds(f7, f0, f5);
                f7 = (f64)(f32)(f7 * f3);
                f7 = -f7;
            } else {
                f3 = (f64)(f32)(f3 - f2);
                f0 = (f64)(f32)(f3 * f3);
                f7 = ppc_fmsubs(f7, f0, f6);
                f7 = ppc_fmadds(f7, f0, f5);
                f7 = (f64)(f32)(f7 * f3);
                f7 = -f7;
            }
        } else {
            f2 = (f64)rdf32(0x80572064u);
            if (!((f3 < f2) || (f3 == f2))) {
                f3 = (f64)(f32)(f2 - (f64)(f32)(f3 - f2));
                f0 = (f64)(f32)(f3 * f3);
                f7 = ppc_fmsubs(f7, f0, f6);
                f7 = ppc_fmadds(f7, f0, f5);
                f7 = (f64)(f32)(f7 * f3);
            } else {
                f0 = (f64)(f32)(f3 * f3);
                f7 = ppc_fmsubs(f7, f0, f6);
                f7 = ppc_fmadds(f7, f0, f5);
                f7 = (f64)(f32)(f7 * f3);
            }
        }
        f3 = (f64)rdf32(0x80572050u);
        f0 = (f64)(f32)(f1 * -f7);
        f7 = (f64)rdf32(0x80572058u);
        f6 = (f64)rdf32(0x8057205cu);
        f4 = ppc_fmadds((f64)rdf32(0x80572054u), (f64)(f32)((f64)rdf32(0x80572088u) * (f64)(f32)(param_1 * f31)), f3);
        f5 = (f64)rdf32(0x80572060u);
        if (!((f4 < f3) || (f4 == f3))) {
            f2 = (f64)rdf32(0x80572068u);
            if (!(f4 < f2)) {
                f4 = (f64)(f32)((f64)rdf32(0x80572064u) - (f64)(f32)(f4 - f2));
                f2 = (f64)(f32)(f4 * f4);
                f7 = ppc_fmsubs(f7, f2, f6);
                f7 = ppc_fmadds(f7, f2, f5);
                f7 = (f64)(f32)(f7 * f4);
                f7 = -f7;
            } else {
                f4 = (f64)(f32)(f4 - f3);
                f2 = (f64)(f32)(f4 * f4);
                f7 = ppc_fmsubs(f7, f2, f6);
                f7 = ppc_fmadds(f7, f2, f5);
                f7 = (f64)(f32)(f7 * f4);
                f7 = -f7;
            }
        } else {
            f3 = (f64)rdf32(0x80572064u);
            if (!((f4 < f3) || (f4 == f3))) {
                f4 = (f64)(f32)(f3 - (f64)(f32)(f4 - f3));
                f2 = (f64)(f32)(f4 * f4);
                f7 = ppc_fmsubs(f7, f2, f6);
                f7 = ppc_fmadds(f7, f2, f5);
                f7 = (f64)(f32)(f7 * f4);
            } else {
                f2 = (f64)(f32)(f4 * f4);
                f7 = ppc_fmsubs(f7, f2, f6);
                f7 = ppc_fmadds(f7, f2, f5);
                f7 = (f64)(f32)(f7 * f4);
            }
        }
        f1 = (f64)(f32)(f1 * -f7);
        f30 = (f64)(f32)(f30 * f1);
    }
    f5 = ppc_fmadds(f0, (f64)rdf32(param_3 + 4u), (f64)(f32)(f30 * (f64)rdf32(param_4 + 4u)));
    f3 = ppc_fmadds(f0, (f64)rdf32(param_3 + 8u), (f64)(f32)(f30 * (f64)rdf32(param_4 + 8u)));
    f1 = (f64)rdf32(param_3 + 0xcu);
    f2 = (f64)(f32)(f30 * (f64)rdf32(param_4 + 0xcu));
    wrf32d(param_2, ppc_fmadds(f0, (f64)rdf32(param_3), (f64)(f32)(f30 * (f64)rdf32(param_4))));
    f0 = ppc_fmadds(f0, f1, f2);
    wrf32d(param_2 + 4u, f5);
    wrf32d(param_2 + 8u, f3);
    wrf32d(param_2 + 0xcu, f0);
    return;
}
