#include "tc_rt.h"

void fn_8027a434(s32 param_1)
{
    u32 r12 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r12 = rd32(r31 + 0x988u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0x8050b950u;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    }
    wr32(r31 + 0x988u, 0u);
    wr8(r31 + 0x98cu, 0u);
    return;
}
