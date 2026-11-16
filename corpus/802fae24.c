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

f64 fn_802fae24(u32 param_1)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80577660u);
    if (f1 == (f64)rdf32(param_1)) {
        return f1;
    }
    if (rd32(param_1 + 0x10u) < rd32(param_1 + 8u)) {
        return f1;
    }
    f0 = (f64)(f32)((f64)rdf32(0x80577678u) * (f64)(f32)((f64)rdf32(0x8057767cu) * (f64)rdf32(param_1 + 0x14u)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe8u, f0);
    r5 = (u32)px_f2b(f0);
    if ((s32)r5 < 32) {
        r0 = (u32)(s8)rd8(r5 - 0x7fcb6178u);
    } else {
        if ((s32)r5 < 64) {
            r0 = (u32)(s8)rd8(0x20u - (r5 - 0x20u) - 0x7fcb6178u);
        } else {
            if ((s32)r5 < 96) {
                r0 = (u32)(s8)(0u - (u32)rd8(r5 - 0x7fcb61b8u));
            } else {
                r0 = (u32)(s8)(0u - (u32)rd8(0x20u - (r5 - 0x60u) - 0x7fcb6178u));
            }
        }
    }
    r0 = r0 ^ 0x80000000u;
    wr32(0x817fdfecu, r0);
    r0 = (u32)rd8(param_1 + 0xcu);
    wr32(0x817fdfe8u, 0x43300000u);
    f1 = (f64)(f32)((f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfe8u) - rdf64(0x80577670u)), (f64)rdf32(0x80577680u)) * (f64)rdf32(param_1)) * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80577688u)));
    return f1;
}
