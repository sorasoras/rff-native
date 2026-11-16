#include "tc_rt.h"

u32 fn_80301240(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    (void)param_2;
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = 0x28u;
    (void)tc_call(0x802faa98u, &a);
    return 1u;
}
