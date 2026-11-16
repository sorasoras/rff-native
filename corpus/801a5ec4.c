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

void fn_801a5ec4(f64 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80575868u);
    r5 = (u32)px_f2b(px_ctiw(param_1, ppc_fctiwz(param_1)));
    r6 = rd32((u32)param_2 + 0x9cu) & 0xfdffffffu;
    wr32((u32)param_2 + 0xdc0u, 0u);
    wr32((u32)param_2 + 0x9cu, r6);
    wrf32d((u32)param_2 + 0xde0u, f1);
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r5) >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0xau;
    r0 = r5 - r0;
    if (r0 == 5u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 3u;
        (void)tc_call(0x801a2fdcu, &a);
    }
    return;
}
