#include "tc_rt.h"

u32 fn_80171e70(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x16f8u);
    if (r0 == 3u) {
        r0 = (u32)rd8((u32)param_1 + 0x16e4u);
        if (r0 != 8u) {
            r0 = r0 * 0xcu;
            r3 = (u32)rd8((u32)param_1 + r0 + 0x17acu);
            if (r3 != 0x3cu) {
                return r3;
            }
        }
        return 0xffffffffu;
    }
    r5 = (u32)rd8((u32)param_1 + 0x16e4u);
    if (r5 != 8u) {
        r3 = (u32)param_1 + ((r0 << 2u) & 0xfffffffcu);
        r4 = r5 + ((rd32((u32)param_1 + 0x16f4u) << 3u) & 0xfffffff8u);
        if (rd32(r3 + 0x1804u) > r4) {
            r3 = rd32(r3 + 0x1798u);
            r3 = r3 + (r4 * 0xcu);
            r3 = (u32)rd8(r3 + 8u);
            return r3;
        }
    }
    return 0xffffffffu;
}
