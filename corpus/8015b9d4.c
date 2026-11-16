#include "tc_rt.h"

s32 fn_8015b9d4(s32 param_1, s32 param_2)
{
    return (s32)((u32)param_1 + (((u32)param_2 << 6u) & 0xffffffc0u) + 0x7bcu);
}
