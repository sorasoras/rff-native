#include "tc_rt.h"

void fn_8008c458(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
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
    a.f[0] = param_f1;
    a.r[0] = param_1 + (rd32(param_1 + 0x4150u) * 0x4150u);
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    (void)tc_call(0x8008a4a0u, &a);
    if (rd32(param_1 + 0x415cu) != 0u) {
        f1 = (f64)rdf32(param_3 + 8u);
        f0 = (f64)rdf32(param_4 + 8u);
        if (!(f1 < f0)) {
            f1 = f0;
        }
        f2 = (f64)rdf32(param_3 + 4u);
        f3 = (f64)(f32)(f1 - param_f1);
        f0 = (f64)rdf32(param_4 + 4u);
        if (!(f2 < f0)) {
            f2 = f0;
        }
        f1 = (f64)rdf32(param_3);
        f2 = (f64)(f32)(f2 - param_f1);
        f0 = (f64)rdf32(param_4);
        if (!(f1 < f0)) {
            f1 = f0;
        }
        f1 = (f64)(f32)(f1 - param_f1);
        f4 = (f64)rdf32(param_3 + 8u);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(0x817fdf08u, f2);
        wrf32d(0x817fdf04u, f1);
        wrf32d(0x817fdf0cu, f3);
        if (!(f4 > f0)) {
            f4 = f0;
        }
        f1 = (f64)rdf32(param_3 + 4u);
        f2 = (f64)(f32)(param_f1 + f4);
        f0 = (f64)rdf32(param_4 + 4u);
        if (!(f1 > f0)) {
            f1 = f0;
        }
        f3 = (f64)rdf32(param_3);
        f1 = (f64)(f32)(param_f1 + f1);
        f0 = (f64)rdf32(param_4);
        if (!(f3 > f0)) {
            f3 = f0;
        }
        wrf32d(0x817fdefcu, f1);
        r7 = rd32(0x817fdf04u);
        wrf32d(0x817fdf00u, f2);
        wrf32d(0x817fdef8u, (f64)(f32)(param_f1 + f3));
        r6 = rd32(0x817fdf08u);
        r5 = rd32(0x817fdf0cu);
        r4 = rd32(0x817fdef8u);
        r3 = rd32(0x817fdefcu);
        r0 = rd32(0x817fdf00u);
        wr32(0x817fdf10u, r7);
        f29 = (f64)rdf32(0x8057295cu);
        wr32(0x817fdf14u, r6);
        f30 = (f64)rdf32(0x80572960u);
        wr32(0x817fdf18u, r5);
        wr32(0x817fdf1cu, r4);
        wr32(0x817fdf20u, r3);
        wr32(0x817fdf24u, r0);
        r25 = rd32(param_1 + 0x4154u);
        for (;;) {
            if (r25 == 0u) {
                return;
            }
            r3 = r25;
            r25 = rd32(r25);
            r24 = rd32(r3 + 8u);
            if (rd32(r24 + 0x18u) != 0u && (param_6 & (u32)rd16(r24 + 0x70u)) != 0u) {
                r0 = rd32(param_2 + 0x64u);
                f0 = (f64)rdf32(0x804890d0u);
                f3 = (f64)rdf32(0x804890c8u);
                wrf32d(0x817fdf5cu, f29);
                f2 = (f64)rdf32(0x804890ccu);
                wrf32d(0x817fdf40u, f29);
                wrf32d(0x817fdf38u, f29);
                wrf32d(0x817fdf34u, f29);
                wrf32d(0x817fdf30u, f29);
                wrf32d(0x817fdf70u, f29);
                wrf32d(0x817fdf6cu, f29);
                wrf32d(0x817fdf68u, f29);
                wr32(0x817fdf28u, 0u);
                wrf32d(0x817fdf3cu, f3);
                wrf32d(0x817fdf40u, f2);
                wrf32d(0x817fdf44u, f0);
                wrf32d(0x817fdf5cu, f3);
                wrf32d(0x817fdf60u, f2);
                wrf32d(0x817fdf64u, f0);
                wr32(0x817fdf8cu, r0);
                wr32(0x817fdf84u, 0u);
                wr32(0x817fdf88u, 0u);
                wrf32d(0x817fdf2cu, f30);
                wrf32d(0x817fdf80u, f29);
                wrf32d(0x817fdf7cu, f29);
                wrf32d(0x817fdf78u, f29);
                wrf32d(0x817fdf74u, f29);
                wrf32d(0x817fdf54u, f29);
                wrf32d(0x817fdf50u, f29);
                wrf32d(0x817fdf4cu, f29);
                wrf32d(0x817fdf48u, f29);
                a.f[0] = param_f1;
                a.r[0] = r24;
                a.r[1] = 0x817fdf10u;
                a.r[2] = 0x817fdf28u;
                a.r[3] = param_3;
                a.r[4] = param_4;
                r3 = tc_call(0x800ca97cu, &a);
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    f1 = (f64)rdf32(0x817fdf2cu);
                    if (f1 < (f64)rdf32(param_2 + 4u)) {
                        do {
                            if (rd32(0x817fdf88u) != 0u) {
                                r3 = rd32(param_2 + 0x64u);
                                wr32(param_2 + 0x60u, 1u);
                                if (r3 != 0u) {
                                    r0 = rd32(r3 + 0xb8u);
                                    if (r0 != 0u) {
                                        if (r0 == 2u) {
                                            a.r[0] = r3;
                                            a.r[1] = r4;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.f[0] = f1;
                                            a.f[1] = 0.0;
                                            a.f[2] = 0.0;
                                            a.f[3] = 0.0;
                                            r3 = tc_call(rd32(rd32(r3) + 0x70u), &a);
                                            f1 = tc_lastf();
                                            r4 = tc_lastr4();
                                            if (r3 == 0u) {
                                                r26 = rd32(param_2 + 0x64u);
                                                a.r[0] = r26;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.r[5] = 0u;
                                                a.f[0] = f1;
                                                a.f[1] = 0.0;
                                                a.f[2] = 0.0;
                                                a.f[3] = 0.0;
                                                r3 = tc_call(rd32(rd32(r26) + 0x140u), &a);
                                                f1 = tc_lastf();
                                                r4 = tc_lastr4();
                                                if (r3 == 0u) {
                                                    r3 = rd32(r26 + 0x148u);
                                                    if ((u32)((s32)r3 >> 31) == 0u && (u32)((s32)((r3 << 0xau) & 0xc0000000u) >> 31) == 0u) {
                                                        r4 = rd32(0x8046adecu);
                                                        for (;;) {
                                                            if (r4 == 0u) {
                                                                fl_ = 1u;
                                                                break;
                                                            }
                                                            r3 = r4;
                                                            r4 = rd32(r4);
                                                            r3 = rd32(r3 + 8u);
                                                            if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u && (r3 + 0x80u) == r24) {
                                                                fl_ = 2u;
                                                                break;
                                                            }
                                                        }
                                                        if (fl_ == 2u) {
                                                            fl_ = 0u;
                                                        } else if (fl_ == 1u) {
                                                            fl_ = 0u;
                                                            break;
                                                        }
                                                        a.r[0] = r3;
                                                        a.r[1] = r4;
                                                        a.r[2] = 0u;
                                                        a.r[3] = 0u;
                                                        a.r[4] = 0u;
                                                        a.r[5] = 0u;
                                                        a.f[0] = f1;
                                                        a.f[1] = 0.0;
                                                        a.f[2] = 0.0;
                                                        a.f[3] = 0.0;
                                                        r3 = tc_call(rd32(rd32(r3) + 0x9cu), &a);
                                                        f1 = tc_lastf();
                                                        r4 = tc_lastr4();
                                                        if (r3 == 0u) break;
                                                        fl_ = 3u;
                                                        break;
                                                    }
                                                }
                                                a.r[0] = r26;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.r[5] = 0u;
                                                a.f[0] = f1;
                                                a.f[1] = 0.0;
                                                a.f[2] = 0.0;
                                                a.f[3] = 0.0;
                                                r3 = tc_call(rd32(rd32(r26) + 0x140u), &a);
                                                f1 = tc_lastf();
                                                if (r3 == 0u) {
                                                    r4 = rd32(0x8046adecu);
                                                    while (r4 != 0u) {
                                                        r3 = r4;
                                                        r4 = rd32(r4);
                                                        r3 = rd32(r3 + 8u);
                                                        if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u && (r3 + 0x80u) == r24) {
                                                            a.r[0] = r3;
                                                            a.r[1] = r4;
                                                            a.r[2] = 0u;
                                                            a.r[3] = 0u;
                                                            a.r[4] = 0u;
                                                            a.r[5] = 0u;
                                                            a.f[0] = f1;
                                                            a.f[1] = 0.0;
                                                            a.f[2] = 0.0;
                                                            a.f[3] = 0.0;
                                                            (void)tc_call(rd32(rd32(r3) + 0x98u), &a);
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        r4 = rd32(0x8046adecu);
                                        while (r4 != 0u) {
                                            r3 = r4;
                                            r4 = rd32(r4);
                                            r3 = rd32(r3 + 8u);
                                            if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u && (r3 + 0x80u) == r24) {
                                                a.r[0] = r3;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.r[5] = 0u;
                                                a.f[0] = f1;
                                                a.f[1] = 0.0;
                                                a.f[2] = 0.0;
                                                a.f[3] = 0.0;
                                                (void)tc_call(rd32(rd32(r3) + 0x98u), &a);
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        } while (0);
                        if (fl_ == 3u) {
                            fl_ = 0u;
                            break;
                        }
                        wr32(param_2, rd32(0x817fdf28u));
                        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf2cu));
                        r0 = rd32(0x817fdf34u);
                        wr32(param_2 + 8u, rd32(0x817fdf30u));
                        wr32(param_2 + 0xcu, r0);
                        wr32(param_2 + 0x10u, rd32(0x817fdf38u));
                        r0 = rd32(0x817fdf40u);
                        wr32(param_2 + 0x14u, rd32(0x817fdf3cu));
                        wr32(param_2 + 0x18u, r0);
                        wr32(param_2 + 0x1cu, rd32(0x817fdf44u));
                        r0 = rd32(0x817fdf4cu);
                        wr32(param_2 + 0x20u, rd32(0x817fdf48u));
                        wr32(param_2 + 0x24u, r0);
                        r0 = rd32(0x817fdf54u);
                        wr32(param_2 + 0x28u, rd32(0x817fdf50u));
                        wr32(param_2 + 0x2cu, r0);
                        wr16(param_2 + 0x30u, rd16(0x817fdf58u));
                        wr16(param_2 + 0x32u, rd16(0x817fdf5au));
                        r0 = rd32(0x817fdf60u);
                        wr32(param_2 + 0x34u, rd32(0x817fdf5cu));
                        wr32(param_2 + 0x38u, r0);
                        wr32(param_2 + 0x3cu, rd32(0x817fdf64u));
                        r0 = rd32(0x817fdf6cu);
                        wr32(param_2 + 0x40u, rd32(0x817fdf68u));
                        wr32(param_2 + 0x44u, r0);
                        wr32(param_2 + 0x48u, rd32(0x817fdf70u));
                        r0 = rd32(0x817fdf78u);
                        wr32(param_2 + 0x4cu, rd32(0x817fdf74u));
                        wr32(param_2 + 0x50u, r0);
                        r0 = rd32(0x817fdf80u);
                        wr32(param_2 + 0x54u, rd32(0x817fdf7cu));
                        wr32(param_2 + 0x58u, r0);
                        wr32(param_2 + 0x5cu, rd32(0x817fdf84u));
                        wr32(param_2 + 0x60u, rd32(0x817fdf88u));
                        wr32(param_2 + 0x64u, rd32(0x817fdf8cu));
                        wrf32d(param_2 + 0x34u, (f64)rdf32(0x804890c8u));
                        wrf32d(param_2 + 0x38u, (f64)rdf32(0x804890ccu));
                        wrf32d(param_2 + 0x3cu, (f64)rdf32(0x804890d0u));
                        wr32(param_2, 2u);
                    }
                }
            }
        }
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r26) + 0x13cu), &a);
        if (r3 != 0u) {
            wr8(r26 + 0x162cu, 0u);
        }
        r3 = rd32(r26 + 0x158u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8009608cu, &a);
        }
        a.r[0] = r26;
        a.r[1] = 0u;
        (void)tc_call(0x8007fbccu, &a);
    }
    return;
}
