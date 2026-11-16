#include "tc_rt.h"

u32 fn_80118da4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x80118cf0u, &a);
    if (r3 != 0u) {
        r3 = (u32)rd8(0x8049912eu);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 8u);
        a.r[2] = (u32)(s8)rd8((u32)param_1 + 0xcu);
        a.r[3] = param_2;
        a.r[4] = param_3;
        r3 = tc_call(0x80118e24u, &a);
    }
    return r3;
}
