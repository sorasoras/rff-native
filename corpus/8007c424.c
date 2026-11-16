#include "tc_rt.h"

u32 fn_8007c424(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r4 = (u32)(s16)rd16(rd32((u32)param_2 + 0x3cu) + 0x68u);
    if ((s32)r4 < 0 || r4 >= rd32((u32)param_1 + 0x34u)) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r4);
    }
    if (r3 == 0u) {
        return 1u;
    }
    r3 = rd32(r3 + 0x3cu);
    r0 = (u32)(s16)rd16(param_3);
    r3 = (u32)rd8(r3 + 0x62u);
    r4 = r3 & 0xfu;
    r3 = r0 - r4;
    r0 = r4 - r0;
    r0 = r3 | r0;
    return (r0 >> 0x1fu) & 1u;
}
