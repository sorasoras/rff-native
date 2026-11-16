#include "tc_rt.h"

s32 fn_8013a760(s32 param_1)
{
    if (rd32((u32)param_1 + 0x580u) == 0u) {
        return (s32)rd32((u32)param_1 + ((rd32((u32)param_1 + 0x5f0u) << 2u) & 0xfffffffcu) + 0x44u);
    }
    return param_1;
}
