#include "tc_rt.h"

void fn_8012da98(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x38u;
    r30 = (u32)param_2 * 0xau;
    r29 = 0u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = r29;
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = r31;
        a.r[1] = r29 + r30;
        a.r[2] = r3;
        (void)tc_call(0x8012ee24u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x14u;
    } while ((s32)r29 < 10);
    return;
}
