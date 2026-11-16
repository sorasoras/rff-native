#include "tc_rt.h"

void fn_80239f6c(s32 param_1)
{
    u32 r3 = 0, r8 = 0, r9 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == 0x80u) {
        r9 = rd32(0x804e5f18u) + 1u;
        r8 = ppc_mulhwu(0x24924925u, r9);
        wr32(0x804e5f18u, r9 - (((((((r9 - r8) >> 1u) & 0x7fffffffu) + r8) >> 2u) & 0x3fffffffu) * 7u));
        a.r[0] = 0x804e5d20u;
        a.r[1] = 0x804e5f00u;
        a.r[2] = 0x80u;
        a.r[3] = 0x80239e4cu;
        a.r[4] = 0x804e5dacu;
        r3 = tc_call(0x80271290u, &a);
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
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    } else {
        r12 = rd32(0x80571660u);
        if (r12 != 0u) {
            a.r[0] = 2u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0x804e5d20u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
