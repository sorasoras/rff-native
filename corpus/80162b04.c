#include "tc_rt.h"

u32 fn_80162b04(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    for (;;) {
        a.r[0] = rd32(r31 + 4u) + 8u;
        r3 = tc_call(0x8011e538u, &a);
        if (((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu) != 0u) break;
        r30 = r30 + 1u;
        r31 = r31 + 4u;
        if ((s32)r30 >= 16) {
            r3 = 0u;
            return r3;
        }
    }
    r4 = (u32)param_1 + ((r30 << 2u) & 0xfffffffcu);
    wr32(rd32(r4 + 4u) + 0x44u, 0u);
    r3 = rd32(r4 + 4u);
    return r3;
}
