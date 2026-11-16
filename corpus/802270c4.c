#include "tc_rt.h"

u32 fn_802270c4(u32 param_1)
{
    u32 r0 = 0;
    r0 = rd32(0x80570a48u);
    wr32(0x80570a48u, param_1);
    return r0;
}
