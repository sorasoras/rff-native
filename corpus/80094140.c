#include "tc_rt.h"

void fn_80094140(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r17 = 0, r18 = 0, r20 = 0, r22 = 0, r24 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x80065070u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        if (rd32(param_r3 + 0x1f4u) == 0u) {
            r6 = rd32(param_r3 + 0x25cu);
            r0 = rd32(0x80572a1cu);
            wr32(0x817fde78u, rd32(0x80572a18u));
            r3 = (r6 * 0x38u) - 0x7fb65020u;
            wr32(0x817fde7cu, r0);
            r4 = (u32)rd16(r3 + 0x20u);
            r5 = (u32)rd16(r3 + 0x22u);
            if (r6 <= 0x20u) {
                r3 = rd32(((r6 << 2u) & 0xfffffffcu) - 0x7fcaea7cu);
                sw_ = r3;
                switch (sw_) {
                case 0x80094488u:
                    break;
                case 0x80094200u:
                    if (r4 >= 2u || r5 >= 2u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x8009421cu:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 1u);
                    break;
                case 0x80094240u:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x8009425cu:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x80094278u:
                    if (r4 >= 6u || r5 >= 6u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x80094294u:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x800942b0u:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x800942ccu:
                    if (r4 >= 6u || r5 >= 6u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x800942e8u:
                    if (r4 >= 5u || r5 >= 5u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x80094304u:
                    if (r4 >= 5u || r5 >= 5u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x80094320u:
                    if (r4 >= 5u || r5 >= 5u) {
                        wr32(0x817fde78u, 0u);
                        break;
                    }
                    break;
                case 0x8009433cu:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 0xdu);
                    break;
                case 0x80094360u:
                    if (r4 >= 4u || r5 >= 4u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 0xcu);
                    break;
                case 0x80094384u:
                    if (r4 < 4u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x80094398u:
                    if (r4 < 4u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x800943acu:
                    if (r4 >= 3u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 3u);
                    break;
                case 0x800943c8u:
                    if (r4 < 5u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x800943dcu:
                    if (r4 < 3u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x800943f0u:
                    if (r4 < 3u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x80094404u:
                    if (r4 < 5u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x80094418u:
                    if (r4 < 3u) break;
                    wr32(0x817fde78u, 0u);
                    break;
                case 0x8009442cu:
                    if (r4 >= 8u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 2u);
                    break;
                case 0x80094448u:
                    wr32(0x817fde78u, 6u);
                    break;
                case 0x80094454u:
                    wr32(0x817fde78u, 6u);
                    if (r4 < 8u) break;
                    wr32(0x817fde7cu, 0u);
                    break;
                case 0x80094470u:
                    if (r4 >= 6u) {
                        wr32(0x817fde78u, 0u);
                    }
                    wr32(0x817fde7cu, 0x1bu);
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
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
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            r20 = 0u;
            r0 = rd32(r3 + 4u);
            f29 = (f64)rdf32(0x80572a20u);
            wr32(0x817fdea4u, r4);
            f31 = (f64)rdf32(0x80572a28u);
            wr32(0x817fdea8u, r0);
            f30 = (f64)rdf32(0x80572a24u);
            wr32(0x817fdeacu, rd32(r3 + 8u));
            r31 = 0u;
            wrf32d(0x817fdea0u, f29);
            wrf32d(0x817fde9cu, f29);
            wrf32d(0x817fde98u, f29);
            do {
                r24 = rd32(r31 - 0x7e802188u);
                if (r24 != 0xffffffffu) {
                    if (r24 != 0u) {
                        r18 = rd32(0x8046b7e4u);
                        while (r18 != 0u) {
                            r3 = r18;
                            r18 = rd32(r18);
                            r17 = rd32(r3 + 8u);
                            if (r24 == rd32(r17 + 0x25cu)) {
                                a.r[0] = r17;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                                f1 = tc_lastf();
                                r22 = r3;
                                a.r[0] = param_r3;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                                r0 = rd32(r3 + 4u);
                                wr32(0x817fde80u, rd32(r3));
                                wr32(0x817fde84u, r0);
                                wr32(0x817fde88u, rd32(r3 + 8u));
                                a.r[0] = 0x817fde80u;
                                a.r[1] = r22;
                                a.r[2] = 0x817fde80u;
                                (void)tc_call(0x802343a4u, &a);
                                wrf32d(0x817fde84u, f29);
                                a.r[0] = 0x817fde80u;
                                f1 = tc_callf(0x80234428u, &a);
                                r4 = tc_lastr4();
                                if (f1 < f30) {
                                    f0 = (f64)rdf32(0x804890d0u);
                                    f2 = (f64)rdf32(0x804890c8u);
                                    wrf32d(0x817fdee4u, f29);
                                    f1 = (f64)rdf32(0x804890ccu);
                                    wrf32d(0x817fdec8u, f29);
                                    wrf32d(0x817fdec0u, f29);
                                    wrf32d(0x817fdebcu, f29);
                                    wrf32d(0x817fdeb8u, f29);
                                    wrf32d(0x817fdef8u, f29);
                                    wrf32d(0x817fdef4u, f29);
                                    wrf32d(0x817fdef0u, f29);
                                    wr32(0x817fdeb0u, 0u);
                                    wrf32d(0x817fdec4u, f2);
                                    wrf32d(0x817fdec8u, f1);
                                    wrf32d(0x817fdeccu, f0);
                                    wrf32d(0x817fdee4u, f2);
                                    wrf32d(0x817fdee8u, f1);
                                    wrf32d(0x817fdeecu, f0);
                                    wr32(0x817fdf14u, 0u);
                                    wr32(0x817fdf0cu, 0u);
                                    wr32(0x817fdf10u, 0u);
                                    wrf32d(0x817fdeb4u, f31);
                                    wrf32d(0x817fdf08u, f29);
                                    wrf32d(0x817fdf04u, f29);
                                    wrf32d(0x817fdf00u, f29);
                                    wrf32d(0x817fdefcu, f29);
                                    wrf32d(0x817fdedcu, f29);
                                    wrf32d(0x817fded8u, f29);
                                    wrf32d(0x817fded4u, f29);
                                    wrf32d(0x817fded0u, f29);
                                    a.r[0] = r17;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                                    f0 = (f64)rdf32(0x817fdea8u);
                                    wrf32d(0x817fde98u, (f64)rdf32(r3));
                                    f1 = (f64)rdf32(0x80572a2cu);
                                    wrf32d(0x817fde9cu, (f64)rdf32(r3 + 4u));
                                    wrf32d(0x817fdea0u, (f64)rdf32(r3 + 8u));
                                    wrf32d(0x817fde9cu, f0);
                                    a.f[0] = f1;
                                    a.r[0] = 0x8046d8c8u;
                                    a.r[1] = 0x817fdeb0u;
                                    a.r[2] = 0x817fdea4u;
                                    a.r[3] = 0x817fde98u;
                                    a.r[4] = rd32(param_r3 + 0xbcu);
                                    a.r[5] = 2u;
                                    r3 = tc_call(0x8008c458u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    if (r3 == 0u) {
                                        a.r[0] = r17;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.f[0] = f1;
                                        a.f[1] = 0.0;
                                        r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                                        wrf32d(param_r4, (f64)rdf32(r3));
                                        wrf32d(param_r4 + 4u, (f64)rdf32(r3 + 4u));
                                        wrf32d(param_r4 + 8u, (f64)rdf32(r3 + 8u));
                                        return;
                                    }
                                }
                            }
                        }
                    } else {
                        r17 = rd32(0x804863d8u);
                        a.r[0] = r17;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                        f1 = tc_lastf();
                        r18 = r3;
                        a.r[0] = param_r3;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                        r0 = rd32(r3 + 4u);
                        wr32(0x817fde8cu, rd32(r3));
                        wr32(0x817fde90u, r0);
                        wr32(0x817fde94u, rd32(r3 + 8u));
                        a.r[0] = 0x817fde8cu;
                        a.r[1] = r18;
                        a.r[2] = 0x817fde8cu;
                        (void)tc_call(0x802343a4u, &a);
                        wrf32d(0x817fde90u, f29);
                        a.r[0] = 0x817fde8cu;
                        f1 = tc_callf(0x80234428u, &a);
                        r4 = tc_lastr4();
                        if (f1 < f30) {
                            f0 = (f64)rdf32(0x804890d0u);
                            f2 = (f64)rdf32(0x804890c8u);
                            wrf32d(0x817fdf4cu, f29);
                            f1 = (f64)rdf32(0x804890ccu);
                            wrf32d(0x817fdf30u, f29);
                            wrf32d(0x817fdf28u, f29);
                            wrf32d(0x817fdf24u, f29);
                            wrf32d(0x817fdf20u, f29);
                            wrf32d(0x817fdf60u, f29);
                            wrf32d(0x817fdf5cu, f29);
                            wrf32d(0x817fdf58u, f29);
                            wr32(0x817fdf18u, 0u);
                            wrf32d(0x817fdf2cu, f2);
                            wrf32d(0x817fdf30u, f1);
                            wrf32d(0x817fdf34u, f0);
                            wrf32d(0x817fdf4cu, f2);
                            wrf32d(0x817fdf50u, f1);
                            wrf32d(0x817fdf54u, f0);
                            wr32(0x817fdf7cu, 0u);
                            wr32(0x817fdf74u, 0u);
                            wr32(0x817fdf78u, 0u);
                            wrf32d(0x817fdf1cu, f31);
                            wrf32d(0x817fdf70u, f29);
                            wrf32d(0x817fdf6cu, f29);
                            wrf32d(0x817fdf68u, f29);
                            wrf32d(0x817fdf64u, f29);
                            wrf32d(0x817fdf44u, f29);
                            wrf32d(0x817fdf40u, f29);
                            wrf32d(0x817fdf3cu, f29);
                            wrf32d(0x817fdf38u, f29);
                            a.r[0] = r17;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                            f0 = (f64)rdf32(0x817fdea8u);
                            wrf32d(0x817fde98u, (f64)rdf32(r3));
                            f1 = (f64)rdf32(0x80572a2cu);
                            wrf32d(0x817fde9cu, (f64)rdf32(r3 + 4u));
                            wrf32d(0x817fdea0u, (f64)rdf32(r3 + 8u));
                            wrf32d(0x817fde9cu, f0);
                            a.f[0] = f1;
                            a.r[0] = 0x8046d8c8u;
                            a.r[1] = 0x817fdf18u;
                            a.r[2] = 0x817fdea4u;
                            a.r[3] = 0x817fde98u;
                            a.r[4] = rd32(param_r3 + 0xbcu);
                            a.r[5] = 2u;
                            r3 = tc_call(0x8008c458u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 == 0u) {
                                a.r[0] = r17;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                r3 = tc_call(rd32(rd32(r17) + 0x28u), &a);
                                wrf32d(param_r4, (f64)rdf32(r3));
                                wrf32d(param_r4 + 4u, (f64)rdf32(r3 + 4u));
                                wrf32d(param_r4 + 8u, (f64)rdf32(r3 + 8u));
                                return;
                            }
                        }
                    }
                }
                r20 = r20 + 1u;
                r31 = r31 + 4u;
            } while (r20 < 2u);
            return;
        }
        wrf32d(param_r4, (f64)rdf32(param_r3 + 0x1f8u));
        wrf32d(param_r4 + 4u, (f64)rdf32(param_r3 + 0x1fcu));
        wrf32d(param_r4 + 8u, (f64)rdf32(param_r3 + 0x200u));
        return;
    }
    return;
}
