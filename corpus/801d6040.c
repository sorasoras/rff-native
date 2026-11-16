#include "tc_rt.h"

u32 fn_801d6040(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(r3 + 0xcu);
    a.r[0] = param_1;
    (void)tc_call(0x801d55ccu, &a);
    return 1u;
}
