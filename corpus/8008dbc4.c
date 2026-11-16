#include "tc_rt.h"

s32 fn_8008dbc4(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 2;
    r0 = 0xffffffffu;
    if ((u32)param_1 == 2u) {
        if ((u32)param_3 != 0u) {
            r0 = (u32)param_3 + ((param_2 << 2u) & 0x3fcu) + 0x48u;
        } else {
            r0 = 0u;
        }
    } else if (!c0lt) {
        if (param_1 < 4) {
            r3 = tc_call(0x80081034u, &a);
            if ((r3 & 0xffu) == 3u) {
                a.r[0] = rd32(0x805706e8u);
                r3 = tc_call(0x8007d150u, &a);
                if (rd32(r3 + 4u) == 0u) {
                    if (param_2 == 0x10u || param_2 == 0x11u) {
                        r0 = param_2 + 0x95u;
                        return (s32)r0;
                    }
                    r0 = param_2 + 0xa7u;
                    return (s32)r0;
                }
            }
            r0 = param_2 + 0x95u;
        }
    } else {
        c0lt = param_1 < 0;
        if ((u32)param_1 != 0u && !c0lt) {
            if ((u32)param_3 != 0u) {
                r0 = (u32)param_3 + ((param_2 << 2u) & 0x3fcu);
            } else {
                r0 = 0u;
            }
        }
    }
    return (s32)r0;
}
