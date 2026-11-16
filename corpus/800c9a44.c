#include "tc_rt.h"

void fn_800c9a44(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    if (r3 < 0x10u) {
        wr32((u32)param_1 + 0x49cu, 7u);
        a.r[0] = (u32)param_1 + 0x40cu;
        a.r[1] = param_2;
        (void)tc_call(0x8025e7c0u, &a);
    }
    return;
}
