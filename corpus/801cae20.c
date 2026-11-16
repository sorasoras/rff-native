#include "tc_rt.h"

void fn_801cae20(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = param_3 < 1;
    r0 = 0xfu;
    if ((u32)param_3 == 1u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x801cb0a0u, &a);
        r0 = r3;
    } else if (!c0lt) {
        if (param_3 < 3) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x801cb2c0u, &a);
            r0 = r3;
        }
    } else if (param_3 >= 0) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x801cae9cu, &a);
        r0 = r3;
    }
    a.f[0] = (f64)rdf32(0x80575e60u);
    a.r[0] = 0x804b9db0u;
    a.r[1] = r0;
    (void)tc_call(0x8011f1e0u, &a);
    return;
}
