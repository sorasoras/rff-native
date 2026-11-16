#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80041da0(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    f1 = (f64)rdf32(0x80572018u);
    f5 = (f64)rdf32(0x80572020u);
    f4 = (f64)rdf32(0x80572024u);
    f3 = (f64)rdf32(0x80572028u);
    f2 = ppc_fmadds((f64)rdf32(0x8057201cu), (f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572040u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80572030u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x8057202cu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x8057202cu);
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
    f8 = -f5;
    f1 = (f64)rdf32(0x80572018u);
    f5 = (f64)rdf32(0x80572034u);
    f4 = (f64)rdf32(0x80572038u);
    f3 = (f64)rdf32(0x80572028u);
    f2 = ppc_fmadds((f64)rdf32(0x8057201cu), (f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572040u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80572030u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x8057202cu) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x8057202cu);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = -f5;
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
        }
    }
    f9 = -f5;
    f0 = (f64)rdf32(0x8057203cu);
    f5 = (f64)rdf32(param_2 + 8u);
    f7 = (f64)rdf32(param_2);
    f6 = (f64)rdf32(param_2 + 4u);
    f12 = (f64)(f32)(f5 * f8);
    f1 = (f64)rdf32(0x80572028u);
    wrf32d(param_1 + 0xcu, f0);
    f13 = (f64)(f32)(f1 - f9);
    f11 = (f64)(f32)(f7 * f6);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x2cu, f0);
    f1 = ppc_fmadds(f13, (f64)(f32)(f6 * f6), f9);
    wrf32d(param_1, ppc_fmadds(f13, (f64)(f32)(f7 * f7), f9));
    f4 = (f64)(f32)(f6 * f5);
    f0 = ppc_fmadds(f13, (f64)(f32)(f5 * f5), f9);
    wrf32d(param_1 + 0x10u, ppc_fmadds(f13, f11, f12));
    f3 = (f64)(f32)(f7 * f8);
    wrf32d(param_1 + 4u, ppc_fmsubs(f13, f11, f12));
    f5 = (f64)(f32)(f5 * f7);
    f6 = (f64)(f32)(f6 * f8);
    wrf32d(param_1 + 0x14u, f1);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0x24u, ppc_fmadds(f13, f4, f3));
    wrf32d(param_1 + 0x20u, ppc_fmsubs(f13, f5, f6));
    wrf32d(param_1 + 8u, ppc_fmadds(f13, f5, f6));
    wrf32d(param_1 + 0x18u, ppc_fmsubs(f13, f4, f3));
    return;
}
