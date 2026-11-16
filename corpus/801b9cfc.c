#include "tc_rt.h"

void fn_801b9cfc(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x34u, rd32((u32)param_1 + 0x2cu));
    a.r[0] = 0x804b9da0u;
    a.r[1] = 2u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
