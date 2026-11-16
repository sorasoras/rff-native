#include "tc_rt.h"

f64 fn_800dc91c(s32 param_1)
{
    u32 r4 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80571220u);
    r31 = rd32((u32)param_1 + 8u);
    while (r31 != 0u) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31 + 4u) + 0x10u), &a);
        r4 = tc_lastr4();
        if (f1 < f31) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31 + 4u) + 0x10u), &a);
            r4 = tc_lastr4();
            f31 = f1;
        }
        r31 = rd32(r31);
    }
    return f31;
}
