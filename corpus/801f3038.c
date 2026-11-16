#include "tc_rt.h"

u32 fn_801f3038(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    r9 = rd32(0x8033c228u);
    r8 = rd32(0x8033c22cu);
    r7 = rd32(0x8033c230u);
    r6 = rd32(0x8033c234u);
    r5 = rd32(0x8033c238u);
    r4 = rd32(0x8033c23cu);
    wr32(0x817fdfd8u, rd32(0x8033c224u));
    wr32(0x817fdfdcu, r9);
    wr32(0x817fdfe0u, r8);
    wr32(0x817fdfe4u, r7);
    wr32(0x817fdfe8u, r6);
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r4);
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802028u);
}
