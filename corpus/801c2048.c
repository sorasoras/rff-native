#include "tc_rt.h"

void fn_801c2048(u32 param_1)
{
    u32 c0eq = 0, r3 = 0, t0 = 0, t8 = 0, t16 = 0;
    f64 f0 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, t2 = 0.0, t4 = 0.0, t10 = 0.0, t12 = 0.0, t18 = 0.0, t20 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(param_1 + 0x3cu, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x801c2004u, &a);
    f6 = (f64)rdf32(param_1 + 0xcu);
    c0eq = rd32(param_1 + 0x38u) == 1u;
    f5 = (f64)rdf32(param_1 + 0x10u);
    f4 = (f64)rdf32(param_1 + 0x20u);
    f3 = (f64)rdf32(param_1 + 0x24u);
    f0 = (f64)rdf32(param_1 + 0x28u);
    wrf32d(param_1 + 0x14u, (f64)rdf32(param_1 + 8u));
    wrf32d(param_1 + 0x18u, f6);
    wrf32d(param_1 + 0x1cu, f5);
    wrf32d(param_1 + 0x2cu, f4);
    wrf32d(param_1 + 0x30u, f3);
    wrf32d(param_1 + 0x34u, f0);
    if (c0eq) {
        t0 = param_1 + 0x2cu;
        t2 = (f64)rdf32(t0 + 4u);
        t4 = (f64)rdf32(param_1 + 0x34u);
        wrf32d(0x817fdfe0u, (f64)rdf32(t0));
        wrf32d(0x817fdfe4u, t2);
        wrf32d(0x817fdfe8u, t4);
        a.f[0] = (f64)rdf32(0x80575cd8u);
        a.r[0] = 0xb4u;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1, r3);
    } else {
        t8 = param_1 + 0x2cu;
        t10 = (f64)rdf32(t8 + 4u);
        t12 = (f64)rdf32(param_1 + 0x34u);
        wrf32d(0x817fdfd4u, (f64)rdf32(t8));
        wrf32d(0x817fdfd8u, t10);
        wrf32d(0x817fdfdcu, t12);
        a.f[0] = (f64)rdf32(0x80575cd8u);
        a.r[0] = 0xb3u;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1, r3);
    }
    r3 = rd32(param_1);
    if (r3 != 0u) {
        t16 = param_1 + 0x2cu;
        t18 = (f64)rdf32(t16 + 4u);
        t20 = (f64)rdf32(param_1 + 0x34u);
        wrf32d(0x817fdfc8u, (f64)rdf32(t16));
        wrf32d(0x817fdfccu, t18);
        wrf32d(0x817fdfd0u, t20);
        a.r[0] = r3;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x8015811cu, &a);
    }
    return;
}
