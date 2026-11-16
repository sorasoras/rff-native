#include "tc_rt.h"

void fn_80173930(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x11cu);
    if (r4 != 0u) {
        if (rd32((u32)param_1 + 0x128u) == 0u) {
            a.r[0] = r4;
            a.r[1] = (u32)param_1;
            a.r[2] = 6u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r4) + 0x7cu), &a);
        } else {
            a.r[0] = r4;
            a.r[1] = (u32)param_1;
            a.r[2] = 5u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r4) + 0x7cu), &a);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da354u, &a);
    return;
}
