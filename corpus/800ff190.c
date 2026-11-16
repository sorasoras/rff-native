#include "tc_rt.h"

void fn_800ff190(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1);
    a.r[0] = param_1 + 0x14u;
    r3 = tc_call(0x802ee834u, &a);
    a.r[0] = rd32(r31 + 0x14u);
    a.r[1] = r3 + ((u32)param_2 * 0x14u);
    (void)tc_call(0x802e5528u, &a);
    return;
}
