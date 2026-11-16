#include "tc_rt.h"

void fn_800a6e60(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    if (param_4 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x800a6d04u, &a);
        return;
    }
    wr32(param_4, param_3);
    return;
}
