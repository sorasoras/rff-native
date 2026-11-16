#include "tc_rt.h"

s32 fn_80091a64(u32 param_1, u32 param_2, u32 param_3)
{
    (void)param_1;
    if (rd32(param_2) <= param_3) {
        return 0;
    }
    return (s32)(rd32(param_2 + 4u) + ((param_3 << 5u) & 0xffffffe0u));
}
