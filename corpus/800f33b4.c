#include "tc_rt.h"

u32 fn_800f33b4(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x148u;
    a.r[2] = param_2;
    a.r[3] = 1u;
    a.r[4] = 1u;
    r3 = tc_call(0x800f31d8u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
