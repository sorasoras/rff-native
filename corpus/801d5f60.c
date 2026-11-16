#include "tc_rt.h"

void fn_801d5f60(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801d5530u, &a);
    return;
}
