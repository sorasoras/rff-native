#include "tc_rt.h"

void fn_800a41b0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800cd694u, &a);
    return;
}
