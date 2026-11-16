#include "tc_rt.h"

void fn_8010c1b4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x18u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8010c0ccu, &a);
    return;
}
