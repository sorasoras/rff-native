#include "tc_rt.h"

u32 fn_8010f630(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0x18au) {
        r3 = 2u;
    } else {
        a.r[0] = param_1;
        a.r[1] = rd32(param_3);
        a.r[2] = rd32(param_3 + 4u);
        r3 = tc_call(0x8010f324u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800a796cu, &a);
        r3 = 0u;
    }
    return r3;
}
