#include "tc_rt.h"

void fn_8020f030(u32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 8u);
    (void)tc_call(0x8020f18cu, &a);
    return;
}
