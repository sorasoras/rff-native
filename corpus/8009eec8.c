#include "tc_rt.h"

u32 fn_8009eec8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0x1cu);
    if ((r4 & 4u) != 0u) {
        r31 = 1u;
    } else {
        r31 = 0u;
        if ((r4 & 2u) != 0u) {
            a.r[0] = rd32(param_1);
            a.r[1] = rd32(param_1 + 0xcu);
            r3 = tc_call(0x8009c30cu, &a);
            if ((u32)(s8)r3 != 0u) {
                a.r[0] = rd32(param_1);
                a.r[1] = rd32(param_1 + 0xcu);
                (void)tc_call(0x8009c354u, &a);
                r0 = rd32(param_1 + 0x1cu);
                wr32(param_1 + 0xcu, 0u);
                r31 = 1u;
                r0 = r0 & 0xfffffffdu;
                r0 = r0 | 5u;
                wr32(param_1 + 0x1cu, r0);
            }
        }
    }
    return r31;
}
