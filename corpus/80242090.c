#include "tc_rt.h"

u32 fn_80242090(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r30 = (param_1 | rd32(0x80571780u)) & ~(rd32(0x80571788u) | rd32(0x80571784u));
    r5 = rd32(0x80571794u);
    r6 = rd32(0x80571790u) | r30;
    r8 = ~(r30 | r30);
    c0eq = rd32(0x80570b50u) == 4u;
    r0 = rd32(0x8057177cu) & r8;
    wr32(0x80571780u, 0u);
    r3 = r6 & r5;
    wr32(0x80571790u, r6);
    wr32(0x80571794u, r5 & r8);
    wr32(0x8057177cu, r0);
    if (c0eq) {
        wr32(0x8057178cu, rd32(0x8057178cu) | r30);
    }
    a.r[0] = r3;
    (void)tc_call(0x802657dcu, &a);
    if (rd32(0x80570b44u) == 0x20u) {
        r5 = rd32(0x80571790u);
        r6 = ppc_cntlzw(r5);
        wr32(0x80570b44u, r6);
        if (r6 != 0x20u) {
            r5 = r5 & ~(((r6 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r6 & 0x1fu)));
            wr32(0x80571790u, r5);
            a.r[0] = (r6 * 0xcu) - 0x7fb19d30u;
            a.r[1] = 0u;
            a.r[2] = 0xcu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = rd32(0x80570b44u);
            a.r[1] = 0x80241d70u;
            (void)tc_call(0x80265fc8u, &a);
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return 1u;
}
