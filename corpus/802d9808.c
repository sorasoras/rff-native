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

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
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

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
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

void fn_802d9808(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_hi(0.0));
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_hi(0.0));
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_hi(0.0));
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_hi(0.0));
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_hi(0.0));
    wrf32d(0x817fdf98u, px_lo(0.0));
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, px_hi(0.0));
    wrf32d(0x817fdf88u, px_lo(0.0));
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    a.r[0] = param_1;
    f1 = tc_callf(0x802d7324u, &a);
    wrf32d(0x817fde4cu, f1);
    a.r[0] = param_1;
    f1 = tc_callf(0x802d732cu, &a);
    f28 = (f64)(f32)f1;
    wrf32d(0x817fde48u, f1);
    r31 = 0u;
    a.r[0] = param_1;
    a.r[1] = 0x817fde4cu;
    a.r[2] = 0x817fde48u;
    a.r[3] = param_2;
    a.r[4] = (u32)param_3;
    f1 = tc_callf(0x802d9f58u, &a);
    f29 = f1;
    a.r[0] = param_1;
    (void)tc_call(0x802d7324u, &a);
    a.r[0] = param_1;
    f1 = tc_callf(0x802d732cu, &a);
    f2 = (f64)rdf32(0x817fde4cu);
    wr32(0x817fde88u, 0u);
    f30 = (f64)(f32)px_psub(f28, f1);
    f0 = (f64)rdf32(0x817fde48u);
    wr32(0x817fde8cu, 0u);
    wr32(0x817fde90u, 0u);
    wr32(0x817fde80u, param_1);
    wr32(0x817fde84u, param_2);
    wrf32d(0x817fde88u, f2);
    wrf32d(0x817fde8cu, f0);
    a.r[0] = param_1;
    r3 = tc_call(0x802d609cu, &a);
    a.r[0] = 0x817fde70u;
    a.r[1] = r3;
    (void)tc_call(0x802d2e40u, &a);
    wr32(0x817fde70u, param_2);
    a.r[0] = 0x817fde70u;
    r3 = tc_call(0x802558bcu, &a);
    f1 = tc_lastf();
    f31 = (f64)rdf32(0x80348b00u);
    f25 = (f64)rdf32(0x80348b10u);
    r26 = r3;
    f27 = rdf64(0x80348b08u);
    for (;;) {
        r5 = rd32(0x817fde70u);
        r3 = r5 - param_2;
        if (((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1) > param_3) break;
        r4 = r26 & 0xffffu;
        if ((s32)r4 >= 32) {
            a.r[0] = param_1;
            f1 = tc_callf(0x802d732cu, &a);
            f24 = f1;
            if (r31 != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 0x4cu);
                a.r[0] = param_1;
                (void)tc_call(0x802d7304u, &a);
            }
            r31 = 1u;
            a.r[0] = param_1;
            r3 = tc_call(0x802d609cu, &a);
            r25 = r3;
            a.r[0] = param_1;
            f1 = tc_callf(0x802d6f98u, &a);
            a.r[0] = r25;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r25) + 0x1cu), &a);
            wr32(0x817fdf58u, 0x43300000u);
            wr32(0x817fdf5cu, (0u - r3) ^ 0x80000000u);
            f1 = (f64)(f32)px_pmul((f64)(f32)px_psub(rdf64(0x817fdf58u), f27), f1);
            a.f[0] = f1;
            a.r[0] = param_1;
            (void)tc_call(0x802d7314u, &a);
            a.r[0] = param_1;
            a.r[1] = r26 & 0xffffu;
            (void)tc_call(0x802d71acu, &a);
            a.f[0] = f24;
            a.r[0] = param_1;
            (void)tc_call(0x802d72fcu, &a);
        } else {
            wr32(0x817fde84u, r5);
            wr32(0x817fde90u, (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu);
            r3 = rd32(param_1 + 0x5cu);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0x817fde80u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
            if (r3 != 3u) {
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        if (r3 == 4u) break;
                    } else {
                        r31 = 1u;
                    }
                } else {
                    r31 = 0u;
                }
            } else {
                r0 = rd32(param_1 + 0x58u) & 3u;
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        a.r[0] = param_1;
                        f1 = tc_callf(0x802d7324u, &a);
                        f0 = (f64)(f32)px_psub(f1, (f64)rdf32(0x817fde88u));
                        if (!(f29 < f0)) {
                            f0 = f29;
                        }
                        f29 = f0;
                        a.f[0] = (f64)rdf32(0x817fde88u);
                        a.r[0] = param_1;
                        (void)tc_call(0x802d72f4u, &a);
                    } else {
                        wrf32d(0x817fde50u, f31);
                        r31 = rd32(0x817fde84u);
                        wrf32d(0x817fde54u, f31);
                        wrf32d(0x817fde58u, f31);
                        wrf32d(0x817fde5cu, f31);
                        wr8(0x817fde98u, rd8(param_1));
                        wr8(0x817fde99u, rd8(param_1 + 1u));
                        wr8(0x817fde9au, rd8(param_1 + 2u));
                        wr8(0x817fde9bu, rd8(param_1 + 3u));
                        wr8(0x817fde9cu, rd8(param_1 + 4u));
                        wr8(0x817fde9du, rd8(param_1 + 5u));
                        wr8(0x817fde9eu, rd8(param_1 + 6u));
                        wr8(0x817fde9fu, rd8(param_1 + 7u));
                        wr8(0x817fdea0u, rd8(param_1 + 8u));
                        wr8(0x817fdea1u, rd8(param_1 + 9u));
                        wr8(0x817fdea2u, rd8(param_1 + 0xau));
                        wr8(0x817fdea3u, rd8(param_1 + 0xbu));
                        wr8(0x817fdea4u, rd8(param_1 + 0xcu));
                        wr8(0x817fdea5u, rd8(param_1 + 0xdu));
                        wr8(0x817fdea6u, rd8(param_1 + 0xeu));
                        wr8(0x817fdea7u, rd8(param_1 + 0xfu));
                        wr8(0x817fdea8u, rd8(param_1 + 0x10u));
                        wr8(0x817fdea9u, rd8(param_1 + 0x11u));
                        wr8(0x817fdeaau, rd8(param_1 + 0x12u));
                        wr8(0x817fdeabu, rd8(param_1 + 0x13u));
                        wr8(0x817fdeacu, rd8(param_1 + 0x14u));
                        wr8(0x817fdeadu, rd8(param_1 + 0x15u));
                        wr8(0x817fdeaeu, rd8(param_1 + 0x16u));
                        wr8(0x817fdeafu, rd8(param_1 + 0x17u));
                        wr8(0x817fdeb0u, rd8(param_1 + 0x18u));
                        wr8(0x817fdeb1u, rd8(param_1 + 0x19u));
                        wr8(0x817fdeb2u, rd8(param_1 + 0x1au));
                        wr8(0x817fdeb3u, rd8(param_1 + 0x1bu));
                        wr8(0x817fdeb4u, rd8(param_1 + 0x1cu));
                        wr8(0x817fdeb5u, rd8(param_1 + 0x1du));
                        wr8(0x817fdeb6u, rd8(param_1 + 0x1eu));
                        wr8(0x817fdeb7u, rd8(param_1 + 0x1fu));
                        wr32(0x817fdeb8u, rd32(param_1 + 0x20u));
                        r0 = rd32(param_1 + 0x28u);
                        wr32(0x817fdebcu, rd32(param_1 + 0x24u));
                        wr32(0x817fdec0u, r0);
                        r0 = rd32(param_1 + 0x30u);
                        wr32(0x817fdec4u, rd32(param_1 + 0x2cu));
                        wr32(0x817fdec8u, r0);
                        wr32(0x817fdeccu, rd32(param_1 + 0x34u));
                        r0 = rd32(param_1 + 0x3cu);
                        wr32(0x817fded0u, rd32(param_1 + 0x38u));
                        wr32(0x817fded4u, r0);
                        wr8(0x817fded8u, rd8(param_1 + 0x40u));
                        wr8(0x817fded9u, rd8(param_1 + 0x41u));
                        wr8(0x817fdedau, rd8(param_1 + 0x42u));
                        wr8(0x817fdedbu, rd8(param_1 + 0x43u));
                        wrf32d(0x817fdedcu, (f64)rdf32(param_1 + 0x44u));
                        wr32(0x817fdee0u, rd32(param_1 + 0x48u));
                        wrf32d(0x817fdee4u, (f64)rdf32(param_1 + 0x4cu));
                        wrf32d(0x817fdee8u, (f64)rdf32(param_1 + 0x50u));
                        wr32(0x817fdeecu, rd32(param_1 + 0x54u));
                        wr32(0x817fdef0u, rd32(param_1 + 0x58u));
                        wr32(0x817fdef4u, rd32(param_1 + 0x5cu));
                        a.f[0] = f31;
                        a.f[1] = f31;
                        a.r[0] = 0x817fde98u;
                        (void)tc_call(0x802d72e8u, &a);
                        r4 = r31 - param_2;
                        a.r[0] = 0x817fde98u;
                        a.r[1] = 0x817fde50u;
                        a.r[2] = r31;
                        a.r[3] = (u32)param_3 - (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                        (void)tc_call(0x802d9314u, &a);
                        f26 = (f64)(f32)px_psub((f64)rdf32(0x817fde58u), (f64)rdf32(0x817fde50u));
                        a.r[0] = 0x817fde98u;
                        a.r[1] = 0u;
                        (void)tc_call(0x802d6054u, &a);
                        a.f[0] = (f64)(f32)px_padd((f64)rdf32(0x817fde88u), (f64)(f32)px_psub(f29, f26));
                        a.r[0] = param_1;
                        (void)tc_call(0x802d72f4u, &a);
                    }
                } else {
                    wrf32d(0x817fde60u, f31);
                    r31 = rd32(0x817fde84u);
                    wrf32d(0x817fde64u, f31);
                    wrf32d(0x817fde68u, f31);
                    wrf32d(0x817fde6cu, f31);
                    wr8(0x817fdef8u, rd8(param_1));
                    wr8(0x817fdef9u, rd8(param_1 + 1u));
                    wr8(0x817fdefau, rd8(param_1 + 2u));
                    wr8(0x817fdefbu, rd8(param_1 + 3u));
                    wr8(0x817fdefcu, rd8(param_1 + 4u));
                    wr8(0x817fdefdu, rd8(param_1 + 5u));
                    wr8(0x817fdefeu, rd8(param_1 + 6u));
                    wr8(0x817fdeffu, rd8(param_1 + 7u));
                    wr8(0x817fdf00u, rd8(param_1 + 8u));
                    wr8(0x817fdf01u, rd8(param_1 + 9u));
                    wr8(0x817fdf02u, rd8(param_1 + 0xau));
                    wr8(0x817fdf03u, rd8(param_1 + 0xbu));
                    wr8(0x817fdf04u, rd8(param_1 + 0xcu));
                    wr8(0x817fdf05u, rd8(param_1 + 0xdu));
                    wr8(0x817fdf06u, rd8(param_1 + 0xeu));
                    wr8(0x817fdf07u, rd8(param_1 + 0xfu));
                    wr8(0x817fdf08u, rd8(param_1 + 0x10u));
                    wr8(0x817fdf09u, rd8(param_1 + 0x11u));
                    wr8(0x817fdf0au, rd8(param_1 + 0x12u));
                    wr8(0x817fdf0bu, rd8(param_1 + 0x13u));
                    wr8(0x817fdf0cu, rd8(param_1 + 0x14u));
                    wr8(0x817fdf0du, rd8(param_1 + 0x15u));
                    wr8(0x817fdf0eu, rd8(param_1 + 0x16u));
                    wr8(0x817fdf0fu, rd8(param_1 + 0x17u));
                    wr8(0x817fdf10u, rd8(param_1 + 0x18u));
                    wr8(0x817fdf11u, rd8(param_1 + 0x19u));
                    wr8(0x817fdf12u, rd8(param_1 + 0x1au));
                    wr8(0x817fdf13u, rd8(param_1 + 0x1bu));
                    wr8(0x817fdf14u, rd8(param_1 + 0x1cu));
                    wr8(0x817fdf15u, rd8(param_1 + 0x1du));
                    wr8(0x817fdf16u, rd8(param_1 + 0x1eu));
                    wr8(0x817fdf17u, rd8(param_1 + 0x1fu));
                    wr32(0x817fdf18u, rd32(param_1 + 0x20u));
                    r0 = rd32(param_1 + 0x28u);
                    wr32(0x817fdf1cu, rd32(param_1 + 0x24u));
                    wr32(0x817fdf20u, r0);
                    r0 = rd32(param_1 + 0x30u);
                    wr32(0x817fdf24u, rd32(param_1 + 0x2cu));
                    wr32(0x817fdf28u, r0);
                    wr32(0x817fdf2cu, rd32(param_1 + 0x34u));
                    r0 = rd32(param_1 + 0x3cu);
                    wr32(0x817fdf30u, rd32(param_1 + 0x38u));
                    wr32(0x817fdf34u, r0);
                    wr8(0x817fdf38u, rd8(param_1 + 0x40u));
                    wr8(0x817fdf39u, rd8(param_1 + 0x41u));
                    wr8(0x817fdf3au, rd8(param_1 + 0x42u));
                    wr8(0x817fdf3bu, rd8(param_1 + 0x43u));
                    wrf32d(0x817fdf3cu, (f64)rdf32(param_1 + 0x44u));
                    wr32(0x817fdf40u, rd32(param_1 + 0x48u));
                    wrf32d(0x817fdf44u, (f64)rdf32(param_1 + 0x4cu));
                    wrf32d(0x817fdf48u, (f64)rdf32(param_1 + 0x50u));
                    wr32(0x817fdf4cu, rd32(param_1 + 0x54u));
                    wr32(0x817fdf50u, rd32(param_1 + 0x58u));
                    wr32(0x817fdf54u, rd32(param_1 + 0x5cu));
                    a.f[0] = f31;
                    a.f[1] = f31;
                    a.r[0] = 0x817fdef8u;
                    (void)tc_call(0x802d72e8u, &a);
                    r4 = r31 - param_2;
                    a.r[0] = 0x817fdef8u;
                    a.r[1] = 0x817fde60u;
                    a.r[2] = r31;
                    a.r[3] = (u32)param_3 - (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                    (void)tc_call(0x802d9314u, &a);
                    f26 = (f64)(f32)px_psub((f64)rdf32(0x817fde68u), (f64)rdf32(0x817fde60u));
                    a.r[0] = 0x817fdef8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x802d6054u, &a);
                    a.f[0] = (f64)(f32)px_padd((f64)rdf32(0x817fde88u), (f64)(f32)px_pmul((f64)(f32)px_psub(f29, f26), f25));
                    a.r[0] = param_1;
                    (void)tc_call(0x802d72f4u, &a);
                }
                r31 = 0u;
            }
            wr32(0x817fde70u, rd32(0x817fde84u));
        }
        a.r[0] = 0x817fde70u;
        r3 = tc_call(0x802558bcu, &a);
        f1 = tc_lastf();
        r26 = r3;
    }
    r0 = rd32(param_1 + 0x58u) & 0x300u;
    if (r0 == 0x100u || r0 == 0x200u) {
        a.f[0] = f28;
        a.r[0] = param_1;
        (void)tc_call(0x802d72fcu, &a);
    } else {
        a.f[0] = f30;
        a.r[0] = param_1;
        (void)tc_call(0x802d7314u, &a);
    }
    return;
}
