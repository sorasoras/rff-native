#include "tc_rt.h"

s32 fn_801422dc(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    r3 = tc_call(0x80142318u, &a);
    r3 = rd32(r3 + 4u);
    r3 = r3 + (((u32)param_4 << 3u) & 0xfffffff8u);
    return (s32)r3;
}
