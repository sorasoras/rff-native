#include "tc_rt.h"

void fn_800b510c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    r3 = rd32(param_1 + 0xe88u);
    wr32(param_1 + 0xec4u, 0u);
    wr32(param_1 + 0xec0u, 0u);
    wr32(param_1 + 0xe88u, r3 | (r3 ^ 0x1000u));
    wr32(param_1 + 0xe80u, 0u);
    return;
}
