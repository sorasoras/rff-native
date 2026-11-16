#include "tc_rt.h"

void fn_80298bec(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = param_1;
    if (param_1 >= 2u) {
        r27 = 0x80u;
    }
    if (param_3 != 0u) {
        r29 = 0u;
        r31 = (u32)rd8(param_3 + 8u) & 0xffffffefu;
        r30 = 0x8053d98cu;
        do {
            if ((u32)rd8(r30 + 0x119u) != 0u) {
                a.r[0] = r30 + 8u;
                a.r[1] = param_2;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 == 0u) break;
            }
            r29 = r29 + 1u;
            r30 = r30 + 0x11cu;
        } while (r29 < 4u);
        r30 = r29 & 0xffu;
        if (r30 != 4u) {
            r3 = r31 & 0xffu;
            r29 = (r30 * 0x22u) - 0x7fac21dcu;
            if (r3 != 0u) {
                r26 = r3 - 1u;
                r3 = tc_call(0x802966a4u, &a);
                if (((u32)rd8(r26 - 0x7fa88c84u) & (u32)rd8(r3 + (u32)rd8(r26 - 0x7fa88c88u))) == 0u) {
                    return;
                }
            }
            r3 = r31 & 0xffu;
            if (r3 == (u32)rd8(r29 + 0x20u)) {
                if (r3 == 0u) {
                    return;
                }
                r3 = (u32)rd16(r29 + 0x1eu);
                if ((u32)rd16(param_3) >= r3 && (u32)rd16(param_3 + 2u) <= r3) {
                    return;
                }
            }
            if (r27 != 0x80u && ((u32)rd8(((r27 << 3u) & 0x7f8u) - 0x7fac2150u) & 1u) != 0u) {
                r5 = r27 * 0xau;
                r3 = (u32)rd16(param_3 + 2u);
                wr16(r5 + r29, rd16(param_3));
                r5 = r5 + r29;
                wr16(r5 + 2u, (u16)r3);
                r3 = (u32)rd16(param_3 + 6u);
                wr16(r5 + 4u, rd16(param_3 + 4u));
                wr16(r5 + 6u, (u16)r3);
                wr16(r5 + 8u, rd16(param_3 + 8u));
                wr8(r29 + 0x21u, 1u);
            }
            r0 = (u32)rd8(r29 + 0x20u);
            if (r0 != 1u && r0 != 4u && (u32)rd8(0x8053debcu) == 4u) {
                a.r[0] = r27;
                a.r[1] = r30;
                a.r[2] = param_3;
                (void)tc_call(0x802992b8u, &a);
            }
        }
    }
    return;
}
