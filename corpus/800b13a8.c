#include "tc_rt.h"

void fn_800b13a8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    do {
        r4 = r3;
        r3 = rd32(r3 + 0x364u);
        r4 = (u32)rd16(r4 + 0x1deu);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x10u);
    } while (r12 == 0x800b13a8u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
