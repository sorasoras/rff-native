#include "tc_rt.h"

u32 fn_803023fc(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r5);
    a.r[1] = rd32(r5 + 4u);
    a.r[2] = r5;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(r3);
    }
    return r3;
}
