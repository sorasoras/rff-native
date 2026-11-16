#include "tc_rt.h"

void fn_801f0fa0(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = param_1 + 4u;
    a.r[1] = param_2;
    (void)tc_call(0x800f857cu, &a);
    return;
}
