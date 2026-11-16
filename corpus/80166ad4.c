#include "tc_rt.h"

void fn_80166ad4(s32 param_1, u32 param_r4)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xda4u);
    if (r5 != 0u) {
        r0 = rd32(r5 + 4u);
    } else {
        r0 = 0xffffffffu;
    }
    if (r0 == 0x26u) {
        if (rd32(0x80571130u) != 0u) {
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        (void)tc_call(0x800b62f8u, &a);
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x800b62f8u, &a);
    return;
}
