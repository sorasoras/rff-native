#include "tc_rt.h"

s32 fn_801dfcbc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = (u32)param_1 + 0xcfcu;
    r29 = 0u;
    do {
        r3 = rd32(r30);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0xccu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = r31 + r3;
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 4);
    return (s32)r31;
}
