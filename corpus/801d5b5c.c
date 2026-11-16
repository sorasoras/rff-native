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

u32 fn_801d5b5c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801d55f8u, &a);
    r31 = r3;
    r3 = tc_call(0x80040b64u, &a);
    r3 = (r3 >> 2u) & 0x3fffffffu;
    r5 = rd32(r31 + 0x54u);
    r6 = rd32(r31 + 0x58u);
    r4 = rd32(r31 + 0x5cu);
    r7 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    if ((u32)param_2 == 0u) {
        r3 = r5 ^ 0x80000000u;
        r5 = (r6 + (r4 + r5)) ^ 0x80000000u;
        f2 = rdf64(0x80576040u);
        f3 = (f64)(f32)px_fdiv((f64)rdf32(0x8057603cu), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f2));
        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f2) * f3);
        f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f2) * f3);
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r5 = (u32)px_f2b(f1);
        r6 = (u32)px_f2b(f0);
        r4 = 0x64u - (r5 + r6);
    }
    r6 = r6 + r5;
    r4 = r4 + r6;
    if ((s32)r7 <= (s32)r5) {
        r3 = 0u;
    } else {
        if ((s32)r7 <= (s32)r6) {
            r3 = 1u;
        } else {
            r3 = 3u;
            if ((s32)r7 <= (s32)r4) {
                r3 = 2u;
            }
        }
    }
    return r3;
}
