#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801ebb90(void)
{
    TcArgs a = {0};
    a.f[0] = (f64)px_w2f(rd32(0x8033c198u));
    a.f[1] = (f64)px_w2f(rd32(0x8033c19cu));
    a.f[2] = (f64)px_w2f(rd32(0x8033c1a0u));
    a.f[3] = (f64)px_w2f(rd32(0x8033c1a4u));
    a.f[4] = (f64)px_w2f(rd32(0x8033c1a8u));
    a.f[5] = (f64)px_w2f(rd32(0x8033c1acu));
    a.r[0] = 0x804de100u;
    (void)tc_call(0x802342e8u, &a);
    return;
}
