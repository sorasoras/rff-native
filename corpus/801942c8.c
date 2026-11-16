#include "tc_rt.h"

void fn_801942c8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0x8033ad4du;
    a.r[2] = 1u;
    (void)tc_call(0x80193a00u, &a);
    return;
}
