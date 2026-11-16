#include "tc_rt.h"

void fn_8009f2e4(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8009eec8u, &a);
        return;
    }
    return;
}
