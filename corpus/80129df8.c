#include "tc_rt.h"

void fn_80129df8(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = rd32(0x80339e78u);
    r28 = rd32(0x80339e7cu);
    r29 = rd32(0x80339e80u);
    r30 = rd32(0x80339e84u);
    r12 = rd32(0x80339e88u);
    r11 = rd32(0x80339e8cu);
    r10 = rd32(0x80339e90u);
    r9 = rd32(0x80339e94u);
    r8 = rd32(0x80339e98u);
    r7 = rd32(0x80339e9cu);
    r6 = rd32(0x80339ea0u);
    r5 = rd32(0x80339ea4u);
    r4 = rd32(0x80339ea8u);
    r0 = rd32(0x80339eacu);
    wr32(0x817fdfa8u, r27);
    wr32(0x817fdfacu, r28);
    wr32(0x817fdfb0u, r29);
    wr32(0x817fdfb4u, r30);
    wr32(0x817fdfb8u, r12);
    wr32(0x817fdfbcu, r11);
    wr32(0x817fdfc0u, r10);
    wr32(0x817fdfc4u, r9);
    wr32(0x817fdfc8u, r8);
    wr32(0x817fdfccu, r7);
    wr32(0x817fdfd0u, r6);
    wr32(0x817fdfd4u, r5);
    wr32(0x817fdfd8u, r4);
    wr32(0x817fdfdcu, r0);
    a.r[0] = 0x8049df80u;
    r3 = tc_call(0x800c9458u, &a);
    if (r3 != 0x21u) {
        a.r[0] = 0x8049df80u;
        r3 = tc_call(0x800c9458u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7e802058u);
        (void)tc_call(0x8010a924u, &a);
    } else {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r27;
        (void)tc_call(0x8010a924u, &a);
    }
    return;
}
