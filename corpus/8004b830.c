#include "tc_rt.h"

void fn_8004b830(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_1 & 0xffffu;
    a.r[1] = param_2 & 0xffffu;
    a.r[2] = param_3 & 0xffffu;
    a.r[3] = param_4 & 0xffffu;
    (void)tc_call(0x80251034u, &a);
    return;
}
