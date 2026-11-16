#include "tc_rt.h"

void fn_801c7b88(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x800d9ffcu, &a);
    r4 = tc_lastr4();
    if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
        r0 = rd32(param_1 + 0x124u);
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0xa4u), &a);
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801c81f0u, &a);
        } else {
            if (r0 == 1u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0xa8u), &a);
            } else {
                if (r0 == 2u) {
                    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x138u) - (f64)rdf32(0x80575da0u));
                    if (f1 < (f64)rdf32(0x80575db8u)) {
                        wr32(param_1 + 0x124u, 4u);
                    }
                    wrf32d(param_1 + 0x138u, f1);
                } else {
                    if (r0 == 4u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
                    } else {
                        if (r0 == 5u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 0xb4u), &a);
                        } else {
                            if (r0 == 6u) {
                                a.r[0] = param_1;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(param_1) + 0xacu), &a);
                            } else {
                                if (r0 == 7u) {
                                    a.r[0] = param_1;
                                    (void)tc_call(0x800da354u, &a);
                                } else {
                                    if (r0 == 3u) {
                                        a.r[0] = param_1;
                                        r3 = tc_call(0x801c8358u, &a);
                                        if (r3 != 0u) {
                                            wr32(param_1 + 0x124u, 1u);
                                        }
                                    }
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
