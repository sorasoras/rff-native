#include "tc_rt.h"

void fn_801efefc(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        f1 = tc_callf(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            r4 = rd32(param_1 + 0x120u);
            if (r4 == 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0xa4u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    return;
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xd0u), &a);
                wr32(param_1 + 0x120u, 2u);
            } else {
                if (r4 == 1u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_1) + 0xacu), &a);
                    if (r3 != 0u) {
                        return;
                    }
                    wr32(param_1 + 0x120u, rd32(param_1 + 0x124u));
                } else {
                    if (r4 == 2u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(param_1) + 0xa8u), &a);
                        if (r3 != 0u) {
                            return;
                        }
                        wr32(param_1 + 0x120u, 3u);
                    } else {
                        if (r4 == 3u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
                        } else {
                            if (r4 == 4u) {
                                a.r[0] = param_1;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(param_1) + 0xb4u), &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 != 0u) {
                                    return;
                                }
                                a.r[0] = param_1;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(param_1) + 0xd8u), &a);
                                wr32(param_1 + 0x120u, 5u);
                            } else {
                                if (r4 == 5u) {
                                    a.r[0] = param_1;
                                    a.r[1] = r4;
                                    a.f[0] = f1;
                                    r3 = tc_call(rd32(rd32(param_1) + 0xb8u), &a);
                                    if (r3 != 0u) {
                                        return;
                                    }
                                    f1 = (f64)rdf32(0x80576584u);
                                    wr32(param_1 + 0x120u, 6u);
                                    a.f[0] = f1;
                                    a.r[0] = param_1;
                                    (void)tc_call(0x800da490u, &a);
                                    a.f[0] = (f64)rdf32(0x80576588u);
                                    a.r[0] = param_1;
                                    (void)tc_call(0x800da4b8u, &a);
                                    wr32(param_1 + 0x13cu, 1u);
                                } else {
                                    if (r4 == 6u) {
                                        a.r[0] = param_1;
                                        a.r[1] = r4;
                                        a.f[0] = f1;
                                        r3 = tc_call(rd32(rd32(param_1) + 0xbcu), &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                        if (r3 != 0u) {
                                            return;
                                        }
                                        wr32(param_1 + 0x120u, 7u);
                                        a.r[0] = param_1;
                                        a.r[1] = r4;
                                        a.f[0] = f1;
                                        (void)tc_call(rd32(rd32(param_1) + 0xdcu), &a);
                                    } else {
                                        if (r4 == 7u) {
                                            a.r[0] = param_1;
                                            a.r[1] = r4;
                                            a.f[0] = f1;
                                            r3 = tc_call(rd32(rd32(param_1) + 0xc0u), &a);
                                            if (r3 != 0u) {
                                                return;
                                            }
                                            a.r[0] = param_1;
                                            (void)tc_call(0x800da354u, &a);
                                        } else {
                                            a.r[0] = param_1;
                                            a.r[1] = r4;
                                            a.f[0] = f1;
                                            (void)tc_call(rd32(rd32(param_1) + 0xc4u), &a);
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
