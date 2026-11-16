#include "tc_rt.h"

u32 fn_80256024(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r7 = 0;
    if (rd32(0x805006d0u) != 0u) {
        r7 = rd32(0x805006c8u);
        for (;;) {
            r0 = rd32(r7 + 0xcu);
            if (r0 == 0u) {
                return 0u;
            }
            r5 = rd32(r7 + 8u);
            if (param_1 >= r5) {
                r0 = r5 + r0;
                if (param_1 < r0) break;
            }
            r7 = r7 + 0x10u;
        }
        wr32(param_2, rd32(r7));
        wr32(param_2 + 4u, rd32(r7 + 4u));
        wr32(param_2 + 8u, 0u);
        wr32(param_2 + 0xcu, 0u);
        wr32(param_2 + 0x10u, 0u);
        wr32(param_2 + 0x14u, 0u);
        wr32(param_2 + 0x18u, rd32(0x805006ccu));
        wr32(param_2 + 0x1cu, rd32(0x805006d0u));
        return 1u;
    }
    return 0u;
}
