#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80045318(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f4 = (f64)rdf32(param_2 + 0xe0u);
    f5 = (f64)rdf32(param_2 + 0xe4u);
    f3 = (f64)rdf32(0x805720ecu);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32(param_2);
    f6 = (f64)(f32)px_fdiv(f3, (f64)(f32)(f5 - f4));
    f0 = (f64)rdf32(0x805720e8u);
    wr32(0x817fdffcu, (u32)rd16((u32)param_1 + 0x1f2u));
    f2 = rdf64(0x805720f8u);
    wr32(0x817fdff8u, 0x43300000u);
    f1 = rdf64(0x817fdff8u);
    wrf32d(0x817fdfd4u, f0);
    f7 = (f64)(f32)(f1 - f2);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfe4u, f0);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdff4u, f0);
    wrf32d(0x817fdff0u, f0);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    if (r0 == 0u) {
        wrf32d(0x817fdff0u, f3);
        f3 = (f64)(f32)(f5 * f6);
        f2 = (f64)(f32)(f6 * (f64)(f32)(f5 * f4));
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfd4u, f2);
        wrf32d(0x817fdfe0u, (f64)(f32)(f3 * f7));
        wrf32d(0x817fdfe4u, (f64)(f32)(f2 * f7));
    } else {
        f1 = (f64)rdf32(0x805720f0u);
        wrf32d(0x817fdff4u, f3);
        f3 = (f64)(f32)(f1 * f6);
        f2 = (f64)(f32)(-f4 * f6);
        wrf32d(0x817fdfd0u, f3);
        wrf32d(0x817fdfd4u, f2);
        wrf32d(0x817fdfe0u, (f64)(f32)(f3 * f7));
        wrf32d(0x817fdfe4u, (f64)(f32)(f2 * f7));
    }
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_2 + 0x28u;
    a.r[2] = (u32)param_1 + 0x164u;
    (void)tc_call(0x802337a0u, &a);
    return;
}
