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

void fn_80252f28(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    c0lt = param_1 < 8;
    if ((u32)param_1 == 8u) {
        r3 = 0u;
    } else if (!c0lt) {
        if (param_1 >= 12) {
            r3 = 0u;
        } else {
            r3 = (u32)param_1 - 9u;
        }
    } else {
        c0lt = param_1 < 4;
        if ((u32)param_1 == 4u) {
            r3 = 0u;
        } else if (!c0lt) {
            r3 = (u32)param_1 - 5u;
        } else if (param_1 >= 1) {
            r3 = (u32)param_1 - 1u;
        } else {
            r3 = 0u;
        }
    }
    f6 = (f64)rdf32(0x80576cf8u);
    r9 = ((r3 << 2u) & 0xfffffffcu) - r3;
    r8 = (u32)param_3 + 0x11u;
    f1 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2));
    f0 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2 + 0xcu));
    f3 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2 + 4u));
    f5 = px_ctiw(f1, ppc_fctiwz(f1));
    f4 = px_ctiw(f0, ppc_fctiwz(f0));
    f2 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2 + 0x10u));
    f3 = px_ctiw(f3, ppc_fctiwz(f3));
    f1 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2 + 8u));
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    f0 = (f64)(f32)(f6 * (f64)rdf32((u32)param_2 + 0x14u));
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((((((u32)px_f2b(f5) & 0x7ffu) | (((u32)px_f2b(f4) << 0xbu) & 0x3ff800u)) & 0xff3fffffu) | ((r8 << 0x16u) & 0xc00000u)) & 0xffffffu) | (((r9 + 6u) << 0x18u) & 0xff000000u));
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, ((((((u32)px_f2b(f3) & 0x7ffu) | (((u32)px_f2b(f2) << 0xbu) & 0x3ff800u)) & 0xff3fffffu) | ((r8 << 0x14u) & 0xc00000u)) & 0xffffffu) | (((r9 + 7u) << 0x18u) & 0xff000000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((((((u32)px_f2b(f1) & 0x7ffu) | (((u32)px_f2b(f0) << 0xbu) & 0x3ff800u)) & 0xff3fffffu) | ((r8 << 0x12u) & 0xc00000u)) & 0xffffffu) | (((r9 + 8u) << 0x18u) & 0xff000000u));
    wr16(r3 + 2u, 0u);
    return;
}
