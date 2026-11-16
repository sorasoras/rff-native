#include "tc_rt.h"

void fn_801d7a94(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 7u;
    (void)tc_call(0x801e7230u, &a);
    return;
}
