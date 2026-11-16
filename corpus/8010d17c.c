#include "tc_rt.h"

void fn_8010d17c(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    u32 r31 = 0;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x817fdfd8u;
    wr32(0x817fdff8u, 0u);
    r30 = 1u;
    r6 = rd32(param_1 + 4u);
    r10 = rd32(0x80339470u);
    r9 = rd32(0x80339474u);
    r12 = (((0u - r6) | r6) >> 0x1fu) & 1u;
    r8 = rd32(0x80339478u);
    r7 = rd32(0x8033947cu);
    r6 = rd32(0x80339480u);
    r5 = rd32(0x80339484u);
    wr32(0x817fdfd8u, rd32(0x8033946cu));
    r11 = rd32(param_1);
    wr32(0x817fdfdcu, r10);
    r3 = rd32(0x80571188u);
    wr32(0x817fdfe0u, r9);
    wr32(0x817fdfe4u, r8);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r5);
    ctr = 7u;
    do {
        if ((r11 & r30) != 0u) {
            r0 = rd32(r31);
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r5 = r3 | r0;
            if (r12 != 0u) {
                r5 = r3 & ~r0;
            }
            wr32(0x80571188u, r5);
            r3 = r5;
        }
        r30 = (r30 << 1u) & 0xfffffffeu;
        r31 = r31 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
