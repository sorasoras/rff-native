#include "tc_rt.h"

void fn_80242630(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    wr16(param_2, (u16)((rd32(param_3) >> 0x10u) & 0x3fffu));
    wr8(param_2 + 2u, (u8)((rd32(param_3) >> 8u) & 0xffffffu));
    wr8(param_2 + 3u, (u8)rd32(param_3));
    r0 = rd32(0x80570b4cu) & 0x700u;
    c0lt = (s32)r0 < 1024;
    do {
        if (r0 == 0x400u) {
            wr8(param_2 + 4u, (u8)((rd32(param_3 + 4u) >> 0x18u) & 0xffu));
            r6 = (rd32(param_3 + 4u) >> 0x10u) & 0xffffu;
            wr8(param_2 + 6u, 0u);
            wr8(param_2 + 5u, (u8)r6);
            wr8(param_2 + 7u, 0u);
            wr8(param_2 + 8u, (u8)((rd32(param_3 + 4u) >> 8u) & 0xffu));
            wr8(param_2 + 9u, (u8)rd32(param_3 + 4u));
        } else {
            if (!c0lt) {
                c0lt = (s32)r0 < 1536;
                if (r0 != 0x600u) {
                    if (!c0lt) {
                        if (r0 != 0x700u) break;
                    } else if (r0 != 0x500u) {
                        break;
                    }
                }
            } else {
                c0lt = (s32)r0 < 512;
                if (r0 == 0x200u) {
                    wr8(param_2 + 4u, (u8)((rd32(param_3 + 4u) >> 0x18u) & 0xf0u));
                    wr8(param_2 + 5u, (u8)((rd32(param_3 + 4u) >> 0x14u) & 0xf0u));
                    wr8(param_2 + 6u, (u8)((rd32(param_3 + 4u) >> 0x10u) & 0xf0u));
                    wr8(param_2 + 7u, (u8)((rd32(param_3 + 4u) >> 0xcu) & 0xf0u));
                    wr8(param_2 + 8u, (u8)((rd32(param_3 + 4u) >> 8u) & 0xffu));
                    wr8(param_2 + 9u, (u8)rd32(param_3 + 4u));
                    break;
                }
                if (!c0lt) {
                    if (r0 == 0x300u) {
                        wr8(param_2 + 4u, (u8)((rd32(param_3 + 4u) >> 0x18u) & 0xffu));
                        wr8(param_2 + 5u, (u8)((rd32(param_3 + 4u) >> 0x10u) & 0xffffu));
                        wr8(param_2 + 6u, (u8)((rd32(param_3 + 4u) >> 8u) & 0xffu));
                        wr8(param_2 + 7u, (u8)rd32(param_3 + 4u));
                        wr8(param_2 + 8u, 0u);
                        wr8(param_2 + 9u, 0u);
                        break;
                    }
                    break;
                }
                c0lt = (s32)r0 < 256;
                if (r0 == 0x100u) {
                    wr8(param_2 + 4u, (u8)((rd32(param_3 + 4u) >> 0x18u) & 0xf0u));
                    wr8(param_2 + 5u, (u8)((rd32(param_3 + 4u) >> 0x14u) & 0xf0u));
                    wr8(param_2 + 6u, (u8)((rd32(param_3 + 4u) >> 0x10u) & 0xffu));
                    wr8(param_2 + 7u, (u8)((rd32(param_3 + 4u) >> 8u) & 0xffu));
                    wr8(param_2 + 8u, (u8)(rd32(param_3 + 4u) & 0xf0u));
                    wr8(param_2 + 9u, (u8)((rd32(param_3 + 4u) << 4u) & 0xf0u));
                    break;
                }
                if (!c0lt) break;
                if (r0 != 0u) break;
            }
            wr8(param_2 + 4u, (u8)((rd32(param_3 + 4u) >> 0x18u) & 0xffu));
            wr8(param_2 + 5u, (u8)((rd32(param_3 + 4u) >> 0x10u) & 0xffffu));
            wr8(param_2 + 6u, (u8)((rd32(param_3 + 4u) >> 8u) & 0xf0u));
            wr8(param_2 + 7u, (u8)((rd32(param_3 + 4u) >> 4u) & 0xf0u));
            wr8(param_2 + 8u, (u8)(rd32(param_3 + 4u) & 0xf0u));
            wr8(param_2 + 9u, (u8)((rd32(param_3 + 4u) << 4u) & 0xf0u));
        }
    } while (0);
    r6 = (u32)rd8(param_2 + 5u);
    r8 = (u32)rd8(param_2 + 3u) - 0x80u;
    r7 = (u32)rd8(param_2 + 4u) - 0x80u;
    wr8(param_2 + 2u, (u8)((u32)rd8(param_2 + 2u) - 0x80u));
    r6 = r6 - 0x80u;
    wr8(param_2 + 3u, (u8)r8);
    wr8(param_2 + 4u, (u8)r7);
    wr8(param_2 + 5u, (u8)r6);
    if (((rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fb19d00u) & 0xffff0000u) - 0x9000000u) != 0u || (((u32)rd16(param_2) & 0x80u) ^ 0x80u) == 0u) {
        r5 = ((u32)param_1 * 0xcu) - 0x7fb19d30u;
        r8 = (u32)rd8(r5 + 2u);
        wr32(0x8057177cu, rd32(0x8057177cu) & ~((((u32)param_1 & 0x20u) != 0u) ? 0u : (0x80000000u >> ((u32)param_1 & 0x1fu))));
        r0 = (u32)(s8)r8;
        c0lt = (s32)r0 < 0;
        r6 = (u32)rd8(param_2 + 2u);
        if ((s32)r0 <= 0) {
            if (c0lt) {
                r3 = (u32)(s8)(r8 + 0x7fu);
                if ((s32)r3 < (s32)(s8)r6) {
                    r6 = r3;
                }
            }
        } else {
            r3 = (u32)(s8)(r8 - 0x80u);
            if ((s32)(s8)r6 < (s32)r3) {
                r6 = r3;
            }
        }
        r0 = r6 - r8;
        r6 = (u32)rd8(param_2 + 3u);
        wr8(param_2 + 2u, (u8)r0);
        r7 = (u32)rd8(r5 + 3u);
        r0 = (u32)(s8)r7;
        c0lt = (s32)r0 < 0;
        if ((s32)r0 <= 0) {
            if (c0lt) {
                r3 = (u32)(s8)(r7 + 0x7fu);
                if ((s32)r3 < (s32)(s8)r6) {
                    r6 = r3;
                }
            }
        } else {
            r3 = (u32)(s8)(r7 - 0x80u);
            if ((s32)(s8)r6 < (s32)r3) {
                r6 = r3;
            }
        }
        r0 = r6 - r7;
        r6 = (u32)rd8(param_2 + 4u);
        wr8(param_2 + 3u, (u8)r0);
        r7 = (u32)rd8(r5 + 4u);
        r0 = (u32)(s8)r7;
        c0lt = (s32)r0 < 0;
        if ((s32)r0 <= 0) {
            if (c0lt) {
                r3 = (u32)(s8)(r7 + 0x7fu);
                if ((s32)r3 < (s32)(s8)r6) {
                    r6 = r3;
                }
            }
        } else {
            r3 = (u32)(s8)(r7 - 0x80u);
            if ((s32)(s8)r6 < (s32)r3) {
                r6 = r3;
            }
        }
        r0 = r6 - r7;
        r6 = (u32)rd8(param_2 + 5u);
        wr8(param_2 + 4u, (u8)r0);
        r7 = (u32)rd8(r5 + 5u);
        r0 = (u32)(s8)r7;
        c0lt = (s32)r0 < 0;
        if ((s32)r0 <= 0) {
            if (c0lt) {
                r3 = (u32)(s8)(r7 + 0x7fu);
                if ((s32)r3 < (s32)(s8)r6) {
                    r6 = r3;
                }
            }
        } else {
            r3 = (u32)(s8)(r7 - 0x80u);
            if ((s32)(s8)r6 < (s32)r3) {
                r6 = r3;
            }
        }
        r3 = (u32)rd8(param_2 + 6u);
        wr8(param_2 + 5u, (u8)(r6 - r7));
        r0 = (u32)rd8(r5 + 6u);
        if (r3 < r0) {
            r3 = r0;
        }
        r0 = r3 - r0;
        r3 = (u32)rd8(param_2 + 7u);
        wr8(param_2 + 6u, (u8)r0);
        r0 = (u32)rd8(r5 + 7u);
        if (r3 < r0) {
            r3 = r0;
        }
        r0 = r3 - r0;
        wr8(param_2 + 7u, (u8)r0);
        return;
    }
    wr32(0x8057177cu, rd32(0x8057177cu) | ((((u32)param_1 & 0x20u) != 0u) ? 0u : (0x80000000u >> ((u32)param_1 & 0x1fu))));
    wr8(param_2 + 2u, 0u);
    wr8(param_2 + 3u, 0u);
    wr8(param_2 + 4u, 0u);
    wr8(param_2 + 5u, 0u);
    return;
}
