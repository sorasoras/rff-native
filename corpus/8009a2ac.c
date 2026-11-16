#include "tc_rt.h"

s32 fn_8009a2ac(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x800efd7cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800efa58u, &a);
        }
    }
    return param_1;
}
