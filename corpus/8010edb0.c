#include "tc_rt.h"

u32 fn_8010edb0(s32 param_1)
{
    if ((u32)(s8)rd8((u32)param_1 + 2u) != 0u) {
        return 0u;
    }
    if ((u32)(s8)rd8((u32)param_1 + 3u) != 0u) {
        return 1u;
    }
    if ((u32)(s8)rd8((u32)param_1 + 4u) != 0u) {
        return 2u;
    }
    if ((u32)(s8)rd8((u32)param_1 + 5u) != 0u) {
        return 3u;
    }
    if ((u32)(s8)rd8((u32)param_1 + 6u) != 0u) {
        return 4u;
    }
    if ((u32)(s8)rd8((u32)param_1 + 7u) != 0u) {
        return 5u;
    }
    return 0xffffffffu;
}
