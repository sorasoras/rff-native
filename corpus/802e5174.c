#include "tc_rt.h"

u32 fn_802e5174(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x68u), &a);
        return r3;
    }
    return 0u;
}
