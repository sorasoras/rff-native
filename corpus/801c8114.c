#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801c8114(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    f2 = (f64)rdf32((u32)param_1 + 0x14cu);
    f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x144u) + (f64)rdf32((u32)param_1 + 0x148u));
    if (f3 > f2) {
        f3 = f2;
    }
    r5 = rd32((u32)param_1 + 4u);
    f4 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x13cu) + f3);
    f1 = (f64)rdf32((u32)param_1 + 0x140u);
    r4 = rd32((u32)param_1 + 8u);
    r0 = rd32((u32)param_1 + 0xcu);
    wr32(0x817fdfecu, r4);
    wr32(0x817fdff0u, r0);
    if ((f4 > f1) || (f4 == f1)) {
        r0 = rd32((u32)param_1 + 0x158u);
        f4 = f1;
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x130u) + f1);
        wr32((u32)param_1 + 0x124u, 8u);
        wrf32d(0x817fdfecu, f0);
        if (r0 != 0u) {
            wr32((u32)param_1 + 0x124u, 7u);
        }
        f0 = (f64)rdf32(0x80575db8u);
        wrf32d((u32)param_1 + 0x15cu, (f64)rdf32(0x804890c8u));
        wrf32d((u32)param_1 + 0x160u, (f64)rdf32(0x804890ccu));
        wrf32d((u32)param_1 + 0x164u, (f64)rdf32(0x804890d0u));
        wrf32d((u32)param_1 + 0x168u, f0);
    } else {
        wrf32d(0x817fdfecu, (f64)(f32)((f64)px_w2f(r4) + f3));
    }
    f1 = (f64)rdf32(0x817fdfecu);
    f0 = (f64)rdf32(0x817fdff0u);
    wrf32d((u32)param_1 + 0x144u, f3);
    wrf32d((u32)param_1 + 0x13cu, f4);
    wrf32d((u32)param_1 + 4u, (f64)px_w2f(r5));
    wrf32d((u32)param_1 + 8u, f1);
    wrf32d((u32)param_1 + 0xcu, f0);
    return;
}
