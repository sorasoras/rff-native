#include "tc_rt.h"

u32 fn_80095f58(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0xfcu);
    r3 = (u32)rd16((u32)param_1 + 0xbcu);
    r0 = r4 - r3;
    r3 = r4 | ~r3;
    r0 = (r0 >> 1u) & 0x7fffffffu;
    r0 = r3 - r0;
    return (r0 >> 0x1fu) & 1u;
}
