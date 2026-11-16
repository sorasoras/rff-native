#include "tc_rt.h"

void fn_8007310c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8007dae8u, &a);
    r31 = ((u32)param_1 * 0x34u) - 0x7fb7991cu;
    a.r[0] = r3;
    r3 = tc_call(0x8007dad4u, &a);
    a.r[0] = 0x8046a200u;
    a.r[1] = rd32(r31 + 0xcu);
    a.r[2] = rd32(r3 + 0xcu);
    (void)tc_call(0x80058e84u, &a);
    wr32(r31 + 0xcu, 0u);
    wr32(r31 + 8u, 2u);
    return;
}
