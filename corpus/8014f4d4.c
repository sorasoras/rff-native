#include "tc_rt.h"

u32 fn_8014f4d4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x158u;
    r3 = tc_call(0x801471c8u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
