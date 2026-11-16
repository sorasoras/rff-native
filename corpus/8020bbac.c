#include "tc_rt.h"

u32 fn_8020bbac(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) != 0u) {
        if (param_2 >= 0) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8020bb90u, &a);
            if (param_2 < (s32)r3) {
                if (param_3 < 0 || param_3 >= 20) {
                    r3 = 0u;
                    return r3;
                }
                r3 = 1u;
                return r3;
            }
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}
