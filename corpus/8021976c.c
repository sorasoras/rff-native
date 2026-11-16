#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8021976c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = 0u;
    if ((u32)rd8((u32)param_1 + 2u) != 0u) {
        r4 = 1u;
    }
    if ((u32)rd8((u32)param_1 + 3u) != 0u) {
        r4 = r4 + 1u;
    }
    if ((u32)rd8((u32)param_1 + 4u) != 0u) {
        r4 = r4 + 1u;
    }
    if (r4 == 3u) {
        wr8((u32)param_1 + 1u, 1u);
        wr32((u32)param_1 + 0x6cu, 4u);
    }
    r28 = rd32((u32)param_1 + 0x44u);
    if (r28 != 0xffffffffu) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u) {
            r29 = rd32((u32)param_1 + 0x34u);
            r3 = tc_call(0x80218620u, &a);
            if (r3 == r29) {
                a.r[0] = rd32((u32)param_1 + 0x68u);
                r3 = tc_call(0x800a4500u, &a);
                r31 = r3;
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80218684u, &a);
                r3 = rd32(r3 + 0x3e0u);
                r29 = 0xd7u;
                r28 = r3 + ((r28 << 4u) & 0xfffffff0u);
                r0 = rd32(r28 + 0xcu);
                if (r0 != 0xffffffffu) {
                    r29 = r0;
                }
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x8021866cu, &a);
                r3 = rd32(r3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = rd32((u32)param_1 + 0x68u);
                a.r[2] = r29;
                r3 = tc_call(0x800ed39cu, &a);
                f1 = tc_lastf();
                r29 = (u32)(s8)r3;
                if (r31 != 0u) {
                    r5 = rd32((u32)param_1 + 0x38u);
                    r4 = rd32((u32)param_1 + 0x3cu);
                    r12 = rd32(rd32(r31) + 0x28u);
                    wr32(0x817fdfe0u, rd32((u32)param_1 + 0x40u));
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = (f64)rdf32(0x80576a14u);
                    f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(r3) - (f64)px_w2f(r5)));
                    r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
                    if (r0 != 0u) {
                        f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(r3 + 8u) - (f64)rdf32(0x817fdfe0u)));
                        r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        if (r29 == rd32(r31 + 0x100u)) {
                            r3 = rd32(r28 + 0xcu);
                            if (r3 == rd32(r28 + 4u) && r3 == rd32(r28 + 8u)) {
                                return;
                            }
                            r0 = rd32((u32)param_1 + 0x70u) + 1u;
                            wr32((u32)param_1 + 0x70u, r0);
                            if ((s32)r0 < 300) {
                                return;
                            }
                            r3 = tc_call(0x80040b64u, &a);
                            if ((r3 & 1u) != 0u) {
                                r28 = rd32(r28 + 4u);
                            } else {
                                r28 = rd32(r28 + 8u);
                            }
                            if (r28 == 0xffffffffu) {
                                return;
                            }
                            a.r[0] = (u32)param_1;
                            r3 = tc_call(0x8021866cu, &a);
                            r3 = rd32(r3 + 0xcu);
                            a.r[0] = r3;
                            a.r[1] = rd32((u32)param_1 + 0x68u);
                            a.r[2] = r28;
                            r3 = tc_call(0x800ed39cu, &a);
                            a.r[0] = r31;
                            a.r[1] = (u32)(s8)r3;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = (f64)rdf32(0x805769d0u);
                            a.f[1] = 0.0;
                            (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
                        } else {
                            if (rd32(r31 + 0x110u) != 0u) {
                                r0 = rd32(r28 + 0xcu);
                                r29 = 0xd7u;
                                if (r0 != 0xffffffffu) {
                                    r29 = r0;
                                }
                                a.r[0] = (u32)param_1;
                                r3 = tc_call(0x8021866cu, &a);
                                r3 = rd32(r3 + 0xcu);
                                a.r[0] = r3;
                                a.r[1] = rd32((u32)param_1 + 0x68u);
                                a.r[2] = r29;
                                r3 = tc_call(0x800ed39cu, &a);
                                a.r[0] = r31;
                                a.r[1] = (u32)(s8)r3;
                                a.r[2] = 1u;
                                a.r[3] = 0u;
                                a.f[0] = (f64)rdf32(0x805769d0u);
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
                                wr32((u32)param_1 + 0x70u, 0u);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
