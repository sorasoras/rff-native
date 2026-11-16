#include "tc_rt.h"

void fn_8028ecc0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0xau;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x206u);
        wr16(r3 + 8u, (u16)param_1);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
