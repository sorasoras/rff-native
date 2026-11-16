#include "tc_rt.h"

u32 fn_80215504(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x3dcu);
    wr32((u32)param_1 + 0x3dcu, 0u);
    return r3;
}
