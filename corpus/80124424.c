#include "tc_rt.h"

void fn_80124424(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x1cu;
    (void)tc_call(0x800f84d0u, &a);
    return;
}
