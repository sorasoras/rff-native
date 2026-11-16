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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_pmul(f64 a, f64 c)
{
    f64 r = a * c;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

void fn_80090f6c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    wr32(0x817fde60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
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
    wr32(param_1 + 0x1064u, 0u);
    a.r[1] = 0u;
    r3 = tc_call(0x8017bff8u, &a);
    f1 = tc_lastf();
    f1 = (f64)rdf32(0x8057296cu);
    f0 = (f64)rdf32(0x80572968u);
    r16 = 0u;
    wrf32d(0x817fdec8u, f1);
    f28 = rdf64(0x805729b8u);
    wrf32d(0x817fdec4u, f1);
    f29 = (f64)rdf32(0x80572990u);
    wrf32d(0x817fdec0u, f1);
    wrf32d(0x817fdeccu, f0);
    wrf32d(0x817fdedcu, f1);
    wrf32d(0x817fdeecu, f1);
    wrf32d(0x817fded0u, f1);
    wrf32d(0x817fdee0u, f0);
    wrf32d(0x817fdef0u, f1);
    wrf32d(0x817fded4u, f1);
    wrf32d(0x817fdee4u, f1);
    wrf32d(0x817fdef4u, f0);
    wrf32d(0x817fded8u, f1);
    wrf32d(0x817fdee8u, f1);
    wrf32d(0x817fdef8u, f1);
    wrf32d(0x817fdf0cu, f1);
    wrf32d(0x817fdf08u, f1);
    wrf32d(0x817fdf04u, f1);
    wrf32d(0x817fdf10u, f0);
    wrf32d(0x817fdf20u, f1);
    wrf32d(0x817fdf30u, f1);
    wrf32d(0x817fdf14u, f1);
    wrf32d(0x817fdf24u, f0);
    wrf32d(0x817fdf34u, f1);
    wrf32d(0x817fdf18u, f1);
    wrf32d(0x817fdf28u, f1);
    wrf32d(0x817fdf38u, f0);
    wrf32d(0x817fdf1cu, f1);
    wrf32d(0x817fdf2cu, f1);
    wrf32d(0x817fdf3cu, f1);
    do {
        a.r[0] = param_1;
        a.r[1] = r16;
        r3 = tc_call(0x8009218cu, &a);
        f1 = tc_lastf();
        if ((s32)r3 < 25) {
            a.r[0] = r3;
            r3 = tc_call(0x800bf01cu, &a);
            f1 = tc_lastf();
            wr32(0x817fde90u, 0u);
            r15 = r3;
            r18 = 0u;
            wr32(0x817fde94u, 0u);
            wr32(0x817fde98u, 0u);
            wr32(0x817fde9cu, 0u);
            wr32(0x817fdea0u, 0u);
            wr32(0x817fdea4u, 0u);
            wr32(0x817fdea8u, 0u);
            wr32(0x817fdeacu, 0u);
            wr32(0x817fdeb0u, 0u);
            wr32(0x817fde74u, 0u);
            wr32(0x817fde70u, 0u);
            wr32(0x817fde6cu, 0u);
            wr32(0x817fde68u, 0u);
            if (r16 == 0u) {
                a.r[0] = param_1;
                a.r[1] = r3;
                a.r[2] = 0x817fde74u;
                a.r[3] = 0x817fde70u;
                a.r[4] = 0x817fde6cu;
                a.r[5] = 0x817fde68u;
                r3 = tc_call(0x80091338u, &a);
                f1 = tc_lastf();
                r31 = 3u;
            } else {
                a.r[0] = r16;
                r3 = tc_call(0x8007d150u, &a);
                f1 = tc_lastf();
                r3 = rd32(r3 + 0xcu);
                r3 = (ppc_cntlzw(r3 - 4u) >> 5u) & 0x7ffffffu;
                r31 = (r3 + 1u) & 0xffu;
            }
            r30 = 0u;
            r17 = 0u;
            while (r30 < rd32(r15)) {
                r0 = rd32(r15 + 4u);
                r29 = r0 + r17;
                a.r[0] = 0x80492800u;
                a.r[1] = rd32(r17 + r0);
                a.r[2] = r30;
                r3 = tc_call(0x8017b190u, &a);
                f1 = tc_lastf();
                f2 = (f64)rdf32(r29 + 0x10u);
                r28 = r3;
                f1 = (f64)rdf32(r29 + 0xcu);
                r27 = 0u;
                f0 = (f64)rdf32(r29 + 8u);
                f30 = (f64)(f32)f2;
                f27 = (f64)(f32)f1;
                wrf32d(0x817fde88u, f1);
                f31 = (f64)(f32)f0;
                wrf32d(0x817fde84u, f0);
                wrf32d(0x817fde8cu, f2);
                while (r27 < rd32(r29 + 0x14u)) {
                    r26 = 0u;
                    while (r26 < rd32(r29 + 0x18u)) {
                        wr32(0x817fdf54u, r26);
                        wr32(0x817fdf50u, 0x43300000u);
                        f0 = rdf64(0x817fdf50u);
                        wr32(0x817fdf5cu, r27);
                        f1 = (f64)(f32)px_psub(f0, f28);
                        wr32(0x817fdf58u, 0x43300000u);
                        f0 = rdf64(0x817fdf58u);
                        f1 = (f64)(f32)px_sfma(f29, f1, f30);
                        wrf32d(0x817fde7cu, f27);
                        f0 = (f64)(f32)px_psub(f0, f28);
                        wrf32d(0x817fde80u, f1);
                        f0 = (f64)(f32)px_sfma(f29, f0, f31);
                        wrf32d(0x817fde78u, f0);
                        a.r[0] = 0x817fdeb4u;
                        a.r[1] = r28;
                        a.r[2] = 0x817fde78u;
                        a.r[3] = rd32(r29 + 0x1cu);
                        a.r[4] = 0u;
                        r3 = tc_call(0x8008d3e8u, &a);
                        f1 = tc_lastf();
                        a.r[0] = 0x817fdeb4u;
                        a.r[1] = param_2;
                        a.r[3] = r16;
                        r3 = tc_call(0x8008dffcu, &a);
                        f1 = tc_lastf();
                        r3 = rd32(0x817fdeb4u);
                        if ((u32)rd8(r3 + 3u) == 4u) {
                            r3 = (u32)rd8(r3 + 1u);
                            if (((r3 + 0xffu) & 0xffu) <= 1u) {
                                r0 = (r18 << 2u) & 0xfffffffcu;
                                r18 = r18 + 1u;
                                wr32(r0 - 0x7e802170u, r28);
                                if (r18 == 9u) {
                                    r3 = tc_call(0x80040b64u, &a);
                                    f1 = tc_lastf();
                                    r18 = r3 - (((ppc_mulhwu(0x38e38e39u, r3) >> 1u) & 0x7fffffffu) * 9u);
                                    if (r16 == 0u) {
                                        r5 = rd32(0x817fde68u);
                                        r3 = rd32(0x817fde6cu);
                                        r4 = rd32(0x817fde74u);
                                        r3 = r5 + r3;
                                        r31 = r3 + (r4 + rd32(0x817fde70u));
                                        f1 = tc_callf(0x80040a00u, &a);
                                        r3 = tc_lastr();
                                        wr32(0x817fdf5cu, r31);
                                        wr32(0x817fdf58u, 0x43300000u);
                                        f1 = (f64)(f32)px_pmul((f64)(f32)px_psub(rdf64(0x817fdf58u), f28), f1);
                                        a.f[0] = f1;
                                        r3 = tc_call(0x802558e4u, &a);
                                        f1 = tc_lastf();
                                        r4 = rd32(0x817fde74u);
                                        if (r3 < r4) {
                                            r31 = 3u;
                                        } else {
                                            r4 = r4 + rd32(0x817fde70u);
                                            if (r3 < r4) {
                                                r31 = 4u;
                                            } else {
                                                r0 = rd32(0x817fde6cu) + r4;
                                                ca = r0 <= r3;
                                                r0 = r3 - r0;
                                                r31 = r0 - (r0 + !ca) + 6u;
                                            }
                                        }
                                        wr8(rd32(((r18 << 2u) & 0xfffffffcu) - 0x7e802170u) + 7u, (u8)r31);
                                    } else {
                                        wr8(rd32(((r18 << 2u) & 0xfffffffcu) - 0x7e802170u) + 7u, (u8)r31);
                                    }
                                    r18 = 0u;
                                }
                            }
                        }
                        r28 = r28 + 8u;
                        r26 = r26 + 1u;
                    }
                    r27 = r27 + 1u;
                }
                r17 = r17 + 0x20u;
                r30 = r30 + 1u;
            }
        }
        r16 = r16 + 1u;
    } while (r16 < 0x40u);
    return;
}
