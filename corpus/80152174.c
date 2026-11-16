#include "tc_rt.h"

void fn_80152174(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b5f28u, &a);
    a.r[0] = (u32)param_1 + 0x16a0u;
    (void)tc_call(0x8015323cu, &a);
    a.r[0] = (u32)param_1 + 0x1890u;
    (void)tc_call(0x8015323cu, &a);
    return;
}
