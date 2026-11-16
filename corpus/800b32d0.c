#include "tc_rt.h"

u32 fn_800b32d0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        return 0u;
    }
    a.r[0] = (u32)param_1 + 0x36cu;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80153f80u, &a);
    return r3;
}
