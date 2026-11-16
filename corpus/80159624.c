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

void fn_80159624(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32(param_1 + 0x34u) << 2u) & 0xc0000000u) >> 31) != 0u) {
        r3 = rd32(rd32(param_1) + 0x14u);
        if ((r3 + 0x10000u) == 0xffffu) {
            f0 = (f64)rdf32(0x80574960u);
        } else {
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8004c670u, &a);
            r3 = rd32(r3 + 0x14u);
            f0 = (f64)(f32)(px_b2f((u64)((u32)rd16(r3 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574980u));
        }
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r3 = rd32(rd32(param_1) + 0x14u);
        f0 = px_b2f((u64)((u32)px_f2b(f0) ^ 0x80000000u) | 0x4330000000000000ull);
        f31 = (f64)(f32)(f0 - rdf64(0x80574980u));
        if ((r3 + 0x10000u) == 0xffffu) {
            f0 = (f64)rdf32(0x80574960u);
        } else {
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8004c670u, &a);
            r3 = rd32(r3 + 0x14u);
            f0 = (f64)(f32)(px_b2f((u64)((u32)rd16(r3 + 0xau) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574980u));
        }
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        f0 = px_b2f((u64)((u32)px_f2b(f0) ^ 0x80000000u) | 0x4330000000000000ull);
        f30 = (f64)(f32)(f0 - rdf64(0x80574980u));
        if (rd32(param_1 + 0x30u) != 0u) {
            f31 = (f64)(f32)(f31 * (f64)rdf32(0x80574964u));
        }
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8015a8fcu, &a);
        r3 = (u32)rd8(param_1 + 0x28u);
        if (rd32(param_1 + 0x38u) == 0u) {
            r3 = 0xffu;
        }
        a.f[0] = (f64)rdf32(param_1 + 0x18u);
        a.f[1] = ppc_fnmsubs(f30, (f64)rdf32(0x80574988u), (f64)rdf32(0x80574970u));
        a.f[2] = f31;
        a.f[3] = f30;
        a.r[0] = r3;
        (void)tc_call(0x800a3ae4u, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x80159860u, &a);
        if (r3 == 0u && (u32)((s32)((rd32(param_1 + 0x34u) << 1u) & 0xc0000000u) >> 31) == 0u) {
            r3 = rd32(param_1 + 4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8015bb44u, &a);
            }
        }
    }
    return;
}
