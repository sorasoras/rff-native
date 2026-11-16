#include "tc_rt.h"

void fn_80209078(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x80163f60u, &a);
    return;
}
