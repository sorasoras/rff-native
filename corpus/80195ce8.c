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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_80195ce8(s32 param_1, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571100u) != 0u) {
        f0 = (f64)rdf32(0x80575490u);
    } else {
        f0 = (f64)rdf32(0x8057548cu);
    }
    r0 = (u32)rd8((u32)param_1 + 0x791u);
    wrf32d((u32)param_1 + 0x1b48u, f0);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_1;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x801963a4u, &a);
        r5 = rd32(0x803541bcu);
        if (r5 != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354178u);
                }
            } else {
                r4 = rd32(0x80354144u);
            }
        } else {
            r4 = 0u;
        }
        if (r5 != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r0 = 0u;
                } else {
                    r0 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r0 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            wr8((u32)param_1 + 0x791u, 3u);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            f2 = rdf64(0x805754a8u);
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8((u32)param_1 + 0x792u) | 0x4330000000000000ull) - f2) - (f64)rdf32(0x80575470u));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r0 = (u32)px_f2b(f0);
            r4 = r0 & 0xffu;
            wr8((u32)param_1 + 0x792u, (u8)r0);
            if (r4 != 0u && !((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2) > (f64)rdf32(0x805754a0u))) {
                wr8((u32)param_1 + 0x560u, (u8)r4);
                wr8((u32)param_1 + 0x4ccu, (u8)r0);
                wr8((u32)param_1 + 0x2cu, (u8)r0);
                wr8((u32)param_1 + 0x154u, (u8)r0);
                wr8((u32)param_1 + 0x1e8u, (u8)r0);
                wr8((u32)param_1 + 0x27cu, (u8)r0);
                wr8((u32)param_1 + 0x310u, (u8)r0);
                wr8((u32)param_1 + 0x3a4u, (u8)r0);
                wr8((u32)param_1 + 0x438u, (u8)r0);
                r3 = 1u;
                return r3;
            }
            wr8((u32)param_1 + 0x791u, 0u);
            r3 = 0u;
            return r3;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt) {
            f2 = rdf64(0x805754a8u);
            f1 = (f64)rdf32(0x80575470u);
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8((u32)param_1 + 0x792u) | 0x4330000000000000ull) - f2) + f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r0 = (u32)px_f2b(f0);
            r4 = r0 & 0xffu;
            wr8((u32)param_1 + 0x792u, (u8)r0);
            if (r4 >= 0xffu || (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2) < f1) {
                wr8((u32)param_1 + 0x792u, 0xffu);
                wr8((u32)param_1 + 0x791u, 2u);
            }
            r0 = (u32)rd8((u32)param_1 + 0x792u);
            wr8((u32)param_1 + 0x560u, (u8)r0);
            wr8((u32)param_1 + 0x4ccu, (u8)r0);
            wr8((u32)param_1 + 0x2cu, (u8)r0);
            wr8((u32)param_1 + 0x154u, (u8)r0);
            wr8((u32)param_1 + 0x1e8u, (u8)r0);
            wr8((u32)param_1 + 0x27cu, (u8)r0);
            wr8((u32)param_1 + 0x310u, (u8)r0);
            wr8((u32)param_1 + 0x3a4u, (u8)r0);
            wr8((u32)param_1 + 0x438u, (u8)r0);
        }
    }
    r3 = 1u;
    return r3;
}
