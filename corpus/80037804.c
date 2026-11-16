#include "tc_rt.h"

void fn_80037804(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 2u;
    (void)tc_call(0x800376e8u, &a);
    return;
}
