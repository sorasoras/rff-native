#include "tc_rt.h"

s32 fn_8031061c(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r7 = 0, r9 = 0;
    r7 = (u32)rd16((u32)param_1 + 0x22u);
    r9 = (u32)rd16((u32)param_1 + 0x24u);
    r4 = r7 & 0xfu;
    r7 = ((u32)((s32)r7 >> 4) << 2u) & 0xfffffffcu;
    r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
    r4 = (u32)(s16)r4;
    r7 = (u32)((s32)((u32)((s32)(((u32)(s16)r9 * (u32)(s16)rd16((u32)param_1 + r7)) + ((u32)(s16)rd16((u32)param_1 + 0x26u) * (u32)(s16)rd16((u32)param_1 + r7 + 2u)) + ((u32)((s32)(s16)(((u32)param_2 << 0xcu) & 0xff000u) >> 1) * r4)) >> 10) + 1u) >> 1);
    if ((s32)r7 > 32767) {
        r7 = 0x7fffu;
    } else {
        if ((s32)r7 < -32768) {
            r7 = 0xffff8000u;
        }
    }
    wr16((u32)param_1 + 0x26u, (u16)r9);
    wr16((u32)param_1 + 0x24u, (u16)r7);
    return (s32)r7;
}
