#include "tc_rt.h"

u32 fn_8011f64c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(0x80571290u);
    r3 = tc_call(0x8011f560u, &a);
    r31 = r3;
    r4 = 0u;
    if (r3 != rd32(param_1)) {
        r3 = rd32(param_1 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 2u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        wr32(param_1, r31);
        r4 = 1u;
    }
    return r4;
}
