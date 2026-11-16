#include "tc_rt.h"

void fn_8007da30(s32 param_1, s32 param_2)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        r31 = (u32)param_1;
        r30 = (u32)param_1 + 0xacu;
        r29 = 0u;
        while (r29 < rd32((u32)param_1 + 0x19cu)) {
            if (rd32(r31 + 0xf4u) == 0u) {
                a.r[0] = r30;
                (void)tc_call(0x8006ff58u, &a);
            }
            r31 = r31 + 0xe4u;
            r30 = r30 + 0xe4u;
            r29 = r29 + 1u;
        }
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8007dabcu, &a);
    }
    return;
}
