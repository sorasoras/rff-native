#include "tc_rt.h"

void fn_8028fecc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x110u;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x103u);
        wr8(r3 + 8u, (u8)param_1);
        wr8(r3 + 9u, (u8)param_2);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
