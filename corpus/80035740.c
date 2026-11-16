#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80035740(u32 param_1, u32 param_2, u32 param_3, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    if ((u32)(s16)rd16(param_1 + 0x32u) == 2u) {
        r6 = rd32(rd32(param_1 + 0x4cu) + 0x2cu);
        r0 = (((0u - r6) | r6) >> 0x1fu) & 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        if (param_f1 < (f64)rdf32(0x80571e4cu)) {
            f1 = (f64)rdf32(0x80571e50u);
        }
        f2 = (f64)rdf32(0x80571e50u);
        wr16(param_1 + 0x30u, (u16)param_3);
        wr32(param_1 + 0x48u, param_2);
        wrf32d(param_1 + 0x54u, f2);
        wrf32d(param_1 + 0x58u, (f64)rdf32(0x80570640u));
        wrf32d(param_1 + 0x5cu, f2);
        wrf32d(param_1 + 0x60u, f1);
        if (f2 != f1) {
            wr16(param_1 + 0x30u, (u16)((param_3 & 0xffffu) | 2u));
        }
        r7 = 0u;
        while (r7 < rd32(param_1 + 0x34u)) {
            r0 = rd32(param_1 + 0x3cu) * r7;
            r7 = r7 + 1u;
            wr32(rd32(param_1 + 0x38u) + r0 + 0xc0u, 0u);
        }
        if (param_2 != 0u) {
            f31 = (f64)rdf32(0x80571e50u);
            r29 = 0u;
            f30 = (f64)rdf32(0x80571e4cu);
            r30 = 0u;
            while (r29 < rd32(param_2 + 8u)) {
                r0 = rd32(param_2 + 0xcu);
                r31 = r0 + r30;
                r0 = (u32)(s16)rd16(r30 + r0);
                r0 = r0 * 0x14u;
                a.r[0] = rd32(param_1 + 0x4cu);
                a.r[1] = rd32(param_2 + 0x10u) + r0;
                r3 = tc_call(0x80042818u, &a);
                if (r3 == 0xffffffffu) {
                    r4 = 0u;
                } else if ((s32)r3 < 0 || r3 >= rd32(param_1 + 0x34u)) {
                    r4 = 0u;
                } else {
                    r4 = rd32(param_1 + 0x38u) + (rd32(param_1 + 0x3cu) * r3);
                }
                if (r4 != 0u) {
                    if (((u32)rd16(r4 + 0x34u) & 0x800u) == 0u) {
                        if (rd32(r4 + 0x64u) == 0u || ((u32)rd16(r31 + 2u) & 3u) != 0u) {
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                    } else {
                        r0 = 0u;
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    wr32(r4 + 0xc0u, r31);
                    wrf32d(r4 + 0xc4u, f30);
                    if ((rd32(param_2 + 0x14u) & 1u) != 0u) {
                        f1 = (f64)rdf32(r31 + 8u);
                        if (f31 != f1) {
                            wrf32d(r4 + 0xc4u, (f64)(f32)px_fdiv((f64)rdf32(rd32(r4 + 0x3cu) + 0x38u), f1));
                        }
                    }
                }
                r30 = r30 + 0xcu;
                r29 = r29 + 1u;
            }
        }
    }
    return;
}
