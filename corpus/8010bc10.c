#include "tc_rt.h"

u32 fn_8010bc10(void)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a77f8u, &a);
    r31 = r3;
    a.r[0] = 0xffffffffu;
    r3 = tc_call(0x8010b92cu, &a);
    if (r3 == 0u) {
        a.r[0] = 1u;
        a.r[1] = 0xffffffffu;
        f1 = tc_callf(0x8010b934u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = 0x10u;
        a.r[2] = 0x8010bb24u;
        a.r[3] = 1u;
        a.r[4] = r31;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800a6fccu, &a);
    }
    return 0u;
}
