#include "tc_rt.h"

s32 fn_8030247c(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r5 + 0x20u);
    a.r[1] = rd32(r5 + 0x24u);
    a.r[2] = r5;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(r3);
        r3 = r3 - 1u;
    }
    return (s32)r3;
}
