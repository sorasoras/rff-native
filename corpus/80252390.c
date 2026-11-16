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

void fn_80252390(f64 param_1, f64 param_2, f64 param_3, u32 param_4, s32 param_5, s32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 r4 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f1 = param_1;
    f2 = param_2;
    f3 = param_3;
    f0 = (f64)rdf32(0x80576ce0u);
    if (param_3 < f0) {
        f3 = f0;
    } else {
        f0 = (f64)rdf32(0x80576ce8u);
        if ((param_3 > f0) || (param_3 == f0)) {
            f3 = (f64)rdf32(0x80576ce4u);
        }
    }
    f0 = (f64)rdf32(0x80576cf0u);
    f3 = (f64)(f32)((f64)rdf32(0x80576cecu) * f3);
    f3 = px_ctiw(f3, ppc_fctiwz(f3));
    r10 = (((rd32(param_4) & 0xfffe01ffu) | (((u32)px_f2b(f3) << 9u) & 0x1fe00u)) & 0xffffffefu) | ((ppc_cntlzw((u32)param_6 - 1u) >> 1u) & 0x10u);
    wr32(param_4, r10);
    r10 = (r10 & 0xffffff1fu) | (((u32)rd8((u32)param_5 - 0x7fa8f428u) << 5u) & 0xe0u);
    r10 = (r10 & 0xfffffeffu) | ((ppc_cntlzw(param_8) << 3u) & 0x100u);
    wr32(param_4, (((r10 & 0xffe1ffffu) | ((param_9 << 0x13u) & 0x180000u)) & 0xffdfffffu) | ((param_7 << 0x15u) & 0x200000u));
    if (param_1 < f0) {
        f1 = f0;
    } else {
        f0 = (f64)rdf32(0x80576cf4u);
        if (param_1 > f0) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(0x80576cf0u);
    f1 = (f64)(f32)((f64)rdf32(0x80576cd0u) * f1);
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r4 = (u32)px_f2b(f1);
    if (param_2 < f0) {
        f2 = f0;
    } else {
        f0 = (f64)rdf32(0x80576cf4u);
        if (param_2 > f0) {
            f2 = f0;
        }
    }
    f0 = (f64)(f32)((f64)rdf32(0x80576cd0u) * f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(param_4 + 4u, (((rd32(param_4 + 4u) & 0xffffff00u) | (r4 & 0xffu)) & 0xffff00ffu) | (((u32)px_f2b(f0) << 8u) & 0xff00u));
    return;
}
