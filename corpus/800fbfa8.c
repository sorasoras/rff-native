#include "tc_rt.h"

void fn_800fbfa8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    r28 = 0u;
    for (;;) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x800fb14cu, &a);
        if ((s32)r28 >= (s32)rd32(r3 + 0xcu)) break;
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x800fb14cu, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = 0u;
        (void)tc_call(0x80185994u, &a);
        r28 = r28 + 1u;
    }
    r28 = 0x817fdfccu;
    r27 = 1u;
    r29 = 4u;
    do {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x800fb154u, &a);
        r3 = rd32(r3 + 0x2cu);
        r3 = rd32(r3 + r29);
        r7 = rd32(0x8033916cu);
        r4 = (u32)rd16(r3 + 0xbcu);
        r6 = rd32(0x80339170u);
        r5 = rd32(0x80339174u);
        r3 = rd32(0x80339178u);
        r0 = rd32(0x8033917cu);
        wr32(0x817fdfc8u, rd32(0x80339168u));
        wr32(0x817fdfccu, r7);
        wr32(0x817fdfd0u, r6);
        wr32(0x817fdfd4u, r5);
        wr32(0x817fdfd8u, r3);
        wr32(0x817fdfdcu, r0);
        if (r4 == 0x2e8u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x70u;
            a.r[1] = rd32(r28);
            (void)tc_call(0x80210da4u, &a);
        } else {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x70u;
            a.r[1] = r4;
            a.r[2] = rd32(r28);
            (void)tc_call(0x80210c98u, &a);
        }
        r27 = r27 + 1u;
        r28 = r28 + 4u;
        r29 = r29 + 4u;
    } while ((s32)r27 < 6);
    return;
}
