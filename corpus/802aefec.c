#include "tc_rt.h"

void fn_802aefec(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)rd8(param_3);
    if ((u32)param_2 != 0u) {
        if ((u32)rd8((u32)param_1 + 0x6cu) != 6u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = (u32)rd16(param_3 + 0xeu);
            a.r[3] = (u32)rd8(param_3 + 0xau);
            a.r[4] = (u32)rd8(param_3 + 0x11u);
            (void)tc_call(0x802ab8e8u, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        a.r[2] = 0u;
        f1 = tc_callf(0x802afe64u, &a);
        if ((u32)rd8(0x8054161cu) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90001u;
        a.r[1] = 0x80397740u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x802acd40u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r4 = (u32)rd8(r3 + 0x69u);
            if ((r4 & 1u) == 0u) {
                return;
            }
            wr8(r3 + 0x69u, (u8)(r4 & 0xfeu));
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
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = (u32)rd16(param_3 + 0xeu);
            a.r[3] = (u32)rd8(param_3 + 0xau);
            a.r[4] = (u32)rd8(param_3 + 0x11u);
            (void)tc_call(0x802aba98u, &a);
        }
    }
    return;
}
