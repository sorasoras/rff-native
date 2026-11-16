#include "tc_rt.h"

u32 fn_80087f90(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_4;
    if (rd32((u32)param_2 + 0x50u) == 0u) {
        wr32((u32)param_1 + 0x3154u, 0u);
        wr32((u32)param_1 + 0x3158u, 0u);
        return param_3;
    }
    wr32(param_5, rd32(param_5) + 1u);
    wr32((u32)param_1 + 0x3154u, param_3);
    wr32((u32)param_1 + 0x3158u, (u32)param_2);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x80087fccu, &a);
    return r3;
}
