#include "tc_rt.h"

void fn_8026c81c(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = rd32(param_2 + 8u);
    r30 = (u32)param_4 + (u32)param_3;
    r29 = (u32)param_3 - 0x10u;
    r10 = rd32(param_2 + 0xcu);
    r31 = r29;
    r5 = param_2 - (((u32)rd16(param_2 + 2u) >> 8u) & 0x7fu);
    r6 = param_2 + rd32(param_2 + 4u) + 0x10u;
    if (r8 != 0u) {
        wr32(r8 + 0xcu, r10);
    } else {
        wr32(param_1, r10);
    }
    if (r10 != 0u) {
        wr32(r10 + 8u, r8);
    } else {
        wr32(param_1 + 4u, r8);
    }
    if ((r29 - r5) < 0x14u) {
        r31 = r5;
    } else {
        wr16(r5, 0x4652u);
        wr16(r5 + 2u, 0u);
        wr32(r5 + 4u, r29 - (r5 + 0x10u));
        wr32(r5 + 0xcu, 0u);
        wr32(r5 + 8u, r8);
        if (r8 != 0u) {
            r4 = rd32(r8 + 0xcu);
            wr32(r8 + 0xcu, r5);
        } else {
            r4 = rd32(param_1);
            wr32(param_1, r5);
        }
        wr32(r5 + 0xcu, r4);
        if (r4 != 0u) {
            wr32(r4 + 8u, r5);
        } else {
            wr32(param_1 + 4u, r5);
        }
        r8 = r5;
    }
    if ((r6 - r30) < 0x14u) {
        r30 = r6;
    } else {
        wr16(r30, 0x4652u);
        wr16(r30 + 2u, 0u);
        wr32(r30 + 4u, r6 - (r30 + 0x10u));
        wr32(r30 + 0xcu, 0u);
        wr32(r30 + 8u, r8);
        if (r8 != 0u) {
            r4 = rd32(r8 + 0xcu);
            wr32(r8 + 0xcu, r30);
        } else {
            r4 = rd32(param_1);
            wr32(param_1, r30);
        }
        wr32(r30 + 0xcu, r4);
        if (r4 != 0u) {
            wr32(r4 + 8u, r30);
        } else {
            wr32(param_1 + 4u, r30);
        }
    }
    r5 = r30 - r31;
    if ((rd32(param_1 - 4u) & 1u) != 0u) {
        a.r[0] = r31;
        a.r[1] = 0u;
        a.r[2] = r5;
        (void)tc_call(0x8000443cu, &a);
    }
    wr16(r29, 0x5544u);
    r3 = (((u32)param_5 << 0xfu) & 0x8000u) | (((r29 - r31) << 8u) & 0x7f00u);
    wr32(r29 + 4u, r30 - (r29 + 0x10u));
    wr32(r29 + 8u, 0u);
    wr32(r29 + 0xcu, 0u);
    wr16(r29 + 2u, (u16)r3);
    r3 = (r3 & 0xffffff00u) | ((u32)rd16(param_1 + 0x10u) & 0xffu);
    wr16(r29 + 2u, (u16)r3);
    r4 = rd32(param_1 + 0xcu);
    wr32(r29 + 8u, r4);
    if (r4 != 0u) {
        r3 = rd32(r4 + 0xcu);
        wr32(r4 + 0xcu, r29);
    } else {
        r3 = rd32(param_1 + 8u);
        wr32(param_1 + 8u, r29);
    }
    wr32(r29 + 0xcu, r3);
    if (r3 != 0u) {
        wr32(r3 + 8u, r29);
    } else {
        wr32(param_1 + 0xcu, r29);
    }
    return;
}
