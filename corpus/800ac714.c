#include "tc_rt.h"

u32 fn_800ac714(s32 param_1, u32 param_2)
{
    return rd32((u32)param_1 + 0x80u) & param_2;
}
