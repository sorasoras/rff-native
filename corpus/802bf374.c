#include "tc_rt.h"

u32 fn_802bf374(s32 param_1, s32 param_2)
{
    return (u32)rd8((u32)param_1 + (u32)param_2 + 4u);
}
