#include "tc_rt.h"

void fn_80120428(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    (void)tc_call(0x8011f64cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_2 + 4u;
    a.r[2] = rd32(param_2);
    r3 = tc_call(0x801203c0u, &a);
    if (r3 != 1u) {
        wr32(param_2 + 0x4cu, rd32(param_2 + 0x4cu) | 0x20u);
    }
    return;
}
