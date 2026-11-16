#include "tc_rt.h"

u32 fn_80153c30(s32 param_1)
{
    return rd32((u32)param_1 + 0x30u) & 0xffu;
}
