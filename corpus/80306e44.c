#include "tc_rt.h"

void fn_80306e44(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_4 != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        wr32(param_1, param_2);
        wr32(param_1 + 4u, param_3);
        wr32(param_1 + 8u, ppc_divwu(param_3, param_4));
        wr32(param_1 + 0xcu, param_4);
        wr32(param_1 + 0x10u, 0u);
        a.r[0] = param_1 + 0x14u;
        a.r[1] = 0u;
        a.r[2] = 4u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
