#include "tc_rt.h"

void fn_8010ecd8(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r10 = 0;
    r3 = param_1;
    r10 = 0u;
    r8 = rd32(0x8033948cu);
    r7 = rd32(0x80339490u);
    r0 = rd32(0x80339494u);
    if ((u32)param_2 == rd32(0x80339488u)) {
        r10 = 1u;
    } else {
        if ((u32)param_2 == r8) {
            r10 = 1u;
        } else {
            if ((u32)param_2 == r7) {
                r10 = 1u;
            } else {
                if ((u32)param_2 == r0) {
                    r10 = 1u;
                }
            }
        }
    }
    r4 = (u32)param_3 + ((r10 << 2u) & 0xfffffffcu);
    ctr = (u32)param_4;
    if (param_4 > 0) {
        do {
            if (rd32(r3 + 4u) != 0u) {
                wr32(r4, rd32(r3));
            }
            r3 = r3 + 8u;
            r4 = r4 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
