#include "tc_rt.h"

u32 fn_801c0e2c(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r31 = 0;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0x817fdfccu;
    r27 = 0u;
    r8 = rd32(0x8033bc48u);
    r31 = rd32(0x8033bc38u);
    r28 = rd32((u32)param_1 + 0x194u) + (u32)param_2;
    r12 = rd32(0x8033bc3cu);
    r11 = rd32(0x8033bc40u);
    r3 = 0xffffffffu;
    r10 = rd32(0x8033bc44u);
    r7 = rd32(0x8033bc4cu);
    r6 = rd32(0x8033bc50u);
    r5 = rd32(0x8033bc54u);
    r4 = rd32(0x8033bc58u);
    wr32(0x817fdfccu, rd32(0x8033bc34u));
    wr32(0x817fdfd0u, r31);
    wr32(0x817fdfd4u, r12);
    wr32(0x817fdfd8u, r11);
    wr32(0x817fdfdcu, r10);
    wr32(0x817fdfb8u, r8);
    wr32(0x817fdfbcu, r7);
    wr32(0x817fdfc0u, r6);
    wr32(0x817fdfc4u, r5);
    wr32(0x817fdfc8u, r4);
    ctr = 5u;
    while (r28 != rd32(r29)) {
        r29 = r29 + 4u;
        r27 = r27 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return r3;
        }
    }
    r3 = rd32(((r27 << 2u) & 0xfffffffcu) - 0x7e802048u);
    return r3;
}
