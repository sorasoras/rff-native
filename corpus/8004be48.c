#include "tc_rt.h"

s32 fn_8004be48(u32 param_1)
{
    u32 r5 = 0, r6 = 0;
    r6 = rd32(0x803c62dcu);
    for (;;) {
        if (r6 == 0u) {
            return 0;
        }
        if (rd32(param_1 + 0x10u) != rd32(r6 + 0x20u)) {
            r5 = 0u;
        } else {
            r5 = 0u;
            if (rd32(param_1) == rd32(r6 + 0x10u) && rd32(param_1 + 4u) == rd32(r6 + 0x14u) && rd32(param_1 + 8u) == rd32(r6 + 0x18u) && rd32(param_1 + 0xcu) == rd32(r6 + 0x1cu)) {
                r5 = 1u;
            }
        }
        if (r5 != 0u) break;
        r6 = rd32(r6 + 0x28u);
    }
    return (s32)r6;
}
