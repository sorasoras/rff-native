#include "tc_rt.h"

s32 fn_802ebf8c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    r0 = rd32((u32)param_1 + 0x38u);
    r3 = (r0 >> 0x18u) & 0xfu;
    r0 = (r0 >> 0x1cu) & 0xfu;
    return (s32)((r0 * 0x1cu) + (rd32((u32)param_1 + 0x40u) + (r3 * 0x14u)));
}
