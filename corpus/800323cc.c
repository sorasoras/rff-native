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

f64 fn_800323cc(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    r3 = tc_call(0x802558e4u, &a);
    r6 = rd32(param_2 + 0xcu);
    r7 = 0u;
    r5 = (u32)rd16(param_2);
    r4 = r6;
    ctr = r5;
    if ((s32)r5 > 0) {
        do {
            if (r3 < (rd32(r4) & 0xffffffu)) {
                r3 = r7 - 1u;
                wr32(param_3, r3);
                wr32(param_4, r7);
                r4 = rd32(r6 + ((r7 << 2u) & 0xfffffffcu));
                if ((r4 & 0x10000000u) != 0u) {
                    f1 = (f64)rdf32(0x80571e50u);
                    return f1;
                }
                if ((r4 & 0x20000000u) != 0u) {
                    f1 = (f64)rdf32(0x80571e4cu);
                    return f1;
                }
                r0 = (r3 << 2u) & 0xfffffffcu;
                r5 = rd32(r6 + r0);
                r0 = rd32(r6 + r0 + 4u);
                r0 = r0 & 0xffffffu;
                f2 = rdf64(0x80571e58u);
                f3 = (f64)(f32)(px_b2f((u64)(r5 & 0xffffffu) | 0x4330000000000000ull) - f2);
                f1 = (f64)(f32)px_fdiv((f64)(f32)(param_1 - f3), (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2) - f3));
                return f1;
            }
            r4 = r4 + 4u;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr32(param_3, r5 - 1u);
    f1 = (f64)rdf32(0x80571e50u);
    wr32(param_4, 0u);
    return f1;
}
