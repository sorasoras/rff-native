#include "tc_rt.h"

void fn_80163818(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_2 >= 1u && param_2 <= 0xdu) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        r25 = rd32(0x8033a738u);
        r26 = rd32(0x8033a73cu);
        r27 = rd32(0x8033a740u);
        r28 = rd32(0x8033a744u);
        r29 = rd32(0x8033a748u);
        r12 = rd32(0x8033a74cu);
        r11 = rd32(0x8033a750u);
        r10 = rd32(0x8033a754u);
        r9 = rd32(0x8033a758u);
        r8 = rd32(0x8033a75cu);
        r7 = rd32(0x8033a760u);
        r6 = rd32(0x8033a764u);
        wr32(0x817fdfa8u, rd32(0x8033a734u));
        wr32(0x817fdfacu, r25);
        wr32(0x817fdfb0u, r26);
        wr32(0x817fdfb4u, r27);
        wr32(0x817fdfb8u, r28);
        wr32(0x817fdfbcu, r29);
        wr32(0x817fdfc0u, r12);
        wr32(0x817fdfc4u, r11);
        wr32(0x817fdfc8u, r10);
        wr32(0x817fdfccu, r9);
        wr32(0x817fdfd0u, r8);
        wr32(0x817fdfd4u, r7);
        wr32(0x817fdfd8u, r6);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((((param_2 - 1u) << 2u) & 0xfffffffcu) - 0x7e802058u);
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x80162d34u, &a);
        wr32((u32)param_1 + 0x50u, param_2);
    }
    return;
}
