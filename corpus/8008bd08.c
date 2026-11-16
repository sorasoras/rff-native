#include "tc_rt.h"

u32 fn_8008bd08(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + ((u32)param_4 * 0xa0u) + (((u32)param_2 << 3u) & 0xfffffff8u);
    if (rd32(r3 + 0x2a4u) != 0u) {
        wr32(r3 + 0x2a8u, param_3);
        return 1u;
    }
    return 0u;
}
