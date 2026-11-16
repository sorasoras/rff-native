#include "tc_rt.h"

void fn_8029ca60(u32 param_1)
{
    u32 r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80394958u;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = (u32)rd8(param_1 + 4u);
        a.r[7] = (u32)rd8(param_1 + 5u);
        f1 = tc_callf(0x8028cce4u, &a);
    }
    if (r31 == 0u || ((u32)rd8(r31 + 0x76u) & 0x10u) == 0u) {
        if (r31 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x80295188u, &a);
            f1 = tc_lastf();
            r31 = r3;
        }
        if (((u32)rd8(r31 + 0x81u) & 0x40u) == 0u) {
            r12 = rd32(0x8053f270u);
            if (r12 != 0u) {
                if (r31 == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfe8u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(r12, &a);
                    if ((r3 & 0xffu) == 0u) {
                        a.r[0] = param_1;
                        a.r[1] = 0x817fdfe8u;
                        (void)tc_call(0x8029ffa4u, &a);
                        return;
                    }
                } else {
                    a.r[0] = param_1;
                    a.r[1] = r31 + 0x25u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(r12, &a);
                    if ((r3 & 0xffu) == 0u) {
                        a.r[0] = param_1;
                        a.r[1] = r31 + 0x25u;
                        (void)tc_call(0x8029ffa4u, &a);
                        return;
                    }
                }
            }
        }
        a.r[0] = param_1;
        (void)tc_call(0x802a0144u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = r31 + 0x25u;
        (void)tc_call(0x8029ffa4u, &a);
    }
    return;
}
