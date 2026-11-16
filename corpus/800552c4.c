#include "tc_rt.h"

s32 fn_800552c4(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x1b4u, 0u);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
