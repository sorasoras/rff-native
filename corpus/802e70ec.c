#include "tc_rt.h"

u32 fn_802e70ec(s32 param_1, u32 param_2)
{
    return (u32)rd8((u32)param_1 + ((param_2 >> 1u) & 0x7ffffffcu) + (param_2 & 3u) + 0xdcu);
}
