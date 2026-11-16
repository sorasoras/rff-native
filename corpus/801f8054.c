#include "tc_rt.h"

f64 fn_801f8054(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x800d56bcu, &a);
    if (param_2 >= r3) {
        f1 = (f64)rdf32(0x8057663cu);
    } else {
        r3 = tc_call(0x801f8424u, &a);
        r31 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800cb808u, &a);
        a.r[0] = param_1;
        f1 = tc_callf(0x800d3b00u, &a);
        wrf32d(r31 + 0x30u, f1);
        wrf32d(0x817fdfe8u, (f64)rdf32(0x8057663cu));
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x800d5504u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = 0x817fdfe8u;
        a.r[3] = 0u;
        (void)tc_call(0x800cd4c4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfe8u);
        f1 = tc_callf(0x800d5a48u, &a);
        f1 = (f64)(f32)f1;
    }
    return f1;
}
