#include "tc_rt.h"

void fn_802b0d28(u32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = (u32)rd16((u32)param_2 + 2u);
    r5 = (u32)param_2 + (u32)rd16((u32)param_2 + 4u);
    r0 = (u32)rd8(r5 + 8u) & 1u;
    wr8(0x8054120bu, (u8)r0);
    r31 = ((u32)rd8(r5 + 8u) >> 1u) & 1u;
    wr8(0x8054120au, (u8)r31);
    wr8(0x80541209u, (u8)((u32)rd8(r5 + 8u) & 0xfcu));
    if (r0 == 0u || r6 == 0u) {
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
            a.r[1] = 0x803977e0u;
            a.r[2] = (u32)rd8(0x8054120bu);
            a.r[3] = r6;
            a.r[4] = 0x80397768u;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc84u, &a);
        }
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
    } else {
        r3 = (u32)rd8(r5 + 9u);
        r6 = r6 + 0x10000u;
        r5 = r5 + 0xau;
        r8 = (u32)((s32)r3 >> 1);
        r6 = r6 - 2u;
        if ((r3 & 1u) == 0u) {
            r0 = (u32)rd8(r5);
            r6 = r6 - 1u;
            r5 = r5 + 1u;
            r0 = (r0 << 7u) & 0xffffff80u;
            r0 = r8 + r0;
            r8 = r0 & 0xffu;
        }
        r3 = r6 & 0xffffu;
        if ((r8 & 0xffu) == r3) {
            r0 = (u32)rd8(0x80541209u);
            c0lt = (s32)r0 < 128;
            if (r0 == 0x80u) {
                if (r3 == 8u) {
                    r4 = (u32)rd8(r5) & 0x3fu;
                    c0eq = r4 == 0u;
                    wr8(0x80541208u, (u8)r4);
                    wr8(0x80541211u, (u8)((u32)rd8(r5 + 1u) & 0xfu));
                    wr8(0x80541212u, (u8)((u32)rd8(r5 + 1u) & 0xf0u));
                    wr8(0x80541213u, (u8)((u32)rd8(r5 + 2u) & 0x3fu));
                    wr8(0x80541214u, rd8(r5 + 3u));
                    wr16(0x80541216u, (u16)((u32)rd8(r5 + 4u) + (((u32)rd8(r5 + 5u) << 8u) & 0xffffff00u)));
                    wr8(0x80541218u, rd8(r5 + 6u));
                    wr8(0x80541219u, (u8)((u32)rd8(r5 + 7u) & 7u));
                    if (!c0eq && (c0eq || (r4 >= 2u && r4 <= 0x3du))) {
                        r0 = (u32)rd16(0x80541216u);
                        if (r0 >= 0x17u && r0 <= 0x7fffu) {
                            a.r[0] = (u32)param_2;
                            (void)tc_call(0x8028a35cu, &a);
                            a.r[0] = param_1;
                            a.r[1] = r31;
                            a.r[2] = 0x80541208u;
                            (void)tc_call(0x802aefecu, &a);
                            return;
                        }
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
                        a.r[1] = 0x80397810u;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = 0x80397768u;
                        a.r[5] = r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                }
            } else if (!c0lt) {
                c0lt = (s32)r0 < 160;
                if (r0 == 0xa0u) {
                    if (r3 == 0u) {
                        a.r[0] = (u32)param_2;
                        (void)tc_call(0x8028a35cu, &a);
                        a.r[0] = param_1;
                        a.r[1] = r31;
                        (void)tc_call(0x802af5e4u, &a);
                        return;
                    }
                } else if (!c0lt) {
                    if (r0 == 0xe0u) {
                        r4 = (u32)rd8(r5);
                        r0 = (u32)((s32)(r4 & 2u) >> 1);
                        r3 = (u32)((s32)r4 >> 2);
                        wr8(0x80541208u, (u8)r3);
                        if ((r4 & 1u) != 0u) {
                            r0 = r0 & 0xffu;
                            if (r0 != 0u) {
                                r0 = r3 & 0xffu;
                                c0eq = r0 == 0u;
                                if (!c0eq && (c0eq || (r0 >= 2u && r0 <= 0x3du))) {
                                    wr8(0x80541211u, rd8(r5 + 1u));
                                    if ((r8 & 0xffu) != 3u) {
                                        wr8(0x80541212u, 0u);
                                        wr8(0x80541213u, 0u);
                                    } else {
                                        wr8(0x80541212u, (u8)((u32)rd8(r5 + 2u) & 2u));
                                        wr8(0x80541213u, (u8)(((u32)rd8(r5 + 2u) >> 4u) & 0xfu));
                                    }
                                    a.r[0] = (u32)param_2;
                                    (void)tc_call(0x8028a35cu, &a);
                                    a.r[0] = param_1;
                                    a.r[1] = r31;
                                    a.r[2] = 0x80541208u;
                                    (void)tc_call(0x802af3e0u, &a);
                                    return;
                                }
                            }
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
                            a.r[1] = 0x80397820u;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = 0x80397768u;
                            a.r[5] = r8;
                            a.r[6] = param_r9;
                            a.r[7] = param_r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                    }
                } else if (r0 == 0x90u && (r3 == 1u || r3 == 8u)) {
                    r4 = (u32)rd8(r5);
                    r0 = (u32)((s32)(r4 & 2u) >> 1);
                    r3 = (u32)((s32)r4 >> 2);
                    wr8(0x80541208u, (u8)r3);
                    if ((r4 & 1u) != 0u) {
                        r0 = r0 & 0xffu;
                        if (r0 != 0u) {
                            r0 = r3 & 0xffu;
                            c0eq = r0 == 0u;
                            if (!c0eq && (c0eq || (r0 >= 2u && r0 <= 0x3du))) {
                                r0 = (ppc_cntlzw((r6 & 0xffffu) - 1u) >> 5u) & 0xffu;
                                wr8(0x80541211u, (u8)r0);
                                if (r0 == 0u) {
                                    wr8(0x80541212u, rd8(r5 + 1u));
                                    wr8(0x80541213u, (u8)((u32)rd8(r5 + 2u) & 3u));
                                    wr8(0x80541214u, (u8)(((u32)rd8(r5 + 2u) >> 2u) & 1u));
                                    wr8(0x80541215u, (u8)(((u32)rd8(r5 + 2u) >> 3u) & 1u));
                                    wr8(0x80541216u, (u8)(((u32)rd8(r5 + 2u) >> 4u) & 3u));
                                    wr8(0x80541217u, (u8)((u32)rd8(r5 + 3u) & 0x3fu));
                                    wr8(0x80541218u, rd8(r5 + 4u));
                                    wr8(0x80541219u, rd8(r5 + 5u));
                                    wr16(0x8054121au, (u16)(((u32)rd8(r5 + 6u) + (((u32)rd8(r5 + 7u) << 8u) & 0xffffff00u)) & 0x3f7fu));
                                }
                                a.r[0] = (u32)param_2;
                                (void)tc_call(0x8028a35cu, &a);
                                a.r[0] = param_1;
                                a.r[1] = r31;
                                a.r[2] = (u32)rd8(0x80541211u);
                                a.r[3] = 0x80541208u;
                                (void)tc_call(0x802af0d4u, &a);
                                return;
                            }
                        }
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
                        a.r[1] = 0x80397830u;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = 0x80397768u;
                        a.r[5] = r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                }
            } else {
                c0lt = (s32)r0 < 80;
                if (r0 == 0x50u) {
                    if (r3 == 2u) {
                        r6 = (u32)rd8(r5);
                        r4 = (u32)((s32)(r6 & 2u) >> 1);
                        r3 = (u32)((s32)r6 >> 2);
                        wr8(0x80541208u, (u8)r3);
                        wr8(0x80541211u, (u8)((u32)rd8(r5 + 1u) & 0xfeu));
                        if ((r6 & 1u) != 0u && (r4 & 0xffu) != 0u) {
                            r0 = r3 & 0xffu;
                            c0eq = r0 == 0u;
                            if (!c0eq && (c0eq || (r0 >= 2u && r0 <= 0x3du))) {
                                a.r[0] = (u32)param_2;
                                (void)tc_call(0x8028a35cu, &a);
                                a.r[0] = param_1;
                                a.r[1] = r31;
                                a.r[2] = 0x80541208u;
                                (void)tc_call(0x802af54cu, &a);
                                return;
                            }
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
                            a.r[1] = 0x80397830u;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            a.r[4] = 0x80397768u;
                            a.r[5] = r8;
                            a.r[6] = param_r9;
                            a.r[7] = param_r10;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                    }
                } else if (!c0lt) {
                    if (r0 == 0x60u && r3 == 0u) {
                        a.r[0] = (u32)param_2;
                        f1 = tc_callf(0x8028a35cu, &a);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_1;
                        a.r[1] = r31;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802af648u, &a);
                        return;
                    }
                } else {
                    c0lt = (s32)r0 < 32;
                    if (r0 == 0x20u) {
                        if (r3 != 0u) {
                            wr32(0x80541210u, r5);
                            wr16(0x80541214u, (u16)r6);
                            r0 = (u32)rd16((u32)param_2 + 2u) - 2u;
                            wr16((u32)param_2 + 4u, (u16)((u32)rd16((u32)param_2 + 4u) + 2u));
                            wr16((u32)param_2 + 2u, (u16)r0);
                            if (r31 == 0u) {
                                a.r[0] = param_1;
                                a.r[1] = (u32)param_2;
                                (void)tc_call(0x802af5dcu, &a);
                                return;
                            }
                            a.r[0] = param_1;
                            a.r[1] = 0u;
                            a.r[2] = (u32)param_2;
                            (void)tc_call(0x802b064cu, &a);
                            return;
                        }
                    } else if (c0lt && (r0 == 0x10u && (r3 == 1u && r31 != 0u))) {
                        wr8(0x80541210u, (u8)((u32)rd8(r5) & 1u));
                        wr8(0x80541211u, (u8)((s32)((u32)rd8(r5) & 2u) >> 1));
                        wr8(0x80541212u, (u8)((s32)rd8(r5) >> 2));
                        a.r[0] = (u32)param_2;
                        (void)tc_call(0x8028a35cu, &a);
                        (void)tc_call(0x802af5d8u, &a);
                        return;
                    }
                }
            }
            a.r[0] = (u32)param_2;
            (void)tc_call(0x8028a35cu, &a);
            if (r31 != 0u) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 != 0u) {
                    wr16(r3 + 4u, 0xcu);
                    wr8(r3 + 0x14u, 0x11u);
                    wr8(r3 + 0x15u, 3u);
                    wr8(r3 + 0x16u, (u8)((u32)rd8(0x80541209u) | ((u32)rd8(0x8054120bu) | (((u32)rd8(0x8054120au) << 1u) & 0xfffffffeu))));
                    wr16(r3 + 2u, 3u);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = r3;
                    (void)tc_call(0x802affd8u, &a);
                }
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
                a.r[1] = 0x80397800u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0x80397768u;
                a.r[5] = r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = (u32)param_2;
            (void)tc_call(0x8028a35cu, &a);
        }
    }
    return;
}
