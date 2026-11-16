#include "tc_rt.h"

u32 fn_801f3638(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r6 = 0;
    r6 = 0u;
    r0 = rd32((u32)param_1 + (rd32((u32)param_1 + 0xfb4u) * 0x48u) + (rd32((u32)param_1 + 0xfb8u) * 0xcu) + 0x3c4u);
    if (param_2 >= 0 && param_2 < (s32)r0) {
        r6 = 1u;
    }
    return r6;
}
