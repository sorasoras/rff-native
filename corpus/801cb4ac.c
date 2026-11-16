#include "tc_rt.h"

u32 fn_801cb4ac(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = 0xffffffffu;
    if ((u32)param_2 == 0x3fu) {
        a.r[0] = param_1;
        r3 = tc_call(0x801cb424u, &a);
        r0 = r3;
    }
    return r0;
}
