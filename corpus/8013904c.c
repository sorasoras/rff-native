#include "tc_rt.h"

u32 fn_8013904c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = 0u;
    r3 = tc_call(0x80139a8cu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x80138f24u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80139a50u, &a);
    }
    return 1u;
}
