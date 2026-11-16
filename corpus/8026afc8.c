#include "tc_rt.h"

s32 fn_8026afc8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0x8038f4b8u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(0x8038f4c8u), &a);
    r3 = (u32)((s32)((0u - r3) | r3) >> 31);
    return (s32)r3;
}
