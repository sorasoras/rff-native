#include "tc_rt.h"

void fn_800c0008(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x19u;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80572e90u);
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80572e78u);
    (void)tc_call(rd32(rd32(param_1) + 0x50u), &a);
    return;
}
