#include "tc_rt.h"

void fn_8020f18c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0x1au) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
        wr32((u32)param_1 + 8u, (u32)param_2);
        wr32((u32)param_1 + 0x14u, (u32)param_2);
    } else {
        wr32((u32)param_1 + 8u, 0x1au);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
    }
    return;
}
