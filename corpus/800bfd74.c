#include "tc_rt.h"

void fn_800bfd74(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x2cu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80572e78u);
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xbb9u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
