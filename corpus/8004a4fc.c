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

void fn_8004a4fc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    wr8(0x803c625du, (u8)((((0u - param_1) | param_1) >> 0x1fu) & 1u));
    if (param_1 != 0u) {
        f4 = (f64)rdf32(0x80572190u);
        f3 = (f64)(f32)(f4 * (f64)rdf32(param_1));
        f2 = (f64)(f32)(f4 * (f64)rdf32(param_1 + 4u));
        f1 = (f64)(f32)(f4 * (f64)rdf32(param_1 + 8u));
        f3 = px_ctiw(f3, ppc_fctiwz(f3));
        f0 = (f64)(f32)(f4 * (f64)rdf32(param_1 + 0xcu));
        f2 = px_ctiw(f2, ppc_fctiwz(f2));
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r5 = (u32)px_f2b(f3);
        r4 = (u32)px_f2b(f2);
        r3 = (u32)px_f2b(f1);
        r0 = (u32)px_f2b(f0);
        if ((s32)r5 > 255) {
            r5 = 0xffu;
        } else {
            if ((s32)r5 < 0) {
                r5 = 0u;
            }
        }
        if ((s32)r4 > 255) {
            r4 = 0xffu;
        } else {
            if ((s32)r4 < 0) {
                r4 = 0u;
            }
        }
        if ((s32)r3 > 255) {
            r3 = 0xffu;
        } else {
            if ((s32)r3 < 0) {
                r3 = 0u;
            }
        }
        if ((s32)r0 > 255) {
            r0 = 0xffu;
        } else {
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
        }
        wr8(0x803c625eu, (u8)r5);
        wr8(0x803c625fu, (u8)r4);
        wr8(0x803c6260u, (u8)r3);
        wr8(0x803c6261u, (u8)r0);
    }
    return;
}
