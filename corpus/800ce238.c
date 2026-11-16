#include "tc_rt.h"

s32 fn_800ce238(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r27 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = (u32)param_1;
    r3 = tc_call(0x800ce3d8u, &a);
    r3 = r3 & 0xffffu;
    if ((u32)rd16(param_2) != r3) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800ce3d8u, &a);
        a.r[0] = param_2 + 2u;
        a.r[1] = r3 & 0xffffu;
        r3 = tc_call(0x8025e8c0u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r4 = param_2 + 2u;
            r5 = r3 - r4;
            r31 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
            a.r[0] = param_3;
            a.r[1] = r4;
            a.r[2] = r31;
            r3 = tc_call(0x800ce11cu, &a);
            if (r3 != 0u) {
                r3 = r31 + 2u;
            } else {
                r30 = 0u;
                do {
                    a.r[0] = r27;
                    r3 = tc_call(0x8025e7a4u, &a);
                    if (r3 == r31) {
                        a.r[0] = param_2 + 2u;
                        a.r[1] = r27;
                        a.r[2] = r31;
                        r3 = tc_call(0x8025e880u, &a);
                        if (r3 == 0u) {
                            r3 = r31 + 2u;
                            wr32(param_3, r27 + 0x10u);
                            return (s32)r3;
                        }
                    }
                    r30 = r30 + 1u;
                    r27 = r27 + 0x38u;
                } while ((s32)r30 < 8);
                r3 = 0u;
                wr32(param_3, 0u);
            }
        }
    }
    return (s32)r3;
}
