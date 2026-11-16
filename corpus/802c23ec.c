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

void fn_802c23ec(f64 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80547478u) != 0u) {
        f0 = (f64)rdf32(0x80348670u);
        if ((param_1 < f0) || (param_1 == f0)) {
            r29 = 0xfffffc78u;
        } else {
            a.f[0] = param_1;
            f1 = tc_callf(0x80262c70u, &a);
            f0 = (f64)(f32)((f64)rdf32(0x80348674u) * (f64)(f32)((f64)rdf32(0x80348678u) * (f64)(f32)f1));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r29 = (u32)px_f2b(f0);
        }
        if ((s32)r29 > 60) {
            r29 = 0x3cu;
        }
        if ((s32)r29 < -904) {
            r29 = 0xfffffc78u;
        }
        r28 = 0u;
        r30 = 0u;
        do {
            r3 = rd32(0x80547478u) + r30;
            if ((u32)rd8(r3 + 0x2e1cu) != 0u) {
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x802ddfacu, &a);
            }
            r28 = r28 + 1u;
            r30 = r30 + 0x2e2cu;
        } while ((s32)r28 < 4);
        r28 = 0u;
        r30 = 0u;
        do {
            r3 = rd32(0x80547478u) + 0x10000u + r30 - 0x4750u;
            if ((u32)rd8(r3 + 0x2e1cu) != 0u) {
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x802ddfacu, &a);
            }
            r28 = r28 + 1u;
            r30 = r30 + 0x2e2cu;
        } while ((s32)r28 < 3);
    }
    return;
}
