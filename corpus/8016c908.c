#include "tc_rt.h"

void fn_8016c908(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = 0x25u;
    (void)tc_call(0x800b31a0u, &a);
    return;
}
