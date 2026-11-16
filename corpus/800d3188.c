#include "tc_rt.h"

void fn_800d3188(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80052c3cu, &a);
    r30 = r3;
    a.r[0] = r3;
    (void)tc_call(0x800cb808u, &a);
    wrf32d(r30 + 0x30u, (f64)rdf32(param_1 + 0x20u));
    a.r[0] = param_1;
    f1 = tc_callf(0x800d5a1cu, &a);
    wrf32d(r30 + 0x40u, f1);
    a.f[0] = (f64)rdf32(param_1 + 0xcu);
    a.f[1] = (f64)rdf32(param_1 + 0x10u);
    a.f[2] = (f64)rdf32(param_1 + 0x14u);
    a.f[3] = (f64)rdf32(param_1 + 0x18u);
    a.r[0] = r30;
    (void)tc_call(0x800cc524u, &a);
    r31 = r30 + 0x90u;
    a.r[0] = rd32(0x803d2a48u);
    a.r[1] = r31;
    a.r[2] = rd32(param_1);
    a.r[3] = 0x400u;
    (void)tc_call(0x800ce3e4u, &a);
    a.r[0] = r30;
    a.r[1] = r31;
    a.r[2] = param_1 + 0x1cu;
    (void)tc_call(0x800ccfb8u, &a);
    return;
}
