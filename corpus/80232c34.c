#include "tc_rt.h"

void fn_80232c34(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
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
    r26 = 0u;
    r25 = 0u;
    r24 = 0u;
    if (param_r3 != 0u) {
        r29 = param_r3;
        r28 = 0u;
        while (r28 < param_r4) {
            a.r[0] = r29;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfccu;
            r3 = tc_call(0x802325acu, &a);
            c0eq = r3 == 0u;
            if ((s32)r3 <= 0) {
                if (!c0eq) {
                    return;
                }
                r0 = rd32(0x817fdfc8u);
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    if (r26 == 0u) {
                        r0 = rd32(0x817fdfccu);
                        if (r0 > r24) {
                            r24 = r0;
                        }
                    }
                } else if (c0lt && (s32)r0 >= 0) {
                    r5 = 0u;
                    if (r26 == 0u) {
                        r26 = 1u;
                    }
                    r4 = 0u;
                    r3 = ((u32)rd8(r29 + 0x18u) & 0xffff00ffu) | (((u32)rd8(r29 + 0x19u) << 8u) & 0xff00u);
                    ctr = 2u;
                    do {
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        if ((r3 & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) != 0u) {
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    if (r5 > r25) {
                        r25 = r5;
                    }
                }
            }
            r29 = r29 + 0xd8u;
            r28 = r28 + 1u;
        }
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80386cb4u;
        a.r[1] = 0x183u;
        a.r[2] = 0x80386cdcu;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80228554u, &a);
    }
    return;
}
