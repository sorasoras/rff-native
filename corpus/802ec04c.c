#include "tc_rt.h"

s32 fn_802ec04c(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r4 = rd32((u32)param_1 + 0x38u);
    r0 = (r4 >> 0x1cu) & 0xfu;
    r8 = (r4 >> 0xcu) & 4u;
    r5 = (r4 >> 0x12u) & 0x3cu;
    r7 = (r4 >> 5u) & 4u;
    r6 = (r4 >> 6u) & 4u;
    r4 = ((r4 >> 0x18u) & 0xfu) * 0x14u;
    r5 = r8 + r5;
    r6 = r7 + r6;
    return (s32)(r4 + (r0 * 0x1cu) + (rd32((u32)param_1 + 0x40u) + (r6 + r5)));
}
