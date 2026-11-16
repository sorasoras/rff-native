#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802dcf84(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x10u);
    r0 = (u32)rd8((u32)param_1 + 0xdu);
    wrf32d((u32)param_1 + 0x24u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd16(rd32((u32)param_1 + 0x18u) + 2u) | 0x4330000000000000ull) - rdf64(0x80348b40u)), (f64)rdf32(0x80348b3cu)));
    r0 = r0 - (u32)rd8(r5);
    r4 = r0 * 0x64u;
    wr32((u32)param_1 + 0x28u, r4);
    wr32((u32)param_1 + 0x28u, ((r4 + (u32)(s16)rd16(r5 + 2u)) << 0x10u) & 0xffff0000u);
    return;
}
