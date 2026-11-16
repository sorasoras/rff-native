#include "tc_rt.h"

u32 fn_80140568(u32 param_1, u32 param_2)
{
    (void)param_1;
    return (u32)(s8)(((u32)rd8(param_2) >> 2u) & 3u);
}
