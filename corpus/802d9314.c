#include "tc_rt.h"

void fn_802d9314(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
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
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    r26 = 0u;
    wr32(0x817fdf78u, param_1);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf7cu, (u32)param_3);
    a.r[0] = param_1;
    r3 = tc_call(0x802d609cu, &a);
    f31 = (f64)rdf32(0x80348b00u);
    r31 = 0u;
    a.r[0] = 0x817fdf68u;
    a.r[1] = r3;
    (void)tc_call(0x802d2e40u, &a);
    wrf32d(param_2, f31);
    wrf32d(param_2 + 8u, f31);
    a.r[0] = param_1;
    r3 = tc_call(0x802d609cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
        r26 = r3;
    }
    a.r[0] = param_1;
    f1 = tc_callf(0x802d6f98u, &a);
    wr32(0x817fdf94u, r26 ^ 0x80000000u);
    f4 = rdf64(0x80348b08u);
    wr32(0x817fdf90u, 0x43300000u);
    f0 = (f64)rdf32(0x80348b00u);
    f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdf90u) - f4) * f1);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x50u) + f1);
    if (!(f0 > f1)) {
        f1 = f0;
    }
    wrf32d(param_2 + 4u, f1);
    a.r[0] = param_1;
    r3 = tc_call(0x802d609cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r25 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
        r25 = r3;
    }
    a.r[0] = param_1;
    f1 = tc_callf(0x802d6f98u, &a);
    wr32(0x817fdf9cu, r25 ^ 0x80000000u);
    f4 = rdf64(0x80348b08u);
    wr32(0x817fdf98u, 0x43300000u);
    f0 = (f64)rdf32(0x80348b00u);
    f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdf98u) - f4) * f1);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x50u) + f1);
    if (!(f0 < f1)) {
        f1 = f0;
    }
    wrf32d(param_2 + 0xcu, f1);
    wr32(0x817fdf68u, (u32)param_3);
    a.r[0] = 0x817fdf68u;
    r3 = tc_call(0x802558bcu, &a);
    f28 = (f64)rdf32(0x80348b00u);
    r25 = r3;
    f30 = rdf64(0x80348b08u);
    for (;;) {
        r4 = rd32(0x817fdf68u);
        r3 = r4 - (u32)param_3;
        if (((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1) > param_4) {
            return;
        }
        if ((s32)(r25 & 0xffffu) >= 32) {
            if (r31 != 0u) {
                f31 = (f64)(f32)(f31 + (f64)rdf32(param_1 + 0x4cu));
            }
            r31 = 1u;
            a.r[0] = param_1;
            r3 = tc_call(0x802d719cu, &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                f1 = tc_callf(0x802d6f90u, &a);
                f29 = f1;
                a.r[0] = param_1;
                r3 = tc_call(0x802d609cu, &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = r25 & 0xffffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x48u), &a);
                wr32(0x817fdf98u, 0x43300000u);
                wr32(0x817fdf9cu, r3 ^ 0x80000000u);
                f31 = (f64)(f32)(f31 + (f64)(f32)((f64)(f32)(rdf64(0x817fdf98u) - f30) * f29));
            } else {
                a.r[0] = param_1;
                f1 = tc_callf(0x802d71a4u, &a);
                f31 = (f64)(f32)(f31 + f1);
            }
            f0 = (f64)rdf32(param_2);
            if (f0 > f31) {
                f0 = f31;
            }
            f1 = (f64)rdf32(param_2 + 8u);
            wrf32d(param_2, f0);
            if (f1 < f31) {
                f1 = f31;
            }
            wrf32d(param_2 + 8u, f1);
        } else {
            wrf32d(0x817fdf58u, f31);
            wrf32d(0x817fdf5cu, f28);
            wrf32d(0x817fdf60u, f28);
            wrf32d(0x817fdf64u, f28);
            wr32(0x817fdf7cu, r4);
            wr32(0x817fdf88u, (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu);
            a.f[0] = f31;
            a.r[0] = param_1;
            f1 = tc_callf(0x802d72f4u, &a);
            r3 = rd32(param_1 + 0x5cu);
            a.r[0] = r3;
            a.r[1] = 0x817fdf58u;
            a.r[2] = r25 & 0xffffu;
            a.r[3] = 0x817fdf78u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
            r25 = r3;
            f1 = (f64)rdf32(0x817fdf58u);
            wr32(0x817fdf68u, rd32(0x817fdf7cu));
            f0 = (f64)rdf32(param_2);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2, f1);
            f0 = (f64)rdf32(param_2 + 4u);
            f1 = (f64)rdf32(0x817fdf5cu);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 4u, f1);
            f0 = (f64)rdf32(param_2 + 8u);
            f1 = (f64)rdf32(0x817fdf60u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 8u, f1);
            f0 = (f64)rdf32(param_2 + 0xcu);
            f1 = (f64)rdf32(0x817fdf64u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 0xcu, f1);
            a.r[0] = param_1;
            f1 = tc_callf(0x802d7324u, &a);
            f31 = f1;
            if (r25 == 4u) break;
            if (r25 != 1u) {
                if (r25 != 2u) {
                    if (r25 == 3u) {
                        return;
                    }
                } else {
                    r31 = 1u;
                }
            } else {
                r31 = 0u;
            }
        }
        a.r[0] = 0x817fdf68u;
        r3 = tc_call(0x802558bcu, &a);
        r25 = r3;
    }
    return;
}
