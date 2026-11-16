#include "tc_rt.h"

u32 fn_80228e08(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r4 = param_2;
    if (param_2 != 0u) {
        r9 = param_1;
        while ((u32)(s8)rd8(r4) != 0u || (u32)(s8)rd8(r4 + 1u) != 0u) {
            r10 = 0u;
            ctr = 2u;
            do {
                r8 = r10 & 1u;
                r7 = 0xf0u;
                if (r8 != 0u) {
                    r7 = 0xfu;
                }
                r6 = (u32)(s8)rd8(r4) & r7;
                r3 = ~(u32)((s32)((0u - r8) | r8) >> 31) & 4u;
                r3 = ((r3 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r3 & 0x1fu));
                if ((s32)r3 >= 0 && (s32)r3 < 10) {
                    r3 = r3 + 0x30u;
                    wr8(r9, (u8)r3);
                } else {
                    if ((s32)r3 >= 10 && (s32)r3 < 16) {
                        r3 = r3 + 0x57u;
                        wr8(r9, (u8)r3);
                    } else {
                        return 0u;
                    }
                }
                if (r8 != 0u) {
                    r4 = r4 + 1u;
                }
                r10 = r10 + 1u;
                r7 = 0xf0u;
                r8 = r10 & 1u;
                if (r8 != 0u) {
                    r7 = 0xfu;
                }
                r6 = (u32)(s8)rd8(r4) & r7;
                r3 = ~(u32)((s32)((0u - r8) | r8) >> 31) & 4u;
                r3 = ((r3 & 0x20u) != 0u) ? (u32)((s32)r6 >> 31) : (u32)((s32)r6 >> (s32)(r3 & 0x1fu));
                if ((s32)r3 >= 0 && (s32)r3 < 10) {
                    r3 = r3 + 0x30u;
                    wr8(r9 + 1u, (u8)r3);
                } else {
                    if ((s32)r3 >= 10 && (s32)r3 < 16) {
                        r3 = r3 + 0x57u;
                        wr8(r9 + 1u, (u8)r3);
                    } else {
                        return 0u;
                    }
                }
                r9 = r9 + 2u;
                if (r8 != 0u) {
                    r4 = r4 + 1u;
                }
                r10 = r10 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        wr8(r9, 0u);
        return 1u;
    }
    return 0u;
}
