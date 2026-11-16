#include "tc_rt.h"

void fn_80306584(u32 param_1, u32 param_r6)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = param_r6;
    do {
        r12 = rd32(param_1);
        r7 = r6;
        r6 = 0u;
        r12 = rd32(r12 + 0xcu);
    } while (r12 == 0x80306584u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = r7;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
