#include "tc_rt.h"

u32 fn_8029cfb0(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r5 = param_r5;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80394aacu;
        a.r[2] = (u32)rd8(param_1 + 0x81u);
        a.r[3] = (u32)rd8(param_1 + 0x76u);
        a.r[4] = (u32)rd8(param_1 + 0x7fu);
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc9cu, &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    if ((u32)rd8(param_1 + 0x7fu) == 0u) {
        c1eq = (u32)rd16(param_1 + 0x18u) == 0xffffu;
        if (!c1eq) {
            if (((u32)rd8(param_1 + 0x76u) & 8u) == 0u && !c1eq) {
                if ((u32)rd8(0x80540118u) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0xd0003u;
                    a.r[1] = 0x80394b10u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    (void)tc_call(0x8028cc54u, &a);
                }
                r29 = (u32)rd8(param_1 + 0x7fu);
                wr8(param_1 + 0x7fu, 3u);
                a.r[0] = param_1 + 0x1cu;
                a.r[1] = 0u;
                a.r[2] = 2u;
                a.r[3] = 0x1eu;
                a.r[4] = 0u;
                r3 = tc_call(0x802987ecu, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                if ((r3 & 0xffu) == 1u) {
                    r0 = 1u;
                } else {
                    wr8(param_1 + 0x7fu, (u8)r29);
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    r3 = 1u;
                    return r3;
                }
                wr8(param_1 + 0x76u, (u8)((u32)rd8(param_1 + 0x76u) | 8u));
            }
            r4 = (u32)rd8(param_1 + 0x76u);
            if ((r4 & 2u) == 0u) {
                r3 = (u32)rd8(param_1 + 0x80u);
                if (((r3 != 0u && ((u32)rd8(param_1 + 0x81u) & 0x10u) != 0u) || (r3 == 0u && ((u32)rd8(param_1 + 0x81u) & 2u) != 0u)) && (u32)rd16(param_1 + 0x18u) != 0xffffu) {
                    if ((u32)rd8(0x80540118u) >= 4u) {
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = f4;
                        a.f[4] = f5;
                        a.f[5] = f6;
                        a.f[6] = f7;
                        a.f[7] = f8;
                        a.r[0] = 0xd0003u;
                        a.r[1] = 0x80394b34u;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    r3 = (u32)rd16(param_1 + 0x18u);
                    wr8(param_1 + 0x7fu, 1u);
                    a.r[0] = r3;
                    r3 = tc_call(0x802a04f8u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        r3 = 1u;
                        return r3;
                    }
                    r3 = 3u;
                    return r3;
                }
            }
            if ((r4 & 4u) == 0u) {
                r3 = (u32)rd8(param_1 + 0x80u);
                if (((r3 != 0u && ((u32)rd8(param_1 + 0x81u) & 0x20u) != 0u) || (r3 == 0u && ((u32)rd8(param_1 + 0x81u) & 4u) != 0u)) && (u32)rd16(param_1 + 0x18u) != 0xffffu) {
                    if ((u32)rd8(0x80540118u) >= 4u) {
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = f4;
                        a.f[4] = f5;
                        a.f[5] = f6;
                        a.f[6] = f7;
                        a.f[7] = f8;
                        a.r[0] = 0xd0003u;
                        a.r[1] = 0x80394b5cu;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = (u32)rd16(param_1 + 0x18u);
                    a.r[1] = 1u;
                    r3 = tc_call(0x802a0574u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        r3 = 1u;
                        wr8(param_1 + 0x7fu, 2u);
                    } else {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        r3 = 1u;
                        return r3;
                    }
                    r3 = 3u;
                    return r3;
                }
            }
            if ((r4 & 1u) == 0u) {
                r3 = (u32)rd8(param_1 + 0x80u);
                if ((r3 != 0u && ((u32)rd8(param_1 + 0x81u) & 8u) != 0u) || (r3 == 0u && ((u32)rd8(param_1 + 0x81u) & 1u) != 0u)) {
                    if ((rd32(param_1 + 0x10u) + 0x10000u) == 0xffffu) {
                        if ((rd32(param_1 + 0x14u) + 0x10000u) == 0xffffu) {
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        r3 = (u32)rd8(rd32(param_1) + 0xfu);
                        if (r3 < 0x2eu) {
                            r4 = r3 & 0x1fu;
                            r3 = param_1 + ((r3 >> 3u) & 0x1cu);
                            r5 = 1u;
                            if (((((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu))) & rd32(r3 + 0x10u)) == 0u) {
                                if ((u32)rd8(0x80540118u) >= 4u) {
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    a.f[2] = f3;
                                    a.f[3] = f4;
                                    a.f[4] = f5;
                                    a.f[5] = f6;
                                    a.f[6] = f7;
                                    a.f[7] = f8;
                                    a.r[0] = 0xd0003u;
                                    a.r[1] = 0x80394b80u;
                                    a.r[2] = 1u;
                                    a.r[3] = r6;
                                    a.r[4] = r7;
                                    a.r[5] = r8;
                                    a.r[6] = r9;
                                    a.r[7] = r10;
                                    (void)tc_call(0x8028cc54u, &a);
                                }
                                a.r[0] = param_1;
                                r3 = tc_call(0x8029d390u, &a);
                                return r3;
                            }
                        }
                    }
                }
            }
            wr8(param_1 + 0x81u, (u8)((u32)rd8(param_1 + 0x81u) & 0xc0u));
            if ((u32)rd8(0x80540118u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x80394ba8u;
                a.r[2] = rd32(param_1 + 0x14u);
                a.r[3] = rd32(param_1 + 0x10u);
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x8028cc84u, &a);
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
            if ((u32)rd8(0x80540118u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x80394bd0u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc54u, &a);
            }
            r3 = 0u;
        } else {
            a.r[0] = param_1 + 0x1cu;
            r3 = tc_call(0x802a97d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x802ab33cu, &a);
                if ((r3 & 0xffu) != 0u) {
                    r3 = 1u;
                    wr8(param_1 + 0x80u, 1u);
                } else {
                    r3 = 3u;
                }
            } else {
                if ((u32)rd8(0x80540a20u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80001u;
                    a.r[1] = 0x80394aecu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                r3 = 3u;
            }
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
