#include "tc_rt.h"

u32 fn_802eb490(s32 param_1)
{
    return ((((u32)rd8((u32)param_1 + 2u) >> 2u) & 7u) + 1u) & 7u;
}
