#include "tc_rt.h"

u32 fn_80275428(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    r4 = param_2;
    r11 = 0x73b5dbfau;
    r9 = 0u;
    r12 = 0u;
    r6 = 0u;
    r10 = 0u;
    ctr = 0x80u;
    do {
        r8 = (u32)rd8(r10 - 0x7fffc800u);
        if (r8 != 0u) {
            r7 = (u32)rd8((u32)param_1 + r12);
            r8 = (r8 ^ r11) & 0xffu;
            if ((u32)(s8)r7 == 0u && r8 == 0x3du) {
                r9 = 1u;
                break;
            }
            r7 = (u32)(s8)r7;
            r7 = r8 ^ r7;
            r7 = r7 & 0xdfu;
            r7 = ppc_cntlzw(r7);
            r7 = (r7 >> 5u) & 1u;
            r7 = 0u - r7;
            r12 = (r12 + 1u) & r7;
        }
        r10 = r10 + 1u;
        r8 = (u32)rd8(r10 - 0x7fffc800u);
        r11 = ((r11 >> 0x1fu) & 1u) | ((r11 << 1u) & 0xfffffffeu);
        if (r8 != 0u) {
            r7 = (u32)rd8((u32)param_1 + r12);
            r8 = (r8 ^ r11) & 0xffu;
            if ((u32)(s8)r7 == 0u && r8 == 0x3du) {
                r9 = 1u;
                break;
            }
            r7 = (u32)(s8)r7;
            r7 = r8 ^ r7;
            r7 = r7 & 0xdfu;
            r7 = ppc_cntlzw(r7);
            r7 = (r7 >> 5u) & 1u;
            r7 = 0u - r7;
            r12 = (r12 + 1u) & r7;
        }
        r11 = ((r11 >> 0x1fu) & 1u) | ((r11 << 1u) & 0xfffffffeu);
        r10 = r10 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (r9 != 0u) {
        r10 = r10 + 1u;
        for (;;) {
            if (r10 >= 0x100u || r6 >= param_3) {
                return 0u;
            }
            r3 = (u32)rd8(r10 - 0x7fffc800u);
            r11 = ((r11 >> 0x1fu) & 1u) | ((r11 << 1u) & 0xfffffffeu);
            if (r3 != 0u) {
                r3 = (r3 ^ r11) & 0xffu;
                if (r3 == 0xdu || r3 == 0xau) {
                    r3 = 0u;
                }
            }
            wr8(r4, (u8)r3);
            r6 = r6 + 1u;
            r4 = r4 + 1u;
            if (r3 == 0u) break;
            r10 = r10 + 1u;
        }
        return 1u;
    }
    return 0u;
}
