#include "tc_rt.h"

u32 fn_80275d08(s32 param_1, u32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0;
    r4 = param_2;
    r8 = rd32((u32)param_1 + 0x18u);
    r9 = rd32((u32)param_1 + 4u);
    r6 = rd32(0x8038ed00u);
    for (;;) {
        r0 = (u32)(s8)rd8(r4);
        if (r0 == 0u) {
            r3 = r8;
            return r3;
        }
        if (r0 != 0x2fu) {
            if (r0 == 0x2eu) {
                r0 = (u32)(s8)rd8(r4 + 1u);
                if (r0 != 0x2eu) {
                    if (r0 == 0x2fu) {
                        r4 = r4 + 2u;
                        continue;
                    }
                    if (r0 == 0u) break;
                } else {
                    r0 = (u32)(s8)rd8(r4 + 2u);
                    if (r0 == 0x2fu) {
                        r4 = r4 + 3u;
                        r8 = rd32(r9 + (r8 * 0xcu) + 4u);
                        continue;
                    }
                    if (r0 == 0u) {
                        r3 = rd32(r9 + (r8 * 0xcu) + 4u);
                        return r3;
                    }
                }
            }
            r7 = r4;
            for (;;) {
                r5 = (u32)rd8(r7);
                r0 = (u32)(s8)r5;
                if (r0 == 0u || r0 == 0x2fu) break;
                r7 = r7 + 1u;
            }
            r11 = (u32)(s8)r5;
            r7 = r7 - r4;
            r5 = r9 + (r8 * 0xcu);
            r8 = r8 + 1u;
            r5 = rd32(r5 + 8u);
            r0 = (((0u - r11) | r11) >> 0x1fu) & 1u;
            for (;;) {
                if (r8 >= r5) {
                    r3 = 0xffffffffu;
                    return r3;
                }
                r12 = r9 + (r8 * 0xcu);
                for (;;) {
                    r31 = rd32(r12);
                    if ((r31 & 0xff000000u) == 0u && r0 == 1u) {
                        fl_ = 1u;
                        break;
                    }
                    r11 = rd32((u32)param_1 + 0x10u);
                    r10 = r31 & 0xffffffu;
                    r30 = r11 + r10;
                    r10 = (u32)rd8(r11 + r10);
                    if (r10 != 0x2eu || (u32)(s8)rd8(r30 + 1u) != 0u) {
                        fl_ = 2u;
                        break;
                    }
                    r12 = r12 + 0xcu;
                    r8 = r8 + 1u;
                }
                do {
                    if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                        break;
                    }
                    r12 = r4;
                    for (;;) {
                        if ((u32)(s8)rd8(r30) == 0u) {
                            fl_ = 4u;
                            break;
                        }
                        r11 = (u32)rd8(r30);
                        r10 = 0u;
                        r30 = r30 + 1u;
                        r31 = (u32)(s8)r11;
                        if ((s32)r31 < 0 || (s32)r31 >= 256) {
                            r10 = 1u;
                        }
                        if (r10 == 0u) {
                            r31 = (u32)rd8(rd32(r6 + 0x10u) + r31);
                        }
                        r11 = (u32)rd8(r12);
                        r10 = 0u;
                        r12 = r12 + 1u;
                        r11 = (u32)(s8)r11;
                        if ((s32)r11 < 0 || (s32)r11 >= 256) {
                            r10 = 1u;
                        }
                        if (r10 == 0u) {
                            r11 = (u32)rd8(rd32(r6 + 0x10u) + r11);
                        }
                        if (r11 != r31) {
                            r10 = 0u;
                            fl_ = 3u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 4u) {
                            fl_ = 0u;
                        } else if (fl_ == 3u) {
                            fl_ = 0u;
                            break;
                        }
                        r10 = (u32)(s8)rd8(r12);
                        if (r10 == 0x2fu || r10 == 0u) {
                            r10 = 1u;
                        } else {
                            r10 = 0u;
                        }
                    } while (0);
                    if (r10 == 1u) {
                        fl_ = 5u;
                        break;
                    }
                } while (0);
                if (fl_ == 5u) {
                    fl_ = 0u;
                    break;
                }
                r10 = r8 * 0xcu;
                r11 = r9 + r10;
                r10 = rd32(r9 + r10);
                r10 = r10 & 0xff000000u;
                if (r10 == 0u) {
                    r8 = r8 + 1u;
                } else {
                    r8 = rd32(r11 + 8u);
                }
            }
            if (r0 == 0u) {
                r3 = r8;
                return r3;
            }
            r4 = r7 + r4;
            r4 = r4 + 1u;
        } else {
            r8 = 0u;
            r4 = r4 + 1u;
        }
    }
    r3 = r8;
    return r3;
}
