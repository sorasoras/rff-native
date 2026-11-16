#include "tc_rt.h"

void fn_8030ed94(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    a.r[6] = param_7;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    a.r[0] = param_1;
    r3 = tc_call(0x802f7104u, &a);
    a.r[0] = param_1 + 0x100u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = r3;
    a.r[6] = param_6;
    a.r[7] = param_7;
    r3 = tc_call(0x8030f648u, &a);
    if (r3 == 0u) {
        return;
    }
    wr8(param_1 + 0x23cu, 1u);
    return;
}
