#include "tc_rt.h"

void fn_8027e57c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32(param_1 + 8u);
    r31 = r3;
    wr8(param_1, 0u);
    r3 = rd32(param_1 + 4u);
    wr8(param_1 + 1u, 0u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = r0 * 0x30u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
