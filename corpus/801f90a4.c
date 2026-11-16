#include "tc_rt.h"

u32 fn_801f90a4(u32 param_1, f64 param_f1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    c0lt = (s32)r0 < 3;
    c0eq = r0 == 3u;
    if (c0lt) {
        a.r[0] = param_1;
        (void)tc_call(0x801f8dc8u, &a);
        r3 = 0u;
        wr32(param_1, 0u);
    } else {
        if (!c0lt) {
            if (c0eq) {
                a.f[0] = param_f1;
                a.r[0] = param_1;
                (void)tc_call(0x801f8fccu, &a);
                a.r[0] = param_1;
                (void)tc_call(0x801f8e1cu, &a);
                wr32(param_1, 5u);
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x801f8e2cu, &a);
                if (r3 == 0u) {
                    wr32(param_1, 0u);
                    a.r[0] = param_1;
                    (void)tc_call(0x801f8dc8u, &a);
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 1u;
    }
    return r3;
}
