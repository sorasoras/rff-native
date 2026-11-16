#include "tc_rt.h"

u32 fn_8027622c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r7 = rd32(param_1 + 8u);
    r9 = rd32(param_1);
    r8 = rd32(r9 + 4u);
    r6 = r8 + (r7 * 0xcu);
    while (r7 > rd32(param_1 + 4u) && rd32(param_1 + 0xcu) > r7) {
        wr32(param_2, r9);
        wr32(param_2 + 4u, r7);
        r5 = rd32(r6) & 0xff000000u;
        wr32(param_2 + 8u, (((0u - r5) | r5) >> 0x1fu) & 1u);
        r5 = rd32(r9 + 0x10u) + (rd32(r6) & 0xffffffu);
        wr32(param_2 + 0xcu, r5);
        if ((u32)rd8(r5) != 0x2eu || (u32)(s8)rd8(r5 + 1u) != 0u) {
            r4 = r7 * 0xcu;
            if ((rd32(r8 + r4) & 0xff000000u) == 0u) {
                r0 = r7 + 1u;
            } else {
                r4 = r8 + r4;
                r0 = rd32(r4 + 8u);
            }
            wr32(param_1 + 8u, r0);
            return 1u;
        }
        r6 = r6 + 0xcu;
        r7 = r7 + 1u;
    }
    return 0u;
}
