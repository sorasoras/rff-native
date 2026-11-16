#include "tc_rt.h"

u32 fn_8007b504(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    r5 = (u32)param_3;
    wr32(0x817fdf30u, 0x817fe000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f5 = (f64)rdf32(param_1);
    f4 = (f64)rdf32(param_1 + 4u);
    r6 = 0x817fdf38u;
    f3 = (f64)rdf32(param_1 + 8u);
    r7 = 0u;
    f2 = (f64)rdf32(param_1 + 0xcu);
    r8 = 0u;
    f1 = (f64)rdf32(param_1 + 0x10u);
    r9 = 0u;
    f0 = (f64)rdf32(param_1 + 0x14u);
    r10 = 0u;
    wrf32d(0x817fdf78u, f5);
    r11 = 0u;
    r12 = 0u;
    wrf32d(0x817fdf7cu, f4);
    wrf32d(0x817fdf80u, f3);
    wrf32d(0x817fdf84u, f2);
    wrf32d(0x817fdf88u, f4);
    wrf32d(0x817fdf8cu, f3);
    wrf32d(0x817fdf90u, f5);
    wrf32d(0x817fdf94u, f1);
    wrf32d(0x817fdf98u, f3);
    wrf32d(0x817fdf9cu, f2);
    wrf32d(0x817fdfa0u, f1);
    wrf32d(0x817fdfa4u, f3);
    wrf32d(0x817fdfa8u, f5);
    wrf32d(0x817fdfacu, f4);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfb4u, f2);
    wrf32d(0x817fdfb8u, f4);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfc0u, f5);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfccu, f2);
    wrf32d(0x817fdfd0u, f1);
    wrf32d(0x817fdfd4u, f0);
    ctr = 4u;
    do {
        f4 = (f64)rdf32(r5 + 0x9cu);
        f6 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) * f4);
        f10 = (f64)rdf32(r5 + 0x98u);
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0x1cu) * f4);
        f9 = ppc_fmadds((f64)rdf32(param_2), f10, (f64)(f32)((f64)rdf32(param_2 + 0x10u) * f4));
        f4 = (f64)(f32)((f64)rdf32(param_2 + 0x18u) * f4);
        f8 = (f64)rdf32(r5 + 0xa0u);
        f6 = ppc_fmadds((f64)rdf32(param_2 + 4u), f10, f6);
        f4 = ppc_fmadds((f64)rdf32(param_2 + 8u), f10, f4);
        f0 = (f64)rdf32(r5 + 0xa4u);
        f1 = ppc_fmadds((f64)rdf32(param_2 + 0x2cu), f8, ppc_fmadds((f64)rdf32(param_2 + 0xcu), f10, f1));
        f3 = (f64)rdf32(param_2 + 0x28u);
        f5 = ppc_fmadds((f64)rdf32(param_2 + 0x24u), f8, f6);
        wrf32d(r6, ppc_fmadds((f64)rdf32(param_2 + 0x20u), f8, f9));
        f0 = (f64)(f32)(f0 + f1);
        wrf32d(r6 + 4u, f5);
        r5 = r5 + 0x10u;
        wrf32d(r6 + 8u, ppc_fmadds(f3, f8, f4));
        wrf32d(r6 + 0xcu, f0);
        r6 = r6 + 0x10u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0x817fdf78u;
    f11 = (f64)rdf32(0x817fdf58u);
    f9 = (f64)rdf32(0x817fdf5cu);
    f7 = (f64)rdf32(0x817fdf60u);
    f13 = (f64)rdf32(0x817fdf64u);
    f6 = (f64)rdf32(0x8057283cu);
    f5 = (f64)rdf32(0x80572838u);
    f4 = (f64)rdf32(0x80572840u);
    ctr = 8u;
    do {
        f12 = (f64)rdf32(r3);
        f10 = (f64)rdf32(r3 + 4u);
        f8 = (f64)rdf32(r3 + 8u);
        f0 = (f64)(f32)(f6 * (f64)(f32)(f13 + (f64)(f32)((f64)(f32)(f8 * f7) + (f64)(f32)((f64)(f32)(f12 * f11) + (f64)(f32)(f10 * f9)))));
        if (f0 > f5) {
            r12 = r12 + 1u;
        } else {
            if (f0 < f4) {
                r11 = r11 + 1u;
            } else {
                r0 = 1u;
                f1 = (f64)(f32)((f64)rdf32(0x817fdf44u) + (f64)(f32)((f64)(f32)(f8 * (f64)rdf32(0x817fdf40u)) + (f64)(f32)((f64)(f32)(f12 * (f64)rdf32(0x817fdf38u)) + (f64)(f32)(f10 * (f64)rdf32(0x817fdf3cu)))));
                f0 = (f64)(f32)((f64)rdf32(0x817fdf54u) + (f64)(f32)((f64)(f32)(f8 * (f64)rdf32(0x817fdf50u)) + (f64)(f32)((f64)(f32)(f12 * (f64)rdf32(0x817fdf48u)) + (f64)(f32)(f10 * (f64)rdf32(0x817fdf4cu)))));
                if (f1 < f6) {
                    r0 = 0u;
                    r7 = r7 + 1u;
                } else {
                    if (f1 > f5) {
                        r0 = 0u;
                        r9 = r9 + 1u;
                    }
                }
                if (f0 < f6) {
                    r0 = 0u;
                    r8 = r8 + 1u;
                } else {
                    if (f0 > f5) {
                        r0 = 0u;
                        r10 = r10 + 1u;
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
    if (r11 == 8u || r12 == 8u) {
        r3 = 0u;
    } else {
        if (r7 == 8u || r9 == 8u) {
            r3 = 0u;
        } else {
            if (r8 == 8u || r10 == 8u) {
                r3 = 0u;
            } else {
                r3 = 1u;
            }
        }
    }
    return r3;
}
