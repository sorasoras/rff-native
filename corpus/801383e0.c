#include "tc_rt.h"

void fn_801383e0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x38u;
    (void)tc_call(0x80163f60u, &a);
    if (((u32)rd8(rd32(rd32((u32)param_1 + 0x30u) + 0x10u) + 0xbbu) & 1u) != 0u) {
        a.r[0] = (u32)param_1 + 0x44u;
        (void)tc_call(0x80190984u, &a);
    }
    return;
}
