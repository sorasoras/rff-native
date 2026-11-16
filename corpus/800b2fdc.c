#include "tc_rt.h"

u32 fn_800b2fdc(s32 param_1)
{
    return (rd32((u32)param_1 + 0xe88u) >> 0x10u) & 1u;
}
