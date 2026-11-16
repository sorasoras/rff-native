#include "tc_rt.h"

u32 fn_80276418(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_4 == 0u) {
        c0lt = param_3 < 2;
        if ((u32)param_3 == 2u) {
            r3 = 1u;
            return r3;
        }
        if (!c0lt) {
            if (param_3 < 4) {
                r3 = 1u;
                return r3;
            }
        } else if (param_3 >= 1) {
            r3 = 2u;
            return r3;
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = (u32)param_2 - 1u;
        (void)tc_call(0x8000443cu, &a);
        c0lt = param_3 < 2;
        if ((u32)param_3 == 2u) {
            wr8((u32)param_1 + (u32)param_2 - 1u, 0xdu);
            r3 = 1u;
            return r3;
        }
        if (!c0lt) {
            if (param_3 < 4) {
                wr8((u32)param_1 + (u32)param_2 - 1u, 0xau);
                r3 = 1u;
                return r3;
            }
        } else if (param_3 >= 1) {
            r3 = (u32)param_1 + (u32)param_2;
            wr8(r3 - 1u, 0xdu);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (u32)param_2 - 1u;
            (void)tc_call(0x8000443cu, &a);
            r3 = 2u;
            wr8((u32)param_1 + (((u32)param_2 << 1u) & 0xfffffffeu) - 1u, 0xau);
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
