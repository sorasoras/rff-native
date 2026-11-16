#include "tc_rt.h"

u32 fn_800c43b4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        r3 = 0u;
    } else {
        if (rd32((u32)param_1 + 0xab4u) != 0xbu) {
            r3 = 0u;
        } else {
            if ((rd32(0x805711ecu) == 0u && rd32((u32)param_1 + 0x290u) == 0xbu) && ((rd32(0x8057118cu) & 8u) != 0u && ((u32)rd16((u32)param_1 + 0x140u) & 4u) != 0u)) {
                r3 = 1u;
            } else {
                r3 = 0u;
            }
        }
    }
    return r3;
}
