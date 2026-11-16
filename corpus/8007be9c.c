#include "tc_rt.h"

void fn_8007be9c(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (((u32)rd16((u32)param_1 + 0x34u) & 4u) == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x80044ff8u, &a);
    } else {
        a.r[0] = 1u;
        (void)tc_call(0x80044ff8u, &a);
        if ((u32)rd8(0x805706fau) != 0u) {
            r3 = tc_call(0x800450f4u, &a);
            if (r3 != 0u) {
                r4 = rd32((u32)param_1 + 0x40u);
                if (r4 == 0u) {
                    r4 = rd32((u32)param_1 + 0x54u);
                } else {
                    r4 = rd32(r4 + 0x20u);
                    r4 = r4 + 0x40u;
                }
                r0 = rd32(r3);
                c0lt = (s32)r0 < 1;
                if (r0 != 1u) {
                    if (!c0lt) {
                        if ((s32)r0 < 3) {
                            a.r[0] = r4;
                            a.r[1] = param_2;
                            a.r[2] = r3;
                            r3 = tc_call(0x8007b504u, &a);
                            if (r3 == 0u) {
                                a.r[0] = 0u;
                                (void)tc_call(0x80044ff8u, &a);
                            }
                        }
                    } else if ((s32)r0 >= 0) {
                        a.r[0] = r4;
                        a.r[1] = param_2;
                        a.r[2] = r3;
                        r3 = tc_call(0x8007b204u, &a);
                        if (r3 == 0u) {
                            a.r[0] = 0u;
                            (void)tc_call(0x80044ff8u, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
