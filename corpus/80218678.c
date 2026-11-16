#include "tc_rt.h"

s32 fn_80218678(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x64u) + 0x104u);
}
