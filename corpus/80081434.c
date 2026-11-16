#include "tc_rt.h"

u32 fn_80081434(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0;
    TcArgs a = {0};
    r26 = 0u;
    r24 = 0u;
    do {
        r29 = r24 - 0x7fb66fa0u;
        r25 = (u32)rd16(r29 + 0x4c8u);
        if (r25 != 0x2e8u) {
            a.r[0] = r25;
            a.r[1] = (u32)rd8(r29 + 0x4cbu);
            r3 = tc_call(0x800cd6ccu, &a);
            r0 = (r3 & 0xffffu) * (u32)rd8(r29 + 0x4cau);
            r4 = rd32(0x80499090u) + r0;
            c0lt = r4 < 0x5f5e0ffu;
            if (r4 <= 0x5f5e0ffu) {
                if (!c0lt) {
                    r4 = 0x5f5e0ffu;
                }
                wr32(0x80499090u, r4);
            } else {
                wr32(0x80499090u, 0x5f5e0ffu);
            }
            r4 = 0x5f5e0ffu;
            r3 = r0 + rd32(((r25 << 3u) & 0xfffffff8u) - 0x7fb66780u);
            if (r3 <= 0x5f5e0ffu) {
                r4 = r3;
            }
            r5 = ((r25 << 3u) & 0xfffffff8u) - 0x7fb66fa0u;
            wr32(r5 + 0x820u, r4);
            r3 = (u32)rd8(r29 + 0x4cbu);
            if ((u32)rd8(r5 + 0x824u) < r3) {
                wr8(r5 + 0x824u, (u8)r3);
            }
            if (r25 == 0x25u) {
                r4 = 0x3b9ac9ffu;
                r3 = rd32(0x80492b80u) + r0;
                if (r3 <= 0x3b9ac9ffu) {
                    r4 = r3;
                }
                wr32(0x80492b80u, r4);
            }
            if (((s32)r25 >= 55 && (s32)r25 <= 70) || ((s32)r25 >= 82 && (s32)r25 <= 84)) {
                r4 = 0x3b9ac9ffu;
                r0 = rd32(0x80492b84u) + r0;
                if (r0 <= 0x3b9ac9ffu) {
                    r4 = r0;
                }
                wr32(0x80492b84u, r4);
            }
        }
        wr16(r29 + 0x4c8u, 0x2e8u);
        r26 = r26 + 1u;
        r24 = r24 + 4u;
        wr8(r29 + 0x4cau, 1u);
        wr8(r29 + 0x4cbu, 1u);
    } while (r26 < 0x78u);
    return rd32(0x80499090u);
}
