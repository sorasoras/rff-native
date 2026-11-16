#include "tc_rt.h"

void fn_8023a508(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == 1u) {
        r3 = tc_call(0x8023cac8u, &a);
        wr32(0x804e5e90u, r3);
    } else {
        wr32(0x804e5e90u, 0xffffffffu);
    }
    a.r[0] = 0x80387364u;
    a.r[1] = 0x3fu;
    a.r[2] = 0u;
    a.r[3] = 0x8023a474u;
    a.r[4] = 0x804e5dacu;
    r3 = tc_call(0x802714e4u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r12 = rd32(0x80571660u);
        if (r12 != 0u) {
            a.r[0] = 2u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
