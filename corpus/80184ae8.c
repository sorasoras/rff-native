#include "tc_rt.h"

void fn_80184ae8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8018462cu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x2ecu;
        (void)tc_call(0x8007ae84u, &a);
        r31 = (u32)param_1 + 0x64u;
        r30 = 0u;
        do {
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x70u;
        } while ((s32)r30 < 6);
    }
    return;
}
