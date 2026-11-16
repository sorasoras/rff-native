#include "tc_rt.h"

u32 fn_8020ab10(u32 param_1)
{
    u32 r3 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(0x80571398u);
    a.r[0] = 0x16u;
    a.r[1] = rd32(r6 + (((rd32(r6 + 0x194u) + rd32(r6 + 0x198u)) << 2u) & 0xfffffffcu) + 0x120u);
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
