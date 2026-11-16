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

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

f64 fn_800f6dac(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 c0lt = 0, r7 = 0, t6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f0 = (f64)rdf32(0x80573bd0u);
    wr32((u32)param_1 + 0x30u, 1u);
    wrf32d((u32)param_1 + 0x50u, f0);
    r7 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d((u32)param_1 + 0x34u, (f64)rdf32(r7 + 0x140u));
    wrf32d((u32)param_1 + 0x38u, (f64)rdf32(r7 + 0x144u));
    wrf32d((u32)param_1 + 0x3cu, (f64)rdf32(r7 + 0x148u));
    f1 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    f2 = px_pack((f64)rdf32((u32)param_2 + 8u), 1.0);
    t6 = (u32)param_1 + 0x40u;
    wrf32d(t6, px_hi(f1));
    wrf32d(t6, px_lo(f1));
    wrf32d((u32)param_1 + 0x48u, px_hi(f2));
    c0lt = param_4 < 2;
    wrf32d((u32)param_1 + 0x4cu, (f64)(f32)px_psub(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull), rdf64(0x80573bd8u)));
    if ((u32)param_4 != 2u) {
        if (c0lt) {
            c0lt = param_4 < 0;
            if ((u32)param_4 == 0u) {
                wr32((u32)param_1 + 0x54u, 0x800f6380u);
                return f1;
            }
            if (!c0lt) {
                wr32((u32)param_1 + 0x54u, 0x800f6460u);
                return f1;
            }
            wr32((u32)param_1 + 0x54u, 0x800f6380u);
            return f1;
        }
        if (param_4 >= 4) {
            wr32((u32)param_1 + 0x54u, 0x800f6380u);
            return f1;
        }
        wr32((u32)param_1 + 0x54u, 0x800f66b0u);
        return f1;
    }
    wr32((u32)param_1 + 0x54u, 0x800f65bcu);
    return f1;
}
