#include "tc_rt.h"

void fn_800ffc78(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0x54u;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = rd32(param_1);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800f7e14u, &a);
    }
    wr32(param_1 + 0xf0u, r31);
    a.r[0] = param_1;
    f1 = tc_callf(0x800ffdecu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = param_1 + 0x24u;
    a.r[1] = rd32(param_1);
    a.r[2] = param_1 + 4u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x802ef220u, &a);
    r4 = tc_lastr4();
    r12 = rd32(param_1 + 0xf8u);
    wr32(param_1 + 0xd4u, 1u);
    if (r12 != 0u) {
        a.r[0] = rd32(param_1 + 0xfcu);
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
