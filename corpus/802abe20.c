#include "tc_rt.h"

void fn_802abe20(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r29 = r3;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396d10u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    }
    if (r29 == 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x802acd94u, &a);
        r29 = r3;
        if (r3 == 0u) {
            r0 = (u32)rd8(param_3 + 1u);
            wr8(r3 + 0x51u, rd8(param_3));
            wr8(r3 + 0x52u, (u8)r0);
            r0 = (u32)rd8(param_3 + 3u);
            wr8(r3 + 0x53u, rd8(param_3 + 2u));
            wr8(r3 + 0x54u, (u8)r0);
            r0 = (u32)rd8(param_3 + 5u);
            wr8(r3 + 0x55u, rd8(param_3 + 4u));
            wr8(r3 + 0x56u, (u8)r0);
            r0 = (u32)rd8(param_3 + 7u);
            wr8(r3 + 0x57u, rd8(param_3 + 6u));
            wr8(r3 + 0x58u, (u8)r0);
            wr8(r3 + 0x59u, rd8(param_3 + 8u));
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0u;
            (void)tc_call(0x802afaa0u, &a);
            return;
        }
        wr8(param_1 + param_2 + 0x24u, rd8(r3));
    }
    r0 = (u32)rd8(param_3 + 1u);
    wr8(r29 + 0x51u, rd8(param_3));
    wr8(r29 + 0x52u, (u8)r0);
    r0 = (u32)rd8(param_3 + 3u);
    wr8(r29 + 0x53u, rd8(param_3 + 2u));
    wr8(r29 + 0x54u, (u8)r0);
    r0 = (u32)rd8(param_3 + 5u);
    wr8(r29 + 0x55u, rd8(param_3 + 4u));
    wr8(r29 + 0x56u, (u8)r0);
    r0 = (u32)rd8(param_3 + 7u);
    wr8(r29 + 0x57u, rd8(param_3 + 6u));
    wr8(r29 + 0x58u, (u8)r0);
    wr8(r29 + 0x59u, rd8(param_3 + 8u));
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x802afaa0u, &a);
    return;
}
