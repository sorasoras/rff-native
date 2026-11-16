#include "tc_rt.h"

void fn_8029b75c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = 0x8053d958u;
    if ((u32)rd8(0x8053f2d2u) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80295360u, &a);
        f1 = tc_lastf();
        r5 = 0u;
        if (r3 == 0u || ((u32)rd8(r3 + 0x76u) & 0x10u) == 0u) {
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
                a.r[1] = 0x80394798u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            if (r3 == 0u) {
                return;
            }
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = 0xfu;
            (void)tc_call(0x8029ff48u, &a);
            return;
        }
    }
    r12 = rd32(0x8053f28cu);
    if (r12 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.f[0] = f1;
        r3 = tc_call(r12, &a);
        if ((r3 & 0xffu) == 0u) {
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            if (r3 == 0u) {
                return;
            }
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = 0xfu;
            (void)tc_call(0x8029ff48u, &a);
            return;
        }
    }
    a.r[0] = 0x8054010cu;
    a.r[1] = param_1;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x80540112u;
    a.r[1] = param_2;
    a.r[2] = 3u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x802a761cu, &a);
    return;
}
