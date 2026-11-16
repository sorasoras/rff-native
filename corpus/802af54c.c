#include "tc_rt.h"

void fn_802af54c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(param_3);
        a.r[2] = (u32)rd8(param_3 + 9u);
        (void)tc_call(0x802ac2c4u, &a);
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(param_3);
        a.r[2] = 0u;
        a.r[3] = (u32)rd8(param_3 + 9u);
        (void)tc_call(0x802b0480u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(param_3);
        r3 = tc_call(0x802acd40u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r4 = (u32)rd8(r3 + 0x69u);
            if ((r4 & 0x10u) == 0u) {
                return;
            }
            wr8(r3 + 0x69u, (u8)(r4 & 0xffffffefu));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b16fcu, &a);
        }
    }
    return;
}
