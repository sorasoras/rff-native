#include "tc_rt.h"

s32 fn_802dcdb0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 8u);
    r3 = r4 + (((u32)rd8((u32)param_1 + 0xcu) << 2u) & 0xfffffffcu);
    r4 = rd32(r4 + 0x68u);
    r3 = (u32)((s32)(r4 + rd32(r3 + 0x6cu)) >> 16);
    return (s32)r3;
}
