#include "tc_rt.h"

u32 fn_8032b304(s32 param_1, s32 param_2)
{
    return rd32((u32)param_2 + (u32)rd16((u32)param_1 + 0x42u));
}
