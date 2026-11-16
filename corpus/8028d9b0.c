#include "tc_rt.h"

void fn_8028d9b0(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x8028b46cu, &a);
    if (rd32(param_1) == 0u) {
        a.r[0] = (u32)rd8(param_1 + 0x10u);
        (void)tc_call(0x8028b258u, &a);
    }
    return;
}
