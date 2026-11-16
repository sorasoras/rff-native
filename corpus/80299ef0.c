#include "tc_rt.h"

u32 fn_80299ef0(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (param_1 * 0x34u) - 0x7fac26a8u;
    if (param_1 < 3u) {
        r30 = (u32)rd16(r31 + 0x185cu);
        if (r30 != 0u) {
            if ((u32)rd16(r31 + 0x185eu) == 0xffffu || r30 == 6u) {
                wr16(r31 + 0x185eu, 0xffffu);
                r3 = 0u;
                wr16(r31 + 0x185cu, 0u);
                wr32(r31 + 0x1864u, 0u);
                return r3;
            }
            wr16(r31 + 0x185cu, 5u);
            a.r[0] = (u32)rd16(r31 + 0x185eu);
            a.r[1] = 0x13u;
            r3 = tc_call(0x8029fdd4u, &a);
            if ((r3 & 0xffu) != 0u) {
                r3 = 1u;
                return r3;
            }
            wr16(r31 + 0x185cu, (u16)r30);
            r3 = 3u;
            return r3;
        }
    }
    r3 = 7u;
    return r3;
}
