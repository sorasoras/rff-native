#include "tc_rt.h"

void fn_801bc3c4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    (void)tc_call(0x8019124cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x801bdd18u, &a);
    return;
}
