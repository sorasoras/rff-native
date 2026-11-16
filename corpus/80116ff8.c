#include "tc_rt.h"

void fn_80116ff8(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x20u;
    r29 = 0u;
    r31 = (u32)param_1;
    do {
        r3 = rd32(r31 + 0x1cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800b2e68u, &a);
            a.r[0] = rd32(r31 + 0x1cu);
            (void)tc_call(0x80074de4u, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x80157e6cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x58u;
        r31 = r31 + 0x58u;
    } while ((s32)r29 < 10);
    (void)tc_call(0x80074c4cu, &a);
    (void)tc_call(0x80073b6cu, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = 0u;
    a.r[2] = 0x370u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
