#include "tc_rt.h"

s32 fn_800844b4(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r12 = 0, r31 = 0;
    r5 = 0u;
    r31 = 0u;
    if (param_2 != 0u) {
        r6 = param_2 - 8u;
        if (param_2 > 8u) {
            ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
            if (r6 > 0u) {
                do {
                    r31 = r31 * 0xau;
                    r12 = (u32)param_1 + r5;
                    r31 = (u32)(s8)rd8((u32)param_1 + r5) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r5 = r5 + 8u;
                    r31 = (u32)(s8)rd8(r12 + 1u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 2u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 3u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 4u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 5u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 6u) + r31 - 0x30u;
                    r31 = r31 * 0xau;
                    r31 = (u32)(s8)rd8(r12 + 7u) + r31 - 0x30u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r3 = (u32)param_1 + r5;
        ctr = param_2 - r5;
        if (r5 < param_2) {
            do {
                r0 = (u32)rd8(r3);
                r31 = r31 * 0xau;
                r3 = r3 + 1u;
                r0 = (u32)(s8)r0;
                r31 = r0 + r31 - 0x30u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return (s32)r31;
}
