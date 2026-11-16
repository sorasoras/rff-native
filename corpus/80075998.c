#include "tc_rt.h"

void fn_80075998(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x80492b98u);
    r4 = rd32(0x8057118cu);
    wr32(0x80571188u, 0u);
    wr32(0x8057118cu, r4 | 0x8000u);
    if (r0 == 1u) {
        a.r[0] = 1u;
        (void)tc_call(0x800771d8u, &a);
    } else {
        if (r0 == 2u) {
            a.r[0] = 2u;
            (void)tc_call(0x800771d8u, &a);
        } else {
            a.r[0] = 0u;
            (void)tc_call(0x800771d8u, &a);
        }
    }
    f1 = (f64)rdf32(0x80572768u);
    f0 = (f64)rdf32(0x8057276cu);
    r3 = rd32(0x805706e8u);
    wrf32d(0x804865c8u, (f64)rdf32(0x8057272cu));
    wrf32d(0x804865ccu, f1);
    wrf32d(0x804865d0u, f0);
    a.r[0] = r3;
    r3 = tc_call(0x8007d150u, &a);
    if (rd32(r3 + 4u) != 0u && rd32(0x805706e8u) != 0x3fu) {
        a.r[0] = 0u;
        (void)tc_call(0x80076fa8u, &a);
    }
    a.r[0] = 0x803d29f8u;
    (void)tc_call(0x80097798u, &a);
    a.r[0] = 0x804bc030u;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x801cadb0u, &a);
    (void)tc_call(0x80074eb8u, &a);
    return;
}
