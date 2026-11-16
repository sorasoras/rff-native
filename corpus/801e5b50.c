#include "tc_rt.h"

void fn_801e5b50(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x20u;
    r3 = tc_call(0x801e5ed8u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = param_4;
        f1 = tc_callf(0x801e5f48u, &a);
    }
    if (rd32(0x804dcaf4u) == 0u && rd32(0x805713b8u) == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r30;
        a.r[7] = 0u;
        (void)tc_call(0x801e5f70u, &a);
        wr32(0x805713b8u, r30);
    } else {
        if (r30 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80375934u;
            a.r[1] = 0x233u;
            a.r[2] = 0x80375910u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802e41c0u, &a);
        }
        wr32(0x817fdfd8u, 0x804dcaf8u);
        a.r[0] = 0x804dcaf4u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r30 + 0x10u;
        (void)tc_call(0x802deba4u, &a);
    }
    return;
}
