#include "tc_rt.h"

void fn_8013a88c(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x5ecu);
    a.r[1] = rd32((u32)param_1 + 0x180u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        if (rd32(r31 + 0x44u) != 0u) {
            (void)tc_call(0x8013b6f8u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 4);
    r31 = (u32)param_1 + 0x68u;
    r30 = 0u;
    do {
        (void)tc_call(0x8013aff0u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x8cu;
    } while ((s32)r30 < 2);
    a.r[0] = (u32)param_1 + 0x198u;
    (void)tc_call(0x8011a00cu, &a);
    return;
}
