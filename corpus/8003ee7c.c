#include "tc_rt.h"

void fn_8003ee7c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0xffffffffu) {
        r3 = tc_call(0x8003ee38u, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.r[2] = 0u;
        (void)tc_call(0x80254568u, &a);
    }
    return;
}
