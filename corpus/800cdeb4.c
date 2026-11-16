#include "tc_rt.h"

s32 fn_800cdeb4(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    do {
        a.r[0] = r31;
        (void)tc_call(0x800cddf4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 8);
    return param_1;
}
