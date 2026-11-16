#include "tc_rt.h"

s32 fn_801617b8(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0xccu, 0x803693f8u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80161ac4u, &a);
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
        if (param_2 > 0) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x801b3a38u, &a);
        }
    }
    return param_1;
}
