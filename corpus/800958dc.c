#include "tc_rt.h"

void fn_800958dc(s32 param_1)
{
    u32 r4 = 0;
    r4 = (u32)rd16((u32)param_1 + 0xbeu);
    wr32((u32)param_1 + 0xd0u, 2u);
    wr16((u32)param_1 + 0x100u, (u16)r4);
    return;
}
