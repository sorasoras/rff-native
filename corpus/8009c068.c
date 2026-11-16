#include "tc_rt.h"

void fn_8009c068(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    do {
        r5 = r3;
        r3 = r4;
        r12 = rd32(r5 + 0xcu);
        r4 = rd32(r5 + 0x48u);
    } while (r12 == 0x8009c068u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
