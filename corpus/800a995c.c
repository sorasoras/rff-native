#include "tc_rt.h"

void fn_800a995c(u32 param_1)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u64 t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    r7 = param_1 + 0x102u;
    r4 = param_1 + 0x106u;
    wr32(param_1, 0x803541d8u);
    wr16(param_1 + 0xfeu, 0x2e8u);
    wr8(param_1 + 0x100u, 1u);
    wr8(param_1 + 0x101u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x102u;
        r6 = param_1 + 0xe6u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t0 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t0 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t0 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x106u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x10au;
    r4 = param_1 + 0x116u;
    wr16(param_1 + 0x106u, 0x2e8u);
    wr8(param_1 + 0x108u, 1u);
    wr8(param_1 + 0x109u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x10au;
        r6 = param_1 + 0xf6u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t1 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t1 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t1 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x116u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r8 = param_1 + 0x122u;
    r5 = param_1 + 0x14cu;
    wr16(param_1 + 0x11cu, 0x2e8u);
    wr8(param_1 + 0x11eu, 1u);
    wr8(param_1 + 0x11fu, 1u);
    if (r8 < r5) {
        r7 = param_1 + 0x122u;
        r9 = r5 - r7;
        r6 = param_1 + 0x11cu;
        r10 = r9 + 5u;
        r4 = ppc_mulhw(715827883, (s32)r10);
        r11 = r4 + ((r4 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r7 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r7 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r7 = r11 & 0x80000000u;
                r5 = 1u;
                if (r7 == 0u && r7 != (r12 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ppc_divwu(r6 + 0x2fu - r8, 0x30u);
                if (r8 < r6) {
                    do {
                        wr16(r8, 0x2e8u);
                        wr8(r8 + 2u, 1u);
                        wr8(r8 + 3u, 1u);
                        wr16(r8 + 6u, 0x2e8u);
                        wr8(r8 + 8u, 1u);
                        wr8(r8 + 9u, 1u);
                        wr16(r8 + 0xcu, 0x2e8u);
                        wr8(r8 + 0xeu, 1u);
                        wr8(r8 + 0xfu, 1u);
                        wr16(r8 + 0x12u, 0x2e8u);
                        wr8(r8 + 0x14u, 1u);
                        wr8(r8 + 0x15u, 1u);
                        wr16(r8 + 0x18u, 0x2e8u);
                        wr8(r8 + 0x1au, 1u);
                        wr8(r8 + 0x1bu, 1u);
                        wr16(r8 + 0x1eu, 0x2e8u);
                        wr8(r8 + 0x20u, 1u);
                        wr8(r8 + 0x21u, 1u);
                        wr16(r8 + 0x24u, 0x2e8u);
                        wr8(r8 + 0x26u, 1u);
                        wr8(r8 + 0x27u, 1u);
                        wr16(r8 + 0x2au, 0x2e8u);
                        wr8(r8 + 0x2cu, 1u);
                        wr8(r8 + 0x2du, 1u);
                        r8 = r8 + 0x30u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_1 + 0x14cu;
        ctr = ppc_divwu(r5 + 5u - r8, 6u);
        if (r8 < r5) {
            do {
                wr16(r8, 0x2e8u);
                wr8(r8 + 2u, 1u);
                wr8(r8 + 3u, 1u);
                r8 = r8 + 6u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x1e4u;
    r4 = param_1 + 0x2d0u;
    wr16(param_1 + 0x1b4u, 0x2e8u);
    wr8(param_1 + 0x1b6u, 1u);
    wr8(param_1 + 0x1b7u, 1u);
    wr16(param_1 + 0x1e0u, 0x2e8u);
    wr8(param_1 + 0x1e2u, 1u);
    wr8(param_1 + 0x1e3u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x1e4u;
        r6 = param_1 + 0x2b0u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t2 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t2 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t2 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x2d0u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x2d4u;
    r4 = param_1 + 0x2e0u;
    wr16(param_1 + 0x2d0u, 0x2e8u);
    wr8(param_1 + 0x2d2u, 1u);
    wr8(param_1 + 0x2d3u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x2d4u;
        r6 = param_1 + 0x2c0u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t3 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t3 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t3 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x2e0u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x2e4u;
    r4 = param_1 + 0x3d0u;
    wr16(param_1 + 0x2e0u, 0x2e8u);
    wr8(param_1 + 0x2e2u, 1u);
    wr8(param_1 + 0x2e3u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x2e4u;
        r6 = param_1 + 0x3b0u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t4 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t4 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t4 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x3d0u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x3d8u;
    r4 = param_1 + 0x4c4u;
    wr16(param_1 + 0x3d4u, 0x2e8u);
    wr8(param_1 + 0x3d6u, 1u);
    wr8(param_1 + 0x3d7u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x3d8u;
        r6 = param_1 + 0x4a4u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t5 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t5 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t5 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x4c4u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x4ccu;
    r4 = param_1 + 0x6a8u;
    wr16(param_1 + 0x4c8u, 0x2e8u);
    wr8(param_1 + 0x4cau, 1u);
    wr8(param_1 + 0x4cbu, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x4ccu;
        r6 = param_1 + 0x688u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t6 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t6 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t6 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x6a8u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x6acu;
    r4 = param_1 + 0x720u;
    wr16(param_1 + 0x6a8u, 0x2e8u);
    wr8(param_1 + 0x6aau, 1u);
    wr8(param_1 + 0x6abu, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x6acu;
        r6 = param_1 + 0x700u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t7 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t7 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t7 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x720u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x724u;
    r4 = param_1 + 0x798u;
    wr16(param_1 + 0x720u, 0x2e8u);
    wr8(param_1 + 0x722u, 1u);
    wr8(param_1 + 0x723u, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x724u;
        r6 = param_1 + 0x778u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t8 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t8 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t8 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x798u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 < r4) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r7 = param_1 + 0x79cu;
    r4 = param_1 + 0x810u;
    wr16(param_1 + 0x798u, 0x2e8u);
    wr8(param_1 + 0x79au, 1u);
    wr8(param_1 + 0x79bu, 1u);
    if (r7 < r4) {
        r5 = param_1 + 0x79cu;
        r6 = param_1 + 0x7f0u;
        r8 = r4 - r5;
        r9 = r8 + 3u;
        t9 = (u64)(u32)((s32)r9 >> 2) + (u64)(((s32)r9 < 0) && ((r9 & 3u) != 0u));
        r11 = (u32)t9 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r5 > r4;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = (u32)t9 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                ctr = ((r6 + 0x1fu - r7) >> 5u) & 0x7ffffffu;
                if (r7 < r6) {
                    do {
                        wr16(r7, 0x2e8u);
                        wr8(r7 + 2u, 1u);
                        wr8(r7 + 3u, 1u);
                        wr16(r7 + 4u, 0x2e8u);
                        wr8(r7 + 6u, 1u);
                        wr8(r7 + 7u, 1u);
                        wr16(r7 + 8u, 0x2e8u);
                        wr8(r7 + 0xau, 1u);
                        wr8(r7 + 0xbu, 1u);
                        wr16(r7 + 0xcu, 0x2e8u);
                        wr8(r7 + 0xeu, 1u);
                        wr8(r7 + 0xfu, 1u);
                        wr16(r7 + 0x10u, 0x2e8u);
                        wr8(r7 + 0x12u, 1u);
                        wr8(r7 + 0x13u, 1u);
                        wr16(r7 + 0x14u, 0x2e8u);
                        wr8(r7 + 0x16u, 1u);
                        wr8(r7 + 0x17u, 1u);
                        wr16(r7 + 0x18u, 0x2e8u);
                        wr8(r7 + 0x1au, 1u);
                        wr8(r7 + 0x1bu, 1u);
                        wr16(r7 + 0x1cu, 0x2e8u);
                        wr8(r7 + 0x1eu, 1u);
                        wr8(r7 + 0x1fu, 1u);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x810u;
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (r7 >= r4) {
            return;
        }
        do {
            wr16(r7, 0x2e8u);
            wr8(r7 + 2u, 1u);
            wr8(r7 + 3u, 1u);
            r7 = r7 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
