#include "tc_rt.h"

void fn_800b3b3c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    do {
        r0 = rd32(r3 + 0x1d4u);
        wr32(r3 + 0x1d8u, param_2);
        if (param_2 > r0) {
            wr32(r3 + 0x1d8u, r0);
        }
        r3 = rd32(r3 + 0x364u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x24u);
    } while (r12 == 0x800b3b3cu);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
