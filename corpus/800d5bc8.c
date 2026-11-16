#include "tc_rt.h"

void fn_800d5bc8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800d5bc0u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = param_2;
        (void)tc_call(0x8010a75cu, &a);
    }
    return;
}
