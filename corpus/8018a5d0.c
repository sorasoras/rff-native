#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_8018a5d0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0;
    f64 f1 = 0.0, f3 = 0.0;
    (void)param_1;
    r6 = (u32)rd8(0x80492821u);
    r0 = (u32)rd8(((r6 << 2u) & 0xfffffffcu) + r6 - 0x7fcb0284u);
    if (r0 > param_2) {
        r0 = 0x18u - r0;
        r0 = r0 + param_2;
        f3 = rdf64(0x80575270u);
        f1 = ppc_fmadds((f64)rdf32(0x80575268u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f3));
    } else {
        r0 = param_2 - r0;
        f3 = rdf64(0x80575270u);
        f1 = ppc_fmadds((f64)rdf32(0x80575268u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f3));
    }
    return f1;
}
