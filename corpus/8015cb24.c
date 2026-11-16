#include "tc_rt.h"

s32 fn_8015cb24(u32 param_1, s32 param_2)
{
    return (s32)(rd32(param_1) + ((u32)param_2 * 0x73cu));
}
