#include "tc_rt.h"

void fn_802b4ccc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802b6154u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80545c50u) < 2u) {
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
        a.r[0] = 0xa0001u;
        a.r[1] = 0x80397c50u;
        a.r[2] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc6cu, &a);
    } else {
        if ((u32)rd8(param_2 + 2u) == 0u) {
            wr16(r3 + 0x20u, 0x100u);
        } else {
            r0 = (u32)rd16(param_2 + 4u);
            if (r0 > 0x100u) {
                wr16(r3 + 0x20u, 0x100u);
            } else {
                wr16(r3 + 0x20u, (u16)r0);
            }
        }
        wr8(param_2 + 0x20u, 0u);
        wr8(param_2 + 2u, 0u);
        wr16(param_2, 0u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802a5c1cu, &a);
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
            a.r[1] = 0x80397c7cu;
            a.r[2] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc6cu, &a);
        }
        r3 = (u32)rd8(r31 + 1u) | 2u;
        wr8(r31 + 1u, (u8)r3);
        if ((r3 & 4u) != 0u) {
            wr8(r31, 3u);
            if (((u32)rd8(r31 + 1u) & 1u) != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b387cu, &a);
            } else {
                a.r[0] = r31 + 8u;
                a.r[1] = 5u;
                a.r[2] = 0x1eu;
                (void)tc_call(0x8028d220u, &a);
            }
        }
    }
    return;
}
