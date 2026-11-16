#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801c7f20(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    f1 = (f64)rdf32((u32)param_1 + 0x168u);
    r5 = rd32(0x804890e4u);
    r0 = rd32(0x804890e8u);
    wr32(0x817fdfd8u, rd32(0x804890e0u));
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32(0x817fdfd8u);
    f0 = (f64)rdf32(0x80575da0u);
    wrf32d((u32)param_1 + 0x15cu, f1);
    wrf32d((u32)param_1 + 0x160u, (f64)rdf32(0x817fdfdcu));
    wrf32d((u32)param_1 + 0x164u, (f64)rdf32(0x817fdfe0u));
    if ((f1 > f0) || (f1 == f0)) {
        wrf32d((u32)param_1 + 0x15cu, (f64)rdf32(0x804890e0u));
        wrf32d((u32)param_1 + 0x160u, (f64)rdf32(0x804890e4u));
        wrf32d((u32)param_1 + 0x164u, (f64)rdf32(0x804890e8u));
        wr32((u32)param_1 + 0x124u, 2u);
    }
    f3 = (f64)rdf32((u32)param_1 + 0x160u);
    f2 = (f64)rdf32((u32)param_1 + 0x164u);
    f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80575da0u), (f64)(f32)((f64)rdf32(0x80575dccu) * (f64)rdf32((u32)param_1 + 0x154u)));
    f0 = (f64)rdf32((u32)param_1 + 0x168u);
    wrf32d((u32)param_1 + 0x1cu, (f64)rdf32((u32)param_1 + 0x15cu));
    wrf32d((u32)param_1 + 0x20u, f3);
    wrf32d((u32)param_1 + 0x24u, f2);
    f0 = (f64)(f32)(f0 + f1);
    wrf32d((u32)param_1 + 0x168u, f0);
    return;
}
