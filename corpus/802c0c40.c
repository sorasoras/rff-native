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

void fn_802c0c40(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 0x41u) == 0u) {
        f0 = (f64)(f32)((f64)rdf32(0x80348640u) * (f64)rdf32(param_1 + 4u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        a.r[0] = rd32(param_1 + 0x20u);
        a.r[1] = rd32(param_1);
        a.r[2] = param_2;
        a.r[3] = (u32)(s8)px_f2b(f0);
        (void)tc_call(0x802c18e4u, &a);
        a.r[0] = rd32(param_1);
        r3 = tc_call(0x8027b068u, &a);
        if (r3 != 0u) {
            if ((u32)rd8(param_1 + 0x42u) == 0u) {
                r3 = tc_call(0x8023029cu, &a);
                wr32(param_1 + 0x34u, tc_lastr4());
                wr32(param_1 + 0x30u, r3);
            }
            wr8(param_1 + 0x42u, 1u);
            wr8(param_1 + 0x43u, 0u);
        }
    }
    return;
}
