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

f64 fn_8004eeec(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8027c6c8u, &a);
    r3 = r3 & 0xffu;
    return (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80572248u)), (f64)rdf32(0x80572240u));
}
