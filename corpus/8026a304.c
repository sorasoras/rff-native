#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r5 = 0, r6 = 0, r27 = 0, r30 = 0, t0 = 0;
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    t0 = r1 + 8u;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    r27 = (u32)param_2 + param_1 - 1u;
    r5 = 0x700u;
    if (r27 >= param_1) {
        if (param_1 <= rd32(0x8033db04u) && r27 >= rd32(0x8033db00u)) {
            if (((u32)param_3 != 0u || rd32(0x8033db08u) != 0u) && ((u32)param_3 != 1u || rd32(0x8033db0cu) != 0u)) {
                r5 = 0u;
                r0 = rd32(0x8033db00u);
                if (param_1 < r0) {
                    r0 = r0 - param_1;
                    r6 = 0x700u;
                    r30 = r0 + param_1 - 1u;
                    if (r30 >= param_1 && (param_1 <= rd32(0x8033db04u) && r30 >= rd32(0x8033db00u))) {
                        if (((u32)param_3 != 0u || rd32(0x8033db08u) != 0u) && ((u32)param_3 != 1u || rd32(0x8033db0cu) != 0u)) {
                            r6 = 0u;
                            r0 = rd32(0x8033db00u);
                            if (param_1 < r0) {
                                r3 = px_rec(r1, param_1, r0 - param_1, (u32)param_3);
                                r6 = r3;
                            }
                            if (r6 == 0u) {
                                r3 = rd32(0x8033db04u);
                                if (r30 > r3) {
                                    r3 = px_rec(r1, r3, r30 - r3, (u32)param_3);
                                    r6 = r3;
                                }
                            }
                        } else {
                            r6 = 0x700u;
                        }
                    }
                    r5 = r6;
                }
                if (r5 == 0u) {
                    r3 = rd32(0x8033db04u);
                    if (r27 > r3) {
                        r6 = 0x700u;
                        r30 = r27 - r3 + r3 - 1u;
                        if (r30 >= r3 && (r3 <= rd32(0x8033db04u) && r30 >= rd32(0x8033db00u))) {
                            if (((u32)param_3 != 0u || rd32(0x8033db08u) != 0u) && ((u32)param_3 != 1u || rd32(0x8033db0cu) != 0u)) {
                                r6 = 0u;
                                r0 = rd32(0x8033db00u);
                                if (r3 < r0) {
                                    r3 = px_rec(r1, r3, r0 - r3, (u32)param_3);
                                    r6 = r3;
                                }
                                if (r6 == 0u) {
                                    r3 = rd32(0x8033db04u);
                                    if (r30 > r3) {
                                        r3 = px_rec(r1, r3, r30 - r3, (u32)param_3);
                                        r6 = r3;
                                    }
                                }
                            } else {
                                r6 = 0x700u;
                            }
                        }
                        r5 = r6;
                    }
                }
            } else {
                r5 = 0x700u;
            }
        }
        r3 = r5;
    } else {
        r3 = 0x700u;
    }
    return r3;
}

s32 fn_8026a304(u32 param_1, s32 param_2, s32 param_3)
{
    return (s32)px_rec(0x817fe000u, param_1, param_2, param_3);
}
