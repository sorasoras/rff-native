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

void fn_802fe104(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f28 = rdf64(0x805776b8u);
    f29 = (f64)rdf32(0x805776c0u);
    f30 = (f64)rdf32(0x805776b4u);
    f1 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32((u32)param_1 + 0xf0u) * (f64)(f32)(px_b2f((u64)(((u32)rd8((u32)param_1 + 0x106u) * (u32)rd16((u32)param_1 + 0x108u)) ^ 0x80000000u) | 0x4330000000000000ull) - f28)), f29);
    if (f30 != f1) {
        f2 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0xf4u), f1);
        f31 = (f64)rdf32(0x805776b0u);
        f27 = (f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - f28);
        while (f2 < f27) {
            f27 = (f64)(f32)(f27 - f2);
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            r3 = tc_call(0x802fde84u, &a);
            if (r3 != 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d56cu, &a);
                if ((u32)rd8((u32)param_1 + 0xe9u) != 0u) {
                    r29 = (u32)param_1;
                    if ((u32)param_1 != 0u) {
                        r29 = (u32)param_1 + 0xdcu;
                    }
                    r3 = tc_call(0x80306860u, &a);
                    a.r[0] = r3;
                    a.r[1] = r29;
                    (void)tc_call(0x80306c94u, &a);
                    wr8((u32)param_1 + 0xe9u, 0u);
                }
                if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
                    r29 = (u32)param_1;
                    if ((u32)param_1 != 0u) {
                        r29 = (u32)param_1 + 0xd0u;
                    }
                    r3 = tc_call(0x802f85a0u, &a);
                    a.r[0] = r3;
                    a.r[1] = r29;
                    (void)tc_call(0x802f86b4u, &a);
                    wr8((u32)param_1 + 0xe8u, 0u);
                }
                r28 = (u32)param_1;
                r29 = 0u;
                do {
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d56cu, &a);
                    if ((s32)r29 > 15) {
                        r3 = 0u;
                    } else {
                        r3 = rd32(r28 + 0x11cu);
                    }
                    if (r3 == 0u) {
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                    } else {
                        a.r[0] = r3;
                        f1 = tc_callf(0x802ff138u, &a);
                        r3 = rd32((u32)param_1 + 0x110u);
                        a.r[0] = r3;
                        a.r[1] = rd32(r28 + 0x11cu);
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                        wr32(r28 + 0x11cu, 0u);
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                    }
                    r29 = r29 + 1u;
                    r28 = r28 + 4u;
                } while ((s32)r29 < 16);
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
            r0 = (u32)rd8((u32)param_1 + 0x106u) * (u32)rd16((u32)param_1 + 0x108u);
            f0 = (f64)rdf32((u32)param_1 + 0xf0u);
            wr32((u32)param_1 + 0x17cu, rd32((u32)param_1 + 0x17cu) + 1u);
            r0 = r0 ^ 0x80000000u;
            f0 = (f64)(f32)(f0 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f28));
            f1 = (f64)(f32)px_fdiv(f0, f29);
            if (f30 == f1) {
                return;
            }
            f2 = (f64)(f32)px_fdiv(f31, f1);
        }
        f2 = (f64)(f32)(f2 - f27);
        wrf32d((u32)param_1 + 0xf4u, (f64)(f32)(f2 * f1));
    }
    return;
}
