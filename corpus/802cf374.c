#include "tc_rt.h"

s32 fn_802cf374(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r9 = rd32((u32)param_1 + 0x4cu);
    r8 = (r9 >> 4u) & 4u;
    r3 = ((r9 >> 0x18u) & 0xfu) * 0x14u;
    r6 = (r9 >> 6u) & 4u;
    r7 = (r9 >> 0xcu) & 4u;
    r5 = (r9 >> 5u) & 4u;
    r0 = ((r9 >> 0x12u) & 0x3cu) + ((r9 >> 0x17u) & 0x1e0u);
    r10 = (r9 >> 0xdu) & 0x1cu;
    r9 = (r9 >> 3u) & 4u;
    r5 = r7 + r5;
    r3 = r3 + r0;
    r3 = r5 + (r8 + r6) + r3;
    r3 = r3 + (rd32((u32)param_1 + 0x58u) + (r10 + r9));
    return (s32)r3;
}
