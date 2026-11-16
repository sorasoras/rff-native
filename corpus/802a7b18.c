#include "tc_rt.h"

u32 fn_802a7b18(u32 param_r3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x802a9a34u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = rd32(r3 + 8u);
        while (r31 != 0u) {
            if (rd32(rd32(r31 + 0x30u) + 0x20u) != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[1] = 6u;
                a.r[2] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802a6140u, &a);
            }
            r31 = rd32(r31 + 8u);
        }
        r3 = 1u;
    }
    return r3;
}
