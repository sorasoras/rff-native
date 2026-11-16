#include "tc_rt.h"

u32 fn_802dec00(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0;
    if (rd32(param_1) != (u32)param_2) {
        return 0u;
    }
    if ((u32)rd16(param_1 + 4u) != 0xfeffu) {
        return 0u;
    }
    if ((u32)rd16(param_1 + 6u) != param_3) {
        return 0u;
    }
    if (rd32(param_1 + 8u) < (((param_4 << 3u) & 0x7fff8u) + 0x10u)) {
        return 0u;
    }
    r3 = (u32)rd16(param_1 + 0xeu);
    r0 = r3 - param_4;
    r3 = r3 | ~param_4;
    r0 = (r0 >> 1u) & 0x7fffffffu;
    r0 = r3 - r0;
    return (r0 >> 0x1fu) & 1u;
}
