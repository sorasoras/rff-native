#include "tc_rt.h"

void fn_801736ac(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800d9ffcu, &a);
        r4 = tc_lastr4();
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            r0 = rd32(param_1 + 0x120u);
            if (r0 == 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xa4u), &a);
            } else {
                if (r0 == 1u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x800da354u, &a);
                } else {
                    if (r0 == 3u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x800da354u, &a);
                    } else {
                        if (r0 == 6u) {
                            f1 = (f64)rdf32(0x80574e70u);
                            wr32(param_1 + 0x120u, 5u);
                            a.f[0] = f1;
                            a.r[0] = param_1;
                            (void)tc_call(0x800da490u, &a);
                            a.f[0] = (f64)rdf32(0x80574e74u);
                            a.r[0] = param_1;
                            (void)tc_call(0x800da4b8u, &a);
                        } else {
                            if (r0 != 5u) {
                                if (r0 == 4u) {
                                    wr32(param_1 + 0x120u, 6u);
                                    a.r[0] = param_1;
                                    a.r[1] = r4;
                                    a.f[0] = f1;
                                    f1 = tc_callf(rd32(rd32(param_1) + 0xb4u), &a);
                                    r4 = tc_lastr4();
                                    if (rd32(param_1 + 0xa4u) != 0u) {
                                        a.r[0] = param_1 + 0x80u;
                                        f1 = tc_callf(0x800cb5a8u, &a);
                                        r4 = tc_lastr4();
                                    }
                                    a.r[0] = param_1;
                                    a.r[1] = r4;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(rd32(param_1) + 0xacu), &a);
                                } else {
                                    if (r0 == 2u) {
                                        a.r[0] = param_1;
                                        a.r[1] = r4;
                                        a.f[0] = f1;
                                        (void)tc_call(rd32(rd32(param_1) + 0xa8u), &a);
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
