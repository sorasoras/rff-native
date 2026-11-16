#include "tc_rt.h"

u32 fn_8026d0b8(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_2;
    if ((u32)param_2 == 0u) {
        r30 = 1u;
    }
    r30 = (r30 + 3u) & 0xfffffffcu;
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    if (param_3 < 0) {
        r5 = rd32((u32)param_1 + 0x40u);
        r0 = 0xffffffffu - (u32)param_3;
        r29 = ~(r0 | r0) & (r5 - r30);
        if (r29 >= rd32((u32)param_1 + 0x3cu)) {
            r5 = r5 - r29;
            if ((rd32((u32)param_1 + 0x38u) & 1u) != 0u) {
                a.r[0] = r29;
                a.r[1] = 0u;
                a.r[2] = r5;
                (void)tc_call(0x8000443cu, &a);
            }
            wr32((u32)param_1 + 0x40u, r29);
        } else {
            r29 = 0u;
        }
    } else {
        r3 = rd32((u32)param_1 + 0x3cu);
        r0 = (u32)param_3 - 1u;
        r29 = ~(r0 | r0) & ((u32)param_3 + r3 - 1u);
        r30 = r30 + r29;
        if (r30 <= rd32((u32)param_1 + 0x40u)) {
            r5 = r30 - r3;
            if ((rd32((u32)param_1 + 0x38u) & 1u) != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = r5;
                (void)tc_call(0x8000443cu, &a);
            }
            wr32((u32)param_1 + 0x3cu, r30);
        } else {
            r29 = 0u;
        }
    }
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return r29;
}
