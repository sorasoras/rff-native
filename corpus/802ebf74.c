#include "tc_rt.h"

s32 fn_802ebf74(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x40u) + (((rd32((u32)param_1 + 0x38u) >> 0x1cu) & 0xfu) * 0x1cu));
}
