#include "tc_rt.h"

u32 fn_80258fd4(u32 param_1, u32 param_2, s32 param_3)
{
    if (param_2 == 0u) {
        return 0u;
    }
    if ((u32)param_3 == 0u) {
        return 0xffffffffu;
    }
    if (param_1 != 0u) {
        wr16(param_1, (u16)rd8(param_2));
    }
    if ((u32)(s8)rd8(param_2) == 0u) {
        return 0u;
    }
    return 1u;
}
