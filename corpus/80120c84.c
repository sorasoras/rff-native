#include "tc_rt.h"

void fn_80120c84(f64 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    f0 = (f64)rdf32(0x805742a4u);
    if (param_1 < f0) {
        f1 = f0;
    }
    f0 = (f64)rdf32(0x805742a0u);
    if (f1 > f0) {
        f1 = f0;
    }
    wrf32d((u32)param_2 + 0xcu, f1);
    r31 = (u32)param_2 + 0x40u;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 4u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            f1 = (f64)rdf32((u32)param_2 + 0xcu);
            if (!c0eq) {
                a.f[0] = f1;
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f7194u, &a);
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x80u;
    } while ((s32)r30 < 48);
    return;
}
