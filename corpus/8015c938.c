#include "tc_rt.h"

void fn_8015c938(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8015cb24u, &a);
        a.r[0] = r3;
        (void)tc_call(0x800d3704u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 4);
    return;
}
