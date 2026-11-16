#include "tc_rt.h"

u32 fn_801dd8a8(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x1cu, 0u);
    return r3;
}
