#include "tc_rt.h"

void fn_80243434(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    r6 = (rd32(param_1 + 0xcu) << 2u) & 0xfffffffcu;
    r0 = rd32(r6 - 0x7fb19c80u);
    r7 = rd32(r6 - 0x7fb19c00u);
    if (r0 == r7) {
        wr32(r6 - 0x7fb19c00u, 0u);
        wr32(r6 - 0x7fb19c80u, 0u);
        return;
    }
    if (param_1 == r0) {
        r3 = rd32(param_1);
        wr32(r6 - 0x7fb19c80u, r3);
        wr32(r3 + 4u, 0u);
        return;
    }
    if (param_1 == r7) {
        r3 = rd32(param_1 + 4u);
        wr32(r6 - 0x7fb19c00u, r3);
        wr32(r3, 0u);
        return;
    }
    r4 = rd32(param_1 + 4u);
    r3 = rd32(param_1);
    wr32(r4, r3);
    wr32(r3 + 4u, r4);
    return;
}
