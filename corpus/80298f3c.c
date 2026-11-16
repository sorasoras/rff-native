#include "tc_rt.h"

u32 fn_80298f3c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    if (param_1 != 0u) {
        r9 = (u32)rd8(param_2 + 8u);
        if (r9 != 0u) {
            r8 = (u32)rd8(param_1 + 8u);
            if (r8 != 0u) {
                if ((r8 & 0x10u) == 0u) {
                    if ((r9 & 0x10u) == 0u) {
                        r7 = r8 - 1u;
                        r7 = r9 + (((r7 << 2u) & 0xfffffffcu) - r7);
                        r0 = (u32)rd8(((r7 - 1u) & 0xffu) - 0x7fcb7bd8u);
                        c0lt = (s32)r0 < 2;
                        if (r0 == 2u) {
                            r0 = (u32)rd16(param_2 + 2u);
                            wr16(param_3, rd16(param_2));
                            wr16(param_3 + 2u, (u16)r0);
                            r0 = (u32)rd16(param_2 + 6u);
                            wr16(param_3 + 4u, rd16(param_2 + 4u));
                            wr16(param_3 + 6u, (u16)r0);
                            wr16(param_3 + 8u, rd16(param_2 + 8u));
                            return param_2;
                        }
                        if (!c0lt) {
                            if ((s32)r0 < 4) {
                                wr8(param_3 + 8u, (u8)r8);
                                r6 = (u32)rd16(param_2);
                                r0 = (u32)rd16(param_1);
                                if (r0 < r6) {
                                    r6 = r0;
                                }
                                wr16(param_3, (u16)r6);
                                r7 = (u32)rd16(param_2 + 2u);
                                r0 = (u32)rd16(param_1 + 2u);
                                if (r0 > r7) {
                                    r7 = r0;
                                }
                                r6 = (u32)rd16(param_3);
                                wr16(param_3 + 2u, (u16)r7);
                                if (r6 >= (r7 & 0xffffu)) {
                                    if ((u32)rd8(param_3 + 8u) == 2u) {
                                        r6 = (u32)rd16(param_2 + 4u);
                                        r0 = (u32)rd16(param_1 + 4u);
                                        if (r0 > r6) {
                                            r6 = r0;
                                        }
                                        wr16(param_3 + 4u, (u16)r6);
                                        r4 = (u32)rd16(param_2 + 6u);
                                        r0 = (u32)rd16(param_1 + 6u);
                                        if (r0 > r4) {
                                            r4 = r0;
                                        }
                                        wr16(param_3 + 6u, (u16)r4);
                                    }
                                    return param_3;
                                }
                                return 0u;
                            }
                        } else if ((s32)r0 >= 1) {
                            r0 = (u32)rd16(param_1 + 2u);
                            wr16(param_3, rd16(param_1));
                            wr16(param_3 + 2u, (u16)r0);
                            r0 = (u32)rd16(param_1 + 6u);
                            wr16(param_3 + 4u, rd16(param_1 + 4u));
                            wr16(param_3 + 6u, (u16)r0);
                            wr16(param_3 + 8u, rd16(param_1 + 8u));
                            return param_1;
                        }
                        return 0u;
                    }
                    r0 = (u32)rd16(param_2 + 2u);
                    wr16(param_3, rd16(param_2));
                    wr16(param_3 + 2u, (u16)r0);
                    r0 = (u32)rd16(param_2 + 6u);
                    wr16(param_3 + 4u, rd16(param_2 + 4u));
                    wr16(param_3 + 6u, (u16)r0);
                    wr16(param_3 + 8u, rd16(param_2 + 8u));
                    wr8(param_3 + 8u, (u8)((u32)rd8(param_3 + 8u) & 0xffffffefu));
                    return param_3;
                }
                r0 = (u32)rd16(param_1 + 2u);
                wr16(param_3, rd16(param_1));
                wr16(param_3 + 2u, (u16)r0);
                r0 = (u32)rd16(param_1 + 6u);
                wr16(param_3 + 4u, rd16(param_1 + 4u));
                wr16(param_3 + 6u, (u16)r0);
                wr16(param_3 + 8u, rd16(param_1 + 8u));
                wr8(param_3 + 8u, (u8)((u32)rd8(param_3 + 8u) & 0xffffffefu));
                return param_3;
            }
        }
        return 0u;
    }
    r0 = (u32)rd16(param_2 + 2u);
    wr16(param_3, rd16(param_2));
    wr16(param_3 + 2u, (u16)r0);
    r0 = (u32)rd16(param_2 + 6u);
    wr16(param_3 + 4u, rd16(param_2 + 4u));
    wr16(param_3 + 6u, (u16)r0);
    wr16(param_3 + 8u, rd16(param_2 + 8u));
    return param_2;
}
