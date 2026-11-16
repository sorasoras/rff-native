#include "tc_rt.h"

void fn_80298250(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0;
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
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r4 = (u32)rd8(0x8053f19du);
    r29 = rd32(0x8053f010u);
    if (r4 != 0u) {
        wr8(0x8053f19du, (u8)(r4 - 1u));
    } else {
        if ((u32)rd8(0x8053f19cu) == 1u) {
            r5 = (u32)rd8(param_1);
            if (r5 != 0u) {
                if ((u32)rd8(0x80540118u) >= 2u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0xd0001u;
                    a.r[1] = 0x80393e48u;
                    a.r[2] = r5;
                    a.r[3] = param_r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
                    r4 = tc_lastr4();
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
                r0 = 0xau;
                wr8(0x817fdfe8u, 0xau);
            } else {
                r0 = 0u;
                wr8(0x817fdfe8u, 0u);
            }
            r3 = (u32)rd8(0x8053f19fu);
            if (r3 == 0u) {
                wr8(0x8053f19cu, 0u);
                if (r29 == 0u) {
                    return;
                }
                a.r[0] = 0x817fdfe8u;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                (void)tc_call(r29, &a);
            } else {
                if (r0 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0xau;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    (void)tc_call(0x802986e8u, &a);
                    wr8(0x8053f19cu, 0u);
                    wr8(0x8053f1a0u, 0u);
                    wr8(0x8053f19fu, 0u);
                } else {
                    if (r3 == 1u) {
                        a.r[0] = (u32)rd8(0x8053f18fu);
                        a.r[1] = 0x8053f190u;
                        r3 = tc_call(0x8029816cu, &a);
                        f1 = tc_lastf();
                        wr8(0x817fdfe8u, (u8)r3);
                        if ((r3 & 0xffu) == 1u) {
                            wr8(0x8053f19fu, 2u);
                            return;
                        }
                        wr8(0x8053f19cu, 0u);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0xau;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802986e8u, &a);
                    } else {
                        r4 = (u32)rd8(0x8053f18eu);
                        wr8(0x8053f19fu, 3u);
                        r0 = 0xcu;
                        wr8(0x8053f19cu, 0u);
                        if (r4 <= 0xcu) {
                            r0 = r4;
                        }
                        r3 = (u32)rd8(0x8053f1a0u);
                        r29 = 0x80577370u;
                        wr8(0x8053f18eu, (u8)r0);
                        if ((r3 & 1u) != 0u) {
                            r29 = 0x80577374u;
                        }
                        if ((r3 & 4u) != 0u) {
                            a.r[0] = (u32)rd16(0x8053f19au);
                            a.r[1] = (u32)rd16(0x8053f198u);
                            a.r[2] = r29;
                            a.r[3] = (u32)rd8(0x8053f18du);
                            a.r[4] = (u32)rd8(0x8053f18eu);
                            r3 = tc_call(0x8029fc34u, &a);
                            f1 = tc_lastf();
                            if ((r3 & 0xffu) != 0u) {
                                return;
                            }
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 3u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802986e8u, &a);
                        } else {
                            r3 = rd32(0x8053f034u);
                            if (r3 != 0u) {
                                a.r[0] = r3;
                                (void)tc_call(0x8028a35cu, &a);
                                wr32(0x8053f034u, 0u);
                            }
                            wr16(0x8053f038u, 0u);
                            wr16(0x8053f03au, 0u);
                            a.r[0] = 0x708u;
                            r3 = tc_call(0x8028a0d4u, &a);
                            wr32(0x8053f034u, r3);
                            if (r3 != 0u) {
                                wr16(0x8053f03au, 0x96u);
                                a.r[0] = r3;
                                a.r[1] = 0u;
                                a.r[2] = 0x708u;
                                (void)tc_call(0x8000443cu, &a);
                            }
                            a.r[0] = r29;
                            a.r[1] = (u32)rd8(0x8053f18du);
                            a.r[2] = 0u;
                            r3 = tc_call(0x8029fb2cu, &a);
                            f1 = tc_lastf();
                            if ((r3 & 0xffu) == 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 3u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x802986e8u, &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
