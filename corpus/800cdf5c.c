#include "tc_rt.h"

void fn_800cdf5c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    r28 = 0xffffffffu;
    r29 = 0xffffffffu;
    r27 = 0u;
    do {
        a.r[0] = param_2;
        a.r[1] = r31;
        r3 = tc_call(0x8025e84cu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r30 = r31;
            break;
        }
        r4 = rd32(r31 + 0x34u);
        r3 = rd32(r31 + 0x30u);
        if ((0u - (r4 - (r4 + ((r29 + (r28 > r4)) > r3)))) != 0u) {
            r30 = r31;
            r28 = r4;
            r29 = r3;
        }
        r27 = r27 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r27 < 8);
    a.r[0] = r30;
    a.r[1] = param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x800cde0cu, &a);
    f1 = tc_lastf();
    return;
}
