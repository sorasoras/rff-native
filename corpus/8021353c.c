#include "tc_rt.h"

u32 fn_8021353c(s32 param_1, s32 param_2)
{
    if (param_2 >= 0 && param_2 < (s32)rd32(rd32((u32)param_1 + 0x4ecu))) {
        return (u32)rd8(rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u));
    }
    return 0u;
}
