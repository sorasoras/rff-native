#include "tc_rt.h"

u32 fn_801b1788(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x3cu), &a);
    a.r[0] = param_1;
    (void)tc_call(0x801b2f44u, &a);
    return 1u;
}
