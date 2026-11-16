#include "tc_rt.h"

s32 fn_8009acc8(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r4 = ~(param_1 | param_1);
    r3 = 0u;
    while ((r4 & 1u) != 0u) {
        r4 = (r4 >> 1u) & 0x7fffffffu;
        r3 = r3 + 1u;
    }
    return (s32)r3;
}
