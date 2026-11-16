#include "tc_rt.h"

u32 fn_80302798(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 != 0u) {
        r3 = rd32(param_2);
        if (r3 < rd32(param_2 + 4u)) {
            r31 = param_2 + (r3 * 0x14u) + 8u;
            a.r[0] = (u32)param_3;
            r3 = tc_call(0x802550d4u, &a);
            while (((u32)rd16(r31) & 1u) == 0u) {
                r0 = (u32)rd16(r31 + 2u);
                r4 = (u32)((s32)r0 >> 3);
                r6 = r0 & 7u;
                if ((s32)r4 >= (s32)r3) {
                    r0 = rd32(r31 + 4u);
                } else {
                    r0 = (u32)rd8((u32)param_3 + r4);
                    r4 = 7u - r6;
                    r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
                    r0 = (u32)(s8)r0;
                    r0 = r4 & r0;
                    if (r0 == 0u) {
                        r0 = rd32(r31 + 4u);
                    } else {
                        r0 = rd32(r31 + 8u);
                    }
                }
                r0 = r0 * 0x14u;
                r31 = param_2 + r0 + 8u;
            }
            r3 = rd32(r31 + 0xcu);
            if ((r3 + 0x10000u) != 0xffffu) {
                r5 = rd32((u32)param_1 + 0x30u);
                if (r5 != 0u) {
                    r4 = rd32((u32)param_1 + 0x2cu);
                    r3 = r5 + ((r3 << 2u) & 0xfffffffcu);
                    r0 = rd32(r3 + 4u);
                    if (r0 != 0u) {
                        r4 = r0 + r4;
                    } else {
                        r4 = 0u;
                    }
                } else {
                    r4 = 0u;
                }
            } else {
                r4 = 0u;
            }
            a.r[0] = (u32)param_3;
            a.r[1] = r4;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 != 0u) {
                r3 = 0xffffffffu;
            } else {
                r3 = rd32(r31 + 0x10u);
            }
        } else {
            r3 = 0xffffffffu;
        }
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
