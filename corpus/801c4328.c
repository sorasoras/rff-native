#include "tc_rt.h"

u32 fn_801c4328(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    r0 = rd32((u32)param_1 + 0x14u);
    wr32(0x817fdfd4u, rd32((u32)param_1 + 0x10u));
    wr32(0x817fdfd8u, r0);
    wr32(0x817fdfdcu, rd32((u32)param_1 + 0x18u));
    a.r[0] = 0x817fdfd4u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfd8u, (f64)rdf32(0x80575cfcu));
    a.r[0] = 0x817fdfd4u;
    f1 = tc_callf(0x80234428u, &a);
    if (f1 < (f64)rdf32(0x80575d48u)) {
        r3 = 0u;
    } else {
        a.r[0] = param_2;
        a.r[1] = (u32)param_1 + 0x10u;
        a.r[2] = 0x804dc8b0u;
        f1 = tc_callf(0x801c3248u, &a);
        f31 = (f64)(f32)(f1 * (f64)rdf32(0x80575d4cu));
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f31 = (f64)(f32)(f31 + f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f31;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        f0 = (f64)rdf32(0x80575cfcu);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        a.r[0] = param_2;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801c3208u, &a);
        a.f[0] = (f64)(f32)((f64)(f32)((f64)rdf32(0x80570950u) * (f64)rdf32(param_2 + 0xd38u)) * (f64)rdf32(param_2 + 0x1cu));
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802343c8u, &a);
        r3 = 1u;
        wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfc8u));
        wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfccu));
        wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfd0u));
    }
    return r3;
}
