#include "tc_rt.h"

s32 fn_8014a204(u32 param_1, s32 param_2)
{
    return (s32)(rd32(0x805712fcu) + (rd32(param_1) * 0x418u) + ((u32)param_2 * 0x28u) + 0x68u);
}
