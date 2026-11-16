#include "tc_rt.h"

void fn_80150418(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805747e0u);
    a.r[0] = (u32)param_1 + 0xf5cu;
    (void)tc_call(0x800f16e0u, &a);
    return;
}
