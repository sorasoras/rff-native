#include "tc_rt.h"

u32 fn_800cf5e8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x805711e8u);
    wr32(0x805711ecu, 1u);
    if (r3 == 0u) {
        if (rd32(0x805711f0u) == 0u) {
            wr32(0x805711ecu, 0u);
        }
        r3 = 0u;
        wr32(0x805711f0u, 0u);
    } else {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
        if (r3 == 0u) {
            wr32(0x805711e8u, 0u);
            wr32(0x805711ecu, 0u);
            wr32(0x805711f0u, 0u);
            (void)tc_call(0x800cf3ecu, &a);
        }
        r3 = rd32(0x805711ecu);
    }
    return r3;
}
