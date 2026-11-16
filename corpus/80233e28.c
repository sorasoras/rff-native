#include "tc_rt.h"

void fn_80233e28(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f1 = (f64)rdf32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(param_4);
    wr32(0x817fdffcu, 0u);
    f4 = (f64)(f32)(f1 - f0);
    f3 = (f64)rdf32(param_2 + 4u);
    wr32(0x817fdff8u, 0u);
    f2 = (f64)rdf32(param_4 + 4u);
    wr32(0x817fdff4u, 0u);
    f2 = (f64)(f32)(f3 - f2);
    f1 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(param_4 + 8u);
    wrf32d(0x817fdfe0u, f4);
    f0 = (f64)(f32)(f1 - f0);
    wrf32d(0x817fdfe4u, f2);
    wrf32d(0x817fdfe8u, f0);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfe0u;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = param_3;
    a.r[1] = 0x817fdfe0u;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x80234484u, &a);
    a.r[0] = 0x817fdfd4u;
    a.r[1] = 0x817fdfd4u;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = 0x817fdfe0u;
    a.r[1] = 0x817fdfd4u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80234484u, &a);
    f4 = (f64)rdf32(param_2);
    wrf32d(param_1, (f64)rdf32(0x817fdfd4u));
    f3 = (f64)rdf32(param_2 + 4u);
    f5 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 4u, (f64)rdf32(0x817fdfd8u));
    wrf32d(param_1 + 8u, (f64)rdf32(0x817fdfdcu));
    wrf32d(param_1 + 0xcu, -(f64)(f32)((f64)(f32)(f5 * (f64)rdf32(0x817fdfdcu)) + (f64)(f32)((f64)(f32)(f4 * (f64)rdf32(0x817fdfd4u)) + (f64)(f32)(f3 * (f64)rdf32(0x817fdfd8u)))));
    wrf32d(param_1 + 0x10u, (f64)rdf32(0x817fdfc8u));
    wrf32d(param_1 + 0x14u, (f64)rdf32(0x817fdfccu));
    wrf32d(param_1 + 0x18u, (f64)rdf32(0x817fdfd0u));
    wrf32d(param_1 + 0x1cu, -(f64)(f32)((f64)(f32)(f5 * (f64)rdf32(0x817fdfd0u)) + (f64)(f32)((f64)(f32)(f4 * (f64)rdf32(0x817fdfc8u)) + (f64)(f32)(f3 * (f64)rdf32(0x817fdfccu)))));
    wrf32d(param_1 + 0x20u, (f64)rdf32(0x817fdfe0u));
    wrf32d(param_1 + 0x24u, (f64)rdf32(0x817fdfe4u));
    wrf32d(param_1 + 0x28u, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_1 + 0x2cu, -(f64)(f32)((f64)(f32)(f5 * (f64)rdf32(0x817fdfe8u)) + (f64)(f32)((f64)(f32)(f4 * (f64)rdf32(0x817fdfe0u)) + (f64)(f32)(f3 * (f64)rdf32(0x817fdfe4u)))));
    return;
}
