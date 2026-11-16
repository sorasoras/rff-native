#include "tc_rt.h"

s32 fn_802ec0dc(s32 param_1)
{
    u32 r3 = 0, r8 = 0;
    r8 = rd32((u32)param_1 + 0x38u);
    r3 = ((r8 >> 3u) & 4u) + (((r8 >> 0xcu) & 4u) + ((r8 >> 0x12u) & 0x3cu) + (((r8 >> 4u) & 4u) + (((r8 >> 5u) & 4u) + ((r8 >> 6u) & 4u)))) + (rd32((u32)param_1 + 0x40u) + ((((r8 >> 0x18u) & 0xfu) * 0x14u) + (((r8 >> 0x1cu) & 0xfu) * 0x1cu)));
    return (s32)r3;
}
