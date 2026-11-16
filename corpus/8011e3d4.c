#include "tc_rt.h"

void fn_8011e3d4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    do {
        wr32(r3, param_2);
        r3 = param_2;
        r12 = rd32(param_2);
        r12 = rd32(r12 + 8u);
    } while (r12 == 0x8011e3d4u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
