#include "tc_rt.h"

u32 fn_801dcacc(u32 param_1)
{
    u32 r3 = 0;
    r3 = rd32(param_1);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
