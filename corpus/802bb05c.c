#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802bb05c(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80570e98u);
    r3 = tc_call(0x8022c2b0u, &a);
    f0 = (f64)rdf32(0x8057739cu);
    wrf32d(0x80570e98u, f31);
    f0 = (f64)(f32)px_fdiv(f31, f0);
    wrf32d(0x80571bb4u, f0);
    wrf32d(0x80571bb0u, f0);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r29 = 3u;
    r30 = 0x80546c00u;
    do {
        r3 = tc_call(0x80278eb8u, &a);
        if (r3 == 3u) {
            a.r[0] = r29;
            a.r[1] = 0u;
            (void)tc_call(0x8027a740u, &a);
        }
        r29 = r29 - 1u;
        wr8(r30 + 0x51du, 1u);
        r30 = r30 - 0x538u;
    } while ((s32)r29 >= 0);
    return;
}
