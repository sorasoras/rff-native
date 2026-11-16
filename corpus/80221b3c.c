#include "tc_rt.h"

void fn_80221b3c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 4u);
    a.r[1] = rd32(param_1);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
