#include "tc_rt.h"

u32 fn_8022fa78(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (((u32)rd16((u32)param_1 + 0x2cau) & 1u) == 0u && (u32)rd16((u32)param_1 + 0x2c8u) != 8u && rd32((u32)param_1 + 0x2e8u) == 0u) {
        a.r[0] = (u32)param_1 + 0x2e8u;
        (void)tc_call(0x8022ffe4u, &a);
        if ((u32)rd16((u32)param_1 + 0x2c8u) != 0u) {
            r3 = rd32(0x800000dcu);
            for (;;) {
                if (r3 == 0u) {
                    r0 = 0u;
                    break;
                }
                if ((u32)param_1 == r3) {
                    r0 = 1u;
                    break;
                }
                r3 = rd32(r3 + 0x2fcu);
            }
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        }
    }
    if ((u32)rd16((u32)param_1 + 0x2c8u) != 8u) {
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        if (param_2 != 0u) {
            wr32(param_2, rd32((u32)param_1 + 0x2d8u));
        }
        r4 = rd32((u32)param_1 + 0x2fcu);
        r5 = rd32((u32)param_1 + 0x300u);
        if (r4 != 0u) {
            wr32(r4 + 0x300u, r5);
        } else {
            wr32(0x800000e0u, r5);
        }
        if (r5 != 0u) {
            wr32(r5 + 0x2fcu, r4);
        } else {
            wr32(0x800000dcu, r4);
        }
        wr16((u32)param_1 + 0x2c8u, 0u);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
