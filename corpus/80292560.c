#include "tc_rt.h"

void fn_80292560(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 8u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 8u;
        (void)tc_call(0x8000443cu, &a);
        wr16(r31, 0x1701u);
        wr16(r31 + 6u, (u16)param_1);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
