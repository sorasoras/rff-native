#include "tc_rt.h"

u32 fn_80226494(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    r5 = rd32(0x80571458u);
    r0 = (param_1 << 2u) & 0x3fcu;
    r3 = rd32(r5 + r0);
    wr32(r5 + r0, param_2);
    return r3;
}
