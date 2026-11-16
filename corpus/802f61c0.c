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

void fn_802f61c0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    if ((u32)param_2 == 0u) {
        r0 = rd32((u32)param_1 + 0x7cu);
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt && (s32)r0 < 4) {
            r7 = rd32((u32)param_1 + 0x70u);
            r6 = rd32((u32)param_1 + 0x74u);
            if ((s32)r6 < (s32)r7) {
                f4 = rdf64(0x805775b0u);
                f2 = (f64)rdf32((u32)param_1 + 0x68u);
                f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x6cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
            } else {
                f1 = (f64)rdf32((u32)param_1 + 0x6cu);
            }
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805775b0u)) * (f64)(f32)((f64)rdf32(0x805775a8u) - f1));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r8 = (u32)px_f2b(f0);
            if ((s32)r8 <= 0) {
                r8 = 1u;
            }
            if ((s32)r6 < (s32)r7) {
                f4 = rdf64(0x805775b0u);
                f2 = (f64)rdf32((u32)param_1 + 0x68u);
                f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x6cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
            } else {
                f1 = (f64)rdf32((u32)param_1 + 0x6cu);
            }
            f0 = (f64)rdf32(0x805775a8u);
            wrf32d((u32)param_1 + 0x68u, f1);
            wrf32d((u32)param_1 + 0x6cu, f0);
            wr32((u32)param_1 + 0x70u, r8);
            wr32((u32)param_1 + 0x74u, 0u);
            wr32((u32)param_1 + 0x7cu, 3u);
            wr8((u32)param_1 + 0x80u, 1u);
        }
    } else {
        r0 = rd32((u32)param_1 + 0x7cu);
        c0lt = (s32)r0 < 2;
        if (r0 != 2u) {
            if (!c0lt) {
                if ((s32)r0 >= 4) {
                    return;
                }
            } else if ((s32)r0 < 0) {
                return;
            }
            r7 = rd32((u32)param_1 + 0x70u);
            r6 = rd32((u32)param_1 + 0x74u);
            if ((s32)r6 < (s32)r7) {
                f4 = rdf64(0x805775b0u);
                f2 = (f64)rdf32((u32)param_1 + 0x68u);
                f2 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x6cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
            } else {
                f2 = (f64)rdf32((u32)param_1 + 0x6cu);
            }
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805775b0u)) * f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r5 = (u32)px_f2b(f0);
            if ((s32)r5 <= 0) {
                r5 = 1u;
            }
            if ((s32)r6 < (s32)r7) {
                f4 = rdf64(0x805775b0u);
                f2 = (f64)rdf32((u32)param_1 + 0x68u);
                f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32((u32)param_1 + 0x6cu) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
            } else {
                f1 = (f64)rdf32((u32)param_1 + 0x6cu);
            }
            f0 = (f64)rdf32(0x805775acu);
            wrf32d((u32)param_1 + 0x68u, f1);
            wrf32d((u32)param_1 + 0x6cu, f0);
            wr32((u32)param_1 + 0x70u, r5);
            wr32((u32)param_1 + 0x74u, 0u);
            wr32((u32)param_1 + 0x7cu, 1u);
            wr8((u32)param_1 + 0x80u, 0u);
        }
    }
    return;
}
