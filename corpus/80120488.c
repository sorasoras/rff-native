#include "tc_rt.h"

void fn_80120488(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x801209a0u, &a);
    wr32(param_2, param_3);
    wr32(param_2 + 0x4cu, 1u);
    wr32(param_2 + 0x60u, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80120590u, &a);
    if ((rd32(param_2 + 0x4cu) & 0x20u) == 0u) {
        a.r[0] = param_2 + 0x10u;
        a.r[1] = 2u;
        (void)tc_call(0x8011e5a0u, &a);
        a.r[0] = rd32(param_1);
        a.r[1] = param_3;
        r3 = tc_call(0x803014dcu, &a);
        if ((r3 & 1u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            (void)tc_call(0x80120250u, &a);
        }
    }
    return;
}
