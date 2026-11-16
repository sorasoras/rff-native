#include "tc_rt.h"

u32 fn_800a8c40(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = rd32(param_1 + 0x2f4u);
    if ((f64)rdf32(param_1 + 0x2e0u) > (f64)rdf32(r30 + 8u)) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32(param_1 + 0x2dcu);
        f2 = (f64)(f32)(rdf64(0x80572b80u) * (f64)rdf32(r30 + 4u));
        if (f1 < -f2 || f1 > f2) {
            r3 = 0u;
        } else {
            if (rd32(param_1 + 0x2e8u) == 0u) {
                wr32(param_1 + 0x2e8u, 1u);
                r3 = rd32(param_1 + 0x1a4u);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r7 = rd32(r3);
                r6 = rd32(r3 + 4u);
                f4 = (f64)rdf32(0x80572b78u);
                wr32(0x817fdf84u, r7);
                f3 = (f64)rdf32(0x804890c8u);
                wr32(0x817fdf88u, r6);
                f2 = (f64)rdf32(0x804890ccu);
                r5 = rd32(r3 + 8u);
                f1 = (f64)rdf32(0x804890d0u);
                f0 = (f64)rdf32(0x80572b88u);
                wrf32d(0x817fdfa8u, f4);
                wr32(0x817fdf8cu, r5);
                wrf32d(0x817fdfa0u, f4);
                wrf32d(0x817fdf9cu, f4);
                wrf32d(0x817fdf98u, f4);
                wrf32d(0x817fdfd8u, f4);
                wrf32d(0x817fdfd4u, f4);
                wrf32d(0x817fdfd0u, f4);
                wr32(0x817fdf90u, 0u);
                wrf32d(0x817fdfa4u, f3);
                wrf32d(0x817fdfa8u, f2);
                wrf32d(0x817fdfacu, f1);
                wrf32d(0x817fdfc4u, f3);
                wrf32d(0x817fdfc8u, f2);
                wrf32d(0x817fdfccu, f1);
                wr32(0x817fdff4u, param_1);
                wr32(0x817fdfecu, 0u);
                wr32(0x817fdff0u, 0u);
                wrf32d(0x817fdf94u, f0);
                wrf32d(0x817fdfe8u, f4);
                wrf32d(0x817fdfe4u, f4);
                wrf32d(0x817fdfe0u, f4);
                wrf32d(0x817fdfdcu, f4);
                wrf32d(0x817fdfbcu, f4);
                wrf32d(0x817fdfb8u, f4);
                wrf32d(0x817fdfb4u, f4);
                wrf32d(0x817fdfb0u, f4);
                a.r[0] = param_1;
                a.r[1] = 0x804890c8u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r6 = rd32(r3 + 4u);
                f1 = (f64)rdf32(0x80572b78u);
                wr32(0x817fdf78u, rd32(r3));
                f0 = (f64)rdf32(0x80572b8cu);
                wr32(0x817fdf7cu, r6);
                wr32(0x817fdf80u, rd32(r3 + 8u));
                wrf32d(0x817fdf7cu, f1);
                wrf32d(0x817fdf88u, f1);
                a.f[0] = (f64)(f32)(f0 * (f64)rdf32(param_1 + 0xb0u));
                a.r[0] = 0x8046d8c8u;
                a.r[1] = 0x817fdf90u;
                a.r[2] = 0x817fdf84u;
                a.r[3] = 0x817fdf78u;
                a.r[4] = rd32(param_1 + 0xbcu);
                a.r[5] = 0xffffu;
                r3 = tc_call(0x8008c458u, &a);
                if (r3 != 0u) {
                    wr32(param_1 + 0x2e8u, 2u);
                }
            }
            if (rd32(r30) != 0u && rd32(param_1 + 0x2e8u) == 2u) {
                r3 = 0u;
            } else {
                r3 = 1u;
            }
        }
    }
    return r3;
}
