#include "tc_rt.h"

u32 fn_8015f148(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    r0 = 0x80570868u;
    if ((u32)param_2 != 0x2e8u) {
        r0 = rd32((u32)param_1 + ((u32)param_2 * 0x34u) + 0x2858u);
    }
    return r0;
}
