#include "tc_rt.h"

void fn_800b1fdc(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
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
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    a.r[0] = param_r3;
    (void)tc_call(0x800b1a44u, &a);
    f28 = (f64)rdf32(0x80572c00u);
    r28 = 0xffffffffu;
    r27 = 0xffffffffu;
    a.r[0] = param_r3;
    (void)tc_call(0x800b3354u, &a);
    a.r[0] = param_r3;
    f1 = tc_callf(0x800b3324u, &a);
    f27 = f1;
    a.r[0] = param_r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x19cu), &a);
    wr32(0x817fdf78u, r3);
    r29 = param_r3;
    f29 = rdf64(0x80572c08u);
    r26 = 0u;
    f31 = (f64)rdf32(0x80572c00u);
    do {
        a.r[0] = 0x817fdf78u;
        a.r[1] = r26;
        r3 = tc_call(0x8014967cu, &a);
        if (r3 != 0xffffffffu) {
            a.f[0] = f27;
            a.r[0] = rd32(param_r3 + 0x4acu);
            (void)tc_call(0x800dd2f0u, &a);
            wr32(0x817fdf80u, 0x43300000u);
            r3 = rd32(param_r3 + 0x4b0u);
            wr32(0x817fdf84u, r26 ^ 0x80000000u);
            a.f[0] = (f64)(f32)(rdf64(0x817fdf80u) - f29);
            a.r[0] = r3;
            f1 = tc_callf(0x800dd2f0u, &a);
            r4 = tc_lastr4();
            r30 = rd32(param_r3 + 0x4d4u);
            while (r30 != 0u) {
                r3 = rd32(r30 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(r3 + 4u) + 0x14u), &a);
                r4 = tc_lastr4();
                r30 = rd32(r30);
            }
            r30 = rd32(param_r3 + 0x4d4u);
            while (r30 != 0u) {
                r3 = rd32(r30 + 4u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(r3 + 4u) + 0x10u), &a);
                r3 = rd32(r30 + 8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(r3 + 4u) + 0x18u), &a);
                r4 = tc_lastr4();
                r30 = rd32(r30);
            }
            a.r[0] = rd32(param_r3 + 0x4b4u);
            f1 = tc_callf(0x800dd368u, &a);
            f30 = f1;
            a.f[0] = (f64)(f32)(f31 - (f64)rdf32(r29 + 0x1618u));
            a.f[1] = (f64)rdf32(0x80572bf8u);
            a.f[2] = f31;
            f1 = tc_callf(0x800acaf8u, &a);
            f0 = (f64)(f32)(f30 * f1);
            if ((f0 > f28) || (f0 == f28)) {
                f28 = f0;
                a.r[0] = param_r3;
                a.r[1] = 2u;
                r3 = tc_call(0x800b1048u, &a);
                if (r3 != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x800b1fb8u, &a);
                    r28 = r3;
                    r27 = 0u;
                } else {
                    a.r[0] = param_r3;
                    a.r[1] = r26;
                    r3 = tc_call(0x800b1fb8u, &a);
                    r28 = r3;
                    r27 = r26;
                }
            }
        }
        r26 = r26 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r26 < 4);
    if (!(f28 < (f64)rdf32(0x80572c44u)) && r28 != 0xffffffffu) {
        a.r[0] = param_r3;
        a.r[1] = r27;
        (void)tc_call(0x800b1b3cu, &a);
        a.r[0] = param_r3;
        a.r[1] = r28;
        (void)tc_call(0x800b31a0u, &a);
        wr32(param_r3 + 0xcecu, r27);
    }
    return;
}
