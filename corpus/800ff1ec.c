#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800ff1ec(u32 param_r3)
{
    u32 r3 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32(param_r3 + 0x28u) != 0u) {
        r25 = 0u;
        r26 = 0u;
        while ((s32)r26 < (s32)rd32(param_r3 + 4u)) {
            a.r[0] = param_r3;
            a.r[1] = r26;
            r3 = tc_call(0x800fef38u, &a);
            r25 = r3;
            if (r3 != 0u) break;
            r26 = r26 + 1u;
        }
        if (r25 != 0u) {
            a.r[0] = r25;
            r3 = tc_call(0x802edce4u, &a);
            r26 = r3;
            a.r[0] = r25;
            r3 = tc_call(0x802edcd8u, &a);
            r24 = 0u;
            f31 = (f64)(f32)(px_b2f((u64)(r3 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80573c40u));
            while ((s32)r24 < (s32)rd32(param_r3 + 4u)) {
                a.r[0] = param_r3;
                a.r[1] = r24;
                r3 = tc_call(0x800ff190u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    r30 = rd32(r3 + 0x10u);
                    r29 = r3 + 0x10u;
                    while (r30 != r29) {
                        if (r30 == 0u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x80360724u;
                            a.r[1] = 0x23du;
                            a.r[2] = 0x80360700u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802e41c0u, &a);
                        }
                        a.f[0] = (f64)rdf32(param_r3 + 0xcu);
                        a.r[0] = param_r3;
                        a.r[1] = rd32(r30 + 8u);
                        a.r[2] = param_r3 + 0x14u;
                        f1 = tc_callf(0x800ff430u, &a);
                        r30 = rd32(r30);
                    }
                }
                r24 = r24 + 1u;
            }
            f1 = (f64)rdf32(0x80573c3cu);
            if (f1 != f31) {
                if (rd32(param_r3 + 0x24u) != 0u) {
                    wrf32d(param_r3 + 0xcu, (f64)(f32)((f64)rdf32(param_r3 + 0xcu) - f1));
                } else {
                    wrf32d(param_r3 + 0xcu, (f64)(f32)((f64)rdf32(param_r3 + 0xcu) + f1));
                }
            } else {
                wrf32d(param_r3 + 0xcu, (f64)rdf32(0x80573c30u));
            }
            if (rd32(param_r3 + 0x24u) != 0u) {
                f1 = (f64)rdf32(param_r3 + 0xcu);
                f0 = (f64)rdf32(0x80573c30u);
                if (f1 < f0) {
                    if (r26 == 0u) {
                        wrf32d(param_r3 + 0xcu, f0);
                        wr32(param_r3 + 0x24u, 0u);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_r3;
                        a.r[1] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x800ff574u, &a);
                    } else {
                        a.r[0] = r25;
                        r3 = tc_call(0x802edcd8u, &a);
                        wrf32d(param_r3 + 0xcu, (f64)(f32)(px_b2f((u64)(r3 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80573c40u)));
                    }
                }
            } else {
                a.r[0] = r25;
                r3 = tc_call(0x802edcd8u, &a);
                if ((f64)rdf32(param_r3 + 0xcu) > (f64)(f32)(px_b2f((u64)(r3 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80573c40u))) {
                    if (r26 == 0u) {
                        a.r[0] = r25;
                        r3 = tc_call(0x802edcd8u, &a);
                        f1 = rdf64(0x80573c40u);
                        wrf32d(param_r3 + 0xcu, (f64)(f32)(px_b2f((u64)(r3 & 0xffffu) | 0x4330000000000000ull) - f1));
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_r3;
                        a.r[1] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x800ff574u, &a);
                    } else {
                        wrf32d(param_r3 + 0xcu, (f64)rdf32(0x80573c30u));
                    }
                }
            }
        }
    }
    return;
}
