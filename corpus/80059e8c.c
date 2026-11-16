#include "tc_rt.h"

u32 fn_80059e8c(void)
{
    u32 r3 = 0;
    r3 = rd32(0x804dfa6cu);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
