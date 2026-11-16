#include "tc_rt.h"

u32 fn_8026ba8c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = ((((0u - ((rd32(0x80571a34u) >> 0x10u) & 1u)) & 0x800u) + 0xd11000u) << 6u) & 0x3fffff00u;
    a.r[1] = param_1;
    a.r[2] = ((u32)param_2 + 3u) & 0xfffffffcu;
    (void)tc_call(0x8026c1f0u, &a);
    wr32(0x80571a38u, 0u);
    wr8(0x80571a30u, 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return 0u;
}
