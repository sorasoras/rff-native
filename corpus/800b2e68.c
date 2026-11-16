#include "tc_rt.h"

u32 fn_800b2e68(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0xf18u);
    a.r[0] = (u32)param_1 + 0xf0cu;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0xf0cu) + 0x40u), &a);
    return r31;
}
