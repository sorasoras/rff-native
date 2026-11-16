#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_8007b204(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f28 = 0.0;
    wr32(0x817fdf10u, 0x817fe000u);
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
    f5 = (f64)rdf32(param_1);
    r6 = (u32)param_3;
    f4 = (f64)rdf32(param_1 + 4u);
    r7 = 0x817fdf18u;
    f3 = (f64)rdf32(param_1 + 8u);
    r8 = 0u;
    f2 = (f64)rdf32(param_1 + 0xcu);
    r9 = 0u;
    f1 = (f64)rdf32(param_1 + 0x10u);
    r10 = 0u;
    f0 = (f64)rdf32(param_1 + 0x14u);
    r11 = 0u;
    wr32(0x817fdfbcu, 0u);
    r12 = 0u;
    r31 = 0u;
    wrf32d(0x817fdf58u, f5);
    wrf32d(0x817fdf5cu, f4);
    wrf32d(0x817fdf60u, f3);
    wrf32d(0x817fdf64u, f2);
    wrf32d(0x817fdf68u, f4);
    wrf32d(0x817fdf6cu, f3);
    wrf32d(0x817fdf70u, f5);
    wrf32d(0x817fdf74u, f1);
    wrf32d(0x817fdf78u, f3);
    wrf32d(0x817fdf7cu, f2);
    wrf32d(0x817fdf80u, f1);
    wrf32d(0x817fdf84u, f3);
    wrf32d(0x817fdf88u, f5);
    wrf32d(0x817fdf8cu, f4);
    wrf32d(0x817fdf90u, f0);
    wrf32d(0x817fdf94u, f2);
    wrf32d(0x817fdf98u, f4);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdfa0u, f5);
    wrf32d(0x817fdfa4u, f1);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfacu, f2);
    wrf32d(0x817fdfb0u, f1);
    wrf32d(0x817fdfb4u, f0);
    ctr = 4u;
    do {
        f4 = (f64)rdf32(r6 + 0x9cu);
        f6 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) * f4);
        f10 = (f64)rdf32(r6 + 0x98u);
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0x1cu) * f4);
        f9 = ppc_fmadds((f64)rdf32(param_2), f10, (f64)(f32)((f64)rdf32(param_2 + 0x10u) * f4));
        f4 = (f64)(f32)((f64)rdf32(param_2 + 0x18u) * f4);
        f8 = (f64)rdf32(r6 + 0xa0u);
        f6 = ppc_fmadds((f64)rdf32(param_2 + 4u), f10, f6);
        f4 = ppc_fmadds((f64)rdf32(param_2 + 8u), f10, f4);
        f0 = (f64)rdf32(r6 + 0xa4u);
        f1 = ppc_fmadds((f64)rdf32(param_2 + 0x2cu), f8, ppc_fmadds((f64)rdf32(param_2 + 0xcu), f10, f1));
        f3 = (f64)rdf32(param_2 + 0x28u);
        f5 = ppc_fmadds((f64)rdf32(param_2 + 0x24u), f8, f6);
        wrf32d(r7, ppc_fmadds((f64)rdf32(param_2 + 0x20u), f8, f9));
        f0 = (f64)(f32)(f0 + f1);
        wrf32d(r7 + 4u, f5);
        r6 = r6 + 0x10u;
        wrf32d(r7 + 8u, ppc_fmadds(f3, f8, f4));
        wrf32d(r7 + 0xcu, f0);
        r7 = r7 + 0x10u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0x817fdf58u;
    f11 = (f64)rdf32(0x817fdf48u);
    f9 = (f64)rdf32(0x817fdf4cu);
    f7 = (f64)rdf32(0x817fdf50u);
    f13 = (f64)rdf32(0x817fdf54u);
    f6 = (f64)rdf32(0x80572838u);
    f0 = (f64)rdf32(0x8057283cu);
    ctr = 8u;
    do {
        f12 = (f64)rdf32(r3);
        f10 = (f64)rdf32(r3 + 4u);
        f8 = (f64)rdf32(r3 + 8u);
        f2 = (f64)(f32)(f13 + (f64)(f32)((f64)(f32)(f8 * f7) + (f64)(f32)((f64)(f32)(f12 * f11) + (f64)(f32)(f10 * f9))));
        if (f2 > (f64)rdf32((u32)param_3 + 0xe4u)) {
            r31 = r31 + 1u;
        } else {
            if (f2 < (f64)rdf32((u32)param_3 + 0xe0u)) {
                r12 = r12 + 1u;
            } else {
                f28 = (f64)(f32)px_fdiv(f6, f2);
                r0 = 1u;
                f5 = (f64)(f32)(f8 * (f64)rdf32(0x817fdf20u));
                f8 = (f64)(f32)(f8 * (f64)rdf32(0x817fdf30u));
                f2 = (f64)(f32)(f28 * (f64)(f32)((f64)rdf32(0x817fdf24u) + (f64)(f32)(f5 + (f64)(f32)((f64)(f32)(f12 * (f64)rdf32(0x817fdf18u)) + (f64)(f32)(f10 * (f64)rdf32(0x817fdf1cu))))));
                f1 = (f64)(f32)(f28 * (f64)(f32)((f64)rdf32(0x817fdf34u) + (f64)(f32)(f8 + (f64)(f32)((f64)(f32)(f12 * (f64)rdf32(0x817fdf28u)) + (f64)(f32)(f10 * (f64)rdf32(0x817fdf2cu))))));
                if (f2 < f0) {
                    r0 = 0u;
                    r8 = r8 + 1u;
                } else {
                    if (f2 > f6) {
                        r0 = 0u;
                        r10 = r10 + 1u;
                    }
                }
                if (f1 < f0) {
                    r0 = 0u;
                    r9 = r9 + 1u;
                } else {
                    if (f1 > f6) {
                        r0 = 0u;
                        r11 = r11 + 1u;
                    }
                }
                if (r0 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
        }
        r3 = r3 + 0xcu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (r12 == 8u || r31 == 8u) {
        r3 = 0u;
    } else {
        if (r8 == 8u || r10 == 8u) {
            r3 = 0u;
        } else {
            if (r9 == 8u || r11 == 8u) {
                r3 = 0u;
            } else {
                r3 = 1u;
            }
        }
    }
    return r3;
}
