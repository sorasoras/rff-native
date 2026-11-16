#include "tc_rt.h"

void fn_801bfaa8(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)param_1 == 0xffffffffu) {
        a.r[0] = 0x47u;
        (void)tc_call(0x801bfa94u, &a);
        return;
    }
    a.r[0] = (u32)param_1 - 0x66fu;
    (void)tc_call(0x801bfa94u, &a);
    return;
}
