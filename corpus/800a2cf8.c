#include "tc_rt.h"

u32 fn_800a2cf8(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 2;
    if ((u32)param_2 != 2u) {
        if (!c0lt) {
            return 0u;
        }
        if (param_2 < 1) {
            return 0u;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x800a3570u, &a);
        return r3;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x800a3578u, &a);
    return r3;
}
