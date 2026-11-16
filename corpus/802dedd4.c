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

u32 fn_802dedd4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 10;
    if ((u32)param_2 == 0xau) {
        r31 = rd32(param_3);
        f31 = (f64)rdf32(param_3 + 8u);
        f30 = (f64)rdf32(r31 + 0x30u);
        a.r[0] = r31;
        f1 = tc_callf(0x802e22c4u, &a);
        wrf32d(r31 + 0x2cu, f31);
        r3 = 3u;
        wrf32d(r31 + 0x30u, (f64)(f32)(f30 + f1));
    } else {
        if (c0lt && param_2 >= 9) {
            r31 = rd32(param_3);
            r30 = rd32(r31 + 0x58u);
            if ((s32)r30 > 0) {
                if ((u32)rd8(r31 + 0x43u) == 0u) {
                    a.r[0] = r31;
                    f1 = tc_callf(0x802e195cu, &a);
                } else {
                    f1 = (f64)rdf32(r31 + 0x44u);
                }
                f2 = rdf64(0x80577418u);
                f3 = (f64)rdf32(param_3 + 8u);
                f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f2) * f1);
                f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(r31 + 0x2cu) - f3), f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                f0 = px_b2f((u64)(((u32)px_f2b(f0) + 1u) ^ 0x80000000u) | 0x4330000000000000ull);
                f0 = (f64)(f32)(f0 - f2);
                f0 = (f64)(f32)(f1 * f0);
                f0 = (f64)(f32)(f3 + f0);
                wrf32d(r31 + 0x2cu, f0);
            }
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
    }
    return r3;
}
