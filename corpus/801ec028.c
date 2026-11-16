#include "tc_rt.h"

u32 fn_801ec028(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0xcu, 0x803760f0u);
    wr32(param_1 + 8u, 0u);
    a.r[0] = 0x68u;
    r3 = tc_call(0x801ed134u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x801ec1f4u, &a);
    }
    wr32(param_1, r31);
    return param_1;
}
