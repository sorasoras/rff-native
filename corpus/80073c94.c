#include "tc_rt.h"

void fn_80073c94(void)
{
    u32 r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32(0x8046b7ecu) != 0u) {
        r29 = rd32(rd32(0x8046b7e4u) + 8u);
        a.r[0] = rd32(r29 + 0x25cu);
        f1 = tc_callf(0x80073390u, &a);
        a.r[0] = r29;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r29) + 0x18u), &a);
    }
    a.r[0] = 0x8046b7e4u;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
