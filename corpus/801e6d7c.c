#include "tc_rt.h"

void fn_801e6d7c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x80486da8u;
    a.r[1] = param_1;
    (void)tc_call(0x800bca34u, &a);
    return;
}
