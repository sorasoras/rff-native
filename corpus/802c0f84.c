#include "tc_rt.h"

void fn_802c0f84(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x20u);
    a.r[1] = rd32(param_1);
    (void)tc_call(0x802c19c8u, &a);
    return;
}
