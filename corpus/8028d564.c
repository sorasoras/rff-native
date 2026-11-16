#include "tc_rt.h"

void fn_8028d564(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r12 = 0;
    TcArgs a = {0};
    r12 = rd32(0x8053d53cu);
    if (r12 != 0u) {
        a.r[0] = 6u;
        a.r[1] = param_1;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
        return;
    }
    return;
}
