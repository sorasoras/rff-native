#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_802d8a84(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_3 < 10;
    if ((u32)param_3 == 0xau) {
        r30 = rd32(param_4);
        a.r[0] = r30;
        f1 = tc_callf(0x802d7324u, &a);
        wrf32d(param_2 + 8u, f1);
        a.r[0] = r30;
        f1 = tc_callf(0x802d732cu, &a);
        wrf32d(param_2 + 4u, f1);
        r31 = rd32(param_4);
        f30 = (f64)rdf32(param_4 + 8u);
        a.r[0] = r31;
        f1 = tc_callf(0x802d8e04u, &a);
        f31 = f1;
        a.r[0] = r31;
        f1 = tc_callf(0x802d732cu, &a);
        a.f[0] = f30;
        a.f[1] = (f64)(f32)(f1 + f31);
        a.r[0] = r31;
        (void)tc_call(0x802d72e8u, &a);
        a.r[0] = r30;
        f1 = tc_callf(0x802d7324u, &a);
        wrf32d(param_2, f1);
        a.r[0] = rd32(param_4);
        f1 = tc_callf(0x802d70d4u, &a);
        f31 = f1;
        a.r[0] = r30;
        f1 = tc_callf(0x802d732cu, &a);
        f0 = (f64)(f32)(f1 + f31);
        f6 = (f64)rdf32(param_2 + 4u);
        f7 = (f64)rdf32(param_2);
        f5 = (f64)rdf32(param_2 + 8u);
        f2 = (f64)(f32)(f0 - f6);
        f3 = (f64)(f32)(f5 - f7);
        f1 = ppc_fsel(f2, f6, f0);
        f4 = ppc_fsel(f3, f7, f5);
        f3 = ppc_fsel(f3, f5, f7);
        f0 = ppc_fsel(f2, f0, f6);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2, f4);
        wrf32d(param_2 + 8u, f3);
        wrf32d(param_2 + 0xcu, f0);
    } else if (c0lt && param_3 >= 9) {
        r29 = rd32(param_4);
        a.r[0] = r29;
        f1 = tc_callf(0x802d7324u, &a);
        wrf32d(param_2, f1);
        r30 = rd32(param_4);
        a.r[0] = r30;
        r3 = tc_call(0x802d8ea8u, &a);
        r31 = r3;
        if ((s32)r3 > 0) {
            a.r[0] = r30;
            r3 = tc_call(0x802d719cu, &a);
            if (r3 == 0u) {
                a.r[0] = r30;
                f1 = tc_callf(0x802d7070u, &a);
                f31 = f1;
            } else {
                a.r[0] = r30;
                f1 = tc_callf(0x802d71a4u, &a);
                f31 = f1;
            }
            a.r[0] = r30;
            f1 = tc_callf(0x802d7324u, &a);
            f3 = (f64)rdf32(param_4 + 8u);
            f2 = rdf64(0x80348af8u);
            f4 = (f64)(f32)(f1 - f3);
            f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull) - f2) * f31);
            f0 = (f64)(f32)px_fdiv(f4, f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            f0 = px_b2f((u64)(((u32)px_f2b(f0) + 1u) ^ 0x80000000u) | 0x4330000000000000ull);
            f0 = (f64)(f32)(f0 - f2);
            f0 = (f64)(f32)(f1 * f0);
            a.f[0] = (f64)(f32)(f3 + f0);
            a.r[0] = r30;
            (void)tc_call(0x802d72f4u, &a);
        }
        a.r[0] = r29;
        f1 = tc_callf(0x802d7324u, &a);
        wrf32d(param_2 + 8u, f1);
        a.r[0] = r29;
        f1 = tc_callf(0x802d732cu, &a);
        wrf32d(param_2 + 4u, f1);
        a.r[0] = r29;
        f1 = tc_callf(0x802d70d4u, &a);
        f2 = (f64)rdf32(param_2 + 4u);
        f6 = (f64)rdf32(param_2);
        f0 = (f64)(f32)(f2 + f1);
        f4 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)(f32)(f4 - f6);
        f3 = (f64)(f32)(f0 - f2);
        f5 = ppc_fsel(f1, f6, f4);
        f4 = ppc_fsel(f1, f4, f6);
        f1 = ppc_fsel(f3, f2, f0);
        f0 = ppc_fsel(f3, f0, f2);
        wrf32d(param_2, f5);
        wrf32d(param_2 + 8u, f4);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 0xcu, f0);
    }
    return;
}
