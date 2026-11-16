#include "tc_rt.h"

u32 fn_80271a64(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802721a4u, &a);
    if (r3 == 0u) {
        r3 = 0xffffff80u;
    } else {
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        r3 = tc_call(0x80271950u, &a);
        f1 = tc_lastf();
        if ((s32)r3 >= 0) {
            wr32(param_2, r3);
            r3 = 0u;
            wr8(param_2 + 0x8au, 1u);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802721bcu, &a);
        }
    }
    return r3;
}
