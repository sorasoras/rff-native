#include "tc_rt.h"

u32 fn_802b6a40(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    wr16(param_3, 0u);
    r6 = (u32)rd8(param_1);
    r0 = (u32)((s32)r6 >> 3);
    r6 = r6 & 7u;
    if (r0 == 6u) {
        c0lt = (s32)r6 < 6;
        if (r6 == 6u) {
            r6 = param_1 + 3u;
            r0 = ((((u32)rd8(param_1 + 1u) << 8u) & 0xffffff00u) + (u32)rd8(param_1 + 2u)) & 0xffffu;
        } else if (!c0lt) {
            if ((s32)r6 >= 8) {
                return param_1 + 1u;
            }
            r6 = param_1 + 5u;
            r0 = (((u32)rd8(param_1 + 2u) << 0x10u) & 0xffff0000u) + (u32)rd8(param_1 + 4u) + ((((u32)rd8(param_1 + 1u) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 3u) << 8u) & 0xffffff00u));
        } else {
            if ((s32)r6 < 5) {
                return param_1 + 1u;
            }
            r0 = (u32)rd8(param_1 + 1u);
            r6 = param_1 + 2u;
        }
        if (r0 <= param_2) {
            r0 = r6 + r0;
            for (;;) {
                if (r6 >= r0) {
                    return r6;
                }
                r4 = (u32)rd8(r6);
                r6 = r6 + 1u;
                r3 = (u32)((s32)r4 >> 3);
                r4 = r4 & 7u;
                if (r3 != 1u) {
                    return r6;
                }
                c0lt = (s32)r4 < 5;
                if (r4 == 5u) {
                    r3 = (u32)rd8(r6);
                    r6 = r6 + 1u;
                } else if (!c0lt) {
                    c0lt = (s32)r4 < 7;
                    if (r4 == 7u) {
                        r8 = ((u32)rd8(r6) << 0x18u) & 0xff000000u;
                        r7 = (u32)rd8(r6 + 3u);
                        r4 = ((u32)rd8(r6 + 1u) << 0x10u) & 0xffff0000u;
                        r3 = ((u32)rd8(r6 + 2u) << 8u) & 0xffffff00u;
                        r6 = r6 + 4u;
                        r4 = r8 + r4;
                        r3 = r7 + r3;
                        r3 = r4 + r3;
                    } else {
                        if (!c0lt) {
                            return 0u;
                        }
                        r4 = (u32)rd8(r6);
                        r3 = (u32)rd8(r6 + 1u);
                        r6 = r6 + 2u;
                        r4 = (r4 << 8u) & 0xffffff00u;
                        r3 = r4 + r3;
                        r3 = r3 & 0xffffu;
                    }
                } else {
                    c0lt = (s32)r4 < 2;
                    if (r4 == 2u) {
                        r3 = 4u;
                    } else {
                        if (!c0lt) {
                            return 0u;
                        }
                        if ((s32)r4 < 1) {
                            return 0u;
                        }
                        r3 = 2u;
                    }
                }
                if (r3 != 2u) {
                    if (r3 != 4u) break;
                    wr16(param_3 + (((u32)rd16(param_3) << 2u) & 0xfffffffcu) + 2u, (u16)((((u32)rd8(r6) << 8u) & 0xffffff00u) + (u32)rd8(r6 + 1u)));
                    r4 = (u32)rd8(r6 + 3u);
                    r7 = ((u32)rd8(r6 + 2u) << 8u) & 0xffffff00u;
                    r6 = r6 + 4u;
                    r4 = r7 + r4;
                    wr16(param_3 + (((u32)rd16(param_3) << 2u) & 0xfffffffcu) + 4u, (u16)r4);
                } else {
                    r4 = (u32)rd8(r6 + 1u);
                    r7 = ((u32)rd8(r6) << 8u) & 0xffffff00u;
                    r6 = r6 + 2u;
                    r4 = r7 + r4;
                    wr16(param_3 + (((u32)rd16(param_3) << 2u) & 0xfffffffcu) + 2u, (u16)r4);
                    r4 = param_3 + (((u32)rd16(param_3) << 2u) & 0xfffffffcu);
                    wr16(r4 + 4u, rd16(r4 + 2u));
                }
                r4 = (u32)rd16(param_3) + 1u;
                wr16(param_3, (u16)r4);
                if ((r4 & 0xffffu) >= 0x10u) {
                    return 0u;
                }
            }
            return 0u;
        }
        return r6;
    }
    return param_1 + 1u;
}
