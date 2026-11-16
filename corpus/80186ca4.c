#include "tc_rt.h"

void fn_80186ca4(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80186c4cu, &a);
    r31 = (u32)param_1 + 0xf28u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x800cddb4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0xf4u;
    } while (r30 < 5u);
    return;
}
