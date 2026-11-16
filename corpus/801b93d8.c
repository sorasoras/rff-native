#include "tc_rt.h"

void fn_801b93d8(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    do {
        r12 = rd32(r3 + 0xacu);
        r12 = rd32(r12 + 0x30u);
        r3 = r3 + 0x84u;
    } while (r12 == 0x801b93d8u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
