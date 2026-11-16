#include "tc_rt.h"

void fn_80290abc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x14u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        wr16(r3, 0x109u);
        wr8(r3 + 0xeu, (u8)param_2);
        wr16(r3 + 0x10u, (u16)param_3);
        wr8(r3 + 0x12u, (u8)param_4);
        r3 = r3 + 8u;
        a.r[0] = r3;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
