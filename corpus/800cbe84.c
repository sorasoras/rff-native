#include "tc_rt.h"

void fn_800cbe84(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r28 = param_2;
    a.f[0] = (f64)rdf32(0x80572f78u);
    a.r[0] = param_1;
    (void)tc_call(0x800cd050u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_1 + 0x68u;
    a.r[3] = param_1 + 0x6cu;
    a.r[4] = 0u;
    (void)tc_call(0x800cd330u, &a);
    f2 = (f64)rdf32(param_1 + 0x38u);
    if ((f64)rdf32(0x80572f8cu) != f2) {
        r0 = (u32)(s8)rd8(param_1 + 0x51u);
        if (r0 != 0u) {
            f3 = (f64)rdf32(param_1 + 0x10u);
            if (r0 != 1u) {
                if (r0 == 2u) {
                    f3 = (f64)(f32)(f3 + (f64)(f32)(f2 - (f64)rdf32(param_1 + 0x6cu)));
                }
            } else {
                f3 = ppc_fmadds((f64)(f32)(f2 - (f64)rdf32(param_1 + 0x6cu)), (f64)rdf32(0x80572fa8u), f3);
            }
            wrf32d(param_1 + 0x1cu, f3);
        }
    }
    a.r[0] = param_1;
    r3 = tc_call(0x800cb948u, &a);
    f31 = (f64)rdf32(param_1 + 0x3cu);
    if ((u32)param_3 == 0u) {
        wrf32d(param_1 + 0x3cu, (f64)rdf32(0x80572f8cu));
    } else {
        a.r[0] = r3;
        (void)tc_call(0x80079d50u, &a);
    }
    wrf32d(param_1 + 0x64u, (f64)rdf32(0x80572f78u));
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800cd238u, &a);
    for (;;) {
        r0 = (u32)rd16(r28);
        if (r0 == 0u) break;
        if (r0 != 0xau) {
            r31 = 0u;
            a.r[0] = param_1;
            r3 = tc_call(0x800cd588u, &a);
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)rd16(r28);
                r3 = tc_call(0x800ccaf4u, &a);
                if (r3 != 0u) {
                    r3 = tc_call(0x800ccf94u, &a);
                    a.r[0] = r28;
                    a.r[1] = r3;
                    r3 = tc_call(0x8025e8ecu, &a);
                    if (r3 != 0u) {
                        r31 = 1u;
                    }
                }
            }
            if (r31 == 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)rd16(r28);
                f1 = tc_callf(0x800cca68u, &a);
                f28 = f1;
                f30 = (f64)rdf32(param_1 + 0x64u);
                a.r[0] = param_1;
                f1 = tc_callf(0x800cd52cu, &a);
                if ((f64)(f32)(f28 + f30) > f1) break;
                f30 = (f64)rdf32(param_1 + 0xcu);
                f29 = (f64)rdf32(param_1 + 0x18u);
                a.r[0] = param_1;
                f1 = tc_callf(0x800cd534u, &a);
                f1 = (f64)(f32)(f30 + f1);
                if ((f64)(f32)(f28 + f29) > f1) {
                    a.r[0] = param_1;
                    (void)tc_call(0x800cc9a4u, &a);
                    a.r[0] = param_1;
                    a.r[1] = r28;
                    (void)tc_call(0x800cd238u, &a);
                    if ((f64)(f32)((f64)rdf32(param_1 + 0x1cu) + (f64)rdf32(param_1 + 0x44u)) > (f64)(f32)((f64)rdf32(param_1 + 0x38u) + (f64)rdf32(param_1 + 0x10u))) break;
                }
                if ((u32)param_3 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = (u32)rd16(r28);
                    (void)tc_call(0x800cc9ccu, &a);
                }
                wrf32d(param_1 + 0x18u, (f64)(f32)(f28 + (f64)rdf32(param_1 + 0x18u)));
                a.f[0] = f28;
                a.r[0] = param_1;
                (void)tc_call(0x800cc588u, &a);
                r28 = r28 + 2u;
            } else {
                a.r[0] = param_1;
                a.r[1] = r28;
                a.r[2] = (u32)param_3;
                r3 = tc_call(0x800cc2c4u, &a);
                if (r3 == 0u) break;
                r28 = r28 + ((r3 << 1u) & 0xfffffffeu);
            }
        } else {
            r28 = r28 + 2u;
            a.r[0] = param_1;
            (void)tc_call(0x800cc9a4u, &a);
            a.r[0] = param_1;
            a.r[1] = r28;
            (void)tc_call(0x800cd238u, &a);
            if ((f64)(f32)((f64)rdf32(param_1 + 0x1cu) + (f64)rdf32(param_1 + 0x44u)) > (f64)(f32)((f64)rdf32(param_1 + 0x38u) + (f64)rdf32(param_1 + 0x10u))) break;
        }
    }
    if (param_4 != 0u) {
        wrf32d(param_4, (f64)rdf32(param_1 + 0x64u));
    }
    wrf32d(param_1 + 0x3cu, f31);
    return;
}
