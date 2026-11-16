#include "tc_rt.h"

void fn_80076d88(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80571148u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r3 = rd32(0x80571148u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
        }
        wr32(0x80571148u, 0u);
    }
    wr32(0x8057114cu, 6u);
    return;
}
