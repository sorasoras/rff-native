#include "tc_rt.h"

u32 fn_8011de94(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x804bc3b0u;
    r30 = 0u;
    do {
        a.r[0] = r31 + 0x9a8u;
        r3 = tc_call(0x800a63f8u, &a);
        if (r3 != 0u) break;
        r30 = r30 + 1u;
        r31 = r31 + 0x9bcu;
    } while ((s32)r30 < 4);
    if (r30 != 4u) {
        a.r[0] = r31 + 0x9a8u;
        a.r[1] = param_1;
        a.r[2] = param_2;
        r3 = tc_call(0x800a6034u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r31 + 0x9a8u;
            r3 = tc_call(0x800a63e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[1] = r3;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_1;
            a.r[5] = param_5;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8011cd14u, &a);
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
