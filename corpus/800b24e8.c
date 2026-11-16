#include "tc_rt.h"

void fn_800b24e8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    do {
        if (r4 != 0u) {
            wr32(param_1 + 0x35cu, r4);
        }
        r12 = rd32(param_1);
        r4 = 1u;
        r12 = rd32(r12 + 0x144u);
    } while (r12 == 0x800b24e8u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
