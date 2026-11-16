#include "tc_rt.h"

u32 fn_8009bd68(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r0 = rd32(param_1 + 0x58u);
        if ((r0 == 0u || r0 == 1u) || r0 == 5u) {
            r4 = rd32(param_1);
            if (r4 != 0u) {
                wr32(r4 + 4u, rd32(param_1 + 4u));
            } else {
                wr32(rd32(param_1 + 0xcu) + 0x4cu, rd32(param_1 + 4u));
            }
            r4 = rd32(param_1 + 4u);
            if (r4 != 0u) {
                wr32(r4, rd32(param_1));
            }
            wr32(param_1, 0u);
            wr32(param_1 + 4u, 0u);
            a.r[0] = rd32(param_1 + 0xcu);
            a.r[1] = param_1;
            (void)tc_call(0x8009c068u, &a);
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
