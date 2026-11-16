#include "tc_rt.h"

void fn_80213cac(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80213c3cu, &a);
    if ((u32)rd8(param_1) != 0u) {
        r3 = rd32(param_1 + 0x84u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 9u;
            a.r[2] = 0u;
            (void)tc_call(0x8021a038u, &a);
        }
    }
    return;
}
