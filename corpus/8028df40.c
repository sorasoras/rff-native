#include "tc_rt.h"

void fn_8028df40(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x80297d20u, &a);
    r3 = tc_call(0x80297640u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffffu) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80297650u, &a);
        a.r[0] = 4u;
        a.r[1] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d578u), &a);
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        if (r3 == 0u) {
            return;
        }
        wr16(r3, 0x207u);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    } else {
        if (rd32(0x8053d580u) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802979f4u, &a);
        }
    }
    return;
}
