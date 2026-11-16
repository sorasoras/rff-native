#include "tc_rt.h"

void fn_80286ab0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(0x8050f7f4u, param_1);
    wr32(0x8050f7f8u, param_2);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
