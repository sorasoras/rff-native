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

void fn_802f1a2c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x4cu) == 0u) {
        r5 = rd32((u32)param_1 + 0x44u);
        r0 = rd32((u32)param_1 + 0x48u);
        if ((s32)r0 >= (s32)r5) {
            f1 = (f64)rdf32((u32)param_1 + 0x40u);
        } else {
            r0 = r0 ^ 0x80000000u;
            wr32(0x817fdfecu, r0);
            f4 = rdf64(0x80577540u);
            wr32(0x817fdfe8u, 0x43300000u);
            f2 = (f64)rdf32((u32)param_1 + 0x3cu);
            f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x40u) - f2)), (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
        }
        f0 = (f64)rdf32(0x80577538u);
        wrf32d((u32)param_1 + 0x3cu, f1);
        wrf32d((u32)param_1 + 0x40u, f0);
        wr32((u32)param_1 + 0x44u, 3u);
        wr32((u32)param_1 + 0x48u, 0u);
        wr32((u32)param_1 + 0x50u, 0xffffffffu);
        a.r[0] = 0x802f1af4u;
        r3 = tc_call(0x80242bc0u, &a);
        wr32((u32)param_1 + 0x4cu, r3);
    }
    return;
}
