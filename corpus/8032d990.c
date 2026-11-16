#include "tc_rt.h"

u32 fn_8032d990(u32 param_1, s32 param_2)
{
    (void)param_1;
    return (u32)rd8((u32)param_2 + 0xb2u) & 0xc0u;
}
