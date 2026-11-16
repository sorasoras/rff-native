#include "tc_rt.h"

void fn_8007c7e8(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0, t15 = 0.0, t16 = 0.0, t33 = 0.0, t34 = 0.0, t51 = 0.0, t52 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r27 = 0u;
    a.r[0] = param_1;
    a.r[1] = param_2;
    f1 = tc_callf(0x802344e8u, &a);
    f31 = f1;
    f30 = (f64)rdf32(0x80572840u);
    r26 = 0u;
    r28 = 0u;
    while ((s32)r26 < (s32)rd16((u32)param_5 + 6u)) {
        r25 = rd32((u32)param_5 + 8u) + r28;
        r4 = (u32)(s16)rd16(r25 + 2u);
        if ((s32)r4 < 0 || r4 >= rd32((u32)param_4 + 0x34u)) {
            r3 = 0u;
        } else {
            r3 = rd32((u32)param_4 + 0x38u) + (rd32((u32)param_4 + 0x3cu) * r4);
        }
        if (r3 != 0u) {
            a.r[0] = 0x817fdf9cu;
            a.r[1] = rd32(r3 + 0x50u);
            a.r[2] = r25 + 4u;
            (void)tc_call(0x80042474u, &a);
            t15 = (f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(param_2));
            t16 = (f64)(f32)((f64)rdf32(param_1 + 8u) - (f64)rdf32(param_2 + 8u));
            wrf32d(0x817fdf90u, (f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(param_2)));
            wrf32d(0x817fdf90u, t15);
            wrf32d(0x817fdf98u, t16);
            a.r[0] = 0x817fdf90u;
            a.r[1] = 0x817fdf90u;
            (void)tc_call(0x802343e4u, &a);
            a.r[0] = 0x817fdf9cu;
            a.r[1] = param_2;
            a.r[2] = 0x817fdf84u;
            (void)tc_call(0x802343a4u, &a);
            f1 = ppc_fmadds((f64)rdf32(0x817fdf8cu), (f64)rdf32(0x817fdf98u), ppc_fmadds((f64)rdf32(0x817fdf84u), (f64)rdf32(0x817fdf90u), (f64)(f32)((f64)rdf32(0x817fdf88u) * (f64)rdf32(0x817fdf94u))));
            if (f1 > f30 && f1 < (f64)(f32)(f31 + (f64)rdf32(r25 + 0x10u))) {
                a.f[0] = f1;
                a.r[0] = 0x817fdf84u;
                a.r[1] = 0x817fdf90u;
                a.r[2] = param_2;
                (void)tc_call(0x8004c70cu, &a);
                a.r[0] = 0x817fdf84u;
                a.r[1] = 0x817fdf9cu;
                f1 = tc_callf(0x802344c0u, &a);
                f0 = (f64)rdf32(r25 + 0x10u);
                f0 = (f64)(f32)(f0 * f0);
                if (f1 < f0) {
                    t33 = (f64)(f32)((f64)rdf32(0x817fdf84u) - (f64)rdf32(0x817fdf9cu));
                    t34 = (f64)(f32)((f64)rdf32(0x817fdf8cu) - (f64)rdf32(0x817fdfa4u));
                    wrf32d(0x817fdf90u, (f64)(f32)((f64)rdf32(0x817fdf84u) - (f64)rdf32(0x817fdf9cu)));
                    wrf32d(0x817fdf90u, t33);
                    wrf32d(0x817fdf98u, t34);
                    a.r[0] = 0x817fdf90u;
                    a.r[1] = 0x817fdf90u;
                    (void)tc_call(0x802343e4u, &a);
                    a.f[0] = (f64)rdf32(r25 + 0x10u);
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdf90u;
                    a.r[2] = 0x817fdf9cu;
                    (void)tc_call(0x8004c70cu, &a);
                    t51 = (f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(param_2));
                    t52 = (f64)(f32)((f64)rdf32(param_1 + 8u) - (f64)rdf32(param_2 + 8u));
                    wrf32d(0x817fdf78u, (f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(param_2)));
                    wrf32d(0x817fdf78u, t51);
                    wrf32d(0x817fdf80u, t52);
                    a.r[0] = 0x817fdf78u;
                    a.r[1] = 0x817fdf78u;
                    (void)tc_call(0x802343e4u, &a);
                    a.f[0] = f31;
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdf78u;
                    a.r[2] = param_2;
                    (void)tc_call(0x8004c70cu, &a);
                    r27 = r27 + 1u;
                }
            }
        }
        r28 = r28 + 0x20u;
        r26 = r26 + 1u;
    }
    if (r27 != 0u) {
        a.f[0] = (f64)rdf32((u32)param_6 + 0x10u);
        a.r[0] = param_3;
        a.r[1] = param_3;
        (void)tc_call(0x802343c8u, &a);
    }
    return;
}
