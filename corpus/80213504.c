#include "tc_rt.h"

void fn_80213504(s32 param_1, s32 param_2, s32 param_3)
{
    if (param_2 >= 0) {
        if (param_2 >= (s32)rd32(rd32((u32)param_1 + 0x4ecu))) {
            return;
        }
        wr8(rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u), (u8)((((0u - (u32)param_3) | (u32)param_3) >> 0x1fu) & 1u));
        return;
    }
    return;
}
