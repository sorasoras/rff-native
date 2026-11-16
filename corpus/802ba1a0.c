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

void fn_802ba1a0(u32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if (param_2 < 0) {
        r0 = 0u - (u32)param_2;
        if ((s32)r0 <= param_4) {
            wrf32d(param_1, (f64)rdf32(0x80577390u));
        } else {
            if ((s32)r0 >= param_5) {
                wrf32d(param_1, (f64)rdf32(0x805773a4u));
            } else {
                f2 = rdf64(0x805773b8u);
                wrf32d(param_1, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((0u - ((u32)param_2 + (u32)param_4)) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)(((u32)param_5 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
            }
        }
        wrf32d(param_1, -(f64)rdf32(param_1));
    } else {
        if (param_2 <= param_4) {
            wrf32d(param_1, (f64)rdf32(0x80577390u));
        } else {
            if (param_2 >= param_5) {
                wrf32d(param_1, (f64)rdf32(0x805773a4u));
            } else {
                f2 = rdf64(0x805773b8u);
                wrf32d(param_1, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(((u32)param_2 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)(((u32)param_5 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
            }
        }
    }
    if (param_3 < 0) {
        r0 = 0u - (u32)param_3;
        if ((s32)r0 <= param_4) {
            wrf32d(param_1 + 4u, (f64)rdf32(0x80577390u));
        } else {
            if ((s32)r0 >= param_5) {
                wrf32d(param_1 + 4u, (f64)rdf32(0x805773a4u));
            } else {
                f2 = rdf64(0x805773b8u);
                wrf32d(param_1 + 4u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((0u - ((u32)param_3 + (u32)param_4)) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)(((u32)param_5 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
            }
        }
        wrf32d(param_1 + 4u, -(f64)rdf32(param_1 + 4u));
    } else {
        if (param_3 <= param_4) {
            wrf32d(param_1 + 4u, (f64)rdf32(0x80577390u));
        } else {
            if (param_3 >= param_5) {
                wrf32d(param_1 + 4u, (f64)rdf32(0x805773a4u));
            } else {
                f2 = rdf64(0x805773b8u);
                wrf32d(param_1 + 4u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(((u32)param_3 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)(((u32)param_5 - (u32)param_4) ^ 0x80000000u) | 0x4330000000000000ull) - f2)));
            }
        }
    }
    f0 = (f64)rdf32(param_1);
    f1 = (f64)rdf32(param_1 + 4u);
    f1 = (f64)(f32)(f1 * f1);
    f1 = (f64)(f32)((f64)(f32)(f0 * f0) + f1);
    if (f1 > (f64)rdf32(0x805773a4u)) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262ec0u, &a);
        f2 = (f64)(f32)f1;
        f0 = (f64)(f32)px_fdiv((f64)rdf32(param_1 + 4u), f2);
        wrf32d(param_1, (f64)(f32)px_fdiv((f64)rdf32(param_1), f2));
        wrf32d(param_1 + 4u, f0);
    }
    return;
}
