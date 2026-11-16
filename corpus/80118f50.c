#include "tc_rt.h"

s32 fn_80118f50(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_2 & ~(u32)((s32)param_2 >> 31);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80118fbcu, &a);
    if ((s32)r31 >= (s32)(s8)r3 || (s32)r31 < 0) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 8u) + ((r31 << 1u) & 0xfffffffeu);
    }
    return (s32)r3;
}
