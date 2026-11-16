#include "tc_rt.h"

void fn_801e66d0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_1;
    if (rd32(param_1 + 0x724u) != 0u) {
        a.r[0] = rd32(param_1);
        r3 = tc_call(0x8007d150u, &a);
        r30 = (ppc_cntlzw(rd32(r3 + 4u) - 2u) >> 5u) & 0x7ffffffu;
        a.r[0] = 0x817fdfa8u;
        a.r[1] = rd32(param_1 + 0x724u);
        a.r[2] = 0xffffu;
        (void)tc_call(0x800500a8u, &a);
        r29 = rd32(0x817fdfb0u);
        r31 = param_1;
        for (;;) {
            r4 = (u32)(s16)rd16(0x817fdfa8u);
            if (r4 >= rd32(r29 + 8u)) break;
            r25 = rd32(r29 + 0xcu) + ((r4 << 5u) & 0xffffffe0u);
            r24 = (u32)(s16)rd16(r25 + 2u) - 1u;
            for (;;) {
                r0 = (u32)(s16)rd16(0x817fdfaau);
                if ((s32)r0 >= (s32)r24) break;
                r6 = rd32(r25 + 4u);
                wr16(0x817fdfaau, (u16)((u32)(s16)rd16(0x817fdfaau) + 1u));
                r23 = r6 + (r0 * 0xcu);
                a.r[0] = param_1;
                a.r[1] = (u32)rd16(r23);
                a.r[2] = r30;
                r3 = tc_call(0x801e6814u, &a);
                if (r3 != 0xffffffffu) {
                    wr16(r31 + 0x3f74u, rd16(r23));
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r3;
                    r3 = tc_call(0x8010a7dcu, &a);
                    wr32(r31 + 0x3f70u, r3);
                    wr16(r31 + 0x3f76u, (u16)(s8)rd8(r23 + 3u));
                    r31 = r31 + 0x18u;
                    break;
                }
            }
            r3 = (u32)(s16)rd16(0x817fdfa8u);
            wr16(0x817fdfaau, 0u);
            wr16(0x817fdfa8u, (u16)(r3 + 1u));
        }
        r23 = 0u;
        do {
            r4 = rd32(r28 + 0x3f70u);
            if (r4 != 0xffffffffu) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = r4;
                (void)tc_call(0x8010a864u, &a);
            }
            r23 = r23 + 1u;
            r28 = r28 + 0x18u;
        } while (r23 < 0x14u);
    }
    return;
}
