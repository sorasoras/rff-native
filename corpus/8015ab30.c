#include "tc_rt.h"

void fn_8015ab30(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7, s32 param_8)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_3;
    (void)tc_call(0x8015aaccu, &a);
    if (param_6 >= 0 && param_6 < 10) {
        wr32(param_3 + 0x20u, (u32)param_6);
        a.r[0] = 0x8033a68fu;
        r3 = tc_call(0x8011dfdcu, &a);
        f1 = tc_lastf();
        r29 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_4;
        a.r[1] = param_5;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x8015a9e0u, &a);
        if (r3 != 0u) {
            a.r[0] = r29;
            a.r[1] = r3;
            (void)tc_call(0x8011d53cu, &a);
            a.r[0] = r29;
            r3 = tc_call(0x8011ddbcu, &a);
            if (r3 != 0u) {
                a.r[0] = r29;
                a.r[1] = (u32)param_6;
                (void)tc_call(0x8011ddc4u, &a);
                a.r[0] = r29;
                r3 = tc_call(0x8011ddbcu, &a);
                if (r3 != 0u) {
                    a.r[0] = r29;
                    r3 = tc_call(0x8011ddbcu, &a);
                    r30 = r3 + 0xcdu;
                    a.r[0] = r30;
                    r3 = tc_call(0x802550d4u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = r29;
                        a.r[1] = (u32)param_6;
                        r3 = tc_call(0x8011d1acu, &a);
                        wr32(param_3, r3);
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x817fdf80u;
                        a.r[1] = 0x8033a6bbu;
                        a.r[2] = r30;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8025b994u, &a);
                        a.r[0] = r29;
                        a.r[1] = 0x817fdf80u;
                        r3 = tc_call(0x8011d208u, &a);
                        wr32(param_3, r3);
                        if (r3 == 0u) {
                            return;
                        }
                    }
                    a.r[0] = r29;
                    a.r[1] = 0x817fdf7cu;
                    a.r[2] = 0x817fdf78u;
                    (void)tc_call(0x8011d574u, &a);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdf7cu) - (f64)rdf32(0x80574968u));
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf78u) - (f64)rdf32(0x80574970u));
                    if ((u32)param_7 != 0u) {
                        f2 = (f64)(f32)(f2 * (f64)rdf32(0x80574964u));
                    }
                    f0 = (f64)(f32)(f0 + param_2);
                    f1 = (f64)(f32)((f64)(f32)f2 + param_1);
                    wrf32d(0x817fdf78u, f0);
                    wrf32d(0x817fdf7cu, f1);
                    wrf32d(param_3 + 8u, f1);
                    wrf32d(param_3 + 0xcu, (f64)rdf32(0x817fdf78u));
                    a.r[0] = r29;
                    a.r[1] = 0x817fdf7cu;
                    a.r[2] = 0x817fdf78u;
                    (void)tc_call(0x8011d60cu, &a);
                    if ((u32)param_7 != 0u) {
                        wrf32d(0x817fdf7cu, (f64)(f32)((f64)rdf32(0x817fdf7cu) * (f64)rdf32(0x80574964u)));
                    }
                    wrf32d(param_3 + 0x14u, (f64)rdf32(0x817fdf7cu));
                    wrf32d(param_3 + 0x18u, (f64)rdf32(0x817fdf78u));
                    a.r[0] = r29;
                    a.r[1] = param_3 + 0x10u;
                    (void)tc_call(0x8011d694u, &a);
                    wr32(param_3 + 0x1cu, (u32)param_7);
                    if ((u32)param_8 == 0u) {
                        a.r[0] = (u32)param_6;
                        (void)tc_call(0x8015ab04u, &a);
                    }
                } else {
                    a.r[0] = param_3;
                    (void)tc_call(0x8015aaccu, &a);
                }
            }
        }
    }
    return;
}
