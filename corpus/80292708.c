#include "tc_rt.h"

void fn_80292708(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x1cu;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x1cu;
        (void)tc_call(0x8000443cu, &a);
        wr16(r31, 0x170au);
        wr16(r31 + 0x10u, 0xbu);
        wr16(r31 + 6u, 0xffu);
        wr16(r31 + 0xeu, (u16)param_2);
        wr8(r31 + 0x12u, (u8)param_3);
        wr8(r31 + 0x13u, (u8)param_4);
        a.r[0] = r31 + 0x14u;
        a.r[1] = param_5;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r31 + 8u;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
