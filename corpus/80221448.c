#include "tc_rt.h"

void fn_80221448(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x24u;
    (void)tc_call(0x801f10a4u, &a);
    return;
}
