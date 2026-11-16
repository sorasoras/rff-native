#include "tc_rt.h"

u32 fn_801e5d18(void)
{
    u32 r3 = 0;
    r3 = rd32(0x805713b8u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
