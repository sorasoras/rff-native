#include "tc_rt.h"

void fn_8017b820(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r28 = rd32(0x8046ad24u);
    f30 = (f64)rdf32(0x80575020u);
    f31 = (f64)rdf32(0x80575024u);
    for (;;) {
        if (r28 == 0u) {
            return;
        }
        r3 = r28;
        r28 = rd32(r28);
        r27 = rd32(r3 + 8u);
        r3 = rd32(r27 + 0x2cu);
        if (r3 != 0u && rd32(r3 + 0xb8u) == 0u) {
            if (rd32(param_r3 + 0x128u) != 0x19u) {
                r3 = rd32(r3 + 0x5c0u);
                a.r[0] = r3;
                r3 = tc_call(0x800cd6e4u, &a);
                r3 = r3 & 0xffu;
                if (rd32(param_r3 + 0x128u) != r3) continue;
            }
            f0 = (f64)rdf32(0x804890d0u);
            f2 = (f64)rdf32(0x804890c8u);
            wrf32d(0x817fdf94u, f30);
            f1 = (f64)rdf32(0x804890ccu);
            wrf32d(0x817fdf78u, f30);
            wrf32d(0x817fdf70u, f30);
            wrf32d(0x817fdf6cu, f30);
            wrf32d(0x817fdf68u, f30);
            wrf32d(0x817fdfa8u, f30);
            wrf32d(0x817fdfa4u, f30);
            wrf32d(0x817fdfa0u, f30);
            wr32(0x817fdf60u, 0u);
            wrf32d(0x817fdf74u, f2);
            wrf32d(0x817fdf78u, f1);
            wrf32d(0x817fdf7cu, f0);
            wrf32d(0x817fdf94u, f2);
            wrf32d(0x817fdf98u, f1);
            wrf32d(0x817fdf9cu, f0);
            wr32(0x817fdfc4u, 0u);
            wr32(0x817fdfbcu, 0u);
            wr32(0x817fdfc0u, 0u);
            wrf32d(0x817fdf64u, f31);
            wrf32d(0x817fdfb8u, f30);
            wrf32d(0x817fdfb4u, f30);
            wrf32d(0x817fdfb0u, f30);
            wrf32d(0x817fdfacu, f30);
            wrf32d(0x817fdf8cu, f30);
            wrf32d(0x817fdf88u, f30);
            wrf32d(0x817fdf84u, f30);
            wrf32d(0x817fdf80u, f30);
            r0 = rd32(r27 + 0xcu);
            wr32(0x817fdf54u, rd32(r27 + 8u));
            wr32(0x817fdf58u, r0);
            wr32(0x817fdf5cu, rd32(r27 + 0x10u));
            r0 = rd32(r27 + 0x18u);
            wr32(0x817fdf48u, rd32(r27 + 0x14u));
            wr32(0x817fdf4cu, r0);
            wr32(0x817fdf50u, rd32(r27 + 0x1cu));
            f1 = (f64)rdf32(r27 + 0x20u);
            if (rd32(r27 + 0x38u) != 2u) {
                a.f[0] = f1;
                a.r[0] = param_r3 + 0xacu;
                a.r[1] = 0x817fdf60u;
                a.r[2] = 0x817fdf54u;
                a.r[3] = 0x817fdf48u;
                r3 = tc_call(0x800ca994u, &a);
                if (r3 != 0u) break;
            } else {
                f3 = (f64)rdf32(0x817fdf5cu);
                f0 = (f64)(f32)((f64)rdf32(param_r3 + 0xc0u) + f1);
                c0lt = f3 < f0;
                f2 = (f64)rdf32(0x817fdf54u);
                r5 = (((c0lt << 0x1fu) | ((f3 > f0) << 0x1eu) | ((c0lt || (f3 == f0)) << 0x1du) | (((f3 != f3) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                f0 = (f64)(f32)((f64)rdf32(param_r3 + 0xb8u) + f1);
                c0lt = f2 < f0;
                r4 = (((c0lt << 0x1fu) | ((f2 > f0) << 0x1eu) | ((c0lt || (f2 == f0)) << 0x1du) | (((f2 != f2) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                f0 = (f64)(f32)((f64)rdf32(param_r3 + 0xacu) - f1);
                c0lt = f0 < f2;
                r3 = (((c0lt << 0x1fu) | ((f0 > f2) << 0x1eu) | ((c0lt || (f0 == f2)) << 0x1du) | (((f0 != f0) || (f2 != f2)) << 0x1cu)) >> 0x1du) & 1u;
                f0 = (f64)(f32)((f64)rdf32(param_r3 + 0xb4u) - f1);
                c0lt = f0 < f3;
                if ((r5 & (r4 & (r3 & ((((c0lt << 0x1fu) | ((f0 > f3) << 0x1eu) | ((c0lt || (f0 == f3)) << 0x1du) | (((f0 != f0) || (f3 != f3)) << 0x1cu)) >> 0x1du) & 1u)))) != 0u) {
                    return;
                }
            }
        }
    }
    return;
}
