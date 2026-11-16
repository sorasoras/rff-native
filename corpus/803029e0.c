#include "tc_rt.h"

s32 fn_803029e0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x18u, param_2);
    wr32((u32)param_1 + 0x21cu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8022d534u, &a);
    return param_1;
}
