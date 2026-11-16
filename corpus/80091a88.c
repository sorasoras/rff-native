#include "tc_rt.h"

s32 fn_80091a88(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if (rd32(param_2 + 0x18u) <= param_3 || rd32(param_2 + 0x14u) <= param_4) {
        r3 = 0u;
    } else {
        a.r[0] = 0x80492800u;
        a.r[1] = rd32(param_2);
        a.r[2] = rd32(param_2 + 4u);
        r3 = tc_call(0x8017b190u, &a);
        r3 = r3 + (((param_4 + (rd32(param_2 + 0x14u) * param_3)) << 3u) & 0xfffffff8u);
    }
    return (s32)r3;
}
