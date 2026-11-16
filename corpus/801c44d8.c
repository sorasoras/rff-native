#include "tc_rt.h"

void fn_801c44d8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(param_2 + 0xd30u, 1u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x214u), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575cfcu);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2463u;
    (void)tc_call(0x8010a75cu, &a);
    f0 = (f64)rdf32(0x80575cfcu);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfe4u, (f64)rdf32(param_2 + 0x17cu));
    wrf32d(0x817fdfe8u, (f64)rdf32(param_2 + 0x180u));
    wrf32d(0x817fdfecu, (f64)rdf32(param_2 + 0x184u));
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x801c3208u, &a);
    a.f[0] = (f64)(f32)((f64)(f32)(-(f64)rdf32(0x80570960u) * (f64)rdf32(param_2 + 0xd38u)) * (f64)rdf32(param_2 + 0x1cu));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x80234380u, &a);
    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfe4u));
    wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfecu));
    wr32((u32)param_1 + 8u, 0u);
    return;
}
