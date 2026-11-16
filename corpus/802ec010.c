#include "tc_rt.h"

s32 fn_802ec010(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = rd32((u32)param_1 + 0x38u);
    r0 = (r6 >> 0x1cu) & 0xfu;
    r4 = ((r6 >> 0x18u) & 0xfu) * 0x14u;
    r7 = (r6 >> 5u) & 4u;
    r5 = (r6 >> 6u) & 4u;
    r6 = (r6 >> 0x12u) & 0x3cu;
    r5 = r7 + r5;
    return (s32)(r4 + (r0 * 0x1cu) + (rd32((u32)param_1 + 0x40u) + (r6 + r5)));
}
