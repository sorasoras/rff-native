#include "tc_rt.h"

void fn_8029576c(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x8053dee4u);
    if ((r0 == 0u || r0 == (u32)param_1) || rd32(0x8053df78u) == (u32)param_1) {
        (void)tc_call(0x802935e8u, &a);
        (void)tc_call(0x80295620u, &a);
        wr32(0x8053df78u, (u32)param_1);
        wr8(0x8053dfa6u, 0u);
        wr8(0x8053dfa7u, 5u);
        a.r[0] = 0x8053deccu;
        a.r[1] = 1u;
        a.r[2] = 4u;
        (void)tc_call(0x8028d220u, &a);
        f1 = tc_callf(0x802a0fb0u, &a);
        r4 = tc_lastr4();
        r12 = rd32(0x8053dec0u);
        if (r12 != 0u) {
            a.r[0] = 1u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
