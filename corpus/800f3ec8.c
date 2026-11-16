#include "tc_rt.h"

void fn_800f3ec8(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xd0u) != 0u) {
        a.r[0] = (u32)param_1 + 0xacu;
        (void)tc_call(0x800cb5a8u, &a);
    }
    wr32((u32)param_1 + 0x120u, 0u);
    wr32((u32)param_1 + 0x124u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800840b8u, &a);
    return;
}
