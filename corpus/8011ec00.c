#include "tc_rt.h"

void fn_8011ec00(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x50u);
    c0eq = r0 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = r0;
        a.r[1] = 0u;
        (void)tc_call(0x802f5fd8u, &a);
    }
    wr32((u32)param_1 + 0xcu, 0xffffffffu);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8011ea5cu, &a);
    wr32((u32)param_1 + 0x5cu, 1u);
    return;
}
