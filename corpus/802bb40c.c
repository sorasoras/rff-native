#include "tc_rt.h"

void fn_802bb40c(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)param_1 * 0x538u) - 0x7faba3a8u;
    if (((u32)param_2 == 0u && rd32(r31 + 0x4d8u) != 0u) && (u32)rd8(r31 + 0x523u) == 0u) {
        wr8(r31 + 0x523u, 1u);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0x80545c58u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(r31 + 0x4d8u), &a);
        wr8(r31 + 0x522u, 0u);
    }
    wr8(r31 + 0x51fu, 0u);
    return;
}
