#include "tc_rt.h"

s32 fn_801ebd60(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x10u;
    r3 = tc_call(0x801ed1a4u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = param_2;
        f1 = tc_callf(0x801ec028u, &a);
    }
    if (r30 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8037618cu;
        a.r[1] = 0x233u;
        a.r[2] = 0x80376168u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802e41c0u, &a);
    }
    wr32(0x817fdfe8u, 0x804de0f8u);
    a.r[0] = 0x804de0f4u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r30 + 4u;
    (void)tc_call(0x802deba4u, &a);
    r3 = rd32(0x805713d0u) + 1u;
    wr32(0x805713d0u, r3);
    r3 = r3 - 1u;
    return (s32)r3;
}
