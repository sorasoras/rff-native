#include "tc_rt.h"

s32 fn_802ebfdc(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32((u32)param_1 + 0x38u);
    r0 = (r5 >> 0x1cu) & 0xfu;
    r4 = ((r5 >> 0x18u) & 0xfu) * 0x14u;
    r6 = (r5 >> 6u) & 4u;
    r5 = (r5 >> 0x12u) & 0x3cu;
    return (s32)(r4 + (r0 * 0x1cu) + (rd32((u32)param_1 + 0x40u) + (r6 + r5)));
}
