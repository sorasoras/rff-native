#include "tc_rt.h"

void fn_8023981c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    (void)tc_call(0x80239aa4u, &a);
    if (rd32(0x805715d0u) != 0u) {
        wr32(0x80571640u, param_1);
    } else {
        r3 = rd32(0x80571650u);
        if (r3 != 0u) {
            wr32(r3 + 0x28u, 0u);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        r3 = tc_call(0x8022c2b0u, &a);
        r0 = rd32(0x80571650u);
        wr32(0x805715c4u, 1u);
        if (r0 == 0u) {
            wr32(0x805715c8u, 1u);
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        for (;;) {
            r3 = tc_call(0x80239b44u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) break;
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802392b8u, &a);
        }
        r3 = rd32(0x80571650u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            (void)tc_call(0x802392b8u, &a);
        } else {
            if (param_1 != 0u) {
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.f[0] = f1;
                (void)tc_call(param_1, &a);
            }
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        wr32(0x805715c4u, 0u);
        if (rd32(0x805715c8u) != 0u) {
            wr32(0x805715c8u, 0u);
            (void)tc_call(0x80237c80u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
