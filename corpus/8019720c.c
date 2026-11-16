#include "tc_rt.h"

s32 fn_8019720c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x80370a80u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801972a4u, &a);
        r31 = rd32((u32)param_1 + 0x2cu);
        if (r31 != 0u) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x801b3a38u, &a);
            wr32((u32)param_1 + 0x2cu, 0u);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80189440u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
