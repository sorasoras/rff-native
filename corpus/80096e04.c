#include "tc_rt.h"

u32 fn_80096e04(s32 param_1)
{
    return (u32)rd8((((u32)param_1 << 1u) & 0xfffffffeu) - 0x7fcae8ffu);
}
