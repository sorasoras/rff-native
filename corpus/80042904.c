#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80042904(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    f1 = (f64)rdf32(0x80572050u);
    f5 = (f64)rdf32(0x80572058u);
    f4 = (f64)rdf32(0x8057205cu);
    f3 = (f64)rdf32(0x80572060u);
    f2 = ppc_fmadds((f64)rdf32(0x80572054u), (f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572078u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80572068u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80572064u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80572064u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
        }
    }
    f7 = -f5;
    f1 = (f64)rdf32(0x80572050u);
    f4 = (f64)rdf32(param_2 + 4u);
    f3 = (f64)rdf32(param_2 + 8u);
    f6 = ppc_fmadds((f64)rdf32(0x80572054u), (f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572078u)), f1);
    wrf32d(param_1, (f64)(f32)(f7 * (f64)rdf32(param_2)));
    f2 = (f64)(f32)(f7 * f4);
    f4 = (f64)rdf32(0x8057206cu);
    f0 = (f64)(f32)(f7 * f3);
    f3 = (f64)rdf32(0x80572070u);
    wrf32d(param_1 + 4u, f2);
    f2 = (f64)rdf32(0x80572060u);
    wrf32d(param_1 + 8u, f0);
    if (!((f6 < f1) || (f6 == f1))) {
        f0 = (f64)rdf32(0x80572068u);
        if (!(f6 < f0)) {
            f6 = (f64)(f32)((f64)rdf32(0x80572064u) - (f64)(f32)(f6 - f0));
            f0 = (f64)(f32)(f6 * f6);
            f4 = ppc_fmsubs(f4, f0, f3);
            f4 = ppc_fmadds(f4, f0, f2);
        } else {
            f6 = (f64)(f32)(f6 - f1);
            f0 = (f64)(f32)(f6 * f6);
            f4 = ppc_fmsubs(f4, f0, f3);
            f4 = ppc_fmadds(f4, f0, f2);
            f4 = -f4;
        }
    } else {
        f1 = (f64)rdf32(0x80572064u);
        if (!((f6 < f1) || (f6 == f1))) {
            f6 = (f64)(f32)(f1 - (f64)(f32)(f6 - f1));
            f0 = (f64)(f32)(f6 * f6);
            f4 = ppc_fmsubs(f4, f0, f3);
            f4 = ppc_fmadds(f4, f0, f2);
            f4 = -f4;
        } else {
            f0 = (f64)(f32)(f6 * f6);
            f4 = ppc_fmsubs(f4, f0, f3);
            f4 = ppc_fmadds(f4, f0, f2);
        }
    }
    wrf32d(param_1 + 0xcu, -f4);
    return;
}
