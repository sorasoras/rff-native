#include "tc_rt.h"

void fn_802231a0(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0xb8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80224dfcu, &a);
    wr8((u32)param_1 + 0x371u, 0u);
    return;
}
