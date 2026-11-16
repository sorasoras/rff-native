#include "tc_rt.h"

u32 fn_800590b4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    r5 = (u32)param_3;
    r6 = (u32)param_2 * 0x14u;
    if ((s32)rd32((u32)param_1 + r6 + 8u) <= param_3) {
        r5 = 0u;
    }
    r3 = rd32((u32)param_1 + r6 + 4u);
    if (r3 != 0u) {
        r3 = rd32(r3 + ((r5 << 2u) & 0xfffffffcu));
        return r3;
    }
    return 0u;
}
