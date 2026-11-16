#include "tc_rt.h"

void fn_80130c6c(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0xfu;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = 0x10u;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = 0x11u;
    (void)tc_call(0x80141274u, &a);
    r31 = (u32)param_1 + 0x688u;
    r30 = 0u;
    do {
        f1 = tc_callf(0x801e656cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x74u;
    } while ((s32)r30 < 3);
    r3 = rd32((u32)param_1 + 0x7e8u);
    c0eq = r3 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x64u) + 8u), &a);
    }
    (void)tc_call(0x801e656cu, &a);
    wr32((u32)param_1 + 0x864u, 0u);
    return;
}
