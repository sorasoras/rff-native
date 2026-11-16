#include "tc_rt.h"

void fn_8028d9f0(u32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x8028a35cu, &a);
        wr32(param_1, 0u);
    }
    return;
}
