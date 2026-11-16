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

void fn_8005257c(void)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x805710d0u, 0u);
    a.r[0] = 0x803cb934u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x803cb950u;
    (void)tc_call(0x8004cdecu, &a);
    f5 = (f64)rdf32(0x80572268u);
    r4 = (u32)rd16(0x803cba44u);
    f4 = (f64)rdf32(0x805722a0u);
    f3 = rdf64(0x80572278u);
    f0 = (f64)rdf32(0x80572270u);
    f2 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)rd16(0x803cba46u) | 0x4330000000000000ull) - f3));
    wrf32d(0x803cb960u, f5);
    wrf32d(0x803cb964u, f5);
    wrf32d(0x803cb968u, f5);
    wrf32d(0x803cb954u, f5);
    wrf32d(0x803cb958u, f5);
    wrf32d(0x803cb95cu, f4);
    f0 = (f64)(f32)(f0 * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f3));
    wrf32d(0x803cba2cu, f2);
    f0 = (f64)(f32)px_fdiv(f0, f2);
    wrf32d(0x803cba4cu, f0);
    return;
}
