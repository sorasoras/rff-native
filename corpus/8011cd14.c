#include "tc_rt.h"

u32 fn_8011cd14(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x802e4254u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8011ca88u, &a);
    wr32((u32)param_1 + 0x83cu, param_5);
    a.r[0] = (u32)param_1;
    a.r[1] = param_6;
    r3 = tc_call(0x8011cdccu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        r3 = tc_call(0x8011ceacu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = param_3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8011d008u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                a.r[0] = (u32)param_1 + 0x974u;
                a.r[1] = param_4;
                (void)tc_call(0x8025bd34u, &a);
                r3 = 1u;
            }
        }
    }
    return r3;
}
