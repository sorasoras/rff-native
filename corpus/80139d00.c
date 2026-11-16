#include "tc_rt.h"

void fn_80139d00(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(rd32(param_1) + 0x10u);
    (void)tc_call(0x80139d0cu, &a);
    return;
}
