#include "tc_rt.h"

void fn_80311200(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1 + 0x24u;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    r30 = r3;
    while (r30 != 0u) {
        a.r[0] = param_1 + 0x24u;
        a.r[1] = r30;
        r3 = tc_call(0x802de9f0u, &a);
        r29 = r3;
        a.r[0] = r30;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = 0u;
        r3 = tc_call(0x80313e44u, &a);
        r31 = r31 + r3;
        r30 = r29;
    }
    return;
}
