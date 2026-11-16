#include "tc_rt.h"

u32 fn_80239258(u32 param_1)
{
    u32 r3 = 0;
    r3 = rd32(0x80570ad4u);
    wr32(0x80570ad4u, param_1);
    return r3;
}
