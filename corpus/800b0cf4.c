#include "tc_rt.h"

u32 fn_800b0cf4(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x364u);
    wr32((u32)param_1 + 0x364u, param_2);
    return r3;
}
