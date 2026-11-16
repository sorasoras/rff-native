#include "tc_rt.h"

u32 fn_802f8930(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8030141cu, &a);
    wr32(param_1, 0x8039d130u);
    a.r[0] = param_1 + 0x108u;
    (void)tc_call(0x80301a18u, &a);
    wr8(param_1 + 0x188u, 0u);
    return param_1;
}
