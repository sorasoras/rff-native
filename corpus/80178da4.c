#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80178da4(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = (u32)(s16)rd16((u32)param_1 + 0x140u);
    f1 = (f64)rdf32(0x80574fc0u);
    f5 = (f64)rdf32(0x80574fc4u);
    f4 = (f64)rdf32(0x80574fc8u);
    f3 = (f64)rdf32(0x80574fa8u);
    f2 = ppc_fmadds((f64)rdf32(0x80574fa0u), (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574f98u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    f31 = -f5;
    f1 = (f64)rdf32(0x80574fc0u);
    f5 = (f64)rdf32(0x80574fd4u);
    f4 = (f64)rdf32(0x80574fd8u);
    f2 = ppc_fmadds((f64)rdf32(0x80574fa0u), (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574f98u)), f1);
    f3 = (f64)rdf32(0x80574fa8u);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    f1 = (f64)rdf32(0x80574fc0u);
    f5 = (f64)rdf32(0x80574fd4u);
    f4 = (f64)rdf32(0x80574fd8u);
    f3 = (f64)rdf32(0x80574fa8u);
    f2 = ppc_fmadds((f64)rdf32(0x80574fa0u), (f64)(f32)(px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0x142u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574f98u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    f3 = rdf64(0x80574f98u);
    f0 = (f64)rdf32(0x80574fa0u);
    f1 = (f64)rdf32(0x80574fc0u);
    f2 = px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0x142u) ^ 0x80000000u) | 0x4330000000000000ull);
    wrf32d((u32)param_1 + 0x10cu, (f64)(f32)(f31 * -f5));
    f2 = (f64)(f32)(f2 - f3);
    f5 = (f64)rdf32(0x80574fc4u);
    wrf32d((u32)param_1 + 0x110u, f6);
    f4 = (f64)rdf32(0x80574fc8u);
    f2 = ppc_fmadds(f0, f2, f1);
    f3 = (f64)rdf32(0x80574fa8u);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    f1 = (f64)rdf32((u32)param_1 + 0x128u);
    wrf32d((u32)param_1 + 0x114u, (f64)(f32)(f31 * -f5));
    r3 = (u32)param_1 + 0x10cu;
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32(0x80574fc0u);
    f5 = (f64)rdf32(0x80574fd4u);
    f4 = (f64)rdf32(0x80574fd8u);
    f3 = (f64)rdf32(0x80574fa8u);
    f2 = ppc_fmadds((f64)rdf32(0x80574fa0u), (f64)(f32)(px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0x142u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574f98u)), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    f4 = (f64)rdf32(0x80574fa4u);
    f3 = rdf64(0x80574f98u);
    f5 = (f64)(f32)(f31 * -f5);
    f0 = (f64)rdf32(0x80574fa0u);
    f2 = px_b2f((u64)((u32)(s16)rd16((u32)param_1 + 0x142u) ^ 0x80000000u) | 0x4330000000000000ull);
    wrf32d((u32)param_1 + 0x118u, f5);
    f2 = (f64)(f32)(f2 - f3);
    f1 = (f64)rdf32(0x80574fc0u);
    wrf32d((u32)param_1 + 0x11cu, f4);
    f5 = (f64)rdf32(0x80574fc4u);
    f2 = ppc_fmadds(f0, f2, f1);
    f4 = (f64)rdf32(0x80574fc8u);
    f3 = (f64)rdf32(0x80574fa8u);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80574fd0u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80574fccu) - (f64)(f32)(f2 - f0));
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
        f1 = (f64)rdf32(0x80574fccu);
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
    r3 = (u32)param_1 + 0x118u;
    f1 = (f64)rdf32((u32)param_1 + 0x12cu);
    wrf32d((u32)param_1 + 0x120u, (f64)(f32)(f31 * -f5));
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    wrf32d((u32)param_1 + 0x11cu, -(f64)rdf32((u32)param_1 + 0x138u));
    return;
}
