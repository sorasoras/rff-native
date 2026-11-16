#include "tc_rt.h"

void fn_80275290(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x461u;
    a.r[2] = 0x1cu;
    (void)tc_call(0x802745b4u, &a);
    return;
}
