#include "tc_rt.h"

void fn_802fe76c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    a.r[0] = param_1;
    r3 = tc_call(0x802f7104u, &a);
    a.r[0] = param_1 + 0x100u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = r3;
    a.r[4] = param_4;
    (void)tc_call(0x802fd5c0u, &a);
    return;
}
