#include "tc_rt.h"

void fn_80058c0c(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 1u;
        (void)tc_call(0x80058f78u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 140);
    return;
}
