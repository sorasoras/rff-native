#include "tc_rt.h"

u32 fn_801df0bc(s32 param_1)
{
    return ((rd32((u32)param_1 + 0xd60u) >> 0x1fu) & 1u) ^ 1u;
}
