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

void fn_802ba3c4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r31 = 0x802ba1a0u;
    r30 = (u32)param_1 + 0x60u;
    if (rd32(0x80571ba0u) != 0u) {
        r31 = 0x802ba078u;
    }
    r6 = (u32)rd8((u32)param_2 + 0x28u);
    if (r6 == 1u && (((u32)rd8((u32)param_2 + 0x36u) + 0xfdu) & 0xffu) <= 2u) {
        if ((u32)rd8((u32)param_1 + 0x51eu) != 0u) {
            f2 = (f64)rdf32(0x80577390u);
            wr8((u32)param_1 + 0x51eu, 0u);
            f1 = (f64)rdf32(0x805773a0u);
            r0 = rd32(0x80571bacu);
            f0 = (f64)rdf32(0x805773a4u);
            wr32(r30, rd32(0x80571ba8u));
            wr32(r30 + 4u, r0);
            wrf32d(r30 + 0x10u, f2);
            wrf32d(r30 + 8u, f2);
            wrf32d(r30 + 0xcu, f1);
            wrf32d(r30 + 0x14u, f0);
            wrf32d(r30 + 0x18u, f2);
        }
        a.r[0] = r30;
        a.r[1] = (u32)(s8)rd8((u32)param_2 + 0x30u);
        a.r[2] = (u32)(s8)rd8((u32)param_2 + 0x31u);
        a.r[3] = rd32(0x80570eccu);
        a.r[4] = rd32(0x80570ed0u);
        a.f[0] = f1;
        a.f[1] = f2;
        (void)tc_call(r31, &a);
    } else {
        if (r6 == 2u && (((u32)rd8((u32)param_2 + 0x36u) + 0xfau) & 0xffu) <= 2u) {
            if ((u32)rd8((u32)param_1 + 0x51eu) != 0u) {
                f0 = (f64)rdf32(0x80577390u);
                wr8((u32)param_1 + 0x51eu, 0u);
                r0 = (u32)rd16((u32)param_1 + 0x4d0u);
                r5 = rd32(0x80571bacu);
                wr32(r30 + 0xcu, rd32(0x80571ba8u));
                wr32(r30 + 0x10u, r5);
                r5 = rd32(0x80571bacu);
                wr32(r30 + 0x14u, rd32(0x80571ba8u));
                wr32(r30 + 0x18u, r5);
                wrf32d(r30 + 0x20u, f0);
                wrf32d(r30 + 0x1cu, f0);
                wr32(r30 + 8u, 0u);
                wr32(r30 + 4u, 0u);
                wr32(r30, 0u);
                wr16((u32)param_1 + 0x4d4u, 0u);
                wr16((u32)param_1 + 0x4d6u, (u16)r0);
            }
            a.r[0] = r30 + 0xcu;
            a.r[1] = (u32)(s16)rd16((u32)param_2 + 0x2cu);
            a.r[2] = (u32)(s16)rd16((u32)param_2 + 0x2eu);
            a.r[3] = rd32(0x80570ed4u);
            a.r[4] = rd32(0x80570ed8u);
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            f1 = tc_callf(r31, &a);
            a.r[0] = r30 + 0x14u;
            a.r[1] = (u32)(s16)rd16((u32)param_2 + 0x30u);
            a.r[2] = (u32)(s16)rd16((u32)param_2 + 0x32u);
            a.r[3] = rd32(0x80570ed4u);
            a.r[4] = rd32(0x80570ed8u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(r31, &a);
            r5 = rd32(0x80570edcu);
            r0 = (u32)rd8((u32)param_2 + 0x34u);
            r4 = rd32(0x80570ee0u);
            if ((s32)r0 <= (s32)r5) {
                wrf32d(r30 + 0x1cu, (f64)rdf32(0x80577390u));
            } else {
                if ((s32)r0 >= (s32)r4) {
                    wrf32d(r30 + 0x1cu, (f64)rdf32(0x805773a4u));
                } else {
                    f2 = rdf64(0x805773b8u);
                    wrf32d(r30 + 0x1cu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((r0 - r5) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)((r4 - r5) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
                }
            }
            r5 = rd32(0x80570edcu);
            r0 = (u32)rd8((u32)param_2 + 0x35u);
            r4 = rd32(0x80570ee0u);
            if ((s32)r0 <= (s32)r5) {
                wrf32d(r30 + 0x20u, (f64)rdf32(0x80577390u));
            } else {
                if ((s32)r0 >= (s32)r4) {
                    wrf32d(r30 + 0x20u, (f64)rdf32(0x805773a4u));
                } else {
                    f2 = rdf64(0x805773b8u);
                    wrf32d(r30 + 0x20u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((r0 - r5) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)((r4 - r5) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
                }
            }
        }
    }
    return;
}
