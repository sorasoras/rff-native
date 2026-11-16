#include "tc_rt.h"

u32 fn_80061340(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r28 = 0;
    u32 r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0u;
    r3 = tc_call(0x80043c20u, &a);
    if (rd32(r3 + 0xfcu) != 0xffu) {
        r29 = 0x817fdfb8u;
        r31 = rd32(0x80336674u);
        r28 = 0u;
        r12 = rd32(0x80336678u);
        r11 = rd32(0x8033667cu);
        r10 = rd32(0x80336680u);
        r9 = rd32(0x80336684u);
        r8 = rd32(0x80336688u);
        r7 = rd32(0x8033668cu);
        r6 = rd32(0x80336690u);
        r5 = rd32(0x80336694u);
        r4 = rd32(0x80336698u);
        wr32(0x817fdfb8u, rd32(0x80336670u));
        wr32(0x817fdfbcu, r31);
        wr32(0x817fdfc0u, r12);
        wr32(0x817fdfc4u, r11);
        wr32(0x817fdfc8u, r10);
        wr32(0x817fdfccu, r9);
        wr32(0x817fdfd0u, r8);
        wr32(0x817fdfd4u, r7);
        wr32(0x817fdfd8u, r6);
        wr32(0x817fdfdcu, r5);
        wr32(0x817fdfe0u, r4);
        ctr = 0xbu;
        do {
            if (r28 != 0xau && (rd32(r3 + 4u) & rd32(r29)) != 0u) {
                r3 = 1u;
                return r3;
            }
            r29 = r29 + 4u;
            r28 = r28 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = 0u;
    return r3;
}
