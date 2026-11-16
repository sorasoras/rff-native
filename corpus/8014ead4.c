#include "tc_rt.h"

void fn_8014ead4(s32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 == 0x13u) {
        wr32((u32)param_1 + 0x248u, 0u);
        return;
    }
    if ((u32)param_3 == 0x14u) {
        wr32((u32)param_1 + 0x24cu, 0x3cu);
        return;
    }
    if ((u32)param_3 == 0x16u) {
        wr32((u32)param_1 + 0x248u, 1u);
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x800da6bcu, &a);
    return;
}
