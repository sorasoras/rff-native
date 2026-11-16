#include "tc_rt.h"

void fn_802cf688(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0;
    if ((s32)param_2 >= 16) {
        if ((s32)param_2 >= 32) {
            return;
        }
        r7 = param_3 & ~(u32)((s32)param_3 >> 31);
        r5 = 0xffu;
        r6 = ((param_2 - 0x10u) >> 2u) & 0x3fffffffu;
        if ((s32)(s16)r7 <= 255) {
            r5 = r7;
        }
        r4 = r5 & 0xffu;
        r0 = (param_2 - 0x10u) & 3u;
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            wr8((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x3eu, (u8)r4);
            return;
        }
        if (!c0lt) {
            if ((s32)r0 >= 4) {
                return;
            }
            wr8((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x3fu, (u8)r4);
            return;
        }
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr8((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x3cu, (u8)r4);
            return;
        }
        if (!c0lt) {
            wr8((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x3du, (u8)r4);
            return;
        }
        return;
    }
    if ((s32)param_2 >= 4) {
        r4 = param_2 - 4u;
        r0 = r4 & 3u;
        c0lt = (s32)r0 < 2;
        r4 = (r4 >> 2u) & 0x3fffffffu;
        if (r0 == 2u) {
            wr16((u32)param_1 + ((r4 << 3u) & 0xfffffff8u) + 0x28u, (u16)param_3);
            return;
        }
        if (!c0lt) {
            if ((s32)r0 >= 4) {
                return;
            }
            wr16((u32)param_1 + ((r4 << 3u) & 0xfffffff8u) + 0x2au, (u16)param_3);
            return;
        }
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr16((u32)param_1 + ((r4 << 3u) & 0xfffffff8u) + 0x24u, (u16)param_3);
            return;
        }
        if (!c0lt) {
            wr16((u32)param_1 + ((r4 << 3u) & 0xfffffff8u) + 0x26u, (u16)param_3);
            return;
        }
        return;
    }
    if ((s32)param_2 >= 0) {
        if (((rd32((u32)param_1 + 0x50u) >> 7u) & 1u) < 1u) {
            return;
        }
        r7 = rd32((u32)param_1 + 0x4cu);
        r9 = param_3 & ~(u32)((s32)param_3 >> 31);
        r6 = (r7 >> 0x12u) & 0x3cu;
        r3 = ((r7 >> 0x18u) & 0xfu) * 0x14u;
        r5 = (r7 >> 0x17u) & 0x1e0u;
        r7 = (r7 >> 6u) & 4u;
        r6 = r6 + r5;
        r5 = r7 + r3;
        r3 = 0xffu;
        r5 = r5 + (rd32((u32)param_1 + 0x58u) + r6);
        if ((s32)(s16)r9 <= 255) {
            r3 = r9;
        }
        r0 = param_2 & 3u;
        r3 = r3 & 0xffu;
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            wr8(r5 + 2u, (u8)r3);
            return;
        }
        if (!c0lt) {
            if ((s32)r0 >= 4) {
                return;
            }
            wr8(r5 + 3u, (u8)r3);
            return;
        }
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr8(r5, (u8)r3);
            return;
        }
        if (!c0lt) {
            wr8(r5 + 1u, (u8)r3);
            return;
        }
        return;
    }
    return;
}
