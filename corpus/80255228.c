#include "tc_rt.h"

u32 fn_80255228(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    wr32(param_3, 0u);
    r7 = param_2;
    if (param_2 != 0u) {
        r6 = param_1;
        if ((u32)rd8(param_2) == 0x50u) {
            r7 = param_2 + 1u;
            if ((u32)rd8(param_2 + 1u) == 0x43u) {
                r7 = r7 + 1u;
            }
            if ((u32)rd8(r7) == 0x56u) {
                r7 = r7 + 1u;
            }
            if ((u32)rd8(r7) == 0x76u) {
                r0 = (u32)(s8)rd8(param_1);
                if (r0 == 0x50u || r0 == 0x2au) {
                    return 1u;
                }
            }
            r7 = param_2;
        }
        r0 = (u32)(s8)rd8(param_1);
        c0lt = (s32)r0 < 42;
        do {
            if (r0 != 0x2au) {
                if (c0lt && r0 == 0x21u) break;
                for (;;) {
                    r3 = (u32)rd8(r6);
                    r0 = (u32)(s8)r3;
                    if (r0 != 0x50u && r0 != 0x52u) {
                        fl_ = 1u;
                        break;
                    }
                    r3 = (u32)(s8)r3;
                    if (r3 != (u32)(s8)rd8(r7)) {
                        fl_ = 1u;
                        break;
                    }
                    r7 = r7 + 1u;
                    r6 = r6 + 1u;
                    if ((u32)rd8(r7) == 0x43u) {
                        if ((u32)rd8(r6) == 0x43u) {
                            r6 = r6 + 1u;
                        }
                        r7 = r7 + 1u;
                    }
                    r3 = (u32)(s8)rd8(r6);
                    if (r3 == 0x43u) {
                        return 0u;
                    }
                    if ((u32)rd8(r7) == 0x56u) {
                        if (r3 == 0x56u) {
                            r6 = r6 + 1u;
                        }
                        r7 = r7 + 1u;
                    }
                    if ((u32)rd8(r6) == 0x56u) {
                        return 0u;
                    }
                }
                if (fl_ == 1u) {
                    fl_ = 0u;
                }
                for (;;) {
                    r4 = (u32)rd8(r6);
                    if ((u32)(s8)r4 != (u32)(s8)rd8(r7)) {
                        return 0u;
                    }
                    if ((u32)(s8)r4 == 0u) break;
                    r6 = r6 + 1u;
                    r7 = r7 + 1u;
                }
                return 1u;
            }
        } while (0);
        r6 = param_1 + 1u;
        r7 = param_2 + 1u;
        if ((u32)(s8)rd8(param_1) == (u32)(s8)rd8(param_2)) {
            for (;;) {
                r0 = (u32)rd8(r7);
                r7 = r7 + 1u;
                r0 = (u32)(s8)r0;
                r3 = (u32)(s8)rd8(r6);
                if (r3 != r0) {
                    do {
                        r0 = (u32)rd8(r6);
                        r6 = r6 + 1u;
                    } while (r0 != 0x21u);
                    do {
                        r0 = (u32)rd8(r6);
                        r6 = r6 + 1u;
                    } while (r0 != 0x21u);
                    if ((u32)(s8)rd8(r6) == 0u) break;
                    r7 = param_2 + 1u;
                } else {
                    r6 = r6 + 1u;
                    if (r3 == 0x21u) {
                        r4 = 0u;
                        while ((u32)rd8(r6) != 0x21u) {
                            r3 = (u32)rd8(r6);
                            r6 = r6 + 1u;
                            r3 = (u32)(s8)r3;
                            r4 = r3 + (r4 * 0xau);
                            r4 = r4 - 0x30u;
                        }
                        wr32(param_3, r4);
                        return 1u;
                    }
                }
            }
            return 0u;
        }
        return 0u;
    }
    return 1u;
}
