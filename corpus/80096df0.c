#include "tc_rt.h"

u32 fn_80096df0(s32 param_1)
{
    return (u32)rd8((((u32)param_1 << 1u) & 0xfffffffeu) - 0x7fcae900u);
}
