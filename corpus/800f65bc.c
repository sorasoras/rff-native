#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800f65bc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f1 = (f64)rdf32(0x80573bb8u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    f0 = (f64)rdf32(param_2 + 0x1cu);
    f1 = (f64)(f32)((f64)rdf32(param_2 + 0x20u) + f1);
    wrf32d(param_2 + 0x20u, f1);
    if (f1 > f0) {
        r5 = rd32(param_2 + 0x10u);
        wr32(param_2, 0u);
        r0 = rd32(param_2 + 0x14u);
        wr32(param_1, r5);
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(param_2 + 0x18u));
    } else {
        r0 = rd32(param_2 + 0x14u);
        wr32(0x817fdfd8u, rd32(param_2 + 0x10u));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(param_2 + 0x18u));
        a.r[0] = 0x817fdfd8u;
        a.r[1] = param_2 + 4u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802343a4u, &a);
        a.f[0] = (f64)(f32)px_fdiv(f1, f0);
        a.f[1] = rdf64(0x80573bc0u);
        f1 = tc_callf(0x80262c74u, &a);
        f1 = (f64)(f32)f1;
        a.f[0] = f1;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = param_2 + 4u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x80234380u, &a);
        r0 = rd32(0x817fdfdcu);
        wr32(param_1, rd32(0x817fdfd8u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(0x817fdfe0u));
    }
    return;
}
