#include "tc_rt.h"

void fn_801fdb90(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x28u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80163f60u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0xcu;
    } while ((s32)r30 < 5);
    a.r[0] = (u32)param_1 + 0x9e0u;
    (void)tc_call(0x801e64d0u, &a);
    if (rd32((u32)param_1 + 0x9dcu) != 0u) {
        (void)tc_call(0x801f87a4u, &a);
    }
    a.r[0] = (u32)param_1 + 0x10cu;
    (void)tc_call(0x801309d0u, &a);
    return;
}
