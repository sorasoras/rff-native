#include "tc_rt.h"

u32 fn_80045ce4(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x803c1d40u;
    a.r[1] = 0u;
    a.r[2] = 0x1f0u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x803c26e0u;
    a.r[1] = 0x803c2700u;
    a.r[2] = 3u;
    f1 = tc_callf(0x8022ca4cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x802be7bcu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr32(0x80571040u, 1u);
    }
    return r3;
}
