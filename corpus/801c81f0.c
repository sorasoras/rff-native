#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801c81f0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        wr32((u32)param_1 + 0x124u, 1u);
    } else {
        wr32((u32)param_1 + 0x124u, 3u);
    }
    f3 = (f64)rdf32(0x80575db8u);
    f1 = (f64)rdf32(0x80575da0u);
    f2 = (f64)rdf32(0x80575dd4u);
    f0 = (f64)rdf32(0x80575dd8u);
    wrf32d((u32)param_1 + 0x138u, (f64)rdf32(0x80575dd0u));
    wrf32d((u32)param_1 + 0x13cu, f3);
    wrf32d((u32)param_1 + 0x140u, f2);
    wrf32d((u32)param_1 + 0x144u, f3);
    wrf32d((u32)param_1 + 0x148u, f1);
    wrf32d((u32)param_1 + 0x14cu, f0);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da490u, &a);
    r3 = rd32((u32)param_1 + 4u);
    f3 = (f64)rdf32((u32)param_1 + 0x140u);
    wr32(0x817fdff0u, rd32((u32)param_1 + 0xcu));
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x130u) - f3);
    f0 = (f64)rdf32(0x817fdff0u);
    wr32((u32)param_1 + 0x74u, rd32((u32)param_1 + 0x74u) & 0xf7ffffffu);
    wrf32d((u32)param_1 + 4u, (f64)px_w2f(r3));
    wrf32d((u32)param_1 + 8u, f2);
    wrf32d((u32)param_1 + 0xcu, f0);
    return;
}
