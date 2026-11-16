#include "tc_rt.h"

void fn_8015be94(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, s32 param_7, s32 param_8, u32 param_9)
{
    u32 r3 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    r29 = (u32)param_7;
    a.r[0] = param_5;
    (void)tc_call(0x8015be1cu, &a);
    a.r[0] = param_6;
    r3 = tc_call(0x8025e7a4u, &a);
    if (r3 < 0x200u) {
        a.r[0] = param_5 + 0x2cu;
        a.r[1] = param_6;
        (void)tc_call(0x8025e7c0u, &a);
        if (param_7 < 0) {
            r29 = 0u;
        }
        f1 = (f64)rdf32(0x805749a8u);
        wr32(param_5 + 0x438u, r29);
        wrf32d(param_5 + 0x42cu, param_1);
        wrf32d(param_5 + 0x430u, param_2);
        wrf32d(param_5 + 0x434u, param_3);
        if (f1 == param_4) {
            f0 = (f64)rdf32(0x805749acu);
            wrf32d(param_5 + 0x440u, f1);
            wrf32d(param_5 + 0x43cu, f0);
        } else {
            a.f[0] = param_4;
            a.f[1] = (f64)rdf32(0x805749b0u);
            a.f[2] = (f64)rdf32(0x805749acu);
            f1 = tc_callf(0x800acaf8u, &a);
            f0 = (f64)rdf32(0x805749a8u);
            wrf32d(param_5 + 0x440u, f1);
            wrf32d(param_5 + 0x43cu, f0);
        }
        wr32(param_5 + 0x444u, 1u);
        wr32(param_5 + 0x448u, (u32)param_8);
        if (param_8 > 0) {
            wr32(param_5 + 0x450u, 1u);
        }
        a.r[0] = param_5;
        a.r[1] = 1u;
        (void)tc_call(0x8015c608u, &a);
        a.r[0] = param_5;
        a.r[1] = param_5 + 0x2cu;
        (void)tc_call(0x800d3148u, &a);
        f1 = (f64)rdf32(0x805749b4u);
        wrf32d(param_5 + 8u, (f64)rdf32(param_5 + 0x434u));
        a.f[0] = f1;
        a.r[0] = param_5;
        (void)tc_call(0x800d5a24u, &a);
        a.r[0] = param_5;
        a.r[1] = 0x817fdf98u;
        a.r[2] = 0x817fdf9cu;
        (void)tc_call(0x800d33d8u, &a);
        f31 = (f64)rdf32(0x817fdf98u);
        r3 = tc_call(0x8015c5f4u, &a);
        if (r3 != 0u) {
            f31 = (f64)(f32)(f31 * (f64)rdf32(0x805749b8u));
        }
        f2 = (f64)rdf32(0x817fdf9cu);
        f4 = (f64)rdf32(0x805749c0u);
        f31 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805749bcu) - f31) * f4);
        f31 = (f64)(f32)(f31 + (f64)rdf32(param_5 + 0x42cu));
        f30 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x805749c4u) - f2) * f4) + (f64)rdf32(param_5 + 0x430u));
        a.f[0] = (f64)rdf32(0x817fdf98u);
        a.f[1] = f2;
        a.r[0] = param_5;
        (void)tc_call(0x800d3178u, &a);
        a.f[0] = f31;
        a.f[1] = f30;
        a.r[0] = param_5;
        (void)tc_call(0x800d316cu, &a);
        wr32(0x817fdfa4u, param_9 ^ 0x80000000u);
        f1 = rdf64(0x805749c8u);
        wr32(0x817fdfa0u, 0x43300000u);
        wrf32d(param_5 + 0x458u, (f64)(f32)(rdf64(0x817fdfa0u) - f1));
    }
    return;
}
