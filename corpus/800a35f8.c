#include "tc_rt.h"

u32 fn_800a35f8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x3338u) != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a2d38u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x8009b9e4u, &a);
        if ((u32)(s8)r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a3570u, &a);
            r31 = r3;
            if (r3 != 0xffffffffu) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800a2d38u, &a);
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = r31;
                r3 = tc_call(0x8009b9e4u, &a);
                if ((u32)(s8)r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a3578u, &a);
            r31 = r3;
            if (r3 != 0xffffffffu) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800a2d38u, &a);
                a.r[0] = r3;
                a.r[1] = 2u;
                a.r[2] = r31;
                r3 = tc_call(0x8009b9e4u, &a);
                if ((u32)(s8)r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = 1u;
        }
    }
    return r3;
}
