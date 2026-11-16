#include "tc_rt.h"

void fn_801a9f2c(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r7 = 0x80471ed0u;
    r5 = 0u;
    ctr = 0xau;
    for (;;) {
        r8 = rd32(r7 + 0xbf8u);
        if (r8 != 0u) {
            f0 = (f64)rdf32(r8 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_2);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r8 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r8 + 0x20u);
                    f1 = (f64)rdf32(param_2 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r8 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) {
                r0 = 1u;
                break;
            }
        }
        r8 = rd32(r7 + 0xbfcu);
        if (r8 != 0u) {
            f0 = (f64)rdf32(r8 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_2);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r8 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r8 + 0x20u);
                    f1 = (f64)rdf32(param_2 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r8 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) {
                r0 = 1u;
                break;
            }
        }
        r7 = r7 + 8u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r0 = 0u;
            break;
        }
    }
    if (r0 != 0u) {
        r0 = rd32((u32)param_1 + 0x9f0u);
        c0lt = (s32)r0 < 3;
        if (r0 == 3u) {
            r5 = rd32((u32)param_1 + 0x5c0u);
            a.r[0] = 0x80471ed0u;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = (u32)rd8((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb9720fu);
            a.r[4] = (u32)rd8(((r5 - 0x1f8u) * 0x14u) - 0x7fb60831u);
            a.r[5] = 1u;
            a.r[6] = 1u;
            (void)tc_call(0x80092038u, &a);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 5;
            if (r0 == 5u) {
                a.r[0] = 0x80471ed0u;
                a.r[1] = param_2;
                a.r[2] = rd32((u32)param_1 + 0x5c0u);
                a.r[3] = 1u;
                a.r[4] = 1u;
                (void)tc_call(0x80091eccu, &a);
            } else if (c0lt) {
                a.r[0] = 0x80471ed0u;
                a.r[1] = rd32((u32)param_1 + 0x9fcu);
                a.r[2] = rd32((u32)param_1 + 0xa00u);
                a.r[3] = param_2;
                a.r[4] = rd32((u32)param_1 + 0xa04u) & 0xffu;
                (void)tc_call(0x80091e08u, &a);
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.r[0] = 0x80471ed0u;
                a.r[1] = param_2;
                a.r[2] = 1u;
                a.r[3] = 1u;
                r3 = tc_call(0x80091b30u, &a);
                if (r3 != 0u) {
                    (void)tc_call(0x80097bd8u, &a);
                }
            } else if (!c0lt) {
                a.r[0] = 0x80471ed0u;
                a.r[1] = param_2;
                a.r[2] = 1u;
                a.r[3] = 1u;
                r3 = tc_call(0x80091c94u, &a);
                wr32((u32)param_1 + 0x9f8u, rd32((u32)param_1 + 0x9f8u) | r3);
            }
        }
    }
    return;
}
