#include "tc_rt.h"

void fn_8011a00c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, t7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_1 + 0x3dcu) == 0u) {
        r4 = rd32(param_1 + 0x3b8u);
        do {
            if (r4 != 0u) {
                a.r[0] = 0x817fdf8cu;
                a.r[1] = r4;
                (void)tc_call(0x80100db8u, &a);
                r0 = 0u;
                if ((f64)rdf32(param_1 + 0x3d0u) != (f64)rdf32(0x817fdf8cu) || (f64)rdf32(param_1 + 0x3d4u) != (f64)rdf32(0x817fdf90u) || (f64)rdf32(param_1 + 0x3d8u) != (f64)rdf32(0x817fdf94u)) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r4 = rd32(param_1 + 0x3b8u);
                    r30 = rd32(rd32(param_1) + 0x10u);
                    r5 = rd32(r30 + 0xa0u);
                    wr32(0x817fdfd4u, rd32(r30 + 0x90u));
                    r0 = rd32(r30 + 0xb0u);
                    wr32(0x817fdfe4u, r5);
                    r12 = rd32(r30 + 0x84u);
                    wr32(0x817fdff4u, r0);
                    r11 = rd32(r30 + 0x88u);
                    r10 = rd32(r30 + 0x8cu);
                    r9 = rd32(r30 + 0x94u);
                    r8 = rd32(r30 + 0x98u);
                    r7 = rd32(r30 + 0x9cu);
                    r6 = rd32(r30 + 0xa4u);
                    r5 = rd32(r30 + 0xa8u);
                    r0 = rd32(r30 + 0xacu);
                    f2 = (f64)rdf32(0x817fdfd4u);
                    f1 = (f64)rdf32(0x817fdfe4u);
                    f0 = (f64)rdf32(0x817fdff4u);
                    wr32(0x817fdfc8u, r12);
                    wr32(0x817fdfccu, r11);
                    wr32(0x817fdfd0u, r10);
                    wr32(0x817fdfd8u, r9);
                    wr32(0x817fdfdcu, r8);
                    wr32(0x817fdfe0u, r7);
                    wr32(0x817fdfe8u, r6);
                    wr32(0x817fdfecu, r5);
                    wr32(0x817fdff0u, r0);
                    wrf32d(0x817fdfb0u, f2);
                    wrf32d(0x817fdfb4u, f1);
                    wrf32d(0x817fdfb8u, f0);
                    a.r[0] = 0x817fdf74u;
                    a.r[1] = r4;
                    (void)tc_call(0x80100db8u, &a);
                    t7 = (f64)(f32)((f64)rdf32(0x817fdf78u) - (f64)rdf32(0x817fdfb4u));
                    wrf32d(0x817fdf80u, (f64)(f32)((f64)rdf32(0x817fdf74u) - (f64)rdf32(0x817fdfb0u)));
                    wrf32d(0x817fdf84u, t7);
                    wrf32d(0x817fdf88u, (f64)(f32)((f64)rdf32(0x817fdf7cu) - (f64)rdf32(0x817fdfb8u)));
                    f3 = (f64)rdf32(0x817fdf84u);
                    f4 = (f64)rdf32(0x817fdf80u);
                    f2 = (f64)rdf32(0x817fdf88u);
                    f0 = (f64)rdf32(0x805741d0u);
                    wrf32d(0x817fdfbcu, f4);
                    wrf32d(0x817fdfc0u, f3);
                    f1 = ppc_fmadds(f2, f2, ppc_fmadds(f4, f4, (f64)(f32)(f3 * f3)));
                    wrf32d(0x817fdfc4u, f2);
                    if (!(f1 > f0)) {
                        f0 = (f64)rdf32(0x805741ccu);
                        wrf32d(param_1 + 0x3e0u, (f64)rdf32(0x805741c8u));
                        wrf32d(param_1 + 0x3e4u, f0);
                    } else {
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262ec0u, &a);
                        f5 = (f64)(f32)f1;
                        f1 = (f64)rdf32(0x805741e0u);
                        f0 = (f64)rdf32(0x805741e4u);
                        f3 = (f64)(f32)((f64)rdf32(0x805741d4u) * (f64)(f32)(f5 * (f64)rdf32(0x805741d8u)));
                        f2 = ppc_fnmsubs((f64)rdf32(0x805741dcu), f3, f5);
                        wrf32d(param_1 + 0x3e4u, f3);
                        f1 = (f64)(f32)(f1 * f2);
                        f0 = (f64)(f32)(f1 * f0);
                        wrf32d(param_1 + 0x3e0u, f0);
                    }
                    a.r[0] = 0x817fdf68u;
                    a.r[1] = rd32(param_1 + 0x3b8u);
                    (void)tc_call(0x80100db8u, &a);
                    wrf32d(param_1 + 0x3d0u, (f64)rdf32(0x817fdf68u));
                    wrf32d(param_1 + 0x3d4u, (f64)rdf32(0x817fdf6cu));
                    wrf32d(param_1 + 0x3d8u, (f64)rdf32(0x817fdf70u));
                    break;
                }
            }
            f0 = (f64)rdf32(0x805741c8u);
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0x3e4u) + (f64)rdf32(param_1 + 0x3e0u));
            wrf32d(param_1 + 0x3e4u, f1);
            if (f1 < f0) {
                wrf32d(param_1 + 0x3e4u, f0);
            }
            f0 = (f64)rdf32(0x805741e8u);
            if ((f64)rdf32(param_1 + 0x3e4u) > f0) {
                wrf32d(param_1 + 0x3e4u, f0);
            }
        } while (0);
        a.f[0] = (f64)rdf32(param_1 + 0x3e4u);
        a.r[0] = 0x817fdfa4u;
        a.r[1] = rd32(param_1 + 0x3b8u);
        a.r[2] = rd32(param_1);
        a.r[3] = 0u;
        (void)tc_call(0x800f905cu, &a);
        if (rd32(param_1 + 0x3b8u) != 0u) {
            a.r[0] = param_1 + 0x18u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x80161e68u, &a);
        }
    } else {
        a.r[0] = rd32(param_1 + 0x3b8u);
        a.r[1] = rd32(param_1);
        a.r[2] = 0u;
        (void)tc_call(0x800f8f10u, &a);
        r3 = rd32(param_1 + 0x3b8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80100d88u, &a);
            a.r[0] = param_1 + 0x18u;
            a.r[1] = r3;
            (void)tc_call(0x80161e68u, &a);
        }
        r4 = rd32(param_1 + 0x3b8u);
        if (r4 != 0u) {
            a.r[0] = 0x817fdf98u;
            a.r[1] = r4;
            (void)tc_call(0x80100db8u, &a);
            wrf32d(param_1 + 0x3d0u, (f64)rdf32(0x817fdf98u));
            wrf32d(param_1 + 0x3d4u, (f64)rdf32(0x817fdf9cu));
            wrf32d(param_1 + 0x3d8u, (f64)rdf32(0x817fdfa0u));
        }
    }
    return;
}
