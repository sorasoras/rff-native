#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8027e72c(u32 param_r3, u32 param_r4)
{
    u32 c0gt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r21 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
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
    r29 = (param_r3 << 2u) & 0xfffffffcu;
    r19 = (u32)rd16(0x805772d0u);
    r18 = (u32)rd16(0x805772d2u);
    r28 = rd32(r29 - 0x7faf46b0u);
    r17 = (u32)rd16(0x805772d4u);
    r16 = (u32)rd16(0x805772d6u);
    r15 = (u32)rd16(0x805772d8u);
    r12 = (u32)rd16(0x805772dau);
    r11 = (u32)rd16(0x805772dcu);
    r10 = (u32)rd16(0x805772deu);
    r27 = rd32(r28 + 0x974u);
    wr16(r28 + 0x854u, (u16)r19);
    wr16(r28 + 0x856u, (u16)r15);
    r3 = (u32)rd8(r28 + 0x8cau);
    wr32(0x817fdf68u, 0x43300000u);
    wr16(r28 + 0x858u, (u16)r3);
    wr8(r28 + 0x85au, 0u);
    wr16(r28 + 0x85cu, (u16)r18);
    wr16(r28 + 0x85eu, (u16)r12);
    r3 = (u32)rd8(r28 + 0x8cau);
    wr32(0x817fdf70u, 0x43300000u);
    wr16(r28 + 0x860u, (u16)r3);
    wr8(r28 + 0x862u, 1u);
    wr16(r28 + 0x864u, (u16)r17);
    wr16(r28 + 0x866u, (u16)r11);
    r3 = (u32)rd8(r28 + 0x8cau);
    wr16(0x817fdf00u, (u16)r19);
    wr16(r28 + 0x868u, (u16)r3);
    wr8(r28 + 0x86au, 2u);
    wr16(r28 + 0x86cu, (u16)r16);
    wr16(r28 + 0x86eu, (u16)r10);
    r3 = (u32)rd8(r28 + 0x8cau);
    wr16(0x817fdf02u, (u16)r18);
    wr16(r28 + 0x870u, (u16)r3);
    wr8(r28 + 0x872u, 3u);
    wr16(r28 + 0x874u, 0x212u);
    wr16(r28 + 0x876u, 0x212u);
    wr16(r28 + 0x878u, 0x212u);
    wr16(r28 + 0x87au, 0x27cu);
    wr16(r28 + 0x87cu, 0x27cu);
    wr16(r28 + 0x87eu, 0x27cu);
    wr8(r28 + 0x881u, 0u);
    wr16(0x817fdf04u, (u16)r17);
    wr16(0x817fdf06u, (u16)r16);
    wr16(0x817fdef8u, (u16)r15);
    wr16(0x817fdefau, (u16)r12);
    wr16(0x817fdefcu, (u16)r11);
    wr16(0x817fdefeu, (u16)r10);
    wr8(r28 + 0x880u, 0u);
    if (param_r4 == 0u) {
        do {
            if (rd32(r28 + 0x8e0u) != 0u) {
                (void)tc_call(0x80284b24u, &a);
            } else {
                r15 = 0u;
                for (;;) {
                    r3 = 0u;
                    r16 = (r15 & 0xffu) * 0xbu;
                    r5 = r16 + 0xau;
                    c0gt = (s32)r16 > (s32)r5;
                    r4 = r16;
                    if ((s32)r16 < (s32)r5) {
                        r6 = r16 + 2u;
                        r7 = 0u;
                        r8 = 0u;
                        r9 = 0u;
                        r10 = 0u;
                        if (!c0gt && (s32)r5 <= 2147483646) {
                            r10 = 1u;
                        }
                        if (r10 != 0u && (s32)r16 <= 2147483646) {
                            r9 = 1u;
                        }
                        if (r9 != 0u && (r16 - 0x80000000u) != 0u) {
                            r8 = 1u;
                        }
                        if (r8 != 0u) {
                            r8 = (r16 + 0xau) & 0x80000000u;
                            r5 = 1u;
                            if (r8 == ((0u - r16) & 0x80000000u) && r8 != 0u) {
                                r5 = 0u;
                            }
                            if (r5 != 0u) {
                                r7 = 1u;
                            }
                        }
                        if (r7 != 0u) {
                            ctr = ((r6 + 7u - r16) >> 3u) & 0x1fffffffu;
                            if ((s32)r16 < (s32)r6) {
                                do {
                                    r6 = r27 + r4;
                                    r5 = (u32)rd8(r27 + r4);
                                    r4 = r4 + 8u;
                                    r3 = r3 + r5;
                                    r3 = r3 + (u32)rd8(r6 + 1u);
                                    r3 = r3 + (u32)rd8(r6 + 2u);
                                    r3 = r3 + (u32)rd8(r6 + 3u);
                                    r3 = r3 + (u32)rd8(r6 + 4u);
                                    r3 = r3 + (u32)rd8(r6 + 5u);
                                    r3 = r3 + (u32)rd8(r6 + 6u);
                                    r3 = r3 + (u32)rd8(r6 + 7u);
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                        r6 = r16 + 0xau;
                        r5 = r27 + r4;
                        ctr = r6 - r4;
                        if ((s32)r4 < (s32)r6) {
                            do {
                                r0 = (u32)rd8(r5);
                                r4 = r4 + 1u;
                                r5 = r5 + 1u;
                                r3 = r3 + r0;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                    r21 = r27 + r16;
                    r3 = r3 + 0x55u;
                    r3 = r3 & 0xffu;
                    if (r3 == (u32)rd8(r21 + 0xau)) {
                        fl_ = 2u;
                        break;
                    }
                    (void)tc_call(0x80284b24u, &a);
                    r15 = r15 + 1u;
                    if (r15 >= 2u) {
                        fl_ = 1u;
                        break;
                    }
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                (void)tc_call(0x80284b24u, &a);
                r11 = (u32)rd8(r21 + 2u);
                r10 = 0x2ffu - (u32)(s16)((u32)rd8(r21 + 1u) | ((r11 << 2u) & 0x300u));
                r9 = (u32)rd8(r28 + 0x8cau);
                r6 = 0x2ffu - (u32)(s16)((u32)rd8(r21 + 4u) | ((r11 << 6u) & 0x300u));
                r3 = (u32)rd8(r21 + 7u);
                r7 = (u32)rd8(r21 + 3u) | ((r11 << 8u) & 0x300u);
                r17 = 0x2ffu - (u32)(s16)((u32)rd8(r21 + 6u) | ((r3 << 2u) & 0x300u));
                r11 = (u32)rd8(r21) | ((r11 << 4u) & 0x300u);
                r12 = 0x2ffu - (u32)(s16)((u32)rd8(r21 + 9u) | ((r3 << 6u) & 0x300u));
                r19 = (u32)rd8(r21 + 5u) | ((r3 << 4u) & 0x300u);
                r3 = (r3 << 8u) & 0x300u;
                r16 = (u32)rd8(r21 + 8u) | r3;
                wr16(0x817fdf48u, (u16)r11);
                r3 = 0x817fdf48u;
                wr16(0x817fdf4au, (u16)r10);
                wr16(0x817fdf4cu, (u16)r9);
                wr8(0x817fdf4eu, 0u);
                wr16(0x817fdf50u, (u16)r7);
                wr16(0x817fdf52u, (u16)r6);
                wr16(0x817fdf54u, (u16)r9);
                wr8(0x817fdf56u, 1u);
                wr16(0x817fdf58u, (u16)r19);
                wr16(0x817fdf5au, (u16)r17);
                wr16(0x817fdf5cu, (u16)r9);
                wr8(0x817fdf5eu, 2u);
                wr16(0x817fdf60u, (u16)r16);
                wr16(0x817fdf62u, (u16)r12);
                wr16(0x817fdf64u, (u16)r9);
                wr8(0x817fdf66u, 3u);
                ctr = 4u;
                do {
                    r4 = (u32)(s16)rd16(r3);
                    if ((s32)r4 < 512) {
                        r0 = (u32)(s16)rd16(r3 + 2u);
                        if ((s32)r0 < 384) {
                            wr16(r28 + 0x854u, (u16)r4);
                            r4 = (u32)rd16(r3 + 4u);
                            wr16(r28 + 0x856u, (u16)r0);
                            r0 = (u32)rd8(r3 + 6u);
                            wr16(r28 + 0x858u, (u16)r4);
                            wr8(r28 + 0x85au, (u8)r0);
                        }
                    }
                    r4 = (u32)(s16)rd16(r3);
                    if ((s32)r4 > 512) {
                        r0 = (u32)(s16)rd16(r3 + 2u);
                        if ((s32)r0 < 384) {
                            wr16(r28 + 0x85cu, (u16)r4);
                            r4 = (u32)rd16(r3 + 4u);
                            wr16(r28 + 0x85eu, (u16)r0);
                            r0 = (u32)rd8(r3 + 6u);
                            wr16(r28 + 0x860u, (u16)r4);
                            wr8(r28 + 0x862u, (u8)r0);
                        }
                    }
                    r4 = (u32)(s16)rd16(r3);
                    if ((s32)r4 > 512) {
                        r0 = (u32)(s16)rd16(r3 + 2u);
                        if ((s32)r0 > 384) {
                            wr16(r28 + 0x864u, (u16)r4);
                            r4 = (u32)rd16(r3 + 4u);
                            wr16(r28 + 0x866u, (u16)r0);
                            r0 = (u32)rd8(r3 + 6u);
                            wr16(r28 + 0x868u, (u16)r4);
                            wr8(r28 + 0x86au, (u8)r0);
                        }
                    }
                    r4 = (u32)(s16)rd16(r3);
                    if ((s32)r4 < 512) {
                        r0 = (u32)(s16)rd16(r3 + 2u);
                        if ((s32)r0 > 384) {
                            wr16(r28 + 0x86cu, (u16)r4);
                            r4 = (u32)rd16(r3 + 4u);
                            wr16(r28 + 0x86eu, (u16)r0);
                            r0 = (u32)rd8(r3 + 6u);
                            wr16(r28 + 0x870u, (u16)r4);
                            wr8(r28 + 0x872u, (u8)r0);
                        }
                    }
                    r3 = r3 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        f31 = (f64)rdf32(0x805772e0u);
        f29 = rdf64(0x80577318u);
        f30 = f31;
        r15 = 0u;
        do {
            r5 = (r15 << 1u) & 0x1feu;
            r3 = r28 + ((r15 << 3u) & 0x7f8u);
            r4 = (u32)(s16)rd16(r5 - 0x7e802100u);
            r8 = (u32)(s16)rd16(r3 + 0x854u);
            r7 = (r15 << 2u) & 0x3fcu;
            r9 = (u32)(s16)rd16(r3 + 0x856u);
            r0 = (u32)(s16)rd16(r5 - 0x7e802108u);
            wr32(0x817fdf6cu, r8 ^ 0x80000000u);
            r4 = r8 - r4;
            r0 = r9 - r0;
            wr32(0x817fdf74u, r9 ^ 0x80000000u);
            r4 = r4 ^ 0x80000000u;
            f1 = rdf64(0x817fdf68u);
            r0 = r0 ^ 0x80000000u;
            f0 = rdf64(0x817fdf70u);
            wr32(0x817fdf6cu, r4);
            f3 = (f64)(f32)(f1 - f29);
            f2 = (f64)(f32)(f0 - f29);
            wr32(0x817fdf74u, r0);
            f0 = rdf64(0x817fdf70u);
            f1 = (f64)(f32)(rdf64(0x817fdf68u) - f29);
            wrf32d(r7 - 0x7e8020c8u, f3);
            f0 = (f64)(f32)(f0 - f29);
            wrf32d(r7 - 0x7e8020d8u, f2);
            f30 = (f64)(f32)(f30 + f1);
            f31 = (f64)(f32)(f31 + f0);
            (void)tc_call(0x80284b24u, &a);
            r15 = r15 + 1u;
        } while (r15 < 4u);
        f0 = (f64)rdf32(0x805772e4u);
        f30 = (f64)(f32)(f30 * f0);
        f31 = (f64)(f32)(f31 * f0);
        a.f[0] = rdf64(0x805772f0u);
        f1 = tc_callf(0x80262358u, &a);
        f29 = (f64)(f32)f1;
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805772e8u) + f30), (f64)rdf32(0x805772ecu));
        f1 = tc_callf(0x80262358u, &a);
        f28 = (f64)(f32)((f64)(f32)f1 - f29);
        a.f[0] = rdf64(0x80577300u);
        f1 = tc_callf(0x80262358u, &a);
        f29 = (f64)(f32)f1;
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805772f8u) + f31), (f64)rdf32(0x805772fcu));
        f1 = tc_callf(0x80262358u, &a);
        r16 = (param_r3 << 2u) & 0xfffffffcu;
        f29 = (f64)(f32)((f64)(f32)f1 - f29);
        a.f[0] = f28;
        f1 = tc_callf(0x80262be8u, &a);
        wrf32d(r16 - 0x7faf0fb8u, (f64)(f32)((f64)rdf32(0x805772ecu) * (f64)(f32)((f64)rdf32(0x80577308u) * (f64)(f32)f1)));
        a.f[0] = f29;
        f1 = tc_callf(0x80262be8u, &a);
        wrf32d(r16 - 0x7faf0fa8u, (f64)(f32)((f64)rdf32(0x805772fcu) * (f64)(f32)((f64)rdf32(0x80577308u) * (f64)(f32)f1)));
        (void)tc_call(0x80284b24u, &a);
        (void)tc_call(0x80284b24u, &a);
        (void)tc_call(0x80284b24u, &a);
        f2 = (f64)rdf32(0x805772e0u);
        f0 = (f64)rdf32(0x817fdf38u);
        f4 = (f64)rdf32(r16 - 0x7faf0fb8u);
        wrf32d(r16 - 0x7faf0f98u, f2);
        f12 = (f64)(f32)(f0 + f4);
        f11 = (f64)rdf32(r16 - 0x7faf0fa8u);
        f1 = (f64)rdf32(r16 - 0x7faf0f98u);
        f10 = (f64)(f32)((f64)rdf32(0x817fdf28u) + f11);
        wrf32d(r16 - 0x7faf0f88u, f2);
        f0 = (f64)(f32)f2;
        f2 = (f64)(f32)(f1 + f12);
        f1 = (f64)rdf32(0x817fdf3cu);
        wrf32d(0x817fdf38u, f12);
        f3 = (f64)(f32)(f0 + f10);
        f9 = (f64)(f32)(f1 + f4);
        f8 = (f64)(f32)((f64)rdf32(0x817fdf2cu) + f11);
        wrf32d(r16 - 0x7faf0f98u, f2);
        f0 = (f64)rdf32(0x817fdf40u);
        f2 = (f64)(f32)((f64)rdf32(r16 - 0x7faf0f98u) + f9);
        wrf32d(r16 - 0x7faf0f88u, f3);
        f7 = (f64)(f32)((f64)(f32)f3 + f8);
        f1 = (f64)rdf32(0x817fdf44u);
        f6 = (f64)(f32)(f0 + f4);
        f5 = (f64)(f32)((f64)rdf32(0x817fdf30u) + f11);
        wrf32d(r16 - 0x7faf0f98u, f2);
        f4 = (f64)(f32)(f1 + f4);
        f3 = (f64)(f32)((f64)rdf32(0x817fdf34u) + f11);
        f1 = (f64)(f32)((f64)rdf32(r16 - 0x7faf0f98u) + f6);
        wrf32d(r16 - 0x7faf0f88u, f7);
        f2 = (f64)rdf32(0x805772e4u);
        wrf32d(0x817fdf28u, f10);
        wrf32d(r16 - 0x7faf0f98u, f1);
        f0 = (f64)(f32)((f64)(f32)f7 + f5);
        f1 = (f64)rdf32(r16 - 0x7faf0f98u);
        wrf32d(r16 - 0x7faf0f88u, f0);
        f0 = (f64)(f32)f0;
        f1 = (f64)(f32)(f1 + f4);
        wrf32d(0x817fdf3cu, f9);
        f0 = (f64)(f32)(f0 + f3);
        wrf32d(r16 - 0x7faf0f98u, f1);
        f1 = (f64)rdf32(r16 - 0x7faf0f98u);
        wrf32d(r16 - 0x7faf0f88u, f0);
        f0 = (f64)(f32)f0;
        f1 = (f64)(f32)(f1 * f2);
        wrf32d(0x817fdf2cu, f8);
        f2 = (f64)(f32)(f0 * f2);
        wrf32d(r16 - 0x7faf0f98u, f1);
        wrf32d(0x817fdf40u, f6);
        wrf32d(0x817fdf30u, f5);
        wrf32d(0x817fdf44u, f4);
        wrf32d(0x817fdf34u, f3);
        wrf32d(r16 - 0x7faf0f88u, f2);
        (void)tc_call(0x80284b24u, &a);
        f29 = rdf64(0x80577318u);
        wrf32d(r16 - 0x7faf0f78u, (f64)rdf32(0x805772e0u));
        f31 = (f64)rdf32(0x8057730cu);
        f30 = (f64)rdf32(0x80577310u);
        r15 = 0u;
        do {
            r19 = (r15 << 2u) & 0x3fcu;
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(r19 - 0x7e8020d8u) - (f64)rdf32(r16 - 0x7faf0f88u)), (f64)(f32)((f64)rdf32(r19 - 0x7e8020c8u) - (f64)rdf32(r16 - 0x7faf0f98u)));
            f1 = tc_callf(0x80262358u, &a);
            r0 = (r15 << 1u) & 0x1feu;
            r3 = (u32)(s16)rd16(r0 - 0x7e802108u);
            r0 = (u32)(s16)rd16(r0 - 0x7e802100u);
            r3 = r3 ^ 0x80000000u;
            wrf32d(r19 - 0x7e8020e8u, (f64)(f32)f1);
            r0 = r0 ^ 0x80000000u;
            wr32(0x817fdf6cu, r3);
            wr32(0x817fdf74u, r0);
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(rdf64(0x817fdf68u) - f29) - f31), (f64)(f32)((f64)(f32)(rdf64(0x817fdf70u) - f29) - f30));
            f1 = tc_callf(0x80262358u, &a);
            f2 = (f64)(f32)f1;
            r15 = r15 + 1u;
            f0 = (f64)rdf32(r16 - 0x7faf0f78u);
            f1 = (f64)(f32)((f64)rdf32(r19 - 0x7e8020e8u) - f2);
            wrf32d(r19 - 0x7e8020f8u, f2);
            f0 = (f64)(f32)(f0 + f1);
            wrf32d(r16 - 0x7faf0f78u, f0);
        } while (r15 < 4u);
        wrf32d(r29 - 0x7faf0f78u, (f64)(f32)((f64)rdf32(r29 - 0x7faf0f78u) * (f64)rdf32(0x805772e4u)));
        (void)tc_call(0x80284b24u, &a);
        r16 = 0u;
        do {
            r15 = (r16 & 0xffu) * 0xau;
            r3 = 0u;
            if (rd32(r28 + 0x8e0u) == 0u) {
                r15 = r15 + 0x16u;
            }
            r5 = r15 + 9u;
            r4 = r15;
            c0gt = (s32)r15 > (s32)r5;
            if ((s32)r15 < (s32)r5) {
                r6 = r15 + 1u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                if (!c0gt && (s32)r5 <= 2147483646) {
                    r10 = 1u;
                }
                if (r10 != 0u && (s32)r15 <= 2147483646) {
                    r9 = 1u;
                }
                if (r9 != 0u && (r15 - 0x80000000u) != 0u) {
                    r8 = 1u;
                }
                if (r8 != 0u) {
                    r8 = (r15 + 9u) & 0x80000000u;
                    r5 = 1u;
                    if (r8 == ((0u - r15) & 0x80000000u) && r8 != 0u) {
                        r5 = 0u;
                    }
                    if (r5 != 0u) {
                        r7 = 1u;
                    }
                }
                if (r7 != 0u) {
                    ctr = ((r6 + 7u - r15) >> 3u) & 0x1fffffffu;
                    if ((s32)r15 < (s32)r6) {
                        do {
                            r6 = r27 + r4;
                            r5 = (u32)rd8(r27 + r4);
                            r4 = r4 + 8u;
                            r3 = r3 + r5;
                            r3 = r3 + (u32)rd8(r6 + 1u);
                            r3 = r3 + (u32)rd8(r6 + 2u);
                            r3 = r3 + (u32)rd8(r6 + 3u);
                            r3 = r3 + (u32)rd8(r6 + 4u);
                            r3 = r3 + (u32)rd8(r6 + 5u);
                            r3 = r3 + (u32)rd8(r6 + 6u);
                            r3 = r3 + (u32)rd8(r6 + 7u);
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r6 = r15 + 9u;
                r5 = r27 + r4;
                ctr = r6 - r4;
                if ((s32)r4 < (s32)r6) {
                    do {
                        r0 = (u32)rd8(r5);
                        r4 = r4 + 1u;
                        r5 = r5 + 1u;
                        r3 = r3 + r0;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r17 = r27 + r15;
            r3 = r3 + 0x55u;
            r3 = r3 & 0xffu;
            if (r3 == (u32)rd8(r17 + 9u)) {
                (void)tc_call(0x80284b24u, &a);
                wr16(r28 + 0x874u, (u16)((((u32)rd8(r17 + 3u) >> 4u) & 3u) | (((u32)rd8(r17) << 2u) & 0x3fcu)));
                wr16(r28 + 0x876u, (u16)((((u32)rd8(r17 + 3u) >> 2u) & 3u) | (((u32)rd8(r17 + 1u) << 2u) & 0x3fcu)));
                wr16(r28 + 0x878u, (u16)(((u32)rd8(r17 + 3u) & 3u) | (((u32)rd8(r17 + 2u) << 2u) & 0x3fcu)));
                wr16(r28 + 0x87au, (u16)((((u32)rd8(r17 + 7u) >> 4u) & 3u) | (((u32)rd8(r17 + 4u) << 2u) & 0x3fcu)));
                wr16(r28 + 0x87cu, (u16)((((u32)rd8(r17 + 7u) >> 2u) & 3u) | (((u32)rd8(r17 + 5u) << 2u) & 0x3fcu)));
                wr16(r28 + 0x87eu, (u16)(((u32)rd8(r17 + 7u) & 3u) | (((u32)rd8(r17 + 6u) << 2u) & 0x3fcu)));
                wr8(r28 + 0x881u, (u8)((u32)rd8(r17 + 8u) & 0x7fu));
                wr8(r28 + 0x880u, (u8)((u32)rd8(r17 + 8u) & 0x80u));
                break;
            }
            (void)tc_call(0x80284b24u, &a);
            r16 = r16 + 1u;
        } while (r16 < 2u);
        (void)tc_call(0x80284b24u, &a);
        (void)tc_call(0x80284b24u, &a);
        (void)tc_call(0x80284b24u, &a);
    }
    return;
}
