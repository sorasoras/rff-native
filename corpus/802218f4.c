#include "tc_rt.h"

void fn_802218f4(u32 param_r3)
{
    TcArgs a = {0};
    if (rd32(0x80571424u) != 0u) {
        a.r[0] = param_r3;
        (void)tc_call(0x802217e4u, &a);
        return;
    }
    a.r[0] = param_r3;
    (void)tc_call(0x80221738u, &a);
    return;
}
