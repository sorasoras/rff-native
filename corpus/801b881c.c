#include "tc_rt.h"

void fn_801b881c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    (void)tc_call(0x8019124cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x801b97d8u, &a);
    return;
}
