#include "tc_rt.h"

s32 fn_80198074(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80197f64u, &a);
        }
    }
    return param_1;
}
