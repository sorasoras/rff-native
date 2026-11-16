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

void fn_801a45f0(s32 param_1, s32 param_2)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x8057586cu);
        a.f[1] = (f64)rdf32(0x80575868u);
        a.f[2] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        (void)tc_call(0x800a97ccu, &a);
        wr32((u32)param_1 + 0xd04u, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf9eu;
        (void)tc_call(0x8010a74cu, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if ((u32)param_2 == 1u) {
            f0 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((u32)px_f2b(f0) == 2u) {
                wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
                wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x804890ccu));
                wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x804890d0u));
            }
            f0 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((u32)px_f2b(f0) == 0x14u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = 1u;
                (void)tc_call(0x8007fa58u, &a);
            }
            f0 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((u32)px_f2b(f0) == 0x28u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801a2ab8u, &a);
            }
            if (rd32((u32)param_1 + 0x110u) != 0u) {
                wr32((u32)param_1 + 0x2b0u, 1u);
            }
        }
    }
    return;
}
