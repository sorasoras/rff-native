#include "tc_rt.h"

void fn_8015344c(u32 param_1, u32 param_r4)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1 + 0x38u);
    if (r5 != 0u) {
        if ((u32)rd8(param_1 + 0x3cu) == 0u) {
            return;
        }
        if ((u32)rd8(param_1) == 0u) {
            return;
        }
        a.r[0] = r5;
        a.r[1] = param_r4;
        (void)tc_call(0x800318a8u, &a);
        return;
    }
    return;
}
