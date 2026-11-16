#include "tc_rt.h"

void fn_800febe4(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xb4u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        r31 = rd32(param_1 + 0xb4u);
        r30 = 0u;
        while ((s32)r30 < (s32)rd32(param_1 + 0xb8u)) {
            a.r[0] = r31;
            (void)tc_call(0x800ff1e0u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x4cu;
        }
        r3 = rd32(param_1 + 0xb4u);
        if (r3 != 0u) {
            r3 = r3 - 0x10u;
            a.r[0] = r3;
            (void)tc_call(0x800fe39cu, &a);
        }
        wr32(param_1 + 0xb4u, 0u);
        wr32(param_1 + 0xb8u, 0u);
    }
    return;
}
