#include "tc_rt.h"

void fn_802269ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_2;
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(param_1 + 0x1cu, param_6);
    r31 = r3;
    wr32(param_1 + 0x18u, param_5);
    a.r[0] = param_3;
    a.r[1] = param_4;
    r3 = tc_call(0x80230320u, &a);
    r4 = tc_lastr4();
    wr32(param_1 + 0x20u, r3);
    wr32(param_1 + 0x24u, r4);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = param_7;
    (void)tc_call(0x8022672cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
