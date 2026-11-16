#include "tc_rt.h"

void fn_800b2508(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_2 != 0u) {
        wr32(param_1 + 0x2bcu, 1u);
    } else {
        wr32(param_1 + 0x2bcu, 0u);
    }
    wr32(param_1 + 0x1a8u, param_2);
    a.r[0] = param_1 + 0xf0cu;
    a.r[1] = (((0u - param_2) | param_2) >> 0x1fu) & 1u;
    f1 = tc_callf(0x8011940cu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x140u), &a);
    if (r3 != 0u) {
        wr32(param_1 + 0x15f4u, param_1 + 0x15ecu);
        a.r[0] = param_1 + 0x428u;
        a.r[1] = 0u;
        (void)tc_call(0x8014c15cu, &a);
        wr32(param_1 + 0xed4u, 0u);
        wr32(param_1 + 0xed0u, 0xdu);
        a.r[0] = param_1;
        a.r[1] = 0xdu;
        (void)tc_call(0x800b31a0u, &a);
        wr8(param_1 + 0x162cu, 0u);
    }
    return;
}
