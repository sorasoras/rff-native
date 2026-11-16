#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_8005eaa4(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572434u);
    wr32((u32)param_1 + 0xcu, 0u);
    a.f[0] = f1;
    a.r[0] = 0u;
    a.r[1] = 6u;
    (void)tc_call(0x800523b0u, &a);
    wr32(0x805710d8u, 0u);
    (void)tc_call(0x80075998u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 1u;
    (void)tc_call(0x8010a91cu, &a);
    r3 = rd32(0x804bb728u);
    f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(0x8049e123u) | 0x4330000000000000ull) - rdf64(0x805724f0u)) * (f64)rdf32(0x804bb72cu));
    if (((((0u - r3) | r3) >> 0x1fu) & 1u) != 0u) {
        a.f[0] = f1;
        a.r[0] = rd32(0x804bb728u);
        a.r[1] = 5u;
        (void)tc_call(0x802f7194u, &a);
    }
    a.r[0] = 0x804bc030u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x801cadb0u, &a);
    return 1u;
}
