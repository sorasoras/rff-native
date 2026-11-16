#include "tc_rt.h"

u32 fn_800a7b34(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8(((u32)param_1 * 0x38u) - 0x7fb64fcau);
    if (r0 == 1u || r0 == 2u) {
        return 1u;
    }
    return 0u;
}
