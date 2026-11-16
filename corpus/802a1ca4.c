#include "tc_rt.h"

u32 fn_802a1ca4(u32 param_1, u32 param_2)
{
    u32 c1gt = 0, ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r30 = 0;
    u64 t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = param_1;
    wr32(0x817fdff4u, 0u);
    r11 = (u32)rd8(0x80348449u);
    r10 = (u32)rd8(0x8034844au);
    r9 = (u32)rd8(0x8034844bu);
    r8 = (u32)rd8(0x8034844cu);
    r7 = (u32)rd8(0x8034844du);
    r6 = (u32)rd8(0x8034844eu);
    r5 = (u32)rd8(0x8034844fu);
    r4 = (u32)rd8(0x80348450u);
    r0 = (u32)rd8(0x80348451u);
    wr8(0x817fdfd8u, rd8(0x80348448u));
    wr8(0x817fdfd9u, (u8)r11);
    wr8(0x817fdfdau, (u8)r10);
    wr8(0x817fdfdbu, (u8)r9);
    wr8(0x817fdfdcu, (u8)r8);
    wr8(0x817fdfddu, (u8)r7);
    wr8(0x817fdfdeu, (u8)r6);
    wr8(0x817fdfdfu, (u8)r5);
    wr8(0x817fdfe0u, (u8)r4);
    wr8(0x817fdfe1u, (u8)r0);
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr16(r3 + 2u, 0xdu);
        wr16(r3 + 4u, 0u);
        wr8(r3 + 8u, 0x3fu);
        wr8(r3 + 9u, 0xcu);
        wr8(r3 + 0xau, 0xau);
        if (param_1 <= param_2 && param_2 <= 0x4eu) {
            c1gt = (s32)param_1 > (s32)param_2;
            if (!c1gt) {
                r11 = param_2 - param_1;
                r7 = param_2 - 8u;
                r12 = r11 + 1u;
                if ((s32)r12 > 8) {
                    r5 = 0u;
                    r6 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    if (!c1gt && (s32)param_2 <= 2147483646) {
                        r10 = 1u;
                    }
                    if (r10 != 0u && (s32)param_1 <= 2147483646) {
                        r9 = 1u;
                    }
                    if (r9 != 0u && (param_1 - 0x80000000u) != 0u) {
                        r8 = 1u;
                    }
                    if (r8 != 0u) {
                        r8 = param_2 & 0x80000000u;
                        r4 = 1u;
                        if (r8 == ((0u - param_1) & 0x80000000u) && r8 != (r11 & 0x80000000u)) {
                            r4 = 0u;
                        }
                        if (r4 != 0u) {
                            r6 = 1u;
                        }
                    }
                    if (r6 != 0u) {
                        r4 = 1u;
                        if ((r11 & 0x80000000u) == 0u && (r12 & 0x80000000u) != 0u) {
                            r4 = 0u;
                        }
                        if (r4 != 0u) {
                            r5 = 1u;
                        }
                    }
                    if (r5 != 0u) {
                        r6 = (u32)((u64)(u32)((s32)param_1 >> 3) + (u64)(((s32)param_1 < 0) && ((param_1 & 7u) != 0u))) - 0x7e802028u;
                        ctr = ((r7 + 8u - param_1) >> 3u) & 0x1fffffffu;
                        if ((s32)param_1 <= (s32)r7) {
                            do {
                                r8 = (r30 >> 0x1fu) & 1u;
                                r5 = ((r30 << 0x1du) & 0xe0000000u) - r8;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                r7 = r30 + 1u;
                                r5 = r5 + r8;
                                r9 = r30 + 2u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
                                r8 = r30 + 3u;
                                r10 = (r7 >> 0x1fu) & 1u;
                                wr8(r6, (u8)((u32)rd8(r6) & ~r5));
                                r5 = (r7 << 0x1du) & 0xe0000000u;
                                ca = ((s32)r7 < 0) && ((r7 & 7u) != 0u);
                                r11 = (u32)((s32)r7 >> 3);
                                r7 = r30 + 4u;
                                r5 = r5 - r10;
                                r6 = r6 + 1u;
                                t1 = (u64)r11 + (u64)ca;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                r10 = r5 + r10;
                                r11 = ((r10 & 0x20u) != 0u) ? 0u : (1u << (r10 & 0x1fu));
                                r5 = (r9 << 0x1du) & 0xe0000000u;
                                r10 = (r9 >> 0x1fu) & 1u;
                                ca = ((s32)r9 < 0) && ((r9 & 7u) != 0u);
                                r9 = (u32)((s32)r9 >> 3);
                                r11 = (u32)rd8((u32)t1 - 0x7e802028u) & ~r11;
                                r5 = r5 - r10;
                                wr8((u32)t1 - 0x7e802028u, (u8)r11);
                                t2 = (u64)r9 + (u64)ca;
                                r9 = r30 + 5u;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                r5 = r5 + r10;
                                ca = ((s32)r8 < 0) && ((r8 & 7u) != 0u);
                                r10 = (u32)((s32)r8 >> 3);
                                r12 = (u32)rd8((u32)t2 - 0x7e802028u) & ~(((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu)));
                                r5 = (r8 << 0x1du) & 0xe0000000u;
                                r8 = (r8 >> 0x1fu) & 1u;
                                wr8((u32)t2 - 0x7e802028u, (u8)r12);
                                r5 = r5 - r8;
                                t3 = (u64)r10 + (u64)ca;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                r8 = r5 + r8;
                                r8 = ((r8 & 0x20u) != 0u) ? 0u : (1u << (r8 & 0x1fu));
                                t4 = (u64)(u32)((s32)r7 >> 3) + (u64)(((s32)r7 < 0) && ((r7 & 7u) != 0u));
                                wr8((u32)t3 - 0x7e802028u, (u8)((u32)rd8((u32)t3 - 0x7e802028u) & ~r8));
                                r8 = (r7 >> 0x1fu) & 1u;
                                r5 = ((r7 << 0x1du) & 0xe0000000u) - r8;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                t5 = (u64)(u32)((s32)r9 >> 3) + (u64)(((s32)r9 < 0) && ((r9 & 7u) != 0u));
                                r5 = r5 + r8;
                                r8 = r30 + 6u;
                                r10 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
                                r5 = (r9 << 0x1du) & 0xe0000000u;
                                r9 = (r9 >> 0x1fu) & 1u;
                                r10 = (u32)rd8((u32)t4 - 0x7e802028u) & ~r10;
                                wr8((u32)t4 - 0x7e802028u, (u8)r10);
                                r5 = r5 - r9;
                                r9 = ((r5 << 3u) | (r5 >> 0x1du)) + r9;
                                t6 = (u64)(u32)((s32)r8 >> 3) + (u64)(((s32)r8 < 0) && ((r8 & 7u) != 0u));
                                r7 = r30 + 7u;
                                r9 = ((r9 & 0x20u) != 0u) ? 0u : (1u << (r9 & 0x1fu));
                                r30 = r30 + 8u;
                                r10 = (u32)rd8((u32)t5 - 0x7e802028u) & ~r9;
                                r9 = (r8 >> 0x1fu) & 1u;
                                wr8((u32)t5 - 0x7e802028u, (u8)r10);
                                r5 = ((r8 << 0x1du) & 0xe0000000u) - r9;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                ca = ((s32)r7 < 0) && ((r7 & 7u) != 0u);
                                r8 = (u32)((s32)r7 >> 3);
                                r5 = r5 + r9;
                                r9 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
                                r5 = (r7 << 0x1du) & 0xe0000000u;
                                r7 = (r7 >> 0x1fu) & 1u;
                                r9 = (u32)rd8((u32)t6 - 0x7e802028u) & ~r9;
                                r5 = r5 - r7;
                                wr8((u32)t6 - 0x7e802028u, (u8)r9);
                                t7 = (u64)r8 + (u64)ca;
                                r5 = (r5 << 3u) | (r5 >> 0x1du);
                                r5 = r5 + r7;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
                                r5 = (u32)rd8((u32)t7 - 0x7e802028u) & ~r5;
                                wr8((u32)t7 - 0x7e802028u, (u8)r5);
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                ctr = param_2 + 1u - r30;
                if ((s32)r30 <= (s32)param_2) {
                    do {
                        r0 = (r30 << 0x1du) & 0xe0000000u;
                        r4 = (r30 >> 0x1fu) & 1u;
                        ca = ((s32)r30 < 0) && ((r30 & 7u) != 0u);
                        r6 = (u32)((s32)r30 >> 3);
                        r30 = r30 + 1u;
                        r0 = r0 - r4;
                        t8 = (u64)r6 + (u64)ca;
                        r0 = (r0 << 3u) | (r0 >> 0x1du);
                        r0 = r0 + r4;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = (u32)rd8((u32)t8 - 0x7e802028u) & ~r0;
                        wr8((u32)t8 - 0x7e802028u, (u8)r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        wr8(r3 + 0xbu, rd8(0x817fdfd8u));
        wr8(r3 + 0xcu, rd8(0x817fdfd9u));
        wr8(r3 + 0xdu, rd8(0x817fdfdau));
        wr8(r3 + 0xeu, rd8(0x817fdfdbu));
        wr8(r3 + 0xfu, rd8(0x817fdfdcu));
        wr8(r3 + 0x10u, rd8(0x817fdfddu));
        wr8(r3 + 0x11u, rd8(0x817fdfdeu));
        wr8(r3 + 0x12u, rd8(0x817fdfdfu));
        wr8(r3 + 0x13u, rd8(0x817fdfe0u));
        wr8(r3 + 0x14u, rd8(0x817fdfe1u));
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}
