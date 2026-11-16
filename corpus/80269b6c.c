#include "tc_rt.h"

s32 fn_80269b6c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r21 = 0, r26 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_2 > 0x21u) {
        r3 = 0x701u;
    } else {
        r3 = rd32(0x8038f460u);
        r5 = rd32(0x8038f458u);
        r4 = rd32(0x8038f45cu);
        wr32(0x817fdf20u, rd32(0x8038f454u));
        wr32(0x817fdf24u, r5);
        wr32(0x817fdf28u, r4);
        wr32(0x817fdf2cu, r3);
        wr8(0x8038f461u, 0u);
        r3 = tc_call(0x80268b90u, &a);
        r3 = r3 | 0x2000u;
        a.r[0] = r3;
        (void)tc_call(0x80268b98u, &a);
        r21 = param_1;
        wr32(param_4, 0u);
        r26 = (param_1 << 0x15u) & 0xffe00000u;
        r3 = 0u;
        while (r21 <= param_2 && r3 == 0u) {
            if ((u32)param_5 != 0u) {
                c0eq = r21 == 0x20u;
                r10 = rd32(0x8033db64u);
                r9 = rd32(0x8033db68u);
                r8 = rd32(0x8033db6cu);
                r7 = rd32(0x8033db70u);
                r6 = rd32(0x8033db74u);
                r5 = rd32(0x8033db78u);
                r4 = rd32(0x8033db7cu);
                r3 = rd32(0x8033db80u);
                r0 = rd32(0x8033db84u);
                wr32(0x817fdfa8u, rd32(0x8033db60u));
                wr32(0x817fdfacu, r10);
                wr32(0x817fdfb0u, r9);
                wr32(0x817fdfb4u, r8);
                wr32(0x817fdfb8u, r7);
                wr32(0x817fdfbcu, r6);
                wr32(0x817fdfc0u, r5);
                wr32(0x817fdfc4u, r4);
                wr32(0x817fdfc8u, r3);
                wr32(0x817fdfccu, r0);
                if (r21 < 0x20u) {
                    r0 = r26 | 0xc8030000u;
                    if ((u32)param_5 != 0u) {
                        r0 = r26 | 0xd8030000u;
                    }
                    wr32(0x817fdfa8u, r0);
                    wr32(0x817fdfccu, 0x4e800020u);
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = 0x28u;
                    f1 = tc_callf(0x80268a84u, &a);
                    a.r[0] = 0x817fdf18u;
                    a.r[1] = 0x80502c7cu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(0x817fdfa8u, &a);
                    r4 = tc_lastr4();
                } else {
                    if (c0eq) {
                        if ((u32)param_5 != 0u) {
                            a.r[0] = 0x817fdf18u;
                            (void)tc_call(0x80268f24u, &a);
                        } else {
                            a.r[0] = 0x817fdf18u;
                            (void)tc_call(0x80268f48u, &a);
                        }
                        r4 = rd32(0x817fdf18u);
                        r5 = rd32(0x817fdf1cu);
                        wr32(0x817fdf18u, 0u);
                        wr32(0x817fdf1cu, r5);
                    } else {
                        if (r21 == 0x21u) {
                            if ((u32)param_5 == 0u) {
                                wr32(0x817fdf18u, rd32(0x817fdf1cu));
                            }
                            r10 = rd32(0x8033db14u);
                            r9 = rd32(0x8033db18u);
                            r8 = rd32(0x8033db1cu);
                            r7 = rd32(0x8033db20u);
                            r6 = rd32(0x8033db24u);
                            r5 = rd32(0x8033db28u);
                            r4 = rd32(0x8033db2cu);
                            r3 = rd32(0x8033db30u);
                            r0 = rd32(0x8033db34u);
                            wr32(0x817fdf58u, rd32(0x8033db10u));
                            wr32(0x817fdf5cu, r10);
                            wr32(0x817fdf60u, r9);
                            wr32(0x817fdf64u, r8);
                            wr32(0x817fdf68u, r7);
                            wr32(0x817fdf6cu, r6);
                            wr32(0x817fdf70u, r5);
                            wr32(0x817fdf74u, r4);
                            wr32(0x817fdf78u, r3);
                            wr32(0x817fdf7cu, r0);
                            if ((u32)param_5 != 0u) {
                                wr32(0x817fdf5cu, 0x90830000u);
                                wr32(0x817fdf58u, 0x7c9efaa6u);
                            } else {
                                wr32(0x817fdf58u, 0x80830000u);
                                wr32(0x817fdf5cu, 0x7c9efba6u);
                            }
                            wr32(0x817fdf7cu, 0x4e800020u);
                            a.r[0] = 0x817fdf58u;
                            a.r[1] = 0x28u;
                            f1 = tc_callf(0x80268a84u, &a);
                            a.r[0] = 0x817fdf18u;
                            a.r[1] = 0x80502c7cu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(0x817fdf58u, &a);
                            r4 = tc_lastr4();
                            if ((u32)param_5 != 0u) {
                                r4 = 0u;
                                wr32(0x817fdf1cu, rd32(0x817fdf18u));
                                wr32(0x817fdf18u, 0u);
                            }
                        }
                    }
                }
                a.r[0] = param_3;
                a.r[1] = r4;
                a.r[2] = rd32(0x817fdf18u);
                a.r[3] = rd32(0x817fdf1cu);
                r3 = tc_call(0x80266a5cu, &a);
            } else {
                a.r[0] = param_3;
                a.r[1] = 0x817fdf18u;
                (void)tc_call(0x80266810u, &a);
                c0eq = r21 == 0x20u;
                r10 = rd32(0x8033db64u);
                r9 = rd32(0x8033db68u);
                r8 = rd32(0x8033db6cu);
                r7 = rd32(0x8033db70u);
                r6 = rd32(0x8033db74u);
                r5 = rd32(0x8033db78u);
                r4 = rd32(0x8033db7cu);
                r3 = rd32(0x8033db80u);
                r0 = rd32(0x8033db84u);
                wr32(0x817fdf80u, rd32(0x8033db60u));
                wr32(0x817fdf84u, r10);
                wr32(0x817fdf88u, r9);
                wr32(0x817fdf8cu, r8);
                wr32(0x817fdf90u, r7);
                wr32(0x817fdf94u, r6);
                wr32(0x817fdf98u, r5);
                wr32(0x817fdf9cu, r4);
                wr32(0x817fdfa0u, r3);
                wr32(0x817fdfa4u, r0);
                if (r21 < 0x20u) {
                    r0 = r26 | 0xc8030000u;
                    if ((u32)param_5 != 0u) {
                        r0 = r26 | 0xd8030000u;
                    }
                    wr32(0x817fdf80u, r0);
                    wr32(0x817fdfa4u, 0x4e800020u);
                    a.r[0] = 0x817fdf80u;
                    a.r[1] = 0x28u;
                    f1 = tc_callf(0x80268a84u, &a);
                    a.r[0] = 0x817fdf18u;
                    a.r[1] = 0x80502c7cu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(0x817fdf80u, &a);
                } else {
                    if (c0eq) {
                        if ((u32)param_5 != 0u) {
                            a.r[0] = 0x817fdf18u;
                            (void)tc_call(0x80268f24u, &a);
                        } else {
                            a.r[0] = 0x817fdf18u;
                            (void)tc_call(0x80268f48u, &a);
                        }
                        r5 = rd32(0x817fdf1cu);
                        wr32(0x817fdf18u, 0u);
                        wr32(0x817fdf1cu, r5);
                    } else {
                        if (r21 == 0x21u) {
                            if ((u32)param_5 == 0u) {
                                wr32(0x817fdf18u, rd32(0x817fdf1cu));
                            }
                            r10 = rd32(0x8033db14u);
                            r9 = rd32(0x8033db18u);
                            r8 = rd32(0x8033db1cu);
                            r7 = rd32(0x8033db20u);
                            r6 = rd32(0x8033db24u);
                            r5 = rd32(0x8033db28u);
                            r4 = rd32(0x8033db2cu);
                            r3 = rd32(0x8033db30u);
                            r0 = rd32(0x8033db34u);
                            wr32(0x817fdf30u, rd32(0x8033db10u));
                            wr32(0x817fdf34u, r10);
                            wr32(0x817fdf38u, r9);
                            wr32(0x817fdf3cu, r8);
                            wr32(0x817fdf40u, r7);
                            wr32(0x817fdf44u, r6);
                            wr32(0x817fdf48u, r5);
                            wr32(0x817fdf4cu, r4);
                            wr32(0x817fdf50u, r3);
                            wr32(0x817fdf54u, r0);
                            if ((u32)param_5 != 0u) {
                                wr32(0x817fdf34u, 0x90830000u);
                                wr32(0x817fdf30u, 0x7c9efaa6u);
                            } else {
                                wr32(0x817fdf30u, 0x80830000u);
                                wr32(0x817fdf34u, 0x7c9efba6u);
                            }
                            wr32(0x817fdf54u, 0x4e800020u);
                            a.r[0] = 0x817fdf30u;
                            a.r[1] = 0x28u;
                            f1 = tc_callf(0x80268a84u, &a);
                            a.r[0] = 0x817fdf18u;
                            a.r[1] = 0x80502c7cu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(0x817fdf30u, &a);
                            if ((u32)param_5 != 0u) {
                                r4 = rd32(0x817fdf18u);
                                wr32(0x817fdf18u, 0u);
                                wr32(0x817fdf1cu, r4);
                            }
                        }
                    }
                }
                r3 = 0u;
            }
            r26 = r26 + 0x200000u;
            r21 = r21 + 1u;
            wr32(param_4, rd32(param_4) + 8u);
        }
        if ((u32)rd8(0x8038f461u) != 0u) {
            r3 = 0x702u;
            wr32(param_4, 0u);
        }
        r5 = rd32(0x817fdf24u);
        r4 = rd32(0x817fdf28u);
        r0 = rd32(0x817fdf2cu);
        wr32(0x8038f454u, rd32(0x817fdf20u));
        wr32(0x8038f458u, r5);
        wr32(0x8038f45cu, r4);
        wr32(0x8038f460u, r0);
    }
    return (s32)r3;
}
