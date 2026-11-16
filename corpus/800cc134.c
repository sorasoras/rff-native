#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800cc134(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800ccac8u, &a);
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80572f78u);
        wrf32d(param_4, f0);
        wrf32d(param_5, f0);
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x800cc578u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x8025e7a4u, &a);
        r31 = r3;
        a.r[0] = param_1;
        r3 = tc_call(0x800cb968u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        (void)tc_call(0x800cb950u, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x800cc578u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        f1 = tc_callf(0x800cc714u, &a);
        f31 = f1;
        a.r[0] = param_1;
        r3 = tc_call(0x800cb958u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        (void)tc_call(0x800cb950u, &a);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        f1 = tc_callf(0x800cc760u, &a);
        if ((f1 > f31) || (f1 == f31)) {
            f4 = (f64)(f32)((f64)(f32)(f1 - f31) * (f64)rdf32(0x80572fa8u));
            f2 = rdf64(0x80572f98u);
            f1 = ppc_fnmsubs((f64)rdf32(0x80572facu), f4, f1);
            wrf32d(param_5, f4);
            wrf32d(param_6, (f64)(f32)px_fdiv(f1, (f64)(f32)(px_b2f((u64)r31 | 0x4330000000000000ull) - f2)));
        } else {
            f0 = (f64)(f32)(px_b2f((u64)r31 | 0x4330000000000000ull) - rdf64(0x80572f98u));
            wrf32d(param_5, (f64)(f32)(-(f64)(f32)(f31 - f1) * (f64)rdf32(0x80572fa8u)));
            f0 = (f64)(f32)px_fdiv(f31, f0);
            wrf32d(param_6, f0);
        }
        f31 = (f64)(f32)((f64)rdf32(param_5) + (f64)rdf32(param_1 + 0x18u));
        a.r[0] = param_1;
        f1 = tc_callf(0x800cd058u, &a);
        if (f31 < f1) {
            f1 = (f64)(f32)(f1 - f31);
            wrf32d(param_5, (f64)(f32)((f64)rdf32(param_5) + f1));
            wrf32d(param_4, (f64)(f32)((f64)rdf32(param_4) + f1));
        } else {
            wrf32d(param_4, (f64)rdf32(0x80572f78u));
        }
    }
    return;
}
