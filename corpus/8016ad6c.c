#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8016ad6c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    (void)param_1;
    r3 = rd32((u32)param_2 + 0xe88u);
    r7 = rd32((u32)param_2 + 0xf78u);
    r3 = r3 ^ (r3 & 0x200u);
    wr32((u32)param_2 + 0xf78u, r7 ^ (r7 & 0x100u));
    wr32((u32)param_2 + 0xe88u, r3 ^ (r3 & 0x800u));
    f1 = (f64)px_w2f(rd32(0x804890ccu));
    f0 = (f64)px_w2f(rd32(0x804890d0u));
    wrf32d((u32)param_2 + 0xd18u, (f64)px_w2f(rd32(0x804890c8u)));
    wrf32d((u32)param_2 + 0xd1cu, f1);
    wrf32d((u32)param_2 + 0xd20u, f0);
    return;
}
