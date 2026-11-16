#include "tc_rt.h"

u32 fn_802e055c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, ca = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0;
    u64 t0 = 0;
    (void)param_1;
    r0 = (u32)rd16(param_2 + 4u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        return (u32)rd16(param_2 + (((param_3 - (u32)rd16(param_2)) << 1u) & 0xfffffffeu) + 0xcu);
    }
    if (!c0lt) {
        if ((s32)r0 >= 3) {
            return 0xffffu;
        }
        r6 = param_2 + 0xcu;
        r7 = r6 + 2u;
        r6 = r6 + ((((u32)rd16(param_2 + 0xcu) - 1u) << 2u) & 0xfffffffcu) + 2u;
        for (;;) {
            if (r7 > r6) {
                return 0xffffu;
            }
            r0 = r6 - r7;
            ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
            r0 = (u32)((s32)r0 >> 2);
            t0 = (u64)r0 + (u64)ca;
            r0 = (((((u32)t0 >> 0x1fu) & 1u) + (u32)t0) << 1u) & 0xfffffffcu;
            r4 = r7 + r0;
            r0 = (u32)rd16(r7 + r0);
            if (r0 >= param_3) {
                if (param_3 >= r0) break;
                r6 = r4 - 4u;
            } else {
                r7 = r4 + 4u;
            }
        }
        return (u32)rd16(r4 + 2u);
    }
    if ((s32)r0 >= 0) {
        return ((u32)rd16(param_2 + 0xcu) + (param_3 - (u32)rd16(param_2))) & 0xffffu;
    }
    return 0xffffu;
}
