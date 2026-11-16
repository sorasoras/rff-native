#include "tc_rt.h"

void fn_8018d6a4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    (void)param_1;
    r6 = rd32(0x805706e8u);
    r7 = rd32(0x8046adecu);
    while (r7 != 0u) {
        r3 = r7;
        r7 = rd32(r7);
        r3 = rd32(r3 + 8u);
        if (r6 == rd32(r3 + 0x7cu) && (u32)param_2 == rd32(r3 + 0xf4u)) {
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            wrf32d(param_3, (f64)rdf32(r3));
            wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
            wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
            return;
        }
    }
    return;
}
