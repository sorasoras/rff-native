#include "tc_rt.h"

u32 fn_801f1e9c(s32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, s32 param_7, s32 param_8)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = tc_argr(8u);
    (void)param_3;
    (void)param_4;
    (void)param_6;
    r7 = (u32)param_5;
    r9 = (u32)param_7;
    r10 = (u32)param_8;
    r0 = 0u;
    r11 = 0x80499214u;
    wr16(0x817fdffcu, 0u);
    wr16(0x817fdff8u, 0u);
    if ((u32)rd16(0x80499214u) == 0x2e8u) {
        r3 = 0u;
    } else {
        r5 = (u32)rd16(0x80499214u);
        if ((s32)r5 >= 37 && (s32)r5 <= 84) {
            r7 = r5 - 0x25u;
        } else {
            if ((s32)r5 >= 115 && (s32)r5 <= 133) {
                r7 = r5 - 0x43u;
            } else {
                if ((s32)r5 >= 134 && (s32)r5 <= 336) {
                    r7 = r5 - 0x43u;
                } else {
                    if ((s32)r5 >= 337 && (s32)r5 <= 352) {
                        r7 = r5 - 0x43u;
                    }
                }
            }
        }
        r8 = (u32)rd16(0x80499214u);
        wr8(0x817fdffcu, rd8(((r7 << 4u) & 0xfffffff0u) - 0x7fb5fba1u));
        if ((s32)r8 >= 37 && (s32)r8 <= 84) {
            r9 = r8 - 0x25u;
        } else {
            if ((s32)r8 >= 115 && (s32)r8 <= 133) {
                r9 = r8 - 0x43u;
            } else {
                if ((s32)r8 >= 134 && (s32)r8 <= 336) {
                    r9 = r8 - 0x43u;
                } else {
                    if ((s32)r8 >= 337 && (s32)r8 <= 352) {
                        r9 = r8 - 0x43u;
                    }
                }
            }
        }
        r7 = (u32)rd16(0x80499214u);
        wr8(0x817fdff8u, rd8(((r9 << 4u) & 0xfffffff0u) - 0x7fb5fba0u));
        if ((s32)r7 >= 37 && (s32)r7 <= 84) {
            r10 = r7 - 0x25u;
        } else {
            if ((s32)r7 >= 115 && (s32)r7 <= 133) {
                r10 = r7 - 0x43u;
            } else {
                if ((s32)r7 >= 134 && (s32)r7 <= 336) {
                    r10 = r7 - 0x43u;
                } else {
                    if ((s32)r7 >= 337 && (s32)r7 <= 352) {
                        r10 = r7 - 0x43u;
                    }
                }
            }
        }
        r7 = (u32)rd16(0x80499214u);
        wr8(0x817fdffdu, rd8(((r10 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu));
        if ((s32)r7 >= 37 && (s32)r7 <= 84) {
            r11 = r7 - 0x25u;
        } else {
            if ((s32)r7 >= 115 && (s32)r7 <= 133) {
                r11 = r7 - 0x43u;
            } else {
                if ((s32)r7 >= 134 && (s32)r7 <= 336) {
                    r11 = r7 - 0x43u;
                } else {
                    if ((s32)r7 >= 337 && (s32)r7 <= 352) {
                        r11 = r7 - 0x43u;
                    }
                }
            }
        }
        r6 = (u32)(s8)rd8(0x817fdffcu);
        r5 = (u32)(s8)param_1;
        r3 = (u32)(s8)param_2;
        wr8(0x817fdff9u, rd8(((r11 << 4u) & 0xfffffff0u) - 0x7fb5fb9eu));
        if ((s32)r6 >= 0 && (r6 == r5 || r6 == r3)) {
            r0 = (u32)rd8(0x817fdff8u);
        }
        r6 = (u32)(s8)rd8(0x817fdffdu);
        if ((s32)r6 >= 0 && (r6 == r5 || r6 == r3)) {
            r0 = r0 + (u32)rd8(0x817fdff9u);
        }
        r3 = r0;
    }
    return r3;
}
