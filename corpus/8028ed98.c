#include "tc_rt.h"

void fn_8028ed98(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x110u;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x203u);
        wr8(r3 + 8u, rd8((u32)param_1 + 1u));
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
