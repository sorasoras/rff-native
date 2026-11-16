#include "tc_rt.h"

s32 fn_8010eef4(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = 0u;
    if (param_2 >= 647 && param_2 <= 743) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r3 = 0xffffffffu;
    } else {
        a.r[0] = (u32)param_2;
        a.r[1] = param_1;
        r3 = tc_call(0x800ef65cu, &a);
        if (r3 == 0u) {
            r3 = 0x186a6u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x8010ee94u, &a);
            r31 = r3;
            if (r3 == 0u) {
                r3 = 0xffffffffu;
            } else {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x8010ee38u, &a);
                if (r3 == 0u) {
                    r3 = 0xffffffffu;
                } else {
                    a.r[0] = r3;
                    r3 = tc_call(0x8010edb0u, &a);
                    if ((s32)r3 < 0) {
                        r3 = 0xffffffffu;
                    } else {
                        if ((s32)r3 >= 6) {
                            r3 = 0xffffffffu;
                        } else {
                            r4 = (u32)(s8)rd8(r31 + r3 + 1u);
                            r3 = ((((0u - r4) | r4) >> 0x1fu) & 1u) + 0x186a4u;
                        }
                    }
                }
            }
        }
    }
    return (s32)r3;
}
