#include "tc_rt.h"

void fn_8007c290(u32 param_1, u32 param_2, s32 param_3)
{
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wrf32d(0x817fdfc4u, (f64)rdf32(param_1));
    wrf32d(0x817fdfc8u, (f64)rdf32(param_1 + 0x10u));
    wrf32d(0x817fdfccu, (f64)rdf32(param_1 + 0x20u));
    wrf32d(0x817fdfd0u, (f64)rdf32(param_1 + 4u));
    wrf32d(0x817fdfd4u, (f64)rdf32(param_1 + 0x14u));
    wrf32d(0x817fdfd8u, (f64)rdf32(param_1 + 0x24u));
    wrf32d(0x817fdfdcu, (f64)rdf32(param_1 + 8u));
    wrf32d(0x817fdfe0u, (f64)rdf32(param_1 + 0x18u));
    wrf32d(0x817fdfe4u, (f64)rdf32(param_1 + 0x28u));
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234440u, &a);
    wrf32d(0x817fdfb8u, f1);
    a.r[0] = 0x817fdfd0u;
    f1 = tc_callf(0x80234440u, &a);
    wrf32d(0x817fdfbcu, f1);
    a.r[0] = 0x817fdfdcu;
    f1 = tc_callf(0x80234440u, &a);
    wrf32d(0x817fdfc0u, f1);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfc4u;
    (void)tc_call(0x802343e4u, &a);
    if ((u32)param_3 != 0u) {
        a.r[0] = 0x817fdfdcu;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x80234484u, &a);
        a.r[0] = 0x817fdfc4u;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = 0x817fdfdcu;
        (void)tc_call(0x80234484u, &a);
    } else {
        a.r[0] = 0x817fdfc4u;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = 0x817fdfdcu;
        (void)tc_call(0x80234484u, &a);
        a.r[0] = 0x817fdfdcu;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x80234484u, &a);
    }
    a.r[0] = 0x817fdfd0u;
    a.r[1] = 0x817fdfd0u;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = 0x817fdfdcu;
    a.r[1] = 0x817fdfdcu;
    (void)tc_call(0x802343e4u, &a);
    f3 = (f64)rdf32(0x817fdfb8u);
    f2 = (f64)rdf32(0x817fdfbcu);
    f1 = (f64)rdf32(0x817fdfc0u);
    wrf32d(param_1, (f64)(f32)((f64)rdf32(0x817fdfc4u) * f3));
    wrf32d(param_1 + 0x10u, (f64)(f32)((f64)rdf32(0x817fdfc8u) * f3));
    wrf32d(param_1 + 0x20u, (f64)(f32)((f64)rdf32(0x817fdfccu) * f3));
    wrf32d(param_1 + 4u, (f64)(f32)((f64)rdf32(0x817fdfd0u) * f2));
    wrf32d(param_1 + 0x14u, (f64)(f32)((f64)rdf32(0x817fdfd4u) * f2));
    wrf32d(param_1 + 0x24u, (f64)(f32)((f64)rdf32(0x817fdfd8u) * f2));
    wrf32d(param_1 + 8u, (f64)(f32)((f64)rdf32(0x817fdfdcu) * f1));
    wrf32d(param_1 + 0x18u, (f64)(f32)((f64)rdf32(0x817fdfe0u) * f1));
    wrf32d(param_1 + 0x28u, (f64)(f32)((f64)rdf32(0x817fdfe4u) * f1));
    return;
}
