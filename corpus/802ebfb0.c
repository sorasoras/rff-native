#include "tc_rt.h"

s32 fn_802ebfb0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x38u);
    r3 = (r4 >> 0x18u) & 0xfu;
    r0 = ((r4 >> 0x1cu) & 0xfu) * 0x1cu;
    r4 = (r4 >> 0x12u) & 0x3cu;
    r3 = r3 * 0x14u;
    r0 = rd32((u32)param_1 + 0x40u) + r0;
    r3 = r4 + r3;
    r3 = r3 + r0;
    return (s32)r3;
}
