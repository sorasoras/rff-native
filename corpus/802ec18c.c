#include "tc_rt.h"

s32 fn_802ec18c(s32 param_1)
{
    u32 r0 = 0, r7 = 0;
    r7 = rd32((u32)param_1 + 0x38u);
    r0 = ((((r7 >> 0x12u) & 3u) + ((r7 >> 0x18u) & 0xfu)) * 0x14u) + (((r7 >> 0x1cu) & 0xfu) * 0x1cu) + (((r7 >> 4u) & 4u) + (((r7 >> 0xcu) & 4u) + (((r7 >> 5u) & 4u) + (((r7 >> 0x12u) & 0x3cu) + ((r7 >> 6u) & 4u)))));
    r0 = rd32((u32)param_1 + 0x40u) + r0;
    return (s32)(((r7 >> 3u) & 4u) + ((r7 >> 0xdu) & 0x1cu) + r0);
}
