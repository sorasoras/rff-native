#include "tc_rt.h"

u32 fn_802d7cac(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = 0u;
    if (rd32(param_1 + 0x10u) == 0u) {
        if ((rd32(param_2) - 0x52460000u) != 0x4e55u) {
            if ((u32)rd16(param_2 + 6u) != 0x104u) {
                a.r[0] = param_2;
                a.r[1] = 0x52464e54u;
                a.r[2] = 0x102u;
                a.r[3] = 2u;
                r3 = tc_call(0x802d5ca4u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            } else {
                a.r[0] = param_2;
                a.r[1] = 0x52464e54u;
                a.r[2] = 0x104u;
                a.r[3] = 2u;
                r3 = tc_call(0x802d5ca4u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
            a.r[0] = param_2;
            r3 = tc_call(0x802d7df0u, &a);
            r5 = r3;
        } else {
            r3 = (u32)rd16(param_2 + 0xeu);
            r4 = param_2 + (u32)rd16(param_2 + 0xcu);
            ctr = r3;
            if ((s32)r3 > 0) {
                do {
                    if ((rd32(r4) - 0x46490000u) == 0x4e46u) {
                        r5 = r4 + 8u;
                        break;
                    }
                    r4 = r4 + rd32(r4 + 4u);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        if (r5 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            f1 = tc_callf(0x802d7fa0u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x54u), &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            (void)tc_call(0x802d7918u, &a);
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
