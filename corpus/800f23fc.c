#include "tc_rt.h"

void fn_800f23fc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r22 = 0;
    u32 r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    f1 = (f64)rdf32(0x804b9e60u);
    r29 = rd32(0x80338d44u);
    r12 = rd32(0x80338d48u);
    r11 = rd32(0x80338d4cu);
    r10 = rd32(0x80338d50u);
    r9 = rd32(0x80338d54u);
    r24 = 0u;
    r8 = rd32(0x80338d58u);
    r7 = rd32(0x80338d5cu);
    r6 = rd32(0x80338d60u);
    r5 = rd32(0x80338d64u);
    r4 = rd32(0x80338d68u);
    r3 = rd32(0x80338d6cu);
    r0 = rd32(0x80338d70u);
    wr32(0x817fdf98u, rd32(0x80338d40u));
    wr32(0x817fdf9cu, r29);
    wr32(0x817fdfa0u, r12);
    wr32(0x817fdfa4u, r11);
    wr32(0x817fdfa8u, r10);
    wr32(0x817fdfacu, r9);
    wr32(0x817fdfb0u, r8);
    wr32(0x817fdfb4u, r7);
    wr32(0x817fdfb8u, r6);
    wr32(0x817fdfbcu, r5);
    wr32(0x817fdfc0u, r4);
    wr32(0x817fdfc4u, r3);
    wr32(0x817fdfc8u, r0);
    a.f[0] = f1;
    (void)tc_call(0x800411d4u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x800f2710u, &a);
    r27 = rd32(0x80571124u);
    r22 = param_3 & 0x1fffu;
    (void)tc_call(0x8003c20cu, &a);
    wr32(0x80571124u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x80035b6cu, &a);
    a.r[0] = (u32)rd8(0x80571230u);
    a.r[1] = (u32)rd8(0x80571231u);
    a.r[2] = (u32)rd8(0x80571232u);
    a.r[3] = (u32)rd8(0x80571233u);
    (void)tc_call(0x80041210u, &a);
    do {
        a.r[0] = 1u;
        (void)tc_call(0x8003cdc0u, &a);
        (void)tc_call(0x800a8474u, &a);
        r3 = tc_call(0x80037910u, &a);
        if (r3 <= 2u) {
            r3 = tc_call(0x800f2830u, &a);
            r26 = 0x80354130u;
            r24 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            r25 = 0x817fdf98u;
            r23 = 0u;
            do {
                if ((r22 & (((r23 & 0x20u) != 0u) ? 0u : (1u << (r23 & 0x1fu)))) != 0u) {
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = rd32(r26 + 0x34u);
                            }
                        } else {
                            r4 = rd32(r26);
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r4 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r0 = r4 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 != 0u) {
                        r24 = 1u;
                    } else {
                        a.r[0] = 0u;
                        r3 = tc_call(0x80043c20u, &a);
                        r3 = rd32(r3 + 4u);
                        if ((rd32(r25) & r3) != 0u) {
                            r24 = 1u;
                        }
                    }
                }
                r23 = r23 + 1u;
                r25 = r25 + 4u;
                r26 = r26 + 4u;
            } while ((s32)r23 < 32);
        }
        a.r[0] = 0x804b9da0u;
        (void)tc_call(0x8010b258u, &a);
        (void)tc_call(0x8003ce24u, &a);
    } while (r24 == 0u);
    a.r[0] = 0u;
    (void)tc_call(0x800411a4u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x800411b4u, &a);
    (void)tc_call(0x800f2834u, &a);
    r3 = tc_call(0x8003c20cu, &a);
    r3 = r27 & (u32)((s32)((0u - r3) | r3) >> 31);
    wr32(0x80571124u, r3);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    a.r[0] = r3;
    (void)tc_call(0x80035b6cu, &a);
    (void)tc_call(0x80080590u, &a);
    wr8(0x80571233u, 0u);
    wr8(0x80571232u, 0u);
    wr8(0x80571231u, 0u);
    wr8(0x80571230u, 0u);
    return;
}
