#include "tc_rt.h"

s32 fn_8022f02c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = rd32(0x80571508u);
    wr32(0x80571508u, r31 - 1u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r31;
}
