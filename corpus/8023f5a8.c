#include "tc_rt.h"

void fn_8023f5a8(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r7 = rd32(0x80571714u);
    r10 = rd32(0x804e6254u);
    r0 = ((((u32)param_2 - 1u) << 1u) & 0xfffffffeu) + ppc_divwu((u32)param_1 - 1u, (u32)rd16(r7 + 0x1au));
    if (r10 == 0u) {
        r9 = (u32)rd16(r7 + 0x18u);
        if (r0 < r9) {
            r8 = (u32)rd8(r7);
            r10 = (u32)rd16(r7 + 4u);
            r8 = ((r8 << 2u) & 0xfffffffcu) - r8;
            if (r0 < (r10 + r8)) {
                wr16(param_4, 0xffffu);
                wr16(param_3, (u16)((u32)param_1 - 1u));
                return;
            }
            if (r0 >= (r9 - (u32)rd16(r7 + 8u))) {
                wr16(param_4, 0xffffu);
                wr16(param_3, (u16)((u32)param_1 - 1u));
                return;
            }
            r0 = r0 - r8;
            r0 = r0 - r10;
            r0 = r0 & 0xfffffffeu;
            wr16(param_4, (u16)r0);
            wr16(param_3, (u16)((u32)param_1 - 1u));
            return;
        }
        r8 = (u32)rd8(r7);
        r0 = r0 - r9;
        r10 = (u32)rd16(r7 + 6u);
        r8 = ((r8 << 2u) & 0xfffffffcu) - r8;
        if (r0 < (r10 + r8)) {
            wr16(param_4, 0xffffu);
            wr16(param_3, (u16)((u32)param_1 - 1u));
            return;
        }
        if (r0 >= (r9 - (u32)rd16(r7 + 0xau))) {
            wr16(param_4, 0xffffu);
            wr16(param_3, (u16)((u32)param_1 - 1u));
            return;
        }
        r0 = r0 - r8;
        r0 = r0 - r10;
        r0 = (r0 & 0xfffffffeu) + 1u;
        wr16(param_4, (u16)r0);
    } else {
        if (r10 == 1u) {
            r9 = (u32)rd16(r7 + 0x18u);
            if (r0 >= r9) {
                r0 = r0 - r9;
            }
            r4 = rd32(0x80571714u);
            r8 = (u32)rd8(r4);
            r10 = (u32)rd16(r4 + 4u);
            r8 = ((r8 << 2u) & 0xfffffffcu) - r8;
            if (r0 < (r10 + r8)) {
                wr16(param_4, 0xffffu);
                wr16(param_3, (u16)((u32)param_1 - 1u));
                return;
            }
            if (r0 >= (r9 - (u32)rd16(r7 + 8u))) {
                wr16(param_4, 0xffffu);
                wr16(param_3, (u16)((u32)param_1 - 1u));
                return;
            }
            r0 = r0 - r8;
            r0 = r0 - r10;
            r0 = r0 & 0xfffffffeu;
            wr16(param_4, (u16)r0);
        } else {
            if (r10 == 2u) {
                r9 = (u32)rd16(r7 + 0x18u);
                if (r0 < r9) {
                    r8 = (u32)rd8(r7);
                    r10 = (u32)rd16(r7 + 4u);
                    r8 = ((r8 << 2u) & 0xfffffffcu) - r8;
                    if (r0 < (r10 + r8)) {
                        wr16(param_4, 0xffffu);
                        wr16(param_3, (u16)((u32)param_1 - 1u));
                        return;
                    }
                    if (r0 >= (r9 - (u32)rd16(r7 + 8u))) {
                        wr16(param_4, 0xffffu);
                        wr16(param_3, (u16)((u32)param_1 - 1u));
                        return;
                    }
                    r0 = r0 - r8;
                    r0 = r0 - r10;
                    wr16(param_4, (u16)r0);
                } else {
                    r8 = (u32)rd8(r7);
                    r0 = r0 - r9;
                    r10 = (u32)rd16(r7 + 6u);
                    r8 = ((r8 << 2u) & 0xfffffffcu) - r8;
                    if (r0 < (r10 + r8)) {
                        wr16(param_4, 0xffffu);
                    } else {
                        if (r0 >= (r9 - (u32)rd16(r7 + 0xau))) {
                            wr16(param_4, 0xffffu);
                        } else {
                            r0 = r0 - r8;
                            r0 = r0 - r10;
                            r0 = r0 & 0xfffffffeu;
                            wr16(param_4, (u16)r0);
                        }
                    }
                }
            }
        }
    }
    wr16(param_3, (u16)((u32)param_1 - 1u));
    return;
}
