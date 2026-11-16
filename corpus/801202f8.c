#include "tc_rt.h"

void fn_801202f8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x801209a0u, &a);
    wr32(param_2, param_3);
    wr32(param_2 + 0x4cu, 0u);
    wr32(param_2 + 0x60u, 0xffffffffu);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80120428u, &a);
    if ((rd32(param_2 + 0x4cu) & 0x20u) == 0u) {
        if (rd32(param_2 + 4u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x8012108cu, &a);
            if (r3 != 0u) {
                wr32(param_2 + 0x4cu, rd32(param_2 + 0x4cu) | 4u);
                a.r[0] = param_2 + 0x10u;
                a.r[1] = 1u;
                (void)tc_call(0x8011e5a0u, &a);
            }
        }
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
