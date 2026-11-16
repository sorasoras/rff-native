#include "tc_rt.h"

void fn_8029c23c(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = (u32)param_3;
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x803948a4u;
        a.r[2] = param_2;
        a.r[3] = (u32)param_3;
        a.r[4] = (u32)param_4;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc9cu, &a);
    }
    if (r31 != 0u) {
        r3 = rd32(0x8053f2ccu);
        wr32(r31 + 0xcu, r3);
        r3 = r3 + 1u;
        wr32(0x8053f2ccu, r3);
        wr8(r31 + 0x85u, 1u);
    } else {
        if ((u32)param_3 != 0u) {
            return;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x80295188u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            return;
        }
    }
    if (((u32)rd8(r31 + 0x81u) & 0x40u) != 0u) {
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
    }
    if ((u32)param_3 == 0u) {
        if (((u32)rd8(r31 + 0x81u) & 0x40u) == 0u || (u32)rd8(r31 + 0x82u) == 0u) {
            wr16(r31 + 0x18u, (u16)param_2);
            wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) & 0xf8u));
            if ((u32)param_4 != 0u) {
                wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 6u));
            }
            if ((u32)rd8(0x8053f2d0u) == 3u) {
                wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 2u));
            }
            wr8(r31 + 0x84u, 0u);
            if (((u32)rd8(r31 + 0x76u) & 8u) == 0u || (u32)rd8(r31 + 0x80u) != 0u) {
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
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(r31 + 4u), &a);
                    wr32(r31 + 4u, 0u);
                }
            }
        } else {
            wr8(r31 + 0x82u, 0u);
            r12 = rd32(0x8053f26cu);
            if (r12 != 0u) {
                a.r[0] = r31 + 0x1cu;
                a.r[1] = r31 + 0x22u;
                a.r[2] = r31 + 0x35u;
                a.r[3] = r31 + 0x25u;
                a.r[4] = (u32)rd8(r31 + 0x83u);
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            r30 = 0u;
            r29 = 0x8053d958u;
            do {
                r12 = rd32(r29 + 0x1924u);
                if (r12 != 0u) {
                    a.r[0] = r31 + 0x1cu;
                    a.r[1] = r31 + 0x22u;
                    a.r[2] = r31 + 0x35u;
                    a.r[3] = r31 + 0x25u;
                    a.r[4] = (u32)rd8(r31 + 0x83u);
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
                r30 = r30 + 1u;
                r29 = r29 + 4u;
            } while ((s32)r30 < 2);
            r12 = rd32(0x8053f274u);
            if (r12 != 0u) {
                a.r[0] = r31 + 0x1cu;
                a.r[1] = r31 + 0x22u;
                a.r[2] = r31 + 0x35u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            wr8(r31 + 0x81u, (u8)((u32)rd8(r31 + 0x81u) & 0xffffffafu));
            a.r[0] = param_2;
            a.r[1] = 0x13u;
            (void)tc_call(0x8029fdd4u, &a);
        }
    } else {
        if (((u32)param_3 != 5u && (u32)param_3 != 6u && (u32)param_3 != 0xeu && (u32)param_3 != 0x18u && (u32)param_3 != 0x26u && (u32)param_3 != 0x29u && (u32)param_3 != 0x25u && (u32)param_3 != 0x17u && (u32)param_3 != 0x22u) && ((u32)rd8(r31 + 0x81u) & 0x40u) == 0u) {
            if (rd32(r31 + 4u) == 0u) {
                return;
            }
            if ((u32)rd8(r31 + 0x80u) != 0u) {
                r3 = rd32(r31);
                if (r3 != 0u && rd32(r3) == 3u) {
                    wr32(r3 + 4u, 0u);
                }
            }
            if ((u32)param_3 == 8u || (u32)param_3 == 0x1fu || (u32)param_3 == 4u) {
                a.r[0] = r31 + 0x1cu;
                a.r[1] = rd32(r31 + 8u);
                a.r[2] = 8u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(r31 + 4u), &a);
                return;
            }
            a.r[0] = r31 + 0x1cu;
            a.r[1] = rd32(r31 + 8u);
            a.r[2] = 0xau;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(r31 + 4u), &a);
            return;
        }
        wr8(r31 + 0x81u, (u8)((u32)rd8(r31 + 0x81u) & 0xffffffafu));
        wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) & 0xffffffefu));
        if (rd32(0x8053f2a4u) != 0u) {
            a.r[0] = 0x8053f294u;
            f1 = tc_callf(0x8028d290u, &a);
            r29 = 0xeu;
            wr32(0x8053f2a4u, 0u);
        }
        if ((u32)rd8(0x80540117u) == 0xeu) {
            r29 = 0xeu;
        }
        r12 = rd32(0x8053f274u);
        if (r12 != 0u) {
            a.r[0] = r31 + 0x1cu;
            a.r[1] = r31 + 0x22u;
            a.r[2] = r31 + 0x35u;
            a.r[3] = r29;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
