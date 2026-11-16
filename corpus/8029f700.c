#include "tc_rt.h"

void fn_8029f700(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
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
    if ((u32)rd8(0x8054019eu) != 0u) {
        r5 = (u32)rd16(param_1);
        if (r5 != 0u) {
            if ((u32)rd8(0x80540148u) >= 4u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0xe0003u;
                a.r[1] = 0x80394f2cu;
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
            r0 = (u32)rd16(param_1) & 0xffu;
            if (r0 > 8u) {
                r0 = 0x114u;
            } else {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fc6b098u);
                sw_ = r3;
                switch (sw_) {
                case 0x8029f894u:
                    r0 = 0u;
                    break;
                case 0x8029f89cu:
                    r0 = 0x10bu;
                    break;
                case 0x8029f8a4u:
                    r0 = 0x103u;
                    break;
                case 0x8029f8ccu:
                    r0 = 0x114u;
                    break;
                case 0x8029f8acu:
                    r0 = 0x109u;
                    break;
                case 0x8029f8b4u:
                    r0 = 0x10cu;
                    break;
                case 0x8029f8bcu:
                    r0 = 0x10du;
                    break;
                case 0x8029f8c4u:
                    r0 = 0x115u;
                    break;
                default:
                    a.r[0] = r3;
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
                    r3 = tc_call(sw_, &a);
                    r0 = 0u;
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    r11 = 0u;
                    r12 = 0u;
                    f0 = 0.0;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    f9 = 0.0;
                    f10 = 0.0;
                    f11 = 0.0;
                    f12 = 0.0;
                    f13 = 0.0;
                    ctr = 0u;
                    return;
                }
            }
            wr16(0x80540154u, (u16)r0);
        } else {
            if ((u32)rd8(0x80540148u) >= 4u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0xe0003u;
                a.r[1] = 0x80394ee8u;
                a.r[2] = r5;
                a.r[3] = param_1 + 4u;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc84u, &a);
            }
            a.r[0] = 0x8054015cu;
            r3 = tc_call(0x802550d4u, &a);
            a.r[0] = 0x8054015cu;
            a.r[1] = param_1 + 4u;
            a.r[2] = r3;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(0x80540150u);
                r3 = tc_call(0x80297be4u, &a);
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
                wr32(0x80540150u, r3);
                if (r3 == 0u) {
                    wr16(0x80540154u, 0x102u);
                } else {
                    r3 = r3 + 2u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[1] = 0x8029f700u;
                    r3 = tc_call(0x8029790cu, &a);
                    f1 = tc_lastf();
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
                    if ((r3 & 0xffu) == 1u) {
                        return;
                    }
                    r0 = (u32)rd16(param_1) & 0xffu;
                    if (r0 > 8u) {
                        r0 = 0x114u;
                    } else {
                        r0 = (r0 << 2u) & 0xfffffffcu;
                        r3 = rd32(r0 - 0x7fc6b074u);
                        sw_ = r3;
                        switch (sw_) {
                        case 0x8029f7fcu:
                            r0 = 0u;
                            break;
                        case 0x8029f804u:
                            r0 = 0x10bu;
                            break;
                        case 0x8029f80cu:
                            r0 = 0x103u;
                            break;
                        case 0x8029f834u:
                            r0 = 0x114u;
                            break;
                        case 0x8029f814u:
                            r0 = 0x109u;
                            break;
                        case 0x8029f81cu:
                            r0 = 0x10cu;
                            break;
                        case 0x8029f824u:
                            r0 = 0x10du;
                            break;
                        case 0x8029f82cu:
                            r0 = 0x115u;
                            break;
                        default:
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            r3 = tc_call(sw_, &a);
                            r0 = 0u;
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            r8 = 0u;
                            r9 = 0u;
                            r10 = 0u;
                            r11 = 0u;
                            r12 = 0u;
                            f0 = 0.0;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f5 = 0.0;
                            f6 = 0.0;
                            f7 = 0.0;
                            f8 = 0.0;
                            f9 = 0.0;
                            f10 = 0.0;
                            f11 = 0.0;
                            f12 = 0.0;
                            f13 = 0.0;
                            ctr = 0u;
                            return;
                        }
                    }
                    wr16(0x80540154u, (u16)r0);
                }
            } else {
                a.r[0] = 0x80540156u;
                a.r[1] = rd32(0x80540150u) + 2u;
                a.r[2] = 6u;
                f1 = tc_callf(0x80004338u, &a);
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
                wr16(0x80540154u, 0u);
            }
        }
        r12 = rd32(0x8054014cu);
        if (r12 != 0u) {
            a.r[0] = 5u;
            a.r[1] = 0x80540154u;
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
            (void)tc_call(r12, &a);
        }
        wr8(0x8054019eu, 0u);
        wr32(0x8054014cu, 0u);
    }
    return;
}
