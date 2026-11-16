#include "tc_rt.h"

u32 fn_8023a600(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)(s8)rd8(param_1) != 0u && (u32)(s8)rd8(param_2) != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 4u;
        r3 = tc_call(0x8025bfccu, &a);
        if (r3 != 0u) {
            r3 = 0u;
            return r3;
        }
    }
    if ((u32)(s8)rd8(param_1 + 4u) != 0u && (u32)(s8)rd8(param_2 + 4u) != 0u) {
        a.r[0] = param_1 + 4u;
        a.r[1] = param_2 + 4u;
        a.r[2] = 2u;
        r3 = tc_call(0x8025bfccu, &a);
        if (r3 == 0u) {
            r3 = (u32)rd8(param_1 + 6u);
            if (r3 != 0xffu) {
                r0 = (u32)rd8(param_2 + 6u);
                if (r0 != 0xffu && r3 != r0) {
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = (u32)rd8(param_1 + 7u);
            if (r3 != 0xffu) {
                r0 = (u32)rd8(param_2 + 7u);
                if (r0 != 0xffu && r3 != r0) {
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
