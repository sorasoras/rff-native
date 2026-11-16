#include "tc_rt.h"

void fn_80294c94(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c1lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r25 = 0, r26 = 0, r28 = 0;
    u32 r29 = 0;
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
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = 0x8053d98cu;
    if (param_r3 != 0u) {
        r29 = 0u;
        do {
            if ((u32)rd8(r28 + 0x119u) != 0u) {
                if ((u32)rd8(0x80540118u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0xd0004u;
                    a.r[1] = 0x803939bcu;
                    a.r[2] = (u32)rd16(r28);
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
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
                r5 = 0x18u;
                wr16(r28 + 4u, rd16(r28 + 2u));
                r3 = (u32)rd8(0x8053df8eu);
                if (r3 >= 3u) {
                    r5 = 0x3318u;
                }
                r4 = (u32)rd16(0x8053dfacu);
                c1lt = r3 < 3u;
                r3 = r5 & r4 & 0xcc18u;
                r25 = r3 & 0xffffccf9u;
                if (!c1lt) {
                    r25 = (r3 | ((r5 | r4) & 0x3306u)) & 0xffffu;
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
                    a.r[1] = 0x80393670u;
                    a.r[2] = r25 & 0xffffu;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    (void)tc_call(0x8028cc6cu, &a);
                }
                a.r[0] = (u32)rd16(r28);
                a.r[1] = r25 & 0xffffu;
                r3 = tc_call(0x802a0468u, &a);
                f1 = tc_lastf();
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
                    wr16(r28 + 2u, (u16)r25);
                }
            }
            r29 = r29 + 1u;
            r28 = r28 + 0x11cu;
        } while (r29 < 4u);
    } else {
        r29 = 0u;
        do {
            if ((u32)rd8(r28 + 0x119u) != 0u && (u32)rd16(r28 + 4u) != 0u) {
                a.r[0] = r28 + 8u;
                a.r[1] = 0x817fdfc8u;
                r3 = tc_call(0x80298dbcu, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    if ((u32)rd8(0x817fdfc8u) == 2u) {
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
                            a.r[1] = 0x803939ecu;
                            a.r[2] = (u32)rd16(r28);
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc6cu, &a);
                        }
                        wr8(0x817fdfd4u, 0u);
                        a.r[0] = 0x80u;
                        a.r[1] = r28 + 8u;
                        a.r[2] = 0x817fdfccu;
                        (void)tc_call(0x80298becu, &a);
                    } else {
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
                            a.r[1] = 0x80393a1cu;
                            a.r[2] = (u32)rd16(r28);
                            a.r[3] = (u32)rd16(r28 + 2u);
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            f1 = tc_callf(0x8028cc84u, &a);
                        }
                        r4 = (u32)rd16(r28 + 4u);
                        r5 = (u32)rd16(0x8053dfacu);
                        r3 = r4 & r5 & 0xcc18u;
                        r26 = r3 & 0xffffccf9u;
                        if ((u32)rd8(0x8053df8eu) >= 3u) {
                            r26 = (r3 | ((r4 | r5) & 0x3306u)) & 0xffffu;
                        }
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
                            a.r[1] = 0x80393670u;
                            a.r[2] = r26 & 0xffffu;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc6cu, &a);
                        }
                        a.r[0] = (u32)rd16(r28);
                        a.r[1] = r26 & 0xffffu;
                        r3 = tc_call(0x802a0468u, &a);
                        if ((r3 & 0xffu) != 0u) {
                            wr16(r28 + 2u, (u16)r26);
                        }
                        wr16(r28 + 4u, 0u);
                    }
                }
            }
            r29 = r29 + 1u;
            r28 = r28 + 0x11cu;
        } while (r29 < 4u);
    }
    return;
}
