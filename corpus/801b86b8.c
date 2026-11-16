#include "tc_rt.h"

void fn_801b86b8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x801b93d8u, &a);
    return;
}
