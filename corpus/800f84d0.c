#include "tc_rt.h"

void fn_800f84d0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1);
    (void)tc_call(0x800f848cu, &a);
    return;
}
