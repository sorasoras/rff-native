#include "tc_rt.h"

u32 fn_800caf1c(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if (rd32(param_2 + 0x18u) != 0u) {
        if ((f64)rdf32(0x80572f6cu) == (f64)rdf32(param_2 + 0x28u)) {
            a.r[0] = param_2;
            a.r[1] = param_3;
            r3 = tc_call(0x800932f8u, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
        } else {
            f3 = (f64)rdf32(param_2 + 0x2cu);
            f6 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) + f3);
            f4 = (f64)(f32)((f64)rdf32(param_2 + 0xcu) + f3);
            f0 = (f64)(f32)((f64)rdf32(param_2) - f3);
            f5 = (f64)rdf32(param_2 + 0x10u);
            f2 = (f64)(f32)((f64)rdf32(param_2 + 8u) - f3);
            wrf32d(0x817fdf5cu, (f64)rdf32(param_2 + 4u));
            wrf32d(0x817fdf58u, f0);
            wrf32d(0x817fdf60u, f2);
            wrf32d(0x817fdf64u, f4);
            wrf32d(0x817fdf68u, f5);
            wrf32d(0x817fdf6cu, f6);
            a.r[0] = 0x817fdf58u;
            a.r[1] = param_3;
            r3 = tc_call(0x800932f8u, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
        }
        r7 = rd32(param_4 + 0x64u);
        f5 = (f64)rdf32(0x80572f6cu);
        f4 = (f64)rdf32(0x804890c8u);
        f3 = (f64)rdf32(0x804890ccu);
        wrf32d(0x817fdfa4u, f5);
        f31 = (f64)(f32)(param_1 * param_1);
        f0 = (f64)rdf32(0x80572f70u);
        f2 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdf8cu, f5);
        wrf32d(0x817fdfacu, f5);
        wrf32d(0x817fdf80u, f5);
        wrf32d(0x817fdf7cu, f5);
        wrf32d(0x817fdf78u, f5);
        wrf32d(0x817fdfb8u, f5);
        wrf32d(0x817fdfb4u, f5);
        wrf32d(0x817fdfb0u, f5);
        wr32(0x817fdf70u, 0u);
        wrf32d(0x817fdf84u, f4);
        wrf32d(0x817fdf88u, f3);
        wrf32d(0x817fdf8cu, f2);
        wrf32d(0x817fdfa4u, f4);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdfacu, f2);
        wr32(0x817fdfd4u, r7);
        wr32(0x817fdfccu, 0u);
        wr32(0x817fdfd0u, 0u);
        wrf32d(0x817fdf74u, f0);
        wrf32d(0x817fdfc8u, f5);
        wrf32d(0x817fdfc4u, f5);
        wrf32d(0x817fdfc0u, f5);
        wrf32d(0x817fdfbcu, f5);
        wrf32d(0x817fdf9cu, f5);
        wrf32d(0x817fdf98u, f5);
        wrf32d(0x817fdf94u, f5);
        wrf32d(0x817fdf90u, f5);
        a.f[0] = param_1;
        a.r[0] = param_2;
        a.r[1] = 0x817fdf70u;
        a.r[2] = param_5;
        a.r[3] = param_6;
        r3 = tc_call(0x800cb218u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r6 = rd32(0x817fdf7cu);
            r0 = rd32(0x817fdf80u);
            wr32(0x817fdf48u, rd32(0x817fdf78u));
            wr32(0x817fdf4cu, r6);
            wr32(0x817fdf50u, r0);
            a.r[0] = 0x817fdf48u;
            a.r[1] = param_5;
            a.r[2] = 0x817fdf48u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdf48u;
            f1 = tc_callf(0x80234428u, &a);
            wrf32d(0x817fdf74u, f1);
            if (rd32(param_4) != 0u) {
                f1 = (f64)(f32)f1;
                if (!(f1 < (f64)rdf32(param_4 + 4u))) {
                    r3 = 0u;
                    return r3;
                }
            }
            if (f31 > (f64)rdf32(0x817fdf74u)) {
                wr32(param_4 + 0x60u, 1u);
            }
            r3 = 1u;
            wr32(param_4, rd32(0x817fdf70u));
            wrf32d(param_4 + 4u, (f64)rdf32(0x817fdf74u));
            r4 = rd32(0x817fdf7cu);
            wr32(param_4 + 8u, rd32(0x817fdf78u));
            wr32(param_4 + 0xcu, r4);
            wr32(param_4 + 0x10u, rd32(0x817fdf80u));
            r4 = rd32(0x817fdf88u);
            wr32(param_4 + 0x14u, rd32(0x817fdf84u));
            wr32(param_4 + 0x18u, r4);
            wr32(param_4 + 0x1cu, rd32(0x817fdf8cu));
            r4 = rd32(0x817fdf94u);
            wr32(param_4 + 0x20u, rd32(0x817fdf90u));
            wr32(param_4 + 0x24u, r4);
            r4 = rd32(0x817fdf9cu);
            wr32(param_4 + 0x28u, rd32(0x817fdf98u));
            wr32(param_4 + 0x2cu, r4);
            wr16(param_4 + 0x30u, rd16(0x817fdfa0u));
            wr16(param_4 + 0x32u, rd16(0x817fdfa2u));
            r4 = rd32(0x817fdfa8u);
            wr32(param_4 + 0x34u, rd32(0x817fdfa4u));
            wr32(param_4 + 0x38u, r4);
            wr32(param_4 + 0x3cu, rd32(0x817fdfacu));
            r4 = rd32(0x817fdfb4u);
            wr32(param_4 + 0x40u, rd32(0x817fdfb0u));
            wr32(param_4 + 0x44u, r4);
            wr32(param_4 + 0x48u, rd32(0x817fdfb8u));
            r4 = rd32(0x817fdfc0u);
            wr32(param_4 + 0x4cu, rd32(0x817fdfbcu));
            wr32(param_4 + 0x50u, r4);
            r4 = rd32(0x817fdfc8u);
            wr32(param_4 + 0x54u, rd32(0x817fdfc4u));
            wr32(param_4 + 0x58u, r4);
            wr32(param_4 + 0x5cu, rd32(0x817fdfccu));
            wr32(param_4 + 0x60u, rd32(0x817fdfd0u));
            wr32(param_4 + 0x64u, rd32(0x817fdfd4u));
            wr32(param_4, 2u);
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
