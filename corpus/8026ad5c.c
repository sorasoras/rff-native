#include "tc_rt.h"

u32 fn_8026ad5c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80502c90u);
    if ((param_1 < r4 || param_1 >= (r4 + 0x4000u)) || (rd32(0x805029f0u) & 3u) == 0u) {
        if (param_1 >= 0x7e000000u && param_1 <= 0x80000000u) {
            return param_1;
        }
        return (param_1 & 0x3fffffffu) | 0x80000000u;
    }
    return param_1;
}
