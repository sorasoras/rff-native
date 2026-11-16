#include "tc_rt.h"

s32 fn_80310818(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x1cu, 0x8039d7c0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80310c3cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
