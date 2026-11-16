#include "tc_rt.h"

s32 fn_8008cf14(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    r4 = param_2;
    r5 = (u32)param_3;
    do {
        if ((u32)rd8(param_1 + 0x19u) == 0u) {
            if ((s32)(s16)rd16(param_1 + 0x14u) < 0) {
                r8 = (u32)rd8(r4);
                r5 = r5 - 1u;
                r6 = rd32(param_1 + 8u);
                r4 = r4 + 1u;
                wr16(param_1 + 0x14u, (u16)((((r8 + 1u) << 1u) & 0xfffffffeu) - 1u));
                wr8(r6, (u8)r8);
                wr32(param_1 + 8u, r6 + 1u);
            }
            r6 = param_1 + 0x1du;
            for (;;) {
                if ((s32)(s16)rd16(param_1 + 0x14u) <= 0) {
                    while ((s32)rd32(param_1 + 4u) > 0) {
                        for (;;) {
                            r8 = (u32)rd8(param_1 + 0x16u);
                            if (r8 >= 0x20u) break;
                            if (r5 == 0u) {
                                return (s32)rd32(param_1 + 4u);
                            }
                            r0 = (u32)rd8(r4);
                            r4 = r4 + 1u;
                            r5 = r5 - 1u;
                            r8 = ((r8 & 0x20u) != 0u) ? 0u : (r0 << (r8 & 0x1fu));
                            r7 = rd32(param_1 + 0xcu) | r8;
                            wr8(param_1 + 0x16u, (u8)((u32)rd8(param_1 + 0x16u) + 8u));
                            wr32(param_1 + 0xcu, r7);
                        }
                        while ((u32)rd8(param_1 + 0x16u) != 0u) {
                            r7 = rd32(param_1 + 8u);
                            r10 = rd32(param_1 + 0xcu);
                            r11 = r7 & 0xfffffffeu;
                            r8 = (u32)rd8(r7);
                            r12 = (r10 >> 0x1fu) & 1u;
                            r9 = (u32)rd8(r7) & 0x3fu;
                            r7 = (u32)rd8(param_1 + 0x16u);
                            r0 = (((r12 & 0x20u) != 0u) ? 0u : (r8 << (r12 & 0x1fu))) & 0x80u;
                            wr32(param_1 + 0xcu, (r10 << 1u) & 0xfffffffeu);
                            r12 = (((r9 + 1u) << 1u) & 0xfffffffeu) + (r12 + r11);
                            wr32(param_1 + 8u, r12);
                            wr8(param_1 + 0x16u, (u8)(r7 - 1u));
                            if (r0 != 0u) {
                                r7 = (u32)rd8(param_1 + 0x18u);
                                r0 = (u32)rd8(param_1 + 0x17u);
                                r9 = 0x20u - r7;
                                r11 = ((r7 & 0x20u) != 0u) ? 0u : (rd32(param_1 + 0x10u) >> (r7 & 0x1fu));
                                wr32(param_1 + 0x10u, r11);
                                r7 = r0 + r7;
                                r0 = ((r9 & 0x20u) != 0u) ? 0u : ((u32)rd8(r12) << (r9 & 0x1fu));
                                wr32(param_1 + 8u, param_1 + 0x1du);
                                r9 = r11 | r0;
                                wr32(param_1 + 0x10u, r9);
                                wr8(param_1 + 0x17u, (u8)r7);
                                if ((r7 & 0xffu) == 0x20u) {
                                    wr32(rd32(param_1), ((r9 << 8u) & 0xff0000u) | ((r9 << 0x18u) & 0xff000000u) | (((r9 >> 8u) & 0xff00u) | ((r9 >> 0x18u) & 0xffu)));
                                    r8 = rd32(param_1);
                                    r0 = rd32(param_1 + 4u) - 4u;
                                    wr8(param_1 + 0x17u, 0u);
                                    wr32(param_1, r8 + 4u);
                                    wr32(param_1 + 4u, r0);
                                    if ((s32)r0 <= 0) {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                    return 0;
                }
                if (r5 == 0u) break;
                r0 = (u32)rd8(r4);
                r4 = r4 + 1u;
                r7 = rd32(param_1 + 8u);
                r5 = r5 - 1u;
                wr8(r7, (u8)r0);
                r0 = r7 + 1u;
                r7 = (u32)(s16)rd16(param_1 + 0x14u);
                wr32(param_1 + 8u, r0);
                r7 = r7 - 1u;
                wr16(param_1 + 0x14u, (u16)r7);
                if ((u32)(s16)r7 == 0u) {
                    wr32(param_1 + 8u, r6);
                }
            }
            return (s32)rd32(param_1 + 4u);
        }
        r0 = (u32)rd8(param_1 + 0x19u) - 1u;
        r7 = r0 & 0xffu;
        wr8(param_1 + 0x19u, (u8)r0);
        if (r7 > 3u) {
            if (r7 > 6u) {
                wr8(param_1 + 0x18u, (u8)((u32)rd8(r4) & 0xfu));
            } else {
                r0 = ((6u - r7) << 3u) & 0xfffffff8u;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : ((u32)rd8(r4) << (r0 & 0x1fu));
                r0 = rd32(param_1 + 4u) | r0;
                wr32(param_1 + 4u, r0);
            }
        } else {
            r0 = ((3u - r7) << 3u) & 0xfffffff8u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : ((u32)rd8(r4) << (r0 & 0x1fu));
            r0 = rd32(param_1 + 4u) | r0;
            wr32(param_1 + 4u, r0);
        }
        r4 = r4 + 1u;
        if ((u32)rd8(param_1 + 0x19u) == 4u && (s32)rd32(param_1 + 4u) > 0) {
            wr8(param_1 + 0x19u, 0u);
        }
        r5 = r5 - 1u;
    } while (r5 != 0u);
    if ((u32)rd8(param_1 + 0x19u) != 0u) {
        return -1;
    }
    return (s32)rd32(param_1 + 4u);
}
