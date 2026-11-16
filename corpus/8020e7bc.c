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

u32 fn_8020e7bc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1) + 0xc4u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r6 = 0u;
    r3 = rd32(0x80571398u) + ((r3 << 2u) & 0xfffffffcu);
    r5 = rd32(r3 + 0xccu);
    if (r5 != 0x21u) {
        r4 = (u32)rd16((r5 * 0x38u) - 0x7fb65000u);
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r4) >> 3);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x19u;
        r6 = r4 - r0;
    }
    f1 = (f64)rdf32(0x80576810u);
    if (r5 != 0x21u) {
        if ((u32)rd16((r5 * 0x38u) - 0x7fb65000u) < 0xfau) {
            f1 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576820u)), (f64)rdf32(0x80576814u));
        } else {
            f1 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576820u)), (f64)rdf32(0x80576818u));
        }
    }
    f0 = (f64)rdf32(0x8057681cu);
    if (f1 > f0) {
        f1 = f0;
    }
    a.f[0] = f1;
    a.r[0] = param_1;
    (void)tc_call(0x80101108u, &a);
    return 0u;
}
