#include "tc_rt.h"

void fn_802ed6a0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x20u), &a);
    if (r3 != 0u) {
        wr8(r3 + 0xeu, (u8)((ppc_cntlzw(param_3) >> 5u) & 0x7ffffffu));
    }
    return;
}
