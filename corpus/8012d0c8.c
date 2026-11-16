#include "tc_rt.h"

void fn_8012d0c8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fe9bcu, &a);
    }
    r31 = (u32)param_1 + 0x3cu;
    r30 = 0u;
    for (;;) {
        r0 = rd32((u32)param_1 + 0xcu);
        if ((s32)r30 >= (s32)r0) break;
        a.r[0] = r31;
        (void)tc_call(0x8012d9b0u, &a);
        r31 = r31 + 0x114u;
        r30 = r30 + 1u;
    }
    if ((s32)r0 > 1) {
        r3 = rd32((u32)param_1 + 0x82cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
        r3 = rd32((u32)param_1 + 0x884u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
    }
    return;
}
