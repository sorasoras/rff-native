#include "tc_rt.h"

s32 fn_802187c4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x64u);
    a.r[1] = rd32((u32)param_1 + 0x68u);
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x80212b5cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        (void)tc_call(0x80218690u, &a);
    }
    return (s32)r31;
}
