#include "tc_rt.h"

void fn_801dce68(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x801dcaccu, &a);
        if (r3 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x801dca64u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x14u;
    } while ((s32)r30 < 128);
    return;
}
