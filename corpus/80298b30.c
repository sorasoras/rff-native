#include "tc_rt.h"

u32 fn_80298b30(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0;
    if ((param_1 & 4u) != 0u) {
        r0 = (u32)rd8(param_2);
        if (r0 >= 2u) {
            return 5u;
        }
        r0 = (r0 << 3u) & 0x7f8u;
        wr8(r0 - 0x7fac2150u, 0u);
        return 0u;
    }
    r6 = 0x8053d958u;
    r7 = 0u;
    ctr = 2u;
    do {
        if ((u32)rd8(r6 + 0x558u) == 0u) {
            if ((param_1 & 2u) != 0u) {
                if ((u32)param_3 == 0u) {
                    return 5u;
                }
                wr32(((r7 << 3u) & 0xfffffff8u) - 0x7fac2154u, (u32)param_3);
            }
            wr8(((r7 << 3u) & 0xfffffff8u) - 0x7fac2150u, (u8)param_1);
            wr8(param_2, (u8)r7);
            return 0u;
        }
        r6 = r6 + 8u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 3u;
}
