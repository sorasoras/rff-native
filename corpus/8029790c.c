#include "tc_rt.h"

void fn_8029790c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x80393db4u;
        a.r[2] = (u32)rd8(param_r3);
        a.r[3] = (u32)rd8(param_r3 + 1u);
        a.r[4] = (u32)rd8(param_r3 + 2u);
        a.r[5] = (u32)rd8(param_r3 + 3u);
        a.r[6] = (u32)rd8(param_r3 + 4u);
        a.r[7] = (u32)rd8(param_r3 + 5u);
        (void)tc_call(0x8028cce4u, &a);
    }
    r30 = 0u;
    r31 = 0x8053f03cu;
    for (;;) {
        if ((u32)rd8(r31 + 0x1au) != 0u) {
            a.r[0] = r31 + 0xau;
            a.r[1] = param_r3;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
        if (r30 >= 0xcu) {
            r31 = 0u;
            break;
        }
    }
    if (r31 != 0u) {
        r29 = r31 + 8u;
    }
    a.r[0] = param_r3;
    a.r[1] = r29;
    a.r[2] = 1u;
    a.r[3] = 0x28u;
    a.r[4] = param_r4;
    (void)tc_call(0x802987ecu, &a);
    return;
}
