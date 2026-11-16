#include "tc_rt.h"

u32 fn_80123ff8(u32 param_1, s32 param_2)
{
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) + ((rd32(param_1) * 0x38u) - 0x7fcc65b0u));
}
