#include "tc_rt.h"

void fn_801e0360(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0x1f0u);
    wr32(0x817fdfe4u, rd32((u32)param_1 + 0x1ecu));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32((u32)param_1 + 0x1f4u));
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdfd8u, rd32(param_2));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(param_2 + 8u));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfd8u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 < (f64)rdf32(0x805709ccu)) {
        a.r[0] = param_2;
        f1 = tc_callf(0x801dc33cu, &a);
        wrf32d(param_2 + 4u, f1);
    } else {
        a.r[0] = 0x817fdfd8u;
        (void)tc_call(0x801dc450u, &a);
        f1 = tc_callf(0x80040a00u, &a);
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80576218u));
        f1 = (f64)(f32)((f64)rdf32(0x80576204u) * f1);
        f1 = (f64)(f32)((f64)rdf32(0x8057629cu) * f1);
        a.f[0] = f1;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x801dc33cu, &a);
        wrf32d(0x817fdfdcu, f1);
        wrf32d(param_2, (f64)rdf32(0x817fdfd8u));
        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfdcu));
        wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfe0u));
    }
    return;
}
