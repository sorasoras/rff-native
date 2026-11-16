#include "tc_rt.h"

void fn_802c0a14(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = 1u;
    a.r[2] = 0u;
    (void)tc_call(0x8027b0acu, &a);
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 0x24u);
    (void)tc_call(0x8027a268u, &a);
    r3 = rd32(param_1);
    wr32(param_1 + 0x24u, 0u);
    a.r[0] = r3;
    a.r[1] = rd32(param_1 + 0x28u);
    (void)tc_call(0x8027a2d0u, &a);
    wr32(param_1 + 0x28u, 0u);
    return;
}
