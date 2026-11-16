#include "tc_rt.h"

u32 fn_80155a8c(s32 param_1, u32 param_2, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = rd32(param_2);
    a.r[2] = param_r5;
    r3 = tc_call(0x80155788u, &a);
    if (r3 != 0u) {
        if ((u32)param_1 == 3u) {
            wr32(param_2 + 0x8cu, rd32(param_2 + 0x8cu) & 0xbfffffffu);
        } else {
            wr32(param_2 + 0x8cu, rd32(param_2 + 0x8cu) & 0x7fffffffu);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
