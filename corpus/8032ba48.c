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

static f64 px_pdiv(f64 a, f64 b)
{
    f64 r = a / b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_8032ba48(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0, r23 = 0, r24 = 0, r25 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0;
    f64 f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdc60u, 0x817fe000u);
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
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, px_hi(0.0));
    wrf32d(0x817fdf78u, px_lo(0.0));
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, px_hi(0.0));
    wrf32d(0x817fdf68u, px_lo(0.0));
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x8032c084u, &a);
    a.r[0] = rd32((u32)param_3 + 0x24u);
    r3 = tc_call(0x8032a308u, &a);
    r31 = r3;
    (void)tc_call(0x8032b044u, &a);
    a.r[0] = param_2;
    a.r[1] = 0x817fde38u;
    (void)tc_call(0x8032b048u, &a);
    a.r[0] = 0x817fde68u;
    a.r[1] = 0x817fde38u;
    a.r[2] = (u32)param_3;
    f1 = tc_callf(0x80327b38u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
    r30 = r3;
    (void)tc_call(0x8032b044u, &a);
    (void)tc_call(0x8032b044u, &a);
    a.r[0] = (u32)param_3;
    a.r[1] = 0x817fddd8u;
    (void)tc_call(0x8031efa8u, &a);
    a.r[0] = 0x817fde08u;
    a.r[1] = 0x817fde38u;
    a.r[2] = 0x817fddd8u;
    (void)tc_call(0x8032b204u, &a);
    r3 = tc_call(0x8032a06cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = 0x817fde08u;
    a.r[1] = 0u;
    f1 = tc_callf(0x80320f2cu, &a);
    f27 = f1;
    a.r[0] = 0x817fde08u;
    a.r[1] = 1u;
    f1 = tc_callf(0x80320f2cu, &a);
    f28 = f1;
    a.r[0] = 0x817fde08u;
    a.r[1] = 2u;
    f1 = tc_callf(0x80320f2cu, &a);
    f29 = f1;
    a.r[0] = (u32)param_3;
    r3 = tc_call(0x8032b2fcu, &a);
    f25 = (f64)rdf32(0x80577c48u);
    r25 = r3;
    while (r3 != 0u && (f64)rdf32(r3 + 0xccu) > f25) {
        r3 = r3 + 0xccu;
        a.r[0] = r3;
        a.r[1] = 0x805705d4u;
        (void)tc_call(0x8032b240u, &a);
        a.r[0] = (u32)param_3;
        a.r[1] = r25;
        r3 = tc_call(0x8032b304u, &a);
        r25 = r3;
    }
    r12 = rd32(param_1);
    r0 = (u32)rd8(r31 + 0xaau);
    r7 = (u32)(s8)rd8(r31 + 0xa9u) ^ 0x80000000u;
    wr32(0x817fdf28u, 0x43300000u);
    f3 = rdf64(0x80577c58u);
    wr32(0x817fdf2cu, r7);
    r5 = (u32)(s8)r0 ^ 0x80000000u;
    r0 = (u32)rd16(r31);
    f0 = rdf64(0x817fdf28u);
    wr32(0x817fdf34u, r5);
    f2 = (f64)(f32)px_psub(f0, f3);
    f1 = (f64)rdf32(0x80577c4cu);
    wr32(0x817fdf30u, 0x43300000u);
    r12 = rd32(r12 + 0x10u);
    f26 = (f64)(f32)px_pdiv(f2, f1);
    f25 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fdf30u), f3), f1);
    a.r[0] = param_1;
    a.r[1] = r0 & 0x800u;
    a.r[2] = r5;
    a.r[3] = 0x43300000u;
    a.r[4] = r7;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r25 = r3;
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(r31) & 0x800u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    f1 = tc_lastf();
    r12 = r25;
    r25 = r3;
    r24 = 1u;
    a.r[0] = (u32)param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f31 = (f64)rdf32(0x80577c50u);
    r23 = r3;
    f30 = (f64)rdf32(0x80577c44u);
    while (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        f1 = tc_callf(0x8032b310u, &a);
        f24 = f1;
        if (!(f1 < f30)) {
            a.r[0] = r23;
            f1 = tc_callf(0x8032b32cu, &a);
            f23 = f1;
            if (!(f1 < f30)) {
                f22 = (f64)rdf32(0x80577c48u);
                if ((u32)rd8(r31 + 0xb0u) != 0u) {
                    (void)tc_call(0x8032a02cu, &a);
                    a.r[0] = r23;
                    a.r[1] = 0x817fdd08u;
                    (void)tc_call(0x8032b3a8u, &a);
                    a.r[0] = 0x817fdd08u;
                    a.r[1] = 0x817fdd08u;
                    f1 = tc_callf(0x8032b2dcu, &a);
                    a.f[0] = f1;
                    f1 = tc_callf(0x8032b3f0u, &a);
                    f22 = (f64)(f32)px_padd(f22, (f64)(f32)px_pdiv((f64)(f32)px_pmul(f31, f1), f23));
                }
                a.r[0] = param_1;
                a.r[1] = r23;
                a.r[2] = r31;
                a.r[3] = param_2;
                a.r[4] = r24;
                (void)tc_call(0x80326730u, &a);
                r24 = 0u;
                a.r[0] = 0x817fdda8u;
                a.r[1] = r23;
                a.r[2] = (u32)rd8(r31 + 0xafu);
                (void)tc_call(0x8032b440u, &a);
                a.f[0] = f26;
                a.f[1] = f25;
                a.f[2] = f24;
                a.f[3] = f23;
                a.f[4] = f22;
                a.r[0] = 0x817fdd78u;
                a.r[1] = (u32)rd8(r31 + 0xb1u);
                a.r[2] = 0x817fdda8u;
                (void)tc_call(0x8032b804u, &a);
                (void)tc_call(0x8032a02cu, &a);
                (void)tc_call(0x8032a02cu, &a);
                (void)tc_call(0x8032a02cu, &a);
                f1 = tc_callf(0x8032a02cu, &a);
                a.r[0] = 0x817fdcd8u;
                a.r[1] = 0x817fde68u;
                a.r[2] = r23;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                (void)tc_call(r30, &a);
                a.r[0] = 0x817fdcd8u;
                a.r[1] = 0x817fde08u;
                a.r[2] = 0x817fdcd8u;
                (void)tc_call(0x802f031cu, &a);
                a.r[0] = 0x817fdcf0u;
                a.r[1] = 0x817fdcd8u;
                (void)tc_call(0x8032b240u, &a);
                a.r[0] = 0x817fdcf0u;
                (void)tc_call(0x8032b26cu, &a);
                a.f[0] = (f64)rdf32(0x817fdcdcu);
                a.f[1] = -(f64)rdf32(0x817fdcd8u);
                a.f[2] = (f64)rdf32(0x80577c40u);
                a.r[0] = 0x817fdc84u;
                r3 = tc_call(0x8032b25cu, &a);
                a.r[0] = 0x817fdcfcu;
                a.r[1] = r3;
                (void)tc_call(0x8032b240u, &a);
                a.r[0] = 0x817fdcfcu;
                r3 = tc_call(0x8032b26cu, &a);
                if (r3 != 0u) {
                    f3 = (f64)rdf32(0x817fdcd8u);
                    f0 = (f64)rdf32(0x817fdcdcu);
                    f1 = -f3;
                    f4 = (f64)rdf32(0x817fdce0u);
                    f2 = -f0;
                    f3 = (f64)(f32)px_pmul(f3, f3);
                    f0 = (f64)(f32)px_pmul(f0, f0);
                    f1 = (f64)(f32)px_pmul(f1, f4);
                    f2 = (f64)(f32)px_pmul(f2, f4);
                    f3 = (f64)(f32)px_padd(f3, f0);
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.r[0] = 0x817fdc78u;
                    r3 = tc_call(0x8032b25cu, &a);
                    a.r[0] = 0x817fdce4u;
                    a.r[1] = r3;
                    (void)tc_call(0x8032b240u, &a);
                } else {
                    a.r[0] = 0x817fdcfcu;
                    a.r[1] = 0x817fdcd8u;
                    a.r[2] = r23 + 0xccu;
                    (void)tc_call(0x8032ba0cu, &a);
                    a.r[0] = 0x817fdcfcu;
                    r3 = tc_call(0x8032b26cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x817fdcfcu;
                        a.r[1] = 0x805705b0u;
                        (void)tc_call(0x8032b240u, &a);
                    }
                    a.r[0] = 0x817fdce4u;
                    a.r[1] = 0x817fdcfcu;
                    a.r[2] = 0x817fdcd8u;
                    (void)tc_call(0x8032ba0cu, &a);
                }
                a.r[0] = 0x817fdce4u;
                (void)tc_call(0x8032b26cu, &a);
                a.r[0] = r23 + 0xccu;
                a.r[1] = 0x817fdce4u;
                (void)tc_call(0x8032b240u, &a);
                (void)tc_call(0x8032a02cu, &a);
                a.r[0] = 0x817fdcccu;
                a.r[1] = 0x817fde08u;
                a.r[2] = r23 + 0xacu;
                (void)tc_call(0x8032a030u, &a);
                wrf32d(0x817fdc68u, (f64)(f32)px_pmul(f27, (f64)rdf32(0x817fdd04u)));
                wrf32d(0x817fdc6cu, (f64)(f32)px_pmul(f28, (f64)rdf32(0x817fdcf8u)));
                wrf32d(0x817fdc70u, (f64)(f32)px_pmul(f29, (f64)rdf32(0x817fdcecu)));
                wrf32d(0x817fdc74u, (f64)rdf32(0x817fdcd4u));
                a.f[0] = (f64)(f32)px_pmul(f27, (f64)rdf32(0x817fdcfcu));
                a.f[1] = (f64)(f32)px_pmul(f28, (f64)rdf32(0x817fdcf0u));
                a.f[2] = (f64)(f32)px_pmul(f29, (f64)rdf32(0x817fdce4u));
                a.f[3] = (f64)rdf32(0x817fdcccu);
                a.f[4] = (f64)(f32)px_pmul(f27, (f64)rdf32(0x817fdd00u));
                a.f[5] = (f64)(f32)px_pmul(f28, (f64)rdf32(0x817fdcf4u));
                a.f[6] = (f64)(f32)px_pmul(f29, (f64)rdf32(0x817fdce8u));
                a.f[7] = (f64)rdf32(0x817fdcd0u);
                a.r[0] = 0x817fdd48u;
                (void)tc_call(0x8032b7c0u, &a);
                (void)tc_call(0x8032b044u, &a);
                a.r[0] = 0x817fdd18u;
                a.r[1] = 0x817fdd48u;
                a.r[2] = 0x817fdd78u;
                (void)tc_call(0x8032b204u, &a);
                a.f[0] = (f64)rdf32(0x817fdd24u);
                a.f[1] = (f64)rdf32(0x817fdd34u);
                a.f[2] = (f64)rdf32(0x817fdd44u);
                a.r[0] = 0x817fdcc0u;
                (void)tc_call(0x8032b25cu, &a);
                a.f[0] = (f64)(f32)px_padd((f64)rdf32(0x817fdd18u), (f64)rdf32(0x817fdd1cu));
                a.f[1] = (f64)(f32)px_padd((f64)rdf32(0x817fdd28u), (f64)rdf32(0x817fdd2cu));
                a.f[2] = (f64)(f32)px_padd((f64)rdf32(0x817fdd38u), (f64)rdf32(0x817fdd3cu));
                a.r[0] = 0x817fdcb4u;
                (void)tc_call(0x8032b25cu, &a);
                a.f[0] = (f64)(f32)px_psub((f64)rdf32(0x817fdd18u), (f64)rdf32(0x817fdd1cu));
                a.f[1] = (f64)(f32)px_psub((f64)rdf32(0x817fdd28u), (f64)rdf32(0x817fdd2cu));
                a.f[2] = (f64)(f32)px_psub((f64)rdf32(0x817fdd38u), (f64)rdf32(0x817fdd3cu));
                a.r[0] = 0x817fdca8u;
                (void)tc_call(0x8032b25cu, &a);
                r6 = (u32)rd8(param_1 + 0xc0u);
                r6 = (((0u - r6) | r6) >> 0x1fu) & 1u;
                a.r[0] = 0x817fdcc0u;
                a.r[1] = 0x817fdcb4u;
                a.r[2] = 0x817fdca8u;
                a.r[3] = r6;
                f1 = tc_callf(0x8032a070u, &a);
                if ((u32)rd8(r31 + 0xadu) == 1u) {
                    a.f[0] = (f64)(f32)px_padd((f64)rdf32(0x817fdd1cu), (f64)rdf32(0x817fdd20u));
                    a.f[1] = (f64)(f32)px_padd((f64)rdf32(0x817fdd2cu), (f64)rdf32(0x817fdd30u));
                    a.f[2] = (f64)(f32)px_padd((f64)rdf32(0x817fdd3cu), (f64)rdf32(0x817fdd40u));
                    a.r[0] = 0x817fdc9cu;
                    (void)tc_call(0x8032b25cu, &a);
                    a.f[0] = (f64)(f32)px_psub((f64)rdf32(0x817fdd1cu), (f64)rdf32(0x817fdd20u));
                    a.f[1] = (f64)(f32)px_psub((f64)rdf32(0x817fdd2cu), (f64)rdf32(0x817fdd30u));
                    a.f[2] = (f64)(f32)px_psub((f64)rdf32(0x817fdd3cu), (f64)rdf32(0x817fdd40u));
                    a.r[0] = 0x817fdc90u;
                    (void)tc_call(0x8032b25cu, &a);
                    r6 = (u32)rd8(param_1 + 0xc0u);
                    r6 = (((0u - r6) | r6) >> 0x1fu) & 1u;
                    a.r[0] = 0x817fdcc0u;
                    a.r[1] = 0x817fdc9cu;
                    a.r[2] = 0x817fdc90u;
                    a.r[3] = r6;
                    f1 = tc_callf(0x8032a070u, &a);
                }
            }
        }
        a.r[0] = (u32)param_3;
        a.r[1] = r23;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(r25, &a);
        r23 = r3;
    }
    return;
}
