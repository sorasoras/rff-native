#include "tc_rt.h"

void fn_8018f404(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 4u;
    r30 = 1u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(r31 + 4u);
        r3 = tc_call(0x80190000u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r29 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x98u), &a);
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80575358u);
            (void)tc_call(rd32(rd32(r29) + 0x54u), &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 4);
    return;
}
