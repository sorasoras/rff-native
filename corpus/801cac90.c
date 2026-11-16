#include "tc_rt.h"

void fn_801cac90(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)rd8(0x80492824u);
    r3 = tc_call(0x801cace4u, &a);
    if (r3 != 0u) {
        r4 = rd32(0x805706e8u);
        if (r4 != 0x40u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x801cadb0u, &a);
        }
    }
    return;
}
