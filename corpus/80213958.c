#include "tc_rt.h"

void fn_80213958(u32 param_1)
{
    u32 r0 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x58u);
    wr8(param_1, 0u);
    if (r0 != 0u) {
        r31 = param_1 + 4u;
        r30 = 1u;
        while ((s32)r30 < (s32)rd32(rd32(param_1 + 0x4ecu))) {
            a.r[0] = rd32(r31 + 0x60u);
            (void)tc_call(0x8021a0bcu, &a);
            r31 = r31 + 4u;
            r30 = r30 + 1u;
        }
        a.r[0] = param_1;
        (void)tc_call(0x80213cacu, &a);
    }
    return;
}
