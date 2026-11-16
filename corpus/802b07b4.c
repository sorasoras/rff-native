#include "tc_rt.h"

u32 fn_802b07b4(s32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
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
    r8 = (u32)rd16((u32)param_3 + 2u);
    r6 = (u32)param_3 + (u32)rd16((u32)param_3 + 4u);
    r7 = r6 + 8u;
    r0 = r7;
    if (r8 >= 3u) {
        r8 = (u32)rd8(r7);
        r9 = r8 & 1u;
        wr8(param_2 + 2u, (u8)((s32)(r8 & 2u) >> 1));
        r6 = (u32)rd8(r7);
        r7 = r7 + 1u;
        r8 = (u32)((s32)r6 >> 2);
        wr8(param_2, (u8)r8);
        if (r9 == 0u) {
            r6 = (u32)rd8(r7);
            r8 = r8 & 0xffu;
            r7 = r7 + 1u;
            r6 = (r6 << 6u) & 0xffffffc0u;
            r6 = r8 + r6;
            wr8(param_2, (u8)r6);
        }
        wr8(param_2 + 1u, (u8)((u32)rd8(r7) & 0xffffffefu));
        wr8(param_2 + 4u, (u8)((s32)((u32)rd8(r7) & 0x10u) >> 4));
        r6 = (u32)rd8(r7 + 1u);
        r7 = r7 + 2u;
        r10 = r6 & 1u;
        r8 = (u32)((s32)r6 >> 1);
        if (r10 == 0u) {
            r6 = (u32)rd8(r7);
            r7 = r7 + 1u;
            r6 = (r6 << 7u) & 0xffffff80u;
            r6 = r8 + r6;
            r8 = r6 & 0xffffu;
        }
        r9 = ppc_cntlzw(r9);
        r11 = ((r9 >> 5u) & 0x7ffffffu) + ((ppc_cntlzw(r10) >> 5u) & 0x7ffffffu);
        r10 = r11 + 4u;
        r9 = (u32)rd16((u32)param_3 + 2u) - r10;
        r6 = r11 + (u32)rd16((u32)param_3 + 4u) + 3u;
        wr16((u32)param_3 + 2u, (u16)r9);
        wr16((u32)param_3 + 4u, (u16)r6);
        if ((u32)rd8((u32)param_1 + 0x72u) != 2u || (u32)rd8(param_2 + 1u) != 0xefu || (u32)rd8(param_2) == 0u || (u32)rd8(param_2 + 4u) != 1u) {
            wr8(param_2 + 5u, 0u);
        } else {
            r6 = (u32)rd8(r7);
            r7 = r7 + 1u;
            wr8(param_2 + 5u, (u8)r6);
            r9 = (u32)rd16((u32)param_3 + 2u) - 1u;
            r6 = (u32)rd16((u32)param_3 + 4u) + 1u;
            wr16((u32)param_3 + 2u, (u16)r9);
            wr16((u32)param_3 + 4u, (u16)r6);
        }
        r5 = (u32)rd16((u32)param_3 + 2u);
        r6 = r8 & 0xffffu;
        if (r5 == r6) {
            r9 = (u32)rd8(param_2 + 1u);
            r5 = (u32)rd8(r7 + r6);
            c0lt = (s32)r9 < 67;
            if (r9 == 0x43u) {
                r6 = (u32)rd8((u32)param_1 + 0x6du);
                if ((r6 == 0u || (u32)rd8(param_2 + 2u) == 0u) && (r6 != 0u || (u32)rd8(param_2 + 2u) != 0u) && (u32)rd8(param_2 + 4u) != 0u && (r8 & 0xffffu) == 0u) {
                    r3 = (u32)rd8(param_2);
                    if (r3 == 0u || (r3 >= 2u && r3 <= 0x3du)) {
                        a.r[0] = 3u;
                        a.r[1] = r0;
                        a.r[2] = r5;
                        r3 = tc_call(0x802b1384u, &a);
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
                        if ((r3 & 0xffu) != 0u) {
                            r3 = 3u;
                            return r3;
                        }
                    }
                }
                if ((u32)rd8(0x8054161cu) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x90000u;
                    a.r[1] = 0x80397798u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    (void)tc_call(0x8028cc54u, &a);
                }
                r3 = 0x32u;
            } else {
                if (!c0lt) {
                    c0lt = (s32)r9 < 239;
                    if (r9 == 0xefu) {
                        r3 = (u32)rd8(param_2);
                        if (r3 == 0u || (r3 >= 2u && r3 <= 0x3du)) {
                            a.r[0] = 2u;
                            a.r[1] = r0;
                            a.r[2] = r5;
                            r3 = tc_call(0x802b1384u, &a);
                            f1 = tc_lastf();
                            if ((r3 & 0xffu) != 0u) {
                                r3 = (u32)rd8((u32)param_1 + 0x6du);
                                if ((r3 == 0u || (u32)rd8(param_2 + 2u) == 0u) && (r3 != 0u || (u32)rd8(param_2 + 2u) != 0u)) {
                                    r3 = 4u;
                                    return r3;
                                }
                                if ((u32)rd8(0x8054161cu) >= 1u) {
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = 0x90000u;
                                    a.r[1] = 0x803977ccu;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    (void)tc_call(0x8028cc54u, &a);
                                }
                                r3 = 4u;
                                return r3;
                            }
                            if ((u32)rd8(0x8054161cu) >= 1u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x90000u;
                                a.r[1] = 0x803977bcu;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x8028cc54u, &a);
                            }
                            r3 = 0x32u;
                            return r3;
                        }
                        if ((u32)rd8(0x8054161cu) >= 1u) {
                            a.f[0] = param_f1;
                            a.f[1] = param_f2;
                            a.f[2] = param_f3;
                            a.f[3] = param_f4;
                            a.f[4] = param_f5;
                            a.f[5] = param_f6;
                            a.f[6] = param_f7;
                            a.f[7] = param_f8;
                            a.r[0] = 0x90000u;
                            a.r[1] = 0x803977a4u;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        r3 = 0x32u;
                        return r3;
                    }
                    if (c0lt && r9 == 0x63u) {
                        r6 = (u32)rd8((u32)param_1 + 0x6du);
                        if ((r6 == 0u || (u32)rd8(param_2 + 2u) != 0u) && (r6 != 0u || (u32)rd8(param_2 + 2u) == 0u) && (u32)rd8(param_2 + 4u) != 0u && (r8 & 0xffffu) == 0u) {
                            r3 = (u32)rd8(param_2);
                            if (r3 == 0u || (r3 >= 2u && r3 <= 0x3du)) {
                                a.r[0] = 3u;
                                a.r[1] = r0;
                                a.r[2] = r5;
                                r3 = tc_call(0x802b1384u, &a);
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
                                if ((r3 & 0xffu) != 0u) {
                                    r3 = 1u;
                                    return r3;
                                }
                            }
                        }
                        if ((u32)rd8(0x8054161cu) >= 1u) {
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            a.f[4] = f5;
                            a.f[5] = f6;
                            a.f[6] = f7;
                            a.f[7] = f8;
                            a.r[0] = 0x90000u;
                            a.r[1] = 0x80570e60u;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        r3 = 0x32u;
                        return r3;
                    }
                } else {
                    c0lt = (s32)r9 < 47;
                    if (r9 == 0x2fu) {
                        r6 = (u32)rd8((u32)param_1 + 0x6du);
                        if ((r6 == 0u || (u32)rd8(param_2 + 2u) == 0u) && (r6 != 0u || (u32)rd8(param_2 + 2u) != 0u) && (u32)rd8(param_2 + 4u) != 0u && (r8 & 0xffffu) == 0u) {
                            r3 = (u32)rd8(param_2);
                            if (r3 == 0u || (r3 >= 2u && r3 <= 0x3du)) {
                                a.r[0] = 3u;
                                a.r[1] = r0;
                                a.r[2] = r5;
                                r3 = tc_call(0x802b1384u, &a);
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
                                if ((r3 & 0xffu) != 0u) {
                                    r3 = 0u;
                                    return r3;
                                }
                            }
                        }
                        if ((u32)rd8(0x8054161cu) >= 1u) {
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            a.f[4] = f5;
                            a.f[5] = f6;
                            a.f[6] = f7;
                            a.f[7] = f8;
                            a.r[0] = 0x90000u;
                            a.r[1] = 0x8039778cu;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        r3 = 0x32u;
                        return r3;
                    }
                    if (c0lt && r9 == 0xfu) {
                        r6 = (u32)rd8((u32)param_1 + 0x6du);
                        if ((r6 == 0u || (u32)rd8(param_2 + 2u) != 0u) && (r6 != 0u || (u32)rd8(param_2 + 2u) == 0u) && (r8 & 0xffffu) == 0u) {
                            r3 = (u32)rd8(param_2);
                            if (r3 == 0u || (r3 >= 2u && r3 <= 0x3du)) {
                                a.r[0] = 3u;
                                a.r[1] = r0;
                                a.r[2] = r5;
                                r3 = tc_call(0x802b1384u, &a);
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
                                if ((r3 & 0xffu) != 0u) {
                                    r3 = 2u;
                                    return r3;
                                }
                            }
                        }
                        if ((u32)rd8(0x8054161cu) >= 1u) {
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            a.f[4] = f5;
                            a.f[5] = f6;
                            a.f[6] = f7;
                            a.f[7] = f8;
                            a.r[0] = 0x90000u;
                            a.r[1] = 0x80570e68u;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        r3 = 0x32u;
                        return r3;
                    }
                }
                r3 = 0x32u;
            }
        } else {
            if ((u32)rd8(0x8054161cu) >= 1u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x90000u;
                a.r[1] = 0x80397778u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc84u, &a);
            }
            r3 = 0x32u;
        }
    } else {
        if ((u32)rd8(0x8054161cu) >= 1u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x90000u;
            a.r[1] = 0x80397768u;
            a.r[2] = r8;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        r3 = 0x32u;
    }
    return r3;
}
