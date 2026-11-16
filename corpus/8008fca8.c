#include "tc_rt.h"

void fn_8008fca8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    r30 = (u32)param_2;
    a.r[0] = rd32(0x805706e8u);
    r3 = tc_call(0x8007d150u, &a);
    r3 = rd32(r3 + 4u);
    if (((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) != 0u && (u32)param_2 != 0xffffffffu) {
        r30 = (u32)param_2 + 0x3e8u;
    }
    if (r30 != 0xffffffffu) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r30;
        a.r[2] = param_3;
        (void)tc_call(0x8010a794u, &a);
    }
    return;
}
