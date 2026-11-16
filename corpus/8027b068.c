#include "tc_rt.h"

u32 fn_8027b068(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = rd32(r31 + 0x83cu);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
