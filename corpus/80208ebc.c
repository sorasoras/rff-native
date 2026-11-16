#include "tc_rt.h"

u32 fn_80208ebc(u32 param_1, s32 param_2, u32 param_r6, u32 param_r5)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = (u32)rd16(0x80499214u);
    if (r3 != 0x2e8u) {
        c0lt = param_2 < 2;
        if ((u32)param_2 == 2u) {
            a.r[0] = r3;
            a.r[1] = 0x2eu;
            a.r[2] = param_r5;
            a.r[3] = param_r6;
            r3 = tc_call(0x80207d34u, &a);
            return r3;
        }
        if (!c0lt) {
            c0lt = param_2 < 4;
            if ((u32)param_2 == 4u) {
                a.r[0] = r3;
                a.r[1] = 0x30u;
                a.r[2] = param_r5;
                a.r[3] = param_r6;
                r3 = tc_call(0x80207d34u, &a);
                return r3;
            }
            if (c0lt) {
                a.r[0] = r3;
                a.r[1] = 0x2fu;
                a.r[2] = param_r5;
                a.r[3] = param_r6;
                r3 = tc_call(0x80207d34u, &a);
                return r3;
            }
        } else {
            c0lt = param_2 < 0;
            if ((u32)param_2 == 0u) {
                a.r[0] = r3;
                a.r[1] = 0x2cu;
                a.r[2] = param_r5;
                a.r[3] = param_r6;
                r3 = tc_call(0x80207d34u, &a);
                return r3;
            }
            if (!c0lt) {
                a.r[0] = r3;
                a.r[1] = 0x2du;
                a.r[2] = param_r5;
                a.r[3] = param_r6;
                r3 = tc_call(0x80207d34u, &a);
                return r3;
            }
        }
    }
    return 0u;
}
