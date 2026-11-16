#include "tc_rt.h"

void fn_80175ee0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80175a0cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x78u);
    a.r[1] = 0u;
    r3 = tc_call(0x800355acu, &a);
    if (r3 != 0u) {
        r31 = rd32((u32)param_1 + 0x78u);
        a.r[0] = 0x8046ae40u;
        a.r[1] = rd32((u32)param_1 + 0xf8u);
        a.r[2] = 0u;
        r3 = tc_call(0x8013ec7cu, &a);
        a.f[0] = (f64)rdf32(0x80574f50u);
        a.r[0] = r31;
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x80035740u, &a);
    }
    return;
}
