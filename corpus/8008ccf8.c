#include "tc_rt.h"

s32 fn_8008ccf8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r11 = 0;
    r4 = param_2;
    r5 = (u32)param_3;
    do {
        if ((u32)rd8(param_1 + 0xcu) == 0u) {
            for (;;) {
                r6 = rd32(param_1 + 4u);
                if ((s32)r6 <= 0) {
                    return (s32)r6;
                }
                while ((u32)rd8(param_1 + 9u) != 0u) {
                    if (r5 == 0u) {
                        return (s32)rd32(param_1 + 4u);
                    }
                    if (((u32)rd8(param_1 + 8u) & 0x80u) != 0u) {
                        if ((u32)rd8(param_1 + 0xbu) == 0u) {
                            r6 = (u32)rd8(r4);
                            r5 = r5 - 1u;
                            wr8(param_1 + 0xbu, 1u);
                            r4 = r4 + 1u;
                            wr8(param_1 + 0xau, (u8)r6);
                        }
                        if (r5 == 0u) {
                            return (s32)rd32(param_1 + 4u);
                        }
                        r8 = (u32)rd8(param_1 + 0xau);
                        r5 = r5 - 1u;
                        r6 = (u32)rd8(r4);
                        r4 = r4 + 1u;
                        r6 = (r6 & 0xfffff0ffu) | ((r8 << 8u) & 0xf00u);
                        wr8(param_1 + 0xbu, 0u);
                        r11 = r6 + 1u;
                        wr8(param_1 + 0xau, (u8)((u32)((s32)r8 >> 4) + 3u));
                        while ((u32)rd8(param_1 + 0xau) != 0u) {
                            r7 = rd32(param_1);
                            wr8(r7, rd8(r7 - r11));
                            r6 = (u32)rd8(param_1 + 0xau);
                            r7 = rd32(param_1 + 4u) - 1u;
                            wr32(param_1, rd32(param_1) + 1u);
                            r6 = r6 - 1u;
                            wr32(param_1 + 4u, r7);
                            wr8(param_1 + 0xau, (u8)r6);
                        }
                    } else {
                        r7 = (u32)rd8(r4);
                        r5 = r5 - 1u;
                        r6 = rd32(param_1);
                        r4 = r4 + 1u;
                        wr8(r6, (u8)r7);
                        r7 = r6 + 1u;
                        r6 = rd32(param_1 + 4u);
                        wr32(param_1, r7);
                        r6 = r6 - 1u;
                        wr32(param_1 + 4u, r6);
                    }
                    r6 = rd32(param_1 + 4u);
                    if (r6 == 0u) {
                        return (s32)r6;
                    }
                    r6 = (u32)rd8(param_1 + 9u) - 1u;
                    wr8(param_1 + 8u, (u8)(((u32)rd8(param_1 + 8u) << 1u) & 0xfeu));
                    wr8(param_1 + 9u, (u8)r6);
                }
                if (r5 == 0u) break;
                r6 = (u32)rd8(r4);
                r5 = r5 - 1u;
                wr8(param_1 + 9u, 8u);
                r4 = r4 + 1u;
                wr8(param_1 + 8u, (u8)r6);
            }
            return (s32)rd32(param_1 + 4u);
        }
        r0 = (u32)rd8(param_1 + 0xcu) - 1u;
        r7 = r0 & 0xffu;
        wr8(param_1 + 0xcu, (u8)r0);
        if (r7 > 3u) {
            if (r7 <= 6u) {
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
        if ((u32)rd8(param_1 + 0xcu) == 4u && (s32)rd32(param_1 + 4u) > 0) {
            wr8(param_1 + 0xcu, 0u);
        }
        r5 = r5 - 1u;
    } while (r5 != 0u);
    if ((u32)rd8(param_1 + 0xcu) != 0u) {
        return -1;
    }
    return (s32)rd32(param_1 + 4u);
}
