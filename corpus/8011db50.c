#include "tc_rt.h"

u32 fn_8011db50(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8011d534u, &a);
    f1 = tc_lastf();
    r3 = rd32(r3 + 0x10u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 1u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
    } else {
        r3 = 0u;
    }
    return r3;
}
