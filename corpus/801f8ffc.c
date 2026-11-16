#include "tc_rt.h"

u32 fn_801f8ffc(u32 param_1, f64 param_f1, u32 param_r4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_r4;
        r3 = tc_call(0x801f8c9cu, &a);
        if (r3 == 0u) {
            r3 = 0u;
            wr32(param_1, 0u);
            return r3;
        }
        wr32(param_1, 1u);
    } else {
        c0eq = r0 == 3u;
        if ((s32)r0 < 3) {
            r3 = 1u;
            return r3;
        }
        if (c0eq) {
            a.f[0] = param_f1;
            a.r[0] = param_1;
            (void)tc_call(0x801f8fccu, &a);
            a.r[0] = param_1;
            (void)tc_call(0x801f8e10u, &a);
            wr32(param_1, 4u);
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x801f8e2cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                wr32(param_1, 3u);
                return r3;
            }
        }
    }
    r3 = 1u;
    return r3;
}
