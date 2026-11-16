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

u32 fn_801d9a88(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r0 = rd32(param_1 + 0x2a0u);
    if (((s32)r0 >= 4 && (s32)r0 <= 13) && rd32(param_1 + 0x100u) == 2u) {
        f0 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        if (!((s32)px_f2b(f0) <= 70)) {
            a.f[0] = (f64)(f32)((f64)(f32)(px_b2f((u64)rd32(param_2) | 0x4330000000000000ull) - rdf64(0x80576138u)) * (f64)rdf32(0x80576104u));
            r3 = tc_call(0x802558e4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            wr32(param_2, r3);
        }
    }
    if (rd32(param_1 + 0xda4u) == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
        f1 = tc_lastf();
        r30 = r3;
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xd0u), &a);
        r4 = rd32(param_2);
        wr32(0x817fdfe4u, r3);
        f3 = rdf64(0x80576138u);
        wr32(0x817fdfe0u, 0x43300000u);
        if ((f64)(f32)(px_b2f((u64)(r30 - r4) | 0x4330000000000000ull) - f3) < (f64)(f32)((f64)rdf32(0x80576140u) * (f64)(f32)(rdf64(0x817fdfe0u) - f3))) {
            f0 = (f64)rdf32(0x805760dcu);
            wr32(param_1 + 0xda4u, 1u);
            wr32(param_1 + 0xce4u, 1u);
            wrf32d(param_1 + 0xce0u, f0);
        }
    }
    if (rd32(param_1 + 0x100u) == 4u) {
        f0 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfe0u, f0);
        if (!((s32)px_f2b(f0) <= 50)) {
            wrf64(0x817fdfe0u, f0);
            if (!((s32)px_f2b(f0) >= 150)) {
                wr32(param_1 + 0xd74u, 1u);
            }
        }
    }
    return 1u;
}
