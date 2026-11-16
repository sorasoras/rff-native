#include "tc_rt.h"

void fn_80189aa8(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((u32)param_4 == 0u) {
        r31 = 1u;
    }
    r0 = rd32(param_1 + 0x458u);
    wr32(param_1, param_3);
    wr32(param_1 + 4u, r31);
    if (r0 != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x80189aa4u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = r31;
    (void)tc_call(0x80189b38u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80189e58u, &a);
    return;
}
