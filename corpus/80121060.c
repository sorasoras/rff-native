#include "tc_rt.h"

u32 fn_80121060(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    if (param_2 < 0) {
        return 0u;
    }
    r3 = rd32((u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u) + 0x44u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
