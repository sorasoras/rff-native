#include "tc_rt.h"

void fn_80129588(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5f0u;
    a.r[1] = param_r4;
    (void)tc_call(0x800f8544u, &a);
    return;
}
