#include "tc_rt.h"

s32 fn_802ec130(s32 param_1)
{
    u32 r3 = 0, r10 = 0;
    r10 = rd32((u32)param_1 + 0x38u);
    r3 = ((r10 >> 0xcu) & 4u) + ((r10 >> 0x12u) & 0x3cu) + (((r10 >> 4u) & 4u) + (((r10 >> 5u) & 4u) + ((r10 >> 6u) & 4u))) + ((((r10 >> 0x18u) & 0xfu) * 0x14u) + (((r10 >> 0x1cu) & 0xfu) * 0x1cu));
    r3 = r3 + (rd32((u32)param_1 + 0x40u) + (((r10 >> 0xdu) & 0x1cu) + ((r10 >> 3u) & 4u)));
    return (s32)r3;
}
