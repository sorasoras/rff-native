#include "tc_rt.h"

u32 fn_801d9a2c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x8007f238u, &a);
    r31 = r3;
    a.f[0] = (f64)rdf32(0x805760dcu);
    a.r[0] = 0x80u;
    a.r[1] = param_3;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    return r31;
}
