#include "tc_rt.h"

void fn_80164a3c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_1;
    f1 = tc_callf(0x800d9ffcu, &a);
    r3 = rd32(param_1 + 0x74u);
    if ((u32)((s32)r3 >> 31) != 0u) {
        r0 = rd32(param_1 + 0x120u);
        if (r0 == 0u) {
            r4 = rd32(param_1 + 0x128u);
            if (r4 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                (void)tc_call(0x800da840u, &a);
            }
            wr32(param_1 + 0x120u, 2u);
        } else {
            if (r0 == 1u) {
                a.r[0] = param_1;
                (void)tc_call(0x80164cb8u, &a);
            } else {
                if (r0 == 3u) {
                    wr32(param_1 + 0x74u, r3 & 0x7fffffffu);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
                } else {
                    if (r0 == 4u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x80164cb8u, &a);
                        wr32(param_1 + 0x120u, 2u);
                    } else {
                        if (r0 == 2u) {
                            r3 = rd32(param_1 + 0x124u);
                            if (r0 != r3 && r3 != 5u) {
                                wr32(param_1 + 0x120u, r3);
                                wr32(param_1 + 0x124u, 5u);
                            }
                            if (rd32(param_1 + 0x134u) != 0xffffffffu) {
                                r3 = rd32(param_1 + 0x138u);
                                if ((s32)r3 <= 0) {
                                    f1 = tc_callf(0x80040a00u, &a);
                                    r4 = tc_lastr4();
                                    f0 = (f64)rdf32(0x80574b14u);
                                    if (!((f1 > f0) || (f1 == f0))) {
                                        return;
                                    }
                                    wr32(param_1 + 0x138u, rd32(param_1 + 0x13cu));
                                    a.r[0] = param_1;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                                    r0 = rd32(r3 + 4u);
                                    wr32(0x817fdfd4u, rd32(r3));
                                    wr32(0x817fdfd8u, r0);
                                    wr32(0x817fdfdcu, rd32(r3 + 8u));
                                    f1 = tc_callf(0x80040a00u, &a);
                                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574b1cu));
                                    f31 = (f64)(f32)((f64)rdf32(0x80574b18u) * f1);
                                    f1 = tc_callf(0x80040a00u, &a);
                                    f0 = (f64)rdf32(0x80574b18u);
                                    f3 = (f64)(f32)(f1 - (f64)rdf32(0x80574b1cu));
                                    f2 = (f64)rdf32(0x80574b20u);
                                    wrf32d(0x817fdfc8u, f31);
                                    f1 = (f64)rdf32(0x80574b24u);
                                    f2 = (f64)(f32)(f2 * f3);
                                    wrf32d(0x817fdfccu, f0);
                                    wrf32d(0x817fdfd0u, f2);
                                    a.f[0] = f1;
                                    a.r[0] = rd32(param_1 + 0x134u);
                                    a.r[1] = 0x817fdfd4u;
                                    a.r[2] = 0x817fdfc8u;
                                    a.r[3] = 0x804b15c0u;
                                    (void)tc_call(0x800d782cu, &a);
                                } else {
                                    wr32(param_1 + 0x138u, r3 - 1u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
