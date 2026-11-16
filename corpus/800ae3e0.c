#include "tc_rt.h"

void fn_800ae3e0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x800ae1e4u, &a);
    return;
}
