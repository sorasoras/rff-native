#include "tc_rt.h"

u32 fn_802bf680(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = param_2 & 0xffffu;
    r3 = tc_call(0x802d7bccu, &a);
    r3 = rd32(r3 + 4u);
    return r3;
}
