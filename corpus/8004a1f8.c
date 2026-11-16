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

void fn_8004a1f8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    r0 = 0u;
    if (param_1 != 0u || param_2 != 0u) {
        r0 = 1u;
    }
    wr8(0x803c6254u, (u8)r0);
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
        r6 = (u32)px_f2b(f3);
        r5 = (u32)px_f2b(f2);
        r3 = (u32)px_f2b(f1);
        r0 = (u32)px_f2b(f0);
        if ((s32)r6 > 255) {
            r6 = 0xffu;
        } else {
            if ((s32)r6 < 0) {
                r6 = 0u;
            }
        }
        if ((s32)r5 > 255) {
            r5 = 0xffu;
        } else {
            if ((s32)r5 < 0) {
                r5 = 0u;
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
        wr8(0x803c6255u, (u8)r6);
        wr8(0x803c6256u, (u8)r5);
        wr8(0x803c6257u, (u8)r3);
        wr8(0x803c6258u, (u8)r0);
    } else {
        wr8(0x803c6255u, 0x40u);
        wr8(0x803c6256u, 0x40u);
        wr8(0x803c6257u, 0x40u);
        wr8(0x803c6258u, 0x40u);
    }
    if (param_2 != 0u) {
        f3 = (f64)rdf32(0x80572190u);
        f2 = (f64)(f32)(f3 * (f64)rdf32(param_2));
        f1 = (f64)(f32)(f3 * (f64)rdf32(param_2 + 4u));
        f0 = (f64)(f32)(f3 * (f64)rdf32(param_2 + 8u));
        f2 = px_ctiw(f2, ppc_fctiwz(f2));
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r4 = (u32)px_f2b(f2);
        r3 = (u32)px_f2b(f1);
        r0 = (u32)px_f2b(f0);
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
        wr8(0x803c6259u, (u8)r4);
        wr8(0x803c625au, (u8)r3);
        wr8(0x803c625bu, (u8)r0);
    } else {
        wr8(0x803c6259u, 0u);
        wr8(0x803c625au, 0u);
        wr8(0x803c625bu, 0u);
        wr8(0x803c625cu, 0u);
    }
    return;
}
