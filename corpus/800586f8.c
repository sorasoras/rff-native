#include "tc_rt.h"

u32 fn_800586f8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 183) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        r3 = tc_call(0x8007d13cu, &a);
        r31 = (u32)rd16(r3);
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        r3 = tc_call(0x8007d13cu, &a);
        r30 = (u32)rd16(r3 + 2u);
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = param_3;
        r3 = tc_call(0x80057fd8u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = param_3;
            r3 = tc_call(0x80058314u, &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = r31;
                a.r[2] = 1u;
                (void)tc_call(0x80057d6cu, &a);
                r3 = 0u;
            } else {
                r3 = 1u;
            }
        }
    }
    return r3;
}
