#include "tc_rt.h"

void fn_8015d690(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fddc0u, rd32(0x817fdfc0u));
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    if ((r3 + 3u) >= 0x100u) {
        return;
    }
    a.r[0] = 0x817fddc8u;
    a.r[1] = param_2;
    (void)tc_call(0x8015d5d0u, &a);
    f30 = (f64)rdf32(0x80574a00u);
    f31 = (f64)rdf32(0x80574a04u);
    r3 = tc_call(0x800a648cu, &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x805749b8u));
    }
    f1 = (f64)rdf32(0x805749a8u);
    f31 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805749bcu) - f31) * (f64)rdf32(0x805749c0u));
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = (f64)rdf32(0x805749b4u);
    a.f[3] = f1;
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0x817fddc8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    (void)tc_call(0x8015be94u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    (void)tc_call(0x8015c608u, &a);
    f3 = (f64)rdf32(0x80574a08u);
    a.f[0] = f31;
    a.f[1] = f30;
    a.f[2] = f3;
    a.f[3] = f3;
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8015c074u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015d1ecu, &a);
    (void)tc_call(0x800a7894u, &a);
    return;
}
