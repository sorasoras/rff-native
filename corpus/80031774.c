#include "tc_rt.h"

u32 fn_80031774(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (((u32)rd16((u32)param_1 + 0x34u) & 0x3010u) != 0x3010u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800450e8u, &a);
        if (r3 != 0u) {
            if (((u32)rd16((u32)param_1 + 0x34u) & 2u) != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
