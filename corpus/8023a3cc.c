#include "tc_rt.h"

void fn_8023a3cc(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u || (u32)param_1 == 0xfffffffau) {
        if ((u32)param_1 == 0xfffffffau) {
            wr32(0x80571658u, 1u);
        }
        a.r[0] = 0x80387348u;
        a.r[1] = 0x804e5d20u;
        a.r[2] = 3u;
        a.r[3] = 0x8023a2b0u;
        a.r[4] = 0x804e5dacu;
        r3 = tc_call(0x80271bf4u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            return;
        }
        r12 = rd32(0x80571660u);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = 2u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    } else {
        r12 = rd32(0x80571660u);
        if (r12 != 0u) {
            a.r[0] = 2u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
