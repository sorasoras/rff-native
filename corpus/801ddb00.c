#include "tc_rt.h"

f64 fn_801ddb00(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 0x8046a200u;
    a.r[1] = 0x86u;
    a.r[2] = param_2;
    r3 = tc_call(0x800590b4u, &a);
    return (f64)rdf32(r3 + 0x18u);
}
