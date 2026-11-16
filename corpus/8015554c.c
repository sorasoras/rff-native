#include "tc_rt.h"

u32 fn_8015554c(s32 param_1)
{
    u32 r0 = 0;
    r0 = (u32)rd8((u32)param_1 + 1u);
    if (r0 == 0u) {
        return 0u;
    }
    if (r0 == 3u) {
        r0 = (u32)rd8((u32)param_1 + 2u);
        if (r0 >= 5u && r0 <= 0xdu) {
            return 1u;
        }
        if (r0 == 0x10u) {
            return 1u;
        }
        if (r0 == 0x11u) {
            return 1u;
        }
    }
    return 0u;
}
