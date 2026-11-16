#include "tc_rt.h"

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

void fn_802bad68(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x80278e38u, &a);
    a.r[0] = 0x80545c58u;
    a.r[1] = 0u;
    a.r[2] = 0x14e0u;
    (void)tc_call(0x8000443cu, &a);
    r3 = tc_call(0x8027cb18u, &a);
    r3 = r3 & 0xffu;
    r24 = 0x80545c58u;
    r23 = 0u;
    f31 = (f64)rdf32(0x805773a4u);
    f29 = (f64)rdf32(0x80577390u);
    f30 = (f64)rdf32(0x805773e4u);
    wrf32d(0x80570eb0u, (f64)(f32)(f31 + (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x805773e8u))));
    do {
        wr8(r24 + 0x520u, 1u);
        f27 = (f64)rdf32(0x805773a4u);
        wr8(r24 + 0x521u, 0u);
        f28 = (f64)rdf32(0x805773acu);
        wr8(r24 + 0x5cu, 0xfdu);
        f2 = (f64)rdf32(0x80570e84u);
        wr8(r24 + 0x5fu, 0u);
        r3 = rd32(0x80570e88u);
        wrf32d(r24 + 0xa4u, f2);
        r0 = rd32(0x80570e8cu);
        wr32(r24 + 0xa8u, r3);
        r3 = rd32(0x80570e90u);
        wr32(r24 + 0xacu, r0);
        r0 = rd32(0x80570e94u);
        wr32(r24 + 0xb0u, r3);
        r3 = rd32(0x80571b98u);
        wr32(r24 + 0xb4u, r0);
        r0 = rd32(0x80571b9cu);
        wr32(r24 + 0xb8u, r3);
        wr32(r24 + 0xbcu, r0);
        a.f[0] = (f64)(f32)((f64)(f32)(f27 * f27) + (f64)(f32)(f28 * f28));
        f1 = tc_callf(0x80262ec0u, &a);
        f0 = (f64)rdf32(r24 + 0xb8u);
        f1 = (f64)(f32)f1;
        if (!(f0 < f29)) {
            f27 = (f64)(f32)(f27 - f0);
        } else {
            f27 = (f64)(f32)(f27 + f0);
        }
        f0 = (f64)rdf32(r24 + 0xbcu);
        if (!(f0 < f29)) {
            f28 = (f64)(f32)(f28 - f0);
        } else {
            f28 = (f64)(f32)(f28 + f0);
        }
        if (!(f27 < f28)) {
            f27 = f28;
        }
        f1 = (f64)(f32)px_fdiv(f1, f27);
        f0 = (f64)rdf32(0x80570eecu);
        wrf32d(0x80547138u, f31);
        wrf32d(0x8054713cu, f29);
        wrf32d(0x80547140u, f29);
        wrf32d(0x80547144u, f29);
        wrf32d(r24 + 0xc0u, f1);
        wrf32d(r24 + 0x9cu, f29);
        wrf32d(r24 + 0x94u, f29);
        wrf32d(r24 + 0x8cu, f29);
        wrf32d(r24 + 0x84u, f29);
        wrf32d(r24 + 0xa0u, f31);
        wrf32d(r24 + 0x98u, f31);
        wrf32d(r24 + 0x90u, f31);
        wrf32d(r24 + 0x88u, f31);
        wr32(r24 + 0x534u, 0u);
        wr32(r24 + 0x530u, 0u);
        wr32(r24 + 0x52cu, 0u);
        wr32(r24 + 0x528u, 0u);
        wr16(r24 + 0x4d0u, 0x9c40u);
        wr16(r24 + 0x4d2u, 0u);
        wr16(r24 + 0x4ccu, 0u);
        wr16(r24 + 0x4ceu, 0x9c40u);
        wr16(r24 + 0x4d4u, 0u);
        wr16(r24 + 0x4d6u, 0x9c40u);
        wr8(r24 + 0x524u, 1u);
        wr8(r24 + 0x525u, 1u);
        wr8(r24 + 0x526u, 0u);
        wrf32d(0x80547148u, f29);
        a.f[0] = (f64)(f32)(f30 * f0);
        f1 = tc_callf(0x80262704u, &a);
        f2 = (f64)(f32)f1;
        f1 = (f64)(f32)(f30 * (f64)rdf32(0x80570eecu));
        wrf32d(0x8054714cu, f2);
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f0 = (f64)rdf32(0x80570eecu);
        wrf32d(0x80547154u, f29);
        wrf32d(0x80547158u, f29);
        wrf32d(0x80547150u, (f64)(f32)-f1);
        a.f[0] = (f64)(f32)(f30 * f0);
        f1 = tc_callf(0x80262b10u, &a);
        f2 = (f64)(f32)f1;
        f1 = (f64)(f32)(f30 * (f64)rdf32(0x80570eecu));
        wrf32d(0x8054715cu, f2);
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        wrf32d(0x80547164u, f29);
        r3 = r24;
        r4 = 0u;
        wrf32d(0x80547160u, (f64)(f32)f1);
        do {
            r4 = r4 + 1u;
            wr8(r3 + 0x139u, 0xffu);
            r3 = r3 + 0x38u;
        } while (r4 < 0x10u);
        r23 = r23 + 1u;
        r24 = r24 + 0x538u;
    } while ((s32)r23 < 4);
    f28 = (f64)rdf32(0x80570e98u);
    r3 = tc_call(0x8022c2b0u, &a);
    f0 = (f64)rdf32(0x8057739cu);
    wrf32d(0x80570e98u, f28);
    f0 = (f64)(f32)px_fdiv(f28, f0);
    wrf32d(0x80571bb4u, f0);
    wrf32d(0x80571bb0u, f0);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r25 = 3u;
    r26 = 0x80546c00u;
    do {
        r3 = tc_call(0x80278eb8u, &a);
        f1 = tc_lastf();
        if (r3 == 3u) {
            a.r[0] = r25;
            a.r[1] = 0u;
            f1 = tc_callf(0x8027a740u, &a);
        }
        r25 = r25 - 1u;
        wr8(r26 + 0x51du, 1u);
        r26 = r26 - 0x538u;
    } while ((s32)r25 >= 0);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32(0x80570e80u);
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80226610u, &a);
    return;
}
