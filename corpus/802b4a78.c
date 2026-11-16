#include "tc_rt.h"

void fn_802b4a78(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    r3 = tc_call(0x802b61e4u, &a);
    r30 = r3;
    if (r3 != 0u) {
        wr8(r3, 2u);
        r3 = r3 + 2u;
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = 6u;
        f1 = tc_callf(0x80004338u, &a);
        wr16(r30 + 0x22u, (u16)param_2);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_2;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802a59d4u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_2;
        a.r[1] = 0x80541620u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802a5b64u, &a);
        if ((u32)rd8(0x80545c50u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0003u;
            a.r[1] = 0x80397b90u;
            a.r[2] = (u32)rd16(r30 + 0x22u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
    }
    return;
}
