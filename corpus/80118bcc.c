#include "tc_rt.h"

u32 fn_80118bcc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = rd32(0x80571268u);
    r0 = r4 ^ param_1;
    r3 = (u32)((s32)r0 >> 1);
    r0 = r0 & r4;
    r0 = r3 - r0;
    return (r0 >> 0x1fu) & 1u;
}
