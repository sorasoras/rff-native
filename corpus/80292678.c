#include "tc_rt.h"

void fn_80292678(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x14u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x14u;
        (void)tc_call(0x8000443cu, &a);
        wr16(r31, 0x1708u);
        wr16(r31 + 6u, (u16)param_1);
        wr8(r31 + 8u, 0xau);
        wr16(r31 + 0xcu, 0u);
        wr8(r31 + 9u, 2u);
        wr32(r31 + 0x10u, param_2);
        wr8(r31 + 0xau, 0u);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
