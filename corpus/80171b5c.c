#include "tc_rt.h"

u32 fn_80171b5c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    r0 = rd32((u32)param_1 + 0x16f8u);
    if (r0 == 3u) {
        r4 = 0u;
        r0 = (u32)(s8)rd8((u32)param_1 + ((u32)param_2 * 0xcu) + 0x17acu);
        if (r0 != 0x3cu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = r0 - 0x7fb66dc0u;
        }
        return r4;
    }
    r3 = (u32)param_1 + ((r0 << 2u) & 0xfffffffcu);
    r4 = (u32)param_2 + ((rd32((u32)param_1 + 0x16f4u) << 3u) & 0xfffffff8u);
    if (rd32(r3 + 0x1804u) > r4) {
        r3 = rd32(r3 + 0x1798u);
        r3 = r3 + (r4 * 0xcu);
        r3 = (((u32)(s8)rd8(r3 + 8u) << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
        r3 = r3 + 0x1e0u;
        return r3;
    }
    return 0u;
}
