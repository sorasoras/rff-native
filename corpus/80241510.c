#include "tc_rt.h"

void fn_80241510(u32 param_1)
{
    u32 r0 = 0;
    if ((u32)rd8(0x80570b38u) != param_1) {
        r0 = rd32(0x80571758u);
        wr8(0x80570b38u, (u8)param_1);
        r0 = r0 | 0x20u;
        wr32(0x80571758u, r0);
        return;
    }
    return;
}
