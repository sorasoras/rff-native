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

void fn_801a39dc(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = rdf64(0x805758a8u);
    f0 = (f64)rdf32(0x80575920u);
    r5 = rd32((u32)param_1 + 0xf00u) + 1u;
    f1 = px_b2f((u64)(rd32((u32)param_1 + 0xf04u) ^ 0x80000000u) | 0x4330000000000000ull);
    wr32((u32)param_1 + 0xf00u, r5);
    f1 = (f64)(f32)(f1 - f2);
    f0 = (f64)(f32)(f0 * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    if (r5 == (u32)px_f2b(f0)) {
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xdd7u;
            (void)tc_call(0x8010a74cu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfa1u;
            (void)tc_call(0x8010a74cu, &a);
        }
    }
    if ((s32)rd32((u32)param_1 + 0xf00u) >= (s32)rd32((u32)param_1 + 0xf04u)) {
        r0 = rd32((u32)param_1 + 0xdc0u);
        wr32((u32)param_1 + 0xf00u, 0u);
        if (r0 == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xf96u;
            (void)tc_call(0x8010a74cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 6u;
            (void)tc_call(0x801a2fdcu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xf97u;
            (void)tc_call(0x8010a74cu, &a);
        }
    }
    return;
}
