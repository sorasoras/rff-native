#include "tc_rt.h"

void fn_8028ff24(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x1cu;
    r3 = tc_call(0x8028a0d4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        wr16(r3, 0x200u);
        r3 = r3 + 8u;
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = 0xau;
        (void)tc_call(0x80004338u, &a);
        wr32(r31 + 0x14u, param_2);
        wr32(r31 + 0x18u, param_3);
        a.r[0] = r31;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
