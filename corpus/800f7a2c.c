#include "tc_rt.h"

s32 fn_800f7a2c(s32 param_1, s32 param_2)
{
    u32 c1eq = 0, r3 = 0;
    TcArgs a = {0};
    c1eq = (u32)param_1 == 0u;
    if ((!c1eq && param_2 > 0) && !c1eq) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x801b3a38u, &a);
    }
    return param_1;
}
