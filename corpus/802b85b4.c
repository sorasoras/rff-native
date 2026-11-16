#include "tc_rt.h"

void fn_802b85b4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    if (rd32(param_1 + 4u) != 0u || rd32(param_1 + 8u) != 0u) {
        r6 = (u32)rd16(param_1 + 0x4d0u);
        c0eq = rd32(param_1 + 4u) == 0u;
        wr16(param_1 + 0x4ccu, 0u);
        wr16(param_1 + 0x4ceu, (u16)r6);
        if (!c0eq && (u32)rd16(param_1 + 0x4d2u) != 0u) {
            wr32(param_1, rd32(param_1) | 0x80000000u);
        }
    } else if (rd32(param_1) != 0u) {
        r0 = (u32)rd16(param_1 + 0x4ccu) + (u32)param_3;
        r6 = r0 & 0xffffu;
        wr16(param_1 + 0x4ccu, (u16)r0);
        if (r6 >= 0x9c40u) {
            r6 = r6 - 0x10000u;
            wr16(param_1 + 0x4ccu, (u16)(r6 + 0x63c0u));
        }
        r8 = (u32)rd16(param_1 + 0x4ccu);
        r7 = (u32)rd16(param_1 + 0x4ceu);
        if (r8 >= r7) {
            r0 = r7 + (u32)rd16(param_1 + 0x4d2u);
            wr32(param_1, rd32(param_1) | 0x80000000u);
            wr16(param_1 + 0x4ceu, (u16)r0);
            if (r8 >= 0x4e20u) {
                r0 = (r0 & 0xffffu) - 0x4e20u;
                wr16(param_1 + 0x4ccu, (u16)(r8 - 0x4e20u));
                wr16(param_1 + 0x4ceu, (u16)r0);
            }
        }
    }
    if ((u32)param_2 != 2u) {
        return;
    }
    if (rd32(param_1 + 0x64u) != 0u || rd32(param_1 + 0x68u) != 0u) {
        r4 = (u32)rd16(param_1 + 0x4d0u);
        c0eq = rd32(param_1 + 0x64u) == 0u;
        wr16(param_1 + 0x4d4u, 0u);
        wr16(param_1 + 0x4d6u, (u16)r4);
        if (c0eq) {
            return;
        }
        if ((u32)rd16(param_1 + 0x4d2u) == 0u) {
            return;
        }
        wr32(param_1 + 0x60u, rd32(param_1 + 0x60u) | 0x80000000u);
        return;
    }
    if (rd32(param_1 + 0x60u) == 0u) {
        return;
    }
    r0 = (u32)rd16(param_1 + 0x4d4u) + (u32)param_3;
    r4 = r0 & 0xffffu;
    wr16(param_1 + 0x4d4u, (u16)r0);
    if (r4 >= 0x9c40u) {
        r4 = r4 - 0x10000u;
        wr16(param_1 + 0x4d4u, (u16)(r4 + 0x63c0u));
    }
    r6 = (u32)rd16(param_1 + 0x4d4u);
    r5 = (u32)rd16(param_1 + 0x4d6u);
    if (r6 < r5) {
        return;
    }
    r0 = r5 + (u32)rd16(param_1 + 0x4d2u);
    wr32(param_1 + 0x60u, rd32(param_1 + 0x60u) | 0x80000000u);
    wr16(param_1 + 0x4d6u, (u16)r0);
    if (r6 < 0x4e20u) {
        return;
    }
    r0 = (r0 & 0xffffu) - 0x4e20u;
    wr16(param_1 + 0x4d4u, (u16)(r6 - 0x4e20u));
    wr16(param_1 + 0x4d6u, (u16)r0);
    return;
}
