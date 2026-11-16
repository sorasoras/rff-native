#include "tc_rt.h"

void fn_8028ffe0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x20u;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        wr16(r3, 0x107u);
        r3 = r3 + 8u;
        a.r[0] = r3;
        a.r[1] = param_1;
        (void)tc_call(0x8028d2a4u, &a);
        wr8(r31 + 0xeu, (u8)param_2);
        if (param_2 != 0u) {
            wr8(r31 + 0xfu, (u8)param_3);
            a.r[0] = r31 + 0x10u;
            a.r[1] = param_4;
            a.r[2] = param_3;
            (void)tc_call(0x80004338u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
