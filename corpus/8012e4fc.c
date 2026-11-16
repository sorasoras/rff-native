#include "tc_rt.h"

void fn_8012e4fc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x8012c270u, &a);
    return;
}
