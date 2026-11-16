#include "tc_rt.h"

void fn_801fb5d0(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x28u;
    r29 = 0u;
    r31 = (u32)param_1;
    do {
        if (((u32)rd8(rd32(rd32(r31 + 0x14u) + 0x10u) + 0xbbu) & 1u) != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x80163f60u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0xcu;
        r31 = r31 + 4u;
    } while ((s32)r29 < 5);
    a.r[0] = (u32)param_1 + 0x120u;
    (void)tc_call(0x801e64d0u, &a);
    a.r[0] = (u32)param_1 + 0x194u;
    (void)tc_call(0x801e64d0u, &a);
    a.r[0] = (u32)param_1 + 0x208u;
    (void)tc_call(0x801e64d0u, &a);
    if (rd32((u32)param_1 + 0xd4u) != 0u) {
        (void)tc_call(0x801f87a4u, &a);
    }
    return;
}
