#include "tc_rt.h"

void fn_802b507c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802b6154u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r5 = (u32)rd8(r3);
        if (r5 == 3u) {
            if (((u32)rd8(r3 + 1u) & 1u) != 0u) {
                a.r[0] = r3;
                a.r[1] = param_2;
                (void)tc_call(0x802b38b0u, &a);
                a.r[0] = param_2;
                (void)tc_call(0x8028a35cu, &a);
                return;
            }
            a.r[0] = r3;
            a.r[1] = param_2;
            (void)tc_call(0x802b5444u, &a);
            a.r[0] = param_2;
            (void)tc_call(0x8028a35cu, &a);
            return;
        }
        if ((u32)rd8(0x80545c50u) < 2u) {
            a.r[0] = param_2;
            (void)tc_call(0x8028a35cu, &a);
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
        a.r[1] = 0x80397d40u;
        a.r[2] = r5;
        a.r[3] = param_1;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc84u, &a);
    } else {
        if ((u32)rd8(0x80545c50u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0001u;
            a.r[1] = 0x80397d78u;
            a.r[2] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
    }
    a.r[0] = param_2;
    (void)tc_call(0x8028a35cu, &a);
    return;
}
