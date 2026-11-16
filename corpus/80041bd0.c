#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80041bd0(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f1 = (f64)rdf32(0x80572018u);
    f5 = (f64)rdf32(0x80572020u);
    f4 = (f64)rdf32(0x80572024u);
    f3 = (f64)rdf32(0x80572028u);
    f2 = ppc_fmadds((f64)rdf32(0x8057201cu), (f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572040u)), f1);
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
    f6 = -f5;
    f1 = (f64)rdf32(0x80572018u);
    f5 = (f64)rdf32(0x80572034u);
    f4 = (f64)rdf32(0x80572038u);
    f3 = (f64)rdf32(0x80572028u);
    f2 = ppc_fmadds((f64)rdf32(0x8057201cu), (f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572040u)), f1);
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
    f3 = -f5;
    f2 = (f64)rdf32(0x8057203cu);
    f0 = (f64)rdf32(0x80572028u);
    wrf32d(param_1 + 0x10u, f6);
    wrf32d(param_1, f3);
    wrf32d(param_1 + 0x20u, f2);
    wrf32d(param_1 + 4u, -f6);
    wrf32d(param_1 + 0x14u, f3);
    wrf32d(param_1 + 0x24u, f2);
    wrf32d(param_1 + 8u, f2);
    wrf32d(param_1 + 0x18u, f2);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 0x1cu, f2);
    wrf32d(param_1 + 0x2cu, f2);
    return;
}
