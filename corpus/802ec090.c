#include "tc_rt.h"

s32 fn_802ec090(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r6 = rd32((u32)param_1 + 0x38u);
    r3 = (r6 >> 0x18u) & 0xfu;
    r0 = (r6 >> 0x1cu) & 0xfu;
    r5 = ((r6 >> 5u) & 4u) + ((r6 >> 6u) & 4u);
    r8 = (r6 >> 4u) & 4u;
    r7 = (r6 >> 0xcu) & 4u;
    r6 = (r6 >> 0x12u) & 0x3cu;
    r5 = r8 + r5;
    r6 = r7 + r6;
    return (s32)((r3 * 0x14u) + (r0 * 0x1cu) + (rd32((u32)param_1 + 0x40u) + (r6 + r5)));
}
