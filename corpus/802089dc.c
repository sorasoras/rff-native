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

u32 fn_802089dc(s32 param_1, u32 param_r8, u32 param_r9, u32 param_r6, u32 param_r7)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = (u32)rd16(0x80499214u);
    if (r3 != 0x2e8u) {
        a.r[0] = r3;
        a.r[1] = 0x24u;
        a.r[2] = 0x2au;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        r3 = tc_call(0x80207af8u, &a);
        r31 = r3;
    }
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32((u32)param_1 + 4u);
    r3 = tc_call(0x800c87e4u, &a);
    f1 = tc_lastf();
    r4 = rd32(0x80571140u);
    r31 = r31 + (u32)rd8(r3 + 0x2au);
    if (r4 != 0u) {
        a.r[0] = r4;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r4) + 0x138u), &a);
        if (r3 != 0u) {
            r3 = (u32)rd8(0x804990a2u) + rd32(0x8049e158u);
            if ((s32)r3 <= 0) {
                r3 = 0u;
            }
            if ((s32)r3 >= 99) {
                r3 = 0x63u;
            }
            if ((s32)r3 < 0) {
                r3 = 0u;
            }
            r3 = r3 & 0xffu;
            wr32(0x817fdfe4u, r3);
            f1 = rdf64(0x80576710u);
            wr32(0x817fdfe0u, 0x43300000u);
            f0 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
            f1 = (f64)rdf32(0x80576700u);
            f0 = (f64)(f32)(f1 * f0);
            f0 = ppc_fmadds(f1, (f64)(f32)(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576708u)), f0);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r3 = (u32)px_f2b(f0);
            return r3;
        }
    }
    r3 = r31;
    return r3;
}
