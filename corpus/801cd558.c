#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801cd558(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 != 1u) {
            if ((u32)param_2 == 2u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801ce724u, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801cec94u, &a);
            }
        } else {
            r0 = rd32((u32)param_1 + 0xd28u);
            if (r0 != 0u) {
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        if (r0 != 3u) {
                            if (r0 != 4u) {
                                if (r0 == 5u) {
                                    r31 = 0u;
                                }
                            } else {
                                r0 = rd32((u32)param_1 + 0xd18u) + 1u;
                                f2 = rdf64(0x80575ec8u);
                                f0 = (f64)rdf32(0x80575ed8u);
                                wr32((u32)param_1 + 0xd18u, r0);
                                f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2);
                                if ((f1 > f0) || (f1 == f0)) {
                                    wr32((u32)param_1 + 0xd28u, 5u);
                                }
                            }
                        } else {
                            r29 = 0u;
                            r3 = tc_call(0x80040b64u, &a);
                            if ((r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 4u) & 0xfffffffu) * 0x14u)) < 0xau) {
                                r29 = 1u;
                            }
                            r28 = 1u;
                            a.r[0] = (u32)param_1;
                            a.r[1] = r29;
                            r3 = tc_call(0x801cfa64u, &a);
                            if (r3 == 0u) {
                                r29 = 0u;
                                a.r[0] = (u32)param_1;
                                a.r[1] = 0u;
                                r3 = tc_call(0x801cfa64u, &a);
                                if (r3 == 0u) {
                                    r28 = 0u;
                                }
                            }
                            if (r28 == 0u) {
                                wr32((u32)param_1 + 0xd28u, 5u);
                            } else {
                                a.r[0] = (u32)param_1;
                                a.r[1] = r29;
                                a.r[2] = 5u;
                                a.r[3] = 0u;
                                (void)tc_call(0x801ce348u, &a);
                                wr32((u32)param_1 + 0xd28u, 4u);
                            }
                        }
                    } else if (rd32((u32)param_1 + 0x110u) != 0u) {
                        a.f[0] = (f64)rdf32(0x80575ed4u);
                        a.r[0] = (u32)param_1;
                        a.r[1] = 8u;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        (void)tc_call(0x801ccb44u, &a);
                        wr32((u32)param_1 + 0xd28u, 3u);
                    }
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801ce5f4u, &a);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x801cedbcu, &a);
                    if (rd32((u32)param_1 + 0xd24u) == 2u) {
                        f1 = (f64)rdf32(0x80575ed4u);
                        wr32((u32)param_1 + 0xd28u, 2u);
                        a.f[0] = f1;
                        a.r[0] = (u32)param_1;
                        a.r[1] = 3u;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        (void)tc_call(0x801ccb44u, &a);
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x801ce724u, &a);
                    }
                }
            } else if (rd32((u32)param_1 + 0x110u) != 0u) {
                f1 = (f64)rdf32(0x80575ed4u);
                wr32((u32)param_1 + 0xd28u, 1u);
                a.f[0] = f1;
                a.r[0] = (u32)param_1;
                a.r[1] = 2u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                (void)tc_call(0x801ccb44u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801ce388u, &a);
                f0 = (f64)rdf32(0x80575ea8u);
                wrf32d((u32)param_1 + 0xe88u, f0);
                wrf32d((u32)param_1 + 0xe8cu, f0);
            }
        }
    } else {
        f1 = (f64)rdf32(0x80575ed4u);
        wr32((u32)param_1 + 0xd18u, 0u);
        wr32((u32)param_1 + 0xd28u, 0u);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x801ccb44u, &a);
    }
    if ((s32)rd32((u32)param_1 + 0xd28u) < 2) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cea60u, &a);
    }
    return r31;
}
