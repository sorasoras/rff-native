#include "tc_rt.h"

void fn_800bc158(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r20 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
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
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    r23 = 0u;
    f23 = (f64)rdf32(0x80572d90u);
    r26 = param_r3;
    f24 = rdf64(0x80572d08u);
    r25 = param_r3;
    f25 = (f64)rdf32(0x80572d34u);
    f26 = (f64)rdf32(0x80572cf0u);
    f27 = (f64)rdf32(0x80572de0u);
    f28 = (f64)rdf32(0x80572d3cu);
    r21 = 0u;
    f29 = (f64)rdf32(0x80572d38u);
    f30 = (f64)rdf32(0x80572ca0u);
    f31 = (f64)rdf32(0x80572d28u);
    do {
        r24 = r21 - 0x7fb66fa0u;
        r3 = (u32)rd16(r24 + 0x2d0u);
        if (rd32(r26 + 0xc0cu) != r3) {
            wr32(r26 + 0xc0cu, r3);
            r3 = rd32(r25 + 0x81cu);
            if (r3 != 0u) {
                r4 = rd32(r3);
                if (r4 != 0u) {
                    a.r[0] = 0x80472f48u;
                    a.r[1] = r4;
                    (void)tc_call(0x800beee0u, &a);
                }
                r20 = rd32(r25 + 0x81cu);
                if (r20 != 0u) {
                    r3 = tc_call(0x800545e4u, &a);
                    r6 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r20;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = r20;
                            (void)tc_call(0x80094ec0u, &a);
                        } else {
                            r5 = rd32(r3 + 0xcu);
                            r3 = rd32(r3);
                            r6 = r6 + 0x18u;
                            a.r[0] = r3;
                            a.r[1] = r20;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            (void)tc_call(0x80040e98u, &a);
                        }
                    }
                }
                wr32(r25 + 0x81cu, 0u);
            }
            if (rd32(r26 + 0xc0cu) != 0x2e8u) {
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    r20 = r3;
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x48u;
                        r3 = tc_call(0x80094e80u, &a);
                    } else {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x48u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                    }
                    r20 = r3;
                }
                if (r3 != 0u) {
                    a.r[0] = 0x80472f48u;
                    a.r[1] = rd32(r26 + 0xc0cu);
                    r3 = tc_call(0x800bede4u, &a);
                    a.r[0] = r20;
                    a.r[1] = r3;
                    (void)tc_call(0x800514a0u, &a);
                }
                wr32(r25 + 0x81cu, r20);
                r3 = (u32)rd16(r24 + 0x2d0u);
                wr32(0x817fdf34u, r23 ^ 0x80000000u);
                wr32(0x817fdf30u, 0x43300000u);
                r5 = (r3 * 0x34u) - 0x7fb60e50u;
                f0 = (f64)(f32)(rdf64(0x817fdf30u) - f24);
                r3 = rd32(r5 + 0x2878u);
                r0 = rd32(r5 + 0x287cu);
                wr32(0x817fdf20u, rd32(r5 + 0x2874u));
                f1 = (f64)(f32)(f25 * f0);
                wr32(0x817fdf24u, r3);
                f2 = (f64)rdf32(0x817fdf24u);
                f3 = (f64)(f32)(f23 * (f64)rdf32(0x817fdf20u));
                wr32(0x817fdf28u, r0);
                f2 = (f64)(f32)(f23 * f2);
                f0 = (f64)rdf32(0x817fdf28u);
                wrf32d(0x817fdf20u, f3);
                f0 = (f64)(f32)(f23 * f0);
                wrf32d(0x817fdf24u, f2);
                wrf32d(0x817fdf28u, f0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262b10u, &a);
                wr32(0x817fdf3cu, r23 ^ 0x80000000u);
                f1 = ppc_fmadds(f26, (f64)(f32)f1, f27);
                wr32(0x817fdf38u, 0x43300000u);
                f0 = rdf64(0x817fdf38u);
                wrf32d(r25 + 0x820u, f1);
                f0 = (f64)(f32)(f0 - f24);
                a.f[0] = (f64)(f32)(f25 * f0);
                f1 = tc_callf(0x80262704u, &a);
                f0 = (f64)(f32)f1;
                f1 = (f64)rdf32(0x80572dc8u);
                f0 = ppc_fmadds(f28, f0, f29);
                wrf32d(r25 + 0x824u, f0);
                wrf32d(r25 + 0x82cu, (f64)(f32)((f64)(f32)(f30 - (f64)rdf32(param_r3 + 8u)) * (f64)(f32)(f31 - (f64)rdf32(r25 + 0x820u))));
                f2 = (f64)rdf32(r25 + 0x820u);
                r6 = ((u32)rd16(r24 + 0x2d0u) * 0x34u) - 0x7fb60e50u;
                r5 = rd32(r6 + 0x286cu);
                wr32(0x817fdf14u, rd32(r6 + 0x2868u));
                r0 = rd32(r6 + 0x2870u);
                f0 = (f64)rdf32(0x817fdf14u);
                wr32(0x817fdf18u, r5);
                f0 = (f64)(f32)(f2 + f0);
                f2 = (f64)rdf32(0x817fdf18u);
                wr32(0x817fdf1cu, r0);
                wrf32d(r25 + 0x820u, f0);
                f0 = (f64)rdf32(0x817fdf1cu);
                f2 = (f64)(f32)((f64)rdf32(r25 + 0x824u) + f2);
                wrf32d(r25 + 0x824u, f2);
                wrf32d(r25 + 0x828u, f0);
                r7 = ((u32)rd16(r24 + 0x2d0u) * 0x34u) - 0x7fb60e50u;
                r5 = rd32(r7 + 0x2884u);
                r0 = rd32(r7 + 0x2888u);
                wr32(0x817fdf08u, rd32(r7 + 0x2880u));
                wr32(0x817fdf0cu, r5);
                wr32(0x817fdf10u, r0);
                a.f[0] = f1;
                a.r[0] = 0x817fdf08u;
                a.r[1] = 0x817fdf08u;
                (void)tc_call(0x802343c8u, &a);
                r3 = rd32(r25 + 0x81cu);
                f2 = (f64)rdf32(0x817fdf20u);
                wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdf08u));
                f1 = (f64)rdf32(0x817fdf24u);
                f0 = (f64)rdf32(0x817fdf28u);
                wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdf0cu));
                wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf10u));
                r3 = rd32(r25 + 0x81cu);
                wrf32d(r3 + 0x10u, f2);
                wrf32d(r3 + 0x14u, f1);
                wrf32d(r3 + 0x18u, f0);
                f2 = (f64)rdf32(r25 + 0x828u);
                f1 = (f64)rdf32(r25 + 0x824u);
                r3 = rd32(r25 + 0x81cu);
                wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32(r25 + 0x820u) + (f64)rdf32(r25 + 0x82cu)));
                wrf32d(r3 + 8u, f1);
                wrf32d(r3 + 0xcu, f2);
            }
        }
        r23 = r23 + 1u;
        r25 = r25 + 0xfcu;
        r21 = r21 + 4u;
        r26 = r26 + 4u;
    } while ((s32)r23 < 4);
    return;
}
