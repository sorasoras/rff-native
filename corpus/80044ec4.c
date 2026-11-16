#include "tc_rt.h"

void fn_80044ec4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 & 0xffu;
    (void)tc_call(0x80253f98u, &a);
    return;
}
