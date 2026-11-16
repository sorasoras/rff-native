#include "tc_rt.h"

u32 fn_8020ba60(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 4u) != 0u) {
        r3 = 0u;
    } else {
        r31 = 1u;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        if (r3 != 0u) {
            wr32(param_1 + 4u, r3);
            wr32(param_1, param_2);
        } else {
            r31 = 0u;
        }
        r3 = r31;
    }
    return r3;
}
