#include "tc_rt.h"

void fn_8027155c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r7 = 0;
    r7 = 0u;
    if ((param_2 & 1u) != 0u) {
        r7 = 0x10u;
    }
    if ((param_2 & 2u) != 0u) {
        r7 = r7 | 0x20u;
    }
    if ((param_3 & 1u) != 0u) {
        r7 = r7 | 4u;
    }
    if ((param_3 & 2u) != 0u) {
        r7 = r7 | 8u;
    }
    if ((param_4 & 1u) != 0u) {
        r7 = r7 | 1u;
    }
    if ((param_4 & 2u) != 0u) {
        r7 = r7 | 2u;
    }
    wr8(param_1, (u8)r7);
    return;
}
