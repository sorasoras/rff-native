#include "tc_rt.h"

void fn_80038bc4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    r0 = rd32((u32)param_1 + 0x20u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    r5 = rd32((u32)param_1 + 0x28u);
    wr32((u32)param_1 + 0x20u, r0);
    if (r5 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r5;
    }
    wr32((u32)param_1 + 0x28u, r0);
    r5 = (u32)param_1;
    r6 = 0u;
    while ((s32)r6 < (s32)rd8((u32)param_1 + 0x19u)) {
        r0 = rd32(r5 + 0x38u);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r0;
        }
        wr32(r5 + 0x38u, r0);
        r5 = r5 + 0x10u;
        r6 = r6 + 1u;
    }
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32((u32)param_1 + 0x2cu, r0);
    r7 = 0u;
    r6 = 0u;
    while ((s32)r7 < (s32)rd16((u32)param_1 + 0x1cu)) {
        r5 = rd32((u32)param_1 + 0x2cu) + r6;
        r0 = rd32(r5 + 4u);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r0;
        }
        wr32(r5 + 4u, r0);
        r0 = rd32(r5 + 8u);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r0;
        }
        wr32(r5 + 8u, r0);
        r6 = r6 + 0x10u;
        r7 = r7 + 1u;
    }
    return;
}
