#include "tc_rt.h"

void fn_8015a160(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x80159d70u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x80159390u, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x8015d874u, &a);
    }
    return;
}
