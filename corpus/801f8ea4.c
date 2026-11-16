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

void fn_801f8ea4(u32 param_1)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if ((s32)rd32(param_1) >= 3) {
        r3 = rd32(param_1 + 8u);
        c0eq = (r3 + 0x10000u) == 0xffffu;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x8004c670u, &a);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8004b358u, &a);
                }
            }
            f0 = (f64)rdf32(param_1 + 0xcu);
            r3 = rd32(param_1 + 8u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r31 = (u32)px_f2b(f0);
            if ((r3 + 0x10000u) == 0xffffu) {
                f31 = (f64)rdf32(0x80576650u);
            } else {
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x8004c670u, &a);
                r3 = rd32(r3 + 0x14u);
                f31 = (f64)(f32)(px_b2f((u64)((u32)rd16(r3 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576668u));
            }
            r3 = rd32(param_1 + 8u);
            if ((r3 + 0x10000u) == 0xffffu) {
                f4 = (f64)rdf32(0x80576650u);
            } else {
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x8004c670u, &a);
                r3 = rd32(r3 + 0x14u);
                f4 = (f64)(f32)(px_b2f((u64)((u32)rd16(r3 + 0xau) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576668u));
            }
            a.f[0] = (f64)rdf32(0x80576660u);
            a.f[1] = (f64)rdf32(0x80576664u);
            a.f[2] = f31;
            a.f[3] = f4;
            a.r[0] = r31 & 0xffu;
            (void)tc_call(0x800a3d9cu, &a);
        }
    }
    return;
}
