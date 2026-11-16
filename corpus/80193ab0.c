#include "tc_rt.h"

u32 fn_80193ab0(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xcu);
    a.r[1] = param_2;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x800ff744u, &a);
    }
    return r3;
}
