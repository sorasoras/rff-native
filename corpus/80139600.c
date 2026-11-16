#include "tc_rt.h"

void fn_80139600(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80139a50u, &a);
    return;
}
