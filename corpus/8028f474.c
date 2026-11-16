#include "tc_rt.h"

void fn_8028f474(u32 param_1, u32 param_r7)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x12u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r3 = r3 + 0xbu;
        a.r[0] = r3;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        wr8(r31 + 0xau, (u8)param_r7);
        wr16(r31, 0x105u);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
