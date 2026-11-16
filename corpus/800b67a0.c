#include "tc_rt.h"

u32 fn_800b67a0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r0 = 0u;
    f1 = (f64)rdf32(0x80572c90u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if ((f1 == (f64)rdf32(param_1 + 0x18u) && f1 == (f64)rdf32(param_1 + 0x1cu)) && f1 == (f64)rdf32(param_1 + 0x20u)) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r3 = 0u;
    } else {
        r6 = rd32(param_3 + 4u);
        r0 = rd32(param_3 + 8u);
        wr32(0x817fdfd4u, rd32(param_3));
        wr32(0x817fdfd8u, r6);
        wr32(0x817fdfdcu, r0);
        a.r[0] = 0x817fdfd4u;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfd4u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80572c90u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfd4u) && f1 == (f64)rdf32(0x817fdfd8u)) && f1 == (f64)rdf32(0x817fdfdcu)) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r3 = 0u;
        } else {
            f1 = (f64)rdf32(0x80572c90u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfd4u) && f1 == (f64)rdf32(0x817fdfd8u)) && f1 == (f64)rdf32(0x817fdfdcu)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfd4u;
                a.r[1] = 0x817fdfd4u;
                (void)tc_call(0x802343e4u, &a);
            }
            f0 = (f64)rdf32(0x80572c90u);
            if (ppc_fmadds((f64)rdf32(0x817fdfdcu), (f64)rdf32(param_1 + 0x20u), ppc_fmadds((f64)rdf32(0x817fdfd4u), (f64)rdf32(param_1 + 0x18u), (f64)(f32)((f64)rdf32(0x817fdfd8u) * (f64)rdf32(param_1 + 0x1cu)))) > f0) {
                r3 = 0u;
            } else {
                r30 = rd32(param_2);
                r12 = rd32(param_2 + 4u);
                r11 = rd32(param_2 + 8u);
                r10 = rd32(param_3);
                r9 = rd32(param_3 + 4u);
                r0 = rd32(param_3 + 8u);
                wrf32d(0x817fdfd0u, f0);
                wrf32d(0x817fdfccu, f0);
                wrf32d(0x817fdfc8u, f0);
                wr32(0x817fdfbcu, r30);
                wr32(0x817fdfc0u, r12);
                wr32(0x817fdfc4u, r11);
                wr32(0x817fdfb0u, r10);
                wr32(0x817fdfb4u, r9);
                wr32(0x817fdfb8u, r0);
                a.r[0] = 0x817fdfc8u;
                a.r[1] = 0u;
                a.r[2] = param_1;
                a.r[3] = param_1 + 0x18u;
                a.r[4] = 0x817fdfbcu;
                a.r[5] = 0x817fdfb0u;
                r3 = tc_call(0x80078e80u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    f2 = (f64)rdf32(param_1 + 0x14u);
                    f0 = (f64)rdf32(param_1 + 0xcu);
                    wrf32d(0x817fdf84u, (f64)rdf32(param_1 + 4u));
                    wrf32d(0x817fdf80u, f0);
                    r6 = rd32(0x817fdf84u);
                    wrf32d(0x817fdf88u, f2);
                    r0 = rd32(0x817fdf88u);
                    wr32(0x817fdf8cu, rd32(0x817fdf80u));
                    wr32(0x817fdf90u, r6);
                    wr32(0x817fdf94u, r0);
                    a.r[0] = 0x817fdf8cu;
                    a.r[1] = param_1;
                    a.r[2] = 0x817fdf8cu;
                    (void)tc_call(0x802343a4u, &a);
                    f1 = (f64)rdf32(0x817fdf90u);
                    f0 = (f64)rdf32(0x817fdf94u);
                    r7 = rd32(0x817fdfc8u);
                    r6 = rd32(0x817fdfccu);
                    r0 = rd32(0x817fdfd0u);
                    wrf32d(0x817fdfd4u, (f64)rdf32(0x817fdf8cu));
                    wrf32d(0x817fdfd8u, f1);
                    wrf32d(0x817fdfdcu, f0);
                    wr32(0x817fdfa4u, r7);
                    wr32(0x817fdfa8u, r6);
                    wr32(0x817fdfacu, r0);
                    a.r[0] = 0x817fdfa4u;
                    a.r[1] = param_1;
                    a.r[2] = 0x817fdfa4u;
                    (void)tc_call(0x802343a4u, &a);
                    f31 = ppc_fmadds((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfdcu), ppc_fmadds((f64)rdf32(0x817fdfa4u), (f64)rdf32(0x817fdfd4u), (f64)(f32)((f64)rdf32(0x817fdfa8u) * (f64)rdf32(0x817fdfd8u))));
                    a.r[0] = 0x817fdfd4u;
                    f1 = tc_callf(0x80234428u, &a);
                    if (f31 < (f64)rdf32(0x80572c90u) || f1 < f31) {
                        r3 = 0u;
                    } else {
                        f2 = (f64)rdf32(param_1 + 8u);
                        f0 = (f64)rdf32(param_1);
                        wrf32d(0x817fdf6cu, (f64)rdf32(param_1 + 0x10u));
                        wrf32d(0x817fdf68u, f0);
                        r6 = rd32(0x817fdf6cu);
                        wrf32d(0x817fdf70u, f2);
                        r0 = rd32(0x817fdf70u);
                        wr32(0x817fdf74u, rd32(0x817fdf68u));
                        wr32(0x817fdf78u, r6);
                        wr32(0x817fdf7cu, r0);
                        a.r[0] = 0x817fdf74u;
                        a.r[1] = param_1;
                        a.r[2] = 0x817fdf74u;
                        (void)tc_call(0x802343a4u, &a);
                        f1 = (f64)rdf32(0x817fdf78u);
                        f0 = (f64)rdf32(0x817fdf7cu);
                        r7 = rd32(0x817fdfc8u);
                        r6 = rd32(0x817fdfccu);
                        r0 = rd32(0x817fdfd0u);
                        wrf32d(0x817fdfd4u, (f64)rdf32(0x817fdf74u));
                        wrf32d(0x817fdfd8u, f1);
                        wrf32d(0x817fdfdcu, f0);
                        wr32(0x817fdf98u, r7);
                        wr32(0x817fdf9cu, r6);
                        wr32(0x817fdfa0u, r0);
                        a.r[0] = 0x817fdf98u;
                        a.r[1] = param_1 + 0xcu;
                        a.r[2] = 0x817fdf98u;
                        (void)tc_call(0x802343a4u, &a);
                        f31 = ppc_fmadds((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfdcu), ppc_fmadds((f64)rdf32(0x817fdfa4u), (f64)rdf32(0x817fdfd4u), (f64)(f32)((f64)rdf32(0x817fdfa8u) * (f64)rdf32(0x817fdfd8u))));
                        a.r[0] = 0x817fdfd4u;
                        f1 = tc_callf(0x80234428u, &a);
                        if (f31 < (f64)rdf32(0x80572c90u) || f1 < f31) {
                            r3 = 0u;
                        } else {
                            r3 = 1u;
                        }
                    }
                }
            }
        }
    }
    return r3;
}
