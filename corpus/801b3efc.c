#include "tc_rt.h"

void fn_801b3efc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x6cu;
    a.r[1] = 0xb7u;
    (void)tc_call(0x80210e90u, &a);
    return;
}
