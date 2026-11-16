#include "tc_rt.h"

void fn_801757d4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800d9ffcu, &a);
        f2 = 0.0;
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            r4 = rd32(param_1 + 0x124u);
            if (r4 == 0u) {
                r4 = param_1 + 0x80u;
                if (r4 != 0u) {
                    wr32(param_1 + 0x98u, 0u);
                    r0 = rd32(param_1 + 0x90u);
                    wr32(0x817fdfe4u, rd32(param_1 + 0x8cu));
                    wr32(0x817fdfe8u, r0);
                    wr32(0x817fdfecu, rd32(param_1 + 0x94u));
                    a.r[0] = 0x817fdfe4u;
                    a.r[1] = r4;
                    a.r[2] = 0x817fdfe4u;
                    (void)tc_call(0x802343a4u, &a);
                    r4 = tc_lastr4();
                    f2 = (f64)rdf32(0x80574f4cu);
                    f1 = (f64)(f32)(f2 * (f64)rdf32(0x817fdfe4u));
                    wrf32d(param_1 + 0x12cu, (f64)(f32)((f64)rdf32(0x80574f48u) * f1));
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                f1 = tc_callf(rd32(rd32(param_1) + 0xa4u), &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0xacu), &a);
                wr32(param_1 + 0x124u, 1u);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r5 = rd32(r3);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd8u, r5);
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(r3 + 8u));
                a.r[0] = param_1;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(param_1 + 0x12cu);
                a.f[1] = (f64)rdf32(param_1 + 0x128u);
                (void)tc_call(rd32(rd32(param_1) + 0xb8u), &a);
            } else {
                if (r4 == 1u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
                } else {
                    if (r4 == 2u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x800da354u, &a);
                    } else {
                        if (r4 >= 3u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 0xb4u), &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
