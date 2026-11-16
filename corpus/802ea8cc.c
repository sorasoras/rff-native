#include "tc_rt.h"

s32 fn_802ea8cc(s32 param_1)
{
    return (s32)(((u32)rd8((u32)param_1 + 0x104u) + 1u) & 0xffu);
}
