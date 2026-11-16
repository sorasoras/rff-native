#include "tc_rt.h"

u32 fn_80080440(s32 param_1)
{
    return rd32((u32)param_1 + 0x1ccu);
}
