#include "tc_rt.h"

s32 fn_800833c0(void)
{
    u32 ctr = 0, r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r31 = 0x820u;
    r30 = 0u;
    do {
        a.r[0] = r30;
        r3 = tc_call(0x800bf01cu, &a);
        f1 = tc_lastf();
        r6 = rd32(r3);
        r7 = 0u;
        if (r6 != 0u) {
            r5 = r6 - 8u;
            if (r6 > 8u) {
                r4 = 0u;
                ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                if (r5 > 0u) {
                    do {
                        r7 = r7 + 8u;
                        r5 = rd32(r3 + 4u) + r4;
                        r4 = r4 + 0x100u;
                        r9 = rd32(r5 + 0x14u);
                        r8 = rd32(r5 + 0x34u);
                        r0 = rd32(r5 + 0x54u);
                        r9 = (r9 << 3u) & 0xfffffff8u;
                        r10 = rd32(r5 + 0x18u);
                        r8 = (r8 << 3u) & 0xfffffff8u;
                        r12 = rd32(r5 + 0x38u);
                        r11 = (r0 << 3u) & 0xfffffff8u;
                        r24 = r10 * r9;
                        r26 = rd32(r5 + 0x58u);
                        r0 = rd32(r5 + 0x74u);
                        r10 = rd32(r5 + 0x94u);
                        r28 = (r0 << 3u) & 0xfffffff8u;
                        r27 = rd32(r5 + 0x78u);
                        r25 = r12 * r8;
                        r8 = rd32(r5 + 0xd4u);
                        r0 = rd32(r5 + 0xf4u);
                        r24 = r24 + 0x1fu;
                        r9 = rd32(r5 + 0xb4u);
                        r12 = (r10 << 3u) & 0xfffffff8u;
                        r26 = r26 * r11;
                        r29 = rd32(r5 + 0x98u);
                        r10 = (r9 << 3u) & 0xfffffff8u;
                        r11 = rd32(r5 + 0xb8u);
                        r9 = rd32(r5 + 0xd8u);
                        r8 = (r8 << 3u) & 0xfffffff8u;
                        r28 = r27 * r28;
                        r24 = r24 & 0xffffffe0u;
                        r5 = rd32(r5 + 0xf8u);
                        r25 = r25 + 0x1fu;
                        r0 = (r0 << 3u) & 0xfffffff8u;
                        r12 = r29 * r12;
                        r31 = r31 + r24;
                        r31 = r31 + (r25 & 0xffffffe0u);
                        r10 = r11 * r10;
                        r31 = r31 + ((r26 + 0x1fu) & 0xffffffe0u);
                        r31 = r31 + ((r28 + 0x1fu) & 0xffffffe0u);
                        r8 = r9 * r8;
                        r31 = r31 + ((r12 + 0x1fu) & 0xffffffe0u);
                        r31 = r31 + ((r10 + 0x1fu) & 0xffffffe0u);
                        r5 = r5 * r0;
                        r8 = (r8 + 0x1fu) & 0xffffffe0u;
                        r31 = r31 + r8;
                        r31 = r31 + ((r5 + 0x1fu) & 0xffffffe0u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r5 = (r7 << 5u) & 0xffffffe0u;
            ctr = r6 - r7;
            if (r7 < r6) {
                do {
                    r7 = r7 + 1u;
                    r4 = rd32(r3 + 4u) + r5;
                    r5 = r5 + 0x20u;
                    r0 = rd32(r4 + 0x14u);
                    r4 = rd32(r4 + 0x18u);
                    r0 = (r0 << 3u) & 0xfffffff8u;
                    r4 = r4 * r0;
                    r31 = r31 + ((r4 + 0x1fu) & 0xffffffe0u);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r30 = r30 + 1u;
    } while (r30 < 0x19u);
    return (s32)r31;
}
