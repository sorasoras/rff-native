#include "tc_rt.h"

u32 fn_800ed224(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8035ba80u);
        a.r[0] = param_1;
        (void)tc_call(0x800ed2f4u, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x800efd7cu, &a);
        if (param_2 > 0) {
            a.r[0] = param_1;
            (void)tc_call(0x800efa58u, &a);
        }
    }
    return param_1;
}
