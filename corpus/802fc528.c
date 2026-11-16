#include "tc_rt.h"

u32 fn_802fc528(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr8(param_1 + 1u, 0u);
    wr8(param_1 + 2u, 0u);
    a.r[0] = param_1 + 0x40u;
    (void)tc_call(0x80226a70u, &a);
    wr8(param_1 + 6u, 0u);
    a.r[0] = param_1 + 0x70u;
    f1 = tc_callf(0x80226a70u, &a);
    r12 = rd32(param_1 + 0x38u);
    wr8(param_1 + 7u, 0u);
    wr8(param_1 + 6u, 0u);
    wr8(param_1 + 1u, 0u);
    wr8(param_1 + 2u, 1u);
    wr8(param_1 + 7u, 0u);
    if (r12 != 0u) {
        a.r[0] = rd32(param_1 + 0x34u);
        a.r[1] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
        wr8(param_1 + 4u, 0u);
    }
    wr32(param_1 + 0x38u, param_2);
    wr32(param_1 + 0xcu, 1u);
    wr8(param_1, 1u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return 1u;
}
