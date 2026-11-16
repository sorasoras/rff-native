#include "tc_rt.h"

void fn_801e7280(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x1bcu), &a);
    a.r[0] = param_1;
    (void)tc_call(0x8007e64cu, &a);
    return;
}
