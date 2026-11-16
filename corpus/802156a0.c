#include "tc_rt.h"

u32 fn_802156a0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x3e8u);
    if (r3 != 0u) {
        r3 = r3 + (((u32)param_2 << 2u) & 0xfffffffcu);
        r3 = rd32(r3 + 0x10u);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        return r3;
    }
    return 0u;
}
