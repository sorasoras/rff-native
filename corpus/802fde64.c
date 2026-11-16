#include "tc_rt.h"

u32 fn_802fde64(s32 param_1, s32 param_2)
{
    if (param_2 > 15) {
        return 0u;
    }
    return rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x11cu);
}
