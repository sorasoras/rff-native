#include "tc_rt.h"

void fn_8029bc80(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = param_r4;
    a.r[0] = param_r3;
    r3 = tc_call(0x802952a8u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x80540118u) >= 4u) {
        if (r3 != 0u) {
            r6 = (u32)rd8(r3 + 0x7fu);
        } else {
            r6 = 0u;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x8039480cu;
        a.r[2] = param_r4;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc84u, &a);
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
        f1 = tc_callf(0x802a173cu, &a);
    }
    if ((u32)rd8(0x8053f2d4u) != 0u) {
        r3 = (u32)rd8(0x8053d978u);
        wr8(0x8053f2d4u, 0u);
        a.r[0] = r3;
        f1 = tc_callf(0x802a11c8u, &a);
    }
    if (r31 != 0u) {
        r3 = (u32)rd8(r31 + 0x81u);
        if ((r3 & 0x40u) != 0u && (u32)rd8(0x8053f2d5u) == 0u) {
            wr8(r31 + 0x81u, (u8)(r3 & 0xffffffafu));
            r26 = (u32)rd8(0x8053f2d6u);
            if (r26 != 0u) {
                a.r[0] = param_r3;
                r3 = tc_call(0x802952a8u, &a);
                f1 = tc_lastf();
                r28 = r3;
                if (r3 != 0u) {
                    if (((u32)rd8(r3 + 0x81u) & 0x40u) != 0u) {
                        wr8(0x8053f2d6u, (u8)r26);
                    } else {
                        r27 = (u32)rd8(r3 + 0x7fu);
                        if (r27 != 5u) {
                            wr8(r3 + 0x7fu, 5u);
                            a.r[0] = param_r3;
                            a.r[1] = r26;
                            r3 = tc_call(0x8029fdd4u, &a);
                            f1 = tc_lastf();
                            if ((r3 & 0xffu) == 0u) {
                                wr8(r28 + 0x7fu, (u8)r27);
                            }
                        }
                    }
                }
            }
        }
    }
    if (r31 != 0u) {
        if ((u32)rd8(r31 + 0x7fu) != 1u) {
            r12 = rd32(0x8053f274u);
            if (r12 == 0u || param_r4 == 0u) {
                return;
            }
            a.r[0] = r31 + 0x1cu;
            a.r[1] = r31 + 0x22u;
            a.r[2] = r31 + 0x35u;
            a.r[3] = param_r4;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        } else {
            if (param_r4 == 0xcu && ((u32)rd8(r31 + 0x76u) & 6u) == 6u) {
                r30 = 0u;
            }
            r12 = rd32(0x8053f274u);
            if (r12 != 0u) {
                a.r[0] = r31 + 0x1cu;
                a.r[1] = r31 + 0x22u;
                a.r[2] = r31 + 0x35u;
                a.r[3] = r30;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            wr8(r31 + 0x7fu, 0u);
            r3 = (u32)rd8(r31 + 0x81u);
            if ((r3 & 0x40u) != 0u) {
                wr8(r31 + 0x81u, (u8)(r3 & 0xffffffafu));
                a.r[0] = (u32)rd16(r31 + 0x18u);
                a.r[1] = 0x13u;
                (void)tc_call(0x8029fdd4u, &a);
            } else {
                if (r30 != 0u) {
                    if (rd32(r31 + 4u) != 0u) {
                        if ((u32)rd8(r31 + 0x80u) != 0u) {
                            r3 = rd32(r31);
                            if (r3 != 0u && rd32(r3) == 3u) {
                                wr32(r3 + 4u, 0u);
                            }
                        }
                        a.r[0] = r31 + 0x1cu;
                        a.r[1] = rd32(r31 + 8u);
                        a.r[2] = 0xau;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(r31 + 4u), &a);
                        wr32(r31 + 4u, 0u);
                    }
                    a.r[0] = (u32)rd16(r31 + 0x18u);
                    a.r[1] = 5u;
                    (void)tc_call(0x8029fdd4u, &a);
                } else {
                    wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 2u));
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x8029cfb0u, &a);
                    f1 = tc_lastf();
                    r4 = r3;
                    if ((r3 & 0xffu) != 1u && rd32(r31 + 4u) != 0u) {
                        if ((u32)rd8(r31 + 0x80u) != 0u) {
                            r3 = rd32(r31);
                            if (r3 != 0u && rd32(r3) == 3u) {
                                wr32(r3 + 4u, 0u);
                            }
                        }
                        a.r[0] = r31 + 0x1cu;
                        a.r[1] = rd32(r31 + 8u);
                        a.r[2] = r4 & 0xffu;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(r31 + 4u), &a);
                        wr32(r31 + 4u, 0u);
                    }
                }
            }
        }
    }
    return;
}
