#include "tc_rt.h"

void fn_8023f180(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    wr32(0x805716e0u, rd32(0x805716e0u) | rd32(0x805716d0u));
    wr32(0x805716d0u, 0u);
    r0 = rd32(0x805716e8u) | rd32(0x805716d8u);
    wr32(0x805716ecu, rd32(0x805716ecu) | rd32(0x805716dcu));
    wr32(0x805716e8u, r0);
    while ((rd32(0x805716dcu) | rd32(0x805716d8u)) != 0u) {
        r0 = ppc_cntlzw(rd32(0x805716d8u));
        r3 = rd32(0x805716dcu);
        if ((s32)r0 >= 32) {
            r3 = ppc_cntlzw(r3);
            r0 = r3 + 0x20u;
        }
        r6 = (r0 << 1u) & 0xfffffffeu;
        wr16(r6 - 0x7fb19ec0u, rd16(r6 - 0x7fb19e48u));
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 0x3fu - r0;
        r3 = tc_call(0x80255e84u, &a);
        r4 = tc_lastr4();
        r4 = ~(r4 | r4);
        r0 = rd32(0x805716d8u) & ~(r3 | r3);
        wr32(0x805716dcu, rd32(0x805716dcu) & r4);
        wr32(0x805716d8u, r0);
    }
    r0 = rd32(0x804e6260u);
    wr32(0x80571748u, 1u);
    wr32(0x80571744u, 1u);
    wr32(0x8057170cu, r0);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
