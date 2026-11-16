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

u32 fn_80046f0c(void)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x803c1dc8u);
    if ((r3 & 1u) != 0u) {
        r3 = tc_call(0x8023f380u, &a);
        if (r3 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    if ((r3 & 2u) != 0u) {
        r3 = tc_call(0x8023f380u, &a);
        if (r3 != 1u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    f0 = (f64)(f32)((f64)rdf32(0x80572158u) * (f64)rdf32(0x803c1d8cu));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r30 = (u32)px_f2b(f0);
    r3 = tc_call(0x8023f4acu, &a);
    if (r3 == 1u) {
        r7 = rd32(0x803c1e0cu);
        a.r[0] = ppc_mulhwu(r7, r30) + (rd32(0x803c1e08u) * r30) + (r7 * (u32)((s32)r30 >> 31));
        a.r[1] = r7 * r30;
        a.r[2] = 0u;
        a.r[3] = 0x1388u;
        (void)tc_call(0x80255b5cu, &a);
        wr32(0x803c1e14u, tc_lastr4());
    } else {
        r7 = rd32(0x803c1e0cu);
        a.r[0] = ppc_mulhwu(r7, r30) + (rd32(0x803c1e08u) * r30) + (r7 * (u32)((s32)r30 >> 31));
        a.r[1] = r7 * r30;
        a.r[2] = 0u;
        a.r[3] = 0x176au;
        (void)tc_call(0x80255b5cu, &a);
        wr32(0x803c1e14u, tc_lastr4());
    }
    r4 = rd32(0x803c1e14u);
    if (rd32(0x803c1e10u) != r4) {
        wr32(0x803c1e10u, r4);
        r3 = 1u;
        return r3;
    }
    r3 = 0u;
    return r3;
}
