#include "tc_rt.h"

void fn_801cefcc(f64 param_f1, u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
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
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xfc6u;
    (void)tc_call(0x8010a74cu, &a);
    f30 = (f64)rdf32(0x80575e9cu);
    f31 = (f64)rdf32(0x80575f38u);
    r28 = param_r3;
    f29 = (f64)rdf32(0x80575ea8u);
    r27 = 0u;
    do {
        r26 = rd32(r28 + 0xe38u);
        if (r26 != 0u) {
            a.r[0] = r26;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                wrf32d(0x817fdf8cu, f29);
                wrf32d(0x817fdf88u, f29);
                wrf32d(0x817fdf84u, f29);
                a.r[0] = r26;
                a.r[1] = 0x817fdf84u;
                (void)tc_call(0x80158364u, &a);
                a.f[0] = param_f1;
                a.r[0] = param_r3;
                a.r[1] = 0x817fdf84u;
                (void)tc_call(0x801cf180u, &a);
                r26 = 0u;
                do {
                    r3 = rd32(0x817fdf88u);
                    r0 = rd32(0x817fdf8cu);
                    wr32(0x817fdf78u, rd32(0x817fdf84u));
                    wr32(0x817fdf7cu, r3);
                    wr32(0x817fdf80u, r0);
                    f1 = tc_callf(0x80040a00u, &a);
                    f28 = (f64)(f32)(f31 * (f64)(f32)(f1 - f30));
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)rdf32(0x817fdf80u);
                    wrf32d(0x817fdf78u, (f64)(f32)((f64)rdf32(0x817fdf78u) + f28));
                    f0 = (f64)(f32)(f0 + (f64)(f32)(f31 * (f64)(f32)(f1 - f30)));
                    wrf32d(0x817fdf80u, f0);
                    r3 = rd32(param_r3 + 0xd38u);
                    if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                        a.f[0] = (f64)rdf32(0x80575e98u);
                        a.r[0] = r3;
                        a.r[1] = 0x817fdf78u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                    } else {
                        a.f[0] = (f64)rdf32(0x80575e98u);
                        a.r[0] = r3;
                        a.r[1] = 0x817fdf78u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                    }
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0x3cu;
                        (void)tc_call(0x80157f70u, &a);
                    }
                    r26 = r26 + 1u;
                } while ((s32)r26 < 3);
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 4u;
    } while ((s32)r27 < 20);
    return;
}
