#include "tc_rt.h"

void fn_80249728(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x80570a48u);
    a.r[1] = param_1;
    (void)tc_call(0x8022704cu, &a);
    return;
}
