#include "tc_rt.h"

u32 fn_8009f2cc(s32 param_1)
{
    return (u32)(s8)((rd32((u32)param_1 + 0x1cu) >> 2u) & 1u);
}
