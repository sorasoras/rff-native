#include "tc_rt.h"

void fn_801b9dcc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x801e6364u, &a);
    return;
}
