#include "tc_rt.h"

void fn_80079cd4(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x800795b0u, &a);
    a.r[0] = param_1;
    a.r[1] = r3 & 0xffffu;
    r3 = tc_call(0x80079d8cu, &a);
    a.r[0] = r3;
    f1 = tc_callf(0x80079c74u, &a);
    if ((f64)rdf32(0x805727e0u) == f1) {
        a.r[0] = param_1;
        (void)tc_call(0x80079d28u, &a);
    }
    return;
}
