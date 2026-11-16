#include "tc_rt.h"

void fn_800fec80(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xd0u) != 0u) {
        r31 = rd32(param_1 + 0xb4u);
        r30 = 0u;
        while ((s32)r30 < (s32)rd32(param_1 + 0xb8u)) {
            a.r[0] = r31;
            f1 = tc_callf(0x800ff1ecu, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x4cu;
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x38u), &a);
        a.r[0] = param_1;
        (void)tc_call(0x800fe6e4u, &a);
    }
    return;
}
