#include "tc_rt.h"

s32 fn_8008cb28(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r4 = param_2;
    r5 = (u32)param_3;
    while ((u32)rd8(param_1 + 0xbu) != 0u) {
        r0 = (u32)rd8(param_1 + 0xbu) - 1u;
        r7 = r0 & 0xffu;
        wr8(param_1 + 0xbu, (u8)r0);
        if (r7 <= 3u) {
            r0 = ((3u - r7) << 3u) & 0xfffffff8u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : ((u32)rd8(r4) << (r0 & 0x1fu));
            r0 = rd32(param_1 + 4u) | r0;
            wr32(param_1 + 4u, r0);
        } else {
            if (r7 <= 6u) {
                r0 = ((6u - r7) << 3u) & 0xfffffff8u;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : ((u32)rd8(r4) << (r0 & 0x1fu));
                r0 = rd32(param_1 + 4u) | r0;
                wr32(param_1 + 4u, r0);
            }
        }
        r4 = r4 + 1u;
        if ((u32)rd8(param_1 + 0xbu) == 4u && (s32)rd32(param_1 + 4u) > 0) {
            wr8(param_1 + 0xbu, 0u);
        }
        r5 = r5 - 1u;
        if (r5 == 0u) {
            if ((u32)rd8(param_1 + 0xbu) == 0u) {
                return (s32)rd32(param_1 + 4u);
            }
            return -1;
        }
    }
    for (;;) {
        r0 = rd32(param_1 + 4u);
        if ((s32)r0 <= 0) break;
        if (((u32)rd8(param_1 + 0xau) & 0x80u) == 0u) {
            while ((u32)rd16(param_1 + 8u) != 0u) {
                r0 = (u32)rd8(r4);
                r5 = r5 - 1u;
                r6 = rd32(param_1);
                r4 = r4 + 1u;
                wr8(r6, (u8)r0);
                r0 = r6 + 1u;
                r6 = rd32(param_1 + 4u);
                r7 = (u32)rd16(param_1 + 8u) - 1u;
                wr32(param_1, r0);
                r0 = r6 - 1u;
                wr16(param_1 + 8u, (u16)r7);
                wr32(param_1 + 4u, r0);
                if (r5 == 0u) {
                    return (s32)r0;
                }
            }
        } else {
            if ((u32)rd16(param_1 + 8u) != 0u) {
                r8 = (u32)rd8(r4);
                r5 = r5 - 1u;
                r4 = r4 + 1u;
                while ((u32)rd16(param_1 + 8u) != 0u) {
                    r6 = rd32(param_1);
                    wr8(r6, (u8)r8);
                    r0 = r6 + 1u;
                    r6 = rd32(param_1 + 4u);
                    r7 = (u32)rd16(param_1 + 8u) - 1u;
                    wr32(param_1, r0);
                    wr16(param_1 + 8u, (u16)r7);
                    wr32(param_1 + 4u, r6 - 1u);
                }
                if (r5 == 0u) {
                    return (s32)rd32(param_1 + 4u);
                }
            }
        }
        r7 = (u32)rd8(r4);
        r4 = r4 + 1u;
        r5 = r5 - 1u;
        r6 = r7 & 0x7fu;
        wr8(param_1 + 0xau, (u8)r7);
        wr16(param_1 + 8u, (u16)r6);
        if ((r7 & 0x80u) != 0u) {
            wr16(param_1 + 8u, (u16)(r6 + 3u));
        } else {
            wr16(param_1 + 8u, (u16)(r6 + 1u));
        }
        if (r5 == 0u) {
            return (s32)rd32(param_1 + 4u);
        }
    }
    return (s32)r0;
}
