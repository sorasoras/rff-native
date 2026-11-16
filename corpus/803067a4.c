#include "tc_rt.h"

void fn_803067a4(void)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571dc0u) != 0u) {
        r3 = tc_call(0x802302b4u, &a);
        r30 = r3;
        for (;;) {
            r3 = tc_call(0x802f08ccu, &a);
            if (((ppc_cntlzw(rd32(r3 + 0x50u)) >> 5u) & 0x7ffffffu) != 0u) break;
            r3 = tc_call(0x802302b4u, &a);
            r3 = r3 - r30;
            if (ppc_divwu(r3, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) != 0u) {
                return;
            }
        }
    }
    return;
}
