#include "tc_rt.h"

void fn_80276b3c(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, c1eq = 0, fl_ = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    if (param_2 >= 0x80u) {
        if (param_2 < 0xff61u || param_2 > 0xff9fu) {
            if (param_2 < 0xd800u || param_2 >= 0xf900u) {
                r7 = param_2 & 0xffu;
                r6 = (param_2 >> 8u) & 0xffu;
                if (r7 == 0u) {
                    r8 = 0u;
                } else {
                    r8 = (u32)rd16((((r7 - 1u) << 1u) & 0xfffffffeu) - 0x7fcb8128u);
                }
                r7 = (u32)rd16(((r7 << 1u) & 0x1feu) - 0x7fcb8128u) - 1u;
                for (;;) {
                    if ((s32)(r7 - r8) <= 1) {
                        fl_ = 1u;
                        break;
                    }
                    r5 = r8 + r7;
                    r0 = ((r5 >> 0x1fu) & 1u) + r5;
                    r9 = (u32)((s32)r0 >> 1);
                    r0 = (r0 << 1u) & 0xfffffffcu;
                    r0 = r0 - r9;
                    r5 = r0 - 0x7fcbd820u;
                    r10 = (u32)rd8(r0 - 0x7fcbd820u);
                    r0 = (u32)rd8(r0 - 0x7fcbd820u);
                    if (r0 == r6) {
                        r0 = (u32)rd8(r5 + 2u);
                        wr8(param_1, rd8(r5 + 1u));
                        wr8(param_1 + 1u, (u8)r0);
                        return;
                    }
                    c0lt = (s32)r10 < (s32)r6;
                    if ((s32)r10 <= (s32)r6) {
                        if (c0lt) {
                            r8 = r9;
                        }
                    } else {
                        r7 = r9;
                    }
                }
                if (fl_ == 1u) {
                    fl_ = 0u;
                }
                r0 = ((r8 << 2u) & 0xfffffffcu) - r8;
                r5 = r0 - 0x7fcbd820u;
                r0 = (u32)rd8(r0 - 0x7fcbd820u);
                if (r0 != r6) {
                    r0 = ((r7 << 2u) & 0xfffffffcu) - r7;
                    r5 = r0 - 0x7fcbd820u;
                    r0 = (u32)rd8(r0 - 0x7fcbd820u);
                    if (r0 != r6) {
                        wr8(param_1 + 1u, 0u);
                        wr8(param_1, 0u);
                        return;
                    }
                    r0 = (u32)rd8(r5 + 2u);
                    wr8(param_1, rd8(r5 + 1u));
                    wr8(param_1 + 1u, (u8)r0);
                    return;
                }
                r0 = (u32)rd8(r5 + 2u);
                wr8(param_1, rd8(r5 + 1u));
                wr8(param_1 + 1u, (u8)r0);
                return;
            }
            if (param_2 < 0xe000u || param_2 > 0xe757u) {
                c1eq = param_2 == 0xf8f0u;
                if (param_2 < 0xf8f0u || param_2 > 0xf8f3u) {
                    wr8(param_1 + 1u, 0u);
                    wr8(param_1, 0u);
                    return;
                }
                if (!c1eq) {
                    wr8(param_1, (u8)(param_2 - 0xf7f4u));
                } else {
                    wr8(param_1, 0xa0u);
                }
                wr8(param_1 + 1u, 0u);
                return;
            }
            r5 = param_2 - 0xe000u;
            r6 = r5 - (((ppc_mulhwu(0xae4c415du, r5) >> 7u) & 0x1ffffffu) * 0xbcu);
            r0 = r6 + 0x41u;
            wr8(param_1, (u8)(((ppc_mulhwu(0xae4c415du, r5 - r6) >> 7u) & 0x1ffffffu) + 0xf0u));
            if (r6 < 0x3fu) {
                r0 = r6 + 0x40u;
            }
            wr8(param_1 + 1u, (u8)r0);
            return;
        }
        wr8(param_1 + 1u, 0u);
        wr8(param_1, (u8)(param_2 - 0xfec0u));
        return;
    }
    wr8(param_1, (u8)param_2);
    wr8(param_1 + 1u, 0u);
    return;
}
