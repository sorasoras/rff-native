#include "tc_rt.h"

void fn_8029ac90(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    r7 = 0x8053d958u;
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x80394430u;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = (u32)rd8(param_1 + 4u);
        a.r[7] = (u32)rd8(param_1 + 5u);
        f1 = tc_callf(0x8028cce4u, &a);
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
    if (param_2 > 0x10u) {
        if ((u32)rd8(0x80540118u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0000u;
            a.r[1] = 0x80394460u;
            a.r[2] = param_2;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x80295360u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x80295188u, &a);
            f1 = tc_lastf();
            r30 = r3;
            if (r3 == 0u) {
                if ((u32)rd8(0x80540118u) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0000u;
                    a.r[1] = 0x80394480u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                return;
            }
        }
        if ((u32)rd16(r3 + 0x18u) != 0xffffu && ((u32)rd8(r3 + 0x76u) & 2u) != 0u) {
            if ((u32)rd8(0x80540118u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0001u;
                a.r[1] = 0x803944a0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x80296b4cu, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) != 0u) {
                return;
            }
            wr8(r30 + 0x81u, 0x50u);
            wr8(r30 + 0x80u, 1u);
            wr32(r30 + 0x10u, rd32(param_4));
            wr32(r30 + 0x14u, rd32(param_4 + 4u));
            wr8(0x8053f2d7u, (u8)param_2);
            if (param_2 != 0u) {
                a.r[0] = 0x8053f2d8u;
                a.r[1] = param_3;
                a.r[2] = param_2;
                f1 = tc_callf(0x80004338u, &a);
            }
            wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) & 0xffffffe9u));
            if ((((u32)rd8(r30 + 0x23u) & 0x1fu) == 5u && ((u32)rd8(r30 + 0x24u) & 0x40u) != 0u) && (u32)rd8(0x8053d978u) != 1u) {
                wr8(0x8053f2d4u, 1u);
                a.r[0] = 1u;
                f1 = tc_callf(0x802a11c8u, &a);
            }
            wr8(0x8053f2d6u, 0u);
            if ((u32)rd16(r30 + 0x18u) != 0xffffu) {
                wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) & 0xffffffefu));
                wr8(r30 + 0x7fu, 1u);
                a.r[0] = (u32)rd16(r30 + 0x18u);
                r3 = tc_call(0x802a04f8u, &a);
                if ((r3 & 0xffu) == 0u) {
                    return;
                }
                wr8(0x8053f2d5u, 0u);
            } else {
                if ((u32)rd8(0x8053f2d0u) != 3u) {
                    if ((u32)rd8(0x80540118u) >= 5u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0xd0004u;
                        a.r[1] = 0x803944c0u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    a.r[0] = 1u;
                    r3 = tc_call(0x802a173cu, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) == 0u) {
                        if ((u32)rd8(0x80540118u) >= 1u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0xd0000u;
                            a.r[1] = 0x803944e4u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        return;
                    }
                    wr8(0x8053f2d3u, 1u);
                }
                wr8(0x8053f2d5u, 1u);
                r3 = tc_call(0x802966a4u, &a);
                f1 = tc_lastf();
                r4 = (u32)rd8(r3);
                wr8(r30 + 0x85u, 0u);
                r27 = (r4 >> 5u) & 1u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                r3 = tc_call(0x80297a6cu, &a);
                if (r3 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 0x18u;
                    a.r[2] = (u32)rd8(r3 + 0xbu);
                    a.r[3] = (u32)rd8(r3 + 0xdu);
                    a.r[4] = (u32)rd16(r3) | 0x8000u;
                    a.r[5] = r27;
                    r3 = tc_call(0x8029fcf4u, &a);
                    f1 = tc_lastf();
                } else {
                    a.r[0] = param_1;
                    a.r[1] = 0x18u;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = (u32)rd16(r30 + 0x1au);
                    a.r[5] = r27;
                    r3 = tc_call(0x8029fcf4u, &a);
                    f1 = tc_lastf();
                }
                if ((r3 & 0xffu) != 0u) {
                    return;
                }
                if ((u32)rd8(0x80540118u) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0000u;
                    a.r[1] = 0x803944e4u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x8028cc54u, &a);
                }
                if ((u32)rd8(0x8053f2d3u) != 0u) {
                    r0 = (u32)rd8(0x80540118u);
                    wr8(0x8053f2d3u, 0u);
                    if (r0 >= 5u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0xd0004u;
                        a.r[1] = 0x803944fcu;
                        a.r[2] = (ppc_cntlzw((u32)rd8(0x8053f2d0u) - 3u) >> 5u) & 0x7ffffffu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc6cu, &a);
                    }
                    a.r[0] = (ppc_cntlzw((u32)rd8(0x8053f2d0u) - 3u) >> 5u) & 0xffu;
                    (void)tc_call(0x802a173cu, &a);
                }
            }
        }
    }
    return;
}
