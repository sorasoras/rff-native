#include "tc_rt.h"

u32 fn_8020bfd4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (((u32)param_2 + 0x10000u) == 0xffffu) {
        r3 = 0u;
    } else {
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
        a.r[1] = (u32)param_2;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x8004dab4u, &a);
            wr32(param_3, r3);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        }
    }
    return r3;
}
