#include "tc_rt.h"

void fn_8008d3e8(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(param_1, param_2);
    f2 = (f64)rdf32(0x80572968u);
    wr32(param_1 + 4u, 0u);
    f1 = (f64)rdf32(0x8057296cu);
    wr32(param_1 + 8u, 0u);
    wrf32d(param_1 + 0xcu, (f64)rdf32(param_3));
    wrf32d(param_1 + 0x10u, (f64)rdf32(param_3 + 4u));
    wrf32d(param_1 + 0x14u, (f64)rdf32(param_3 + 8u));
    wrf32d(param_1 + 0x18u, f2);
    wrf32d(param_1 + 0x28u, f1);
    wrf32d(param_1 + 0x38u, f1);
    wrf32d(param_1 + 0x1cu, f1);
    wrf32d(param_1 + 0x2cu, f2);
    wrf32d(param_1 + 0x3cu, f1);
    wrf32d(param_1 + 0x20u, f1);
    wrf32d(param_1 + 0x30u, f1);
    wrf32d(param_1 + 0x40u, f2);
    wrf32d(param_1 + 0x24u, f1);
    wrf32d(param_1 + 0x34u, f1);
    wrf32d(param_1 + 0x44u, f1);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    wrf32d(param_1 + 0x50u, (f64)rdf32(param_3));
    wrf32d(param_1 + 0x54u, (f64)rdf32(param_3 + 4u));
    wrf32d(param_1 + 0x58u, (f64)rdf32(param_3 + 8u));
    wrf32d(param_1 + 0x5cu, f2);
    wrf32d(param_1 + 0x6cu, f1);
    wrf32d(param_1 + 0x7cu, f1);
    wrf32d(param_1 + 0x60u, f1);
    wrf32d(param_1 + 0x70u, f2);
    wrf32d(param_1 + 0x80u, f1);
    wrf32d(param_1 + 0x64u, f1);
    wrf32d(param_1 + 0x74u, f1);
    wrf32d(param_1 + 0x84u, f2);
    wrf32d(param_1 + 0x68u, f1);
    wrf32d(param_1 + 0x78u, f1);
    wrf32d(param_1 + 0x88u, f1);
    wr32(param_1 + 0x90u, 0u);
    wr32(param_1 + 0x98u, 0u);
    if ((u32)param_5 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        (void)tc_call(0x8008d9dcu, &a);
    }
    a.r[0] = param_1 + 0x8cu;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    wr32(param_1 + 0x94u, (u32)param_4);
    if ((u32)param_5 != 0u) {
        r0 = (u32)rd8(param_2 + 7u);
        r5 = r0 & 0xfu;
        if (r5 != 0u) {
            if (r0 == 1u || r0 == 2u) {
                if ((u32)rd8(param_2 + 3u) != 4u) {
                    wr8(param_2 + 7u, (u8)((u32)rd8(param_2 + 7u) & 0xf0u));
                } else {
                    r0 = (u32)rd8(param_2 + 1u);
                    if (r0 == 1u || r0 == 2u) {
                        if ((u32)rd8(param_2 + 7u) != 1u) {
                            r4 = 0u;
                        } else {
                            r4 = 1u;
                        }
                        a.r[0] = param_3;
                        a.r[1] = r4;
                        a.r[2] = param_1;
                        r3 = tc_call(0x80077cf0u, &a);
                        if (r3 == 0u) {
                            wr8(param_2 + 7u, (u8)((u32)rd8(param_2 + 7u) & 0xf0u));
                        }
                    } else {
                        wr8(param_2 + 7u, (u8)((u32)rd8(param_2 + 7u) & 0xf0u));
                    }
                }
            } else {
                if ((rd32(0x80475eb0u) + rd32(0x80475eb4u)) < 0xf0u) {
                    r5 = r5 - 3u;
                    a.r[0] = 0x80475e24u;
                    a.r[1] = param_3;
                    a.r[2] = r5;
                    (void)tc_call(0x8017c7acu, &a);
                }
                wr8(param_2 + 7u, 0u);
            }
        }
        if (rd32(0x80472f34u) >= 0x28u) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r0 = rd32(0x80492c58u);
            if ((r0 & 4u) == 0u) {
                if ((r0 & 8u) == 0u) {
                    if ((r0 & 0x10u) == 0u) {
                        r0 = r0 & 0x20u;
                        if (r0 != 0u) {
                            r3 = rd32(param_1);
                            if ((u32)rd8(r3 + 1u) == 3u) {
                                r0 = (u32)rd8(r3 + 2u);
                                if (r0 >= 5u && r0 <= 0xdu) {
                                    a.f[0] = (f64)rdf32(0x80572968u);
                                    a.r[0] = 0xc0u;
                                    a.r[1] = param_1 + 0xcu;
                                    a.r[2] = 0x804b15c0u;
                                    a.r[3] = 0x804890c8u;
                                    r3 = tc_call(0x800d7768u, &a);
                                    wr32(param_1 + 0x98u, r3);
                                    wr32(0x80472f34u, rd32(0x80472f34u) + 1u);
                                }
                            }
                        }
                    } else {
                        r3 = rd32(param_1);
                        if ((u32)rd8(r3 + 1u) == 3u && (u32)rd8(r3 + 2u) == 0x11u) {
                            a.f[0] = (f64)rdf32(0x80572968u);
                            a.r[0] = 0xbfu;
                            a.r[1] = param_1 + 0xcu;
                            a.r[2] = 0x804b15c0u;
                            a.r[3] = 0x804890c8u;
                            r3 = tc_call(0x800d7768u, &a);
                            wr32(param_1 + 0x98u, r3);
                            wr32(0x80472f34u, rd32(0x80472f34u) + 1u);
                        }
                    }
                } else {
                    r3 = rd32(param_1);
                    if ((u32)rd8(r3 + 1u) == 3u && (u32)rd8(r3 + 2u) == 0x10u) {
                        a.f[0] = (f64)rdf32(0x80572968u);
                        a.r[0] = 0xbeu;
                        a.r[1] = param_1 + 0xcu;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        wr32(param_1 + 0x98u, r3);
                        wr32(0x80472f34u, rd32(0x80472f34u) + 1u);
                    }
                }
            } else {
                r3 = rd32(param_1);
                if ((u32)rd8(r3 + 1u) == 3u) {
                    r0 = (u32)rd8(r3 + 2u);
                    if (r0 == 3u || r0 == 4u) {
                        a.f[0] = (f64)rdf32(0x80572968u);
                        a.r[0] = 0xbdu;
                        a.r[1] = param_1 + 0xcu;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        wr32(param_1 + 0x98u, r3);
                        wr32(0x80472f34u, rd32(0x80472f34u) + 1u);
                    }
                }
            }
        }
    }
    return;
}
