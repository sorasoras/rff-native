#include "tc_rt.h"

u32 fn_801cfdc0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0xbu;
    r30 = 7u - rd32((u32)param_1 + 0xe10u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801cfa98u, &a);
    if ((s32)r3 <= (s32)r30) {
        r31 = 9u;
    }
    return r31;
}
