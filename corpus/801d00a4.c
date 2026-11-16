#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801d00a4(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = 0u;
    if (rd32((u32)param_1 + 0xd00u) == rd32(0x80575f58u)) {
        r5 = 1u;
    }
    r31 = 0xbu;
    if (r5 == 0u) {
        r3 = 0xbu;
    } else {
        r0 = rd32((u32)param_1 + 0xd18u) + 1u;
        f2 = rdf64(0x80575ec8u);
        f0 = (f64)(f32)((f64)rdf32(0x80575ea0u) * (f64)rdf32((u32)param_1 + 0xe18u));
        wr32((u32)param_1 + 0xd18u, r0);
        if ((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2) < f0) {
            r3 = 0xbu;
        } else {
            f31 = (f64)rdf32((u32)param_1 + 0xe14u);
            wr32((u32)param_1 + 0xd18u, 0u);
            f1 = tc_callf(0x80040a00u, &a);
            f0 = (f64)(f32)((f64)rdf32(0x80575f38u) * f1);
            c0lt = f0 < f31;
            if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                r31 = 1u;
            }
            r3 = r31;
        }
    }
    return r3;
}
