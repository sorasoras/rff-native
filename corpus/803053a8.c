#include "tc_rt.h"

s32 fn_803053a8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe8u;
    r3 = tc_call(0x80301524u, &a);
    if (r3 != 0u) {
        r3 = rd32(0x817fdff4u) + rd32(0x817fdffcu);
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
