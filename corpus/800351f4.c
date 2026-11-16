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

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

f64 fn_800351f4(f64 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0, f2 = 0.0, t1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_3;
    for (;;) {
        r0 = (u32)(s8)rd8(r4 + 2u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) break;
        if (!c0lt) {
            if (r0 != 7u) {
                return param_1;
            }
            r4 = rd32(r4 + 0xcu);
            a.f[0] = param_1;
            a.r[0] = (u32)param_2;
            a.r[1] = r4;
            f1 = tc_callf(0x80035178u, &a);
            r3 = tc_lastr();
            return f1;
        }
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            r4 = rd32(r4 + 0xcu);
            t1 = (f64)rdf32(r4);
            f1 = px_pack(t1, (f64)rdf32(r4));
            f2 = px_pack((f64)rdf32(r4 + 8u), 1.0);
            wrf32d((u32)param_2, px_lo(f1));
            wrf32d((u32)param_2 + 8u, px_hi(f2));
            return f1;
        }
        if (c0lt) {
            return param_1;
        }
        r4 = rd32(r4 + 0xcu);
        r12 = rd32(r4 + 0x14u);
        if (r12 != 0x800351f4u) {
            if (r12 == 0x817ff000u) {
                return param_1;
            }
            a.r[0] = (u32)param_2;
            a.r[1] = r4;
            a.f[0] = param_1;
            a.f[1] = 0.0;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            return f1;
        }
    }
    r4 = rd32(r4 + 0xcu);
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = r4;
    f1 = tc_callf(0x800350d8u, &a);
    r3 = tc_lastr();
    return f1;
}
