#include "tc_rt.h"

void fn_8014c390(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = param_3;
    (void)tc_call(0x800aef78u, &a);
    r3 = rd32((u32)param_1 + 0x68u);
    wr32((u32)param_1 + 0x68u, r3 | (r3 ^ ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
    return;
}
