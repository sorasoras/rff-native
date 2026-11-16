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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pneg(f64 b)
{
    return px_b2f(px_f2b(b) ^ 0x8000000080000000ull);
}

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

f64 fn_80233aa8(f64 param_1, f64 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f5 = (f64)(f32)param_1;
    r0 = param_4 | 0x20u;
    f4 = (f64)(f32)param_2;
    f0 = (f64)rdf32(0x80576b54u);
    f2 = px_pneg(f5);
    f1 = (f64)rdf32(0x80576b50u);
    if (r0 == 0x78u) {
        wrf32d((u32)param_3, px_hi(f1));
        f1 = px_pmg00(f4, f2);
        wrf32d((u32)param_3 + 4u, px_lo(f0));
        wrf32d((u32)param_3 + 0xcu, px_lo(f0));
        wrf32d((u32)param_3 + 0x1cu, px_lo(f0));
        wrf32d((u32)param_3 + 0x2cu, px_hi(f0));
        wrf32d((u32)param_3 + 0x24u, px_lo(px_pmg00(f5, f4)));
        wrf32d((u32)param_3 + 0x14u, px_lo(f1));
        return f1;
    }
    if (r0 == 0x79u) {
        f3 = px_pmg00(f4, f0);
        wrf32d((u32)param_3 + 0x18u, px_lo(f0));
        f1 = px_pmg00(f0, f1);
        f2 = px_pmg00(f2, f0);
        f0 = px_pmg00(f5, f0);
        wrf32d((u32)param_3, px_lo(f3));
        wrf32d((u32)param_3 + 0x28u, px_lo(f3));
        wrf32d((u32)param_3 + 0x10u, px_lo(f1));
        wrf32d((u32)param_3 + 8u, px_lo(f0));
        wrf32d((u32)param_3 + 0x20u, px_lo(f2));
        return f1;
    }
    if (r0 == 0x7au) {
        wrf32d((u32)param_3 + 8u, px_lo(f0));
        f2 = px_pmg00(f4, f2);
        f1 = px_pmg00(f1, f0);
        wrf32d((u32)param_3 + 0x18u, px_lo(f0));
        wrf32d((u32)param_3 + 0x20u, px_lo(f0));
        wrf32d((u32)param_3 + 0x10u, px_lo(px_pmg00(f5, f4)));
        wrf32d((u32)param_3, px_lo(f2));
        wrf32d((u32)param_3 + 0x28u, px_lo(f1));
        return f1;
    }
    return f1;
}
