#include "tc_rt.h"

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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801e2194(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0;
    f64 f23 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x8057623cu);
    f3 = (f64)rdf32(0x80576200u);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f3;
    a.f[3] = f3;
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056b18u, &a);
    f19 = (f64)rdf32(0x805761f0u);
    r4 = rd32(param_r3 + 8u);
    f18 = f19;
    f17 = f19;
    r0 = rd32(param_r3 + 0x10u);
    wrf32d(0x817fdebcu, f19);
    wrf32d(0x817fdeb4u, f19);
    a.r[0] = 4u;
    f1 = tc_callf(0x801dc57cu, &a);
    f20 = f1;
    f23 = (f64)px_w2f(r4);
    r24 = 0u;
    f25 = (f64)px_w2f(r0);
    f26 = (f64)rdf32(0x805762e8u);
    f27 = rdf64(0x80576210u);
    f28 = (f64)rdf32(0x80576204u);
    f29 = (f64)rdf32(0x805761f4u);
    f30 = (f64)rdf32(0x8057621cu);
    f31 = (f64)rdf32(0x805762e4u);
    f15 = (f64)rdf32(0x8057623cu);
    f16 = (f64)rdf32(0x80576298u);
    f21 = (f64)rdf32(0x805762d4u);
    f22 = (f64)rdf32(0x805762a8u);
    while ((s32)r24 < (s32)rd32(0x805709bcu)) {
        f18 = (f64)(f32)(f18 + f21);
        r23 = 0u;
        f17 = (f64)(f32)(f17 + f22);
        for (;;) {
            r25 = rd32(0x805709b8u);
            if ((s32)r23 >= (s32)r25) break;
            wrf32d(0x817fdeb4u, f23);
            wrf32d(0x817fdebcu, f25);
            a.f[0] = f19;
            f1 = tc_callf(0x80262b10u, &a);
            wrf32d(0x817fdeb4u, ppc_fmadds(f18, (f64)(f32)f1, (f64)(f32)f23));
            a.f[0] = f19;
            f1 = tc_callf(0x80262704u, &a);
            wrf32d(0x817fdebcu, ppc_fmadds(f18, (f64)(f32)f1, (f64)(f32)f25));
            f19 = ppc_fmadds(f29, (f64)(f32)px_fdiv(f28, (f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - f27)), f19);
            a.r[0] = param_r4;
            r3 = tc_call(0x801e00fcu, &a);
            r25 = r3;
            if (r3 != 0u) {
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(r25 + 0xfcu);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                wr32(r25 + 0xfcu, 0u);
                f2 = (f64)rdf32(0x817fdeb4u);
                wr32(r25 + 0x100u, 0x1au);
                wrf32d(r25 + 0x104u, f31);
                f0 = (f64)rdf32(0x817fdebcu);
                wrf32d(r25 + 0x108u, f30);
                wr32(r25 + 0x110u, 0u);
                wrf32d(r25 + 0x10cu, f28);
                wrf32d(r25 + 8u, f2);
                wrf32d(r25 + 0xcu, (f64)px_w2f(ppc_single_bits(f26)));
                wrf32d(r25 + 0x10u, f0);
                wrf32d(r25 + 0x18cu, f17);
                wrf32d(r25 + 0x190u, f15);
                wrf32d(r25 + 0x20u, f16);
                wr32(r25 + 0x1c0u, 0x23a2u);
                wr32(r25 + 0x30u, 0x80c5u);
                wrf32d(r25 + 0x24u, f20);
                a.r[0] = r25;
                a.r[1] = 0u;
                (void)tc_call(0x801dc5acu, &a);
            }
            r23 = r23 + 1u;
        }
        r24 = r24 + 1u;
    }
    return;
}
