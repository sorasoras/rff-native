#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_803172b4(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r23 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r10 = (u32)rd8(param_1 + 4u);
    r30 = param_1 + 0x20u;
    r11 = r10 & 0x20u;
    r29 = r30 + rd32(param_1 + 0xcu);
    r28 = r29 + rd32(param_1 + 0x10u);
    r27 = r28 + rd32(param_1 + 0x14u);
    r4 = 0u;
    do {
        if (r11 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
            if ((r10 & 0x80u) != 0u) {
                if (param_3 < param_5) {
                    r23 = (u32)rd16(param_1 + 8u);
                    if (r23 <= 1u || (r10 & 0x40u) == 0u) {
                        f5 = rdf64(0x805778b0u);
                        f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(param_1 + 5u) | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f5)));
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5));
                        r3 = tc_call(0x802558e4u, &a);
                        f2 = rdf64(0x805778b0u);
                        r4 = r3;
                        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)(r3 * r23) | 0x4330000000000000ull) - f2));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r8 = (u32)px_f2b(f0);
                    } else {
                        r25 = r23 - 1u;
                        r23 = (u32)rd8(param_1 + 5u);
                        f4 = rdf64(0x805778b0u);
                        f1 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805778c0u) + (f64)(f32)((f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) * (f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f4))), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f4));
                        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f4) * f1);
                        a.f[0] = f1;
                        r3 = tc_call(0x802558e4u, &a);
                        r4 = ppc_divwu(r3, r25);
                        if (r4 < r23) {
                            if ((r4 & 1u) != 0u) {
                                r8 = ((r25 * (r4 + 1u)) - r3) & 0xffffu;
                            } else {
                                r8 = (r3 - (r4 * r25)) & 0xffffu;
                            }
                        } else {
                            r4 = (r23 >> 0x1fu) & 1u;
                            r4 = ((r23 & 1u) ^ r4) - r4;
                            r5 = ppc_cntlzw(r4);
                            r4 = (r23 - 1u) & 0xffu;
                            r8 = r25 & 0xffffu & ~(0u - ((r5 >> 5u) & 1u));
                        }
                    }
                } else {
                    if ((r10 & 0x40u) != 0u) {
                        r0 = (u32)rd8(param_1 + 5u);
                        r4 = (r0 >> 0x1fu) & 1u;
                        r0 = r0 & 1u;
                        r0 = r0 ^ r4;
                        r0 = r0 - r4;
                        if (r0 == 0u) {
                            r8 = 0u;
                            r4 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                            break;
                        }
                    }
                    r8 = (u32)rd16(param_1 + 8u);
                    r4 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                }
            } else {
                r8 = (u32)rd16(param_1 + 8u);
                if (r8 <= 1u || (r10 & 0x40u) == 0u) {
                    r4 = ppc_divwu(param_3, r8);
                    if (r11 == 0u) {
                        r3 = (u32)rd8(param_1 + 5u);
                        if (r4 >= r3) {
                            r4 = (r3 - 1u) & 0xffu;
                            break;
                        }
                    }
                    r8 = (param_3 - (r4 * r8)) & 0xffffu;
                } else {
                    r7 = r8 - 1u;
                    r4 = ppc_divwu(param_3, r7);
                    if (r11 == 0u) {
                        r6 = (u32)rd8(param_1 + 5u);
                        if (r4 >= r6) {
                            r4 = (r6 >> 0x1fu) & 1u;
                            r4 = ((r6 & 1u) ^ r4) - r4;
                            r5 = ppc_cntlzw(r4);
                            r4 = (r6 - 1u) & 0xffu;
                            r8 = r7 & 0xffffu & ~(0u - ((r5 >> 5u) & 1u));
                            break;
                        }
                    }
                    if ((r4 & 1u) != 0u) {
                        r8 = ((r7 * (r4 + 1u)) - param_3) & 0xffffu;
                    } else {
                        r8 = (param_3 - (r4 * r7)) & 0xffffu;
                    }
                }
            }
        } else if ((r10 & 0x80u) != 0u) {
            r8 = ppc_divwu((u32)rd16(param_1 + 8u) * param_3, param_5) & 0xffffu;
        } else {
            r8 = (u32)rd16(param_1 + 8u);
            if (param_3 < r8) {
                r8 = param_3 & 0xffffu;
            }
        }
    } while (0);
    r0 = (u32)rd8(param_1 + 1u);
    c0lt = (s32)r0 < 108;
    if (r0 == 0x6cu) {
        r3 = param_2 + 0x8cu;
        r0 = 1u;
    } else if (!c0lt) {
        if (r0 != 0x70u) {
            return;
        }
        r3 = param_2 + 0x90u;
        r0 = 2u;
    } else {
        if (r0 != 0x68u) {
            return;
        }
        r3 = param_2 + 0x88u;
        r0 = 0u;
    }
    r8 = r8 & 0xffffu;
    r5 = r30 + 4u;
    r10 = (u32)rd16(r30) - 1u;
    r9 = 0u;
    r7 = (u32)((s32)(((r10 >> 0x1fu) & 1u) + r10) >> 1);
    if ((s32)r8 < (s32)rd16(r30 + 4u)) {
        r10 = 0u;
    } else {
        r6 = (u32)rd16(r5 + ((r10 << 4u) & 0xfffffff0u));
        if ((s32)r6 >= (s32)r8 && r8 != r6) {
            r6 = (u32)rd16(r5 + ((r7 << 4u) & 0xfffffff0u));
            while ((s32)r9 < (s32)r7) {
                if (r8 != r6) {
                    if ((s32)r6 < (s32)r8) {
                        r9 = r7;
                    }
                    if ((s32)r6 >= (s32)r8) {
                        r10 = r7;
                    }
                } else {
                    r9 = r7;
                }
                r7 = r9 + r10;
                r7 = ((r7 >> 0x1fu) & 1u) + r7;
                r6 = (u32)rd16(r5 + ((r7 << 3u) & 0xfffffff0u));
                r7 = (u32)((s32)r7 >> 1);
            }
            r10 = r9;
        }
    }
    r5 = r5 + ((r10 << 4u) & 0xfffffff0u);
    r12 = (u32)rd8(r5 + 2u);
    if (r12 != 0u) {
        r5 = (u32)rd16(r5 + 0xcu);
        r4 = r4 * 0x7b929u;
        r4 = r4 + ((r5 * 0x371097e7u) + 0x4bf53u);
        r4 = ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + r4;
        wr32(0x817fdfa8u, r4);
        r7 = (u32)rd8(0x817fdfaau) ^ (u32)rd8(0x817fdfabu);
        r4 = (u32)rd8(0x817fdfa8u);
        r6 = (u32)rd8(0x817fdfa9u) ^ r7;
        wr8(0x817fdfaau, (u8)r7);
        r4 = r4 ^ r6;
        wr8(0x817fdfa9u, (u8)r6);
        wr8(0x817fdfa8u, (u8)r4);
        if ((r12 & 2u) != 0u) {
            r5 = (u32)rd16(r28);
            r6 = (rd32(0x817fdfa8u) >> 0x10u) & 0xffffu;
            r4 = r28 + (((r6 - (ppc_divwu(r6, r5) * r5)) << 2u) & 0xfffffffcu);
            r8 = (u32)rd8(r4 + 4u);
            r9 = (u32)rd8(r4 + 5u);
            r5 = (u32)rd16(r4 + 6u);
        } else {
            r5 = r29 + ((r5 << 3u) & 0x7fff8u);
            r4 = (u32)rd8(r5 + 8u);
            r8 = (u32)rd8(r5 + 4u);
            c0lt = (s32)r4 < 2;
            r9 = (u32)rd8(r5 + 5u);
            r5 = (u32)rd16(r5 + 6u);
            if (r4 == 2u) {
                r9 = ((rd32(0x817fdfa8u) >> 0x10u) & 2u) | (r9 & 1u);
            } else if (!c0lt) {
                if ((s32)r4 < 4) {
                    r9 = (rd32(0x817fdfa8u) >> 0x10u) & 3u;
                }
            } else if ((s32)r4 >= 1) {
                r9 = ((rd32(0x817fdfa8u) >> 0x10u) & 1u) | (r9 & 2u);
            }
        }
    } else {
        r8 = (u32)rd8(r5 + 0xcu);
        r9 = (u32)rd8(r5 + 0xdu);
        r5 = (u32)rd16(r5 + 0xeu);
    }
    r4 = (r5 << 2u) & 0x3fffcu;
    r5 = r8 & 0xfu;
    r4 = r27 + r4;
    r10 = (r0 << 2u) & 0xfffffffcu;
    r8 = (r0 << 1u) & 0xfffffffeu;
    wr32(r3, rd32(r4 + 4u));
    r5 = ((r10 & 0x20u) != 0u) ? 0u : (r5 << (r10 & 0x1fu));
    r0 = ((u32)rd8(param_2 + 0x96u) & ~(((r8 & 0x20u) != 0u) ? 0u : (3u << (r8 & 0x1fu))) & 0xffu) | (((r8 & 0x20u) != 0u) ? 0u : ((r9 & 3u) << (r8 & 0x1fu)));
    wr16(param_2 + 0x94u, (u16)(((u32)rd16(param_2 + 0x94u) & ~(((r10 & 0x20u) != 0u) ? 0u : (0xfu << (r10 & 0x1fu))) & 0xffffu) | r5));
    wr8(param_2 + 0x96u, (u8)r0);
    return;
}
