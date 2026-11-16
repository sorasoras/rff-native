#include "tc_rt.h"

void fn_8027f214(u32 param_r3, u32 param_r4)
{
    u32 c0gt = 0, c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = (s32)param_r4 < 0;
    r30 = rd32(((param_r3 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r0 = 0xffffffffu;
    r5 = rd32(r30 + 0x974u);
    if (param_r4 == 0u) {
        wr8(r30 + 0x8c1u, rd8(param_r3 - 0x7fa8e4e4u));
    } else if (!c0lt) {
        wr8(r30 + 0x8c1u, 0xfcu);
    } else if ((s32)param_r4 >= -1) {
        wr8(r30 + 0x8c1u, 0xfdu);
    } else {
        wr8(r30 + 0x8c1u, 0xfcu);
    }
    wr8(r30 + 0x8c2u, rd8(param_r3 - 0x7fa8e4e8u));
    if ((((u32)rd8(r30 + 0x8c1u) + 0xffu) & 0xffu) <= 1u) {
        r6 = 0u;
        r4 = 0u;
        do {
            r10 = r4 + 0xeu;
            r7 = r4;
            c0gt = (s32)r4 > (s32)r10;
            r8 = 0u;
            if ((s32)r4 < (s32)r10) {
                r11 = r4 + 6u;
                r12 = 0u;
                r28 = 0u;
                r27 = 0u;
                r26 = 0u;
                if (!c0gt && (s32)r10 <= 2147483646) {
                    r26 = 1u;
                }
                if (r26 != 0u && (s32)r4 <= 2147483646) {
                    r27 = 1u;
                }
                if (r27 != 0u && (r4 - 0x80000000u) != 0u) {
                    r28 = 1u;
                }
                if (r28 != 0u) {
                    r26 = (r4 + 0xeu) & 0x80000000u;
                    r10 = 1u;
                    if (r26 == ((0u - r4) & 0x80000000u) && r26 != 0u) {
                        r10 = 0u;
                    }
                    if (r10 != 0u) {
                        r12 = 1u;
                    }
                }
                if (r12 != 0u) {
                    ctr = ((r11 + 7u - r4) >> 3u) & 0x1fffffffu;
                    if ((s32)r4 < (s32)r11) {
                        do {
                            r11 = r5 + r7;
                            r10 = (u32)rd8(r5 + r7);
                            r7 = r7 + 8u;
                            r8 = r8 + r10;
                            r8 = r8 + (u32)rd8(r11 + 1u);
                            r8 = r8 + (u32)rd8(r11 + 2u);
                            r8 = r8 + (u32)rd8(r11 + 3u);
                            r8 = r8 + (u32)rd8(r11 + 4u);
                            r8 = r8 + (u32)rd8(r11 + 5u);
                            r8 = r8 + (u32)rd8(r11 + 6u);
                            r8 = r8 + (u32)rd8(r11 + 7u);
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r11 = r4 + 0xeu;
                r10 = r5 + r7;
                ctr = r11 - r7;
                if ((s32)r7 < (s32)r11) {
                    do {
                        r9 = (u32)rd8(r10);
                        r7 = r7 + 1u;
                        r10 = r10 + 1u;
                        r8 = r8 + r9;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r10 = r5 + r4;
            r7 = (u32)rd8(r10 + 0xeu);
            r9 = (r8 + 0x55u) & 0xffu;
            if (r9 == r7) {
                r8 = r8 + 0xaau;
                r7 = (u32)rd8(r10 + 0xfu);
                r8 = r8 & 0xffu;
                if (r8 == r7) {
                    r0 = r4;
                }
            }
            r6 = r6 + 1u;
            r4 = r4 + 0x10u;
        } while ((s32)r6 < 2);
        r3 = (u32)rd8(r30 + 0x8c1u);
        c0lt = (s32)r3 < 2;
        if (r3 == 2u) {
            r7 = r0 + r5;
            r5 = (u32)(s8)rd8(r5 + r0);
            wr16(r30 + 0x886u, (u16)r5);
            wr16(r30 + 0x884u, (u16)(s8)rd8(r7 + 1u));
            wr16(r30 + 0x882u, (u16)(s8)rd8(r7 + 2u));
            wr16(r30 + 0x88cu, (u16)(s8)rd8(r7 + 3u));
            wr16(r30 + 0x88au, (u16)(s8)rd8(r7 + 4u));
            wr16(r30 + 0x888u, (u16)(s8)rd8(r7 + 5u));
            wr16(r30 + 0x892u, (u16)(s8)rd8(r7 + 6u));
            wr16(r30 + 0x890u, (u16)(s8)rd8(r7 + 7u));
            wr16(r30 + 0x88eu, (u16)(s8)rd8(r7 + 8u));
            wr16(r30 + 0x898u, (u16)(s8)rd8(r7 + 9u));
            wr16(r30 + 0x896u, (u16)(s8)rd8(r7 + 0xau));
            wr16(r30 + 0x894u, (u16)(s8)rd8(r7 + 0xbu));
            wr8(r30 + 0x89au, rd8(r7 + 0xcu));
            wr8(r30 + 0x89bu, rd8(r7 + 0xdu));
            (void)tc_call(0x80284b24u, &a);
            (void)tc_call(0x80284b24u, &a);
            (void)tc_call(0x80284b24u, &a);
            (void)tc_call(0x80284b24u, &a);
            f1 = tc_callf(0x80284b24u, &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
        } else if (c0lt && (s32)r3 >= 1) {
            if ((s32)r0 >= 0) {
                r7 = r0 + r5;
                wr16(r30 + 0x88eu, (u16)((((u32)rd8(r7 + 3u) >> 4u) & 3u) | (((u32)rd8(r5 + r0) << 2u) & 0x3fcu)));
                wr16(r30 + 0x890u, (u16)((((u32)rd8(r7 + 3u) >> 2u) & 3u) | (((u32)rd8(r7 + 1u) << 2u) & 0x3fcu)));
                wr16(r30 + 0x892u, (u16)(((u32)rd8(r7 + 3u) & 3u) | (((u32)rd8(r7 + 2u) << 2u) & 0x3fcu)));
                wr16(r30 + 0x894u, (u16)((((u32)rd8(r7 + 7u) >> 4u) & 3u) | (((u32)rd8(r7 + 4u) << 2u) & 0x3fcu)));
                wr16(r30 + 0x896u, (u16)((((u32)rd8(r7 + 7u) >> 2u) & 3u) | (((u32)rd8(r7 + 5u) << 2u) & 0x3fcu)));
                wr16(r30 + 0x898u, (u16)(((u32)rd8(r7 + 7u) & 3u) | (((u32)rd8(r7 + 6u) << 2u) & 0x3fcu)));
                wr16(r30 + 0x886u, (u16)(s8)rd8(r7 + 8u));
                wr16(r30 + 0x884u, (u16)(s8)rd8(r7 + 9u));
                wr16(r30 + 0x882u, (u16)(s8)rd8(r7 + 0xau));
                wr16(r30 + 0x88cu, (u16)(s8)rd8(r7 + 0xbu));
                wr16(r30 + 0x88au, (u16)(s8)rd8(r7 + 0xcu));
                wr16(r30 + 0x888u, (u16)(s8)rd8(r7 + 0xdu));
                (void)tc_call(0x80284b24u, &a);
                (void)tc_call(0x80284b24u, &a);
                (void)tc_call(0x80284b24u, &a);
                f1 = tc_callf(0x80284b24u, &a);
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
            } else {
                f1 = tc_callf(0x80284b24u, &a);
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                wr16(r30 + 0x88eu, 0x200u);
                wr16(r30 + 0x890u, 0x200u);
                wr16(r30 + 0x892u, 0x200u);
                wr16(r30 + 0x894u, 0x2ccu);
                wr16(r30 + 0x896u, 0x2ccu);
                wr16(r30 + 0x898u, 0x2ccu);
            }
        }
        wr8(r30 + 0x911u, 0u);
    }
    r12 = rd32(r30 + 0x89cu);
    if (r12 != 0u) {
        a.r[0] = param_r3;
        a.r[1] = (u32)rd8(r30 + 0x8c1u);
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
        wr32(r30 + 0x89cu, 0u);
    }
    return;
}
